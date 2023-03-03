#include "global.h"
#include "gflib.h"

#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/trainer_types.h"

#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "overworld.h"
#include "quest_log.h"
#include "random.h"
#include "wandering_encounter.h"
#include "wild_encounter.h"

EWRAM_DATA u16 gWanderingEncounterState = 0;

void UpdateWildEncounters(void) {
    struct ObjectEventTemplate template;

    if (!QL_IS_PLAYBACK_STATE && gWanderingEncounterState >= UPDATE_DELAY) {
        gWanderingEncounterState = 0;

        if (CountExistingWildEncounters() < MAX_WANDERING_ENCOUNTERS) {
            FindAvailableGrass(&template.x, &template.y);
            if (template.x != 0 && template.y != 0) {
                template.localId = FindAvailableLocalId();
                if (template.localId != OBJ_EVENT_ID_NULL_ENCOUNTER) {
                    template.graphicsId = OBJ_EVENT_GFX_WILD_ENCOUNTER;
                    template.kind = OBJ_KIND_NORMAL;
                    template.objUnion.normal.elevation = 3;
                    template.objUnion.normal.movementType = MOVEMENT_TYPE_WANDER_AROUND;
                    template.objUnion.normal.movementRangeX = 4;
                    template.objUnion.normal.movementRangeY = 4;
                    template.objUnion.normal.trainerType = TRAINER_TYPE_NONE;
                    template.objUnion.normal.trainerRange_berryTreeId = 0;
                    template.script = 0;
                    template.flagId = 0;

                    DebugPrintf("UpdateWildEncounters spawning localId %d", template.localId);
                    TrySpawnObjectEventTemplate(&template, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, 0);
                }
            }
        }
    }
    else {
        gWanderingEncounterState++;
    }
}

u8 CountExistingWildEncounters(void) {
    u8 count = 0;
    s32 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++) {
        struct ObjectEvent *objectEvent = &gObjectEvents[i];
        if (objectEvent->active && objectEvent->localId >= 100 && objectEvent->localId <= 110) {
            count++;
        }
    }

    return count;
}

void FindAvailableGrass(s16 *x, s16 *y) {
    u32 area = (WANDERING_ENCOUNTER_RANGE_X * 2 + 1) * (WANDERING_ENCOUNTER_RANGE_Y * 2 + 1);
    u32 index = Random() % area;

    u16 seed = 19;

    s16 playerX, playerY;
    s16 indexX, indexY;
    u32 attribute;
    s32 i;

    PlayerGetDestCoords(&playerX, &playerY);

    for (i = 0; i < FIND_SPAWN_ATTEMPTS; i++) {
        indexX = (index / (WANDERING_ENCOUNTER_RANGE_X * 2 + 1)) + playerX - WANDERING_ENCOUNTER_RANGE_X;
        indexY = (index % (WANDERING_ENCOUNTER_RANGE_X * 2 + 1)) + playerY - WANDERING_ENCOUNTER_RANGE_Y;
        attribute = MapGridGetMetatileAttributeAt(indexX, indexY, METATILE_ATTRIBUTE_ENCOUNTER_TYPE);
        if (attribute == TILE_ENCOUNTER_LAND) {
            if (MapGridGetCollisionAt(indexX, indexY) == COLLISION_NONE) {
                if (indexX != playerX && indexY != playerY) {
                    *x = indexX - MAP_OFFSET;
                    *y = indexY - MAP_OFFSET;
                    return;
                }
            }
        }
        index = (index + seed) % area;
    }

    *x = 0;
    *y = 0;
}

u8 FindAvailableLocalId(void) {
    bool8 localIds[MAX_WANDERING_ENCOUNTERS] = {0};
    struct ObjectEvent *object;
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++) {
        object = &gObjectEvents[i];
        if (object->active && IsWanderEncounterLocalId(object->localId)) {
            localIds[object->localId - OBJ_EVENT_ID_WANDERING_ENCOUNTER] = 1;
        }
    }

    for (i = 0; i < MAX_WANDERING_ENCOUNTERS; i++) {
        if (localIds[i] == 0) {
            return OBJ_EVENT_ID_WANDERING_ENCOUNTER + i;
        }
    }

    return OBJ_EVENT_ID_NULL_ENCOUNTER;
}

bool8 IsWanderEncounterLocalId(u8 localId) {
    return  (localId >= OBJ_EVENT_ID_WANDERING_ENCOUNTER) &&
            (localId < (OBJ_EVENT_ID_WANDERING_ENCOUNTER + MAX_WANDERING_ENCOUNTERS));
}
