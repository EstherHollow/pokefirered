#ifndef GUARD_BATTLE_UTIL2_H
#define GUARD_BATTLE_UTIL2_H

#include "global.h"

void AllocateBattleResources(void);
void FreeBattleResources(void);
void AdjustFriendshipOnBattleFaint(u8 bank);

#ifdef NDEBUG
#define DebugBattleState(label)
#else
void DebugBattleState(const char* label);
#endif

#endif // GUARD_BATTLE_UTIL_H
