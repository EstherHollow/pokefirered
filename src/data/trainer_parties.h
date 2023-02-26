// Trainer party data exists for all of the RS trainer classes, but
// are only filled with one of the following placeholder pokemon.
// The actual FRLG trainer party data starts after these.
#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
        .variant = VARIANT_RANDOM,  \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 12,                   \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
        .variant = VARIANT_RANDOM,  \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = SPECIES_STARMIE, \
        .variant = VARIANT_RANDOM,  \
    }

static const struct TrainerMonNoItemDefaultMoves sParty_AquaLeader[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSAromaLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSRuinManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Interviewer[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTuberF[] = {DUMMY_TRAINER_STARMIE};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTuberM[] = {DUMMY_TRAINER_STARMIE};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCooltrainerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCooltrainerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_HexManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBeauty[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RichBoy[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPokemaniac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSwimmerM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBlackBelt[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_Guitarist[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Kindler[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCamper[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPsychicM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPsychicF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSGentleman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourSidney[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourPhoebe[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderRoxanne[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderBrawly[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderTateLiza[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SrAndJr[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PokefanM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PokefanF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ExpertM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ExpertF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSYoungster[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSChampion[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSFisherman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CyclingTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CyclingTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RunningTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RunningTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmingTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmingTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_DragonTamer[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBirdKeeper[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoy[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BattleGirl[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ParasolLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSwimmerF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPicnicker[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTwins[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSailor[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BoarderM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BoarderF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Collector[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Wally[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnBreederM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnBreederF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnRangerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnRangerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaLeader[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSLass[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBugCatcher[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSHiker[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSYoungCouple[] = {DUMMY_TRAINER_MON, DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_OldCouple[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSisAndBro[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaAdminMatt[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaAdminShelly[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaAdminTabitha[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaAdminCourtney[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderWattson[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderFlannery[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderNorman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderWinona[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderWallace[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourGlacia[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourDrake[] = {DUMMY_TRAINER_MON};

// Start of actual trainer data

////////////
// Rivals //
////////////
static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabSquirtle[] = {
        {
                .iv = 0,
                .lvl = 5,
                .species = SPECIES_SQUIRTLE,
                .variant = VARIANT_FROM_GAME_VERSION,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabBulbasaur[] = {
        {
                .iv = 0,
                .lvl = 5,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_FROM_GAME_VERSION,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabCharmander[] = {
        {
                .iv = 0,
                .lvl = 5,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_FROM_GAME_VERSION,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlySquirtle[] = {
        {
                .iv = DEFAULT_IVS,
                .lvl = 7,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = DEFAULT_IVS,
                .lvl = 7,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = DEFAULT_IVS,
                .lvl = 9,
                .species = SPECIES_SQUIRTLE,
                .variant = VARIANT_FROM_GAME_VERSION,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlyBulbasaur[] = {
        {
                .iv = DEFAULT_IVS,
                .lvl = 7,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = DEFAULT_IVS,
                .lvl = 7,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = DEFAULT_IVS,
                .lvl = 9,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_FROM_GAME_VERSION,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlyCharmander[] = {
        {
                .iv = DEFAULT_IVS,
                .lvl = 7,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = DEFAULT_IVS,
                .lvl = 7,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = DEFAULT_IVS,
                .lvl = 9,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_FROM_GAME_VERSION,
        },
};

/////////////////////
// Viridian Forest //
/////////////////////
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRick[] = {
        {
                .iv = 0,
                .lvl = 5,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_ONE_TONE(PALETTE_CATERPIE_GREEN),
        },{
                .iv = 0,
                .lvl = 5,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_ONE_TONE(PALETTE_CATERPIE_BLACK),
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherDoug[] = {
        {
                .iv = 0,
                .lvl = 7,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 7,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_KAKUNA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 7,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherAnthony[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 7,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCharlie[] = {
        {
                .iv = 0,
                .lvl = 7,
                .species = SPECIES_HOOTHOOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_HOPPIP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassTera[] = {
        {
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_ZIGZAGOON,
                .variant = VARIANT_ONE_TONE(PALETTE_ZIGZAGOON_STRAWBERRY),
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_RALTS,
                .variant = VARIANT_ONE_TONE(PALETTE_RALTS_BLUE),
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherSammy[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_SPINARAK,
                .variant = VARIANT_RANDOM,
        },
};

////////////////
// Pewter Gym //
////////////////
static const struct TrainerMonNoItemDefaultMoves sParty_CamperLiam[] = {
        {
                .iv = 10,
                .lvl = 10,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 10,
                .lvl = 11,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderBrock[] = {
        {
                .iv = DEFAULT_IVS,
                .lvl = 13,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MUD_SPORT, MOVE_ROCK_THROW},
        },{
                .iv = DEFAULT_IVS,
                .lvl = 11,
                .species = SPECIES_ARON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HEADBUTT, MOVE_HARDEN, MOVE_MUD_SLAP, MOVE_METAL_CLAW},
        },{
                .iv = DEFAULT_IVS,
                .lvl = 14,
                .species = SPECIES_SHUCKLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BIDE, MOVE_WITHDRAW, MOVE_WRAP, MOVE_SANDSTORM},
        },{
                .iv = MAX_IVS,
                .lvl = 16,
                .species = SPECIES_ONIX,
                .variant = VARIANT_ONE_TONE(PALETTE_ONIX_CRYSTAL),
                .moves = {MOVE_BIND, MOVE_SCREECH, MOVE_HARDEN, MOVE_ROCK_TOMB},
        },
};

//////////////
// Unsorted //
//////////////
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCalvin[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJosh[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJoey[] = {
        {
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDan[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTyler[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterEddie[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDillon[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDave[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen2[] = {
        {
                .iv = 2,
                .lvl = 17,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 17,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGreg[] = {
        {
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_KAKUNA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJames[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKent[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_KAKUNA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRobby[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCale[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_KAKUNA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKeigo[] = {
        {
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherElijah[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher2[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_VENONAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherBrent[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherConner[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_CATERPIE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_VENONAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice[] = {
        {
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 9,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassSally[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassRobin[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_JIGGLYPUFF,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassCrissy[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_PARAS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_PARAS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_PARASECT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassMiriam[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassIris[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassReli[] = {
        {
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassAli[] = {
        {
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Lass2[] = {
        {
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassHaley[] = {
        {
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassAnn[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassDawn[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassPaige[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassAndrea[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassJulia[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassKay[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassLisa[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorEdmond[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorTrevor[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorLeonard[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorDuncan[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorHuey[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorDylan[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorPhillip[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SailorDwayne[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperShane[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperEthan[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_SQUIRTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff[] = {
        {
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Camper2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperDrew[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDiana[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerNancy[] = {
        {
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle[] = {
        {
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey[] = {
        {
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCaitlin[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHeidi[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCarol[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSofia[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_JIGGLYPUFF,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMartha[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerTina[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHannah[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark[] = {
        {
                .iv = 3,
                .lvl = 29,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 29,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman[] = {
        {
                .iv = 3,
                .lvl = 20,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 20,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacCooper[] = {
        {
                .iv = 3,
                .lvl = 20,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 20,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 20,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacSteve[] = {
        {
                .iv = 3,
                .lvl = 22,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 22,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacWinston[] = {
        {
                .iv = 3,
                .lvl = 25,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacDawson[] = {
        {
                .iv = 3,
                .lvl = 40,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 40,
                .species = SPECIES_LAPRAS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 40,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacAshton[] = {
        {
                .iv = 3,
                .lvl = 23,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 23,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdJovan[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMiguel[] = {
        {
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 12,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_SuperNerdAidan[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_SuperNerdLeslie[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_SELF_DESTRUCT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd1[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd2[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd3[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdErik[] = {
        {
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdAvery[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdDerek[] = {
        {
                .iv = 0,
                .lvl = 41,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdZac[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerMarcos[] = {
        {
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 10,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin[] = {
        {
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerNob[] = {
        {
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerWayne[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_HikerAlan[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerBrice[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_HikerClark[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_HikerDudley[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_HikerAllen[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerEric[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerLenny[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerOliver[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_HikerLucas[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerJared[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_POISON_GAS},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerMalik[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerErnest[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerAlex[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerLao[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Biker1[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerHideo[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerRuben[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerBilly[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerNikolas[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerJaxon[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerWilliam[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerLukas[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerIsaac[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerGerald[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Burglar1[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Burglar2[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Burglar3[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BurglarQuinn[] = {
        {
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BurglarRamon[] = {
        {
                .iv = 0,
                .lvl = 41,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BurglarDusty[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BurglarArnie[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Burglar4[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BurglarSimon[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BurglarLewis[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBaily[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBraxton[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanDale[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanBarny[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNed[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanChip[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanHank[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanRonald[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanClaude[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNolan[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanAndrew[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleLuis[] = {
        {
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 16,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRichard[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleReece[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDouglas[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDavid[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleAxle[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_TENTACRUEL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleBarry[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDean[] = {
        {
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSpencer[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_TENTACRUEL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJerome[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRoland[] = {
        {
                .iv = 0,
                .lvl = 32,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 32,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 32,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallKoji[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallLuke[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallRaul[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallZeek[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallJamal[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallChase[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_TENTACRUEL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerHugo[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerJasper[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerDirk[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerStan[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Gamer1[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyBridget[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyTamia[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLori[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLola[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTiffany[] = {
        {
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNora[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_WIGGLYTUFF,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyOlivia[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLauren[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAnya[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleConnie[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleShirley[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJohan[] = {
        {
                .iv = 6,
                .lvl = 31,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 31,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 31,
                .species = SPECIES_MR_MIME,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 31,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PsychicTyron[] = {
        {
                .iv = 6,
                .lvl = 34,
                .species = SPECIES_MR_MIME,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 34,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PsychicCameron[] = {
        {
                .iv = 6,
                .lvl = 33,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 33,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 33,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PsychicPreston[] = {
        {
                .iv = 6,
                .lvl = 38,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RockerRandall[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerDalton[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MR_MIME,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNelson[] = {
        {
                .iv = 0,
                .lvl = 41,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 41,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 41,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 41,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerKirk[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerShawn[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_JugglerGregory[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MR_MIME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_JugglerEdward[] = {
        {
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MR_MIME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_REFLECT, MOVE_ENCORE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerKayden[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNate[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerPhil[] = {
        {
                .iv = 4,
                .lvl = 34,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 34,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerEdgar[] = {
        {
                .iv = 4,
                .lvl = 33,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 33,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 33,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerJason[] = {
        {
                .iv = 4,
                .lvl = 43,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerCole[] = {
        {
                .iv = 4,
                .lvl = 39,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 39,
                .species = SPECIES_TAUROS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerVincent[] = {
        {
                .iv = 4,
                .lvl = 44,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 44,
                .species = SPECIES_GOLDUCK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerJohn[] = {
        {
                .iv = 4,
                .lvl = 42,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 42,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 42,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 42,
                .species = SPECIES_TAUROS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperSebastian[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperPerry[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperDonald[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_FARFETCHD,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperEdwin[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_FARFETCHD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperWilton[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRamiro[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRoger[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperReed[] = {
        {
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperKeith[] = {
        {
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_FARFETCHD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperCarter[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMitch[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBeck[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltKoichi[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltMike[] = {
        {
                .iv = 12,
                .lvl = 31,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 31,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 31,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHideki[] = {
        {
                .iv = 12,
                .lvl = 32,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 32,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAaron[] = {
        {
                .iv = 12,
                .lvl = 36,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHitoshi[] = {
        {
                .iv = 12,
                .lvl = 31,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 31,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 31,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAtsushi[] = {
        {
                .iv = 12,
                .lvl = 40,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 40,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltKiyo[] = {
        {
                .iv = 12,
                .lvl = 43,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltTakashi[] = {
        {
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltDaisuke[] = {
        {
                .iv = 12,
                .lvl = 43,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 43,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 43,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RivalCeruleanSquirtle[] = {
        {
                .iv = 6,
                .lvl = 17,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },{
                .iv = 6,
                .lvl = 16,
                .species = SPECIES_ABRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TELEPORT, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        },{
                .iv = 6,
                .lvl = 15,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE},
        },{
                .iv = 12,
                .lvl = 18,
                .species = SPECIES_SQUIRTLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_WITHDRAW, MOVE_WATER_GUN},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RivalCeruleanBulbasaur[] = {
        {
                .iv = 6,
                .lvl = 17,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },{
                .iv = 6,
                .lvl = 16,
                .species = SPECIES_ABRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TELEPORT, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        },{
                .iv = 6,
                .lvl = 15,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE},
        },{
                .iv = 12,
                .lvl = 18,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RivalCeruleanCharmander[] = {
        {
                .iv = 6,
                .lvl = 17,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },{
                .iv = 6,
                .lvl = 16,
                .species = SPECIES_ABRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TELEPORT, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        },{
                .iv = 6,
                .lvl = 15,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE},
        },{
                .iv = 12,
                .lvl = 18,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_METAL_CLAW, MOVE_EMBER, MOVE_GROWL, MOVE_SCRATCH},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTed[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_ScientistConnor[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJerry[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_ScientistJose[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistRodney[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_ScientistBeau[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_ScientistTaylor[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJoshua[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistParker[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_ScientistEd[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE, MOVE_SMOG},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTravis[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistBraydon[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ScientistIvan[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni[] = {
        {
                .iv = 30,
                .lvl = 25,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 30,
                .lvl = 24,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 30,
                .lvl = 29,
                .species = SPECIES_KANGASKHAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni2[] = {
        {
                .iv = 30,
                .lvl = 37,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 30,
                .lvl = 35,
                .species = SPECIES_KANGASKHAN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 30,
                .lvl = 37,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 30,
                .lvl = 41,
                .species = SPECIES_NIDOQUEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderGiovanni[] = {
        {
                .iv = 0,
                .lvl = 45,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_EARTHQUAKE},
        },{
                .iv = 0,
                .lvl = 42,
                .species = SPECIES_DUGTRIO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_SAND_TOMB, MOVE_MUD_SLAP, MOVE_EARTHQUAKE},
        },{
                .iv = 0,
                .lvl = 44,
                .species = SPECIES_NIDOQUEEN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_EARTHQUAKE},
        },{
                .iv = 0,
                .lvl = 45,
                .species = SPECIES_NIDOKING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_EARTHQUAKE},
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_EARTHQUAKE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt[] = {
        {
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt2[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt3[] = {
        {
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 11,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt4[] = {
        {
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 13,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt5[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt6[] = {
        {
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 15,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt7[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt8[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt9[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt10[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt11[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt12[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt13[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND},
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt14[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt15[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt16[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt17[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt18[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt19[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt20[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt21[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt22[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt23[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt24[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt25[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt26[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt27[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt28[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt29[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt30[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt31[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt32[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCARY_FACE, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_GLARE, MOVE_BITE, MOVE_POISON_STING, MOVE_LEER},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WING_ATTACK, MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt33[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt34[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt35[] = {
        {
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 26,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt36[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt37[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt38[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt39[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt40[] = {
        {
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 25,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt41[] = {
        {
                .iv = 0,
                .lvl = 32,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 32,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 32,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerSamuel[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
        },{
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
        },{
                .iv = 12,
                .lvl = 39,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_ATTACK, MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
        },{
                .iv = 12,
                .lvl = 39,
                .species = SPECIES_NIDOKING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerGeorge[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EGG_BOMB, MOVE_CONFUSION, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_POISON_STING, MOVE_SAND_ATTACK},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPIKE_CANNON, MOVE_SPIKES, MOVE_AURORA_BEAM, MOVE_SUPERSONIC},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_LIGHT_SCREEN},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAME_WHEEL, MOVE_ROAR, MOVE_BITE, MOVE_TAKE_DOWN},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerColby[] = {
        {
                .iv = 12,
                .lvl = 41,
                .species = SPECIES_KINGLER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_SLAP, MOVE_WATER_GUN, MOVE_HYPNOSIS},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_TENTACRUEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BARRIER, MOVE_WRAP, MOVE_BUBBLE_BEAM, MOVE_ACID},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WATER_GUN, MOVE_SMOKESCREEN, MOVE_TWISTER, MOVE_LEER},
        },{
                .iv = 12,
                .lvl = 43,
                .species = SPECIES_BLASTOISE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_RAIN_DANCE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerPaul[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_SLOWPOKE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HEADBUTT, MOVE_CONFUSION, MOVE_WATER_GUN, MOVE_DISABLE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_AURORA_BEAM, MOVE_CLAMP, MOVE_SUPERSONIC, MOVE_LEER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_KINGLER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BUBBLE_BEAM, MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_GOLDUCK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CONFUSION, MOVE_SCRATCH, MOVE_SCREECH, MOVE_DISABLE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerRolando[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_TAIL_WHIP},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_CHARIZARD,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerGilbert[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WING_ATTACK, MOVE_FEATHER_DANCE, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_DRILL_PECK, MOVE_MIRROR_MOVE, MOVE_PURSUIT, MOVE_LEER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_SCREECH, MOVE_BITE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLAM, MOVE_DISABLE, MOVE_WRAP, MOVE_SUPERSONIC},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_TAUROS,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HORN_ATTACK, MOVE_SCARY_FACE, MOVE_SWAGGER, MOVE_TAIL_WHIP},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerOwen[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCRATCH, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_BITE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_LEER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SLASH, MOVE_POISON_STING},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP, MOVE_TAIL_WHIP},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerBerke[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_SEEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_AURORA_BEAM, MOVE_ICY_WIND, MOVE_GROWL},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_KINGLER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLAM, MOVE_SANDSTORM, MOVE_DRAGON_BREATH, MOVE_ROCK_THROW},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPIKE_CANNON, MOVE_AURORA_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerYuji[] = {
        {
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_ROCK_THROW, MOVE_BIND},
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL},
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerWarren[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
        },{
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
        },{
                .iv = 12,
                .lvl = 39,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
        },{
                .iv = 12,
                .lvl = 39,
                .species = SPECIES_NIDOQUEEN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BODY_SLAM, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerMary[] = {
        {
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WRAP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_ABSORB, MOVE_SWEET_SCENT},
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_VINE_WHIP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ABSORB, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_SWEET_SCENT},
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerCaroline[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_POISON_POWDER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_VICTREEBEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PARAS,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_STUN_SPORE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PARASECT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPORE, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_POISON_POWDER},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerAlexa[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_LIGHT_SCREEN, MOVE_COSMIC_POWER, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_JIGGLYPUFF,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SING, MOVE_BODY_SLAM, MOVE_ROLLOUT, MOVE_DISABLE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_BITE, MOVE_SCREECH},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_DEWGONG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SHEER_COLD, MOVE_TAKE_DOWN, MOVE_REST, MOVE_AURORA_BEAM},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_CHANSEY,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SING, MOVE_EGG_BOMB, MOVE_SOFT_BOILED, MOVE_MINIMIZE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerShannon[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PIN_MISSILE, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_PURSUIT},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SAFEGUARD, MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PARASECT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_GROWTH},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_VENONAT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_LEECH_LIFE, MOVE_DISABLE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_VENOMOTH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerNaomi[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_SWIPES, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_PAY_DAY},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_AGILITY, MOVE_TAKE_DOWN, MOVE_FIRE_SPIN, MOVE_STOMP},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_STOMP, MOVE_GROWL},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_IMPRISON},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SAFEGUARD, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerBrooke[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_TANGELA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLAM, MOVE_BIND, MOVE_MEGA_DRAIN, MOVE_INGRAIN},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ACID, MOVE_MOONLIGHT, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_VILEPLUME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MEGA_DRAIN, MOVE_ACID, MOVE_STUN_SPORE, MOVE_AROMATHERAPY},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWL, MOVE_LEECH_SEED},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_VENUSAUR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerAustina[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_DOUBLE_KICK, MOVE_FURY_SWIPES, MOVE_BITE, MOVE_FLATTER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NIDOQUEEN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_GROWL},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY, MOVE_LEER},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NIDOKING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_PECK},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerJulie[] = {
        {
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_SCREECH, MOVE_FAINT_ATTACK},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_GRUDGE},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN, MOVE_AGILITY},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        },{
                .iv = 12,
                .lvl = 42,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_SLAM, MOVE_DOUBLE_TEAM},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourLorelei[] = {
        {
                .iv = 30,
                .lvl = 52,
                .species = SPECIES_DEWGONG,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_HAIL, MOVE_SAFEGUARD},
        },{
                .iv = 30,
                .lvl = 51,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SPIKES, MOVE_PROTECT, MOVE_HAIL, MOVE_DIVE},
        },{
                .iv = 30,
                .lvl = 52,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_AMNESIA, MOVE_YAWN},
        },{
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_JYNX,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_ICE_PUNCH, MOVE_DOUBLE_SLAP, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        },{
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_LAPRAS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourBruno[] = {
        {
                .iv = 30,
                .lvl = 51,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_IRON_TAIL, MOVE_ROAR},
        },{
                .iv = 30,
                .lvl = 53,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_COUNTER},
        },{
                .iv = 30,
                .lvl = 53,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_BRICK_BREAK, MOVE_FACADE},
        },{
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SAND_TOMB},
        },{
                .iv = 30,
                .lvl = 56,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_SCARY_FACE, MOVE_ROCK_TOMB},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourAgatha[] = {
        {
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_GENGAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        },{
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_CONFUSE_RAY, MOVE_POISON_FANG, MOVE_AIR_CUTTER, MOVE_BITE},
        },{
                .iv = 30,
                .lvl = 53,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_CURSE, MOVE_MEAN_LOOK},
        },{
                .iv = 30,
                .lvl = 56,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_IRON_TAIL, MOVE_BITE},
        },{
                .iv = 30,
                .lvl = 58,
                .species = SPECIES_GENGAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_NIGHTMARE},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourLance[] = {
        {
                .iv = 30,
                .lvl = 56,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_RAGE, MOVE_TWISTER, MOVE_BITE},
        },{
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_DRAGONAIR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_DRAGON_RAGE, MOVE_OUTRAGE},
        },{
                .iv = 30,
                .lvl = 54,
                .species = SPECIES_DRAGONAIR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_THUNDER_WAVE, MOVE_OUTRAGE},
        },{
                .iv = 30,
                .lvl = 58,
                .species = SPECIES_AERODACTYL,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_WING_ATTACK, MOVE_SCARY_FACE},
        },{
                .iv = 30,
                .lvl = 60,
                .species = SPECIES_DRAGONITE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_OUTRAGE, MOVE_WING_ATTACK},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderMisty[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_RECOVER, MOVE_WATER_PULSE},
        },{
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN, MOVE_WATER_PULSE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderLtSurge[] = {
        {
                .iv = 0,
                .lvl = 21,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SONIC_BOOM, MOVE_TACKLE, MOVE_SCREECH, MOVE_SHOCK_WAVE},
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderErika[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_VICTREEBEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_STUN_SPORE, MOVE_ACID, MOVE_POISON_POWDER, MOVE_GIGA_DRAIN},
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_TANGELA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_POISON_POWDER, MOVE_CONSTRICT, MOVE_INGRAIN, MOVE_GIGA_DRAIN},
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_VILEPLUME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLEEP_POWDER, MOVE_ACID, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderKoga[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
        },{
                .iv = 0,
                .lvl = 39,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_ACID_ARMOR, MOVE_TOXIC},
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
        },{
                .iv = 0,
                .lvl = 43,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderBlaine[] = {
        {
                .iv = 0,
                .lvl = 42,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST},
        },{
                .iv = 0,
                .lvl = 40,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST},
        },{
                .iv = 0,
                .lvl = 42,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST},
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_LeaderSabrina[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYBEAM, MOVE_REFLECT, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND},
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_MR_MIME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BARRIER, MOVE_PSYBEAM, MOVE_BATON_PASS, MOVE_CALM_MIND},
        },{
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_VENOMOTH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_LEECH_LIFE, MOVE_SUPERSONIC},
        },{
                .iv = 0,
                .lvl = 43,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanThomas[] = {
        {
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 18,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanArthur[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanTucker[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanNorton[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanWalter[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneSquirtle[] = {
        {
                .iv = 6,
                .lvl = 19,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 16,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 18,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 20,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneBulbasaur[] = {
        {
                .iv = 6,
                .lvl = 19,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 16,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 18,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 20,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneCharmander[] = {
        {
                .iv = 6,
                .lvl = 19,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 16,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 18,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 20,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokenonTowerSquirtle[] = {
        {
                .iv = 12,
                .lvl = 25,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 23,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 20,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 25,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokenonTowerBulbasaur[] = {
        {
                .iv = 12,
                .lvl = 25,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 23,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 20,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 25,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokenonTowerCharmander[] = {
        {
                .iv = 12,
                .lvl = 25,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 23,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 22,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 20,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 25,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphSquirtle[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 35,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 35,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 40,
                .species = SPECIES_BLASTOISE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphBulbasaur[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 35,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 35,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 40,
                .species = SPECIES_VENUSAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphCharmander[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 35,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 35,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 40,
                .species = SPECIES_CHARIZARD,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22LateSquirtle[] = {
        {
                .iv = 18,
                .lvl = 47,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAME_WHEEL, MOVE_TAKE_DOWN, MOVE_LEER, MOVE_AGILITY},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE},
        },{
                .iv = 18,
                .lvl = 47,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        },{
                .iv = 30,
                .lvl = 53,
                .species = SPECIES_BLASTOISE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_WATER_GUN, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_RAPID_SPIN},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22LateBulbasaur[] = {
        {
                .iv = 18,
                .lvl = 47,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_LEER, MOVE_RAIN_DANCE},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAME_WHEEL, MOVE_TAKE_DOWN, MOVE_LEER, MOVE_AGILITY},
        },{
                .iv = 18,
                .lvl = 47,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        },{
                .iv = 30,
                .lvl = 53,
                .species = SPECIES_VENUSAUR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWTH, MOVE_SYNTHESIS},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22LateCharmander[] = {
        {
                .iv = 18,
                .lvl = 47,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE},
        },{
                .iv = 18,
                .lvl = 45,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_LEER, MOVE_RAIN_DANCE},
        },{
                .iv = 18,
                .lvl = 47,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        },{
                .iv = 30,
                .lvl = 53,
                .species = SPECIES_CHARIZARD,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SLASH, MOVE_SCARY_FACE},
        },
};
static const struct TrainerMonItemCustomMoves sParty_ChampionFirstSquirtle[] = {
        {
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND},
        },{
                .iv = 31,
                .lvl = 57,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },{
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        },{
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE},
        },{
                .iv = 31,
                .lvl = 61,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_GIGA_DRAIN, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },{
                .iv = 31,
                .lvl = 63,
                .species = SPECIES_BLASTOISE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_SKULL_BASH, MOVE_BITE},
        },
};
static const struct TrainerMonItemCustomMoves sParty_ChampionFirstBulbasaur[] = {
        {
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND},
        },{
                .iv = 31,
                .lvl = 57,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },{
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        },{
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_THRASH},
        },{
                .iv = 31,
                .lvl = 61,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE},
        },{
                .iv = 31,
                .lvl = 63,
                .species = SPECIES_VENUSAUR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_SOLAR_BEAM, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GROWTH},
        },
};
static const struct TrainerMonItemCustomMoves sParty_ChampionFirstCharmander[] = {
        {
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND},
        },{
                .iv = 31,
                .lvl = 57,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },{
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        },{
                .iv = 31,
                .lvl = 59,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_GIGA_DRAIN, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },{
                .iv = 31,
                .lvl = 61,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_THRASH},
        },{
                .iv = 31,
                .lvl = 63,
                .species = SPECIES_CHARIZARD,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_FIRE_BLAST, MOVE_AERIAL_ACE, MOVE_SLASH, MOVE_FIRE_SPIN},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPatricia[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerCarly[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerHope[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPaula[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerLaurel[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJody[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTammy[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerRuth[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerKarina[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJanae[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAngelica[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerEmilia[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJennifer[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler1[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler2[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler3[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler4[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler5[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler6[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler7[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Channeler8[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAmanda[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerStacy[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTasha[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_GASTLY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_HAUNTER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlma[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerValerie[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerGwen[] = {
        {
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 27,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerVirgil[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperFlint[] = {
        {
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 14,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy[] = {
        {
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 31,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIrene[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_HORSEA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SEEL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDana[] = {
        {
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 20,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAriana[] = {
        {
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 19,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerLeah[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperJustin[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerYazmin[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_TANGELA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKindra[] = {
        {
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 28,
                .species = SPECIES_ODDISH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCelia[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanBrooks[] = {
        {
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanLamar[] = {
        {
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 17,
                .species = SPECIES_PONYTA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_JIGGLYPUFF,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CoolCoupleRayTyra[] = {
        {
                .iv = 12,
                .lvl = 45,
                .species = SPECIES_NIDOQUEEN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SUPERPOWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING},
        },{
                .iv = 12,
                .lvl = 45,
                .species = SPECIES_NIDOKING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MEGAHORN, MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TwinsKiriJan[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_SQUIRTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya[] = {
        {
                .iv = 6,
                .lvl = 29,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 29,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleLeaJed[] = {
        {
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 29,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLiaLuc[] = {
        {
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 30,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher4[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher5[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher6[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher7[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher8[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen3[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen4[] = {
        {
                .iv = 14,
                .lvl = 48,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 48,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad2[] = {
        {
                .iv = 2,
                .lvl = 20,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 20,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassReli2[] = {
        {
                .iv = 2,
                .lvl = 20,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 20,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassReli3[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy2[] = {
        {
                .iv = 2,
                .lvl = 19,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 19,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 19,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy3[] = {
        {
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy4[] = {
        {
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad3[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice2[] = {
        {
                .iv = 2,
                .lvl = 20,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 20,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice3[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad4[] = {
        {
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin2[] = {
        {
                .iv = 4,
                .lvl = 25,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 25,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PkmnProfProfOak[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerBrendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerMay[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerRed[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerLeaf[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt42[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_HOUNDOUR,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_HOUNDOUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PsychicJaclyn[] = {
        {
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_NATU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH},
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN},
        },{
                .iv = 12,
                .lvl = 49,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon[] = {
        {
                .iv = 6,
                .lvl = 37,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 37,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_POLIWAG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAlize[] = {
        {
                .iv = 3,
                .lvl = 48,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 48,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 48,
                .species = SPECIES_MARILL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerNicolas[] = {
        {
                .iv = 12,
                .lvl = 51,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_WRAP},
        },{
                .iv = 12,
                .lvl = 51,
                .species = SPECIES_VICTREEBEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerMadeline[] = {
        {
                .iv = 12,
                .lvl = 51,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_POISON_POWDER},
        },{
                .iv = 12,
                .lvl = 51,
                .species = SPECIES_VILEPLUME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyNikki[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacStanly[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_LadyJacki[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_HOPPIP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_STARDUST,
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_SKIPLOOM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_STARDUST,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PainterDaisy[] = {
        {
                .iv = 6,
                .lvl = 50,
                .species = SPECIES_SMEARGLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_DYNAMIC_PUNCH, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_MEGA_PUNCH},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerGoon[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE},
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ACID_ARMOR, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerGoon2[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon3[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_Biker2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_JIGGLYPUFF,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJohnson[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_BikerRicardo[] = {
        {
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },{
                .iv = 0,
                .lvl = 22,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },{
                .iv = 0,
                .lvl = 23,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren[] = {
        {
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 24,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt43[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_CUBONE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt44[] = {
        {
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SANDSHREW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt45[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_ZUBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt46[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt47[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt48[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketAdmin[] = {
        {
                .iv = 18,
                .lvl = 52,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_ROCK_TOMB},
        },{
                .iv = 18,
                .lvl = 53,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL},
        },{
                .iv = 18,
                .lvl = 54,
                .species = SPECIES_VILEPLUME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketAdmin2[] = {
        {
                .iv = 24,
                .lvl = 53,
                .species = SPECIES_GOLBAT,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL},
        },{
                .iv = 24,
                .lvl = 54,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_SHADOW_BALL},
        },{
                .iv = 24,
                .lvl = 55,
                .species = SPECIES_HOUNDOOM,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_SHADOW_BALL},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_ScientistGideon[] = {
        {
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_SCREECH, MOVE_SPARK, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
        },{
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_MAGNEMITE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SCREECH, MOVE_SWIFT, MOVE_SPARK, MOVE_THUNDER_WAVE},
        },{
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TRI_ATTACK, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_PORYGON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TRI_ATTACK, MOVE_CONVERSION, MOVE_RECOVER, MOVE_PSYBEAM},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAmara[] = {
        {
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_SEEL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_SEEL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_DEWGONG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMaria[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAbigail[] = {
        {
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_PSYDUCK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_PSYDUCK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_GOLDUCK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleGarrett[] = {
        {
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SHELLDER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTommy[] = {
        {
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 33,
                .species = SPECIES_GOLDEEN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya[] = {
        {
                .iv = 6,
                .lvl = 38,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 38,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea[] = {
        {
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_MACHOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperBryce[] = {
        {
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerClaire[] = {
        {
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 35,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia[] = {
        {
                .iv = 6,
                .lvl = 39,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 39,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyViolet[] = {
        {
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_BULBASAUR,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 36,
                .species = SPECIES_IVYSAUR,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TuberAlexis[] = {
        {
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_STARYU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_KRABBY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 34,
                .species = SPECIES_KRABBY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg[] = {
        {
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 37,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTisha[] = {
        {
                .iv = 0,
                .lvl = 38,
                .species = SPECIES_KINGLER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PainterCelina[] = {
        {
                .iv = 6,
                .lvl = 50,
                .species = SPECIES_SMEARGLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLY, MOVE_DIG, MOVE_DIVE, MOVE_BOUNCE},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PainterRayna[] = {
        {
                .iv = 6,
                .lvl = 50,
                .species = SPECIES_SMEARGLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
        },
};
static const struct TrainerMonItemDefaultMoves sParty_LadyGillian[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_MAREEP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_STARDUST,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MAREEP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_STARDUST,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_FLAAFFY,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NUGGET,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDestin[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleToby[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_TENTACOOL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_TENTACRUEL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt49[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GRIMER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt50[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_MEMENTO, MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE},
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt51[] = {
        {
                .iv = 6,
                .lvl = 48,
                .species = SPECIES_EKANS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 48,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 48,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMilo[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChaz[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperHarold[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_HOOTHOOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_NOCTOWL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTylor[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_QWILFISH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_QWILFISH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMymo[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_KINGLER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_MARILL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroAvaGeb[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyRose[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_SUNKERN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_SUNFLORA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleDenise[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_CHINCHOU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_LANTURN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TwinsMiuMia[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacFoster[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_GOLEM,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerDaryl[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_SUDOWOODO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector[] = {
        {
                .iv = 3,
                .lvl = 49,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 49,
                .species = SPECIES_KANGASKHAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PsychicDario[] = {
        {
                .iv = 12,
                .lvl = 52,
                .species = SPECIES_GIRAFARIG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PsychicRodette[] = {
        {
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_NATU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_DROWZEE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },{
                .iv = 12,
                .lvl = 50,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyMiah[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_BELLOSSOM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_BELLOSSOM,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleEveJon[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_GOLDUCK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_PSYDUCK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_JugglerMason[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_PINECO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_TAKE_DOWN},
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_VOLTORB,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_PINECO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy[] = {
        {
                .iv = 6,
                .lvl = 48,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 48,
                .species = SPECIES_HITMONTOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 48,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlJocelyn[] = {
        {
                .iv = 6,
                .lvl = 38,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 6,
                .lvl = 38,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan[] = {
        {
                .iv = 4,
                .lvl = 48,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 48,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 49,
                .species = SPECIES_URSARING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark2[] = {
        {
                .iv = 10,
                .lvl = 33,
                .species = SPECIES_RHYHORN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 10,
                .lvl = 33,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerLogan[] = {
        {
                .iv = 12,
                .lvl = 37,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_CONFUSION},
        },{
                .iv = 12,
                .lvl = 40,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EGG_BOMB, MOVE_STOMP, MOVE_CONFUSION, MOVE_HYPNOSIS},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerJackson[] = {
        {
                .iv = 12,
                .lvl = 49,
                .species = SPECIES_TANGELA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN},
        },{
                .iv = 12,
                .lvl = 49,
                .species = SPECIES_EXEGGCUTE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CONFUSION, MOVE_POISON_POWDER, MOVE_BARRAGE, MOVE_REFLECT},
        },{
                .iv = 12,
                .lvl = 49,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerBeth[] = {
        {
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_BELLSPROUT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 38,
                .species = SPECIES_GLOOM,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerKatelyn[] = {
        {
                .iv = 12,
                .lvl = 52,
                .species = SPECIES_CHANSEY,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerLeroy[] = {
        {
                .iv = 12,
                .lvl = 47,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE},
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
        },{
                .iv = 12,
                .lvl = 47,
                .species = SPECIES_KANGASKHAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS},
        },{
                .iv = 12,
                .lvl = 50,
                .species = SPECIES_URSARING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerMichelle[] = {
        {
                .iv = 12,
                .lvl = 47,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE},
        },{
                .iv = 12,
                .lvl = 47,
                .species = SPECIES_DEWGONG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_GROWL},
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE},
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN},
        },{
                .iv = 12,
                .lvl = 50,
                .species = SPECIES_GIRAFARIG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CoolCoupleLexNya[] = {
        {
                .iv = 12,
                .lvl = 52,
                .species = SPECIES_MILTANK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
        },{
                .iv = 12,
                .lvl = 52,
                .species = SPECIES_TAUROS,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_THRASH, MOVE_HORN_ATTACK, MOVE_PURSUIT, MOVE_SWAGGER},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacBrandon[] = {
        {
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_RuinManiacBenjamin[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GEODUDE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROLLOUT, MOVE_SELF_DESTRUCT},
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT},
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PainterEdna[] = {
        {
                .iv = 6,
                .lvl = 50,
                .species = SPECIES_SMEARGLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FAKE_OUT, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_QUICK_ATTACK},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanClifford[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_GOLDUCK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemCustomMoves sParty_LadySelphy[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NUGGET,
                .moves = {MOVE_PAY_DAY, MOVE_BITE, MOVE_TAUNT, MOVE_TORMENT},
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NUGGET,
                .moves = {MOVE_PAY_DAY, MOVE_SCRATCH, MOVE_TORMENT, MOVE_TAUNT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLawson[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PsychicLaura[] = {
        {
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_NATU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 48,
                .species = SPECIES_NATU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 12,
                .lvl = 49,
                .species = SPECIES_XATU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederBethany[] = {
        {
                .iv = 3,
                .lvl = 50,
                .species = SPECIES_CHANSEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAllison[] = {
        {
                .iv = 3,
                .lvl = 48,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 48,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 3,
                .lvl = 48,
                .species = SPECIES_CLEFABLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGarret[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_HERACROSS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJonah[] = {
        {
                .iv = 0,
                .lvl = 45,
                .species = SPECIES_YANMA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 45,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_YANMA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherVance[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_VENONAT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_VENOMOTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterNash[] = {
        {
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_WEEPINBELL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_VICTREEBEL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCordell[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_FARFETCHD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_FARFETCHD,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassDalia[] = {
        {
                .iv = 0,
                .lvl = 46,
                .species = SPECIES_HOPPIP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_HOPPIP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 47,
                .species = SPECIES_SKIPLOOM,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_SKIPLOOM,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassJoana[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_SNUBBULL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperRiley[] = {
        {
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_PINSIR,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 50,
                .species = SPECIES_HERACROSS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMarcy[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_PARAS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_PARAS,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 49,
                .species = SPECIES_PARASECT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLayton[] = {
        {
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 0,
                .lvl = 48,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey2[] = {
        {
                .iv = 2,
                .lvl = 21,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 21,
                .species = SPECIES_NIDORAN_F,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey3[] = {
        {
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey4[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky2[] = {
        {
                .iv = 2,
                .lvl = 22,
                .species = SPECIES_SQUIRTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky3[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky4[] = {
        {
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_WARTORTLE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff2[] = {
        {
                .iv = 2,
                .lvl = 21,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 21,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff3[] = {
        {
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff4[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle2[] = {
        {
                .iv = 2,
                .lvl = 21,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 21,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 18,
                .species = SPECIES_PIDGEY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle3[] = {
        {
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 26,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle4[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 50,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu2[] = {
        {
                .iv = 4,
                .lvl = 22,
                .species = SPECIES_RATTATA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 22,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 22,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu3[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MAGNETON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian2[] = {
        {
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris2[] = {
        {
                .iv = 4,
                .lvl = 24,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 24,
                .species = SPECIES_CHARMANDER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris3[] = {
        {
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 29,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris4[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_CHARMELEON,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia2[] = {
        {
                .iv = 4,
                .lvl = 25,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia3[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia4[] = {
        {
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy2[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark3[] = {
        {
                .iv = 18,
                .lvl = 54,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 54,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman2[] = {
        {
                .iv = 10,
                .lvl = 29,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 10,
                .lvl = 29,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman3[] = {
        {
                .iv = 18,
                .lvl = 54,
                .species = SPECIES_MAROWAK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 54,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent2[] = {
        {
                .iv = 7,
                .lvl = 31,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 31,
                .species = SPECIES_GRAVELER,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan2[] = {
        {
                .iv = 4,
                .lvl = 22,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 22,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 23,
                .species = SPECIES_NIDORAN_M,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 21,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 4,
                .lvl = 22,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan3[] = {
        {
                .iv = 9,
                .lvl = 46,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich2[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_GROWLITHE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_VULPIX,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca2[] = {
        {
                .iv = 7,
                .lvl = 33,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 33,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert3[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie2[] = {
        {
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_MEOWTH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie3[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie4[] = {
        {
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerLukas2[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_KOFFING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny2[] = {
        {
                .iv = 7,
                .lvl = 32,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 32,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny3[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon2[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon3[] = {
        {
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_WIGGLYTUFF,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester2[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_DODUO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester3[] = {
        {
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_DODRIO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky2[] = {
        {
                .iv = 7,
                .lvl = 32,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 32,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky3[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky4[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_RAICHU,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya2[] = {
        {
                .iv = 13,
                .lvl = 33,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 13,
                .lvl = 33,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya3[] = {
        {
                .iv = 15,
                .lvl = 51,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 15,
                .lvl = 51,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya4[] = {
        {
                .iv = 20,
                .lvl = 56,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 20,
                .lvl = 56,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerRuben2[] = {
        {
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 48,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaxon2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob2[] = {
        {
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 28,
                .species = SPECIES_SPEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob3[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin2[] = {
        {
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy3[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade2[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_MAGIKARP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack2[] = {
        {
                .iv = 9,
                .lvl = 50,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan2[] = {
        {
                .iv = 9,
                .lvl = 50,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 50,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan3[] = {
        {
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn2[] = {
        {
                .iv = 9,
                .lvl = 50,
                .species = SPECIES_STARMIE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon2[] = {
        {
                .iv = 15,
                .lvl = 50,
                .species = SPECIES_MANKEY,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 15,
                .lvl = 50,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon3[] = {
        {
                .iv = 20,
                .lvl = 55,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 20,
                .lvl = 55,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya2[] = {
        {
                .iv = 15,
                .lvl = 50,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 15,
                .lvl = 50,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya3[] = {
        {
                .iv = 20,
                .lvl = 55,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 20,
                .lvl = 55,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea2[] = {
        {
                .iv = 21,
                .lvl = 50,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 21,
                .lvl = 50,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea3[] = {
        {
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh2[] = {
        {
                .iv = 21,
                .lvl = 50,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 21,
                .lvl = 50,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh3[] = {
        {
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia2[] = {
        {
                .iv = 15,
                .lvl = 51,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 15,
                .lvl = 51,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia3[] = {
        {
                .iv = 20,
                .lvl = 56,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 20,
                .lvl = 56,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira2[] = {
        {
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 47,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PainterRayna2[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_SMEARGLE,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDestin2[] = {
        {
                .iv = 14,
                .lvl = 53,
                .species = SPECIES_RATICATE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 53,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAlize2[] = {
        {
                .iv = 18,
                .lvl = 53,
                .species = SPECIES_PIKACHU,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 53,
                .species = SPECIES_CLEFAIRY,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 53,
                .species = SPECIES_MARILL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes2[] = {
        {
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_NIDORINA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 30,
                .species = SPECIES_NIDORINO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes3[] = {
        {
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_NIDOKING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_NIDOQUEEN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMilo2[] = {
        {
                .iv = 14,
                .lvl = 53,
                .species = SPECIES_PIDGEOTTO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_PIDGEOT,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChaz2[] = {
        {
                .iv = 14,
                .lvl = 53,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_FEAROW,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperHarold2[] = {
        {
                .iv = 14,
                .lvl = 53,
                .species = SPECIES_NOCTOWL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_NOCTOWL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole2[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_MARILL,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PsychicJaclyn2[] = {
        {
                .iv = 26,
                .lvl = 52,
                .species = SPECIES_NATU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH},
        },{
                .iv = 26,
                .lvl = 52,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN},
        },{
                .iv = 26,
                .lvl = 54,
                .species = SPECIES_KADABRA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir2[] = {
        {
                .iv = 14,
                .lvl = 55,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl2[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_ONIX,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry2[] = {
        {
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_MACHOKE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector2[] = {
        {
                .iv = 18,
                .lvl = 55,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 18,
                .lvl = 55,
                .species = SPECIES_KANGASKHAN,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PsychicDario2[] = {
        {
                .iv = 26,
                .lvl = 56,
                .species = SPECIES_GIRAFARIG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PsychicRodette2[] = {
        {
                .iv = 26,
                .lvl = 53,
                .species = SPECIES_NATU,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
        },{
                .iv = 26,
                .lvl = 53,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },{
                .iv = 26,
                .lvl = 53,
                .species = SPECIES_HYPNO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_JugglerMason2[] = {
        {
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_PINECO,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_ELECTRODE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 52,
                .species = SPECIES_PINECO,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerNicolas2[] = {
        {
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_VICTREEBEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        },{
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_VICTREEBEL,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_SLAM},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerMadeline2[] = {
        {
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_VILEPLUME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_SLEEP_POWDER},
        },{
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_VILEPLUME,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE},
        },
};
static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy2[] = {
        {
                .iv = 20,
                .lvl = 54,
                .species = SPECIES_PRIMEAPE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 20,
                .lvl = 54,
                .species = SPECIES_HITMONTOP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },{
                .iv = 20,
                .lvl = 54,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_BLACK_BELT,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan2[] = {
        {
                .iv = 19,
                .lvl = 52,
                .species = SPECIES_SANDSLASH,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 19,
                .lvl = 52,
                .species = SPECIES_LICKITUNG,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 19,
                .lvl = 55,
                .species = SPECIES_URSARING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerJackson2[] = {
        {
                .iv = 26,
                .lvl = 53,
                .species = SPECIES_TANGELA,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN},
        },{
                .iv = 26,
                .lvl = 54,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_STUN_SPORE, MOVE_REFLECT},
        },{
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerKatelyn2[] = {
        {
                .iv = 26,
                .lvl = 56,
                .species = SPECIES_CHANSEY,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerLeroy2[] = {
        {
                .iv = 26,
                .lvl = 52,
                .species = SPECIES_RHYDON,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE},
        },{
                .iv = 26,
                .lvl = 54,
                .species = SPECIES_SLOWBRO,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
        },{
                .iv = 26,
                .lvl = 52,
                .species = SPECIES_KANGASKHAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
        },{
                .iv = 26,
                .lvl = 52,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS},
        },{
                .iv = 26,
                .lvl = 55,
                .species = SPECIES_URSARING,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerMichelle2[] = {
        {
                .iv = 26,
                .lvl = 53,
                .species = SPECIES_PERSIAN,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE},
        },{
                .iv = 26,
                .lvl = 53,
                .species = SPECIES_DEWGONG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_SHEER_COLD},
        },{
                .iv = 26,
                .lvl = 54,
                .species = SPECIES_NINETALES,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE},
        },{
                .iv = 26,
                .lvl = 54,
                .species = SPECIES_RAPIDASH,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN},
        },{
                .iv = 26,
                .lvl = 56,
                .species = SPECIES_GIRAFARIG,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH},
        },
};
static const struct TrainerMonNoItemCustomMoves sParty_CoolCoupleLexNya2[] = {
        {
                .iv = 26,
                .lvl = 57,
                .species = SPECIES_MILTANK,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
        },{
                .iv = 26,
                .lvl = 57,
                .species = SPECIES_TAUROS,
                .variant = VARIANT_RANDOM,
                .moves = {MOVE_TAKE_DOWN, MOVE_SCARY_FACE, MOVE_PURSUIT, MOVE_SWAGGER},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton2[] = {
        {
                .iv = 2,
                .lvl = 19,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 19,
                .species = SPECIES_WEEDLE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 2,
                .lvl = 19,
                .species = SPECIES_METAPOD,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton3[] = {
        {
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_KAKUNA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 7,
                .lvl = 27,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton4[] = {
        {
                .iv = 14,
                .lvl = 51,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 54,
                .species = SPECIES_BEEDRILL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 14,
                .lvl = 51,
                .species = SPECIES_BUTTERFREE,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_POLIWRATH,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEADRA,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa2[] = {
        {
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_POLIWHIRL,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 9,
                .lvl = 49,
                .species = SPECIES_SEAKING,
                .variant = VARIANT_RANDOM,
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourLorelei2[] = {
        {
                .iv = 31,
                .lvl = 64,
                .species = SPECIES_DEWGONG,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_DOUBLE_TEAM},
        },{
                .iv = 31,
                .lvl = 63,
                .species = SPECIES_CLOYSTER,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SUPERSONIC, MOVE_RAIN_DANCE},
        },{
                .iv = 31,
                .lvl = 63,
                .species = SPECIES_PILOSWINE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE},
        },{
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_JYNX,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        },{
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_LAPRAS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_CHERI_BERRY,
                .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourBruno2[] = {
        {
                .iv = 31,
                .lvl = 65,
                .species = SPECIES_STEELIX,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_ROCK_TOMB},
        },{
                .iv = 31,
                .lvl = 65,
                .species = SPECIES_HITMONCHAN,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        },{
                .iv = 31,
                .lvl = 65,
                .species = SPECIES_HITMONLEE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        },{
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_STEELIX,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_DRAGON_BREATH},
        },{
                .iv = 31,
                .lvl = 68,
                .species = SPECIES_MACHAMP,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_PERSIM_BERRY,
                .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourAgatha2[] = {
        {
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_GENGAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS},
        },{
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_CROBAT,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        },{
                .iv = 31,
                .lvl = 65,
                .species = SPECIES_MISDREAVUS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ATTRACT},
        },{
                .iv = 31,
                .lvl = 68,
                .species = SPECIES_ARBOK,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        },{
                .iv = 31,
                .lvl = 70,
                .species = SPECIES_GENGAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_CHESTO_BERRY,
                .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB},
        },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourLance2[] = {
        {
                .iv = 31,
                .lvl = 68,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE},
        },{
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_DRAGONITE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER},
        },{
                .iv = 31,
                .lvl = 66,
                .species = SPECIES_KINGDRA,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_ICE_BEAM},
        },{
                .iv = 31,
                .lvl = 70,
                .species = SPECIES_AERODACTYL,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE},
        },{
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_DRAGONITE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_PERSIM_BERRY,
                .moves = {MOVE_HYPER_BEAM, MOVE_OUTRAGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        },
};
static const struct TrainerMonItemCustomMoves sParty_ChampionRematchSquirtle[] = {
        {
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_HERACROSS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        },{
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_TYRANITAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },{
                .iv = 31,
                .lvl = 75,
                .species = SPECIES_BLASTOISE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE},
        },
};
static const struct TrainerMonItemCustomMoves sParty_ChampionRematchBulbasaur[] = {
        {
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_HERACROSS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        },{
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_TYRANITAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_ARCANINE,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        },{
                .iv = 31,
                .lvl = 75,
                .species = SPECIES_VENUSAUR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY},
        },
};
static const struct TrainerMonItemCustomMoves sParty_ChampionRematchCharmander[] = {
        {
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_HERACROSS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_ALAKAZAM,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        },{
                .iv = 31,
                .lvl = 72,
                .species = SPECIES_TYRANITAR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_EXEGGUTOR,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },{
                .iv = 31,
                .lvl = 73,
                .species = SPECIES_GYARADOS,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_NONE,
                .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM},
        },{
                .iv = 31,
                .lvl = 75,
                .species = SPECIES_CHARIZARD,
                .variant = VARIANT_RANDOM,
                .heldItem = ITEM_SITRUS_BERRY,
                .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE},
        },
};
static const struct TrainerMonNoItemDefaultMoves sParty_CueBallPaxton[] = {
        {
                .iv = 6,
                .lvl = 39,
                .species = SPECIES_WEEZING,
                .variant = VARIANT_RANDOM,
        },{
                .iv = 6,
                .lvl = 39,
                .species = SPECIES_MUK,
                .variant = VARIANT_RANDOM,
        },
};
