#ifndef GUARD_WANDERING_ENCOUNTER_H
#define GUARD_WANDERING_ENCOUNTER_H

#include "global.h"

#define UPDATE_DELAY 300
#define MAX_WANDERING_ENCOUNTERS 3

extern u16 gWanderingEncounterState;

void UpdateWildEncounters(void);
u8 CountExistingWildEncounters(void);
void FindAvailableGrass(s16 *x, s16 *y);
u8 FindAvailableLocalId(void);
bool8 IsWanderEncounterLocalId(u8 localId);
//void CheckAvailableGrass(void);

#endif // GUARD_WANDERING_ENCOUNTER_H
