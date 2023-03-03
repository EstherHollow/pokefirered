#ifndef GUARD_WANDERING_ENCOUNTER_H
#define GUARD_WANDERING_ENCOUNTER_H

#include "global.h"

#define UPDATE_DELAY 300
#define MAX_WANDERING_ENCOUNTERS 5
#define WANDERING_ENCOUNTER_RANGE_X 7
#define WANDERING_ENCOUNTER_RANGE_Y 9
#define FIND_SPAWN_ATTEMPTS 15


extern u16 gWanderingEncounterState;

void UpdateWildEncounters(void);
u8 CountExistingWildEncounters(void);
void FindAvailableGrass(s16 *x, s16 *y);
u8 FindAvailableLocalId(void);
bool8 IsWanderEncounterLocalId(u8 localId);

#endif // GUARD_WANDERING_ENCOUNTER_H
