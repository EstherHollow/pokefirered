#include "global.h"
#include "bg.h"
#include "battle.h"
#include "battle_anim.h"
#include "malloc.h"
#include "pokemon.h"
#include "trainer_tower.h"

void AllocateBattleResources(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER)
        InitTrainerTowerBattleStruct();
    if (gBattleTypeFlags & BATTLE_TYPE_POKEDUDE)
    {
        s32 i;

        for (i = 0; i < 4; i++)
            gPokedudeBattlerStates[i] = AllocZeroed(sizeof(struct PokedudeBattlerState));
    }

    gBattleStruct = AllocZeroed(sizeof(*gBattleStruct));

    gBattleResources = AllocZeroed(sizeof(*gBattleResources));
    gBattleResources->secretBase = AllocZeroed(sizeof(*gBattleResources->secretBase));
    gBattleResources->flags = AllocZeroed(sizeof(*gBattleResources->flags));
    gBattleResources->battleScriptsStack = AllocZeroed(sizeof(*gBattleResources->battleScriptsStack));
    gBattleResources->battleCallbackStack = AllocZeroed(sizeof(*gBattleResources->battleCallbackStack));
    gBattleResources->beforeLvlUp = AllocZeroed(sizeof(*gBattleResources->beforeLvlUp));
    gBattleResources->ai = AllocZeroed(sizeof(*gBattleResources->ai));
    gBattleResources->battleHistory = AllocZeroed(sizeof(*gBattleResources->battleHistory));
    gBattleResources->AI_ScriptsStack = AllocZeroed(sizeof(*gBattleResources->AI_ScriptsStack));

    gLinkBattleSendBuffer = AllocZeroed(BATTLE_BUFFER_LINK_SIZE);
    gLinkBattleRecvBuffer = AllocZeroed(BATTLE_BUFFER_LINK_SIZE);

    gBattleAnimBgTileBuffer = AllocZeroed(0x2000);
    gBattleAnimBgTilemapBuffer = AllocZeroed(0x1000);

    SetBgTilemapBuffer(1, gBattleAnimBgTilemapBuffer);
    SetBgTilemapBuffer(2, gBattleAnimBgTilemapBuffer);
}

void FreeBattleResources(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER)
        FreeTrainerTowerBattleStruct();
    if (gBattleTypeFlags & BATTLE_TYPE_POKEDUDE)
    {
        s32 i;

        for (i = 0; i < 4; i++)
        {
            FREE_AND_SET_NULL(gPokedudeBattlerStates[i]);
        }
    }
    if (gBattleResources != NULL)
    {
        FREE_AND_SET_NULL(gBattleStruct);

        FREE_AND_SET_NULL(gBattleResources->secretBase);
        FREE_AND_SET_NULL(gBattleResources->flags);
        FREE_AND_SET_NULL(gBattleResources->battleScriptsStack);
        FREE_AND_SET_NULL(gBattleResources->battleCallbackStack);
        FREE_AND_SET_NULL(gBattleResources->beforeLvlUp);
        FREE_AND_SET_NULL(gBattleResources->ai);
        FREE_AND_SET_NULL(gBattleResources->battleHistory);
        FREE_AND_SET_NULL(gBattleResources->AI_ScriptsStack);
        FREE_AND_SET_NULL(gBattleResources);

        FREE_AND_SET_NULL(gLinkBattleSendBuffer);
        FREE_AND_SET_NULL(gLinkBattleRecvBuffer);

        FREE_AND_SET_NULL(gBattleAnimBgTileBuffer);
        FREE_AND_SET_NULL(gBattleAnimBgTilemapBuffer);
    }
}

void AdjustFriendshipOnBattleFaint(u8 battlerId)
{
    u8 opposingBattlerId;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        u8 opposingBattlerId2;

        opposingBattlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        opposingBattlerId2 = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);

        if (gBattleMons[opposingBattlerId2].level > gBattleMons[opposingBattlerId].level)
            opposingBattlerId = opposingBattlerId2;
    }
    else
    {
        opposingBattlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
    }

    if (gBattleMons[opposingBattlerId].level > gBattleMons[battlerId].level)
    {
        if (gBattleMons[opposingBattlerId].level - gBattleMons[battlerId].level > 29)
            AdjustFriendship(&gPlayerParty[gBattlerPartyIndexes[battlerId]], FRIENDSHIP_EVENT_FAINT_LARGE);
        else
            AdjustFriendship(&gPlayerParty[gBattlerPartyIndexes[battlerId]], FRIENDSHIP_EVENT_FAINT_SMALL);
    }
    else
    {
        AdjustFriendship(&gPlayerParty[gBattlerPartyIndexes[battlerId]], FRIENDSHIP_EVENT_FAINT_SMALL);
    }
}

