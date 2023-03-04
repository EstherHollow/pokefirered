#include "global.h"
#include "quest_log.h"
#include "fieldmap.h"
#include "field_player_avatar.h"
#include "metatile_behavior.h"
#include "wild_encounter.h"

void SetQuestLogObjectEventsData(struct QuestLog * questLog)
{
    u32 i;
    struct ObjectEvent emptyObject = {0};
    struct ObjectEvent *currentObject;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (!IsWanderingEncounterLocalId(gObjectEvents[i].localId)) {
            currentObject = &gObjectEvents[i];
        }
        else {
            currentObject = &emptyObject;
        }

        questLog->unk_008[i].active = currentObject->active;
        questLog->unk_008[i].triggerGroundEffectsOnStop = currentObject->triggerGroundEffectsOnStop;
        questLog->unk_008[i].disableCoveringGroundEffects = currentObject->disableCoveringGroundEffects;
        questLog->unk_008[i].landingJump = currentObject->landingJump;
        questLog->unk_008[i].frozen = currentObject->frozen;
        questLog->unk_008[i].facingDirectionLocked = currentObject->facingDirectionLocked;
        questLog->unk_008[i].disableAnim = currentObject->disableAnim;
        questLog->unk_008[i].enableAnim = currentObject->enableAnim;
        questLog->unk_008[i].inanimate = currentObject->inanimate;
        questLog->unk_008[i].invisible = currentObject->invisible;
        questLog->unk_008[i].offScreen = currentObject->offScreen;
        questLog->unk_008[i].trackedByCamera = currentObject->trackedByCamera;
        questLog->unk_008[i].isPlayer = currentObject->isPlayer;
        questLog->unk_008[i].spriteAnimPausedBackup = currentObject->spriteAnimPausedBackup;
        questLog->unk_008[i].spriteAffineAnimPausedBackup = currentObject->spriteAffineAnimPausedBackup;
        questLog->unk_008[i].disableJumpLandingGroundEffect = currentObject->disableJumpLandingGroundEffect;
        questLog->unk_008[i].fixedPriority = currentObject->fixedPriority;
        questLog->unk_008[i].mapobj_unk_18 = currentObject->facingDirection;
        questLog->unk_008[i].mapobj_unk_0B_0 = currentObject->currentElevation;
        questLog->unk_008[i].elevation = currentObject->previousElevation;
        questLog->unk_008[i].graphicsId = currentObject->graphicsId;
        questLog->unk_008[i].animPattern = currentObject->movementType;
        questLog->unk_008[i].trainerType = currentObject->trainerType;
        questLog->unk_008[i].localId = currentObject->localId;
        questLog->unk_008[i].mapNum = currentObject->mapNum;
        questLog->unk_008[i].mapGroup = currentObject->mapGroup;
        questLog->unk_008[i].x = currentObject->currentCoords.x;
        questLog->unk_008[i].y = currentObject->currentCoords.y;
        questLog->unk_008[i].trainerRange_berryTreeId = currentObject->trainerRange_berryTreeId;
        questLog->unk_008[i].previousMetatileBehavior = currentObject->previousMetatileBehavior;
        questLog->unk_008[i].directionSequenceIndex = currentObject->directionSequenceIndex;
        questLog->unk_008[i].animId = currentObject->playerCopyableMovement;
    }
}

