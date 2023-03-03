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
    struct ObjectEventTemplate object = {
            .localId = 100,
            .graphicsId = OBJ_EVENT_GFX_WILD_ENCOUNTER,
            .kind = OBJ_KIND_NORMAL,
            .x = 0,
            .y = 0,
            .objUnion = {
                    .normal = {
                            .elevation = 3,
                            .movementType = MOVEMENT_TYPE_WANDER_AROUND,
                            .movementRangeX = 4,
                            .movementRangeY = 4,
                            .trainerType = TRAINER_TYPE_NONE,
                            .trainerRange_berryTreeId = 0,
                    },
            },
            .script = 0,
            .flagId = 0,
    };

//    u8 x, y;

    // Check if we should spawn another encounter
    //  Check if this is a valid map
    //  Check if there are enough existing encounters
//    if (!QL_IS_PLAYBACK_STATE && CountExistingWildEncounters() < TEMP_MAX_ENCOUNTERS) {
//        DebugPrintf("UpdateWildEncounters attempt");
//
//        // Find a location to spawn
//        x = gSaveBlock1Ptr->pos.x + 2;
//        y = gSaveBlock1Ptr->pos.y + 2;
//
//        // Create the encounter object
//        object.x = x;
//        object.y = y;
//
//        // Spawn the encounter object
//        TrySpawnObjectEventTemplate(&object, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, 0);
//    }

    struct Coords16 grass;

    if (!QL_IS_PLAYBACK_STATE && gWanderingEncounterState >= UPDATE_DELAY) {
        gWanderingEncounterState = 0;
//        CheckAvailableGrass();

        if (CountExistingWildEncounters() < MAX_WANDERING_ENCOUNTERS) {
            FindAvailableGrass(&grass);
            DebugPrintf("FindAvailableGrass returned %d, %d", grass.x, grass.y);

            if (grass.x != 0 && grass.y != 0) {
                object.x = grass.x;
                object.y = grass.y;

                DebugPrintf("TrySpawnObject");
                TrySpawnObjectEventTemplate(&object, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, 0);
            }
        }
        else {
            DebugPrintf("At max wandering encounters");
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

void FindAvailableGrass(struct Coords16 *coords) {
    u16 rangeX = 1, rangeY = 1;
    u32 area = (rangeX * 2 + 1) * (rangeY * 2 + 1);
    u32 index = Random() % area;

    u16 seed = 19;
    u16 attempts = 10;

    s16 playerX, playerY;
    s16 indexX, indexY;
    u32 attribute;
    s32 i;

    PlayerGetDestCoords(&playerX, &playerY);

    DebugPrintf("FindAvailableGrass bounds x %d <-> %d y %d <-> %d", playerX - rangeX, playerX + rangeX, playerY - rangeY, playerY + rangeY);
    // NOTES
    // MapGridGetCollisionAt(x, y)
    // DoesObjectCollideWithObjectAt(objectEvent, x, y)

    for (i = 0; i < attempts; i++) {
        indexX = (index / (rangeX * 2 + 1)) + playerX - rangeX;
        indexY = (index % (rangeX * 2 + 1)) + playerY - rangeY;
        attribute = MapGridGetMetatileAttributeAt(indexX, indexY, METATILE_ATTRIBUTE_ENCOUNTER_TYPE);
        if (attribute == TILE_ENCOUNTER_LAND) {
            if (MapGridGetCollisionAt(indexX, indexY) == COLLISION_NONE) {
                if (indexX != playerX && indexY != playerY) {
                    coords->x = indexX - MAP_OFFSET;
                    coords->y = indexY - MAP_OFFSET;
                    return;
                }
            }
        }
        index = (index + seed) % area;
    }

    coords->x = 0;
    coords->y = 0;
}

void CheckAvailableGrass(void) {
    s16 playerX, playerY;
    PlayerGetDestCoords(&playerX, &playerY);

//    DebugPrintf("CheckAvailableGrass\n%d %d %d\n%d %d %d\n%d %d %d",
//            MapGridGetMetatileAttributeAt(playerX - 1, playerY - 1, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX, playerY - 1, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX + 1, playerY - 1, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX - 1, playerY, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX, playerY, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX + 1, playerY, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX - 1, playerY + 1, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX, playerY + 1, METATILE_ATTRIBUTE_ENCOUNTER_TYPE),
//            MapGridGetMetatileAttributeAt(playerX + 1, playerY + 1, METATILE_ATTRIBUTE_ENCOUNTER_TYPE));

    DebugPrintf("MapGridGetCollisionAt\n%d %d %d\n%d %d %d\n%d %d %d",
            MapGridGetCollisionAt(playerX - 1, playerY - 1),
            MapGridGetCollisionAt(playerX, playerY - 1),
            MapGridGetCollisionAt(playerX + 1, playerY - 1),
            MapGridGetCollisionAt(playerX - 1, playerY),
            MapGridGetCollisionAt(playerX, playerY),
            MapGridGetCollisionAt(playerX + 1, playerY),
            MapGridGetCollisionAt(playerX - 1, playerY + 1),
            MapGridGetCollisionAt(playerX, playerY + 1),
            MapGridGetCollisionAt(playerX + 1, playerY + 1));
}