#ifndef NDEBUG
void DebugBattleState(const char* label)
{
    s32 i, j;

    DebugPrintf("DebugBattleState(%s) {", label);

    // extern struct DisableStruct gDisableStructs[MAX_BATTLERS_COUNT];
    // extern struct ProtectStruct gProtectStructs[MAX_BATTLERS_COUNT];
    // extern struct SpecialStatus gSpecialStatuses[MAX_BATTLERS_COUNT];
    // extern struct SideTimer gSideTimers[];
    // extern struct WishFutureKnock gWishFutureKnock;

    DebugPrintf("\tgActiveBattler = %d", gActiveBattler);
    DebugPrintf("\tgBattlerTarget = %d", gBattlerTarget);
    DebugPrintf("\tgAbsentBattlerFlags = %d", gAbsentBattlerFlags);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleMons[%d] = %S lv %d", i, gSpeciesNames[gBattleMons[i].species], gBattleMons[i].level);

    // extern struct BattleResources *gBattleResources;
    // extern struct BattleResults gBattleResults;

    DebugPrintf("\tgBattleStruct->turnEffectsTracker = %d", gBattleStruct->turnEffectsTracker);
    DebugPrintf("\tgBattleStruct->turnCountersTracker = %d", gBattleStruct->turnCountersTracker);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->moveTarget[%d] = %d", i, gBattleStruct->moveTarget[i]);
    DebugPrintf("\tgBattleStruct->expGetterMonId = %d", gBattleStruct->expGetterMonId);
    DebugPrintf("\tgBattleStruct->wildVictorySong = %d", gBattleStruct->wildVictorySong);
    DebugPrintf("\tgBattleStruct->dynamicMoveType = %d", gBattleStruct->dynamicMoveType);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->wrappedBy[%d] = %d", i, gBattleStruct->wrappedBy[i]);
//    for (i = 0; i < PARTY_SIZE * MAX_MON_MOVES; i++)
//        DebugPrintf("\tgBattleStruct->assistPossibleMoves[%d] = %d", i, gBattleStruct->assistPossibleMoves[i]);
    DebugPrintf("\tgBattleStruct->focusPunchBattlerId = %d", gBattleStruct->focusPunchBattlerId);
    DebugPrintf("\tgBattleStruct->battlerPreventingSwitchout = %d", gBattleStruct->battlerPreventingSwitchout);
    DebugPrintf("\tgBattleStruct->moneyMultiplier = %d", gBattleStruct->moneyMultiplier);
    DebugPrintf("\tgBattleStruct->savedTurnActionNumber = %d", gBattleStruct->savedTurnActionNumber);
    DebugPrintf("\tgBattleStruct->switchInAbilitiesCounter = %d", gBattleStruct->switchInAbilitiesCounter);
    DebugPrintf("\tgBattleStruct->faintedActionsState = %d", gBattleStruct->faintedActionsState);
    DebugPrintf("\tgBattleStruct->faintedActionsBattlerId = %d", gBattleStruct->faintedActionsBattlerId);
    DebugPrintf("\tgBattleStruct->expValue = %d", gBattleStruct->expValue);
    DebugPrintf("\tgBattleStruct->scriptPartyIdx = %d", gBattleStruct->scriptPartyIdx);
    DebugPrintf("\tgBattleStruct->sentInPokes = %d", gBattleStruct->sentInPokes);
//    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
//        DebugPrintf("\tgBattleStruct->selectionScriptFinished[%d] = %d", i, gBattleStruct->selectionScriptFinished[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->battlerPartyIndexes[%d] = %d", i, gBattleStruct->battlerPartyIndexes[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->monToSwitchIntoId[%d] = %d", i, gBattleStruct->monToSwitchIntoId[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++) for (j = 0; j < 3; j++)
        DebugPrintf("\tgBattleStruct->battlerPartyOrders[%d][%d] = 0x%x", i, j, gBattleStruct->battlerPartyOrders[i][j]);
    DebugPrintf("\tgBattleStruct->runTries = %d", gBattleStruct->runTries);
//    for (i = 0; i < POKEMON_NAME_LENGTH + 1; i++)
//        DebugPrintf("\tgBattleStruct->caughtMonNick[%d] = %d", i, gBattleStruct->caughtMonNick[i]);
//    DebugPrintf("\tgBattleStruct->safariRockThrowCounter = %d", gBattleStruct->safariRockThrowCounter);
//    DebugPrintf("\tgBattleStruct->safariBaitThrowCounter = %d", gBattleStruct->safariBaitThrowCounter);
//    DebugPrintf("\tgBattleStruct->safariEscapeFactor = %d", gBattleStruct->safariEscapeFactor);
//    DebugPrintf("\tgBattleStruct->safariCatchFactor = %d", gBattleStruct->safariCatchFactor);
//    DebugPrintf("\tgBattleStruct->linkBattleVsSpriteId_V = %d", gBattleStruct->linkBattleVsSpriteId_V);
//    DebugPrintf("\tgBattleStruct->linkBattleVsSpriteId_S = %d", gBattleStruct->linkBattleVsSpriteId_S);
    DebugPrintf("\tgBattleStruct->formToChangeInto = %d", gBattleStruct->formToChangeInto);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->chosenMovePositions[%d] = %d", i, gBattleStruct->chosenMovePositions[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->stateIdAfterSelScript[%d] = %d", i, gBattleStruct->stateIdAfterSelScript[i]);
    DebugPrintf("\tgBattleStruct->playerPartyIdx = %d", gBattleStruct->playerPartyIdx);
    DebugPrintf("\tgBattleStruct->stringMoveType = %d", gBattleStruct->stringMoveType);
    DebugPrintf("\tgBattleStruct->expGetterBattlerId = %d", gBattleStruct->expGetterBattlerId);
    DebugPrintf("\tgBattleStruct->absentBattlerFlags = 0x%x", gBattleStruct->absentBattlerFlags);
    for (i = 0; i < 2; i++)
        DebugPrintf("\tgBattleStruct->AI_monToSwitchIntoId[%d] = %d", i, gBattleStruct->AI_monToSwitchIntoId[i]);
    for (i = 0; i < 4; i++)
        DebugPrintf("\tgBattleStruct->simulatedInputState[%d] = %d", i, gBattleStruct->simulatedInputState[i]);