void SetSav1ObjectEventsFromQuestLog(const struct QuestLog * questLog, const struct ObjectEventTemplate * templates)
{
    u32 i, j;
    const struct QuestLogObjectEvent * questLogObjectEvents = questLog->unk_008;

    CpuFill16(0, gObjectEvents, sizeof(gObjectEvents));

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        gObjectEvents[i].active = questLogObjectEvents[i].active;
        gObjectEvents[i].triggerGroundEffectsOnStop = questLogObjectEvents[i].triggerGroundEffectsOnStop;
        gObjectEvents[i].disableCoveringGroundEffects = questLogObjectEvents[i].disableCoveringGroundEffects;
        gObjectEvents[i].landingJump = questLogObjectEvents[i].landingJump;
        gObjectEvents[i].frozen = questLogObjectEvents[i].frozen;
        gObjectEvents[i].facingDirectionLocked = questLogObjectEvents[i].facingDirectionLocked;
        gObjectEvents[i].disableAnim = questLogObjectEvents[i].disableAnim;
        gObjectEvents[i].enableAnim = questLogObjectEvents[i].enableAnim;
        gObjectEvents[i].inanimate = questLogObjectEvents[i].inanimate;
        gObjectEvents[i].invisible = questLogObjectEvents[i].invisible;
        gObjectEvents[i].offScreen = questLogObjectEvents[i].offScreen;
        gObjectEvents[i].trackedByCamera = questLogObjectEvents[i].trackedByCamera;
        gObjectEvents[i].isPlayer = questLogObjectEvents[i].isPlayer;
        gObjectEvents[i].spriteAnimPausedBackup = questLogObjectEvents[i].spriteAnimPausedBackup;
        gObjectEvents[i].spriteAffineAnimPausedBackup = questLogObjectEvents[i].spriteAffineAnimPausedBackup;
        gObjectEvents[i].disableJumpLandingGroundEffect = questLogObjectEvents[i].disableJumpLandingGroundEffect;
        gObjectEvents[i].fixedPriority = questLogObjectEvents[i].fixedPriority;
        gObjectEvents[i].facingDirection = questLogObjectEvents[i].mapobj_unk_18;
        gObjectEvents[i].currentElevation = questLogObjectEvents[i].mapobj_unk_0B_0;
        gObjectEvents[i].previousElevation = questLogObjectEvents[i].elevation;
        gObjectEvents[i].graphicsId = questLogObjectEvents[i].graphicsId;
        gObjectEvents[i].movementType = questLogObjectEvents[i].animPattern;
        gObjectEvents[i].trainerType = questLogObjectEvents[i].trainerType;
        gObjectEvents[i].localId = questLogObjectEvents[i].localId;
        gObjectEvents[i].mapNum = questLogObjectEvents[i].mapNum;
        gObjectEvents[i].mapGroup = questLogObjectEvents[i].mapGroup;
        gObjectEvents[i].currentCoords.x = questLogObjectEvents[i].x;
        gObjectEvents[i].currentCoords.y = questLogObjectEvents[i].y;
        gObjectEvents[i].trainerRange_berryTreeId = questLogObjectEvents[i].trainerRange_berryTreeId;
        gObjectEvents[i].previousMetatileBehavior = questLogObjectEvents[i].previousMetatileBehavior;
        gObjectEvents[i].directionSequenceIndex = questLogObjectEvents[i].directionSequenceIndex;
        gObjectEvents[i].playerCopyableMovement = questLogObjectEvents[i].animId;

        for (j = 0; j < 0x40; j++)
        {
            if (gObjectEvents[i].localId == templates[j].localId)
            {
                gObjectEvents[i].initialCoords.x = templates[j].x + 7;
                gObjectEvents[i].initialCoords.y = templates[j].y + 7;
                gObjectEvents[i].rangeX = templates[j].objUnion.normal.movementRangeX;
                gObjectEvents[i].rangeY = templates[j].objUnion.normal.movementRangeY;
            }
        }

        gObjectEvents[i].currentMetatileBehavior = MapGridGetMetatileBehaviorAt(gObjectEvents[i].currentCoords.x, gObjectEvents[i].currentCoords.y);
        if (gObjectEvents[i].previousMetatileBehavior == MapGridGetMetatileBehaviorAt((s16)(gObjectEvents[i].currentCoords.x), (s16)(gObjectEvents[i].currentCoords.y)))
        {
            gObjectEvents[i].previousCoords.x = gObjectEvents[i].currentCoords.x;
            gObjectEvents[i].previousCoords.y = gObjectEvents[i].currentCoords.y;
        }
        else if (gObjectEvents[i].previousMetatileBehavior == MapGridGetMetatileBehaviorAt((s16)(gObjectEvents[i].currentCoords.x - 1), (s16)(gObjectEvents[i].currentCoords.y)))
        {
            gObjectEvents[i].previousCoords.x = gObjectEvents[i].currentCoords.x - 1;
            gObjectEvents[i].previousCoords.y = gObjectEvents[i].currentCoords.y;
        }
        else if (gObjectEvents[i].previousMetatileBehavior == MapGridGetMetatileBehaviorAt((s16)(gObjectEvents[i].currentCoords.x + 1), (s16)(gObjectEvents[i].currentCoords.y)))
        {
            gObjectEvents[i].previousCoords.x = gObjectEvents[i].currentCoords.x + 1;
            gObjectEvents[i].previousCoords.y = gObjectEvents[i].currentCoords.y;
        }
        else if (gObjectEvents[i].previousMetatileBehavior == MapGridGetMetatileBehaviorAt((s16)(gObjectEvents[i].currentCoords.x), (s16)(gObjectEvents[i].currentCoords.y - 1)))
        {
            gObjectEvents[i].previousCoords.x = gObjectEvents[i].currentCoords.x;
            gObjectEvents[i].previousCoords.y = gObjectEvents[i].currentCoords.y - 1;
        }
        else if (gObjectEvents[i].previousMetatileBehavior == MapGridGetMetatileBehaviorAt((s16)(gObjectEvents[i].currentCoords.x), (s16)(gObjectEvents[i].currentCoords.y + 1)))
        {
            gObjectEvents[i].previousCoords.x = gObjectEvents[i].currentCoords.x;
            gObjectEvents[i].previousCoords.y = gObjectEvents[i].currentCoords.y + 1;
        }
    }

    CpuCopy16(gObjectEvents, gSaveBlock1Ptr->objectEvents, sizeof(gObjectEvents));
}

void sub_815A540(void)
{
    if (gQuestLogState == QL_STATE_PLAYBACK)
    {
        s16 x, y;

        PlayerGetDestCoords(&x, &y);
        if (!MetatileBehavior_IsSurfable(MapGridGetMetatileBehaviorAt(x, y)) && TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
        {
            struct ObjectEvent * objectEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);
            DestroySprite(&gSprites[objectEvent->fieldEffectSpriteId]);
        }
    }
}
