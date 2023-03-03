#ifndef GUARD_WANDERING_ENCOUNTER_H
#define GUARD_WANDERING_ENCOUNTER_H

#include "global.h"

#define UPDATE_DELAY 300
#define MAX_WANDERING_ENCOUNTERS 1

extern u16 gWanderingEncounterState;

void UpdateWildEncounters(void);
u8 CountExistingWildEncounters(void);
void FindAvailableGrass(struct Coords16 *coords);
void CheckAvailableGrass(void);

#endif // GUARD_WANDERING_ENCOUNTER_H