//    for (i = 0; i < MAX_BATTLERS_COUNT * 2 * 2; i++)
//        DebugPrintf("\tgBattleStruct->lastTakenMove[%d] = %d", i, gBattleStruct->lastTakenMove[i]);
    for (i = 0; i < 2; i++)
        DebugPrintf("\tgBattleStruct->hpOnSwitchout[%d] = %d", i, gBattleStruct->hpOnSwitchout[i]);
    DebugPrintf("\tgBattleStruct->abilityPreventingSwitchout = %d", gBattleStruct->abilityPreventingSwitchout);
    DebugPrintf("\tgBattleStruct->hpScale = %d", gBattleStruct->hpScale);
    DebugPrintf("\tgBattleStruct->savedBattleTypeFlags = %d", gBattleStruct->savedBattleTypeFlags);
    // void (*savedCallback)(void);
    DebugPrintf("\tgBattleStruct->synchronizeMoveEffect = %d", gBattleStruct->synchronizeMoveEffect);
    DebugPrintf("\tgBattleStruct->multiplayerId = %d", gBattleStruct->multiplayerId);
    DebugPrintf("\tgBattleStruct->overworldWeatherDone = %d", gBattleStruct->overworldWeatherDone);
    DebugPrintf("\tgBattleStruct->atkCancellerTracker = %d", gBattleStruct->atkCancellerTracker);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->usedHeldItems[%d] = %d", i, gBattleStruct->usedHeldItems[i]);
    for (i = 0; i < 4; i++)
        DebugPrintf("\tgBattleStruct->chosenItem[%d] = %d", i, gBattleStruct->chosenItem[i]);
    for (i = 0; i < 2; i++)
        DebugPrintf("\tgBattleStruct->AI_itemType[%d] = %d", i, gBattleStruct->AI_itemType[i]);
    for (i = 0; i < 2; i++)
        DebugPrintf("\tgBattleStruct->AI_itemFlags[%d] = 0x%x", i, gBattleStruct->AI_itemFlags[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->choicedMove[%d] = %d", i, gBattleStruct->choicedMove[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleStruct->changedItems[%d] = %d", i, gBattleStruct->changedItems[i]);
    DebugPrintf("\tgBattleStruct->intimidateBattler = %d", gBattleStruct->intimidateBattler);
    DebugPrintf("\tgBattleStruct->switchInItemsCounter = %d", gBattleStruct->switchInItemsCounter);
    DebugPrintf("\tgBattleStruct->field_DA = %d", gBattleStruct->field_DA);
    DebugPrintf("\tgBattleStruct->turnSideTracker = %d", gBattleStruct->turnSideTracker);
    // u8 fillerDC[0xDF-0xDC];
    DebugPrintf("\tgBattleStruct->givenExpMons = %d", gBattleStruct->givenExpMons);
//    for (i = 0; i < MAX_BATTLERS_COUNT * MAX_BATTLERS_COUNT * 2; i++)
//        DebugPrintf("\tgBattleStruct->lastTakenMoveFrom[%d] = %d", i, gBattleStruct->lastTakenMoveFrom[i]);
    // u16 castformPalette[MAX_BATTLERS_COUNT][16];
    DebugPrintf("\tgBattleStruct->wishPerishSongState = %d", gBattleStruct->wishPerishSongState);
    DebugPrintf("\tgBattleStruct->wishPerishSongBattlerId = %d", gBattleStruct->wishPerishSongBattlerId);

    DebugPrintf("\tgBattleOutcome = %d", gBattleOutcome);
    DebugPrintf("\tgLastUsedItem = %d", gLastUsedItem);
    DebugPrintf("\tgBattleTypeFlags = 0x%x", gBattleTypeFlags);
    DebugPrintf("\tgTrainerBattleOpponent_A = %d", gTrainerBattleOpponent_A);
    DebugPrintf("\tgMoveToLearn = %d", gMoveToLearn);
    DebugPrintf("\tgBattleMovePower = %d", gBattleMovePower);

    // extern struct BattleEnigmaBerry gEnigmaBerries[MAX_BATTLERS_COUNT];

    DebugPrintf("\tgCurrentMove = %d", gCurrentMove);
    DebugPrintf("\tgChosenMove = %d", gChosenMove);
    DebugPrintf("\tgCalledMove = %d", gCalledMove);
    DebugPrintf("\tgCritMultiplier = %d", gCritMultiplier);
    DebugPrintf("\tgBattleWeather = %d", gBattleWeather);
    DebugPrintf("\tgLastUsedAbility = %d", gLastUsedAbility);
    DebugPrintf("\tgBattlerInMenuId = %d", gBattlerInMenuId);
    DebugPrintf("\tgPotentialItemEffectBattler = %d", gPotentialItemEffectBattler);
    DebugPrintf("\tgBattlersCount = %d", gBattlersCount);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattlerPartyIndexes[%d] = %d", i, gBattlerPartyIndexes[i]);
    DebugPrintf("\tgBattleMoveDamage = %d", gBattleMoveDamage);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgTransformedPersonalities[%d] = %d", i, gTransformedPersonalities[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattlerPositions[%d] = %d", i, gBattlerPositions[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattleMonForms[%d] = %d", i, gBattleMonForms[i]);
    DebugPrintf("\tgBattlerAttacker = %d", gBattlerAttacker);
    DebugPrintf("\tgEffectBattler = %d", gEffectBattler);
    DebugPrintf("\tgMultiHitCounter = %d", gMultiHitCounter);

    // extern struct BattleScripting gBattleScripting;

    DebugPrintf("\tgBattlerFainted = %d", gBattlerFainted);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgStatuses3[%d] = %d", i, gStatuses3[i]);
    for (i = 0; i < 2; i++)
        DebugPrintf("\tgSentPokesToOpponent[%d] = %d", i, gSentPokesToOpponent[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgLastMoves[%d] = %d", i, gLastMoves[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgBattlerByTurnOrder[%d] = %d", i, gBattlerByTurnOrder[i]);
    for (i = 0; i < 2; i++)
        DebugPrintf("\tgSideStatuses[%d] = %d", i, gSideStatuses[i]);
    DebugPrintf("\tgHitMarker = %d", gHitMarker);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgChosenMoveByBattler[%d] = %d", i, gChosenMoveByBattler[i]);
    DebugPrintf("\tgMoveResultFlags = %d", gMoveResultFlags);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgTakenDmg[%d] = %d", i, gTakenDmg[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgTakenDmgByBattler[%d] = %d", i, gTakenDmgByBattler[i]);
    DebugPrintf("\tgDynamicBasePower = %d", gDynamicBasePower);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgLastLandedMoves[%d] = %d", i, gLastLandedMoves[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgLastHitBy[%d] = %d", i, gLastHitBy[i]);
    DebugPrintf("\tgNumberOfMovesToChoose = %d", gNumberOfMovesToChoose);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgLastHitByType[%d] = %d", i, gLastHitByType[i]);
    DebugPrintf("\tgHpDealt = %d", gHpDealt);
    DebugPrintf("\tgPaydayMoney = %d", gPaydayMoney);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgLockedMoves[%d] = %d", i, gLockedMoves[i]);
    DebugPrintf("\tgCurrentTurnActionNumber = %d", gCurrentTurnActionNumber);
    DebugPrintf("\tgExpShareExp = %d", gExpShareExp);
    DebugPrintf("\tgLeveledUpInBattle = %d", gLeveledUpInBattle);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgLastResultingMoves[%d] = %d", i, gLastResultingMoves[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgActionsByTurnOrder[%d] = %d", i, gActionsByTurnOrder[i]);
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        DebugPrintf("\tgChosenActionByBattler[%d] = %d", i, gChosenActionByBattler[i]);
    DebugPrintf("\tgBattleTerrain = %d", gBattleTerrain);
    DebugPrintf("\tgRandomTurnNumber = %d", gRandomTurnNumber);

    DebugPrintf("}");
    DebugPrintf("");
}
#endif
