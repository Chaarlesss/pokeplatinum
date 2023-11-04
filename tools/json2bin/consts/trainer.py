from enum import Enum, Flag, auto


class TrainerClass(Enum):
    TRAINER_CLASS_PLAYER_MALE = 0
    TRAINER_CLASS_PLAYER_FEMALE = auto()
    TRAINER_CLASS_YOUNGSTER = auto()
    TRAINER_CLASS_LASS = auto()
    TRAINER_CLASS_CAMPER = auto()
    TRAINER_CLASS_PICNICKER = auto()
    TRAINER_CLASS_BUG_CATCHER = auto()
    TRAINER_CLASS_AROMA_LADY = auto()
    TRAINER_CLASS_TWINS = auto()
    TRAINER_CLASS_HIKER = auto()
    TRAINER_CLASS_BATTLE_GIRL = auto()
    TRAINER_CLASS_FISHERMAN = auto()
    TRAINER_CLASS_CYCLIST_MALE = auto()
    TRAINER_CLASS_CYCLIST_FEMALE = auto()
    TRAINER_CLASS_BLACK_BELT = auto()
    TRAINER_CLASS_ARTIST = auto()
    TRAINER_CLASS_BREEDER_MALE = auto()
    TRAINER_CLASS_BREEDER_FEMALE = auto()
    TRAINER_CLASS_COWGIRL = auto()
    TRAINER_CLASS_JOGGER = auto()
    TRAINER_CLASS_POKEFAN_MALE = auto()
    TRAINER_CLASS_POKEFAN_FEMALE = auto()
    TRAINER_CLASS_POKE_KID = auto()
    TRAINER_CLASS_YOUNG_COUPLE = auto()
    TRAINER_CLASS_ACE_TRAINER_MALE = auto()
    TRAINER_CLASS_ACE_TRAINER_FEMALE = auto()
    TRAINER_CLASS_WAITRESS = auto()
    TRAINER_CLASS_VETERAN = auto()
    TRAINER_CLASS_NINJA_BOY = auto()
    TRAINER_CLASS_DRAGON_TAMER = auto()
    TRAINER_CLASS_BIRD_KEEPER = auto()
    TRAINER_CLASS_DOUBLE_TEAM = auto()
    TRAINER_CLASS_RICH_BOY = auto()
    TRAINER_CLASS_LADY = auto()
    TRAINER_CLASS_GENTLEMAN = auto()
    TRAINER_CLASS_SOCIALITE = auto()
    TRAINER_CLASS_BEAUTY = auto()
    TRAINER_CLASS_COLLECTOR = auto()
    TRAINER_CLASS_POLICEMAN = auto()
    TRAINER_CLASS_RANGER_MALE = auto()
    TRAINER_CLASS_RANGER_FEMALE = auto()
    TRAINER_CLASS_SCIENTIST = auto()
    TRAINER_CLASS_SWIMMER_MALE = auto()
    TRAINER_CLASS_SWIMMER_FEMALE = auto()
    TRAINER_CLASS_TUBER_MALE = auto()
    TRAINER_CLASS_TUBER_FEMALE = auto()
    TRAINER_CLASS_SAILOR = auto()
    TRAINER_CLASS_SIS_AND_BRO = auto()
    TRAINER_CLASS_RUIN_MANIAC = auto()
    TRAINER_CLASS_PSYCHIC_MALE = auto()
    TRAINER_CLASS_PSYCHIC_FEMALE = auto()
    TRAINER_CLASS_PI = auto()
    TRAINER_CLASS_GUITARIST = auto()
    TRAINER_CLASS_ACE_TRAINER_SNOW_MALE = auto()
    TRAINER_CLASS_ACE_TRAINER_SNOW_FEMALE = auto()
    TRAINER_CLASS_SKIER_MALE = auto()
    TRAINER_CLASS_SKIER_FEMALE = auto()
    TRAINER_CLASS_ROUGHNECK = auto()
    TRAINER_CLASS_CLOWN = auto()
    TRAINER_CLASS_WORKER = auto()
    TRAINER_CLASS_SCHOOL_KID_MALE = auto()
    TRAINER_CLASS_SCHOOL_KID_FEMALE = auto()
    TRAINER_CLASS_LEADER_ROARK = auto()
    TRAINER_CLASS_RIVAL = auto()
    TRAINER_CLASS_LEADER_BYRON = auto()
    TRAINER_CLASS_ELITE_FOUR_AARON = auto()
    TRAINER_CLASS_ELITE_FOUR_BERTHA = auto()
    TRAINER_CLASS_ELITE_FOUR_FLINT = auto()
    TRAINER_CLASS_ELITE_FOUR_LUCIAN = auto()
    TRAINER_CLASS_CHAMPION_CYNTHIA = auto()
    TRAINER_CLASS_BELLE_AND_PA = auto()
    TRAINER_CLASS_RANCHER = auto()
    TRAINER_CLASS_COMMANDER_MARS = auto()
    TRAINER_CLASS_GALACTIC_GRUNT_MALE = auto()
    TRAINER_CLASS_LEADER_GARDENIA = auto()
    TRAINER_CLASS_LEADER_WAKE = auto()
    TRAINER_CLASS_LEADER_MAYLENE = auto()
    TRAINER_CLASS_LEADER_FANTINA = auto()
    TRAINER_CLASS_LEADER_CANDICE = auto()
    TRAINER_CLASS_LEADER_VOLKNER = auto()
    TRAINER_CLASS_PARASOL_LADY = auto()
    TRAINER_CLASS_WAITER = auto()
    TRAINER_CLASS_INTERVIEWERS = auto()
    TRAINER_CLASS_CAMERAMAN = auto()
    TRAINER_CLASS_REPORTERS = auto()
    TRAINER_CLASS_IDOL = auto()
    TRAINER_CLASS_GALACTIC_BOSS = auto()
    TRAINER_CLASS_COMMANDER_JUPITER = auto()
    TRAINER_CLASS_COMMANDER_SATURN = auto()
    TRAINER_CLASS_GALACTIC_GRUNT_FEMALE = auto()
    TRAINER_CLASS_TRAINER_CHERYL = auto()
    TRAINER_CLASS_TRAINER_RILEY = auto()
    TRAINER_CLASS_TRAINER_MARLEY = auto()
    TRAINER_CLASS_TRAINER_BUCK = auto()
    TRAINER_CLASS_TRAINER_MIRA = auto()
    TRAINER_CLASS_DP_PLAYER_MALE = auto()
    TRAINER_CLASS_DP_PLAYER_FEMALE = auto()
    TRAINER_CLASS_TOWER_TYCOON = auto()
    TRAINER_CLASS_MAID = auto()
    TRAINER_CLASS_HALL_MATRON = auto()
    TRAINER_CLASS_FACTORY_HEAD = auto()
    TRAINER_CLASS_ARCADE_STAR = auto()
    TRAINER_CLASS_CASTLE_VALET = auto()
    TRAINER_CLASS_DP_PLAYER_MALE_2 = auto()
    TRAINER_CLASS_DP_PLAYER_FEMALE_2 = auto()


class AIFlag(Flag):
    AI_FLAG_BASIC = 1
    AI_FLAG_EVAL_ATTACK = auto()
    AI_FLAG_EXPERT = auto()
    AI_FLAG_SETUP_FIRST_TURN = auto()
    AI_FLAG_RISKY = auto()
    AI_FLAG_DAMAGE_PRIORITY = auto()
    AI_FLAG_BATON_PASS = auto()
    AI_FLAG_TAG_STRATEGY = auto()
    AI_FLAG_CHECK_HP = auto()
    AI_FLAG_WEATHER = auto()
    AI_FLAG_HARRASSMENT = auto()

