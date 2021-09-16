/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClientBase_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_ACQUISUTION_MANAGER_CHECK_FOR_ACQUISITON_POP       5.f
#define CONST_ACQUISUTION_MANAGER_CLUMP_TIMER                    0.5f
#define CONST_PROFILE_REQUEST_INTERVAL                           3
#define CONST_PROFILE_REQUEST_BUFFER_COUNT                       2
#define CONST_CHAT_FLAG_FEEDBACK                                 0x00000001
#define CONST_CHAT_FLAG_VGS                                      0x00000002
#define CONST_CHAT_FLAG_ONLY_OPEN                                0x00000004
#define CONST_CHAT_FLAG_IS_NEW                                   0x00000008
#define CONST_UPDATE_DELAY_COUNT                                 4
#define CONST_UPDATE_DELAY_RATE0                                 0
#define CONST_UPDATE_DELAY_RATE1                                 50
#define CONST_UPDATE_DELAY_RATE2                                 200
#define CONST_UPDATE_DELAY_RATE3                                 400
#define CONST_UPDATE_DELAY_UNSUBSCRIBE_FORCE                     10000
#define CONST_UPDATE_DELAY_RATE0_BIT                             0x00
#define CONST_UPDATE_DELAY_RATE1_BIT                             0x01
#define CONST_UPDATE_DELAY_RATE2_BIT                             0x02
#define CONST_UPDATE_DELAY_RATE3_BIT                             0x04
#define CONST_UPDATE_UNSUBSCRIBED_FORCE_BIT                      0x08
#define CONST_TG_INTERVAL_LOOP                                   -1
#define CONST_TG_INTERVAL_NOREPEAT                               0
#define CONST_TG_UPDATE_QUEUE_STATS_SECS                         10.0f
#define CONST_PARTY_INVITE_LOCKOUT_SECS                          5
#define CONST_PROCESS_ITEM_ALERT_SECS                            4.5f
#define CONST_PROCESS_SKILL_ALERT_SECS                           4.5f
#define CONST_TG_LOGIN_INFO_ACCOUNT_NAME                         0
#define CONST_TG_LOGIN_INFO_ACCOUNT_PASS                         1
#define CONST_CURRENT_SEASON                                     4
#define CONST_GOD_TARGETER_FLAG_SHOW_OWN_TEAM                    0x00000001
#define CONST_GOD_TARGETER_FLAG_SHOW_BOTH_TEAMS                  0x00000002
#define CONST_GOD_TARGETER_FLAG_MAKE_CLOSEABLE                   0x00000004
#define CONST_GOD_TARGETER_FLAG_HIDE_SELF                        0x00000008
#define CONST_GOD_TARGETER_FLAG_HIDE_OWN_GOD                     0x00000010
#define CONST_GOD_TARGETER_FLAG_PREVENT_TARGETTING_DEAD_GODS     0x00000020
#define CONST_GOD_TARGETER_FLAG_DISABLE_MOVEMENT                 0x00000040
#define CONST_GIFT_EMOTE_ITEM_ID                                 19583
#define CONST_GIFT_VP_ITEM_ID                                    19584
#define CONST_GIFT_T2_ITEM_ID                                    19585
#define CONST_GIFT_AWESOME_ITEM_ID                               19586
#define CONST_PT_DESC                                            1
#define CONST_PT_INPUT                                           2
#define CONST_PT_DUAL_INPUT                                      3
#define CONST_PT_SINGLE_INPUT                                    4
#define CONST_PT_DROP_DOWN                                       5
#define CONST_PT_BLOCKING                                        6
#define CONST_PT_EMAIL                                           7
#define CONST_PT_TREASURE_PURCHASE                               8
#define CONST_PT_DOUBLE_TEXT_INPUT                               9
#define CONST_PT_DROP_DOWN_INPUT                                 10
#define CONST_PT_DROP_DOWN_DOUBLE                                11
#define CONST_FA_POPUP_SUBMIT                                    -1
#define CONST_FA_POPUP_CANCEL                                    -2
#define CONST_FA_POPUP_BUY_GEMS                                  -3
#define CONST_FA_POPUP_PS4_STORE_CONFIRM                         -4
#define CONST_FA_POPUP_CLAN_INVITE                               -5
#define CONST_FA_POPUP_ERROR_OK                                  -6
#define CONST_FA_POPUP_NAME_CHANGE                               -7
#define CONST_FA_POPUP_NAME_CHANGE_CONT                          -8
#define CONST_FA_POPUP_FRIEND_MESSAGE_SUBMIT                     -9
#define CONST_FA_POPUP_ML_CLAN_QUIT                              -10
#define CONST_FA_POPUP_ML_CLAN_TRANSFER                          -11
#define CONST_FA_POPUP_ML_CLAN_TAG                               -12
#define CONST_FA_POPUP_TRADE_ACCEPT                              -13
#define CONST_FA_POPUP_TRADE_DECLINE                             -14
#define CONST_FA_POPUP_PREFERRED_SITE                            -15
#define CONST_FA_POPUP_FRIENDS_DECLINE_ALL                       -16
#define CONST_FA_POPUP_FRIENDS_ACCEPT_ALL                        -17
#define CONST_FA_POPUP_STORE_SELL_CONFIRM                        -18
#define CONST_FA_POPUP_WATCH_NEW_USER_VIDEO                      -19
#define CONST_FA_POPUP_RETURN_TO_LOBBY                           -20
#define CONST_FA_POPUP_CHALLENGE_PASS                            -22
#define CONST_FA_POPUP_QUEUE_FOR_TUTORIAL                        -21
#define CONST_FA_POPUP_ADD_FRIEND                                -23
#define CONST_FA_POPUP_RETURN_TO_LOGIN                           -24
#define CONST_FA_POPUP_TURN_OFF_ITEM_AUTO_BUY                    -25
#define CONST_FA_POPUP_CONTINUE_PLAY_WITH_LOGGEDIN_PLAYER        -26
#define CONST_FA_POPUP_CHANGE_PARTY_VISIBILITY                   -27
#define CONST_FA_POPUP_SUBMIT_EMAIL                              -28
#define CONST_FA_POPUP_CONFIRM_CHARACTER_BUILDER_SAVE            -29
#define CONST_FA_POPUP_CANCEL_CHARACTER_BUILDER_SAVE             -30
#define CONST_FA_POPUP_EXIT_GAME                                 -31
#define CONST_FA_POPUP_TREASURE_PURCHASE                         -32
#define CONST_FA_POPUP_APPLY_TO_CLAN                             -33
#define CONST_FA_POPUP_SPECTATE_MATCH_ID                         -34
#define CONST_FA_POPUP_ENTER_PASSWORD                            -35
#define CONST_FA_POPUP_ENTER_PASSWORD_REPLAY                     -36
#define CONST_FA_POPUP_SUBMIT_REDEEM_CODE                        -37
#define CONST_FA_POPUP_ABANDON_QUEST                             -38
#define CONST_FA_POPUP_SKIP_QUEST                                -39
#define CONST_FA_POPUP_CONFIRM_CLAN_PROMOTE                      -40
#define CONST_FA_POPUP_CONFIRM_CLAN_DEMOTE                       -41
#define CONST_FA_POPUP_CONFIRM_CLAN_KICK                         -42
#define CONST_FA_POPUP_MULTI_QUEUE_PROCEED                       -43
#define CONST_FA_POPUP_BLOCK_PLAYER                              -44
#define CONST_FA_POPUP_EDIT_PLAYER_NOTE                          -45
#define CONST_FA_POPUP_DLC_ACCEPT                                -46
#define CONST_FA_POPUP_DLC_DECLINE                               -47
#define CONST_FA_POPUP_OPEN_SETTINGS_MENU                        -48
#define CONST_FA_POPUP_AUTOCONFIGURE_SETTINGS                    -49
#define CONST_FA_POPUP_DISBAND_PARTY                             -50
#define CONST_FA_POPUP_CHANGE_MATCH                              -51
#define CONST_FA_POPUP_CANCEL_MATCH_CHANGE                       -52
#define CONST_FA_POPUP_REPORT_PLAYER                             -53
#define CONST_FA_POPUP_QUIT_TRAINING                             -54
#define CONST_FA_POPUP_QUEUE_ARENA_COOP                          -55
#define CONST_FA_POPUP_GOTO_COOP_QUEUES                          -56
#define CONST_FA_POPUP_OPEN_PARTY                                -57
#define CONST_FA_POPUP_CONTINUE_QUEUE_JOIN                       -58
#define CONST_FA_POPUP_PREFERRED_SITE_QUEUE                      -59
#define CONST_FA_POPUP_SKIP_QUEUE_TUTORIAL                       -60
#define CONST_FA_POPUP_SWITCH_TO_PRACTICE_QUEUE                  -61
#define CONST_FA_POPUP_CONTINUE_ITEM_PURCHASE                    -62
#define CONST_FA_POPUP_SUBMIT_TWO_FACTOR_AUTH                    -63
#define CONST_FA_POPUP_STEAM_LINK_WARNING                        -64
#define CONST_FA_POPUP_DECLINE_STEAM_LINK                        -65
#define CONST_FA_POPUP_SUBMIT_STEAM_LINK                         -66
#define CONST_FA_POPUP_SUBMIT_CROSSPLAY                          -67
#define CONST_FA_POPUP_ACCEPT_PARTY_INVITE                       -68
#define CONST_FA_POPUP_REJECT_PARTY_INVITE                       -69
#define CONST_FA_POPUP_CREATE_AND_LINK_ACCOUNT                   -70
#define CONST_FA_POPUP_LINK_EXISTING_HIREZ_ACCOUNT               -71
#define CONST_FA_POPUP_CONTINUE_WITHOUT_LINKING                  -72
#define CONST_FA_POPUP_HAVE_PLAYED_SMITE_BEFORE                  -73
#define CONST_FA_POPUP_NEVER_PLAYED_SMITE_BEFORE                 -74
#define CONST_FA_POPUP_CONFIRM_NO_LINKING                        -75
#define CONST_FA_POPUP_CANCEL_TWO_FACTOR_AUTH                    -76
#define CONST_FA_POPUP_CANCEL_CHALLENGE_PASS                     -77
#define CONST_FA_POPUP_PREFERRED_SITE_REDIRECT                   -80
#define CONST_ESPORTS_TEAMS_PER_MATCH                            2
#define CONST_MAX_ESPORTS_ROUNDS                                 3
#define CONST_ESPORTS_PHASE_NONE                                 0
#define CONST_ESPORTS_LIVE_WINDOW_MINS                           120
#define CONST_ESPORTS_PRE_LIVE_WINDOW_MINS                       15
#define CONST_ESPORTS_VIEWER_PASS_LTID                           80757
#define CONST_ESPORTS_VIEWER_PASS_PLUS_LTID                      80758
#define CONST_ESPORTS_VIEWER_PASS_POINTS_PACK_LTID               57870
#define CONST_ESPORTS_ACTIVITY_ID_FINAL_REWARD                   2576
#define CONST_ESPORTS_WEEKLY_VIEWS_ACTIVITY                      2450
#define CONST_ESPORTS_UPDATE_DELAY_SECS                          300
#define CONST_ESPORTS_CURRENT_SEASON                             8
#define CONST_PROCESS_MESSAGE_SECS                               2.0f
#define CONST_NUM_UI_DEVICES                                     25
#define CONST_MAX_UI_EFFECTS                                     32
#define CONST_DCTEAM_MAX_TOWERS                                  9
#define CONST_VENDOR_MENU_LOOT_TABLE_ID                          474
#define CONST_CHAT_PRIORITY_DELAY                                0.25
#define CONST_MAX_DAMAGE_CLIPS                                   5
#define CONST_TAG_HIDE_DURATION                                  5
#define CONST_QUEUED_DAMAGE_INFO_DELAY                           0.1
#define CONST_QUEUE_CONQUEST_PREMADE                             423
#define CONST_QUEUE_NOVICE                                       424
#define CONST_QUEUE_CONQUEST                                     426
#define CONST_QUEUE_JOUST_SOLO                                   427
#define CONST_QUEUE_CONQUEST_CHALLENGE                           429
#define CONST_QUEUE_CONQUEST_RANKED                              430
#define CONST_QUEUE_MOTD                                         434
#define CONST_QUEUE_ARENA                                        435
#define CONST_QUEUE_ARENA_DEV                                    437
#define CONST_QUEUE_ARENA_CHALLENGE                              438
#define CONST_QUEUE_DOMINATION_CHALLENGE                         439
#define CONST_QUEUE_JOUST_SOLO_RANKED                            440
#define CONST_QUEUE_JOUST_CHALLENGE                              441
#define CONST_QUEUE_TEAM_RANKED                                  442
#define CONST_QUEUE_ARENA_PRACTICE                               443
#define CONST_QUEUE_ARENA_SOLO                                   443
#define CONST_QUEUE_JUNGLE_PRACTICE                              444
#define CONST_QUEUE_ASSAULT                                      445
#define CONST_QUEUE_ASSAULT_CHALLENGE                            446
#define CONST_QUEUE_JOUST_3V3                                    448
#define CONST_QUEUE_JOUST                                        449
#define CONST_QUEUE_JOUST_3V3_RANKED                             450
#define CONST_QUEUE_CONQUEST_SOLO_MASTER                         451
#define CONST_QUEUE_ARENA_LEAGUE                                 452
#define CONST_QUEUE_ASSAULT_COOP                                 454
#define CONST_QUEUE_JOUST_COOP                                   456
#define CONST_QUEUE_ARENA_COOP                                   457
#define CONST_QUEUE_CONQUEST_PRACTICE                            458
#define CONST_QUEUE_SIEGE                                        459
#define CONST_QUEUE_SIEGE_CHALLENGE                              460
#define CONST_QUEUE_CONQUEST_COOP                                461
#define CONST_QUEUE_ARENA_TUTORIAL                               462
#define CONST_QUEUE_CONQUEST_TUTORIAL                            463
#define CONST_QUEUE_JOUST_3V3_SOLO                               464
#define CONST_QUEUE_JOUST_PRACTICE                               464
#define CONST_QUEUE_EVENT                                        465
#define CONST_QUEUE_CLASH                                        466
#define CONST_QUEUE_CLASH_CHALLENGE                              467
#define CONST_QUEUE_ARENA_COOP_MEDIUM                            468
#define CONST_QUEUE_CLASH_COOP                                   469
#define CONST_QUEUE_CLASH_PRACTICE                               470
#define CONST_QUEUE_CLASH_TUTORIAL                               471
#define CONST_QUEUE_ARENA_TRAINING                               482
#define CONST_QUEUE_JOUST_3V3_TRAINING                           483
#define CONST_QUEUE_PVE_EASY                                     484
#define CONST_QUEUE_PVE_HARD                                     485
#define CONST_QUEUE_ADVENTURES_CTF                               486
#define CONST_QUEUE_ADVENTURES_CTF_CUSTOM                        487
#define CONST_QUEUE_ADVENTURES_RACER                             488
#define CONST_QUEUE_ADVENTURES_DUNGEON                           489
#define CONST_QUEUE_ADVENTURES_DUNGEON_HARD                      490
#define CONST_QUEUE_ADVENTURES_CORRUPT                           491
#define CONST_QUEUE_ADVENTURES_LOKI_EASY                         492
#define CONST_QUEUE_ADVENTURES_LOKI_MED                          493
#define CONST_QUEUE_ADVENTURES_LOKI_HARD                         494
#define CONST_QUEUE_ADVENTURES_FOX                               495
#define CONST_QUEUE_ADVENTURES_HEL                               497
#define CONST_QUEUE_ADVENTURES_MULTI_TEAM                        498
#define CONST_QUEUE_ADVENTURES_JOUST                             499
#define CONST_QUEUE_ADVENTURES_DOMINATION                        500
#define CONST_QUEUE_EVENT01                                      508
#define CONST_QUEUE_S6_ADVENTURES_ARENA                          508
#define CONST_QUEUE_ADVENTURES_ARENA_CUSTOM                      10151
#define CONST_QUEUE_ADVENTURES_DOMINATION_CUSTOM                 10174
#define CONST_QUEUE_JUNGLE_PRACTICE_PRESELECTED                  496
#define CONST_QUEUE_CONQUEST_RANKED_CONTROLLER                   504
#define CONST_QUEUE_CONQUEST_RANKED_CONTROLLER2                  505
#define CONST_QUEUE_JOUST_3V3_RANKED_CONTROLLER                  506
#define CONST_QUEUE_JOUST_3V3_RANKED_CONTROLLER2                 503
#define CONST_QUEUE_JOUST_1V1_RANKED_CONTROLLER                  502
#define CONST_QUEUE_JOUST_1V1_RANKED_CONTROLLER2                 507
#define CONST_QUEUE_SOVEREIGN                                    10127
#define CONST_QUEUE_SOVEREIGN_CUSTOM                             10126
#define CONST_QUEUE_MULTI_QUEUE                                  999
#define CONST_QUEUE_NGM3_DEV                                     10147
#define CONST_QUEUE_NGM3_CUSTOM_DEV                              10148
#define CONST_HIDE_SORT_ORDER_SENTINEL                           0
#define CONST_REWARD_SECTION_SENTINEL                            0
#define CONST_SORT_ORDERS_PER_SECTION                            100
#define CONST_FRIEND_REQUEST_FREQ_SECS                           60
#define CONST_SEARCH_FLAG_NONE                                   0x0000
#define CONST_SEARCH_FLAG_LOCAL                                  0x0001
#define CONST_SEARCH_FLAG_ONLINE                                 0x0002
#define CONST_SEARCH_FLAG_PENDING_LOCAL                          0x0010
#define CONST_SEARCH_FLAG_PENDING_ONLINE                         0x0020
#define CONST_SEARCH_FLAG_IGNORE_LOCAL                           0x0100
#define CONST_SEARCH_FLAG_IGNORE_ONLINE                          0x0200
#define CONST_SEARCH_FLAG_IGNORE_ALL                             0x0300
#define CONST_SEARCH_MASK_START_LOCAL                            0x0011
#define CONST_SEARCH_MASK_START_ONLINE                           0x0022
#define CONST_SEARCH_MASK_START_ALL                              0x0033
#define CONST_SEARCH_MASK_PENDING_ANY                            0x0030
#define CONST_SEARCH_MASK_ALL                                    0x0333
#define CONST_SEARCH_DELAY_ONLINE_MIN_SECS                       1.f
#define CONST_SEARCH_DELAY_NO_SEARCH                             -1.f
#define CONST_CHAT_COUNT                                         8
#define CONST_CHAT_TAB_COUNT                                     2
#define CONST_NUM_LOGIN_GAMEPAD_COMBO                            3
#define CONST_NUM_PLAYER_INVITE_ROWS                             5
#define CONST_NUM_BUDDY_ROWS                                     6
#define CONST_MAX_INVITES_AT_ONCE                                10
#define CONST_CLASS_LOCKIN_FAIL                                  0
#define CONST_TRADE_ONLY_DURATION                                10.f
#define CONST_MAX_REROLLS                                        1
#define CONST_MAX_PARTY_REFRESH_SECS                             0
#define CONST_MATCH_COUNT_REQUIREMENT                            5
#define CONST_TOTAL_FEATURED_QUEUES                              4
#define CONST_TAB_PRACTICE                                       10495
#define CONST_TAB_NORMAL                                         10496
#define CONST_TAB_LEAGUE                                         10574
#define CONST_TAB_CUSTOM                                         10497
#define CONST_TAB_COOP                                           10748
#define CONST_GAME_MODE_GROUPS                                   1092
#define CONST_GAME_TYPE                                          1093
#define CONST_UI_GROUPS                                          1033
#define CONST_DIFFICULTY_GROUPS                                  116
#define CONST_PLAYER_STATUS_None                                 0x00000000
#define CONST_PLAYER_STATUS_Online                               0x00000001
#define CONST_PLAYER_STATUS_InTitle                              0x00000002
#define CONST_PLAYER_STATUS_LoggedIn                             0x00000004
#define CONST_PLAYER_STATUS_DoNotDisturb                         0x00000008
#define CONST_PLAYER_STATUS_Blocked                              0x00000010
#define CONST_PLAYER_STATUS_VoiceMuted                           0x00000020
#define CONST_PLAYER_STATUS_FriendReqSent                        0x00000040
#define CONST_PLAYER_STATUS_FriendReqReceived                    0x00000080
#define CONST_PLAYER_STATUS_InFriends                            0x00000100
#define CONST_PLAYER_STATUS_InOurClan                            0x00000200
#define CONST_PLAYER_STATUS_InOurParty                           0x00000400
#define CONST_PLAYER_STATUS_ChatMuted                            0x00000800
#define CONST_PLAYER_STATUS_InAClan                              0x00001000
#define CONST_PLAYER_STATUS_InAParty                             0x00002000
#define CONST_PLAYER_STATUS_InPortalFriends                      0x00004000
#define CONST_PLAYER_STATUS_InHirezFriends                       0x00008000
#define CONST_PLAYER_STATUS_MASK_ALL                             0x0000FFFF
#define CONST_MAX_PARTY_SIZE                                     5
#define CONST_GENERATOR_UPDATE_SECS                              300
#define CONST_GENERATOR_EXPIRE_SECS                              1200
#define CONST_TPGID_None                                         0x00
#define CONST_TPGID_Friends                                      0x01
#define CONST_TPGID_Party                                        0x02
#define CONST_TPGID_Clan                                         0x04
#define CONST_TPGID_LocalPlayer                                  0x08
#define CONST_TPGID_DynamicStart                                 0x10
#define CONST_MAX_NUM_SHOP_ITEMS                                 6
#define CONST_MAX_NUM_INV_ITEMS                                  6
#define CONST_CONFIG_SET_BUILDER                                 51
#define CONST_MAX_ADV_ITEMS                                      6
#define CONST_FILTER_ALL                                         -1
#define CONST_FILTER_POPULAR                                     0x00000002
#define CONST_FILTER_PHY_POWER                                   0x00000004
#define CONST_FILTER_PHY_ATTACK_SPEED                            0x00000008
#define CONST_FILTER_PHY_CRIT                                    0x00000010
#define CONST_FILTER_PHY_LIFESTEAL                               0x00000020
#define CONST_FILTER_PHY_PENETRATION                             0x00000040
#define CONST_FILTER_PHY_ALL                                     0x0000007C
#define CONST_FILTER_MAG_POWER                                   0x00000080
#define CONST_FILTER_MAG_MANA                                    0x00000100
#define CONST_FILTER_MAG_MP5                                     0x00000200
#define CONST_FILTER_MAG_LIFESTEAL                               0x00000400
#define CONST_FILTER_MAG_PENETRATION                             0x00000800
#define CONST_FILTER_MAG_ALL                                     0x00000C88
#define CONST_FILTER_DEF_PHYSICAL                                0x00001000
#define CONST_FILTER_DEF_MAGICAL                                 0x00002000
#define CONST_FILTER_DEF_HEALTH                                  0x00004000
#define CONST_FILTER_DEF_HP5                                     0x00008000
#define CONST_FILTER_DEF_AURA                                    0x00010000
#define CONST_FILTER_MOVEMENT                                    0x00020000
#define CONST_FILTER_COOLDOWN                                    0x00040000
#define CONST_FILTER_UTIL_ALL                                    0x00070300
#define CONST_FILTER_CONSUMABLE                                  0x00080000
#define CONST_FILTER_ACTIVE                                      0x00100000
#define CONST_FILTER_STARTER                                     0x00200000
#define CONST_FILTER_OWNED                                       0x00400000
#define CONST_FILTER_OWNED_ACTIVE                                0x00400001
#define CONST_FILTER_OWNED_CONSUMABLE                            0x00400002
#define CONST_FILTER_OWNED_ITEM                                  0x00400003
#define CONST_FILTER_RECOMMENDED                                 0x00700001
#define CONST_FILTER_RECOMMENDED01                               0x00700002
#define CONST_FILTER_RECOMMENDED02                               0x00700003
#define CONST_FILTER_RECOMMENDED03                               0x00700004
#define CONST_FILTER_RECOMMENDED04                               0x00700005
#define CONST_FILTER_RECOMMENDED05                               0x00700006
#define CONST_FILTER_RECOMMENDED06                               0x00700007
#define CONST_FILTER_CROWD_CONTROL_R                             0x01000000
#define CONST_FILTER_DEF_ALL                                     0x0100F000
#define CONST_STORE_BTN_COUNT                                    2
#define CONST_STORE_TAB_COUNT                                    3
#define CONST_STORE_REC_ITEM_MAX                                 4
#define CONST_STORE_REC_HEAD_COUNT                               4
#define CONST_STORE_REC_LIST_COUNT                               12
#define CONST_STORE_REC_GRID_COUNT                               16
#define CONST_STORE_STD_LIST_COUNT                               12
#define CONST_STORE_STD_GRID_COUNT                               24
#define CONST_STORE_STAT_COUNT                                   20
#define CONST_STORE_FILTER_COUNT                                 4
#define CONST_STORE_SUBFILTER_COUNT                              19
#define CONST_STORE_TIER_ROW_COUNT                               4
#define CONST_STORE_TIER1_COUNT                                  4
#define CONST_STORE_TIER2_COUNT                                  4
#define CONST_STORE_TIER3_COUNT                                  4
#define CONST_STORE_TIER4_COUNT                                  4
#define CONST_STORE_STD_GRID_COLUMNS                             4
#define CONST_STORE_STD_LIST_GUIDE_COUNT                         6
#define CONST_STORE_STD_GRID_GUIDE_COUNT                         32
#define CONST_STORE_STAT_GUIDE_COUNT                             16
#define CONST_STORE_TIER_GUIDE_COUNT                             3
#define CONST_ROLE_BUILD_CUSTOM                                  18015
#define CONST_ROLE_BUILD_ARENA                                   10782
#define CONST_ROLE_BUILD_CARRY                                   18012
#define CONST_ROLE_BUILD_JUNGLE                                  10767
#define CONST_ROLE_BUILD_MID                                     18013
#define CONST_ROLE_BUILD_SOLO                                    10769
#define CONST_ROLE_BUILD_SUPPORT                                 10768
#define CONST_ROLE_BUILD_STANDARD                                10770
#define CONST_ROLE_BUILD_TUTORIAL                                10784
#define CONST_ROLE_BUILD_TUTORIAL_CONQUEST                       11085
#define CONST_ROLE_BUILD_TUTORIAL_ARENA                          11086
#define CONST_STORE_GOD_PACK_ITEM_ID                             -1
#define CONST_NAME_CHANGE_ITEM                                   8186
#define CONST_STORE_FILTER_None                                  0x00000000
#define CONST_STORE_FILTER_SortOnly                              0x00000000
#define CONST_STORE_FILTER_OnSale                                0x00000001
#define CONST_STORE_FILTER_Available                             0x00000002
#define CONST_STORE_FILTER_NotOwned                              0x00000004
#define CONST_STORE_FILTER_GodOwned                              0x00000008
#define CONST_STORE_FILTER_Avatars                               0x00000010
#define CONST_STORE_FILTER_Default                               0x00000007
#define CONST_INVALIDATION_TYPE_NONE                             0x00000000
#define CONST_INVALIDATION_TYPE_ALL                              0xFFFFFFFF
#define CONST_INVALIDATION_TYPE_POSITION                         0x00000001
#define CONST_INVALIDATION_TYPE_SIZE                             0x00000002
#define CONST_INVALIDATION_TYPE_BOUNDS                           0x00000003
#define CONST_INVALIDATION_TYPE_LAYOUT                           0x00000004
#define CONST_INVALIDATION_TYPE_ALIGNMENT                        0x00000008
#define CONST_INVALIDATION_TYPE_STATE                            0x00000010
#define CONST_INVALIDATION_TYPE_DATA                             0x00000020
#define CONST_INVALIDATION_TYPE_LOAD                             0x00000040
#define CONST_INVALIDATION_TYPE_PROPERTY                         0x00000080
#define CONST_INVALIDATION_TYPE_SCROLL                           0x00000100
#define CONST_INVALIDATION_TYPE_CUSTOM                           0x80000000
#define CONST_INVALIDATION_TYPE_CUSTOM01                         0x40000000
#define CONST_INVALIDATION_TYPE_CUSTOM02                         0x20000000
#define CONST_INVALIDATION_TYPE_CUSTOM03                         0x10000000
#define CONST_UNIT_SHOP_LENGTH                                   6
#define CONST_UNIT_INVENTORY_LENGTH                              10
#define CONST_STORE_COL_NUM                                      6
#define CONST_STORE_ROW_NUM                                      5
#define CONST_STORE_INV_COL_NUM                                  6
#define CONST_BTN_HIGH_ALPHA                                     100
#define CONST_BTN_LOW_ALPHA                                      25
#define CONST_STORE_RECOMMENDED_ITEM_MAX                         64
#define CONST_STORE_RECOMMENDED_DIVIDER_COUNT                    5
#define CONST_STORE_STATS_COUNT                                  20
#define CONST_STORE_CIRCULAR_SELECTION_COUNT                     12
#define CONST_STORE_RECOMMENDED_TEXT_COUNT                       5
#define CONST_STORE_ITEM_DISPLAY_COUNT                           30
#define CONST_STORE_INVENTORY_DISPLAY_COUNT                      6
#define CONST_STORE_INVENTORY_FLASH_COUNT                        8
#define CONST_STORE_ACTIVE_DISPLAY_COUNT                         2
#define CONST_STORE_CONSUMABLE_DISPLAY_COUNT                     2
#define CONST_STORE_BUTTON_STACK_DISPLAY_COUNT                   4
#define CONST_VGS_LIST_COUNT                                     15
#define CONST_RECENT_COMMANDS_NUM                                30
#define CONST_DCLOBBY_MAX_CLASSES                                150
#define CONST_DCLOBBY_MAX_TRADE_DATA                             5
#define CONST_DCLOBBY_MAX_TEAMS                                  4
#define CONST_DCTEAM_MAX_MEMBERS                                 10
#define CONST_DCTEAM_MAX_BANS                                    6
#define CONST_LOBBY_PLAYERS_PER_TEAM                             5
#define CONST_LOBBY_MAX_TEAM_COUNT                               4
#define CONST_TG_MAX_TOTAL_PING                                  10
#define CONST_FA_POPUP_NAVIGATE_TO_CLAN                          -79
#define CONST_FA_POPUP_STORE_CONFIRM_AUTOBUY                     -78
#define CONST_MCTS_STYLE_MCTS_ONLY                               0x02
#define CONST_MCTS_STYLE_WAIT                                    0x01
#define CONST_MCTS_STYLE_NONE                                    0x00
#define CONST_MAX_MEMBER                                         512
#define CONST_POPUP_MANAGER_UPDATE_DELAY                         250
#define CONST_PERMISS_FLAG_LOGIN                                 0x00000001
#define CONST_PERMISS_FLAG_MAINLOBBY                             0x00000002
#define CONST_PERMISS_FLAG_MATCHLOBBY                            0x00000004
#define CONST_PERMISS_FLAG_ENDOFMATCH                            0x00000008
#define CONST_PERMISS_FLAG_INGAME                                0x00000010
#define CONST_PERMISS_MASK_FRONTEND                              0x0000000E
#define CONST_PERMISS_MASK_OUTOFGAME                             0x0000000F
#define CONST_PERMISS_MASK_ANY_LOGGEDIN                          0x0000001E
#define CONST_PERMISS_MASK_ALL                                   0x0000001F

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TgClientBase.TgAcquisitionManager.AcquisitionType
/*enum AcquisitionType
{
	MA_AT_NONE                                         = 0,
	MA_AT_DIRECT_UNLOCK                                = 1,
	MA_AT_CHEST_UNLOCK                                 = 2,
	MA_AT_RETURNING_PLAYER_REWARD                      = 3,
	MA_AT_GIFT_RECEIVED                                = 4,
	MA_AT_EXTERNAL                                     = 5,
	MA_AT_FWOTD                                        = 6,
	MA_AT_LEVEL_REWARD                                 = 7,
	MA_AT_EVENT_REWARD                                 = 8,
	MA_AT_BATTLEPASS_REWARD                            = 9,
	MA_AT_QUEST_REWARD                                 = 10,
	MA_AT_ACHIEVEMENT                                  = 11,
	MA_AT_ACHIEVEMENT_REWARD                           = 12,
	MA_AT_DAILY_REWARD                                 = 13,
	MA_AT_ACCOUNT_BOOSTER_BONUS                        = 14,
	MA_AT_MAX                                          = 15
};*/

// Enum TgClientBase.TgAcquisitionManager.AcquisitionSubType
/*enum AcquisitionSubType
{
	MA_AST_NONE                                        = 0,
	MA_AST_BATTLEPASS_FREE_REWARD                      = 1,
	MA_AST_BATTLEPASS_PREMIUM_REWARD                   = 2,
	MA_AST_MAX                                         = 3
};*/

// Enum TgClientBase.TgBrowserManager.WebPageType
/*enum WebPageType
{
	WPT_Gold                                           = 0,
	WPT_CreateAccount                                  = 1,
	WPT_RecoverPassword                                = 2,
	WPT_RecoverUsername                                = 3,
	WPT_GodPack                                        = 4,
	WPT_FacebookPromo                                  = 5,
	WPT_TwitterPromo                                   = 6,
	WPT_RecruitPromo                                   = 7,
	WPT_ReferLinkup                                    = 8,
	WPT_MAX                                            = 9
};*/

// Enum TgClientBase.TgGFxObject.EGFxFocusMode
/*enum EGFxFocusMode
{
	GFX_FOCUSMODE_Default                              = 0,
	GFX_FOCUSMODE_Loop                                 = 1,
	GFX_FOCUSMODE_Stick                                = 2,
	GFX_FOCUSMODE_MAX                                  = 3
};*/

// Enum TgClientBase.TgClientHUD.TgClientVisibilityMode
/*enum TgClientVisibilityMode
{
	CVM_NORMAL                                         = 0,
	CVM_ENEMY                                          = 1,
	CVM_PLAYERS                                        = 2,
	CVM_ALL                                            = 3,
	CVM_MAX                                            = 4
};*/

// Enum TgClientBase.TgClientHUD.TgClientGameStates
/*enum TgClientGameStates
{
	CGS_NONE                                           = 0,
	CGS_DISCONNECTED                                   = 1,
	CGS_LOGGED_IN                                      = 2,
	CGS_IN_PRACTICE                                    = 3,
	CGS_IN_MATCH                                       = 4,
	CGS_END_OF_MATCH                                   = 5,
	CGS_SPECTATOR                                      = 6,
	CGS_MAX                                            = 7
};*/

// Enum TgClientBase.TgClientHUD.TgGameSceneInfoType
/*enum TgGameSceneInfoType
{
	TGGSIT_ALL                                         = 0,
	TGGSIT_GLOBAL                                      = 1,
	TGGSIT_KBM                                         = 2,
	TGGSIT_CONTROLLER                                  = 3,
	TGGSIT_SPECTATOR_KBM                               = 4,
	TGGSIT_SPECTATOR_CONTROLLER                        = 5,
	TGGSIT_EXPERIMENTAL_HUD                            = 6,
	TGGSIT_MAX                                         = 7
};*/

// Enum TgClientBase.TgClientHUD.TgLobbySceneInfoType
/*enum TgLobbySceneInfoType
{
	TGLSIT_ALL                                         = 0,
	TGLSIT_PC                                          = 1,
	TGLSIT_Console                                     = 2,
	TGLSIT_MAX                                         = 3
};*/

// Enum TgClientBase.TgMoviePlayer.EUIChangeEvent
/*enum EUIChangeEvent
{
	UICE_PlayerItems                                   = 0,
	UICE_PlayerInfo                                    = 1,
	UICE_PlayerVitals                                  = 2,
	UICE_PlayerStats                                   = 3,
	UICE_GameClock                                     = 4,
	UICE_GameScore                                     = 5,
	UICE_GameTransition                                = 6,
	UICE_DeviceStateChange                             = 7,
	UICE_PlayerSurrender                               = 8,
	UICE_ClientSettingsChange                          = 9,
	UICE_PlayerReady                                   = 10,
	UICE_InventoryChange                               = 11,
	UICE_PlayerRespawn                                 = 12,
	UICE_GameCapturePointControlA                      = 13,
	UICE_GameCapturePointControlB                      = 14,
	UICE_GameCapturePointControlC                      = 15,
	UICE_TutorialHighlighter                           = 16,
	UICE_MAX                                           = 17
};*/

// Enum TgClientBase.TgMoviePlayer.EFeatureType
/*enum EFeatureType
{
	EFT_Item                                           = 0,
	EFT_TopBarNavigation                               = 1,
	EFT_ExternalURL                                    = 2,
	EFT_InternalURL                                    = 3,
	EFT_OpenVideo                                      = 4,
	EFT_RunFunction                                    = 5,
	EFT_EsportsMatch                                   = 6,
	EFT_WebPanel                                       = 7,
	EFT_ExternalPurchase                               = 8,
	EFT_SKU_Purchase                                   = 9,
	EFT_MAX                                            = 10
};*/

// Enum TgClientBase.TgMoviePlayer.ENavigationActions
/*enum ENavigationActions
{
	ENA_None                                           = 0,
	ENA_Home                                           = 1,
	ENA_Profile                                        = 2,
	ENA_Wisdom                                         = 3,
	ENA_Store                                          = 4,
	ENA_Social                                         = 5,
	ENA_Competitive                                    = 6,
	ENA_Play                                           = 7,
	ENA_Gods                                           = 8,
	ENA_Event                                          = 9,
	ENA_BattlePass                                     = 10,
	ENA_TreasureChest                                  = 11,
	ENA_Quests                                         = 12,
	ENA_Settings                                       = 13,
	ENA_ClaimGodPack                                   = 14,
	ENA_Reward                                         = 15,
	ENA_ReferAFriend                                   = 16,
	ENA_Adventures                                     = 17,
	ENA_AdventuresVault                                = 18,
	ENA_MatchLobby                                     = 19,
	ENA_TutorialPrompt                                 = 20,
	ENA_ESportsStore                                   = 21,
	ENA_WhatsNew                                       = 22,
	ENA_Simulmedia                                     = 23,
	ENA_MAX                                            = 24
};*/

// Enum TgClientBase.TgMoviePlayer.EActiveEvents
/*enum EActiveEvents
{
	EAE_None                                           = 0,
	EAE_Seasonal                                       = 1,
	EAE_Seasonal2                                      = 2,
	EAE_Seasonal3                                      = 3,
	EAE_SeasonalOdyssey                                = 4,
	EAE_SeasonalDivineUprising                         = 5,
	EAE_SeasonalRedBull                                = 6,
	EAE_SeasonalCalendar                               = 7,
	EAE_MorganEvent                                    = 8,
	EAE_ReapingEvent                                   = 9,
	EAE_MAX                                            = 10
};*/

// Enum TgClientBase.TgMoviePlayer.ELocationLog
/*enum ELocationLog
{
	ELL_NONE                                           = 0,
	ELL_STORE                                          = 1,
	ELL_GODPAGE                                        = 2,
	ELL_MATCHLOBBY                                     = 3,
	ELL_EVENT                                          = 4,
	ELL_CHEAT                                          = 5,
	ELL_SEASONTICKET_DEPRECATED                        = 6,
	ELL_LOADOUT                                        = 7,
	ELL_HOMEPAGE                                       = 8,
	ELL_REWARDCENTER                                   = 9,
	ELL_VAULT                                          = 10,
	ELL_EOML                                           = 11,
	ELL_BUYALL                                         = 12,
	ELL_PROFILE                                        = 13,
	ELL_FRIENDSLIST                                    = 14,
	ELL_BATTLEPASS                                     = 15,
	ELL_ESPORTSSTORE                                   = 16,
	ELL_MOREPOINTS                                     = 17,
	ELL_MAX                                            = 18
};*/

// Enum TgClientBase.TgMoviePlayer.EButtonPromptSetting
/*enum EButtonPromptSetting
{
	EBPS_Xbox                                          = 0,
	EBPS_PS4                                           = 1,
	EBPS_Switch                                        = 2,
	EBPS_MAX                                           = 3
};*/

// Enum TgClientBase.TgMoviePlayer.EActionLog
/*enum EActionLog
{
	EAL_NONE                                           = 0,
	EAL_STORE                                          = 1,
	EAL_BUYITEM                                        = 2,
	EAL_CENTERPLAY                                     = 3,
	EAL_QUICK1                                         = 4,
	EAL_QUICK2                                         = 5,
	EAL_QUICK3                                         = 6,
	EAL_QUICK4                                         = 7,
	EAL_JOINSOLO                                       = 8,
	EAL_JOINPARTY                                      = 9,
	EAL_INVITEPARTY                                    = 10,
	EAL_CANCELPARTY                                    = 11,
	EAL_LEAVEQUEUE                                     = 12,
	EAL_PLAYAGAIN                                      = 13,
	EAL_RENTITEM                                       = 14,
	EAL_JSONPANEL                                      = 15,
	EAL_GIFTING                                        = 16,
	EAL_MAX                                            = 17
};*/

// Enum TgClientBase.TgMoviePlayer.EBuddyStatus
/*enum EBuddyStatus
{
	BUS_OFFLINE                                        = 0,
	BUS_INCOMING_FRIEND_REQUEST                        = 1,
	BUS_SENT_FRIEND_REQUEST                            = 2,
	BUS_DND                                            = 3,
	BUS_IN_MATCH                                       = 4,
	BUS_INVITE_PENDING                                 = 5,
	BUS_IN_PARTY                                       = 6,
	BUS_IN_QUEUE                                       = 7,
	BUS_IN_LOBBY                                       = 8,
	BUS_IN_GAME                                        = 9,
	BUS_IS_SPECTATING                                  = 10,
	BUS_MAX                                            = 11
};*/

// Enum TgClientBase.TgMoviePlayer.EUIDisplayMode
/*enum EUIDisplayMode
{
	UIDM_LOGIN                                         = 0,
	UIDM_NEW_USER                                      = 1,
	UIDM_NORMAL                                        = 2,
	UIDM_EOM                                           = 3,
	UIDM_MAX                                           = 4
};*/

// Enum TgClientBase.TgMoviePlayer.EPlayerFeedbackType
/*enum EPlayerFeedbackType
{
	EPFT_Matchmaking                                   = 0,
	EPFT_ServerStability                               = 1,
	EPFT_MAX                                           = 2
};*/

// Enum TgClientBase.TgEOMLobbyDC_Team.PlayerStatAwardPriority
/*enum PlayerStatAwardPriority
{
	PSAP_PLAYER_DAMAGE                                 = 0,
	PSAP_WARDS_PLACED                                  = 1,
	PSAP_PLAYER_HEALING                                = 2,
	PSAP_PLAYER_KILLS                                  = 3,
	PSAP_PLAYER_ASSISTS                                = 4,
	PSAP_DAMAGE_MITIGATED                              = 5,
	PSAP_DAMAGE_TAKEN                                  = 6,
	PSAP_PLAYER_DEATHS                                 = 7,
	PSAP_DAMAGE_TOWER                                  = 8,
	PSAP_GOLD                                          = 9,
	PSAP_DAMAGE_BOT                                    = 10,
	PSAP_MAX                                           = 11
};*/

// Enum TgClientBase.TgEsportsManager.ETgEsportsEvent
/*enum ETgEsportsEvent
{
	EVENT_ESports_ImageLoaded                          = 0,
	EVENT_ESports_UpdateMatches                        = 1,
	EVENT_ESports_UpdatePicks                          = 2,
	EVENT_ESports_UpdateJSON                           = 3,
	EVENT_ESports_MAX                                  = 4
};*/

// Enum TgClientBase.TgGameDC_Chat.TG_CHAT_PRIORITY
/*enum TG_CHAT_PRIORITY
{
	CHAT_PRIORITY_THROWAWAY                            = 0,
	CHAT_PRIORITY_NORMAL                               = 1,
	CHAT_PRIORITY_HIGH                                 = 2,
	CHAT_PRIORITY_INTERRUPT                            = 3,
	CHAT_PRIORITY_MAX                                  = 4
};*/

// Enum TgClientBase.TgGameDC_Game.GAME_MODE_TYPE
/*enum GAME_MODE_TYPE
{
	GAME_TYPE_BATTLE                                   = 0,
	GAME_TYPE_ARENA                                    = 1,
	GAME_TYPE_DOM                                      = 2,
	GAME_TYPE_SIEGE                                    = 3,
	GAME_TYPE_ENCOUNTERS                               = 4,
	GAME_TYPE_CTF                                      = 5,
	GAME_TYPE_RACER                                    = 6,
	GAME_TYPE_ADVENTURE                                = 7,
	GAME_TYPE_ARENA_ADVENTURE                          = 8,
	GAME_TYPE_MULTI_TEAM                               = 9,
	GAME_TYPE_ADV_JOUST                                = 10,
	GAME_TYPE_MULTI_ROUND                              = 11,
	GAME_TYPE_MAX                                      = 12
};*/

// Enum TgClientBase.TgGameDC_Player.ETeamUpdateState
/*enum ETeamUpdateState
{
	TEAMUPDATE_NotUpdated                              = 0,
	TEAMUPDATE_Disconnected                            = 1,
	TEAMUPDATE_Connected                               = 2,
	TEAMUPDATE_MAX                                     = 3
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgGameUIEvent
/*enum ETgGameUIEvent
{
	EVENT_GameUI_PopupOpen                             = 0,
	EVENT_GameUI_PopupCloseAll                         = 1,
	EVENT_GameUI_ManaUseSetVital                       = 2,
	EVENT_GameUI_IdleKickShowWarning                   = 3,
	EVENT_GameUI_ControllerDisconnectShow              = 4,
	EVENT_GameUI_ASCInputsClear                        = 5,
	EVENT_GameUI_UIChange                              = 6,
	EVENT_GameUI_ObjectiveSetNearest                   = 7,
	EVENT_GameUI_SubtitleShow                          = 8,
	EVENT_GameUI_DeathRecapToggle                      = 9,
	EVENT_GameUI_AutoPurchaseSet                       = 10,
	EVENT_GameUI_AutoSkillSet                          = 11,
	EVENT_GameUI_GoToLobby                             = 12,
	EVENT_GameUI_ConnectionStatusChange                = 13,
	EVENT_GameUI_CurrentUserChange                     = 14,
	EVENT_GameUI_RemoteTalkerStatusChange              = 15,
	EVENT_GameUI_QuestUpdate                           = 16,
	EVENT_GameUI_RoundUIUpdate                         = 17,
	EVENT_GameUI_SurrenderTimerUpdate                  = 18,
	EVENT_GameUI_PauseTimerUpdate                      = 19,
	EVENT_GameUI_TransitionShow                        = 20,
	EVENT_GameUI_TransitionHide                        = 21,
	EVENT_GameUI_TimelineEvent                         = 22,
	EVENT_GameUI_EnterDemoMode                         = 23,
	EVENT_GameUI_SkillPointAlloc                       = 24,
	EVENT_GameUI_VendorItemPurchase                    = 25,
	EVENT_GameUI_GameStartComplete                     = 26,
	EVENT_GameUI_AddToCombatLog                        = 27,
	EVENT_GameUI_DisplayEACMessage                     = 28,
	EVENT_GameUI_TimingModeSet                         = 29,
	EVENT_GameUI_AcquisitionsClear                     = 30,
	EVENT_GameUI_SoundPlay                             = 31,
	EVENT_GameUI_ClearEOMData                          = 32,
	EVENT_GameUI_TaskForceUpdate                       = 33,
	EVENT_GameUI_KeyDisplayUpdate                      = 34,
	EVENT_GameUI_SpecKeyDisplayUpdate                  = 35,
	EVENT_GameUI_KeyBindMenuUpdate                     = 36,
	EVENT_GameUI_SpectatorMenuUpdate                   = 37,
	EVENT_GameUI_GetRewardProgress                     = 38,
	EVENT_GameUI_GetIsInTraining                       = 39,
	EVENT_GameUI_PartyShow                             = 40,
	EVENT_GameUI_PartyUpdate                           = 41,
	EVENT_GameUI_PartyBlockInput                       = 42,
	EVENT_GameUI_HUDResetKillIcons                     = 43,
	EVENT_GameUI_HUDCurrencyChanged                    = 44,
	EVENT_GameUI_LoginEvent                            = 45,
	EVENT_GameUI_SpectatorEvent                        = 46,
	EVENT_GameUI_PlayerSkillsEvent                     = 47,
	EVENT_GameUI_WarningEvent                          = 48,
	EVENT_GameUI_ChatEvent                             = 49,
	EVENT_GameUI_DamageEvent                           = 50,
	EVENT_GameUI_TutorialUpdateImage                   = 51,
	EVENT_GameUI_TutorialUpdateOptions                 = 52,
	EVENT_GameUI_TutorialMessage                       = 53,
	EVENT_GameUI_EndOfMatchShow                        = 54,
	EVENT_GameUI_EndOfMatchSetType                     = 55,
	EVENT_GameUI_GodTargeterQuickClose                 = 56,
	EVENT_GameUI_GodTargeterSetState                   = 57,
	EVENT_GameUI_VendorStoreToggle                     = 58,
	EVENT_GameUI_VendorStoreOpen                       = 59,
	EVENT_GameUI_VendorStoreClose                      = 60,
	EVENT_GameUI_VendorStoreUpdateCanBuy               = 61,
	EVENT_GameUI_SceneLoad                             = 62,
	EVENT_GameUI_SceneUnload                           = 63,
	EVENT_GameUI_CharacterDialogToggle                 = 64,
	EVENT_GameUI_CharacterDialogPlay                   = 65,
	EVENT_GameUI_DisplayRoundOverview                  = 66,
	EVENT_GameUI_FXStart                               = 67,
	EVENT_GameUI_FXPlayEvent                           = 68,
	EVENT_GameUI_FXCheckHealth                         = 69,
	EVENT_GameUI_EscapeKey                             = 70,
	EVENT_GameUI_ViewportResize                        = 71,
	EVENT_GameUI_NotifyEndTransition                   = 72,
	EVENT_GameUI_LobbyMatchStateUpdate                 = 73,
	EVENT_GameUI_UIStateChange                         = 74,
	EVENT_GameUI_StateChangeLobby                      = 75,
	EVENT_GameUI_StateChangeQueue                      = 76,
	EVENT_GameUI_StateChangeGame                       = 77,
	EVENT_GameUI_StateChangeHUD                        = 78,
	EVENT_GameUI_StateChangeAny                        = 79,
	EVENT_GameUI_QuestsUpdated                         = 80,
	EVENT_GameUI_QuestsInitialized                     = 81,
	EVENT_GameUI_QuestComplete                         = 82,
	EVENT_GameUI_UpdateNotifications                   = 83,
	EVENT_GameUI_NewDay                                = 84,
	EVENT_GameUI_RewardsUpdated                        = 85,
	EVENT_GameUI_LandingPanelImagesLoaded              = 86,
	EVENT_GameUI_OnPopupOpened                         = 87,
	EVENT_GameUI_OnPopupClosed                         = 88,
	EVENT_GameUI_UpdateStreams                         = 89,
	EVENT_GameUI_UpdateEOMData                         = 90,
	EVENT_GameUI_RefreshUIDisplay                      = 91,
	EVENT_GameUI_SpectateFailed                        = 92,
	EVENT_GameUI_GameTypeReady                         = 93,
	EVENT_GameUI_GameHUDEvent                          = 94,
	EVENT_GameUI_OffhandSlotPressed                    = 95,
	EVENT_GameUI_OffhandSlotReleased                   = 96,
	EVENT_GameUI_DeviceLevelUp                         = 97,
	EVENT_GameUI_ToggleSkillScreen                     = 98,
	EVENT_GameUI_SpectateQueued                        = 99,
	EVENT_GameUI_UpdateCallouts                        = 100,
	EVENT_GameUI_UpdateFeatures                        = 101,
	EVENT_GameUI_UpdateImages                          = 102,
	EVENT_GameUI_UpdateButtonPrompts                   = 103,
	EVENT_GameUI_ShowTriumphChestAbout                 = 104,
	EVENT_GameUI_SetPlayerInfoVisibility               = 105,
	EVENT_GameUI_ViewGameProfile                       = 106,
	EVENT_GameUI_SetFooterButtonVisibility             = 107,
	EVENT_GameUI_SetFooterDisplayMode                  = 108,
	EVENT_GameUI_EffectForm                            = 109,
	EVENT_GameUI_FogGrowTime                           = 110,
	EVENT_GameUI_FogNextPhase                          = 111,
	EVENT_GameUI_RefreshDailyDeal                      = 112,
	EVENT_GameUI_RankedTeamsUpdate                     = 113,
	EVENT_GameUI_PlayerMuteChanged                     = 114,
	EVENT_GameUI_PlayerSpeakingChanged                 = 115,
	EVENT_GameUI_Validate                              = 116,
	EVENT_GameUI_UpdateLogoState                       = 117,
	EVENT_GameUI_RefreshDailyLoginReward               = 118,
	EVENT_GameUI_InputModeChanged                      = 119,
	EVENT_GameUI_PurchaseModalClose                    = 120,
	EVENT_GameUI_PurchaseModalOpen                     = 121,
	EVENT_GameUI_PurchaseFail                          = 122,
	EVENT_GameUI_DemoCancelable                        = 123,
	EVENT_GameUI_DemoReady                             = 124,
	EVENT_GameUI_HideVGS                               = 125,
	EVENT_GameUI_LoginErrorMessage                     = 126,
	EVENT_GameUI_UpdateTopBar                          = 127,
	EVENT_GameUI_RefreshBooster                        = 128,
	EVENT_GameUI_ForceFocusFooter                      = 129,
	EVENT_GameUI_UpdateClanInvitations                 = 130,
	EVENT_GameUI_AddSystemMessageNotification          = 131,
	EVENT_GameUI_UpdateUGPValue                        = 132,
	EVENT_GameUI_SelectedPopupEvent                    = 133,
	EVENT_GameUI_OpenGiftingPopup                      = 134,
	EVENT_GameUI_GiftingNotification                   = 135,
	EVENT_GameUI_SceneOpened                           = 136,
	EVENT_GameUI_SceneClosed                           = 137,
	EVENT_GameUI_FriendSelectorResult                  = 138,
	EVENT_GameUI_GiftingMessageSelected                = 139,
	EVENT_GameUI_MessageSelectorListener               = 140,
	EVENT_GameUI_OnNavigationAction                    = 141,
	EVENT_GameUI_OnAcquisition                         = 142,
	EVENT_GameUI_OnAcquisitionShown                    = 143,
	EVENT_GameUI_ClearBackgroundImage                  = 144,
	EVENT_GameUI_SetBackgroundImage                    = 145,
	EVENT_GameUI_StoreRedirectGifting                  = 146,
	EVENT_GameUI_StoreRedirectChests                   = 147,
	EVENT_GameUI_ShowStore                             = 148,
	EVENT_GameUI_ReportPlayer                          = 149,
	EVENT_GameUI_PurchaseBattlePass                    = 150,
	EVENT_GameUI_PurchaseBattlePassLevels              = 151,
	EVENT_GameUI_DisplayAcquisition                    = 152,
	EVENT_GameUI_DisplayBattlePassToast                = 153,
	EVENT_GameUI_InputPreHandle                        = 154,
	EVENT_GameUI_PurchaseLongDesc                      = 155,
	EVENT_GameUI_VendorItemsChanged                    = 156,
	EVENT_GameUI_UnitShopUpdate                        = 157,
	EVENT_GameUI_VendorUnitStoreToggle                 = 158,
	EVENT_GameUI_RefreshMainMenu                       = 159,
	EVENT_GameUI_TeamBoostUpdate                       = 160,
	EVENT_GameUI_ChatToggle                            = 161,
	EVENT_GameUI_LastSeenUpdate                        = 162,
	EVENT_GameUI_InputSettingChange                    = 163,
	EVENT_GameUI_NoMatchFound                          = 164,
	EVENT_GameUI_OdysseyPurchaseTerritory              = 165,
	EVENT_GameUI_OdysseyPurchaseVoyage                 = 166,
	EVENT_GameUI_GuideSettingsUpdate                   = 167,
	EVENT_GameUI_MorePointsSetup                       = 168,
	EVENT_GameUI_PrivilegeUpdate                       = 169,
	EVENT_GameUI_MAX                                   = 170
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgSpectatorSubEvent
/*enum ETgSpectatorSubEvent
{
	EVENT_Spectator_SetExpertMode                      = 0,
	EVENT_Spectator_UpdateBans                         = 1,
	EVENT_Spectator_HighlightPlayer                    = 2,
	EVENT_Spectator_TeamStatBack                       = 3,
	EVENT_Spectator_TeamStatSelect                     = 4,
	EVENT_Spectator_StatSelect                         = 5,
	EVENT_Spectator_TargetSet                          = 6,
	EVENT_Spectator_TargetPawnById                     = 7,
	EVENT_Spectator_TargetPrevious                     = 8,
	EVENT_Spectator_TargetNext                         = 9,
	EVENT_Spectator_DirectorModeReturning              = 10,
	EVENT_Spectator_SetOverheadView                    = 11,
	EVENT_Spectator_UpdateGraph                        = 12,
	EVENT_Spectator_UpdateDemoSpeed                    = 13,
	EVENT_Spectator_UpdateStatUI                       = 14,
	EVENT_Spectator_UpdateStasis                       = 15,
	EVENT_Spectator_UpdateSyncingUI                    = 16,
	EVENT_Spectator_SetCameraMode                      = 17,
	EVENT_Spectator_TickGameTime                       = 18,
	EVENT_Spectator_SetPersonMode                      = 19,
	EVENT_Spectator_RewindGraphs                       = 20,
	EVENT_Spectator_MAX                                = 21
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgGameHUDEvent
/*enum ETgGameHUDEvent
{
	EVENT_GameHUD_None                                 = 0,
	EVENT_GameHUD_ChangeHUDSection                     = 1,
	EVENT_GameHUD_PlayTakeHit                          = 2,
	EVENT_GameHUD_SetPlayerSpeaking                    = 3,
	EVENT_GameHUD_SetVisible                           = 4,
	EVENT_GameHUD_ShowConsoleStorePrompt               = 5,
	EVENT_GameHUD_ShowEventAccolade                    = 6,
	EVENT_GameHUD_ShowPingGlow                         = 7,
	EVENT_GameHUD_ShowTutorialHighlight                = 8,
	EVENT_GameHUD_ToggleHUDSection                     = 9,
	EVENT_GameHUD_ToggleMatineeSkip                    = 10,
	EVENT_GameHUD_TogglePassiveMeter                   = 11,
	EVENT_GameHUD_ToggleScoreboard                     = 12,
	EVENT_GameHUD_UnloadHUDSection                     = 13,
	EVENT_GameHUD_PlayerMuteUpdated                    = 14,
	EVENT_GameHUD_MAX                                  = 15
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgPlayerSkillsSubEvent
/*enum ETgPlayerSkillsSubEvent
{
	EVENT_PlayerSkills_Toggle                          = 0,
	EVENT_PlayerSkills_Refresh                         = 1,
	EVENT_PlayerSkills_AutoSkill                       = 2,
	EVENT_PlayerSkills_Upgrade                         = 3,
	EVENT_PlayerSkills_MAX                             = 4
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgLoginSubEvent
/*enum ETgLoginSubEvent
{
	EVENT_Login_Misc                                   = 0,
	EVENT_Login_Queue                                  = 1,
	EVENT_Login_SetReady                               = 2,
	EVENT_Login_PlayerError                            = 3,
	EVENT_Login_Disconnect                             = 4,
	EVENT_Login_TryAuto                                = 5,
	EVENT_Login_Success                                = 6,
	EVENT_Login_MAX                                    = 7
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgWarningSubEvent
/*enum ETgWarningSubEvent
{
	EVENT_Warning_ControllerDisconnect                 = 0,
	EVENT_Warning_NoFriendsForPartyInvite              = 1,
	EVENT_Warning_UnableToReadFriendsList              = 2,
	EVENT_Warning_PartyFull                            = 3,
	EVENT_Warning_PartyNoLongerAvailable               = 4,
	EVENT_Warning_PackageNotInstalledForPartyInvite    = 5,
	EVENT_Warning_CustomGameDisallowed                 = 6,
	EVENT_Warning_MAX                                  = 7
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgChatSubEvent
/*enum ETgChatSubEvent
{
	EVENT_Chat_Default                                 = 0,
	EVENT_Chat_FriendOnline                            = 1,
	EVENT_Chat_MAX                                     = 2
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgChatManagerEvent
/*enum ETgChatManagerEvent
{
	EVENT_ChatManager_OnChannelChanged                 = 0,
	EVENT_ChatManager_OnChannelClosed                  = 1,
	EVENT_ChatManager_OnChatMessage                    = 2,
	EVENT_ChatManager_MAX                              = 3
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgDamageEvent
/*enum ETgDamageEvent
{
	EVENT_Damage_UpdateRecap                           = 0,
	EVENT_Damage_UpdateTaken                           = 1,
	EVENT_Damage_UpdateDealt                           = 2,
	EVENT_Damage_DeleteTaken                           = 3,
	EVENT_Damage_DeleteDealt                           = 4,
	EVENT_Damage_QueueInfo                             = 5,
	EVENT_Damage_MAX                                   = 6
};*/

// Enum TgClientBase.TgGameUIDispatcher.ETgVendorStore
/*enum ETgVendorStore
{
	EVENT_VendorStore_None                             = 0,
	EVENT_VendorStore_UpdateStats                      = 1,
	EVENT_VendorStore_UpdatePlayerData                 = 2,
	EVENT_VendorStore_UpdateInventory                  = 3,
	EVENT_VendorStore_CheckCurrency                    = 4,
	EVENT_VendorStore_TutorialHighlight                = 5,
	EVENT_VendorStore_MAX                              = 6
};*/

// Enum TgClientBase.TgGfxAcquisitionPopup.EAcquisitionPopupActions
/*enum EAcquisitionPopupActions
{
	EAPA_EquipAll                                      = 0,
	EAPA_MAX                                           = 1
};*/

// Enum TgClientBase.TgGfxAdventuresVault.EAdventureVaultCam
/*enum EAdventureVaultCam
{
	EAVEA_LobbyEvent                                   = 0,
	EAVEA_LobbyCamEvent                                = 1,
	EAVEA_Setup_Purchase                               = 2,
	EAVEA_Switch_Camera                                = 3,
	EAVEA_LeaveVault                                   = 4,
	EAVEA_MAX                                          = 5
};*/

// Enum TgClientBase.TgGfxAdventuresVault.EAdventureVaultIndex
/*enum EAdventureVaultIndex
{
	EVaultOuter                                        = 0,
	EVaultMain                                         = 1,
	EVaultGold                                         = 2,
	EVaultCTF                                          = 3,
	EAdventureVaultIndex_MAX                           = 4
};*/

// Enum TgClientBase.TgGfxBattlePass.EBattlePass
/*enum EBattlePass
{
	EBAP_BuyPremium                                    = 0,
	EBAP_BuyToItem                                     = 1,
	EBAP_SelectSkin                                    = 2,
	EBAP_ReceiveTransition                             = 3,
	EBAP_PracticeSkin                                  = 4,
	EBAP_SetPrestigeMode                               = 5,
	EBAP_SeenQuests                                    = 6,
	EBAP_MAX                                           = 7
};*/

// Enum TgClientBase.TgGFxBrowser.BrowserNavigationTypes
/*enum BrowserNavigationTypes
{
	BNT_CloseBrowser                                   = 0,
	BNT_Back                                           = 1,
	BNT_Forward                                        = 2,
	BNT_MAX                                            = 3
};*/

// Enum TgClientBase.TgGfxBundlesPurchase.EBundlesPurchaseAction
/*enum EBundlesPurchaseAction
{
	EBPA_GotoVault                                     = 0,
	EBPA_PurchaseBundle                                = 1,
	EBPA_MAX                                           = 2
};*/

// Enum TgClientBase.TgGfxBuyAllModalBase.EBuyAllModalActions
/*enum EBuyAllModalActions
{
	EBAMA_Purchase                                     = 0,
	EBAMA_MAX                                          = 1
};*/

// Enum TgClientBase.TgGFxDataProviderBase.EDataRequestType
/*enum EDataRequestType
{
	EDRT_ItemAt                                        = 0,
	EDRT_ItemRange                                     = 1,
	EDRT_IndexOf                                       = 2,
	EDRT_MAX                                           = 3
};*/

// Enum TgClientBase.TgGFxDataProviderBase.ETgDataProviderEvent
/*enum ETgDataProviderEvent
{
	EVENT_DP_None                                      = 0,
	EVENT_DP_StartChange                               = 1,
	EVENT_DP_Change                                    = 2,
	EVENT_DP_AddItem                                   = 3,
	EVENT_DP_RemoveItem                                = 4,
	EVENT_DP_Clear                                     = 5,
	EVENT_DP_Error                                     = 6,
	EVENT_DP_MAX                                       = 7
};*/

// Enum TgClientBase.TgGfxEventSceneBase.EEventSceneActions
/*enum EEventSceneActions
{
	EESA_SelectItem                                    = 0,
	EESA_SelectReward                                  = 1,
	EESA_SelectChest                                   = 2,
	EESA_BuyItem                                       = 3,
	EESA_ProgressTooltip                               = 4,
	EESA_HideModel                                     = 5,
	EESA_TestAudio                                     = 6,
	EESA_SelectQuest                                   = 7,
	EESA_ViewQuest                                     = 8,
	EESA_ActivateQuest                                 = 9,
	EESA_UpdatePurchasedStatus                         = 10,
	EESA_SetScene                                      = 11,
	EESA_CenterContents                                = 12,
	EESA_Scroll                                        = 13,
	EESA_SelectTab                                     = 14,
	EESA_SelectQuestTab                                = 15,
	EESA_UpdateLoreScroll                              = 16,
	EESA_UpdateLeaderboardProgress                     = 17,
	EESA_UpdateLeaderboardQueue                        = 18,
	EESA_JoinLeaderboardQueue                          = 19,
	EESA_OpenLeaderboard                               = 20,
	EESA_UpdateQuestAvailableCount                     = 21,
	EESA_UseConsumable                                 = 22,
	EESA_LobbyEvent                                    = 23,
	EESA_SeenEvent                                     = 24,
	EESA_UpdateCam                                     = 25,
	EESA_IncrementActivity                             = 26,
	EESA_SelectLore                                    = 27,
	EESA_PlayVideo                                     = 28,
	EESA_BuyAll                                        = 29,
	EESA_UpdateCounter                                 = 30,
	EESA_UpdateLoadingFrame                            = 31,
	EESA_RollBonusChest                                = 32,
	EESA_UpdateItemUnlockCount                         = 33,
	EESA_EquipLoadoutItems                             = 34,
	EESA_UpdateQuests                                  = 35,
	EESA_PurchaseTerritory                             = 36,
	EESA_PurchaseVoyage                                = 37,
	EESA_MAX                                           = 38
};*/

// Enum TgClientBase.TgGfxEventSceneBase.EEventItemTypes
/*enum EEventItemTypes
{
	EEIT_Purchased                                     = 0,
	EEIT_Quest                                         = 1,
	EEIT_Reward                                        = 2,
	EEIT_Lore                                          = 3,
	EEIT_MAX                                           = 4
};*/

// Enum TgClientBase.TgGfxEventSceneBase.EQuestFailureTypes
/*enum EQuestFailureTypes
{
	EQFT_None                                          = 0,
	EQFT_Wait                                          = 1,
	EQFT_Multi                                         = 2,
	EQFT_InProgress                                    = 3,
	EQFT_MAX                                           = 4
};*/

// Enum TgClientBase.TgGfxEventSceneBase.EQueueInactiveTypes
/*enum EQueueInactiveTypes
{
	EQIT_None                                          = 0,
	EQIT_Level                                         = 1,
	EQIT_NotActive                                     = 2,
	EQIT_MAX                                           = 3
};*/

// Enum TgClientBase.TgGFxDailyDealPopup.DailyDealActions
/*enum DailyDealActions
{
	EDDA_PurchaseDailyDeal                             = 0,
	EDDA_GotoItem                                      = 1,
	EDDA_MAX                                           = 2
};*/

// Enum TgClientBase.TgGFxEvent.EGFxEvent
/*enum EGFxEvent
{
	EGFX_None                                          = 0,
	EGFX_RollOver                                      = 1,
	EGFX_RollOut                                       = 2,
	EGFX_MousePress                                    = 3,
	EGFX_MouseHold                                     = 4,
	EGFX_MouseRelease                                  = 5,
	EGFX_MouseClick                                    = 6,
	EGFX_MouseDblClick                                 = 7,
	EGFX_MouseAuxPress                                 = 8,
	EGFX_MouseAuxHold                                  = 9,
	EGFX_MouseAuxRelease                               = 10,
	EGFX_MouseAuxClick                                 = 11,
	EGFX_MouseAuxDblClick                              = 12,
	EGFX_MouseWheel                                    = 13,
	EGFX_MouseMove                                     = 14,
	EGFX_FocusIn                                       = 15,
	EGFX_FocusOut                                      = 16,
	EGFX_Input                                         = 17,
	EGFX_Load                                          = 18,
	EGFX_Unload                                        = 19,
	EGFX_Validate                                      = 20,
	EGFX_Select                                        = 21,
	EGFX_ItemClick                                     = 22,
	EGFX_ItemRollOver                                  = 23,
	EGFX_ItemRollOut                                   = 24,
	EGFX_MAX                                           = 25
};*/

// Enum TgClientBase.TgGfxFooterBase.ETopBarLogoStates
/*enum ETopBarLogoStates
{
	ETBLS_None                                         = 0,
	ETBLS_Full                                         = 1,
	ETBLS_Small                                        = 2,
	ETBLS_MAX                                          = 3
};*/

// Enum TgClientBase.TgGfxFooterBase.ETopBarPlayerInfoStates
/*enum ETopBarPlayerInfoStates
{
	ETBPIS_None                                        = 0,
	ETBPIS_Full                                        = 1,
	ETBPIS_Currencies                                  = 2,
	ETBPIS_MAX                                         = 3
};*/

// Enum TgClientBase.TgGfxFooterBase.EFooterDisplayStates
/*enum EFooterDisplayStates
{
	FOOTER_DISPLAY_Full                                = 0,
	FOOTER_DISPLAY_FullOnlyOptions                     = 1,
	FOOTER_DISPLAY_CompactNoButtons                    = 2,
	FOOTER_DISPLAY_CompactOnlyOptions                  = 3,
	FOOTER_DISPLAY_None                                = 4,
	FOOTER_DISPLAY_MAX                                 = 5
};*/

// Enum TgClientBase.TgGfxFooterBase.EFooterMainActions
/*enum EFooterMainActions
{
	FMA_Quests                                         = 0,
	FMA_Rewards                                        = 1,
	FMA_Friends                                        = 2,
	FMA_Clans                                          = 3,
	FMA_Learn                                          = 4,
	FMA_Profile                                        = 5,
	FMA_Notifications                                  = 6,
	FMA_Settings                                       = 7,
	FMA_FocusFooterMain                                = 8,
	FMA_Party                                          = 9,
	FMA_GotoQueue                                      = 10,
	FMA_Gifts                                          = 11,
	FMA_MAX                                            = 12
};*/

// Enum TgClientBase.TgGFxFriendSearchProvider.EVT_FriendSearch
/*enum EVT_FriendSearch
{
	EVENT_FriendSearch_None                            = 0,
	EVENT_FriendSearch_Empty                           = 1,
	EVENT_FriendSearch_UpdateLocal                     = 2,
	EVENT_FriendSearch_UpdateOnline                    = 3,
	EVENT_FriendSearch_StartLocal                      = 4,
	EVENT_FriendSearch_StartOnline                     = 5,
	EVENT_FriendSearch_MAX                             = 6
};*/

// Enum TgClientBase.TgGFxFriendSearchProvider.EVT_SearchQuery
/*enum EVT_SearchQuery
{
	EVENT_SearchQuery_None                             = 0,
	EVENT_SearchQuery_ProfilePage                      = 1,
	EVENT_SearchQuery_MassInvite                       = 2,
	EVENT_SearchQuery_ChatMessage                      = 3,
	EVENT_SearchQuery_MAX                              = 4
};*/

// Enum TgClientBase.TgGfxGiftingBase.EGiftingActions
/*enum EGiftingActions
{
	EGA_None                                           = 0,
	EGA_RefreshGifts                                   = 1,
	EGA_SetReceiverData                                = 2,
	EGA_SetMessageData                                 = 3,
	EGA_OpenFriendSelector                             = 4,
	EGA_OpenMessageSelector                            = 5,
	EGA_MAX                                            = 6
};*/

// Enum TgClientBase.TgGfxGodTargeter.EGodTargeterActions
/*enum EGodTargeterActions
{
	EGTA_NONE                                          = 0,
	EGTA_UPDATESELECTED                                = 1,
	EGTA_UPDATEPREVINDEX                               = 2,
	EGTA_CLOSE                                         = 3,
	EGTA_MAX                                           = 4
};*/

// Enum TgClientBase.TgGFxHomeMenuScreen.EHomeMenuScreenSpecialCallouts
/*enum EHomeMenuScreenSpecialCallouts
{
	EHMSSC_None                                        = 0,
	EHMSSC_BattlePass                                  = 1,
	EHMSSC_DailyRewardFavor                            = 2,
	EHMSSC_DailyRewardGems                             = 3,
	EHMSSC_MAX                                         = 4
};*/

// Enum TgClientBase.TgGFxHomeMenuScreen.EHomeMenuScreenAction
/*enum EHomeMenuScreenAction
{
	HMSA_NavigateMenu                                  = 0,
	HMSA_NavigatePanel                                 = 1,
	HMSA_NavigateFeature                               = 2,
	HMSA_UpdateFeature                                 = 3,
	HMSA_UpdateFeatureImage                            = 4,
	HMSA_LogJsonLocation                               = 5,
	HMSA_OnSettings                                    = 6,
	HMSA_OnQuit                                        = 7,
	HMSA_OnEvent                                       = 8,
	HMSA_OnPtsDeeplink                                 = 9,
	HMSA_SetStreamURL                                  = 10,
	HMSA_UpdateButtons                                 = 11,
	HMSA_UpdateModel                                   = 12,
	HMSA_GotoProfile                                   = 13,
	HMSA_GotoQuests                                    = 14,
	HMSA_OpenSimulmediaPopup                           = 15,
	HMSA_MAX                                           = 16
};*/

// Enum TgClientBase.TgLandingPanelManagerBase.EModelCameraDistance
/*enum EModelCameraDistance
{
	EMCD_Close                                         = 0,
	EMCD_Medium                                        = 1,
	EMCD_Large                                         = 2,
	EMCD_ExtraLarge                                    = 3,
	EMCD_MAX                                           = 4
};*/

// Enum TgClientBase.TgLandingPanelManagerBase.EPlayerIdCheck
/*enum EPlayerIdCheck
{
	EPIC_None                                          = 0,
	EPIC_Odd                                           = 1,
	EPIC_Even                                          = 2,
	EPIC_MAX                                           = 3
};*/

// Enum TgClientBase.TgGfxHudChatBase.EChatActions
/*enum EChatActions
{
	ECA_None                                           = 0,
	ECA_Show                                           = 1,
	ECA_Scroll                                         = 2,
	ECA_Input                                          = 3,
	ECA_Fade                                           = 4,
	ECA_Tab                                            = 5,
	ECA_MAX                                            = 6
};*/

// Enum TgClientBase.TgGfxHudChatBase.EChatTabs
/*enum EChatTabs
{
	ECT_None                                           = 0,
	ECT_Chat                                           = 1,
	ECT_Combat                                         = 2,
	ECT_MAX                                            = 3
};*/

// Enum TgClientBase.TgGfxLoadoutsBase.ELoadoutEquipItems
/*enum ELoadoutEquipItems
{
	ELEI_Avatars                                       = 0,
	ELEI_LoadingFrame                                  = 1,
	ELEI_LoadingBackground                             = 2,
	ELEI_Pedestal                                      = 3,
	ELEI_WardSkins                                     = 4,
	ELEI_JumpStamp                                     = 5,
	ELEI_GlobalEmote                                   = 6,
	ELEI_RecallSkin                                    = 7,
	ELEI_AnnouncerPack                                 = 8,
	ELEI_MusicTheme                                    = 9,
	ELEI_HudTheme                                      = 10,
	ELEI_FountainFX                                    = 11,
	ELEI_LevelUp                                       = 12,
	ELEI_DeathStamp                                    = 13,
	ELEI_PlayerTitle                                   = 14,
	ELEI_MAX                                           = 15
};*/

// Enum TgClientBase.TgGfxLoadoutsBase.ELoadoutsActions
/*enum ELoadoutsActions
{
	ELA_None                                           = 0,
	ELA_ItemScroll                                     = 1,
	ELA_ItemSelect                                     = 2,
	ELA_ItemEquip                                      = 3,
	ELA_ItemTooltip                                    = 4,
	ELA_SelectItemType                                 = 5,
	ELA_HideStats                                      = 6,
	ELA_SetBoostTime                                   = 7,
	ELA_OnBoost                                        = 8,
	ELA_UpdateAvatarOwned                              = 9,
	ELA_OnDropdownChanged                              = 10,
	ELA_ItemGoto                                       = 11,
	ELA_UseClanIcon                                    = 12,
	ELA_OnPreview                                      = 13,
	ELA_CategoryScroll                                 = 14,
	ELA_CategorySelect                                 = 15,
	ELA_FavoriteItem                                   = 16,
	ELA_UnfavoriteItem                                 = 17,
	ELA_ToggleFavoritesMode                            = 18,
	ELA_MAX                                            = 19
};*/

// Enum TgClientBase.TgGfxLoginBlocker.ELoginBlockerActions
/*enum ELoginBlockerActions
{
	ELBA_Goto                                          = 0,
	ELBA_Close                                         = 1,
	ELBA_MAX                                           = 2
};*/

// Enum TgClientBase.TgGfxMainMenu.EMainMenuButton
/*enum EMainMenuButton
{
	MAINMENU_BTN_RESUME                                = 0,
	MAINMENU_BTN_SETTINGS                              = 1,
	MAINMENU_BTN_LOGOUT                                = 2,
	MAINMENU_BTN_RETURN_TO_LOBBY                       = 3,
	MAINMENU_BTN_ITEMS                                 = 4,
	MAINMENU_BTN_SCOREBOARD                            = 5,
	MAINMENU_BTN_ABILITIES                             = 6,
	MAINMENU_BTN_LEAVE_SPECTATE                        = 7,
	MAINMENU_BTN_QUIT_GAME                             = 8,
	MAINMENU_BTN_HUD_EDITOR                            = 9,
	MAINMENU_BTN_PAUSE                                 = 10,
	MAINMENU_BTN_SURRENDER                             = 11,
	MAINMENU_BTN_REDEEM_CODE                           = 12,
	MAINMENU_BTN_PATCH_OVERVIEW                        = 13,
	MAINMENU_BTN_GAME_GUIDES                           = 14,
	MAINMENU_BTN_ACCOUNT_LINKING                       = 15,
	MAINMENU_BTN_MAX                                   = 16
};*/

// Enum TgClientBase.TgGfxMassInviteBase.EMassInviteActions
/*enum EMassInviteActions
{
	EMIA_None                                          = 0,
	EMIA_RemovePlayer                                  = 1,
	EMIA_AddPlayer                                     = 2,
	EMIA_InvitePlayers                                 = 3,
	EMIA_Close                                         = 4,
	EMIA_Search                                        = 5,
	EMIA_InvitedPlayersScroll                          = 6,
	EMIA_BuddyListScroll                               = 7,
	EMIA_Filter                                        = 8,
	EMIA_MAX                                           = 9
};*/

// Enum TgClientBase.TgGFxMatchInventory.EMatchINV
/*enum EMatchINV
{
	EMINV_SET_BOOSTERS_SEEN                            = 0,
	EMINV_ACTIVATE_TEAM_BOOSTER                        = 1,
	EMINV_MAX                                          = 2
};*/

// Enum TgClientBase.TgGFxMatchInvitation.EMatchInvitationActions
/*enum EMatchInvitationActions
{
	EMINVA_UpdateUI                                    = 0,
	EMINVA_GamePadUpdate                               = 1,
	EMINVA_ButtonPress                                 = 2,
	EMINVA_MAX                                         = 3
};*/

// Enum TgClientBase.TgGFxMatchLobbyShared.MatchLobbyDemoState
/*enum MatchLobbyDemoState
{
	MLDS_None                                          = 0,
	MLDS_Spectate                                      = 1,
	MLDS_Cancelable                                    = 2,
	MLDS_Ready                                         = 3,
	MLDS_MAX                                           = 4
};*/

// Enum TgClientBase.TgGfxMessageSelector.EMessageSelectorActions
/*enum EMessageSelectorActions
{
	EMSA_None                                          = 0,
	EMSA_RefreshMessages                               = 1,
	EMSA_MAX                                           = 2
};*/

// Enum TgClientBase.TgGFxMouseEvent.EGFxMouseState
/*enum EGFxMouseState
{
	EGFxMS_None                                        = 0,
	EGFxMS_Up                                          = 1,
	EGFxMS_Released                                    = 2,
	EGFxMS_Down                                        = 3,
	EGFxMS_Pressed                                     = 4,
	EGFxMS_Held                                        = 5,
	EGFxMS_MAX                                         = 6
};*/

// Enum TgClientBase.TgGFxMouseEvent.EGFxMouseButton
/*enum EGFxMouseButton
{
	EGFxMB_None                                        = 0,
	EGFxMB_Left                                        = 1,
	EGFxMB_Right                                       = 2,
	EGFxMB_Middle                                      = 3,
	EGFxMB_Extra0                                      = 4,
	EGFxMB_Extra1                                      = 5,
	EGFxMB_Extra2                                      = 6,
	EGFxMB_Extra3                                      = 7,
	EGFxMB_MAX                                         = 8
};*/

// Enum TgClientBase.TgGfxPatchOverview.EPatchOverviewActions
/*enum EPatchOverviewActions
{
	EPOA_OpenPatchNotes                                = 0,
	EPOA_Close                                         = 1,
	EPOA_MAX                                           = 2
};*/

// Enum TgClientBase.TgGFxPlay.EPlaySharedAction
/*enum EPlaySharedAction
{
	EPSA_UpdateTab                                     = 0,
	EPSA_QueueDataUpdated                              = 1,
	EPSA_JoinQueue                                     = 2,
	EPSA_SetPreferredSite                              = 3,
	EPSA_FeaturedQueueUpdated                          = 4,
	EPSA_InQueueUpdated                                = 5,
	EPSA_RoleUpdated                                   = 6,
	EPSA_NavigateToLeague                              = 7,
	EPSA_MAX                                           = 8
};*/

// Enum TgClientBase.TgGFxPlay.EPlaySharedTabs
/*enum EPlaySharedTabs
{
	EPlayTab_Featured                                  = 0,
	EPlayTab_Normal                                    = 1,
	EPlayTab_Ranked                                    = 2,
	EPlayTab_Coop                                      = 3,
	EPlayTab_Training                                  = 4,
	EPlayTab_Custom                                    = 5,
	EPlayTab_MAX                                       = 6
};*/

// Enum TgClientBase.TgGFxPlayCustom.EPlayCustomSharedAction
/*enum EPlayCustomSharedAction
{
	EPCSA_InCustomUpdated                              = 0,
	EPCSA_CustomListDataUpdated                        = 1,
	EPCSA_CustomListDataRefresh                        = 2,
	EPCSA_CustomRefreshWaitTimeUpdated                 = 3,
	EPCSA_CreateCustomMatch                            = 4,
	EPCSA_JoinCustomMatch                              = 5,
	EPCSA_PlayerSpeakingUpdated                        = 6,
	EPCSA_PlayerMuteUpdated                            = 7,
	EPCSA_PlayersUpdated                               = 8,
	EPCSA_OnCustomInvite                               = 9,
	EPCSA_AddBot                                       = 10,
	EPCSA_ChangeTeam                                   = 11,
	EPCSA_KickPlayer                                   = 12,
	EPCSA_StartMatch                                   = 13,
	EPCSA_ChangeBot                                    = 14,
	EPCSA_PromoteInviter                               = 15,
	EPCSA_ViewPlayer                                   = 16,
	EPCSA_MatchReadyUpdate                             = 17,
	EPCSA_TeamUpdate                                   = 18,
	EPCSA_MAX                                          = 19
};*/

// Enum TgClientBase.TgGFxPriceData.EPriceSaleType
/*enum EPriceSaleType
{
	SALE_TYPE_PreSale                                  = 0,
	SALE_TYPE_PostSale                                 = 1,
	SALE_TYPE_MAX                                      = 2
};*/

// Enum TgClientBase.TgGfxQuestList.EQuestListActions
/*enum EQuestListActions
{
	EQLA_None                                          = 0,
	EQLA_UpdateQuests                                  = 1,
	EQLA_OnResize                                      = 2,
	EQLA_AbandonQuest                                  = 3,
	EQLA_GotoQuest                                     = 4,
	EQLA_GotoEventQuest                                = 5,
	EQLA_MAX                                           = 6
};*/

// Enum TgClientBase.TgGfxQuestList.EQuestItemRenderers
/*enum EQuestItemRenderers
{
	QIR_None                                           = 0,
	QIR_Header                                         = 1,
	QIR_Message                                        = 2,
	QIR_Quest                                          = 3,
	QIR_Special                                        = 4,
	QIR_Constant                                       = 5,
	QIR_MAX                                            = 6
};*/

// Enum TgClientBase.TgGfxRewardCenter.ERewardCenterActions
/*enum ERewardCenterActions
{
	ERCA_None                                          = 0,
	ERCA_UpdateTabs                                    = 1,
	ERCA_RefreshRewards                                = 2,
	ERCA_ClaimBonusChest                               = 3,
	ERCA_SelectTab                                     = 4,
	ERCA_UnlockItem                                    = 5,
	ERCA_ClaimGift                                     = 6,
	ERCA_OnGiftOpened                                  = 7,
	ERCA_OnGiftOpenFailed                              = 8,
	ERCA_GiftBack                                      = 9,
	ERCA_MAX                                           = 10
};*/

// Enum TgClientBase.TgGfxRewardCenter.RewardCenterTabs
/*enum RewardCenterTabs
{
	TAB_REWARD_DAILY_REWARD                            = 0,
	TAB_REWARD_BONUS_CHEST                             = 1,
	TAB_REWARD_GIFTING                                 = 2,
	TAB_REWARD_COUPONS                                 = 3,
	TAB_REWARD_LEVEL_UP_BONUS                          = 4,
	TAB_REWARD_PARTY_BONUSES                           = 5,
	TAB_REWARD_EVENT_INFO                              = 6,
	TAB_REWARD_ITEM_RECEIPTS                           = 7,
	TAB_REWARD_MAX                                     = 8
};*/

// Enum TgClientBase.TgGfxSeasonalEventCalendar.ESeasonalEventCalendarActions
/*enum ESeasonalEventCalendarActions
{
	ESEBA_Init                                         = 0,
	ESEBA_SetRefDate                                   = 1,
	ESEBA_MAX                                          = 2
};*/

// Enum TgClientBase.TgGFxSocialList.EFriendsListActions
/*enum EFriendsListActions
{
	EFMA_NONE                                          = 0,
	EFMA_JOIN                                          = 1,
	EFMA_INVITEPARTY                                   = 2,
	EFMA_SPECTATE                                      = 3,
	EFMA_INVITECLAN                                    = 4,
	EFMA_MAX                                           = 5
};*/

// Enum TgClientBase.TgGFxSocialList.EFriendsTabs
/*enum EFriendsTabs
{
	EFL_FRIENDS                                        = 0,
	EFL_RECENT                                         = 1,
	EFL_REFER                                          = 2,
	EFL_REFERRED                                       = 3,
	EFL_MAX                                            = 4
};*/

// Enum TgClientBase.TgGfxSovereigntyVendorStore.EShopActionMode
/*enum EShopActionMode
{
	BUY_ACTION_MODE                                    = 0,
	SELL_ACTION_MODE                                   = 1,
	NONE_ACTION_MODE                                   = 2,
	EShopActionMode_MAX                                = 3
};*/

// Enum TgClientBase.TgVendorData.VendorDataVendorMode
/*enum VendorDataVendorMode
{
	VDVM_Normal                                        = 0,
	VDVM_CH03_Adventure                                = 1,
	VDVM_MAX                                           = 2
};*/

// Enum TgClientBase.TgVendorData.VendorRecommendedBuildMode
/*enum VendorRecommendedBuildMode
{
	VRBM_None                                          = 0,
	VRBM_Single                                        = 1,
	VRBM_All                                           = 2,
	VRBM_MAX                                           = 3
};*/

// Enum TgClientBase.TgVendorData.ItemStoreActions
/*enum ItemStoreActions
{
	EISA_None                                          = 0,
	EISA_Init                                          = 1,
	EISA_Sell                                          = 2,
	EISA_Tier                                          = 3,
	EISA_Event                                         = 4,
	EISA_Filter                                        = 5,
	EISA_Update                                        = 6,
	EISA_Display                                       = 7,
	EISA_SubFilter                                     = 8,
	EISA_Select                                        = 9,
	EISA_SelectTier1                                   = 10,
	EISA_SelectTier2                                   = 11,
	EISA_SelectTier3                                   = 12,
	EISA_SelectTier4                                   = 13,
	EISA_Tier1Tip                                      = 14,
	EISA_Tier2Tip                                      = 15,
	EISA_Tier3Tip                                      = 16,
	EISA_Tier4Tip                                      = 17,
	EISA_ListTip                                       = 18,
	EISA_GridTip                                       = 19,
	EISA_ListItem                                      = 20,
	EISA_ListScroll                                    = 21,
	EISA_AutoPurchase                                  = 22,
	EISA_SellItem                                      = 23,
	EISA_PurchaseItem                                  = 24,
	EISA_GridItem                                      = 25,
	EISA_GridScroll                                    = 26,
	EISA_Tab                                           = 27,
	EISA_Role                                          = 28,
	EISA_ForceHideTip                                  = 29,
	EISA_Undo                                          = 30,
	EISA_UpdateTierSummary                             = 31,
	EISA_LeaveFilterList                               = 32,
	EISA_ExpandFilter                                  = 33,
	EISA_FocusFilterList                               = 34,
	EISA_ResetIdleTimer                                = 35,
	EISA_SwapActive                                    = 36,
	EISA_SwapConsumable                                = 37,
	EISA_Back                                          = 38,
	EISA_SellX                                         = 39,
	EISA_MAX                                           = 40
};*/

// Enum TgClientBase.TgVendorData.StoreDisplayType
/*enum StoreDisplayType
{
	ESDT_RECOMMENDED                                   = 0,
	ESDT_STANDARD                                      = 1,
	ESDT_STATS                                         = 2,
	ESDT_ALL                                           = 3,
	ESDT_OWNED                                         = 4,
	ESDT_MAX                                           = 5
};*/

// Enum TgClientBase.TgVendorData.ItemDisplayType
/*enum ItemDisplayType
{
	EIDT_LIST                                          = 0,
	EIDT_GRID                                          = 1,
	EIDT_MAX                                           = 2
};*/

// Enum TgClientBase.TgGfxStoreChest.EStoreChestActions
/*enum EStoreChestActions
{
	ESCA_None                                          = 0,
	ESCA_ItemUnlock                                    = 1,
	ESCA_RefreshItems                                  = 2,
	ESCA_ChestIndex                                    = 3,
	ESCA_CheckForInfoPopup                             = 4,
	ESCA_PageOpened                                    = 5,
	ESCA_OnChestItemSelect                             = 6,
	ESCA_OpenChestCounterChoice                        = 7,
	ESCA_MAX                                           = 8
};*/

// Enum TgClientBase.TgGfxStoreFeatures.EStoreFeatureActions
/*enum EStoreFeatureActions
{
	ESFA_None                                          = 0,
	ESFA_GotoItem                                      = 1,
	ESFA_GotoDailyDeal                                 = 2,
	ESFA_SetDealInactive                               = 3,
	ESFA_PrevDailyDeal                                 = 4,
	ESFA_NextDailyDeal                                 = 5,
	ESFA_AnimateDealSwap                               = 6,
	ESFA_ClaimDailyReward                              = 7,
	ESFA_MAX                                           = 8
};*/

// Enum TgClientBase.TgGFxStoreShared.STORE_MAIN_TAB
/*enum STORE_MAIN_TAB
{
	STORE_MAIN_TAB_FEATURED                            = 0,
	STORE_MAIN_TAB_DEALS                               = 1,
	STORE_MAIN_TAB_GODS                                = 2,
	STORE_MAIN_TAB_SKINS                               = 3,
	STORE_MAIN_TAB_CHESTS                              = 4,
	STORE_MAIN_TAB_GIFTING                             = 5,
	STORE_MAIN_TAB_BUNDLES                             = 6,
	STORE_MAIN_TAB_ACCOUNT_NAME                        = 7,
	STORE_MAIN_TAB_ACCOUNT_BOOSTER                     = 8,
	STORE_MAIN_TAB_CODE                                = 9,
	STORE_MAIN_TAB_VOICE_PACKS                         = 10,
	STORE_MAIN_TAB_EMOTES                              = 11,
	STORE_MAIN_TAB_AVATARS                             = 12,
	STORE_MAIN_TAB_WARDS                               = 13,
	STORE_MAIN_TAB_ANNOUNCER_PACKS                     = 14,
	STORE_MAIN_TAB_LOADING_FRAMES                      = 15,
	STORE_MAIN_TAB_PEDESTALS                           = 16,
	STORE_MAIN_TAB_GLOBAL_EMOTES                       = 17,
	STORE_MAIN_TAB_MUSIC_THEMES                        = 18,
	STORE_MAIN_TAB_BOOSTERS                            = 19,
	STORE_MAIN_TAB_ACCOUNT                             = 20,
	STORE_MAIN_TAB_MIXER                               = 21,
	STORE_MAIN_TAB_JUMP_STAMP                          = 22,
	STORE_MAIN_TAB_HUD_THEME                           = 23,
	STORE_MAIN_TAB_MAX                                 = 24
};*/

// Enum TgClientBase.TgGFxStoreShared.EStoreActions
/*enum EStoreActions
{
	ESA_None                                           = 0,
	ESA_CheckForGiftInfoPopup                          = 1,
	ESA_MAX                                            = 2
};*/

// Enum TgClientBase.TgGfxStoreViewer.EStoreViewerActions
/*enum EStoreViewerActions
{
	ESVA_None                                          = 0,
	ESVA_ItemUnlock                                    = 1,
	ESVA_ItemGoto                                      = 2,
	ESVA_SelectTab                                     = 3,
	ESVA_UNUSED0                                       = 4,
	ESVA_RefreshUGPRefund                              = 5,
	ESVA_ItemGotoObtain                                = 6,
	ESVA_OnItemSelect                                  = 7,
	ESVA_TextChange                                    = 8,
	ESVA_MAX                                           = 9
};*/

// Enum TgClientBase.TgGfxVendorStoreUnit.EVendorStoreUnitAction
/*enum EVendorStoreUnitAction
{
	EVSUA_PurchaseUnit                                 = 0,
	EVSUA_SellUnit                                     = 1,
	EVSUA_BuffUnit                                     = 2,
	EVSUA_SwapUnit                                     = 3,
	EVSUA_InventoryUpdate                              = 4,
	EVSUA_UpdateShop                                   = 5,
	EVSUA_MAX                                          = 6
};*/

// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStorePanelMode
/*enum VendorStorePanelMode
{
	VSPM_ItemSelection                                 = 0,
	VSPM_ItemPurchase                                  = 1,
	VSPM_MAX                                           = 2
};*/

// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStoreNavigationMode
/*enum VendorStoreNavigationMode
{
	VSNM_Store                                         = 0,
	VSNM_Inventory                                     = 1,
	VSNM_Act_Con                                       = 2,
	VSNM_MAX                                           = 3
};*/

// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStoreFilterMode
/*enum VendorStoreFilterMode
{
	VSFM_Custom                                        = 0,
	VSFM_Recommended                                   = 1,
	VSFM_Popular                                       = 2,
	VSFM_Offensive                                     = 3,
	VSFM_Defensive                                     = 4,
	VSFM_Utility                                       = 5,
	VSFM_Starter                                       = 6,
	VSFM_Recommended2                                  = 7,
	VSFM_Recommended3                                  = 8,
	VSFM_Recommended4                                  = 9,
	VSFM_Recommended5                                  = 10,
	VSFM_Recommended6                                  = 11,
	VSFM_MAX                                           = 12
};*/

// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStoreGridTierMode
/*enum VendorStoreGridTierMode
{
	VSGTM_None                                         = 0,
	VSGTM_Active                                       = 1,
	VSGTM_Grid                                         = 2,
	VSGTM_Active_Upgrade                               = 3,
	VSGTM_MAX                                          = 4
};*/

// Enum TgClientBase.TgMiniMap.TgMapOrientation
/*enum TgMapOrientation
{
	TMO_NORMAL                                         = 0,
	TMO_ROTATE                                         = 1,
	TMO_ROTATE01                                       = 2,
	TMO_ROTATE02                                       = 3,
	TMO_MAX                                            = 4
};*/

// Enum TgClientBase.TgMiniMap.MiniMapIconLayer
/*enum MiniMapIconLayer
{
	MMap_Layer_Enemy_Deployable                        = 0,
	MMap_Layer_Friendly_Deployable                     = 1,
	MMap_Layer_Enemy_Minion                            = 2,
	MMap_Layer_Enemy_Bot                               = 3,
	MMap_Layer_Friendly_Minion                         = 4,
	MMap_Layer_Friendly_Bot                            = 5,
	MMap_Layer_Enemy_Player                            = 6,
	MMap_Layer_Friendly_Player                         = 7,
	MMap_Layer_Neutral_Factory                         = 8,
	MMap_Layer_Friendly_Factory                        = 9,
	MMap_Layer_Enemy_Factory                           = 10,
	MMap_Layer_Device_Volume                           = 11,
	MMap_Layer_Neutral_CapturePoint                    = 12,
	MMap_Layer_Enemy_CapturePoint                      = 13,
	MMap_Layer_Friendly_CapturePoint                   = 14,
	MMap_Layer_Targeting                               = 15,
	MMap_Layer_Local_Player_Pet                        = 16,
	MMap_Layer_Local_Player                            = 17,
	MMap_Layer_CTF_Flag                                = 18,
	MMap_Layer_MAX                                     = 19
};*/

// Enum TgClientBase.TgMiniMap.MiniMapPortalLayer
/*enum MiniMapPortalLayer
{
	MMap_Portal_Layer_Enemy                            = 0,
	MMap_Portal_Layer_Friendly                         = 1,
	MMap_Portal_Layer_MAX                              = 2
};*/

// Enum TgClientBase.TgMiniMap.MinimapDisplayType
/*enum MinimapDisplayType
{
	MDT_Friendly                                       = 0,
	MDT_Enemy                                          = 1,
	MDT_FriendlyCB                                     = 2,
	MDT_EnemyCB                                        = 3,
	MDT_SpectatorTarget                                = 4,
	MDT_FriendlyLocal                                  = 5,
	MDT_MAX                                            = 6
};*/

// Enum TgClientBase.TgPlayerNameProcessor.ETgNameRequestStage
/*enum ETgNameRequestStage
{
	TNRS_None                                          = 0,
	TNRS_Platform                                      = 1,
	TNRS_Mcts                                          = 2,
	TNRS_MctsFail                                      = 3,
	TNRS_Filter                                        = 4,
	TNRS_Complete                                      = 5,
	TNRS_Timeout                                       = 6,
	TNRS_MAX                                           = 7
};*/

// Enum TgClientBase.TgRewardCenterManagerBase.QuestType
/*enum QuestType
{
	EQT_Daily                                          = 0,
	EQT_Collection                                     = 1,
	EQT_Special                                        = 2,
	EQT_Training                                       = 3,
	EQT_MAX                                            = 4
};*/

// Enum TgClientBase.TgRewardCenterManagerBase.EventQuestSubtype
/*enum EventQuestSubtype
{
	EQSBT_BIRTHDAY                                     = 0,
	EQSBT_SUMMER_ST                                    = 1,
	EQSBT_DIVINE_UPRISING                              = 2,
	EQSBT_FALL_ST                                      = 3,
	EQSBT_ODYSSEY_HERA                                 = 4,
	EQSBT_BATTLEPASS                                   = 5,
	EQSBT_MAX                                          = 6
};*/

// Enum TgClientBase.TgSettingsDC_Account.EmailUpdateResponse
/*enum EmailUpdateResponse
{
	EUR_NONE                                           = 0,
	EUR_SUCCESS                                        = 1,
	EUR_INVALID_EMAIL                                  = 2,
	EUR_MAX                                            = 3
};*/

// Enum TgClientBase.TgSettingsDC_Audio.EVoiceChatInputType
/*enum EVoiceChatInputType
{
	EVCIT_OpenMic                                      = 0,
	EVCIT_PushToTalk                                   = 1,
	EVCIT_PushToToggle                                 = 2,
	EVCIT_MAX                                          = 3
};*/

// Enum TgClientBase.TgSettingsDC_UI.CrossplayOptionsValue
/*enum CrossplayOptionsValue
{
	ECOV_CP_MATCHINPUT                                 = 0,
	ECOV_CP_FULL                                       = 1,
	ECOV_CP_MATCHPLATFORM                              = 2,
	ECOV_CP_MAX                                        = 3
};*/

// Enum TgClientBase.TgStreamManagerBase.STREAMTYPE
/*enum STREAMTYPE
{
	VST_NONE                                           = 0,
	VST_HIREZ                                          = 1,
	VST_TWITCH                                         = 2,
	VST_TRAINING                                       = 3,
	VST_COMMUNITY                                      = 4,
	VST_NEWS                                           = 5,
	VST_MAX                                            = 6
};*/

// Enum TgClientBase.TgSystemNotifManagerBase.ESystemMessageType
/*enum ESystemMessageType
{
	ESMT_Notification                                  = 0,
	ESMT_Unlock                                        = 1,
	ESMT_Clan                                          = 2,
	ESMT_Achievement                                   = 3,
	ESMT_Party                                         = 4,
	ESMT_Friend                                        = 5,
	ESMT_MAX                                           = 6
};*/

// Enum TgClientBase.TgSystemNotifManagerBase.ESystemMessageSubType
/*enum ESystemMessageSubType
{
	ESMST_None                                         = 0,
	ESMST_Quest                                        = 1,
	ESMST_Commendation                                 = 2,
	ESMST_GMSay                                        = 3,
	ESMST_FriendInvite                                 = 4,
	ESMST_PartyInvite                                  = 5,
	ESMST_ClanInvite                                   = 6,
	ESMST_MAX                                          = 7
};*/

// Enum TgClientBase.TgSystemNotifManagerBase.ENotificationType
/*enum ENotificationType
{
	ENT_Party                                          = 0,
	ENT_MESSAGE                                        = 1,
	ENT_QueueInvite                                    = 2,
	ENT_FriendInvite                                   = 3,
	ENT_ClanInvite                                     = 4,
	ENT_MAX                                            = 5
};*/

// Enum TgClientBase.TgSystemNotifManagerBase.ESystemMessageState
/*enum ESystemMessageState
{
	ESMS_None                                          = 0,
	ESMS_Active                                        = 1,
	ESMS_Expired                                       = 2,
	ESMS_Accepted                                      = 3,
	ESMS_Rejected                                      = 4,
	ESMS_MAX                                           = 5
};*/

// Enum TgClientBase.TgUIServerStates.EStateQueuePrivilegeState
/*enum EStateQueuePrivilegeState
{
	SQPS_None                                          = 0,
	SQPS_Pending                                       = 1,
	SQPS_Denied                                        = 2,
	SQPS_MAX                                           = 3
};*/

// Enum TgClientBase.TgUIServerStates.EServerStateForceUpdate
/*enum EServerStateForceUpdate
{
	SSFU_QueueStateUpdate                              = 0,
	SSFU_MatchStateUpdate                              = 1,
	SSFU_LobbyStateUpdate                              = 2,
	SSFU_MAX                                           = 3
};*/

// Enum TgClientBase.TgGFxMorePoints.EMorePointsActions
/*enum EMorePointsActions
{
	EMPA_None                                          = 0,
	EMPA_ItemGoto                                      = 1,
	EMPA_ItemUnlock                                    = 2,
	EMPA_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TgClientBase.TgAcquistionEvent
// 0x0080 (0x00F4 - 0x0074)
class UTgAcquistionEvent : public UTgEventDataItem
{
public:
	struct FUIQueuedAcquisition                        pAcq;                                             		// 0x0074 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4826 );

		return pClassPointer;
	};

};

UClass* UTgAcquistionEvent::pClassPointer = NULL;

// Class TgClientBase.TgAcquistionNotificationEvent
// 0x0008 (0x007C - 0x0074)
class UTgAcquistionNotificationEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pAcq;                                             		// 0x0074 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4827 );

		return pClassPointer;
	};

};

UClass* UTgAcquistionNotificationEvent::pClassPointer = NULL;

// Class TgClientBase.TgAnnouncerPreviewer
// 0x0010 (0x0070 - 0x0060)
class UTgAnnouncerPreviewer : public UObject
{
public:
	class UTgManifestGroup*                            c_AssetManifestGroup;                             		// 0x0060 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FName                                       m_AnnouncerResName;                               		// 0x0068 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4828 );

		return pClassPointer;
	};

	void PreviewAnnouncerByItemId ( int nItemId, unsigned long bAsync );
	void OnAnnouncerLoaded ( );
	void Init ( );
};

UClass* UTgAnnouncerPreviewer::pClassPointer = NULL;

// Class TgClientBase.TgMoviePlayer
// 0x0760 (0x0958 - 0x01F8)
class UTgMoviePlayer : public UGFxMoviePlayer
{
public:
	struct FPointer                                    VfTable_ITgIntervalInterface;                     		// 0x01F8 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FInputSensitiveComponent >          RegisteredInputSensitiveComponents;               		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMultiMap_Mirror                            RegisteredObjects;                                		// 0x0210 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMultiMap_Mirror                            RegisteredScenes;                                 		// 0x0258 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMultiMap_Mirror                            RegisteredDataChunks;                             		// 0x02A0 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    MarLobbyPlayback;                                 		// 0x02E8 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    PkgLobbyPlayback;                                 		// 0x02F0 (0x0008) [0x0000000000001000]              ( CPF_Native )
	class APComVideoPlayer*                            m_PComVideoPlayer;                                		// 0x02F8 (0x0008) [0x0000000000000000]              
	struct FPointer                                    m_ConfigManager;                                  		// 0x0300 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     GodPackOwnershipId;                               		// 0x0308 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                m_eButtonPromptSetting;                           		// 0x0318 (0x0004) [0x0000000000000000]              
	struct FName                                       ButtonPromptName;                                 		// 0x031C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bShownIntroMovie : 1;                           		// 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShownLoginBlocker : 1;                         		// 0x0324 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShownPublicSystemMessages : 1;                 		// 0x0324 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bShownPatchOverview : 1;                        		// 0x0324 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsListeningForVivoxBtn : 1;                    		// 0x0324 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bRenderGammaControls : 1;                       		// 0x0324 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bHasNoPlayer : 1;                               		// 0x0324 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bAllowAllChat : 1;                              		// 0x0324 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bLeaver : 1;                                    		// 0x0324 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bPrintClanPlayerInvites : 1;                    		// 0x0324 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bShouldNotKillSeasonalMusic : 1;                		// 0x0324 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      isNoItemPopup : 1;                                		// 0x0324 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      isMatchLobbyTrade : 1;                            		// 0x0324 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      disableNoItemPopup : 1;                           		// 0x0324 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      m_bHUDVisible : 1;                                		// 0x0324 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      m_bPrevLeader : 1;                                		// 0x0324 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      m_isPlayingTutorial : 1;                          		// 0x0324 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      m_bLoginComplete : 1;                             		// 0x0324 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      m_bAllShopVendorsReceived : 1;                    		// 0x0324 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      m_bWaitingForAllShopVendors : 1;                  		// 0x0324 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      m_bEnableShopVendorTimer : 1;                     		// 0x0324 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      m_bFailedBatchPurchase : 1;                       		// 0x0324 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      m_HideEOMLTriumph : 1;                            		// 0x0324 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      m_bInLoginQueue : 1;                              		// 0x0324 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      m_bQueueStatsRequestOutstanding : 1;              		// 0x0324 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      m_bInAccountLinkingProcess : 1;                   		// 0x0324 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      m_bInitialized : 1;                               		// 0x0324 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      m_bInTransition : 1;                              		// 0x0324 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      m_bResizeForSafeZones : 1;                        		// 0x0324 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      c_bChatReady : 1;                                 		// 0x0324 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      m_bFriendlyWon : 1;                               		// 0x0324 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      m_bTutorialPlayed : 1;                            		// 0x0324 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      m_bAutoQueueIntoPractice : 1;                     		// 0x0328 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bPartySelectState : 1;                          		// 0x0328 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHasLoadedTeamNames : 1;                        		// 0x0328 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bConfigManagerProcessed : 1;                    		// 0x0328 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bShowingEmailPopup : 1;                         		// 0x0328 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bMatchCheck : 1;                                		// 0x0328 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bWaitingForReferralEntries : 1;                 		// 0x0328 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bAttemptingToJoinTutorial : 1;                  		// 0x0328 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bHasTutorialAttemptTimeout : 1;                 		// 0x0328 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_PlayingIntroVideo : 1;                          		// 0x0328 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bForcingPSPlus : 1;                             		// 0x0328 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_bListeningForInputConfirm : 1;                  		// 0x0328 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_bUseExperimentalHud : 1;                        		// 0x0328 (0x0004) [0x0000000000000000] [0x00001000] 
	struct FTgPlayerId                                 m_PlayerLookup;                                   		// 0x032C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgVendorData*                               m_VendorData;                                     		// 0x0350 (0x0008) [0x0000000000000000]              
	class UTgBrowserManager*                           m_WebBrowser;                                     		// 0x0358 (0x0008) [0x0000000000000000]              
	TArray< struct FPendingChatMessage >               m_PendingMessages;                                		// 0x0360 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgPlayerId >                       m_ChatMessagePlayerIds;                           		// 0x0370 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_QueuedAchievementId;                            		// 0x0380 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nQueuedBattlePassLevel;                         		// 0x0390 (0x0004) [0x0000000000000000]              
	struct FQWord                                      m_nLastMessageTime;                               		// 0x0394 (0x0008) [0x0000000000000000]              
	int                                                m_nReturnToNavigationAction;                      		// 0x039C (0x0004) [0x0000000000000000]              
	int                                                m_nReturnToId;                                    		// 0x03A0 (0x0004) [0x0000000000000000]              
	int                                                m_currentPurchaseId;                              		// 0x03A4 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentPurchaseQuantity;                       		// 0x03A8 (0x0004) [0x0000000000000000]              
	class UTextureRenderTarget2D*                      m_RenderTarget;                                   		// 0x03AC (0x0008) [0x0000000000000000]              
	int                                                m_nAutoNavToPurchasedIndex;                       		// 0x03B4 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoNavToRewardIndex;                          		// 0x03B8 (0x0004) [0x0000000000000000]              
	int                                                m_activityRedirectId;                             		// 0x03BC (0x0004) [0x0000000000000000]              
	int                                                m_goalRedirectId;                                 		// 0x03C0 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoNavItemId;                                 		// 0x03C4 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPageAutoTab;                                   		// 0x03C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_uiDisplayMode;                                  		// 0x03D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  _global;                                          		// 0x03DC (0x0008) [0x0000000000000000]              
	float                                              m_fLobbyPlaybackTime;                             		// 0x03E4 (0x0004) [0x0000000000000000]              
	float                                              m_fLobbyNextFireTime;                             		// 0x03E8 (0x0004) [0x0000000000000000]              
	TArray< struct FLastMatchMember >                  m_lastMatchMembers;                               		// 0x03EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLastPartiedMember >                m_lastPartiedMembers;                             		// 0x03FC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FRecentlyInvitedPlayers >           m_recentlyInvitedPlayers;                         		// 0x040C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PrevParty;                                      		// 0x041C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_NewQueueStatus;                                 		// 0x042C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_PrevMatchQueueState;                            		// 0x043C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSpectateTarget;                                		// 0x0440 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nReplayId;                                      		// 0x0450 (0x0004) [0x0000000000000000]              
	float                                              m_fWaitTimeoutForShopVendors;                     		// 0x0454 (0x0004) [0x0000000000000000]              
	float                                              m_fShopVendorWaitTimer;                           		// 0x0458 (0x0004) [0x0000000000000000]              
	TArray< struct FIntStringPair >                    m_nCachedThemeIds;                                		// 0x045C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct Fdword >                            m_MultiQueueList;                                 		// 0x046C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fLoginQueueTimer;                               		// 0x047C (0x0004) [0x0000000000000000]              
	float                                              m_fMatchCheckTime;                                		// 0x0480 (0x0004) [0x0000000000000000]              
	float                                              m_fTimerUpdate;                                   		// 0x0484 (0x0004) [0x0000000000000000]              
	float                                              m_fLastQueueStatsRequest;                         		// 0x0488 (0x0004) [0x0000000000000000]              
	TArray< struct FCardTextureWidget >                m_CardWidgets;                                    		// 0x048C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             GfxObjectBindings;                                		// 0x049C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_AutoReinviteList;                               		// 0x04AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_AutoReinviteQueueId;                            		// 0x04BC (0x0004) [0x0000000000000000]              
	int                                                m_nClearTransitionTicks;                          		// 0x04C0 (0x0004) [0x0000000000000000]              
	int                                                m_nEventDefaultTab;                               		// 0x04C4 (0x0004) [0x0000000000000000]              
	class UTgEventDispatcher*                          m_pUIDispatcher;                                  		// 0x04C8 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              m_fResumePurchaseRefreshCD;                       		// 0x04D0 (0x0004) [0x0000000000000000]              
	TArray< struct FUIChangeStruct >                   m_UIChangeEvents;                                 		// 0x04D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSysCounterData >                   m_CountDatas;                                     		// 0x04E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWidgetBinding >                    m_WidgetsBound;                                   		// 0x04F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWidgetBinding >                    m_ButtonPromptStackss;                            		// 0x0504 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTgChatData* >                       m_arrPendingChat;                                 		// 0x0514 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_mcGlobal;                                       		// 0x0524 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_mcRoot;                                         		// 0x052C (0x0008) [0x0000000000000000]              
	class UTgDataHandler*                              m_DataHandler;                                    		// 0x0534 (0x0008) [0x0000000000000000]              
	class UTgEventMediator*                            m_EventMediator;                                  		// 0x053C (0x0008) [0x0000000000000000]              
	class UTgSceneManager*                             m_SceneManager;                                   		// 0x0544 (0x0008) [0x0000000000000000]              
	class UTgTimerManager*                             m_TimerManager;                                   		// 0x054C (0x0008) [0x0000000000000000]              
	class UTgPopupManager*                             m_PopupManager;                                   		// 0x0554 (0x0008) [0x0000000000000000]              
	class UTgRewardCenterManagerBase*                  m_RewardCenterManager;                            		// 0x055C (0x0008) [0x0000000000000000]              
	class UTgStreamManagerBase*                        m_StreamManager;                                  		// 0x0564 (0x0008) [0x0000000000000000]              
	class UTgLandingPanelManagerBase*                  m_LandingPanelManager;                            		// 0x056C (0x0008) [0x0000000000000000]              
	class UTgPlayerNameManager*                        m_pPlayerNameManager;                             		// 0x0574 (0x0008) [0x0000000000000000]              
	class UTgAcquisitionManager*                       m_AcquisitionManager;                             		// 0x057C (0x0008) [0x0000000000000000]              
	class UTgSessionVars*                              m_SessionVars;                                    		// 0x0584 (0x0008) [0x0000000000000000]              
	class UTgSystemNotifManagerBase*                   m_SystemNotificationManager;                      		// 0x058C (0x0008) [0x0000000000000000]              
	class UTgDeferManager*                             m_pDeferManager;                                  		// 0x0594 (0x0008) [0x0000000000000000]              
	class UTgUIServerStates*                           m_pUIStateInfo;                                   		// 0x059C (0x0008) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_EndMatchHandle;                                 		// 0x05A4 (0x0010) [0x0000000000000000]              
	class UTgGFxSelection*                             m_pGFxSelection;                                  		// 0x05B4 (0x0008) [0x0000000000000000]              
	class UTgPromptManager*                            m_pPromptManager;                                 		// 0x05BC (0x0008) [0x0000000000000000]              
	class UTgGFxNameDisplayManager*                    m_pNameDisplayManager;                            		// 0x05C4 (0x0008) [0x0000000000000000]              
	class UClass*                                      m_RewardCenterManagerClass;                       		// 0x05CC (0x0008) [0x0000000000000000]              
	class UClass*                                      m_StreamManagerClass;                             		// 0x05D4 (0x0008) [0x0000000000000000]              
	class UClass*                                      m_DataHandlerClass;                               		// 0x05DC (0x0008) [0x0000000000000000]              
	class UClass*                                      m_EventMediatorClass;                             		// 0x05E4 (0x0008) [0x0000000000000000]              
	class UClass*                                      m_SceneManagerClass;                              		// 0x05EC (0x0008) [0x0000000000000000]              
	class UClass*                                      m_MenuManagerClass;                               		// 0x05F4 (0x0008) [0x0000000000000000]              
	class UClass*                                      m_SessionVarsClass;                               		// 0x05FC (0x0008) [0x0000000000000000]              
	int                                                m_nLastTimerIndex;                                		// 0x0604 (0x0004) [0x0000000000000000]              
	int                                                m_nFeedbackType;                                  		// 0x0608 (0x0004) [0x0000000000000000]              
	int                                                m_PrevQueue;                                      		// 0x060C (0x0004) [0x0000000000000000]              
	int                                                m_nVaultIndex;                                    		// 0x0610 (0x0004) [0x0000000000000000]              
	int                                                m_nUGPFavorRefund;                                		// 0x0614 (0x0004) [0x0000000000000000]              
	TArray< int >                                      c_DeferredChannelTabs;                            		// 0x0618 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LobbyErrorMessage;                              		// 0x0628 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FIntStringPair                              m_LastLoginError;                                 		// 0x0638 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nFeatureAutoGodId;                              		// 0x064C (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureAutoSkinId;                             		// 0x0650 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureAutoEmoteId;                            		// 0x0654 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureAutoWardSkinId;                         		// 0x0658 (0x0004) [0x0000000000000000]              
	int                                                m_nMatchDetailsAutoMatchId;                       		// 0x065C (0x0004) [0x0000000000000000]              
	struct FString                                     m_socialPageAutoTab;                              		// 0x0660 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_rewardCenterTab;                                		// 0x0670 (0x0004) [0x0000000000000000]              
	int                                                m_rewardCenterItemId;                             		// 0x0674 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nCurrentActionId;                               		// 0x0678 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nCurrentEventId;                                		// 0x0679 (0x0001) [0x0000000000000000]              
	struct FString                                     m_SpecTeamNameEnemy;                              		// 0x067C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecTeamNameFriendly;                           		// 0x068C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecClanNameFriendly;                           		// 0x069C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecClanNameEnemy;                              		// 0x06AC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_SpecState;                                      		// 0x06BC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sGodPackImagePath;                              		// 0x06CC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nGodTargeterFlags;                              		// 0x06DC (0x0004) [0x0000000000000000]              
	int                                                m_nGodTargeterPrevIndex;                          		// 0x06E0 (0x0004) [0x0000000000000000]              
	int                                                m_nGodTargeterPrevPawnId;                         		// 0x06E4 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sGodTargeterDesc;                               		// 0x06E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMorriganTargeterPrevBotId;                     		// 0x06F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_nMorriganPassiveMeterTarget;                    		// 0x06FC (0x0008) [0x0000000000000000]              
	int                                                m_nPracticeQueueSkinId;                           		// 0x0704 (0x0004) [0x0000000000000000]              
	struct FTgLobbyStates                              c_PrevStates;                                     		// 0x0708 (0x0010) [0x0000000000000000]              
	struct FTgLobbyStates                              c_CurrStates;                                     		// 0x0718 (0x0010) [0x0000000000000000]              
	class UAlienFXManager*                             m_AlienFX;                                        		// 0x0728 (0x0008) [0x0000000000000000]              
	struct FLeaderboardOpenData                        m_LeaderboardDelayedOptions;                      		// 0x0730 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGfxGameInputInterceptor*                  m_pGameInputIntercept;                            		// 0x0748 (0x0008) [0x0000000000000000]              
	class UTgIntervalManager*                          m_pIntervalManager;                               		// 0x0750 (0x0008) [0x0000000000000000]              
	class UTgEsportsManager*                           m_pESportsManager;                                		// 0x0758 (0x0008) [0x0000000000000000]              
	struct FTgPurchaseRequest                          m_StoredPurchaseRequest;                          		// 0x0760 (0x0028) [0x0000000000000000]              
	float                                              m_fMatchingRemainingTimer;                        		// 0x0788 (0x0004) [0x0000000000000000]              
	float                                              m_fStatusCheckTimer;                              		// 0x078C (0x0004) [0x0000000000000000]              
	int                                                m_friendsAutoView;                                		// 0x0790 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_pTgCallbackDevice;                              		// 0x0794 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_pKeybindLookup;                                 		// 0x079C (0x0008) [0x0000000000001000]              ( CPF_Native )
	float                                              m_fMatchCheckTimer;                               		// 0x07A4 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x07A8 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgMoviePlayer.m_mapPrivilegeChecks
	struct FTgIntervalEntry                            m_privDelay;                                      		// 0x07F0 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_CustomQueueTarget;                              		// 0x0818 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct Fdword >                            m_cachedGiftsRedeemedIds;                         		// 0x0828 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fBlockBackLockoutTime;                          		// 0x0838 (0x0004) [0x0000000000000000]              
	class UTgVirtualKeyboard*                          m_pVirtualKeyboard;                               		// 0x083C (0x0008) [0x0000000000000000]              
	class UTgGFxItemHelperBinding*                     m_pGFxItemHelper;                                 		// 0x0844 (0x0008) [0x0000000000000000]              
	TArray< struct FTgReferralEntry >                  m_arrReferrals;                                   		// 0x084C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nTutorialEntryTries;                            		// 0x085C (0x0004) [0x0000000000000000]              
	float                                              m_fLoadHudTimer;                                  		// 0x0860 (0x0004) [0x0000000000000000]              
	TArray< struct FTgNavProperties >                  m_arrNavProperties;                               		// 0x0864 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_cachedFailedJoinChallengeSessionGuid;           		// 0x0874 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_passwordForFailedJoinChallenge;                 		// 0x0884 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgAnnouncerPreviewer*                       m_AnnouncerPreview;                               		// 0x0894 (0x0008) [0x0000000000000000]              
	struct FTgReportPlayer                             m_ReportPlayer;                                   		// 0x089C (0x0044) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x08E0 (0x0008) [0x0000000000000000]              
	class UOnlinePlayerInterface*                      PlayerInterface;                                  		// 0x08E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x08F0 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x08F8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x8 ];                             		// 0x0900 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlinePlayerInterfaceEx*                    PlayerInterfaceEx;                                		// 0x0908 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x8 ];                             		// 0x0910 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlineMarketplaceInterface*                 MarketplaceInterface;                             		// 0x0918 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x8 ];                             		// 0x0920 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlineVoiceInterface*                       VoiceInterface;                                   		// 0x0928 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x8 ];                             		// 0x0930 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlineContentInterface*                     ContentInterface;                                 		// 0x0938 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x8 ];                             		// 0x0940 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCallback__Delegate;                  		// 0x0948 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x094C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4829 );

		return pClassPointer;
	};

	bool usc_get_experimental_hud ( );
	void usc_use_experimental_hud ( unsigned long Value );
	void usc_PauseGame ( unsigned long shouldPause );
	void usc_minimap_hovered ( float X, float Y, struct FString MapName );
	void usc_minimap_pinged ( float X, float Y, struct FString Type, struct FString MapName );
	void usc_PauseGameToggle ( );
	bool usc_isAllowedPause ( );
	bool eventIsAccountPickerOpen ( );
	void usc_ShowContentPurchaseUI ( struct FString SignedOffer );
	void eventGetAvailableProducts ( int nControllerId, unsigned char MediaType, TArray< struct FMarketplaceProductDetails >* Products );
	void ShowContentPurchaseUI ( struct FString SingedOffer );
	void eventGetInventoryItems ( TArray< struct FMarketplaceInventoryItem >* InventoryItems );
	bool eventCanShowContentPurchaseUI ( );
	bool eventUnregisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex );
	bool eventRegisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex );
	void eventShowNotification ( int nType, struct FString Message, struct FString Message2, class UGFxObject* Data );
	void eventHideNotification ( int nType );
	void TestShowNotification ( );
	void TestHideNotification ( );
	void LogFocus ( );
	void eventSetGamepadMode ( unsigned long bIsGamepad );
	void eventSetModal ( class UGFxObject* modalObj );
	void eventClearModal ( );
	void eventEndLoading ( struct FString KeyName );
	void eventStartLoading ( struct FString KeyName );
	void eventGainFocus ( class UGFxObject* focusObj );
	void eventFindFocus ( );
	void eventRegainFocus ( );
	void eventLostFocus ( );
	void eventSetOnlineStatus ( unsigned char LocalUserNum, struct FString StatusString, unsigned long PlayerActive );
	void eventDisableVideoRecording ( );
	void eventEnableVideoRecording ( );
	int usc_get_gamestate ( );
	void UIDebugModeEnd ( );
	void UIDebugModeWatch ( struct FString sPath, int nDrillInDepth );
	void UIDebugModeNavigation ( );
	void UIDebugModeHighlight ( unsigned long mousableOnly );
	void ToggleAlienFX ( );
	void FlashCaptureMouse ( );
	void FlashReleaseMouse ( );
	void ListOpenScenes ( );
	void CloseAllScenes ( );
	void EnableItemWarningPopup ( );
	void DisableItemWarningPopup ( );
	void eventClosePartyInviteDialog ( );
	void eventDisplayLoginUI ( );
	bool eventShouldBlockKey ( int ControllerId, struct FName ButtonName, unsigned char Event );
	void usc_ClipboardCopy ( struct FString Str );
	struct FString usc_ClipboardPaste ( );
	void OnPlayerCardComplete ( unsigned long bWasSuccessful );
	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void eventReadOnlinePlayerData ( TArray< struct FString > PlayerIDs, unsigned long bIncludePresence );
	void eventCleanupUC ( );
	void InitOSSRef ( );
	void eventInit ( class ULocalPlayer* LocPlay );
	void eventPostWidgetInit ( );
	void eventTick ( float DeltaTime );
	void usc_findIndicesForCapitalSizeCharacters ( struct FString sourceText, class UGFxObject* out_capitalIndices );
	void usc_report_player ( struct FString sPlayerName, int nReasonCode, struct FString sReason, int nTaskForce, int nPlayerCount, int nReportedPlayerTaskForce );
	void DebugSimulmediaVideoPlayer ( );
	void DebugIntroVideo ( );
	void DebugActivities ( );
	bool usc_GetAppSettings ( struct FString pSetting );
	void OnClearCachedJoinChallengeTimer ( );
	void OnJoinChallengePasswordPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void FlushKeyboardBinds ( );
	void ToggleInputConfirm ( unsigned long bEnable );
	void TestInputHud ( unsigned long isGamePad );
	void ForcePSPlus ( unsigned long bShouldForce );
	void usc_MuteVivoxPlayer ( struct FString sPlayerId, unsigned long Toggle, struct FString sPlatformId );
	void OnReferralSelected ( class UTgEventDataItem* pEvent );
	bool ShowGodPackPurchase ( );
	bool GetOwnsGodPack ( );
	void eventDestroyVideoPlayer ( );
	void eventOnVideoError ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode );
	void eventSpawnVideoPlayer ( class AActor* SpawningActor );
	void PrintUIGameInputIntercepts ( );
	void PrintInputCaptures ( );
	void PrintFocusStack ( );
	void PrintGameInfo ( );
	void NativeVideoPlayerDestroy ( );
	void HandleVideoPlayerErrorCallback ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode );
	bool CheckForGlobalKeyInput ( int ControllerId, struct FName ButtonName, unsigned char Event );
	void OnToggleSkillScreen ( class UTgEventDataItem* pEvent );
	void OnVendorStoreToggle ( class UTgEventDataItem* pEvent );
	void OnVendorStoreClose ( class UTgEventDataItem* pEvent );
	void OnVendorStoreOpen ( class UTgEventDataItem* pEvent );
	void usc_CheckEOMLSimulmediaOpportunities ( );
	void usc_NativeLog ( struct FString sValue );
	bool usc_getIsGamePadInput ( );
	void usc_saveTransformSettings ( struct FString TransformSettings );
	struct FString usc_loadTransformSettings ( );
	void OnVideoPlaybackEnded ( );
	class UGFxObject* usc_GetFocusedTextField ( );
	bool usc_ShowKeyboardUI ( class UGFxObject* FocusedTextField, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	bool usc_HideKeyboardUI ( );
	bool usc_IsShowingKeyboardUI ( );
	void OnResolveChatMessage ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void OpenPurchaseGems ( struct FString SKUCode );
	void ClaimPendingChatMessages ( TArray< class UTgChatData* >* out_arrData );
	void ShowHudChatMessage ( class UTgChatData* pData );
	void TestShowMessage ( struct FString msg );
	void gfxProcessSound ( struct FName aThemeName, struct FName aEventName );
	void OnBattlePassToastUpdate ( class UTgEventDataItem* pEvent );
	void OnInputModeChanged ( class UTgEventDataItem* pEvent );
	void HandleClanPlayerInviteUpdates ( struct FPointer pEvent );
	bool usc_send_chat ( int nChannel, struct FString msg, struct FString Recipient );
	bool usc_can_view_ugc ( );
	void ASC_ShowFriendsUI ( );
	void SetupPurchaseWithProductId ( struct FString sProductId );
	void ClaimGift ( struct FString nAcqId );
	void TestListPendingGifts ( );
	void TestSendGift ( int nPlayerId, int nMessageIndex, unsigned long bAnon );
	struct FString FixLocalizationKeybinds ( struct FString sMsg );
	class UTgGFxPlayerData* GetPlayerData ( struct FTgPlayerId* pid );
	void AttemptToJoinTutorial ( float DeltaTime );
	void eventCallPrivilegeDelegate ( struct FScriptDelegate delCallback, unsigned char ePriv, unsigned char ePermiss );
	void CheckOnlinePrivileges ( unsigned char ePriv, struct FScriptDelegate delCallback );
	void CancelCheckOnlinePrivileges ( class UObject* pScope );
	void OnVGSCustomMessage ( unsigned long bSuccess, struct FString sText );
	void TryEstablishPlatformSession ( struct FPointer pMarshal );
	void OnForceMatchDataUpdate ( class UTgEventDataItem* pEvent );
	void OnMatchDataChange ( class UTgEventDataItem* pEvent );
	void ReceiveMatchData ( struct FPointer pMarshal );
	bool UnregisterLocalPlayerForVoice ( unsigned char ChannelIndex );
	bool RegisterLocalPlayerForVoice ( unsigned char ChannelIndex );
	void UpdateCameraBasedOnNavAction ( );
	void EquipLoadoutItem ( int nItemId );
	void NavigateTo ( struct FNavParams* Params );
	void HandleEscapeKey ( );
	void usc_goto_item ( int nItemId, unsigned long bUseAltRedirect );
	void GotoChestItem ( int nChestItemId, int nOriginalItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	void GotoItem ( int nItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	bool RedirectToItemObtainLocation ( int nItemId );
	bool ShowGodVideo ( int nGodVideoId, struct FString sGodVideoUrl );
	void goto_lobby ( unsigned long bAtEOM );
	class UTgGFxObject* GetRoot ( );
	class UGFxObject* GetWidget ( struct FName WidgetName );
	void TestMatchLobby ( int nQueue, unsigned long bPreSelect, int nTeamCount, int nPlayerPerTeam );
	struct FString GetHUDTeamName ( unsigned long bEnemy );
	void SetLanguage ( );
	void ShowLoginMessage ( struct FString sMsg );
	void ShowLoginUI ( );
	void ShowNormalUI ( );
	struct FIntStringPair GetAndClearLastLoginError ( );
	void TestClearDeferBlacklist ( );
	bool TestAddDeferBlacklistEntry ( int newEntry );
	void TestDeferBlacklist ( unsigned long bQueue );
	void TestShowPopupModal ( int nType );
	void TestSendPlayerTrackingEvent ( int nEvent, int nSubEvent, struct FString sRefName, int nRefValue );
	void TestPurchaseClanNameChange ( struct FString sName, struct FString sTag );
	void TestShowAcquisition ( int nType, int nLootId );
	void SendCloseAllPopup ( );
	void SendClosePopup ( );
	void SendOpenPopup ( class UTgPagePopup* pPopup );
	void SetSceneLoadPermissions ( struct Fdword fPermiss );
	void PlayerLoginError ( int nError, struct FString sMessage );
	void SetLoginReady ( unsigned long fromIntro );
	void OnLobbyStateChange ( class UTgEventDataItem* pEvent );
	void OnHUDStateChange ( class UTgEventDataItem* pEvent );
	void OnSpectateFail ( class UTgEventDataItem* pEvent );
	struct FString USC_GetCurrencyName ( int nCurrencyValidValue );
	int usc_getConsolePlatform ( );
	bool usc_isConsole ( );
	void AttemptAutoLogin ( );
	void usc_acceptEULA ( );
	bool usc_createPlayerName ( struct FString sLoginName, struct FString sPass, struct FString sNewPlayerName );
	bool USC_Login ( struct FString sUsername, struct FString sPassword );
	bool USC_LoginExits ( );
	bool usc_isLoginReady ( );
	void USC_ShowEndOfMatch ( unsigned long bShow );
	void eventUpdateVoiceChatPlayer ( struct FString sPId, unsigned long bIsActive, unsigned long bIsSpeaking );
	void usc_toggle_voice_mute ( struct FString sConsoleId, int nPortalType, struct FString sPlayerName, struct FString sPlayerId, unsigned long bMute );
	void usc_toggle_player_mute ( struct FString ConsoleIdString, struct FString PlayerName, struct FString sPlayerId );
	bool usc_add_to_party ( struct FString sConsoleId, int nPortalType, struct FString sPlayerId, struct FString sPlayerName );
	bool usc_can_invite_to_party ( struct FString sPlayerId );
	bool usc_add_to_clan ( struct FString sConsoleId, int nPortalType, struct FString sPlayerId, struct FString sPlayerName );
	bool usc_can_invite_to_clan ( struct FString sPlayerId );
	float usc_get_queue_timer ( int nQueueId );
	bool usc_can_cancel_spectate ( );
	void usc_disconnect ( );
	void usc_CancelQueue ( );
	bool is_item_owned ( int ItemId );
	bool SetUIDisplayMode ( int displayMode );
	class UGFxObject* usc_getItemData ( int ItemId, int quantityCount, int vendorId );
	void usc_Scene_Manager_Scene_Unloaded ( struct FString sSceneName );
	void usc_Scene_Manager_Scene_Loaded ( struct FString sSceneName );
	void update_player_mute ( );
	void TryToggleMute ( unsigned long bShouldMute );
	void ShowPopupMessage ( struct FString sTitle, struct FString sMessage );
	void ShowErrorMessage ( struct FString sTitle, struct FString sMessage, unsigned long _user_must_close );
	void SetHUDVisiblity ( );
	void OnDemoReady ( );
	void AddRecentlyInvited ( struct FTgPlayerId* pid );
	int GetRecentlyInvitedTimeRemain ( struct FTgPlayerId* pid );
	bool HasRecentlyInvited ( struct FTgPlayerId* pid );
	bool usc_isItemEquippable ( int nItemId );
	bool usc_isItemEquipped ( int nItemId );
	int usc_GetActiveGamepadIndex ( int nPlayerIndex );
	int usc_RegisterCardTexture ( class UGFxObject* Widget, int nItemId, float X, float Y, float Width, float Height, unsigned long bOnlyIfMat );
	class UGFxObject* GetTestNotificationData ( );
	void usc_UnregisterCardTextureById ( int nCardId );
	void usc_UnregisterCardTexture ( class UGFxObject* Widget );
	void StartBatchPurchaseRequest ( );
	void GetFeedback ( int nType );
	void CompleteBatchPurchaseRequest ( );
	void AddBatchPurchaseRequest ( int nVendorId, int nItemId, int nPriceInUI, int nCurrencyType, int nQuantity, struct Fdword locationId, int nCouponId );
	struct FString usc_get_class_purchase_pricing ( int nClassId );
	struct FString usc_GetGameName ( );
	int GetSysCounterValue ( int nCounterId );
	int GetPortalType ( );
	bool usc_is_time_between ( struct FString Start, struct FString End );
	bool usc_isFriend ( struct FString sPlayerId );
	bool usc_is_party_leader ( );
	bool usc_can_invite_players ( );
	bool usc_ableToSkipTutorial ( );
	void usc_watch_eom_replay ( struct FString sInstanceId );
	void usc_remove_music_theme ( int nItemId, struct FString sEventName );
	void usc_add_music_theme ( int nItemId, struct FString sEventName );
	void usc_test_music_theme ( int nItemId, struct FString sEventName );
	void usc_show_god_detail ( int nClassId );
	void usc_request_goto_lobby ( struct FString Title, struct FString Desc );
	void usc_redeem_login_bonus ( );
	void usc_queue_create_team ( int nQueueId, struct FString sPassword );
	void usc_onServerStabilityFeedback ( );
	void usc_match_suggest_pick ( int nClassId );
	void usc_match_suggest_ban ( int nClassId );
	void usc_match_cancel_role_trade ( );
	void usc_match_request_role_trade ( struct FString sPlayerId );
	void usc_match_request_trade ( struct FString sPlayerId );
	void usc_match_request_random_class ( );
	void usc_match_purchase_voice_pack ( int nVoicePackItemId );
	void usc_match_close_random_class_popup ( );
	void usc_match_cancel_trade ( );
	void usc_match_ban_class ( int nClassId );
	void usc_kick_team_player ( struct FString sPlayerName );
	void usc_introFinished ( );
	void Replay ( int nInstanceId, struct FString sPassword );
	void ChangeHudSection ( struct FString Section, float percentX, float percentY, float Scale, float dockX, float dockY, struct FString dockObj, float dockObjX, float dockObjY, unsigned long outX, unsigned long outY );
	struct FString usc_GetHudSkinPath ( );
	class UGFxObject* usc_get_date_est ( );
	int usc_get_time ( );
	int usc_get_server_time_secs ( );
	int usc_get_server_time ( );
	int usc_SyncMorriganPassiveMeter ( class UGFxObject* passiveMeter );
	int usc_GetRentedTimeLeft ( int nItemId, int nIdType );
	bool usc_resize_browser ( int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	bool usc_match_can_purchase_random_class ( int nQueueId );
	bool usc_is_item_owned ( struct FString ItemId );
	bool usc_is_in_game ( );
	bool usc_isInTutorial ( );
	bool usc_isInSiege ( );
	bool usc_isCapsLockActive ( );
	bool usc_can_play_again ( );
	bool usc_IsGameBit ( int iGB );
	bool usc_ConfirmHudSkin ( int nId );
	void usc_viewStatsOnline ( struct FString sInstanceId );
	void usc_upgrade_item ( int nItemId, int nUpgradeInvId );
	void usc_unregister_mouse_region ( struct FString Key );
	void usc_test_voice_pack ( int nVoicePackId, int nSkinId );
	void usc_test_announcer_pack ( int nItemId );
	void usc_surrender ( unsigned long bSurrender );
	void usc_show_skin ( int nSkinId );
	void usc_set_auto_skill_up ( unsigned long bAutoSkill, unsigned long bForMatch );
	void usc_set_auto_purchase ( unsigned long bAutoPurchase, unsigned long bForMatch );
	void usc_sell_item ( int nInventoryId );
	void usc_resend_private_messages ( );
	void usc_request_treasure_roll ( int nItemId, int CurrencyType );
	void usc_keep_me_logged_in ( unsigned long bNewValue );
	void usc_rejectNotification ( int nNotificationType, int nId );
	void usc_register_mouse_region ( struct FString Key, int X, int Y, int Width, int Height );
	void usc_redeem_reward ( int nActId, int nGoalId, int nCount );
	void usc_queue_leave ( );
	void usc_purchase_item ( int nItemId, int nAmount );
	void usc_play_again ( );
	void usc_passwordInputFocus ( );
	void usc_open_triumph_chest ( int nLootTableItemId );
	void usc_nameInputFocus ( );
	void usc_match_lock_in ( );
	void usc_match_choose_skin ( int nSkinId );
	void usc_match_choose_class ( int nClassId );
	void usc_friend_action ( struct FString sType, struct FString sPlayerId );
	void usc_enable_browser_input ( unsigned long bEnable );
	void usc_close_eom_lobby ( int nNavigationTarget );
	void usc_clearLeagueDC ( );
	void usc_attempt_auto_login ( );
	void usc_acceptNotification ( int nNotificationType, int nId );
	void usc_Accept_Match_Invite ( );
	void UnloadHudSection ( struct FString Section );
	void USC_ShowLeaderboard ( struct FString sName, int nValue, int nOption );
	void SetSpecTeamName ( unsigned long bEnemy, struct FString TeamName );
	void SetSpecState ( struct FString stateString );
	void EndLobbyPlayback ( );
	void CancelPlayback ( );
	void USC_SelectedPopup ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue );
	bool TryPopupCallback ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue );
	void AddInitialChatMessages ( );
	void FakeItemToast ( int nItemId );
	void CloseChatTab ( int nChannel, struct FString sSender );
	void OpenChatTab ( int nChannel, unsigned long bForce );
	void UpdateMapBackground ( );
	void AttemptAutoReplayDemoRecording ( );
	void usc_chat_ready ( );
	void usc_vgs_command ( int nId, unsigned long bSubMenu );
	void usc_chat_close_tab ( int nChannel, struct FString Sender );
	int usc_get_sellback_price ( int nItemId );
	int usc_full_sellback_available ( int nItemId );
	void usc_set_chat_channel ( int nChannel );
	void AddRemoveDeferredChannelTab ( unsigned long bAdd, int nChannelId );
	bool usc_can_view_user_content ( );
	void UnregisterForJSON ( class UPComUIManagerBase* pRegistrant, struct FString sJsonName );
	void RegisterForJSON ( class UPComUIManagerBase* pRegistrant, struct FString sJsonName );
	void UnregisterMctsCallbacks ( );
	void RegisterMctsCallbacks ( );
	void OpenWorldScene ( struct FString CameraName, int cameraTransitionType );
	bool usc_IME_Exists ( );
	bool usc_IME_SetEnabled ( unsigned long bEnabled );
	void usc_view_player_profile ( struct FString sPlayerId, struct FString sPlayerName, struct FString sProfileTab );
	void usc_view_platform_player_card ( struct FString sPlayerId, struct FString sPlayerName );
	void UpdatePromptMode ( class UGFxObject* pObj );
	void SetButtonPromptMode ( int nMode );
	bool usc_HasPlayerLogin ( );
	struct FString usc_getFontSize ( struct FString Identifier, struct FString SectionName );
	struct FString usc_TranslateMsg ( struct FString Identifier, struct FString SectionName );
	struct FString usc_TranslateMsgId ( int nId );
	void ShowTransitionScene ( unsigned long bShow );
	bool usc_is_safe_to_load ( struct FString sUrl );
	void usc_toggle_key_capture ( unsigned long bCapture );
	void usc_toggle_cursor ( unsigned long bShow, unsigned long bOnlyVisibility );
	void usc_quit ( );
	void usc_Console_Command ( struct FString Cmd );
	void usc_Scene_Manager_Created ( );
	void usc_Event_Mediator_Created ( );
	void usc_Data_Handler_Created ( );
	void GotoSendGift ( struct FPointer pPID );
	void ProcessUIEvents ( );
	void UIChangeEvent ( class AActor* refActor, unsigned char Event, unsigned long bUnique, int subType );
	void UnregisterEngineCallbacks ( );
	void RegisterEngineCallbacks ( );
	struct FString GetKeyBindText ( struct FString Command, int nAlternate, unsigned long bUseLookup );
	struct FString GetTranslatedSpecKeyBind ( struct FString Command, int nAlternate, unsigned long bUseLookup );
	struct FString GetTranslatedKeyBind ( struct FString Command, int nAlternate, unsigned long bUseLookup );
	void UpdateViewportForSafeAreas ( );
	void OnMatchTimeout ( float nDeltaTime );
	void NativeTick ( float DeltaTime );
	void eventOnClose ( );
	void PostInit ( );
	void InitializeSceneManager ( );
	void InitializeDataHandler ( );
	class UTgDataGroup_Settings* GetSettingsData ( );
	class UTgDataGroup_EOMLobby* GetEOMLobbyData ( );
	class UTgLobbyDC_BattlePass* GetBattlePassDataChunk ( );
	class UTgLobbyDC_Inventory* GetLobbyInventoryDataChunk ( );
	class UTgGameDC_Player* GetCharacterBuilderData ( );
	class UTgLobbyDC_Lobby* GetLobbyDataChunk ( );
	class UTgLobbyDC_Match* GetMatchDataChunk ( );
	class UTgDataGroup_Lobby* GetLobbyData ( );
	class UTgDataGroup_Game* GetGameData ( );
	class UTgUIServerStates* GetStateInfo ( );
	class UTgEsportsManager* GetESportsManager ( );
	class UTgDeferManager* GetDeferManager ( );
	class UTgIntervalManager* GetIntervalManager ( );
	class UTgEventDispatcher* GetDispatcher ( );
	class ATgClientHUD* GetHUD ( );
	class ATgPlayerController* GetPlayerOwner ( );
	void OnPrivilegeCallback ( unsigned char ePriv, unsigned char ePermiss );
};

UClass* UTgMoviePlayer::pClassPointer = NULL;

// Class TgClientBase.TgBrowserManager
// 0x00A0 (0x0100 - 0x0060)
class UTgBrowserManager : public UPComBrowserManager
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FString                                     URLGold;                                          		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLCreateAccount;                                 		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLRecoverPassword;                               		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLRecoverUsername;                               		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLGodPack;                                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLFacebookPromo;                                 		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLTwitterPromo;                                  		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLRecruitPromo;                                  		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URLReferLinkup;                                   		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxBrowser*                               m_container;                                      		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4830 );

		return pClassPointer;
	};

	void eventOpenWebPage ( int pageType, unsigned long bExternal, unsigned long bShowNavButtons, unsigned long bAddLang );
	struct FString GetURLByPageType ( int pageType );
	void eventOpenWebPageWithTarget ( int pageType, struct FString urlTarget, unsigned long bExternal, unsigned long bShowNavButtons );
	void SetContainer ( class UTgGFxBrowser* pContainer );
	void ResizeView ( );
	void Close ( );
	void OpenVideo ( struct FString URL );
	void OpenURL ( struct FString URL, unsigned long bShowNavButtons, unsigned long bSetFocus );
	void ExternalOpenURL ( struct FString URL, unsigned long bAddLang );
	void OnLobbyStateChange ( class UTgEventDataItem* pEvent );
	void Initialize ( class UTgMoviePlayer* theMovie );
	bool IsBrowserLoaded ( );
};

UClass* UTgBrowserManager::pClassPointer = NULL;

// Class TgClientBase.TgButtonPromptEvent
// 0x0008 (0x007C - 0x0074)
class UTgButtonPromptEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    m_buttonPrompts;                                  		// 0x0074 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4831 );

		return pClassPointer;
	};

};

UClass* UTgButtonPromptEvent::pClassPointer = NULL;

// Class TgClientBase.TgCanvasDrawInterface
// 0x0000 (0x0060 - 0x0060)
class UTgCanvasDrawInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4832 );

		return pClassPointer;
	};

	void DrawCanvas ( class UCanvas* pCanvas );
};

UClass* UTgCanvasDrawInterface::pClassPointer = NULL;

// Class TgClientBase.TgChangeHudSectionEvent
// 0x0040 (0x00B4 - 0x0074)
class UTgChangeHudSectionEvent : public UTgEventDataItem
{
public:
	struct FTgHudSectionInfo                           Info;                                             		// 0x0074 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4833 );

		return pClassPointer;
	};

};

UClass* UTgChangeHudSectionEvent::pClassPointer = NULL;

// Class TgClientBase.TgChatData
// 0x00A0 (0x0100 - 0x0060)
class UTgChatData : public UObject
{
public:
	int                                                m_nId;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                m_nSoundId;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                m_nChannel;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bWarning : 1;                                   		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bFeedback : 1;                                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHideSender : 1;                                		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bNew : 1;                                       		// 0x006C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsVGS : 1;                                     		// 0x006C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bOnlyIfOpen : 1;                                		// 0x006C (0x0004) [0x0000000000000000] [0x00000020] 
	struct FString                                     m_sSender;                                        		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMessage;                                       		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sTimestamp;                                     		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSenderColor;                                   		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSenderClass;                                   		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMessageColor;                                  		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ColorVGS;                                       		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ColorWarn;                                      		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWarningToken;                                  		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4834 );

		return pClassPointer;
	};

	struct FString eventTokenReplace ( struct FString Message, struct FString Token, struct FString sValue );
	bool eventCheckWarning ( struct FString Message );
};

UClass* UTgChatData::pClassPointer = NULL;

// Class TgClientBase.TgChatEvent
// 0x0044 (0x00B8 - 0x0074)
class UTgChatEvent : public UTgEventDataItem
{
public:
	int                                                nChatEvent;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0078 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0088 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FQWord                                      nPlayerId;                                        		// 0x0098 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nMessageId;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                nChatChannel;                                     		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                nTime;                                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                nFlags;                                           		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FPointer                                    pMarshal;                                         		// 0x00B0 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4835 );

		return pClassPointer;
	};

};

UClass* UTgChatEvent::pClassPointer = NULL;

// Class TgClientBase.TgClientBaseHUD
// 0x0000 (0x0588 - 0x0588)
class ATgClientBaseHUD : public ATgHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4836 );

		return pClassPointer;
	};

};

UClass* ATgClientBaseHUD::pClassPointer = NULL;

// Class TgClientBase.TgClientHUD
// 0x0068 (0x05F0 - 0x0588)
class ATgClientHUD : public ATgClientBaseHUD
{
public:
	struct FPointer                                    m_pTgCallbackDevice;                              		// 0x0588 (0x0008) [0x0000000000001000]              ( CPF_Native )
	TArray< class UTgCanvasDrawInterface* >            m_arrPostRenders;                                 		// 0x0590 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UGFxMoviePlayer* >                   m_MoviePlayers;                                   		// 0x05A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x05B0 (0x0008) [0x0000000000100000]              
	class UClass*                                      m_MainMovieClass;                                 		// 0x05B8 (0x0008) [0x0000000000000000]              
	struct Fdword                                      m_nHudState;                                      		// 0x05C0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bEOMLWasInTraining : 1;                         		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FSceneInfo >                        m_ScenePaths;                                     		// 0x05C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgDevMenuMoviePlayer*                       m_DevMenu;                                        		// 0x05D8 (0x0008) [0x0000000000100000]              
	struct FString                                     m_BulletToken;                                    		// 0x05E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4837 );

		return pClassPointer;
	};

	struct FString eventGetBulletPoint ( int Index, struct FString Message );
	int eventGetGameState ( );
	void KillScene ( struct FString SceneName );
	void ToggleScene ( struct FString SceneName );
	void UnloadScene ( struct FString SceneName );
	void LoadScene ( struct FString SceneName );
	void eventTick ( float DeltaTime );
	void LogState ( struct FString sName );
	void PostBeginPlay ( );
	void eventPostRender ( );
	void OnEscapePressed ( );
	void OnDisconnect ( );
	void NotifyLobbyStateChange ( );
	void SHC ( unsigned long bShow );
	void ShowHardwareCursor ( unsigned long bShow );
	void ToggleDevMenu ( );
	void ToggleVGSScene ( );
	void ToggleHUDScene ( struct FString SceneName );
	void ToggleHUD ( );
	void TestDidIt ( int nActivityId, int nCount, int nGoalId );
	void UpdateSpectatorSettingsMenu ( );
	void UpdateKeyBindSettingsMenu ( int settingtype );
	void UpdateSpecKeyDisplay ( struct FString Key );
	void UpdateKeyDisplay ( struct FString Key );
	void gfxProcessSound ( struct FName aThemeName, struct FName aEventName );
	bool IsInGame ( );
	bool IsLoggedIn ( );
	unsigned char GetVisibilityMode ( );
	class UTgDataHandler* GetDataHandler ( );
	void NativePostRender ( );
	void UnregisterForPostRender ( class UTgCanvasDrawInterface* pObj );
	void RegisterForPostRender ( class UTgCanvasDrawInterface* pObj );
	void TutorialMessage ( int msgId, unsigned long bTips );
	void ResetViewCenterPoint ( );
	void SetViewCenterPoint ( float X, float Y, float fScale );
	void DisplayBadConnectionAlert ( );
	void InitSceneManager ( );
	void InitMainMoviePlayer ( );
	void ShowCursor ( unsigned long bShow, unsigned long bUpdateCapture );
	void CloseMovie ( class UGFxMoviePlayer* mp, unsigned long bUnload );
	class UGFxMoviePlayer* CreateMovie ( class UClass* MovieClass, unsigned long bAutoFocus, unsigned long bCaptureInput, unsigned char TimingMode, struct FString sMoviePath );
	void UnregisterEngineCallbacks ( );
	void RegisterEngineCallbacks ( );
};

UClass* ATgClientHUD::pClassPointer = NULL;

// Class TgClientBase.TgClientObject
// 0x0038 (0x0098 - 0x0060)
class UTgClientObject : public UObject
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FArray_Mirror                               MctsCallbackListeners;                            		// 0x0068 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               m_arrMctsEvents;                                  		// 0x0078 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FGameEventListener >                GameEventListeners;                               		// 0x0088 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4838 );

		return pClassPointer;
	};

	class UTgEventDispatcher* GetMovieDispatcher ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgClientObject::pClassPointer = NULL;

// Class TgClientBase.TgAcquisitionManager
// 0x0080 (0x0118 - 0x0098)
class UTgAcquisitionManager : public UTgClientObject
{
public:
	struct FMultiMap_Mirror                            AcquisitionsNeedingVendors;                       		// 0x0098 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FUIQueuedAcquisition >              m_QueuedAcquisitions;                             		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUIQueuedAcquisition >              m_QueuedAcquisitionsAlt;                          		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_FillingAcquisitionQueue;                        		// 0x0100 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_ActiveAcquisitionQueue;                         		// 0x0108 (0x0008) [0x0000000000001000]              ( CPF_Native )
	float                                              m_fAcquisitionProcessTime;                        		// 0x0110 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSquelchAcquisitions : 1;                       		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4839 );

		return pClassPointer;
	};

	void AddQueuedAcquisition ( struct FUIQueuedAcquisition* acqData );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgAcquisitionManager::pClassPointer = NULL;

// Class TgClientBase.TgDeferManager
// 0x0028 (0x00C0 - 0x0098)
class UTgDeferManager : public UTgClientObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0098 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FTgDeferEntry >                     m_arrTasks;                                       		// 0x00A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeferUpdate__Delegate;                        		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4840 );

		return pClassPointer;
	};

	void CancelTask ( class UTgDeferredTask* pTask );
	void StartTask ( class UTgDeferredTask* pTask, class UObject* pOwner, struct FName nmCallback );
	struct FTgDeferProgress GetProgress ( class UTgDeferredTask* pTask );
	void ClearAllCallbacks ( class UObject* pOwner );
	void ClearCallback ( class UTgDeferredTask* pTask );
	void SetAllCallbacks ( class UObject* pOwner, struct FName nmCallback, TArray< struct FTgDeferTaskData >* arrTasks );
	int SetCallback ( class UTgDeferredTask* pTask, class UObject* pOwner, struct FName nmCallback );
	int GetTasks ( class UObject* pOwner, TArray< struct FTgDeferTaskData >* out_arrData );
	bool IsTickable ( );
	void Tick ( float nDeltaTime );
	void OnDeferUpdate ( struct FTgDeferProgress* Progress );
};

UClass* UTgDeferManager::pClassPointer = NULL;

// Class TgClientBase.TgDeferredTask
// 0x0000 (0x0098 - 0x0098)
class UTgDeferredTask : public UTgClientObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4841 );

		return pClassPointer;
	};

	void Tick ( float nDeltaTime, struct FTgDeferProgress* Progress );
};

UClass* UTgDeferredTask::pClassPointer = NULL;

// Class TgClientBase.TgDeferDeclineFriendRequests
// 0x0030 (0x00C8 - 0x0098)
class UTgDeferDeclineFriendRequests : public UTgDeferredTask
{
public:
	TArray< struct Fdword >                            m_arrToDecline;                                   		// 0x0098 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nLastIndex;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                m_nUpdateCount;                                   		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FQWord                                      m_nLastTime;                                      		// 0x00B0 (0x0008) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_FriendTimeout;                                  		// 0x00B8 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4842 );

		return pClassPointer;
	};

	void OnFriendTimeout ( float nDeltaTime );
	void OnFriendUpdate ( struct FPointer pEventBase );
	void Tick ( float nDeltaTime, struct FTgDeferProgress* Progress );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgDeferDeclineFriendRequests::pClassPointer = NULL;

// Class TgClientBase.TgPopupManager
// 0x0030 (0x00C8 - 0x0098)
class UTgPopupManager : public UTgClientObject
{
public:
	TArray< class UTgPagePopup* >                      m_queued;                                         		// 0x0098 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgPagePopup* >                      m_dequeued;                                       		// 0x00A8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgPagePopup*                                m_curPopup;                                       		// 0x00B8 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bTempPopup : 1;                                 		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsModalOpen : 1;                               		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_nUpdateTime;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4843 );

		return pClassPointer;
	};

	void OnQueueStateChange ( class UTgEventDataItem* pEvent );
	void OpenPopup ( );
	void RemoveAllPopups ( );
	bool RemovePopup ( );
	bool AddPopup ( class UTgPagePopup* PopUp );
	void ClosePopup ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgPopupManager::pClassPointer = NULL;

// Class TgClientBase.TgRewardCenterManagerBase
// 0x00E0 (0x0178 - 0x0098)
class UTgRewardCenterManagerBase : public UTgClientObject
{
public:
	unsigned long                                      m_bHasSeenDealOfTheDay : 1;                       		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bPlayerLoggedIn : 1;                            		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDayHasRolledOver : 1;                          		// 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bShouldSkipReturnBonus : 1;                     		// 0x0098 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bHasQuestProgress : 1;                          		// 0x0098 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bHasQuestActivities : 1;                        		// 0x0098 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bHasQuestRewards : 1;                           		// 0x0098 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bQuestsSeenToday : 1;                           		// 0x0098 (0x0004) [0x0000000000000000] [0x00000080] 
	struct FDailyRewardInfo                            m_DailyReward;                                    		// 0x009C (0x0014) [0x0000000000000000]              
	TArray< struct FActivityGoal >                     m_pLevelUpGoals;                                  		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPlayerLevel;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
	TArray< struct FGoalRewardItem >                   m_pReturningBonus;                                		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPartyBonusStartTime;                           		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                m_nPartyBonusEndTime;                             		// 0x00D8 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerPartyBonus >                 m_pPartyBonuses;                                  		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_QuestList;                                      		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_TrainingQuestList;                              		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_SpecialEventQuestList;                          		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_ProgressedQuestList;                            		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuestData >                        m_TempVisibleQuestList;                           		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCouponData >                       m_CouponList;                                     		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fNextCouponExpires;                             		// 0x014C (0x0004) [0x0000000000000000]              
	TArray< struct FDailyBundleTrackingData >          m_DailyBundles;                                   		// 0x0150 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_LastSeenDeal;                                   		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                m_LastGeneratedDealId;                            		// 0x0164 (0x0004) [0x0000000000000000]              
	struct FArray_Mirror                               PendingGifts;                                     		// 0x0168 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4844 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void UpdateLoginDay ( struct Fdword nDay );
	void ClaimLoginBonus ( );
	bool TryAutoCollectLoginBonus ( );
	bool TryShowLoginBonus ( );
	bool ShouldShowLoginBonus ( );
};

UClass* UTgRewardCenterManagerBase::pClassPointer = NULL;

// Class TgClientBase.TgSessionVars
// 0x001C (0x00B4 - 0x0098)
class UTgSessionVars : public UTgClientObject
{
public:
	struct FString                                     m_PlayScreenFeaturedQueues;                       		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxPlayerGenerator*                       m_pPlayerGenerator;                               		// 0x00A8 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      m_bIsLiveSpectating : 1;                          		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHudNotifyDebugging : 1;                        		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4845 );

		return pClassPointer;
	};

	class UTgGFxFriendData* GetFriendData ( );
	class UTgGFxPlayerGenerator* GetPlayerGenerator ( );
	void OnHUDStateChange ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgSessionVars::pClassPointer = NULL;

// Class TgClientBase.TgStreamManagerBase
// 0x0068 (0x0100 - 0x0098)
class UTgStreamManagerBase : public UTgClientObject
{
public:
	struct FString                                     WatchEnd;                                         		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_CurrentChannel;                                 		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nNewsIndex;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	TArray< struct FGameStream >                       Streams;                                          		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_hasReceivedStreams : 1;                         		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_hasAnySpecial : 1;                              		// 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_hasAnyFeatured : 1;                             		// 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	struct FScriptDelegate                             __ViewerSort__Delegate;                           		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __FeaturedSort__Delegate;                         		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __LiveSort__Delegate;                             		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4846 );

		return pClassPointer;
	};

	struct FString GetFeatureDescription ( int Count );
	struct FString GetFeatureName ( int Count );
	bool HaveFeature ( );
	bool IsLiveAtIndex ( int Index );
	struct FString GetDescriptionAtIndex ( int Index );
	struct FString GetViewersAtIndex ( int Index );
	struct FString GetTitleAtIndex ( int Index );
	bool IsStream ( int Index );
	int GetTypeCountWatching ( unsigned char Type );
	int GetTypeCount ( unsigned char Type );
	int LiveSort ( struct FGameStream A, struct FGameStream B );
	int FeaturedSort ( struct FGameStream A, struct FGameStream B );
	int ViewerSort ( struct FGameStream A, struct FGameStream B );
	void eventResolveChannelName ( struct FString sChannel );
	void eventCompleteUpdate ( );
	bool eventViewStreamIndex ( int surfaceId, int Index, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat );
	void UpdateStreams ( );
	bool HasSpecialStreams ( );
	bool OpenPlayerStream ( int nPlayerId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	bool OpenStream ( int surfaceId, struct FString URL, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat );
	void LoadStreams ( );
};

UClass* UTgStreamManagerBase::pClassPointer = NULL;

// Class TgClientBase.TgDamageInfoEvent
// 0x005C (0x00D0 - 0x0074)
class UTgDamageInfoEvent : public UTgEventDataItem
{
public:
	struct FCombatMessageInfo                          MessageInfo;                                      		// 0x0074 (0x0038) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x00AC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nValue;                                           		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                eDisplayType;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nItemId;                                          		// 0x00C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bLocalSource : 1;                                 		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4847 );

		return pClassPointer;
	};

};

UClass* UTgDamageInfoEvent::pClassPointer = NULL;

// Class TgClientBase.TgDataHandler
// 0x00B4 (0x0160 - 0x00AC)
class UTgDataHandler : public UGFxObject
{
public:
	class UTgMoviePlayer*                              m_MP;                                             		// 0x00AC (0x0008) [0x0000000000000000]              
	class UTgDataGroup_Game*                           m_Game;                                           		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UTgDataGroup_Config*                         m_Config;                                         		// 0x00BC (0x0008) [0x0000000000000000]              
	class UTgDataGroup_Lobby*                          m_Lobby;                                          		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UTgDataGroup_EOMLobby*                       m_EOMLobby;                                       		// 0x00CC (0x0008) [0x0000000000000000]              
	class UTgDataGroup_Settings*                       m_Settings;                                       		// 0x00D4 (0x0008) [0x0000000000000000]              
	class UTgDataGroup_League*                         m_League;                                         		// 0x00DC (0x0008) [0x0000000000000000]              
	float                                              m_nLastUpdateTime;                                		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              m_nUpdateTime;                                    		// 0x00E8 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nUpdateStep;                                    		// 0x00EC (0x0001) [0x0000000000000000]              
	TArray< class UTgDataChunk* >                      m_DataChunkList;                                  		// 0x00F0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgDataChunk* >                      m_ChunksPendingDispatch;                          		// 0x0100 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgChunkUpdateQueue                         m_arrChunksToUpdate[ 0x4 ];                       		// 0x0110 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4848 );

		return pClassPointer;
	};

	bool MoviePlayer_GetUseSpectateEOMLobby ( );
	void DispatchEvent_LobbyHud_ClearRolledOverSkin ( );
	void DispatchEvent_MoviePlayer_SetIsCustom ( unsigned long bIsCustom );
	void DispatchEvent_MatchLobbyClassSelection_SetSpectatorMode ( );
	void DispatchEvent_SpectatorHUD_ForceTeamUpdate ( );
	void ChatInput_SetReplyName ( struct FString sSenderName );
	void DispatchEvent_VendorStore_UpdateInventory ( );
	void DispatchEvent_VendorStore_UpdateStats ( );
	void DoImmediateUpdate ( float DeltaTime, class UTgDataChunk* Node, unsigned long bParentIsSubscribed );
	void QueueDirtyChunks ( class UTgDataChunk* Node, unsigned long bParentIsSubscribed );
	void NotifyMapChange ( );
	void Update ( float DeltaTime, unsigned long bImmediate );
	void Uninitialize ( );
	void InitializeDataHandler ( );
};

UClass* UTgDataHandler::pClassPointer = NULL;

// Class TgClientBase.TgDataItemDoublePurchase
// 0x000C (0x0080 - 0x0074)
class UTgDataItemDoublePurchase : public UTgEventDataItem
{
public:
	struct Fdword                                      m_nLootId1;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nLootId2;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nLoc;                                           		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4849 );

		return pClassPointer;
	};

};

UClass* UTgDataItemDoublePurchase::pClassPointer = NULL;

// Class TgClientBase.TgDataItemEvent
// 0x0008 (0x007C - 0x0074)
class UTgDataItemEvent : public UTgEventDataItem
{
public:
	class UTgDataItem*                                 diData;                                           		// 0x0074 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4850 );

		return pClassPointer;
	};

};

UClass* UTgDataItemEvent::pClassPointer = NULL;

// Class TgClientBase.TgDataItemFriendList
// 0x0034 (0x0094 - 0x0060)
class UTgDataItemFriendList : public UTgDataItem
{
public:
	TArray< class UTgGFxPlayerData* >                  arrFriendData;                                    		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEnableSearch : 1;                                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableSearchAnyPlayer : 1;                       		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sMessage;                                         		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sError;                                           		// 0x0084 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4851 );

		return pClassPointer;
	};

};

UClass* UTgDataItemFriendList::pClassPointer = NULL;

// Class TgClientBase.TgDataItemPlayer
// 0x0024 (0x0098 - 0x0074)
class UTgDataItemPlayer : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 pid;                                              		// 0x0074 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4852 );

		return pClassPointer;
	};

};

UClass* UTgDataItemPlayer::pClassPointer = NULL;

// Class TgClientBase.TgDataItemPlayerItemGifting
// 0x0014 (0x00AC - 0x0098)
class UTgDataItemPlayerItemGifting : public UTgDataItemPlayer
{
public:
	struct Fdword                                      m_nLocation;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FString                                     m_overridePlayername;                             		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4853 );

		return pClassPointer;
	};

};

UClass* UTgDataItemPlayerItemGifting::pClassPointer = NULL;

// Class TgClientBase.TgDialogEvent
// 0x0008 (0x007C - 0x0074)
class UTgDialogEvent : public UTgEventDataItem
{
public:
	int                                                nImageId;                                         		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              fTextSpeedMultiplier;                             		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4854 );

		return pClassPointer;
	};

};

UClass* UTgDialogEvent::pClassPointer = NULL;

// Class TgClientBase.TgEsportsManager
// 0x00F8 (0x017C - 0x0084)
class UTgEsportsManager : public UPComUIManagerBase
{
public:
	struct FPointer                                    VfTable_ITgEventAccessInterface;                  		// 0x0084 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;              		// 0x008C (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FTgEsportsEvent >                   m_arrEvents;                                      		// 0x0094 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgEsportsMatchGroup >              m_arrMatchSchedule;                               		// 0x00A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgEsportsStats >                   m_arrAccumulativeStats;                           		// 0x00B4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgEsportsTeam >                    m_arrTeams;                                       		// 0x00C4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgEsportsFeaturedPanelData                 m_featuredPanelData;                              		// 0x00D4 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_arrTeamIconKeys;                                		// 0x0114 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgEventDispatcher*                          m_pDispatcher;                                    		// 0x0124 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FArray_Mirror                               m_arrMctsMfuncListeners;                          		// 0x012C (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               m_arrMctsEventListeners;                          		// 0x013C (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FQWord                                      m_nLastScheduleUpdate;                            		// 0x014C (0x0008) [0x0000000000000000]              
	struct FQWord                                      m_nLastPicksUpdate;                               		// 0x0154 (0x0008) [0x0000000000000000]              
	TArray< struct FTgEsportsTeamConfig >              arrTeamConfigs;                                   		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgEsportsRosterTeams >             arrRosterTeams;                                   		// 0x016C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4855 );

		return pClassPointer;
	};

	void ClearData ( );
	void GetArrInputIntercepts ( struct FPointer* pArr );
	void GetArrGameEventListeners ( struct FPointer* pArr );
	void GetArrMctsListeners ( struct FPointer* pArr );
	void GetArrOldMctsListeners ( struct FPointer* pArr );
	class UTgEventDispatcher* GetDispatcher ( );
	void RequestESportsPicks ( );
	void RequestESportsMatches ( );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgEsportsManager::pClassPointer = NULL;

// Class TgClientBase.TgEventAccessInterface
// 0x0000 (0x0060 - 0x0060)
class UTgEventAccessInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4856 );

		return pClassPointer;
	};

	void GetArrInputIntercepts ( struct FPointer* pArr );
	void GetArrGameEventListeners ( struct FPointer* pArr );
	void GetArrMctsListeners ( struct FPointer* pArr );
	void GetArrOldMctsListeners ( struct FPointer* pArr );
};

UClass* UTgEventAccessInterface::pClassPointer = NULL;

// Class TgClientBase.TgEventMediator
// 0x0000 (0x00AC - 0x00AC)
class UTgEventMediator : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4857 );

		return pClassPointer;
	};

	void DispatchEvent ( struct FString sEventType, struct FASValue EventData );
};

UClass* UTgEventMediator::pClassPointer = NULL;

// Class TgClientBase.TgEventSceneInterface
// 0x0000 (0x0060 - 0x0060)
class UTgEventSceneInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4858 );

		return pClassPointer;
	};

	void GetBuyAllPurchaseModalArtLinkage ( struct FString* sOutArtLinkage );
	void GetRewardItemIds ( TArray< int >* outItemIds );
	void GetAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* sOutSubtext );
};

UClass* UTgEventSceneInterface::pClassPointer = NULL;

// Class TgClientBase.TgFXEvent
// 0x0004 (0x0078 - 0x0074)
class UTgFXEvent : public UTgEventDataItem
{
public:
	float                                              nValue;                                           		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4859 );

		return pClassPointer;
	};

};

UClass* UTgFXEvent::pClassPointer = NULL;

// Class TgClientBase.TgGameLaunchBase
// 0x0024 (0x04D0 - 0x04AC)
class ATgGameLaunchBase : public AGameInfo
{
public:
	struct FString                                     LoginName;                                        		// 0x04AC (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     LoginPwd;                                         		// 0x04BC (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	unsigned long                                      SaveLoginName : 1;                                		// 0x04CC (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4860 );

		return pClassPointer;
	};

};

UClass* ATgGameLaunchBase::pClassPointer = NULL;

// Class TgClientBase.TgGameProfileEvent
// 0x0034 (0x00A8 - 0x0074)
class UTgGameProfileEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 pidPlayerId;                                      		// 0x0074 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sProfileTab;                                      		// 0x0098 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4861 );

		return pClassPointer;
	};

};

UClass* UTgGameProfileEvent::pClassPointer = NULL;

// Class TgClientBase.TgGameQueueConst
// 0x0000 (0x0060 - 0x0060)
class UTgGameQueueConst : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4862 );

		return pClassPointer;
	};

};

UClass* UTgGameQueueConst::pClassPointer = NULL;

// Class TgClientBase.TgGameUIDispatcher
// 0x0000 (0x0060 - 0x0060)
class UTgGameUIDispatcher : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4863 );

		return pClassPointer;
	};

};

UClass* UTgGameUIDispatcher::pClassPointer = NULL;

// Class TgClientBase.TgGameViewportClientBase
// 0x0014 (0x01D8 - 0x01C4)
class UTgGameViewportClientBase : public UPComGameViewportClient
{
public:
	TArray< class UTgObjectReferencer* >               m_DeferredManifests;                              		// 0x01C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_dragging : 1;                                   		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_wasMaximized : 1;                               		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4864 );

		return pClassPointer;
	};

	void eventGetSubtitleRegion ( struct FVector2D* MinPos, struct FVector2D* MaxPos );
	void eventPostRender ( class UCanvas* Canvas );
	void eventGameSessionEnded ( );
	void NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title );
	void AdjustViewportSafeZone ( float Amount );
	void SetViewportSafeZone ( float SafeZone );
	void HandleConnectionError ( unsigned char MessageType );
	void NativePostRender ( class UCanvas* Canvas );
	bool IsGfxMovieCapturingMouseInput ( );
	void NativeGameSessionEnded ( );
	void DrawTransition ( class UCanvas* Canvas );
};

UClass* UTgGameViewportClientBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxGameInputInterceptor
// 0x005C (0x0108 - 0x00AC)
class UTgGfxGameInputInterceptor : public UGFxObject
{
public:
	unsigned long                                      bSuspend : 1;                                     		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x00B0 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGfxGameInputInterceptor.registeredIntercepts
	struct FScriptDelegate                             __HandleInput_Delegate__Delegate;                 		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4865 );

		return pClassPointer;
	};

	void PrintUIGameInputIntercepts ( );
	struct FString ASC_DebugPrint ( );
	struct FString eventDebugPrintAS ( );
	int ASC_HandleInterceptInput ( class UGFxObject* Obj );
	int eventHandleInterceptInput ( class UGFxObject* Obj );
	bool eventCallInputDelegate ( struct FScriptDelegate delCallback, struct FPointer pInputEvent );
	void USC_ToggleSuspend ( unsigned long suspend );
	void USC_RemoveIntercept ( struct FString sInput );
	void USC_AddIntercept ( struct FString sInput );
	void DebugPrint ( );
	bool HandleASIntercept ( struct FPointer pInputEvent );
	void RemoveASIntercept ( struct FString sInput );
	void AddASIntercept ( struct FString sInput );
	void SetupBindings ( );
	bool HandleInput_Delegate ( struct FPointer pInputEvent );
};

UClass* UTgGfxGameInputInterceptor::pClassPointer = NULL;

// Class TgClientBase.TgGfxGameVideoPlayerManager
// 0x0038 (0x00E4 - 0x00AC)
class UTgGfxGameVideoPlayerManager : public UGFxObject
{
public:
	class UGFxMoviePlayer*                             m_Movie;                                          		// 0x00AC (0x0008) [0x0000000000000000]              
	class APComVideoPlayer*                            m_PComVideoPlayer;                                		// 0x00B4 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIsPC : 1;                                      		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasVP : 1;                                     		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eCurErrorCode;                                  		// 0x00C0 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_PlayVideo_Delegate__Delegate;               		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_StopVideo_Delegate__Delegate;               		// 0x00D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4866 );

		return pClassPointer;
	};

	void USC_StopVideo_Delegate ( );
	void USC_StopVideo ( );
	void USC_PlayVideo_Delegate ( struct FString URL, class UGFxObject* dimensions );
	void USC_PlayVideo ( struct FString URL, class UGFxObject* dimensions );
	void eventDestroyVideoPlayer ( );
	void eventOnVideoComplete ( );
	void ASC_OnVideoComplete ( );
	void eventOnVideoError ( int ErrorCode );
	void ASC_OnVideoError ( int ErrorCode );
	void eventSpawnVideoPlayer ( class AActor* SpawningActor );
	void Uninitialize ( );
	void Initialize ( class UGFxMoviePlayer* theMovie );
};

UClass* UTgGfxGameVideoPlayerManager::pClassPointer = NULL;

// Class TgClientBase.TgGFxNameDisplayManager
// 0x0020 (0x0080 - 0x0060)
class UTgGFxNameDisplayManager : public UObject
{
public:
	TArray< struct FTgPlayerNameWidgetBind >           m_arrWidgets;                                     		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgWidgetNameRequest >              m_arrRequests;                                    		// 0x0070 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4867 );

		return pClassPointer;
	};

	void OnReceiveFilteredNames ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void CancelRequest ( class UTgGFxPlayerNameWidget* pWidget );
	void MakeRequest ( class UTgGFxPlayerNameWidget* pWidget, struct FTgPlayerId* pid );
	void RemoveWidget ( struct FName WidgetPath, class UTgGFxPlayerNameWidget* pWidget );
	void AddWidget ( struct FName WidgetPath, class UTgGFxPlayerNameWidget* pWidget );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgGFxNameDisplayManager::pClassPointer = NULL;

// Class TgClientBase.TgGFxObject
// 0x0010 (0x00BC - 0x00AC)
class UTgGFxObject : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                        		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4868 );

		return pClassPointer;
	};

	void eventASRemoveAllEventListenersImpl ( struct FString Event );
	void eventASRemoveEventListenerImpl ( struct FString Type, class UGFxObject* O, struct FString func );
	void eventASAddEventListenerImpl ( struct FString Type, class UGFxObject* O, struct FString func );
	void eventASRemoveListenerImpl ( class UGFxObject* O, struct FString Member );
	void eventASSetListenerImpl ( class UGFxObject* O, struct FString Member, struct FScriptDelegate Listener );
	void ASRemoveAllEventListeners ( struct FName nmEvent );
	void ASRemoveEventListener ( struct FName nmEvent, class UObject* pScope, struct FName nmCallback );
	void ASAddEventListener ( struct FName nmEvent, class UObject* pScope, struct FName nmCallback );
	void EventListener ( struct FGFxEventData Data );
	void ProjectXYTo ( class UGFxObject* pTo, unsigned long bIsPosition, float* nX, float* nY );
	void ProjectXYFrom ( class UGFxObject* pFrom, unsigned long bIsPosition, float* nX, float* nY );
	void GlobalToParent ( unsigned long bIsPosition, float* nX, float* nY );
	void ParentToGlobal ( unsigned long bIsPosition, float* nX, float* nY );
	void ParentToLocal ( unsigned long bIsPosition, float* nX, float* nY );
	void LocalToParent ( unsigned long bIsPosition, float* nX, float* nY );
	void GlobalToLocal ( unsigned long bIsPosition, float* nX, float* nY );
	void LocalToGlobal ( unsigned long bIsPosition, float* nX, float* nY );
	struct FRect GetBoundsRelativeToStage ( );
	struct FRect GetHitAreaBounds ( class UTgGFxObject* pRelativeTo );
	struct FRect GetBounds ( class UTgGFxObject* pRelativeTo );
	void SetBounds ( struct FRect* rectBounds );
	void SetPositionY ( float nValue );
	void SetPositionX ( float nValue );
	float GetPositionY ( );
	float GetPositionX ( );
	class UGFxObject* CreateGFxArray ( class UClass* pClass );
	class UGFxObject* CreateGFxObject ( struct FString sClassPath, class UClass* pClass, TArray< struct FASValue > arrCtorArgs );
	void OnCreateGFxObject ( class UGFxObject* pObj, class UClass* pClass );
	void UnbindFunction ( struct FName nmFuncName );
	void BindFunction ( struct FName nmFuncName );
	void SetFunction ( struct FString sMember, class UObject* pContext, struct FName nmFuncName );
	void RemoveChild ( class UTgGFxObject* pChild );
	void SwapDepthsI ( int nTargetIndex );
	void SwapDepths ( class UGFxObject* pTarget );
	int GetDepth ( );
	int GetNextHighestDepth ( );
	class UGFxObject* DuplicateMovieClip ( struct FString sName, int nDepth, class UGFxObject* pInitValues, class UClass* pClass );
	bool ContainsChild ( class UTgGFxObject* pChild );
	class UTgGFxObject* GetGFxHitArea ( );
	class UTgGFxObject* GetGFxParent ( );
	struct FString GetGFxStagePath ( );
	struct FString GetGFxName ( );
	bool GetVisible ( );
	float GetAspectRatio ( );
	bool GetDisabled ( );
	void SetDisabled ( unsigned long bDisabled );
	float SetScaleY ( float nValue );
	float SetScaleX ( float nValue );
	float GetScaleY ( );
	float GetScaleX ( );
	void SetScale ( float nX, float nY );
	void GetScale ( float* out_nX, float* out_nY );
	float SetHeight ( float nValue );
	float SetWidth ( float nValue );
	float GetHeight ( );
	float GetWidth ( );
	void SetSize ( float nWidth, float nHeight );
	void GetSize ( float* out_nWidth, float* out_nHeight );
};

UClass* UTgGFxObject::pClassPointer = NULL;

// Class TgClientBase.TgGFxButtonPrompt
// 0x0018 (0x00D4 - 0x00BC)
class UTgGFxButtonPrompt : public UTgGFxObject
{
public:
	struct FName                                       m_nmXboxType;                                     		// 0x00BC (0x0008) [0x0000000000000000]              
	struct FString                                     m_sText;                                          		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4869 );

		return pClassPointer;
	};

	void SetVisible ( unsigned long bValue );
	void SetDefaultText ( struct FString sText );
	void SetPromptText ( struct FString sText );
	void SetDisplayButton ( struct FName nmXboxType );
	void SetPrompt ( struct FName nmXboxType, struct FString sText );
};

UClass* UTgGFxButtonPrompt::pClassPointer = NULL;

// Class TgClientBase.TgGFxEventObject
// 0x00AC (0x0168 - 0x00BC)
class UTgGFxEventObject : public UTgGFxObject
{
public:
	struct FPointer                                    VfTable_ITgEventAccessInterface;                  		// 0x00BC (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FArray_Mirror                               MctsCallbackListeners;                            		// 0x00C4 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               m_arrMctsEvents;                                  		// 0x00D4 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FGameEventListener >                GameEventListeners;                               		// 0x00E4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FGameEventListener >                m_arrInputIntercepts;                             		// 0x00F4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            m_arrGFxEvents;                                   		// 0x0104 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bOnlineCheck : 1;                               		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bInitialized : 1;                               		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0118 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxEventObject.m_mapUninit
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0160 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4870 );

		return pClassPointer;
	};

	void GetArrInputIntercepts ( struct FPointer* pArr );
	void GetArrGameEventListeners ( struct FPointer* pArr );
	void GetArrMctsListeners ( struct FPointer* pArr );
	void GetArrOldMctsListeners ( struct FPointer* pArr );
	bool IsInitialized ( );
	class UTgEventDispatcher* GetMovieDispatcher ( );
	void OnCreateGFxObject ( class UGFxObject* pObj, class UClass* pClass );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxEventObject::pClassPointer = NULL;

// Class TgClientBase.TgDataChunk
// 0x0035 (0x019D - 0x0168)
class UTgDataChunk : public UTgGFxEventObject
{
public:
	class UTgDataHandler*                              m_DataHandler;                                    		// 0x0168 (0x0008) [0x0000000000000000]              
	class UTgDataChunk*                                m_ParentChunk;                                    		// 0x0170 (0x0008) [0x0000000000000000]              
	TArray< struct FDataField >                        m_DataList;                                       		// 0x0178 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgDataChunk* >                      m_ChildChunks;                                    		// 0x0188 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bIsDirty : 1;                                   		// 0x0198 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsSubscribed : 1;                              		// 0x0198 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bClearOnMapChange : 1;                          		// 0x0198 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bForceImmediateUpdates : 1;                     		// 0x0198 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bQueuedToUpdate : 1;                            		// 0x0198 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned char                                      m_fUpdateDelay;                                   		// 0x019C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4871 );

		return pClassPointer;
	};

	class UTgMoviePlayer* GetOuterTgMoviePlayer ( );
	void usc_ResetAllFields ( );
	void usc_Unsubscribe ( );
	void usc_Subscribe ( );
	class ATgPlayerController* GetPlayerController ( );
	bool NeedsUpdate ( unsigned char fStep );
	bool IsSubscribed ( );
	void ForceNextUpdate ( );
	void SetDirty ( );
	bool GetFieldByHandle ( struct FTgDataFieldHandle* InHandle, struct FASValue* NewValue );
	bool GetField ( struct FPointer FieldName, struct FASValue* NewValue );
	bool SetFieldByHandle ( struct FTgDataFieldHandle* InHandle, struct FASValue* NewValue );
	bool SetField ( struct FPointer FieldName, unsigned long bCreateIfMissing, struct FASValue* NewValue );
	struct FTgDataFieldHandle AddField ( struct FPointer FieldName, struct FASValue* NewValue );
	void ResetAllFields ( );
	void ClearDelegates ( );
	void SetDelegates ( );
	void RemoveChildChunk ( class UTgDataChunk* Child, unsigned long bClearDelegates );
	void AddChildChunk ( class UTgDataChunk* Child );
	void PostDataUpdatedEvent ( );
	void DataUpdateEvent ( );
	void Update ( float DeltaTime, unsigned long bSkipCallback );
	void NotifyMapChange ( );
	void UpdateInternal ( float DeltaTime );
	void Uninitialize ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataChunk::pClassPointer = NULL;

// Class TgClientBase.TgGfxScene
// 0x011C (0x0284 - 0x0168)
class UTgGfxScene : public UTgGFxEventObject
{
public:
	struct FPointer                                    VfTable_ITgIntervalInterface;                     		// 0x0168 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     m_SceneName;                                      		// 0x0170 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_IconName;                                       		// 0x0180 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Focused;                                        		// 0x0190 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_DataName;                                       		// 0x01A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ActionName;                                     		// 0x01B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Disabled;                                       		// 0x01C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Selected;                                       		// 0x01D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Click;                                          		// 0x01E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_RollOver;                                       		// 0x01F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_RollOut;                                        		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Change;                                         		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_TextChange;                                     		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_Data;                                           		// 0x0230 (0x0008) [0x0000000000000000]              
	class UTgDataItem*                                 m_InitData;                                       		// 0x0238 (0x0008) [0x0000000000000000]              
	TArray< struct FButtonPromptData >                 m_buttonPrompts;                                  		// 0x0240 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bDisableBrowserInput : 1;                       		// 0x0250 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FString >                           m_bScreensToUnload;                               		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_bScreensToLoad;                                 		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_bScreensToPreload;                              		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4872 );

		return pClassPointer;
	};

	class ULocalPlayer* GetLP ( );
	void ClearLoadSceneData ( struct FString sSceneName );
	class UTgDataItem* GetLoadSceneData ( struct FString sSceneName );
	void eventSendGFxData ( class UGFxObject* Data );
	void ReceiveGFxData ( class UGFxObject* Data );
	class UTgIntervalManager* GetIntervalManager ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxScene::pClassPointer = NULL;

// Class TgClientBase.TgGfxAcquisitionPopup
// 0x0090 (0x0314 - 0x0284)
class UTgGfxAcquisitionPopup : public UTgGfxScene
{
public:
	struct FMap_Mirror                                 LoadoutItemsToEquip;                              		// 0x0284 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMap_Mirror                                 SkinsToEquip;                                     		// 0x02CC (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4873 );

		return pClassPointer;
	};

	void eventHideAcquisition ( );
	void eventDoShowAcquisition ( class UGFxObject* Data );
	void EquipAll ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void ClearAcquisitions ( class UTgEventDataItem* pEvent );
	void ShowAcquisition ( class UTgEventDataItem* pEvent );
	void HideAcquisitionInternal ( );
	void ShowAcquisitionInternal ( class UGFxObject* Data );
};

UClass* UTgGfxAcquisitionPopup::pClassPointer = NULL;

// Class TgClientBase.TgGfxAdventureProgressArena
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxAdventureProgressArena : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nSpecificCurrencyId;                            		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_chestVendor1;                                   		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_chestItem1;                                     		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_chestItemLTI1;                                  		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_chestVendor2;                                   		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_chestItem2;                                     		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_chestItemLTI2;                                  		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                m_chestVendor3;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                m_chestItem3;                                     		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                m_chestItemLTI3;                                  		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleLTI;                                		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4874 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressArena::pClassPointer = NULL;

// Class TgClientBase.TgGfxAdventureProgressCH09
// 0x0038 (0x02BC - 0x0284)
class UTgGfxAdventureProgressCH09 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nSpecificCurrencyId;                            		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_chestVendor1;                                   		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_chestItem1;                                     		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_chestItemLTI1;                                  		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_chestVendor2;                                   		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_chestItem2;                                     		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_chestItemLTI2;                                  		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                m_chestVendor3;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                m_chestItem3;                                     		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                m_chestItemLTI3;                                  		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleLTI;                                		// 0x02B4 (0x0004) [0x0000000000000000]              
	int                                                m_nPointPackId;                                   		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4875 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressCH09::pClassPointer = NULL;

// Class TgClientBase.TgGfxAdventureProgressCH10
// 0x0028 (0x02AC - 0x0284)
class UTgGfxAdventureProgressCH10 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nChestItemId;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nChestLTI;                                      		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleLTI;                                		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI1;                                      		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI2;                                      		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI3;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI4;                                      		// 0x02A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      b_chestPurchaseLock : 1;                          		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      b_requestedChestPurchase : 1;                     		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4876 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void SetupChestPurchaseFox ( );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressCH10::pClassPointer = NULL;

// Class TgClientBase.TgGfxAdventureProgressHel
// 0x0044 (0x02C8 - 0x0284)
class UTgGfxAdventureProgressHel : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nChestItemId;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleId;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	unsigned long                                      b_chestPurchaseLock : 1;                          		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      b_requestedChestPurchase : 1;                     		// 0x0294 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nBundleLTI;                                     		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nChestLTI;                                      		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_nPointLTI;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp1LTI;                                     		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp2LTI;                                     		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp3LTI;                                     		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                m_nStamp4LTI;                                     		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp5LTI;                                     		// 0x02B4 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp6LTI;                                     		// 0x02B8 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp7LTI;                                     		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                m_nStamp8LTI;                                     		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                m_nStamp9LTI;                                     		// 0x02C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4877 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void SetupChestPurchase ( );
};

UClass* UTgGfxAdventureProgressHel::pClassPointer = NULL;

// Class TgClientBase.TgGfxAdventuresVault
// 0x0008 (0x028C - 0x0284)
class UTgGfxAdventuresVault : public UTgGfxScene
{
public:
	int                                                m_nCurrentSceneIndex;                             		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentAdventureId;                            		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4878 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void PopulateVaultData ( );
	void SetVaultOwnership ( int vaultIdx );
	void ExitVault ( int previousVault );
	void EnterVault ( int EventIndex );
	void SendLobbyCamEvent ( int EventType, int camType );
	void ClickedVaultArea ( int EventType, int indexLoc );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventuresVault::pClassPointer = NULL;

// Class TgClientBase.TgGfxBattlePass
// 0x0048 (0x02CC - 0x0284)
class UTgGfxBattlePass : public UTgGfxScene
{
public:
	struct FPointer                                    VfTable_ITgEventSceneInterface;                   		// 0x0284 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     m_sCameraTag;                                     		// 0x028C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCameraPedestalTag;                             		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_GotoFaqPageBtn;                                 		// 0x02AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GotoFaqPagePrompt;                              		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GotoRulesPageBtn;                               		// 0x02BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GotoRulesPagePrompt;                            		// 0x02C4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4879 );

		return pClassPointer;
	};

	void GetBuyAllPurchaseModalArtLinkage ( struct FString* sOutArtLinkage );
	void GetRewardItemIds ( TArray< int >* outItemIds );
	void GetAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* sOutSubtext );
	void ReceiveEndTransition ( class UTgEventDataItem* pDataItem );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxBattlePass::pClassPointer = NULL;

// Class TgClientBase.TgGfxBattlePassToast
// 0x0000 (0x0284 - 0x0284)
class UTgGfxBattlePassToast : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4880 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxBattlePassToast::pClassPointer = NULL;

// Class TgClientBase.TgGFxBrowser
// 0x0014 (0x0298 - 0x0284)
class UTgGFxBrowser : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_browserFrame;                                   		// 0x0284 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_browserShape;                                   		// 0x028C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bBrowserOpen : 1;                               		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bBrowserLoading : 1;                            		// 0x0294 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAutoClose : 1;                                 		// 0x0294 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDrawBorder : 1;                                		// 0x0294 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4881 );

		return pClassPointer;
	};

	void ToggleVisibility ( unsigned long bShow, unsigned long bShowNav );
	void GetAbsoluteSize ( float* Width, float* Height );
	void GetAbsolutePosition ( float* X, float* Y );
	void OnPopupOpened ( class UTgEventDataItem* pEvent );
	void eventSetControls ( unsigned long prevDisabled, unsigned long nextDisabled );
	void eventToggleControls ( unsigned long showNav );
	void USC_OnNavigate ( int navId );
	void USC_OnResize ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxBrowser::pClassPointer = NULL;

// Class TgClientBase.TgGfxBundlesPurchase
// 0x0004 (0x0288 - 0x0284)
class UTgGfxBundlesPurchase : public UTgGfxScene
{
public:
	int                                                m_nCurrentAdventureItem;                          		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4882 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void PopulateBundleData ( );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxBundlesPurchase::pClassPointer = NULL;

// Class TgClientBase.TgGfxBuyAllModalBase
// 0x0010 (0x0294 - 0x0284)
class UTgGfxBuyAllModalBase : public UTgGfxScene
{
public:
	struct Fdword                                      m_dwLootId;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nActivityId;                                    		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nbonusChestItemId;                              		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nBonusChestLootId;                              		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4883 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxBuyAllModalBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxBuyAllModal
// 0x0000 (0x0294 - 0x0294)
class UTgGfxBuyAllModal : public UTgGfxBuyAllModalBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4884 );

		return pClassPointer;
	};

};

UClass* UTgGfxBuyAllModal::pClassPointer = NULL;

// Class TgClientBase.TgGfxChestCounterChoice
// 0x0000 (0x0284 - 0x0284)
class UTgGfxChestCounterChoice : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4885 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void OnPurchaseModalClose ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxChestCounterChoice::pClassPointer = NULL;

// Class TgClientBase.TgGfxClanAdminBase
// 0x002C (0x02B0 - 0x0284)
class UTgGfxClanAdminBase : public UTgGfxScene
{
public:
	TArray< int >                                      m_RegionList;                                     		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_JoinTypeList;                                   		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bNeedsUpdate : 1;                               		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FQWord                                      m_nUpdateTime;                                    		// 0x02A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4886 );

		return pClassPointer;
	};

	void DoPlayerInfoUpdate ( );
	void UpdateCallouts ( );
	void UpdateApplicationData ( unsigned long bCanRequestNames );
	void UpdatePlayerInvites ( unsigned long bCanRequestNames );
	void UpdateClanData ( );
	int GetJoinTypeIndexById ( int nRecruitmentType );
	int GetRegionIndexById ( int nSiteId );
	void InitRegionData ( );
	void InitClanApplicationTypes ( );
	void ReceivedPlayerNames ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventASUpdateApplicationData ( );
	void eventASUpdatePlayerInvites ( );
	void eventASUpdateClanData ( );
	void USC_UpdateMOTD ( struct FString sMessage );
	void USC_CheckApplicationUpdate ( int nListLength );
	void USC_CheckInviteUpdate ( int nListLength );
	void USC_UpdateClanInvites ( );
	void USC_UpdateClanApplications ( );
	void USC_BanClanApp ( struct FString sPlayerId );
	void USC_DeclineClanApp ( int nAppId );
	void USC_AcceptClanApp ( int nAppId );
	void USC_UpdateJoinTypeRegion ( int nJoinTypeId, int nRegionId );
	void USC_UpdateClanNameAndTag ( struct FString sName, struct FString sTag );
};

UClass* UTgGfxClanAdminBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxClanCreationBase
// 0x0000 (0x0284 - 0x0284)
class UTgGfxClanCreationBase : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4887 );

		return pClassPointer;
	};

	void eventReinit ( );
	void ASC_Reinit ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_GotoClanList ( );
	void USC_GetRegionListData ( );
	void USC_CancelClanRequest ( int nClanId );
	void USC_AcceptClanRequest ( int nClanId );
	void USC_GetInvitesData ( );
	void USC_CreateClan ( struct FString sClanName, struct FString sClanTag, int nRegionId, int nRecruitmentType );
};

UClass* UTgGfxClanCreationBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxClanManagementBase
// 0x0098 (0x031C - 0x0284)
class UTgGfxClanManagementBase : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsOfficer : 1;                                 		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	struct Fdword                                      m_nSelectedPlayerId;                              		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FString                                     m_lsClanQuit;                                     		// 0x028C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsClanQuitDesc;                                 		// 0x029C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUpdateClanTag;                                		// 0x02AC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUpdateClanTagLabel;                           		// 0x02BC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTransferClan;                                 		// 0x02CC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTransferClanLabel;                            		// 0x02DC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDisbandClan;                                  		// 0x02EC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDisbandClanLabel;                             		// 0x02FC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDisbandClanRemove;                            		// 0x030C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4888 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void OnInviteToClanSelect ( class UTgEventDataItem* pEvent );
	void OnInviteToClanQuery ( struct FPointer pEvent );
	void USC_ModifyLeader ( struct FString sPlayerId );
	void USC_ViewProfile ( struct FString sPlayerId );
	void USC_InviteToClanByName ( struct FString sName );
	void USC_UpdateClanTag ( );
	void USC_QuitClan ( );
	void USC_CancelPlayerInvite ( struct FString sPlayerId );
};

UClass* UTgGfxClanManagementBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxCommendationPage
// 0x0000 (0x0284 - 0x0284)
class UTgGfxCommendationPage : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4889 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxCommendationPage::pClassPointer = NULL;

// Class TgClientBase.TgGFxControllerDisconnect
// 0x0000 (0x0284 - 0x0284)
class UTgGFxControllerDisconnect : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4890 );

		return pClassPointer;
	};

	void eventUnload ( );
	void USC_CloseDialog ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxControllerDisconnect::pClassPointer = NULL;

// Class TgClientBase.TgGFxDailyDealPopup
// 0x0000 (0x0284 - 0x0284)
class UTgGFxDailyDealPopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4891 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxDailyDealPopup::pClassPointer = NULL;

// Class TgClientBase.TgGfxDailyReward
// 0x0000 (0x0284 - 0x0284)
class UTgGfxDailyReward : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4892 );

		return pClassPointer;
	};

	void UpdateDataToAS ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateDailyData ( );
};

UClass* UTgGfxDailyReward::pClassPointer = NULL;

// Class TgClientBase.TgGfxDebugActivity
// 0x0000 (0x0284 - 0x0284)
class UTgGfxDebugActivity : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4893 );

		return pClassPointer;
	};

	void USC_SearchActivity ( int searchId, unsigned long isActivity );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxDebugActivity::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventBundleList
// 0x0010 (0x0294 - 0x0284)
class UTgGfxEventBundleList : public UTgGfxScene
{
public:
	TArray< struct Fdword >                            bundleItems;                                      		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4894 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_UpdateBundles ( class UGFxObject* Data );
};

UClass* UTgGfxEventBundleList::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventDialog
// 0x0000 (0x0284 - 0x0284)
class UTgGfxEventDialog : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4895 );

		return pClassPointer;
	};

	void usc_PlaySound ( int msgId );
	void LoadJSON ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventDialog::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventSceneBase
// 0x019C (0x0420 - 0x0284)
class UTgGfxEventSceneBase : public UTgGfxScene
{
public:
	struct FPointer                                    VfTable_ITgEventSceneInterface;                   		// 0x0284 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UTgGFxObject*                                m_ItemPanel;                                      		// 0x028C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemList;                                       		// 0x0294 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RewardList;                                     		// 0x029C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestPanel;                                     		// 0x02A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestList;                                      		// 0x02AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_InSceneItem;                                    		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchasePanel;                                  		// 0x02BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseBtnPC;                                  		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseBtnConsole;                             		// 0x02CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EquipBtn;                                       		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EquipBtnPC;                                     		// 0x02DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EquipBtnConsole;                                		// 0x02E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_InfoPanel;                                      		// 0x02EC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestInfoPanel;                                 		// 0x02F4 (0x0008) [0x0000000000000000]              
	int                                                m_nActivityProgressTracking;                      		// 0x02FC (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLoreSection;                                   		// 0x0300 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_nEventNumber;                                   		// 0x0310 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCameraTag;                                     		// 0x0320 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCameraPedestalTag;                             		// 0x0330 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMusicTrack;                                    		// 0x0340 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sComingSoonText;                                		// 0x0350 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOwnedText;                                     		// 0x0360 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sUnlockText;                                    		// 0x0370 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nEventIndex;                                    		// 0x0380 (0x0004) [0x0000000000000000]              
	int                                                m_nUseActivityProgression;                        		// 0x0384 (0x0004) [0x0000000000000000]              
	int                                                m_nQuestActivityId;                               		// 0x0388 (0x0004) [0x0000000000000000]              
	int                                                m_nMidpatchEventId;                               		// 0x038C (0x0004) [0x0000000000000000]              
	int                                                m_nEventTimeframeId;                              		// 0x0390 (0x0004) [0x0000000000000000]              
	int                                                m_nCachedMusicThemePreview;                       		// 0x0394 (0x0004) [0x0000000000000000]              
	int                                                m_nStartingItemIndexOverride;                     		// 0x0398 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nSelectedLootId;                                		// 0x039C (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nSelectedItemType;                              		// 0x03A0 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nUnlockPurchasedCount;                          		// 0x03A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRewardBundlesDisplayAsSkins : 1;               		// 0x03A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bBlockEquipBtnFromShowing : 1;                  		// 0x03A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDiscardInactiveItems : 1;                      		// 0x03A8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct Fdword                                      m_nBuyAllVendor;                                  		// 0x03AC (0x0004) [0x0000000000000000]              
	struct FBuyAllLinkage                              m_buyAllLinkage;                                  		// 0x03B0 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBuyAllPurchaseModalArtLinkage;                 		// 0x0400 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_buyAllItemList;                                 		// 0x0410 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4896 );

		return pClassPointer;
	};

	void GetBuyAllPurchaseModalArtLinkage ( struct FString* sOutArtLinkage );
	void GetRewardItemIds ( TArray< int >* outItemIds );
	void GetEventAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void GetAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void OnSceneOpened ( class UTgEventDataItem* pEvent );
	void OnRedirect ( class UTgEventDataItem* pEvent );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventSceneBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxCommunityEventBase
// 0x002C (0x044C - 0x0420)
class UTgGfxCommunityEventBase : public UTgGfxEventSceneBase
{
public:
	int                                                m_nEventItemActId;                                		// 0x0420 (0x0004) [0x0000000000000000]              
	int                                                m_nEventPersonalQuestsActId;                      		// 0x0424 (0x0004) [0x0000000000000000]              
	int                                                m_nEventProgressActId;                            		// 0x0428 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDaysRemaining;                                 		// 0x042C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_EventPage;                                      		// 0x043C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RulesPage;                                      		// 0x0444 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4897 );

		return pClassPointer;
	};

	void eventUpdateRewardItems ( );
	void eventUpdateEventBars ( );
	void USC_ClaimNextReward ( int itemGoalId );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxCommunityEventBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxDivineUprisingEventBase
// 0x00B4 (0x04D4 - 0x0420)
class UTgGfxDivineUprisingEventBase : public UTgGfxEventSceneBase
{
public:
	int                                                m_buyAllLootId;                                   		// 0x0420 (0x0004) [0x0000000000000000]              
	int                                                m_nFinalRewardItemId;                             		// 0x0424 (0x0004) [0x0000000000000000]              
	int                                                m_nFinalRewardGoalId;                             		// 0x0428 (0x0004) [0x0000000000000000]              
	int                                                m_nEventDurationTimeframeId;                      		// 0x042C (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_arrChapterChestIds;                             		// 0x0430 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_LeftPanel;                                      		// 0x0440 (0x0008) [0x0000000000000000]              
	int                                                m_nChapterOneChestId;                             		// 0x0448 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterTwoChestId;                             		// 0x044C (0x0004) [0x0000000000000000]              
	int                                                m_nChapterThreeChestId;                           		// 0x0450 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterFourChestId;                            		// 0x0454 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterOneCollectionId;                        		// 0x0458 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterTwoCollectionId;                        		// 0x045C (0x0004) [0x0000000000000000]              
	int                                                m_nChapterThreeCollectionId;                      		// 0x0460 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterFourCollectionId;                       		// 0x0464 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterOneRewardId;                            		// 0x0468 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterTwoRewardId;                            		// 0x046C (0x0004) [0x0000000000000000]              
	int                                                m_nChapterThreeRewardId;                          		// 0x0470 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterFourRewardId;                           		// 0x0474 (0x0004) [0x0000000000000000]              
	int                                                m_nBuyAllBundleItemOneId;                         		// 0x0478 (0x0004) [0x0000000000000000]              
	int                                                m_nBuyAllBundleItemTwoId;                         		// 0x047C (0x0004) [0x0000000000000000]              
	int                                                m_nChapterOneActivityId;                          		// 0x0480 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterTwoActivityId;                          		// 0x0484 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterThreeActivityId;                        		// 0x0488 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterFourActivityId;                         		// 0x048C (0x0004) [0x0000000000000000]              
	int                                                m_nCompletionRewardActivityId;                    		// 0x0490 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterOneTimeframeId;                         		// 0x0494 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterTwoTimeframeId;                         		// 0x0498 (0x0004) [0x0000000000000000]              
	int                                                m_nChapterThreeTimeframeId;                       		// 0x049C (0x0004) [0x0000000000000000]              
	int                                                m_nChapterFourTimeframeId;                        		// 0x04A0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      arrChestIds;                                      		// 0x04A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      arrChapterTimeframeIds;                           		// 0x04B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_ActiveChapterQuestList;                         		// 0x04C4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4898 );

		return pClassPointer;
	};

	void eventUpdateTabs ( int unseenQuests, int gotoTab );
	void GetRewardItemIds ( TArray< int >* outItemIds );
	void USC_UpdateSeenLore ( int chapterNum );
	void USC_UpdateQuestNotification ( );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void GetActiveChapters ( );
	void PopulateQuestData ( );
	void PopulateRewardSkinProgress ( );
	void PopulateRewardSkinData ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxDivineUprisingEventBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventBundleCollection
// 0x0000 (0x0420 - 0x0420)
class UTgGfxEventBundleCollection : public UTgGfxEventSceneBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4899 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventBundleCollection::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEventRedBull
// 0x0004 (0x0424 - 0x0420)
class UTgGfxSeasonalEventRedBull : public UTgGfxEventBundleCollection
{
public:
	int                                                m_flawesBundleId;                                 		// 0x0420 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4900 );

		return pClassPointer;
	};

};

UClass* UTgGfxSeasonalEventRedBull::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventTreasureRoll
// 0x0024 (0x0444 - 0x0420)
class UTgGfxEventTreasureRoll : public UTgGfxEventSceneBase
{
public:
	TArray< int >                                      m_nRewardActivityIds;                             		// 0x0420 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_sCameraTags;                                    		// 0x0430 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCurrentIndex;                                  		// 0x0440 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4901 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventTreasureRoll::pClassPointer = NULL;

// Class TgClientBase.TgGfxGiftingEventBase
// 0x0050 (0x0470 - 0x0420)
class UTgGfxGiftingEventBase : public UTgGfxEventSceneBase
{
public:
	TArray< int >                                      m_skinLootIds;                                    		// 0x0420 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_giftBundleLootIds;                              		// 0x0430 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_buyAllLootId;                                   		// 0x0440 (0x0004) [0x0000000000000000]              
	int                                                m_nFinalRewardItemId;                             		// 0x0444 (0x0004) [0x0000000000000000]              
	int                                                m_nRewardActivityId;                              		// 0x0448 (0x0004) [0x0000000000000000]              
	int                                                m_nRewardActivityGoalId;                          		// 0x044C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinsPage;                                      		// 0x0450 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RewardsPage;                                    		// 0x0458 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LorePage;                                       		// 0x0460 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RulesPage;                                      		// 0x0468 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4902 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxGiftingEventBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEvent2
// 0x0000 (0x0470 - 0x0470)
class UTgGfxSeasonalEvent2 : public UTgGfxGiftingEventBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4903 );

		return pClassPointer;
	};

};

UClass* UTgGfxSeasonalEvent2::pClassPointer = NULL;

// Class TgClientBase.TgGfxMorganEvent
// 0x0054 (0x0474 - 0x0420)
class UTgGfxMorganEvent : public UTgGfxEventSceneBase
{
public:
	int                                                paidActivityID;                                   		// 0x0420 (0x0004) [0x0000000000000000]              
	int                                                freeActivityID;                                   		// 0x0424 (0x0004) [0x0000000000000000]              
	int                                                completionTrackingActivityID;                     		// 0x0428 (0x0004) [0x0000000000000000]              
	TArray< int >                                      paidQuests;                                       		// 0x042C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      freeQuests;                                       		// 0x043C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                finalQuest;                                       		// 0x044C (0x0004) [0x0000000000000000]              
	TArray< int >                                      SkinS;                                            		// 0x0450 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      bundleIDs;                                        		// 0x0460 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_buyAllLootId;                                   		// 0x0470 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4904 );

		return pClassPointer;
	};

	void GetRewardItemIds ( TArray< int >* outItemIds );
	void GetEventAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void usc_UpdateData ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxMorganEvent::pClassPointer = NULL;

// Class TgClientBase.TgGfxNewMoonEvent
// 0x0080 (0x04A0 - 0x0420)
class UTgGfxNewMoonEvent : public UTgGfxEventSceneBase
{
public:
	int                                                m_buyAllLootId;                                   		// 0x0420 (0x0004) [0x0000000000000000]              
	int                                                m_nFinalRewardItemId;                             		// 0x0424 (0x0004) [0x0000000000000000]              
	int                                                m_nFinalRewardGoalId;                             		// 0x0428 (0x0004) [0x0000000000000000]              
	int                                                m_nModelLoadedCount;                              		// 0x042C (0x0004) [0x0000000000000000]              
	int                                                buyAllVendorId;                                   		// 0x0430 (0x0004) [0x0000000000000000]              
	int                                                collectionReceiptId;                              		// 0x0434 (0x0004) [0x0000000000000000]              
	TArray< int >                                      arrRewardSkinIds;                                 		// 0x0438 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      arrBundleIds;                                     		// 0x0448 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      arrReceiptIds;                                    		// 0x0458 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                timeframeSecondHalf;                              		// 0x0468 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sCameraTag2;                                    		// 0x046C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nEventDurationTimeframeId;                      		// 0x047C (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_arrChapterChestIds;                             		// 0x0480 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_ActiveChapterQuestList;                         		// 0x0490 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4905 );

		return pClassPointer;
	};

	void GetRewardItemIds ( TArray< int >* outItemIds );
	void GetEventAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void eventUpdateTabs ( int unseenQuests, int gotoTab );
	void USC_UpdateQuestNotification ( );
	void onFinishModelLoad ( class UTgEventDataItem* pEvent );
	void GetActiveChapters ( );
	void PopulateQuestData ( );
	void PopulateRewardSkinProgress ( );
	void PopulateRewardSkinData ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxNewMoonEvent::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEvent
// 0x0000 (0x04A0 - 0x04A0)
class UTgGfxSeasonalEvent : public UTgGfxNewMoonEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4906 );

		return pClassPointer;
	};

};

UClass* UTgGfxSeasonalEvent::pClassPointer = NULL;

// Class TgClientBase.TgGfxOdysseyEventBase
// 0x012C (0x054C - 0x0420)
class UTgGfxOdysseyEventBase : public UTgGfxEventSceneBase
{
public:
	int                                                m_selectedTabIndex;                               		// 0x0420 (0x0004) [0x0000000000000000]              
	int                                                m_finalRewardItemId;                              		// 0x0424 (0x0004) [0x0000000000000000]              
	int                                                m_finalRewardGoalId;                              		// 0x0428 (0x0004) [0x0000000000000000]              
	int                                                m_buyAllLootId;                                   		// 0x042C (0x0004) [0x0000000000000000]              
	int                                                m_buyAllLTI;                                      		// 0x0430 (0x0004) [0x0000000000000000]              
	int                                                m_voyageVendorId;                                 		// 0x0434 (0x0004) [0x0000000000000000]              
	int                                                m_territoryVendorId;                              		// 0x0438 (0x0004) [0x0000000000000000]              
	int                                                m_odysseyPointsActivityId;                        		// 0x043C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestPage;                                      		// 0x0440 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_rulesFaqPage;                                   		// 0x0448 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RewardsPage;                                    		// 0x0450 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LorePage;                                       		// 0x0458 (0x0008) [0x0000000000000000]              
	int                                                m_nMapFragmentActivityId;                         		// 0x0460 (0x0004) [0x0000000000000000]              
	int                                                m_nStarterTerritoryActivityId;                    		// 0x0464 (0x0004) [0x0000000000000000]              
	int                                                m_nTerritoryOneActivityId;                        		// 0x0468 (0x0004) [0x0000000000000000]              
	int                                                m_nTerritoryTwoActivityId;                        		// 0x046C (0x0004) [0x0000000000000000]              
	int                                                m_nTerritoryThreeActivityId;                      		// 0x0470 (0x0004) [0x0000000000000000]              
	int                                                m_nTerritoryFourActivityId;                       		// 0x0474 (0x0004) [0x0000000000000000]              
	int                                                m_nTerritoryFiveActivityId;                       		// 0x0478 (0x0004) [0x0000000000000000]              
	int                                                m_nTerritorySixActivityId;                        		// 0x047C (0x0004) [0x0000000000000000]              
	int                                                m_nTerritorySevenActivityId;                      		// 0x0480 (0x0004) [0x0000000000000000]              
	int                                                m_nTerritoryEightActivityId;                      		// 0x0484 (0x0004) [0x0000000000000000]              
	int                                                m_nDialogTrackingActivityId;                      		// 0x0488 (0x0004) [0x0000000000000000]              
	int                                                m_nStartingQuestBundleActivityId;                 		// 0x048C (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseOneTimeframeId;                         		// 0x0490 (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseTwoTimeframeId;                         		// 0x0494 (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseThreeTimeframeId;                       		// 0x0498 (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseFourTimeframeId;                        		// 0x049C (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseFiveTimeframeId;                        		// 0x04A0 (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseSixTimeframeId;                         		// 0x04A4 (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseSevenTimeframeId;                       		// 0x04A8 (0x0004) [0x0000000000000000]              
	int                                                m_nReleaseEightTimeframeId;                       		// 0x04AC (0x0004) [0x0000000000000000]              
	int                                                m_nMorePointsVendorId;                            		// 0x04B0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_dialogGoalIds;                                  		// 0x04B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_TerritoryUnlockedStatus;                        		// 0x04C4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_voyageActivityIds;                              		// 0x04D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_territoryVoyageCount;                           		// 0x04E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_territoryLootIds;                               		// 0x04F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_voyageLootIds;                                  		// 0x0504 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_rewardGoalIds;                                  		// 0x0514 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_rewardSkinIds;                                  		// 0x0524 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_bundleIds;                                      		// 0x0534 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       m_acquisitionDelayTimer;                          		// 0x0544 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4907 );

		return pClassPointer;
	};

	void GetRewardItemIds ( TArray< int >* outItemIds );
	void USC_SetDialogAsWatched ( int dialogIndex );
	void USC_UpdateMorePointsPanel ( );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxOdysseyEventBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEventOdyssey
// 0x0000 (0x054C - 0x054C)
class UTgGfxSeasonalEventOdyssey : public UTgGfxOdysseyEventBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4908 );

		return pClassPointer;
	};

};

UClass* UTgGfxSeasonalEventOdyssey::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEvent3
// 0x0000 (0x0420 - 0x0420)
class UTgGfxSeasonalEvent3 : public UTgGfxEventSceneBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4909 );

		return pClassPointer;
	};

};

UClass* UTgGfxSeasonalEvent3::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEventCalendar
// 0x0028 (0x0448 - 0x0420)
class UTgGfxSeasonalEventCalendar : public UTgGfxEventSceneBase
{
public:
	int                                                m_questsActivityId;                               		// 0x0420 (0x0004) [0x0000000000000000]              
	int                                                m_rewardActivityId;                               		// 0x0424 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_dayRewards;                                     		// 0x0428 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_titleRewards;                                   		// 0x0438 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4910 );

		return pClassPointer;
	};

	void GetEventAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxSeasonalEventCalendar::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventSceneBase2
// 0x0008 (0x028C - 0x0284)
class UTgGfxEventSceneBase2 : public UTgGfxScene
{
public:
	struct FPointer                                    VfTable_ITgEventSceneInterface;                   		// 0x0284 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4911 );

		return pClassPointer;
	};

	void GetBuyAllPurchaseModalArtLinkage ( struct FString* sOutArtLinkage );
	void GetRewardItemIds ( TArray< int >* outItemIds );
	void GetEventAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void GetAcquisitionSubtext ( struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext );
	void OnSceneOpened ( class UTgEventDataItem* pEvent );
	void OnRedirect ( class UTgEventDataItem* pEvent );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventSceneBase2::pClassPointer = NULL;

// Class TgClientBase.TgGfxReapingEvent
// 0x0058 (0x02E4 - 0x028C)
class UTgGfxReapingEvent : public UTgGfxEventSceneBase2
{
public:
	int                                                pumpkin_activity;                                 		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                pumpkin_skins_goal;                               		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                pumpkin_chest_goal;                               		// 0x0294 (0x0004) [0x0000000000000000]              
	TArray< int >                                      direct_purchase_skins;                            		// 0x0298 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      special_chest_contents;                           		// 0x02A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      reward_skins;                                     		// 0x02B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                title_goal;                                       		// 0x02C8 (0x0004) [0x0000000000000000]              
	int                                                skin_goal;                                        		// 0x02CC (0x0004) [0x0000000000000000]              
	TArray< int >                                      quests;                                           		// 0x02D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                chest_id;                                         		// 0x02E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4912 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxReapingEvent::pClassPointer = NULL;

// Class TgClientBase.TgGfxEventTreasureRollList
// 0x0010 (0x0294 - 0x0284)
class UTgGfxEventTreasureRollList : public UTgGfxScene
{
public:
	TArray< struct Fdword >                            treasureRollBaseItems;                            		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4913 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_UpdateTreasureRollContent ( class UGFxObject* Data );
};

UClass* UTgGfxEventTreasureRollList::pClassPointer = NULL;

// Class TgClientBase.TgGfxFriendSelector
// 0x0028 (0x02AC - 0x0284)
class UTgGfxFriendSelector : public UTgGfxScene
{
public:
	class UTgGFxPlayerProvider*                        m_pFriendData;                                    		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGFxFriendSearchProvider*                  m_pSearch;                                        		// 0x028C (0x0008) [0x0000000000000000]              
	class UTgGFxDataProvider*                          m_pSearchProvider;                                		// 0x0294 (0x0008) [0x0000000000000000]              
	class UTgGFxDataGroup*                             m_pLocalResults;                                  		// 0x029C (0x0008) [0x0000000000000000]              
	class UTgGFxDataGroup*                             m_pOnlineResults;                                 		// 0x02A4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4914 );

		return pClassPointer;
	};

	void OnSearchEmpty ( class UTgEventDataItem* pEvent );
	void OnServerSearchResults ( class UTgEventDataItem* pEvent );
	void OnLocalSearchResults ( class UTgEventDataItem* pEvent );
	void OnStartSearch ( class UTgEventDataItem* pEvent );
	bool USC_SearchFriends ( struct FString PlayerName );
	void USC_SelectFriend ( class UTgGFxPlayerData* pPlayer );
	void OnReceiveSearchQuery ( struct FPointer pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxFriendSelector::pClassPointer = NULL;

// Class TgClientBase.TgGFxFullscreenBackground
// 0x0000 (0x0284 - 0x0284)
class UTgGFxFullscreenBackground : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4915 );

		return pClassPointer;
	};

	void eventSetBackgroundImageAS ( struct FString sImage );
	void SetBackgroundImageInternal ( struct FString sImage );
	void ClearBackgroundImage ( class UTgEventDataItem* pEvent );
	void SetBackgroundImage ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxFullscreenBackground::pClassPointer = NULL;

// Class TgClientBase.TgGfxGammaControls
// 0x0010 (0x0294 - 0x0284)
class UTgGfxGammaControls : public UTgGfxScene
{
public:
	class UMaterialInstanceConstant*                   m_GammaLogoMIC;                                   		// 0x0284 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_GammaBGMIC;                                     		// 0x028C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4916 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void DrawGammaLogo ( class UCanvas* Canvas );
};

UClass* UTgGfxGammaControls::pClassPointer = NULL;

// Class TgClientBase.TgGfxGiftingBase
// 0x009C (0x0320 - 0x0284)
class UTgGfxGiftingBase : public UTgGfxScene
{
public:
	TArray< int >                                      m_arrVVCodeList;                                  		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_arrVVStringList;                                		// 0x0294 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgGFxPlayerData* >                  m_arrFriendData;                                  		// 0x02A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgPlayerId                                 m_pidRequesting;                                  		// 0x02B4 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_GiftLeftTriggerPrompt;                          		// 0x02D8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftRightTriggerPrompt;                         		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftRightStickPrompt;                           		// 0x02E8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftLeftStickPrompt;                            		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftLeftButtonPromptContainer;                  		// 0x02F8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftSendButtonPrompt;                           		// 0x0300 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftSelectorButtonsGamepad;                     		// 0x0308 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftSelectorButtonsKeyboard;                    		// 0x0310 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SendGiftButtonKeyboard;                         		// 0x0318 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4917 );

		return pClassPointer;
	};

	void eventSetReceiverData ( struct FString sPlayerName, struct FString sPlayerId );
	void eventSetMessageData ( struct FString sMessage, int nMessageId );
	void eventForceSingleReceiverPopup ( struct FString sName, struct FString nPlayerId );
	void USC_PurchaseGift ( int giftItemId, struct FString sPlayerId, int nMsgIndex, unsigned long bAnon );
	void GetSingleReceiverProfile ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void SetSingleReceiver ( class UTgEventDataItem* pEvent );
	void OnReceiveFriends ( class UTgGFxFriendData* pFriends );
	void PopulateMessageSelector ( class UTgEventDataItem* pEvent );
	void MessageSelected ( class UTgEventDataItem* pEvent );
	void FriendSelected ( class UTgEventDataItem* pEvent );
	void ForceSingleReceiver ( struct FString overrideName, struct FTgPlayerId* pid );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxGiftingBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxGiftNotification
// 0x0000 (0x0284 - 0x0284)
class UTgGfxGiftNotification : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4918 );

		return pClassPointer;
	};

	void OnReceiveNotification ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventGiftNotification ( struct FString sMessage, int nFrameId );
	void ASC_GiftNotification ( struct FString sMessage, int nFrameId );
};

UClass* UTgGfxGiftNotification::pClassPointer = NULL;

// Class TgClientBase.TgGfxGiftSentPopup
// 0x0038 (0x02BC - 0x0284)
class UTgGfxGiftSentPopup : public UTgGfxScene
{
public:
	struct FTgPlayerId                                 m_pidPendingName;                                 		// 0x0284 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct Fdword                                      m_nGiftItem;                                      		// 0x02A8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ContinueBtnKeyboard;                            		// 0x02AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ContinueBtnGamepad;                             		// 0x02B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4919 );

		return pClassPointer;
	};

	void OnReceivePlayerName ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void IncrementActivities ( );
	void SetGiftPopupData ( struct Fdword nItemId, struct FTgPlayerId* pid );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventGiftSentPopup ( class UGFxObject* Data );
	void ASC_GiftSentPopup ( class UGFxObject* Data );
};

UClass* UTgGfxGiftSentPopup::pClassPointer = NULL;

// Class TgClientBase.TgGfxGodTargeter
// 0x0024 (0x02A8 - 0x0284)
class UTgGfxGodTargeter : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_descTF;                                         		// 0x0284 (0x0008) [0x0000000000000000]              
	int                                                m_nSelectedPreset;                                		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nPreviousIndex;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nQuickClosePawnId;                              		// 0x0294 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bShouldQuickClose : 1;                          		// 0x0298 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nPrevThumbX;                                    		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_nPrevThumbY;                                    		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedButtonIndex;                           		// 0x02A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4920 );

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void eventAttemptGodSelect ( );
	void ASC_AttemptGodSelect ( );
	void eventUpdateThumbstickPos ( );
	void ASC_UpdateThumbstickPos ( );
};

UClass* UTgGfxGodTargeter::pClassPointer = NULL;

// Class TgClientBase.TgGfxHelloWorld
// 0x0000 (0x0284 - 0x0284)
class UTgGfxHelloWorld : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4921 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxHelloWorld::pClassPointer = NULL;

// Class TgClientBase.TgGFxHUD
// 0x0004 (0x0288 - 0x0284)
class UTgGFxHUD : public UTgGfxScene
{
public:
	unsigned long                                      m_bGameTypeSet : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4922 );

		return pClassPointer;
	};

	void eventPlayTakeHit ( int nDamage, float nDamageAngle );
	void eventSetPlayerSpeaking ( struct FString sPlayerNetId, unsigned long bIsSpeaking );
	void eventToggleScoreboard ( unsigned long bShow, unsigned long bFocused, int View );
	void eventChangeHudSection ( struct FString Section, float percentX, float percentY, float Scale, float dockX, float dockY, struct FString dockObj, float dockObjX, float dockObjY, unsigned long outX, unsigned long outY );
	void eventToggleHudSection ( struct FString sSectionName );
	void eventUnloadHudSection ( struct FString sSectionName );
	void eventToggleMatineeSkip ( unsigned long bShow );
	void eventShowTutorialHighlighter ( int nTutorialEvent );
	void eventShowEventAccolade ( int nIconId );
	void eventShowConsoleStorePrompt ( unsigned long bShow );
	void eventSetHudVisible ( unsigned long bVisible );
	void eventShowEndOfMatch ( unsigned long show );
	void eventGameTypeSet ( int GameType, unsigned long isConsole );
	void eventTogglePassiveMeter ( );
	void eventSetEndOfMatchVisibility ( );
	void OnTutorialMessage ( class UTgEventDataItem* pEvent );
	void OnShowEndOfMatch ( class UTgEventDataItem* pEvent );
	void OnGameTypeSet ( class UTgEventDataItem* pEvent );
	void OnGameHUDEvent ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxHUD::pClassPointer = NULL;

// Class TgClientBase.TgGfxLoadoutsBase
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxLoadoutsBase : public UTgGfxScene
{
public:
	TArray< struct FGfxEquippedLoadoutItem >           m_EquippedLoadoutItem;                            		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCategoryScrollIndex;                           		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nCategoryNumPerLine;                            		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nCategoryMaxScroll;                             		// 0x029C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_CategoryScrollArrowUp;                          		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_CategoryScrollArrowDown;                        		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EquippedItemTabs;                               		// 0x02B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4923 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLoadoutsBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxLoginBlocker
// 0x00A0 (0x0324 - 0x0284)
class UTgGfxLoginBlocker : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_Image;                                          		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Title;                                          		// 0x028C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Desc;                                           		// 0x0294 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Button;                                         		// 0x029C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Prompt;                                         		// 0x02A4 (0x0008) [0x0000000000000000]              
	struct FLoginBlockerData                           blockerData;                                      		// 0x02AC (0x0068) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_PendingAlreadySeenList;                         		// 0x0314 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4924 );

		return pClassPointer;
	};

	void LandingPanelImagesLoaded ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLoginBlocker::pClassPointer = NULL;

// Class TgClientBase.TgGfxMassInviteBase
// 0x0224 (0x04A8 - 0x0284)
class UTgGfxMassInviteBase : public UTgGfxScene
{
public:
	struct FString                                     m_lsInviteList;                                   		// 0x0284 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSeachByName;                                  		// 0x0294 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsInvitePlayers;                                		// 0x02A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsFilterByName;                                 		// 0x02B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      m_bBuddiesAvailable : 1;                          		// 0x02C4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgGFxObject*                                m_SearchFriendsTF;                                		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterFriendsTF;                                		// 0x02D0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_InvitePlayerTF;                                 		// 0x02D8 (0x0008) [0x0000000000000000]              
	struct FInviteRow                                  m_InviteRow[ 0x5 ];                               		// 0x02E0 (0x00A0) [0x0000000000000000]              
	struct FFriendRow                                  m_FriendRow[ 0x6 ];                               		// 0x0380 (0x00F0) [0x0000000000000000]              
	TArray< struct FOpenInvite >                       m_InvitedPlayers;                                 		// 0x0470 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nInviteScrollPosition;                          		// 0x0480 (0x0004) [0x0000000000000000]              
	int                                                m_nBuddyScrollPosition;                           		// 0x0484 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x0488 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTgGFxPlayerData* >                  m_BuddyList;                                      		// 0x0498 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4925 );

		return pClassPointer;
	};

	void OnReceiveFriends ( class UTgGFxFriendData* pFriends );
	void OnPrivilegeCheck ( unsigned char ePriv, unsigned char eLevel );
	void OnFriendSelector ( class UTgEventDataItem* pBaseEvent );
	void OnPlayerQuery ( struct FPointer pBaseEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxMassInviteBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchInvitation
// 0x00D4 (0x0358 - 0x0284)
class UTgGFxMatchInvitation : public UTgGfxScene
{
public:
	TArray< struct FTgPendingCustomInvite >            m_arrPendingCustom;                               		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerInterface*                      m_pOnlinePlayerInterface;                         		// 0x0294 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x029C (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UTgGFxObject*                                m_HeaderTF;                                       		// 0x02A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GameTypeTF;                                     		// 0x02AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_MatchSizeTF;                                    		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PickTypeTF;                                     		// 0x02BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QueueImage;                                     		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QueueBorder;                                    		// 0x02CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QueueDarkener;                                  		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PenaltyTF;                                      		// 0x02DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TimerTF;                                        		// 0x02E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_MatchAcceptedTF;                                		// 0x02EC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_AcceptBtn;                                      		// 0x02F4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_DeclineBtn;                                     		// 0x02FC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PlayerAcceptCount;                              		// 0x0304 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ButtonPrompt;                                   		// 0x030C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PromptMessageTF;                                		// 0x0314 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      NotificationWaveform;                             		// 0x031C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIsShowing : 1;                                 		// 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsCustom : 1;                                  		// 0x0324 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nQueueStateChanged;                             		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              m_fQueueStateTimer;                               		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              m_fMatchAcceptTimer;                              		// 0x0330 (0x0004) [0x0000000000000000]              
	float                                              m_nPlayerAcceptCount;                             		// 0x0334 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMatchReadyString;                              		// 0x0338 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPenaltyString;                                 		// 0x0348 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4926 );

		return pClassPointer;
	};

	bool eventCheckOnlinePermissions ( struct FUniqueNetId nId );
	bool eventUCUninitialize ( );
	bool eventUCInitialize ( );
	class UOnlinePlayerInterface* GetPlayerInterface ( );
	void OnInputChanged ( class UTgEventDataItem* pEvent );
	void OnLobbyStateChange ( class UTgEventDataItem* pEvent );
	void OnQueueStateChange ( class UTgEventDataItem* pEvent );
	void OnReceivePlayerInfo ( struct FPointer pEventBase );
	void OnReceivePlatformPermissions ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Tick ( float DeltaTime );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchInvitation::pClassPointer = NULL;

// Class TgClientBase.TgGfxMessageSelector
// 0x0008 (0x028C - 0x0284)
class UTgGfxMessageSelector : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_MessageSelectorButtonPrompt;                    		// 0x0284 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4927 );

		return pClassPointer;
	};

	void USC_SelectMessage ( struct FString Message, int MessageId );
	void PopulateMessages ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxMessageSelector::pClassPointer = NULL;

// Class TgClientBase.TgGfxNotificationCenter
// 0x0004 (0x0288 - 0x0284)
class UTgGfxNotificationCenter : public UTgGfxScene
{
public:
	int                                                m_SelectedTab;                                    		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4928 );

		return pClassPointer;
	};

	class UGFxObject* USC_GetTabs ( );
	void USC_ClearAllNotifications ( int tabIndex );
	void USC_RespondToClanInvite ( unsigned long bAccept, struct FString clanId );
	void USC_RespondToPartyInvite ( unsigned long bAccept );
	void USC_RespondToFriendInvite ( unsigned long bAccept, struct FString PlayerID );
	void USC_EquipItem ( int nItemId );
	void USC_SelectTab ( int tabIndex );
	void UpdateNotifications ( class UTgEventDataItem* pEvent );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxNotificationCenter::pClassPointer = NULL;

// Class TgClientBase.TgGfxPatchOverview
// 0x00A8 (0x032C - 0x0284)
class UTgGfxPatchOverview : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_Image;                                          		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Button;                                         		// 0x028C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Prompt;                                         		// 0x0294 (0x0008) [0x0000000000000000]              
	struct FPatchOverviewData                          PatchOverviewData;                                		// 0x029C (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_PendingAlreadySeenList;                         		// 0x031C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4929 );

		return pClassPointer;
	};

	void LandingPanelImagesLoaded ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxPatchOverview::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlay
// 0x0128 (0x03AC - 0x0284)
class UTgGFxPlay : public UTgGfxScene
{
public:
	struct FString                                     m_lsServerRestartLocked;                          		// 0x0284 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSafeModeLocked;                               		// 0x0294 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsQueueTimeLocked;                              		// 0x02A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTimeRemainingHours;                           		// 0x02B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsTimeRemainingSecs;                            		// 0x02C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsStartTime;                                    		// 0x02D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsNow;                                          		// 0x02E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAvailable_MOTD;                               		// 0x02F4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAvailable_level;                              		// 0x0304 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLaunchIn;                                     		// 0x0314 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsMinShort;                                     		// 0x0324 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSecShort;                                     		// 0x0334 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      m_bMultiplayerDisabled : 1;                       		// 0x0344 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bGotPlayerStats : 1;                            		// 0x0344 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bNeedsToCacheFeaturedQueues : 1;                		// 0x0344 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FPlayQueueData >                    m_PlayQueueDatas;                                 		// 0x0348 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTutorialVideoQueue >               m_TutorialVideoQueues;                            		// 0x0358 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_CurrentTab;                                     		// 0x0368 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  m_TabData;                                        		// 0x036C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_FeaturedQueueData;                              		// 0x0374 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_NormalQueueData;                                		// 0x037C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_RankedQueueData;                                		// 0x0384 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_CoopQueueData;                                  		// 0x038C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_TrainingQueueData;                              		// 0x0394 (0x0008) [0x0000000000000000]              
	float                                              m_fQueueTimerRefresh;                             		// 0x039C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TriumphChest;                                   		// 0x03A0 (0x0008) [0x0000000000000000]              
	int                                                m_nRedirectSiteId;                                		// 0x03A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4930 );

		return pClassPointer;
	};

	void usc_JoinMultiqueue ( TArray< int > queueIDs );
	void OnQueueStateChange ( class UTgEventDataItem* pEvent );
	void OnPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Tick ( float DeltaTime );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPlay::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayCustom
// 0x0048 (0x02CC - 0x0284)
class UTgGFxPlayCustom : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsInCustomLobby : 1;                           		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sCurrentlyJoiningGameName;                      		// 0x0288 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCustomListRefreshWaitTime;                     		// 0x0298 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_StartGoldValues;                                		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_BonusTimeValues;                                		// 0x02AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct Fdword >                            m_KickedMemberIds;                                		// 0x02BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4931 );

		return pClassPointer;
	};

	void OnCreateCustomGame ( struct FString SessionGuid );
	void OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked );
	void OnReadFriendsListComplete ( unsigned long bWasSuccessful );
	void eventShowPeoplePickerForCustomGameInvite ( );
	bool CreateDataForCustomGameInvite ( TArray< unsigned char >* OutInviteData );
	void eventClearDelegates ( );
	void eventUpdateOnlineGame ( );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void eventCreateOnlineSession ( int MaxPlayers, unsigned long bPrivate );
	void FilterFriendListForPeoplePicker ( TArray< struct FOnlineFriend >* FriendList, TArray< struct FSessionMemberInfo >* SessionMemberList, int* MaxInviteSize );
	void OnQueueStateChange ( class UTgEventDataItem* pEvent );
	void OnCustomGameHudEvent ( class UTgEventDataItem* pEvent );
	void OnPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Tick ( float DeltaTime );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPlayCustom::pClassPointer = NULL;

// Class TgClientBase.TgGfxPopupModal
// 0x0010 (0x0294 - 0x0284)
class UTgGfxPopupModal : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectedPopup_Delegate__Delegate;           		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4932 );

		return pClassPointer;
	};

	void OnPopupClosed ( class UTgEventDataItem* pEvent );
	void OnPopupOpened ( class UTgEventDataItem* pEvent );
	void USC_SelectedPopup ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_SelectedPopup_Delegate ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue );
	void eventSendAnnounceReportPlayer ( struct FString sReportedId );
	void eventSendClosePopup ( );
	void eventSendOpenPopup ( class UGFxObject* Obj );
};

UClass* UTgGfxPopupModal::pClassPointer = NULL;

// Class TgClientBase.TgGfxProfileCommendations
// 0x001C (0x02A0 - 0x0284)
class UTgGfxProfileCommendations : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_searchedPlayerId;                               		// 0x0288 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_gotAllActivities : 1;                           		// 0x028C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nCommendationActivityId;                        		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nCommendationUnlockActivityId;                  		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nCommendationEOYActivityId;                     		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nYearRewardId;                                  		// 0x029C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4933 );

		return pClassPointer;
	};

	void eventUpdateAll ( );
	void asc_updateAll ( );
	void USC_SeenCommendationUpdate ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileCommendations::pClassPointer = NULL;

// Class TgClientBase.TgGfxProfileReferral
// 0x0020 (0x02A4 - 0x0284)
class UTgGfxProfileReferral : public UTgGfxScene
{
public:
	TArray< struct FReferLevelRewardData >             m_levelRewardDatas;                               		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FReferPlayedRewardData >            m_playedRewardDatas;                              		// 0x0294 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4934 );

		return pClassPointer;
	};

	void CreateMilestones ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxProfileReferral::pClassPointer = NULL;

// Class TgClientBase.TgGfxPurchaseGems
// 0x0150 (0x03D4 - 0x0284)
class UTgGfxPurchaseGems : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_APrompt;                                        		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BPrompt;                                        		// 0x028C (0x0008) [0x0000000000000000]              
	TArray< struct FProductInfo >                      m_XboxProducts;                                   		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FProductInfo >                      m_GemProducts;                                    		// 0x02A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FProductInfo >                      m_BaseProducts;                                   		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GodPackProductId;                                 		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GodPackOwnershipId;                               		// 0x02D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SeasonPassProductId;                              		// 0x02E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SeasonPassOwnershipId;                            		// 0x02F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DigitalDeluxeProductId;                           		// 0x0304 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DigitalDeluxeOwnershipId;                         		// 0x0314 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     YmirGeckoBundleProductId;                         		// 0x0324 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     YmirGeckoBundleOwnershipId;                       		// 0x0334 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WelcomePackId;                                    		// 0x0344 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WelcomePackOwnershipId;                           		// 0x0354 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems200ProductId;                                 		// 0x0364 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems400ProductId;                                 		// 0x0374 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems800ProductId;                                 		// 0x0384 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems1500ProductId;                                		// 0x0394 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems2500ProductId;                                		// 0x03A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems3500ProductId;                                		// 0x03B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Gems8000ProductId;                                		// 0x03C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4935 );

		return pClassPointer;
	};

	void eventSetMarketplaceVisibility ( unsigned long Visible, unsigned char IconPosition );
	void eventGetAvailableProducts ( unsigned char MediaType, TArray< struct FMarketplaceProductDetails >* AvailableProducts );
	void GetMarketPlaceCatalog ( unsigned char MediaType, TArray< struct FProductInfo >* Products );
	void eventGetInventoryItems ( TArray< struct FMarketplaceInventoryItem >* InventoryItems );
	void eventGetAllXBProducts ( TArray< struct FProductInfo >* Products );
	void PopulateXboxProduct ( struct FString ProductId, TArray< struct FProductInfo >* Products );
	void PopulateProduct ( struct FString ProductId, struct FString Header, struct FString Description, TArray< struct FProductImageInfo > ProductImages, TArray< struct FProductInfo >* Products );
	void eventGetGemProducts ( TArray< struct FProductInfo >* Products );
	void eventGetBaseProducts ( TArray< struct FProductInfo >* Products );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void eventUpdateData ( );
	void ASC_UpdateData ( );
	void eventHideOverlay ( );
	void ASC_HideOverlay ( );
	void eventShowOverlay ( );
	void ASC_ShowOverlay ( );
	void USC_CancelPurchase ( );
	void USC_SetupLongDescModal ( struct FString ItemName, struct FString longDesc, struct FString SignedOffer );
	void USC_ShowEmptyMessage ( );
	void USC_PurchaseItem ( struct FString SKUCode, int lootId );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxPurchaseGems::pClassPointer = NULL;

// Class TgClientBase.TgGfxQuestAcquisition
// 0x0004 (0x0288 - 0x0284)
class UTgGfxQuestAcquisition : public UTgGfxScene
{
public:
	unsigned long                                      m_bCheckForNewQuests : 1;                         		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4936 );

		return pClassPointer;
	};

	void OnNewQuests ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxQuestAcquisition::pClassPointer = NULL;

// Class TgClientBase.TgGfxQuestList
// 0x001C (0x02A0 - 0x0284)
class UTgGfxQuestList : public UTgGfxScene
{
public:
	int                                                m_nQuestToAbandonId;                              		// 0x0284 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Header;                                         		// 0x0288 (0x0008) [0x0000000000000000]              
	TArray< int >                                      m_EventQuestSubTypeList;                          		// 0x0290 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4937 );

		return pClassPointer;
	};

	void UpdateQuests ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxQuestList::pClassPointer = NULL;

// Class TgClientBase.TgGFxQuickTestMenu
// 0x0000 (0x0284 - 0x0284)
class UTgGFxQuickTestMenu : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4938 );

		return pClassPointer;
	};

	void USC_CallConsoleCommand ( struct FString sCommand );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxQuickTestMenu::pClassPointer = NULL;

// Class TgClientBase.TgGfxReturnPlayer
// 0x0010 (0x0294 - 0x0284)
class UTgGfxReturnPlayer : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_ClaimBtnKeyboard;                               		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ClaimBtnGamepad;                                		// 0x028C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4939 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_ClaimReturnRewards ( );
};

UClass* UTgGfxReturnPlayer::pClassPointer = NULL;

// Class TgClientBase.TgGfxRewardCenter
// 0x0094 (0x0318 - 0x0284)
class UTgGfxRewardCenter : public UTgGfxScene
{
public:
	unsigned long                                      m_bShowLevelUpTab : 1;                            		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowCouponTab : 1;                             		// 0x0284 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowGiftsTab : 1;                              		// 0x0284 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bShowChestsTab : 1;                             		// 0x0284 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bShowEventInfoTab : 1;                          		// 0x0284 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bShowItemReceiptsTab : 1;                       		// 0x0284 (0x0004) [0x0000000000000000] [0x00000020] 
	TArray< int >                                      m_VisibleChests;                                  		// 0x0288 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_ChestClaimBtn;                                  		// 0x0298 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ChestClaimBanner;                               		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ChestsClaimPrompt;                              		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ChestsUpDownPrompt;                             		// 0x02B0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ChestsLeftRightPrompt;                          		// 0x02B8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftsClaimBtn;                                  		// 0x02C0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftsClaimGamepad;                              		// 0x02C8 (0x0008) [0x0000000000000000]              
	struct FMap_Mirror                                 m_GiftSenders;                                    		// 0x02D0 (0x0048) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4940 );

		return pClassPointer;
	};

	void RepopulateInformation ( class UTgEventDataItem* pEvent );
	void UpdateRewards ( class UTgEventDataItem* pEvent );
	void USC_GotoReceiptItem ( int nItemId );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void RepopulateGiftsFromName ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
};

UClass* UTgGfxRewardCenter::pClassPointer = NULL;

// Class TgClientBase.TgGfxSeasonalEventQuestView
// 0x0000 (0x0284 - 0x0284)
class UTgGfxSeasonalEventQuestView : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4941 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxSeasonalEventQuestView::pClassPointer = NULL;

// Class TgClientBase.TgGFxSimulmediaBase
// 0x001C (0x02A0 - 0x0284)
class UTgGFxSimulmediaBase : public UTgGfxScene
{
public:
	struct FString                                     sAdUrl;                                           		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nSimulmediaGoalGroupId;                         		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nSimulmediaGoalId;                              		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nSimulmediaActivityId;                          		// 0x029C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4942 );

		return pClassPointer;
	};

	void eventHasOpportunities ( );
	void eventNoOpportunities ( );
	void eventUpdateSimulmediaPopupOpportunities ( float DeltaTime );
	void eventRemoveSimulmediaDelegate ( );
	void eventSetOnPostAdvanceDelegateSimulmedia ( );
	void OnOpportunityUpdated ( );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void OnVideoPlayerClosed ( class UTgEventDataItem* pEvent );
	void USC_UpdateRewards ( );
	void USC_UpdateState ( );
	void USC_OpenVideoPlayer ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxSimulmediaBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxSimulmediaVideoPlayer
// 0x001C (0x02A0 - 0x0284)
class UTgGFxSimulmediaVideoPlayer : public UTgGfxScene
{
public:
	class APComVideoPlayer*                            m_PComVideoPlayer;                                		// 0x0284 (0x0008) [0x0000000000000000]              
	struct FString                                     m_sAdUrl;                                         		// 0x028C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bWatchingAd : 1;                                		// 0x029C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4943 );

		return pClassPointer;
	};

	void eventOnVideoError ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode );
	void eventDestroyVideoPlayer ( );
	void eventCompleteWatchingAd ( );
	void eventSpawnVideoPlayer ( class AActor* SpawningActor );
	void USC_AbortAd ( );
	void CloseVideoPlayer ( );
	void CompleteAd ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxSimulmediaVideoPlayer::pClassPointer = NULL;

// Class TgClientBase.TgGfxSocialBase
// 0x0004 (0x0288 - 0x0284)
class UTgGfxSocialBase : public UTgGfxScene
{
public:
	int                                                m_nCurrentTab;                                    		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4944 );

		return pClassPointer;
	};

	void UpdateClanInvitations ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void eventSetSelectedAdminTab ( int nIndex );
	void ASC_SetSelectedAdminTab ( int nIndex );
	void eventJoinedClan ( );
	void ASC_JoinedClan ( );
	void eventUpdateClanInvitationsEvent ( );
	void ASC_UpdateClanInvitations ( );
	void eventUpdateClanMOTD ( );
	void ASC_UpdateClanMOTD ( );
	void eventUpdateSelectedTab ( struct FString tabLabel );
	void ASC_UpdateSelectedTab ( struct FString tabLabel );
	void eventUpdateClanQuestData ( );
	void ASC_UpdateClanQuestData ( );
	void eventUpdateSocialTabLabels ( );
	void ASC_UpdateSocialTabLabels ( );
	void USC_SelectIcon ( int nIconItemId );
	void USC_UpdateCallouts ( );
	void USC_UpdateClanQuestData ( );
	void USC_TabSelected ( struct FString tabSelected );
};

UClass* UTgGfxSocialBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxSovereigntyVendorStore
// 0x094C (0x0BD0 - 0x0284)
class UTgGfxSovereigntyVendorStore : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsStoreOpen : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_actionMode;                                     		// 0x0288 (0x0001) [0x0000000000000000]              
	int                                                m_nShopSelectedIndex;                             		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_randomShopItems[ 0x6 ];                         		// 0x0290 (0x0018) [0x0000000000000000]              
	struct FItemData                                   m_randomShopItemData[ 0x6 ];                      		// 0x02A8 (0x03F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_currentlyEquippedItems[ 0x6 ];                  		// 0x0698 (0x0018) [0x0000000000000000]              
	struct FItemData                                   m_currentlyEquippedItemData[ 0x6 ];               		// 0x06B0 (0x03F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_mainPanel;                                      		// 0x0AA0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_sidePanel;                                      		// 0x0AA8 (0x0008) [0x0000000000000000]              
	struct FItemMovieClip                              m_mcShopItems[ 0x6 ];                             		// 0x0AB0 (0x0090) [0x0000000000000000]              
	struct FItemMovieClip                              m_mcInvItems[ 0x6 ];                              		// 0x0B40 (0x0090) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4945 );

		return pClassPointer;
	};

	void USC_TryAction ( );
	void USC_TryReroll ( );
	void USC_OnInvItemFocused ( int Index );
	void USC_OnShopItemFocused ( int Index );
	void eventPlayCloseAnimation ( );
	void eventPlayOpenAnimation ( );
	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxSovereigntyVendorStore::pClassPointer = NULL;

// Class TgClientBase.TgGfxStoreChest
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxStoreChest : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsClanChest : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsDirty : 1;                                   		// 0x0284 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHasSeenScreen : 1;                             		// 0x0284 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     m_sCamera;                                        		// 0x0288 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCamera_Pedestal;                               		// 0x0298 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCurCamera;                                     		// 0x02A8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4946 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void eventASC_PurchaseTreasureChest ( );
	void PurchaseTreasureChest ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxStoreChest::pClassPointer = NULL;

// Class TgClientBase.TgGfxStoreFeatures
// 0x0000 (0x0284 - 0x0284)
class UTgGfxStoreFeatures : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4947 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void ApplyGemPrices ( class UGFxObject* pArray );
	void ClearDailyDeal ( class UTgEventDataItem* pEvent );
	void LandingPanelImagesLoaded ( class UTgEventDataItem* pEvent );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void ASC_UpdateDP ( );
	void eventUpdateDP ( );
	void USC_ForwardFeature ( int pItemType, struct FString pItemData, struct FString pItemData2, int nLocationId );
	void USC_Initialize ( );
};

UClass* UTgGfxStoreFeatures::pClassPointer = NULL;

// Class TgClientBase.TgGfxStoreInfo
// 0x0000 (0x0284 - 0x0284)
class UTgGfxStoreInfo : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4948 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxStoreInfo::pClassPointer = NULL;

// Class TgClientBase.TgGfxStoreMixer
// 0x0014 (0x0298 - 0x0284)
class UTgGfxStoreMixer : public UTgGfxScene
{
public:
	struct FString                                     m_sCamera;                                        		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bIsLinked : 1;                                  		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4949 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxStoreMixer::pClassPointer = NULL;

// Class TgClientBase.TgGFxStoreShared
// 0x0030 (0x02B4 - 0x0284)
class UTgGFxStoreShared : public UTgGfxScene
{
public:
	struct FString                                     m_sChangingName;                                  		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCameraTag;                                     		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgStoreTab >                       m_arrOtherTabs;                                   		// 0x02A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4950 );

		return pClassPointer;
	};

	void eventUpdateNameChangePrice ( int nPrice );
	void eventSetSelectedTab ( int nIndex );
	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void USC_BuyGems ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxStoreShared::pClassPointer = NULL;

// Class TgClientBase.TgGfxStoreViewer
// 0x0058 (0x02DC - 0x0284)
class UTgGfxStoreViewer : public UTgGfxScene
{
public:
	int                                                m_nCurrentTab;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sCamera;                                        		// 0x0288 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCamera_Pedestal;                               		// 0x0298 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCurCamera;                                     		// 0x02A8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bSeenGods : 1;                                  		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sPendingName;                                   		// 0x02BC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgStoreItemData >                  m_arrItemData;                                    		// 0x02CC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4951 );

		return pClassPointer;
	};

	void UpdateItems ( );
	void OnNameChangeConfirm ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void TryBuyNameChange ( struct FString sName );
	void TryRedeemCode ( struct FString sCode );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void UpdateUGPValue ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxStoreViewer::pClassPointer = NULL;

// Class TgClientBase.TgGfxTextInputPopup
// 0x0000 (0x0284 - 0x0284)
class UTgGfxTextInputPopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4952 );

		return pClassPointer;
	};

	class UGFxObject* GetInputObject ( );
	void SetCachedInputObject ( class UGFxObject* CachedInputObject );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxTextInputPopup::pClassPointer = NULL;

// Class TgClientBase.TgGfxTriumphChest
// 0x0010 (0x0294 - 0x0284)
class UTgGfxTriumphChest : public UTgGfxScene
{
public:
	int                                                m_nTriumphActivity;                               		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nTriumphResetGoal;                              		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nTriumphGoal;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nTriumphCycle;                                  		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4953 );

		return pClassPointer;
	};

	void ShowAboutPanel ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxTriumphChest::pClassPointer = NULL;

// Class TgClientBase.TgGfxVendorStore_PC
// 0x2FAC (0x3230 - 0x0284)
class UTgGfxVendorStore_PC : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_TutorialMC;                                     		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialArrow;                                  		// 0x028C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialLabel;                                  		// 0x0294 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialBlocker;                                		// 0x029C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TutorialPurchaseMC;                             		// 0x02A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TabGroup;                                       		// 0x02AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TabBtn[ 0x3 ];                                  		// 0x02B4 (0x0018) [0x0000000000000000]              
	int                                                m_statid[ 0x14 ];                                 		// 0x02CC (0x0050) [0x0000000000000000]              
	float                                              m_StatValue[ 0x14 ];                              		// 0x031C (0x0050) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatGroup;                                      		// 0x036C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatItem[ 0x14 ];                               		// 0x0374 (0x00A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_StandardView;                                   		// 0x0414 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterGroup;                                    		// 0x041C (0x0008) [0x0000000000000000]              
	struct FItemFilter                                 m_Filter[ 0x4 ];                                  		// 0x0424 (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FItemFilter                                 m_SubFilter[ 0x13 ];                              		// 0x04E4 (0x0390) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_StdTopBtns[ 0x2 ];                              		// 0x0874 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdDisplayBtns[ 0x2 ];                          		// 0x0884 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_RelicUpgradeLabel;                              		// 0x0894 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchText;                                     		// 0x089C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_MultiPurchase;                                  		// 0x08A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdListGroup;                                   		// 0x08AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdListScroll;                                  		// 0x08B4 (0x0008) [0x0000000000000000]              
	struct FDisplayItem                                m_StdListItem[ 0xC ];                             		// 0x08BC (0x05A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdGridGroup;                                   		// 0x0E5C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StdGridScroll;                                  		// 0x0E64 (0x0008) [0x0000000000000000]              
	struct FDisplayItem                                m_StdGridItem[ 0x18 ];                            		// 0x0E6C (0x0B40) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecommendedView;                                		// 0x19AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RoleDropDown;                                   		// 0x19B4 (0x0008) [0x0000000000000000]              
	struct FDisplayItem                                m_RecListItem[ 0xC ];                             		// 0x19BC (0x05A0) [0x0000000000000000]              
	struct FDisplayItem                                m_RecGridItem[ 0x10 ];                            		// 0x1F5C (0x0780) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecHeader[ 0x4 ];                               		// 0x26DC (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecHeaderTF[ 0x4 ];                             		// 0x26FC (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecHeaderBlock[ 0x4 ];                          		// 0x271C (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseGroup;                                  		// 0x273C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StoreDivider;                                   		// 0x2744 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Tier[ 0x4 ];                                    		// 0x274C (0x0020) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier1Btn[ 0x4 ];                                		// 0x276C (0x01E0) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier2Btn[ 0x4 ];                                		// 0x294C (0x01E0) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier3Btn[ 0x4 ];                                		// 0x2B2C (0x01E0) [0x0000000000000000]              
	struct FDisplayItem                                m_Tier4Btn[ 0x4 ];                                		// 0x2D0C (0x01E0) [0x0000000000000000]              
	struct FDisplayItem                                m_SelectedGroup;                                  		// 0x2EEC (0x0078) [0x0000000000000000]              
	class UTgGFxObject*                                m_CurrencyTF;                                     		// 0x2F64 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_CurrencyBG;                                     		// 0x2F6C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SummaryTF;                                      		// 0x2F74 (0x0008) [0x0000000000000000]              
	struct FDisplayItem                                m_SellBtn;                                        		// 0x2F7C (0x0078) [0x0000000000000000]              
	struct FDisplayItem                                m_UndoBtn;                                        		// 0x2FF4 (0x0078) [0x0000000000000000]              
	class UTgGFxObject*                                m_SellBtnBG;                                      		// 0x306C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectBtn;                                      		// 0x3074 (0x0008) [0x0000000000000000]              
	struct FDisplayItem                                m_PurchaseBtn;                                    		// 0x307C (0x0078) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseBtnBG;                                  		// 0x30F4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_AutoPurchase;                                   		// 0x30FC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StoreInactive;                                  		// 0x3104 (0x0008) [0x0000000000000000]              
	int                                                tutorialItemIndex;                                		// 0x310C (0x0004) [0x0000000000000000]              
	int                                                m_nFilter;                                        		// 0x3110 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrency;                                      		// 0x3114 (0x0004) [0x0000000000000000]              
	int                                                m_nRoleIndex;                                     		// 0x3118 (0x0004) [0x0000000000000000]              
	int                                                m_nScrollIndex;                                   		// 0x311C (0x0004) [0x0000000000000000]              
	int                                                m_nPlayerClass;                                   		// 0x3120 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItem;                                  		// 0x3124 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsCustomRole : 1;                              		// 0x3128 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bActive : 1;                                    		// 0x3128 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bGridTip : 1;                                   		// 0x3128 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bPhysical : 1;                                  		// 0x3128 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsInStore : 1;                                 		// 0x3128 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bForceHideAutoPurchase : 1;                     		// 0x3128 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bIsGridTier : 1;                                		// 0x3128 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bIsConsumableGrid : 1;                          		// 0x3128 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bIsSelectedFromTier : 1;                        		// 0x3128 (0x0004) [0x0000000000000000] [0x00000100] 
	int                                                m_nHighlightIndex;                                		// 0x312C (0x0004) [0x0000000000000000]              
	float                                              m_fDblClickItem;                                  		// 0x3130 (0x0004) [0x0000000000000000]              
	float                                              m_fDblClickTimer;                                 		// 0x3134 (0x0004) [0x0000000000000000]              
	float                                              m_fDblClickDuration;                              		// 0x3138 (0x0004) [0x0000000000000000]              
	float                                              m_fRefreshTimer;                                  		// 0x313C (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x3140 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x3144 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x3148 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearchField;                                   		// 0x3158 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownList;                                      		// 0x3168 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownGrid;                                      		// 0x3178 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownCategories;                                		// 0x3188 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PopularItems;                                   		// 0x3198 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier1Items;                                    		// 0x31A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier2Items;                                    		// 0x31B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier3Items;                                    		// 0x31C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier4Items;                                    		// 0x31D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nWishList;                                      		// 0x31E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nLastSelectedItem;                              		// 0x31F8 (0x0004) [0x0000000000000000]              
	int                                                m_nRecentlyPurchasedTutorialItem;                 		// 0x31FC (0x0004) [0x0000000000000000]              
	float                                              m_fUpdateSaleTimer;                               		// 0x3200 (0x0004) [0x0000000000000000]              
	class UTgVendorData*                               m_VendorData;                                     		// 0x3204 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_nStdItemDisplay;                                		// 0x320C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nStoreDisplay;                                  		// 0x320D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVendorRecommendedBuildMode;                    		// 0x320E (0x0001) [0x0000000000000000]              
	TArray< struct FItemCategory >                     m_Categories;                                     		// 0x3210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemCategory >                     m_CustomCategories;                               		// 0x3220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4954 );

		return pClassPointer;
	};

	void OnPopupEvent ( class UTgEventDataItem* pEvent );
	void CheckCurrency ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxVendorStore_PC::pClassPointer = NULL;

// Class TgClientBase.TgGfxVendorStoreUnit
// 0x00D0 (0x0354 - 0x0284)
class UTgGfxVendorStoreUnit : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_UnitShopSlot[ 0x6 ];                            		// 0x0284 (0x0030) [0x0000000000000000]              
	class UTgGFxObject*                                m_ActiveUnitSlot[ 0xA ];                          		// 0x02B4 (0x0050) [0x0000000000000000]              
	class UTgGFxObject*                                m_InactiveUnitSlot[ 0xA ];                        		// 0x0304 (0x0050) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4955 );

		return pClassPointer;
	};

	void OnUnitShopUpdate ( class UTgEventDataItem* pEvent );
	void SwapUnits ( int initPos, int finalPos );
	void BuffUnit ( int Id );
	void SellUnit ( int Position );
	void PurchaseUnit ( int Id, int Position );
	void UpdateInventory ( );
	void UpdateShop ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxVendorStoreUnit::pClassPointer = NULL;

// Class TgClientBase.TgGfxVendorStoreV2_Console
// 0x23FC (0x2680 - 0x0284)
class UTgGfxVendorStoreV2_Console : public UTgGfxScene
{
public:
	struct FString                                     m_lsRecommended;                                  		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsCustomBuild;                                  		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsPopular;                                      		// 0x02A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsOffensive;                                    		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsDefensive;                                    		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsUtility;                                      		// 0x02D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsEssential;                                    		// 0x02E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsActive;                                       		// 0x02F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsConsumable;                                   		// 0x0304 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsStarter;                                      		// 0x0314 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsPower;                                        		// 0x0324 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsAttackSpeed;                                  		// 0x0334 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsLifesteal;                                    		// 0x0344 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsPenetration;                                  		// 0x0354 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsCriticalChance;                               		// 0x0364 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsPhysicalDefense;                              		// 0x0374 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsMagicalDefense;                               		// 0x0384 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsGeneralDefense;                               		// 0x0394 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsMovement;                                     		// 0x03A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsCooldown;                                     		// 0x03B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsSelect;                                       		// 0x03C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsClose;                                        		// 0x03D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsSell;                                         		// 0x03E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsBuy;                                          		// 0x03F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsBack;                                         		// 0x0404 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsInventory;                                    		// 0x0414 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsHealth;                                       		// 0x0424 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsHP5;                                          		// 0x0434 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsAura;                                         		// 0x0444 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsCCR;                                          		// 0x0454 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsMana;                                         		// 0x0464 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsMP5;                                          		// 0x0474 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsToggleStats;                                  		// 0x0484 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsUndo;                                         		// 0x0494 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsMultiPurchaseLabel;                           		// 0x04A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsRelicRestrictedLabel;                         		// 0x04B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsEquip;                                        		// 0x04C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_lsUnequip;                                      		// 0x04D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bUpdateNeeded : 1;                              		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTestMode : 1;                                  		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bReturnedToItemStore : 1;                       		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bIsInTutorial : 1;                              		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bShouldBlockKeys : 1;                           		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bIsFastScroll : 1;                              		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bIsViewingTop : 1;                              		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bIsStoreOpen : 1;                               		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bCanBuyItems : 1;                               		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bShouldShowAllRecommendedBuilds : 1;            		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bClearData : 1;                                 		// 0x04E4 (0x0004) [0x0000000000000000] [0x00000400] 
	int                                                m_nHighlighterElement;                            		// 0x04E8 (0x0004) [0x0000000000000000]              
	int                                                m_nLastSelectedTutorialIndex;                     		// 0x04EC (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eAutoBuyFilter;                                 		// 0x04F0 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nNavigationMode;                                		// 0x04F1 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nCurrentFilterMode;                             		// 0x04F2 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nCurrentPanelMode;                              		// 0x04F3 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVendorRecommendedBuildMode;                    		// 0x04F4 (0x0001) [0x0000000000000000]              
	int                                                m_CurrentRecommendedBuilds[ 0x6 ];                		// 0x04F8 (0x0018) [0x0000000000000000]              
	int                                                m_nTutorialItemIndex;                             		// 0x0510 (0x0004) [0x0000000000000000]              
	int                                                m_nTutorialTierItemId;                            		// 0x0514 (0x0004) [0x0000000000000000]              
	struct FString                                     m_FilterStrings[ 0xC ];                           		// 0x0518 (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_CurrentScrollPos[ 0x5 ];                        		// 0x05D8 (0x0014) [0x0000000000000000]              
	int                                                m_nPlayerClassId;                                 		// 0x05EC (0x0004) [0x0000000000000000]              
	int                                                m_nStoreSelectionIndex;                           		// 0x05F0 (0x0004) [0x0000000000000000]              
	int                                                m_nETCSelectionIndex;                             		// 0x05F4 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrency;                                      		// 0x05F8 (0x0004) [0x0000000000000000]              
	int                                                m_nStoreSelectionItemId;                          		// 0x05FC (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_SelectedTierDisplay;                            		// 0x0600 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                m_nMaxItems;                                      		// 0x0608 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxInventory;                                  		// 0x060C (0x0004) [0x0000000000000000]              
	int                                                m_nMaxActive;                                     		// 0x0610 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxConsumable;                                 		// 0x0614 (0x0004) [0x0000000000000000]              
	int                                                m_nGoldNeededForInventoryUpgrade;                 		// 0x0618 (0x0004) [0x0000000000000000]              
	int                                                m_nGoldNeededForUpdate;                           		// 0x061C (0x0004) [0x0000000000000000]              
	int                                                m_nLeftPanelSelectedItem;                         		// 0x0620 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_CurrentFilteredItems;                           		// 0x0624 (0x0008) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FStoreItemCategory >                m_RecommendedItems;                               		// 0x062C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_RecommendedItems2;                              		// 0x063C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_RecommendedItems3;                              		// 0x064C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_RecommendedItems4;                              		// 0x065C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_RecommendedItems5;                              		// 0x066C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_RecommendedItems6;                              		// 0x067C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_CustomItems;                                    		// 0x068C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_PopularItems;                                   		// 0x069C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_OffensiveItems;                                 		// 0x06AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_DefensiveItems;                                 		// 0x06BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_UtilityItems;                                   		// 0x06CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_StarterItems;                                   		// 0x06DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_ConsumableItems;                                		// 0x06EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_OffensiveTopItems;                              		// 0x06FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_DefensiveTopItems;                              		// 0x070C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreItemCategory >                m_UtilityTopItems;                                		// 0x071C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier1Items;                                    		// 0x072C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier2Items;                                    		// 0x073C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier3Items;                                    		// 0x074C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nTier4Items;                                    		// 0x075C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nRelicList;                                     		// 0x076C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_RecommendedDividers[ 0x5 ];                     		// 0x077C (0x0028) [0x0000000000000000]              
	struct FStoreStatDisplay                           m_StatDisplay[ 0x14 ];                            		// 0x07A4 (0x0410) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_statid[ 0x14 ];                                 		// 0x0BB4 (0x0050) [0x0000000000000000]              
	class UTgGFxObject*                                m_CircularSelections[ 0xC ];                      		// 0x0C04 (0x0060) [0x0000000000000000]              
	class UTgGFxObject*                                m_RecommendedText[ 0x5 ];                         		// 0x0C64 (0x0028) [0x0000000000000000]              
	struct FStoreItemDisplay                           m_ItemDisplay[ 0x1E ];                            		// 0x0C8C (0x0E10) [0x0000000000000000]              
	struct FStoreItemDisplay                           m_InventoryDisplay[ 0x6 ];                        		// 0x1A9C (0x02D0) [0x0000000000000000]              
	class UTgGFxObject*                                m_InventoryFlashDisplay[ 0x8 ];                   		// 0x1D6C (0x0040) [0x0000000000000000]              
	struct FStoreItemDisplay                           m_ActiveDisplay[ 0x2 ];                           		// 0x1DAC (0x00F0) [0x0000000000000000]              
	struct FStoreItemDisplay                           m_ConsumableDisplay[ 0x2 ];                       		// 0x1E9C (0x00F0) [0x0000000000000000]              
	class UTgGFxObject*                                m_ButtonStackDisplay[ 0x4 ];                      		// 0x1F8C (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_ButtonCommandDisplay[ 0x4 ];                    		// 0x1FAC (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_autoBuyPrompt;                                  		// 0x1FCC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ButtonAutoBuy;                                  		// 0x1FD4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LeftTutorialHighlight;                          		// 0x1FDC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RightTutorialHighlight;                         		// 0x1FE4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Tier[ 0x4 ];                                    		// 0x1FEC (0x0020) [0x0000000000000000]              
	struct FStoreTierDisplay                           m_Tier1Btn[ 0x4 ];                                		// 0x200C (0x0160) [0x0000000000000000]              
	struct FStoreTierDisplay                           m_Tier2Btn[ 0x4 ];                                		// 0x216C (0x0160) [0x0000000000000000]              
	struct FStoreTierDisplay                           m_Tier3Btn[ 0x4 ];                                		// 0x22CC (0x0160) [0x0000000000000000]              
	struct FStoreTierDisplay                           m_Tier4Btn[ 0x4 ];                                		// 0x242C (0x0160) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterHeader;                                   		// 0x258C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedItemName;                               		// 0x2594 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RightArrow;                                     		// 0x259C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LeftArrow;                                      		// 0x25A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_InventoryLabel;                                 		// 0x25AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ActiveLabel;                                    		// 0x25B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ConsumableLabel;                                		// 0x25BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_DividerActCon;                                  		// 0x25C4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_MultiTreeLabel;                                 		// 0x25CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StoreInactiveLabel;                             		// 0x25D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseDescriptionPanel;                       		// 0x25DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseDescriptionItemNameTF;                  		// 0x25E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PurchaseDescriptionCostTF;                      		// 0x25EC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_OwnedGoldTF;                                    		// 0x25F4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemScrollbar;                                  		// 0x25FC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_InventoryOwnedGoldTF;                           		// 0x2604 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SellAmountTF;                                   		// 0x260C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderLeftTF;                                   		// 0x2614 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderRightTF;                                  		// 0x261C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemSummaryTF;                                  		// 0x2624 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TierView;                                       		// 0x262C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TierBtnPrompt;                                  		// 0x2634 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TriggerCommand;                                 		// 0x263C (0x0008) [0x0000000000000000]              
	class UTgVendorData*                               m_VendorData;                                     		// 0x2644 (0x0008) [0x0000000000000000]              
	int                                                m_nGridTierMode;                                  		// 0x264C (0x0004) [0x0000000000000000]              
	int                                                m_nRecentlyPurchasedItem;                         		// 0x2650 (0x0004) [0x0000000000000000]              
	int                                                m_nRecentlyPurchasedTutorialItem;                 		// 0x2654 (0x0004) [0x0000000000000000]              
	int                                                m_nBlockAllKeysExcept;                            		// 0x2658 (0x0004) [0x0000000000000000]              
	float                                              m_fTutorialBlockTimer;                            		// 0x265C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_ToggleStore_Delegate__Delegate;             		// 0x2660 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x2664 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_HandleButtonInput_Delegate__Delegate;       		// 0x2670 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x2674 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4956 );

		return pClassPointer;
	};

	void OnPopupEvent ( class UTgEventDataItem* pEvent );
	void eventUpdateTierSummary ( int pItemId );
	void ASC_UpdateTierSummary ( int pItemId );
	void eventToggleStatDisplay ( );
	void ASC_ToggleStatDisplay ( );
	void eventCloseStoreOnDelay ( );
	void ASC_CloseStoreOnDelay ( );
	void eventUpdateSelectedPrice ( );
	void ASC_UpdateSelectedPrice ( );
	void eventAnimateItemPurchase ( );
	void ASC_AnimateItemPurchase ( );
	void eventFocusRightPanel ( );
	void ASC_FocusRightPanel ( );
	void eventFocusLeftPanel ( );
	void ASC_FocusLeftPanel ( );
	void eventPlayCloseAnimation ( );
	void ASC_PlayCloseAnimation ( );
	void eventPlayOpenAnimation ( );
	void ASC_PlayOpenAnimation ( );
	bool USC_HandleButtonInput ( int nControllerId, int nKeyCode, int nPressType );
	void USC_ToggleStore ( );
	void USC_HandleButtonInput_Delegate ( int nControllerId, int nKeyCode, int nPressType );
	void USC_ToggleStore_Delegate ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void CheckCurrency ( class UTgEventDataItem* pEvent );
};

UClass* UTgGfxVendorStoreV2_Console::pClassPointer = NULL;

// Class TgClientBase.TgSystemNotifManagerBase
// 0x005C (0x01C4 - 0x0168)
class UTgSystemNotifManagerBase : public UTgGFxEventObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0168 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FSystemMessage >                    m_SystemMessages;                                 		// 0x0170 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSystemMessage >                    m_arrPendingPrivilegeMessages;                    		// 0x0180 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSystemMessage >                    m_arrPendingUserInfoMessages;                     		// 0x0190 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgSystemMessageTag >               m_arrPendingNameMsgs;                             		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bClanInvitesInitialized : 1;                    		// 0x01B0 (0x0004) [0x0000000000000000] [0x00000001] 
	class UOnlinePlayerInterface*                      m_pOnlinePlayerInterface;                         		// 0x01B4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x01BC (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4957 );

		return pClassPointer;
	};

	bool eventUCUninitialize ( );
	bool eventUCInitialize ( );
	class UOnlinePlayerInterface* GetPlayerInterface ( );
	void OnReceivePlatformPermissions ( unsigned char nLocalUserNum, unsigned char ePrivilege, TArray< struct FPermissionsResultByUniqueNetId > arrResults );
	void OnLoginEvent ( class UTgEventDataItem* pEvent );
	void OnAcquisitionNotification ( class UTgEventDataItem* pEvent );
	void OnAddSystemMessageNotification ( class UTgEventDataItem* pEvent );
	void OnQuestComplete ( class UTgEventDataItem* pEvent );
	void AddQuestCompletedNotification ( struct FString msg, int nIconIndex );
	void ExpireSystemMessageTeamInvite ( );
	void AddSystemMessageTeamInvite ( );
	void RejectPartySystemMessage ( );
	void AcceptPartySystemMessage ( );
	void RejectClanSystemMessage ( int nClanId );
	void AcceptClanSystemMessage ( int nClanId );
	void InitializeClanInvites ( );
	int GetNotificationCount ( unsigned char nType );
	void OnSystemMessageAdded ( );
	void RejectNotification ( unsigned char nType, int nId );
	void AcceptNotification ( unsigned char nType, int nId );
	void RemoveNotification ( unsigned char nType, int nIndex );
	void RemoveAllNotifications ( unsigned char nType );
	int GetNewSystemMessageCount ( unsigned char nType );
	bool IsAnySystemMessageNew ( unsigned char nType );
	void SetAllSystemMessagesSeen ( unsigned char nType );
	void AddSystemAcquisitionNotification ( class UGFxObject* pObj );
	void AddSystemMessageNotification ( struct FString msg, unsigned char nType, unsigned char nSubType );
	void ShowPlayerNotif ( struct FSystemMessage* msg );
	void OnReceivePlatformNames ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void OnPlayerInfo ( struct FPointer pEventBase );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgSystemNotifManagerBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxNativeWidget
// 0x0074 (0x0130 - 0x00BC)
class UTgGFxNativeWidget : public UTgGFxObject
{
public:
	struct FPointer                                    VfTable_ITgEventAccessInterface;                  		// 0x00BC (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FArray_Mirror                               m_arrOldMcts;                                     		// 0x00C4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FArray_Mirror                               m_arrMcts;                                        		// 0x00D4 (0x0010) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FGameEventListener >                m_arrGameEvents;                                  		// 0x00E4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FGameEventListener >                m_arrInputEvents;                                 		// 0x00F4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      OwnsSubWidgets : 1;                               		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDisableBrowserInput : 1;                       		// 0x0104 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bInitialized : 1;                               		// 0x0104 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bHasError : 1;                                  		// 0x0104 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FTgCustomAStoUCBind >               Bindings;                                         		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0118 (0x0008) [0x0000000000000000]              
	TArray< class UObject* >                           m_arrChildren;                                    		// 0x0120 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4958 );

		return pClassPointer;
	};

	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void GetArrInputIntercepts ( struct FPointer* pArr );
	void GetArrGameEventListeners ( struct FPointer* pArr );
	void GetArrMctsListeners ( struct FPointer* pArr );
	void GetArrOldMctsListeners ( struct FPointer* pArr );
	bool TryUnbindProperty ( struct FName WidgetName, class UGFxObject* Widget );
	bool TryBindProperty ( struct FName WidgetName, class UGFxObject* Widget );
	void Uninitialize ( );
	void PostInit ( );
	void Initialize ( );
	void PreInit ( );
	void UninitImpl ( );
	void InitImpl ( struct FString sPath );
	bool IsInitialized ( );
};

UClass* UTgGFxNativeWidget::pClassPointer = NULL;

// Class TgClientBase.TgGfxMainMenu
// 0x0064 (0x0194 - 0x0130)
class UTgGfxMainMenu : public UTgGFxNativeWidget
{
public:
	class UTgGFxObject*                                Sizer;                                            		// 0x0130 (0x0008) [0x0000000000000000]              
	struct FTgMainMenuPanel                            Panel;                                            		// 0x0138 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgMainMenuBtn >                    m_arrData;                                        		// 0x0158 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgIntervalHandle                           m_IntervalUpdate;                                 		// 0x0168 (0x0010) [0x0000000000000000]              
	class UTgPatchOverviewDataItem*                    m_patchOverviewDataItem;                          		// 0x0178 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_hasPatchOverviewData : 1;                       		// 0x0180 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __HandleAction__Delegate;                         		// 0x0184 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0188 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4959 );

		return pClassPointer;
	};

	void OnRedeemCodeResponse ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	bool HandleInput ( struct FInputDetails* Details, TArray< class UGFxObject* >* arrPathToFocus );
	void OnPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void CloseScene ( );
	void OnRefreshMenu ( class UTgEventDataItem* pEventBase );
	void OnTutorialUpdate ( class UTgEventDataItem* pEventBase );
	void OnButtonFocus ( struct FGFxEventData* evtData );
	void OnButtonClick ( struct FGFxEventData* evtData );
	void OnUpdateInterval ( float nDeltaTime );
	void AnimateIn ( );
	void SetupButtons ( );
	void AutoPopulate ( );
	void Uninitialize ( );
	void Initialize ( );
	bool HandleAction ( struct Fdword nAction );
};

UClass* UTgGfxMainMenu::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayerNameWidget
// 0x0008 (0x0138 - 0x0130)
class UTgGFxPlayerNameWidget : public UTgGFxNativeWidget
{
public:
	class UTgGFxNameDisplayManager*                    m_pManager;                                       		// 0x0130 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4960 );

		return pClassPointer;
	};

	void eventOnNameUpdate ( unsigned long bSuccess, class UGFxObject* pForId, struct FString sName );
	void USC_RequestName ( struct FString sPlayerId, struct FString sUserId, int nPortalType );
	void Initialize ( );
};

UClass* UTgGFxPlayerNameWidget::pClassPointer = NULL;

// Class TgClientBase.TgGFxPriceData
// 0x0090 (0x014C - 0x00BC)
class UTgGFxPriceData : public UTgGFxObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x00BC (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxPriceData.m_mapPrices
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x0104 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxPriceData.m_mapPresalePrices

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4961 );

		return pClassPointer;
	};

	void ClearPrices ( );
	void SetData ( struct Fdword nLTI, struct Fdword nVendor );
};

UClass* UTgGFxPriceData::pClassPointer = NULL;

// Class TgClientBase.TgGFxVendorItemData
// 0x0008 (0x00C4 - 0x00BC)
class UTgGFxVendorItemData : public UTgGFxObject
{
public:
	struct FPointer                                    m_pItem;                                          		// 0x00BC (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4962 );

		return pClassPointer;
	};

	void Populate ( );
	void SetData ( struct Fdword nLTI, struct Fdword nVendorId );
};

UClass* UTgGFxVendorItemData::pClassPointer = NULL;

// Class TgClientBase.TgGFxBundleData
// 0x0000 (0x00C4 - 0x00C4)
class UTgGFxBundleData : public UTgGFxVendorItemData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4963 );

		return pClassPointer;
	};

	void Populate ( );
};

UClass* UTgGFxBundleData::pClassPointer = NULL;

// Class TgClientBase.TgSceneManager
// 0x0040 (0x00FC - 0x00BC)
class UTgSceneManager : public UTgGFxObject
{
public:
	TArray< struct FTgSceneDef >                       m_arrScenes;                                      		// 0x00BC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_arrExclusions;                                  		// 0x00CC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      m_fCurrLoadPermission;                            		// 0x00DC (0x0004) [0x0000000000000000]              
	TArray< struct FTgLoadSceneData >                  m_arrLoadSceneData;                               		// 0x00E0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_loadedScenes;                                   		// 0x00F0 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMouseCaptured : 1;                               		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4964 );

		return pClassPointer;
	};

	class UGFxObject* eventasc_getScenesAsArray ( );
	void eventasc_pushSceneToFocusStack ( struct FString SceneName, class UGFxObject* modalObj, class UGFxObject* focusObj );
	void eventasc_popSceneFromFocusStack ( struct FString SceneName );
	bool IsMouseCaptured ( );
	void PopSceneFromFocusStack ( struct FString sSceneName );
	void PushSceneToFocusStack ( struct FString sSceneName, class UGFxObject* pModal, class UGFxObject* pFocus );
	bool HasDismissableScene ( );
	bool DismissHighestScene ( );
	void ShowCharacterCard ( int nClassId );
	void PopKeyCapture ( struct FString sKeyName );
	void PushKeyCapture ( struct FString sKeyName );
	void PopMouseCapture ( struct FString sKeyName );
	void PushMouseCapture ( struct FString sKeyName );
	void KillAllScenes ( );
	void UnloadAllScenes ( TArray< struct FString > arrExclusions, unsigned long bKill );
	class UTgDataItem* ConsumeLoadSceneData ( struct FString sSceneName );
	class UTgDataItem* GetLoadSceneData ( struct FString SceneName );
	void SetLoadPermissions ( struct Fdword fPermiss );
	bool IsSceneBlockingAcquisitions ( );
	bool IsSceneLoaded ( struct FString SceneName );
	void ListOpenScenes ( );
	bool ToggleScene ( struct FString SceneName, class UTgDataItem* pLoadData );
	bool PreloadScene ( struct FString SceneName );
	bool UnloadScene ( struct FString SceneName );
	bool LoadScene ( struct FString SceneName, class UTgDataItem* pLoadData );
	bool KillScene ( struct FString SceneName );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgSceneManager::pClassPointer = NULL;

// Class TgClientBase.TgGFxObjectEvent
// 0x0008 (0x007C - 0x0074)
class UTgGFxObjectEvent : public UTgEventDataItem
{
public:
	class UGFxObject*                                  pObj;                                             		// 0x0074 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4965 );

		return pClassPointer;
	};

};

UClass* UTgGFxObjectEvent::pClassPointer = NULL;

// Class TgClientBase.TgGFxSoundEvent
// 0x0010 (0x0084 - 0x0074)
class UTgGFxSoundEvent : public UTgEventDataItem
{
public:
	struct FName                                       nmTheme;                                          		// 0x0074 (0x0008) [0x0000000000000000]              
	struct FName                                       nmEvent;                                          		// 0x007C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4966 );

		return pClassPointer;
	};

};

UClass* UTgGFxSoundEvent::pClassPointer = NULL;

// Class TgClientBase.TgGodTargeterEvent
// 0x0014 (0x0088 - 0x0074)
class UTgGodTargeterEvent : public UTgEventDataItem
{
public:
	int                                                fFlags;                                           		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     sDescription;                                     		// 0x0078 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4967 );

		return pClassPointer;
	};

};

UClass* UTgGodTargeterEvent::pClassPointer = NULL;

// Class TgClientBase.TgIdValueEvent
// 0x0030 (0x00A4 - 0x0074)
class UTgIdValueEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 Id;                                               		// 0x0074 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTgDataItemValue                            Value;                                            		// 0x0098 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4968 );

		return pClassPointer;
	};

};

UClass* UTgIdValueEvent::pClassPointer = NULL;

// Class TgClientBase.TgInitInterface
// 0x0000 (0x0060 - 0x0060)
class UTgInitInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4969 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgInitInterface::pClassPointer = NULL;

// Class TgClientBase.TgSceneManagerInterface
// 0x0000 (0x0060 - 0x0060)
class UTgSceneManagerInterface : public UTgInitInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4970 );

		return pClassPointer;
	};

	bool HasDismissableScene ( );
	bool DismissHighestScene ( );
	void PopSceneFromFocusStack ( struct FString sSceneName );
	void PushSceneToFocusStack ( struct FString sSceneName, class UGFxObject* pModal, class UGFxObject* pFocus );
	void PopKeyCapture ( class UGFxObject* pOwner );
	void PushKeyCapture ( class UGFxObject* pOwner );
	void PopMouseCapture ( class UGFxObject* pOwner );
	void PushMouseCapture ( class UGFxObject* pOwner );
	void ListOpenScenes ( );
	bool IsSceneLoaded ( struct FString SceneName );
	void UnloadAllScenes ( TArray< struct FString > exclusionList, unsigned long bKill );
	void ToggleScene ( struct FString SceneName, class UTgDataItem* pLoadData );
	void UnloadScene ( struct FString SceneName );
	void LoadScene ( struct FString SceneName, class UTgDataItem* pLoadData );
	void KillScene ( struct FString SceneName );
};

UClass* UTgSceneManagerInterface::pClassPointer = NULL;

// Class TgClientBase.TgInputDataEvent
// 0x0008 (0x007C - 0x0074)
class UTgInputDataEvent : public UTgEventDataItem
{
public:
	struct FTgInputWrapper                             Value;                                            		// 0x0074 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4971 );

		return pClassPointer;
	};

};

UClass* UTgInputDataEvent::pClassPointer = NULL;

// Class TgClientBase.TgIntervalInterface
// 0x0000 (0x0060 - 0x0060)
class UTgIntervalInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4972 );

		return pClassPointer;
	};

	class UTgIntervalManager* GetIntervalManager ( );
};

UClass* UTgIntervalInterface::pClassPointer = NULL;

// Class TgClientBase.TgIntervalManager
// 0x0070 (0x00D0 - 0x0060)
class UTgIntervalManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0068 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgIntervalManager.m_mapIntervals
	struct FQWord                                      m_nLastId;                                        		// 0x00B0 (0x0008) [0x0000000000000000]              
	struct FQWord                                      m_nCurrentTime;                                   		// 0x00B8 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __IntervalDelegate__Delegate;                     		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4973 );

		return pClassPointer;
	};

	struct FQWord GetNextId ( );
	void ClearAll ( class UObject* pScope );
	bool ClearTimeout ( struct FTgIntervalHandle* Handle );
	bool ClearInterval ( struct FTgIntervalHandle* Handle );
	struct FTgIntervalHandle SetIntervalEx ( float nTimeSecs, int nRepeatCount, struct FScriptDelegate delCallback );
	struct FTgIntervalHandle SetInterval ( float nTimeSecs, struct FScriptDelegate delCallback );
	struct FTgIntervalHandle SetTimeout ( float nTimeSecs, struct FScriptDelegate delCallback );
	void IntervalDelegate ( float nDeltaTime );
};

UClass* UTgIntervalManager::pClassPointer = NULL;

// Class TgClientBase.TgLandingPanelManagerBase
// 0x001C (0x00A0 - 0x0084)
class UTgLandingPanelManagerBase : public UPComUIManagerBase
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0084 (0x0008) [0x0000000000000000]              
	struct FString                                     GodPackOwnershipId;                               		// 0x008C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      m_bShowJSONWarnings : 1;                          		// 0x009C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      m_bFoundGodPack : 1;                              		// 0x009C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4974 );

		return pClassPointer;
	};

};

UClass* UTgLandingPanelManagerBase::pClassPointer = NULL;

// Class TgClientBase.TgLoginEvent
// 0x0014 (0x0088 - 0x0074)
class UTgLoginEvent : public UTgEventDataItem
{
public:
	struct FTgLoginEventData                           Data;                                             		// 0x0074 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4975 );

		return pClassPointer;
	};

};

UClass* UTgLoginEvent::pClassPointer = NULL;

// Class TgClientBase.TgDevMenuMoviePlayer
// 0x0008 (0x0960 - 0x0958)
class UTgDevMenuMoviePlayer : public UTgMoviePlayer
{
public:
	class UGFxObject*                                  m_DevMenu;                                        		// 0x0958 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4976 );

		return pClassPointer;
	};

	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char Event );
	void eventOnClose ( );
	void PostInit ( );
	void usc_FillCommands ( struct FString MenuName );
	void AddSubMenu ( struct FString Section, struct FString submenuname, struct FString DisplayName );
	void AddCommand ( struct FString Section, struct FString Command, struct FString DisplayName );
	void FillSubMenuCommands ( struct FString submenuname );
	void FillMenuCommands ( );
};

UClass* UTgDevMenuMoviePlayer::pClassPointer = NULL;

// Class TgClientBase.TgMultiStringEvent
// 0x0010 (0x0084 - 0x0074)
class UTgMultiStringEvent : public UTgEventDataItem
{
public:
	TArray< struct FString >                           sValues;                                          		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4977 );

		return pClassPointer;
	};

};

UClass* UTgMultiStringEvent::pClassPointer = NULL;

// Class TgClientBase.TgPagePopup
// 0x0208 (0x0268 - 0x0060)
class UTgPagePopup : public UObject
{
public:
	struct FString                                     m_sTitle;                                         		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sButtonLabel1;                                  		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nButtonActionID1;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sButtonLabel2;                                  		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nButtonActionID2;                               		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sButtonLabel3;                                  		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nButtonActionID3;                               		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                m_nPopupType;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPopupDesc;                                     		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sInputTextLabel;                                		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sInputTextFill;                                 		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDropDownLabel;                                 		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_sDropDownData;                                  		// 0x00F0 (0x0008) [0x0000000000000000]              
	int                                                m_nDropDownIndex;                                 		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                m_nDropDownIndex2;                                		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSubSectionLabel1;                              		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionLabel1;                                  		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nOptionActionID1;                               		// 0x0120 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOptionSalePrice1;                              		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionPrice1;                                  		// 0x0134 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionCallAction1;                             		// 0x0144 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionLabel2;                                  		// 0x0154 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nOptionActionID2;                               		// 0x0164 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOptionSalePrice2;                              		// 0x0168 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionPrice2;                                  		// 0x0178 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionCallAction2;                             		// 0x0188 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSubSectionLabel2;                              		// 0x0198 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionLabel3;                                  		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nOptionActionID3;                               		// 0x01B8 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOptionSalePrice3;                              		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionPrice3;                                  		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionCallAction3;                             		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionLabel4;                                  		// 0x01EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nOptionActionID4;                               		// 0x01FC (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOptionSalePrice4;                              		// 0x0200 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionPrice4;                                  		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionCallAction4;                             		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_purchaseItemId;                                 		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                m_purchaseItemType;                               		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                m_nReplacementCancelAction;                       		// 0x0238 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bImportant : 1;                                 		// 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bMustSelectButton : 1;                          		// 0x023C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUserMustClose : 1;                             		// 0x023C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDisableTreasurePurchase : 1;                   		// 0x023C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_purchaseItemSubType;                            		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                m_purchaseItemIconId;                             		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FString                                     m_purchaseItemIconSource;                         		// 0x0248 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPopupDelegate__Delegate;                      		// 0x0258 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x025C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4978 );

		return pClassPointer;
	};

	void HandleResponse ( struct FPopupResponse* Response );
	void RemoveCallback ( class UObject* pObject );
	void SetCallback ( struct FScriptDelegate delCallback );
	void FillPopupData ( class UGFxObject* popupData );
	void OnPopupDelegate ( class UTgPagePopup* pData, struct FPopupResponse* Response );
};

UClass* UTgPagePopup::pClassPointer = NULL;

// Class TgClientBase.TgPlayerIdEvent
// 0x0024 (0x0098 - 0x0074)
class UTgPlayerIdEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 Value;                                            		// 0x0074 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4979 );

		return pClassPointer;
	};

};

UClass* UTgPlayerIdEvent::pClassPointer = NULL;

// Class TgClientBase.TgPlayerNameManager
// 0x00CC (0x012C - 0x0060)
class UTgPlayerNameManager : public UObject
{
public:
	struct FPointer                                    VfTable_ITgInitInterface;                         		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0068 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FTgPlayerNameMap                            m_mapProfiles;                                    		// 0x0070 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgPlayerNameProcessor*                      m_pProcessor;                                     		// 0x00AC (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FScriptDelegate                             m_delPlayerCardClosed;                            		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlineSubsystem*                            m_pOnlineSubsystem;                               		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UOnlinePlayerInterface*                      m_pPlayerInterface;                               		// 0x00CC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x8 ];                             		// 0x00D4 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlinePlayerInterfaceEx*                    m_pPlayerInterfaceEx;                             		// 0x00DC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x8 ];                             		// 0x00E4 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UOnlineVoiceInterface*                       m_pVoiceInterface;                                		// 0x00EC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x8 ];                             		// 0x00F4 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct FQWord >                            m_MutedVivoxPlayerIds;                            		// 0x00FC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __NameRequestDelegate__Delegate;                  		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0110 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __SystemCall__Delegate;                           		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0120 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4980 );

		return pClassPointer;
	};

	class ULocalPlayer* eventGetLP ( );
	unsigned char eventGetLocalUserNum ( );
	bool eventIsPlayerMutedImpl ( struct FUniqueNetId ConsoleId );
	bool eventUnmutePlayerImpl ( unsigned char LocalUserNum, struct FUniqueNetId ConsoleId );
	bool eventMutePlayerImpl ( unsigned char LocalUserNum, struct FUniqueNetId ConsoleId );
	struct FString eventGetPlayerNicknameFromInterface ( );
	bool eventShowPlayerCardByUserNameImpl ( struct FString UserName, struct FUniqueNetId PlayerID, struct FScriptDelegate completeCallback );
	bool eventShowPlayerCardImpl ( struct FUniqueNetId PlayerID, struct FScriptDelegate completeCallback );
	void eventUnregisterOSSFriends ( );
	void eventRegisterOSSFriends ( );
	struct Fdword ClearCachedOnlineProfiles ( );
	bool IsOnline ( struct FPointer pStateOwner, struct FTgPlayerId* pid );
	void OnPlayerCardClosed ( unsigned long bSuccess );
	bool IsPlayerMuted ( struct FTgPlayerId* pid );
	bool UnmutePlayer ( struct FTgPlayerId* pid );
	bool MutePlayer ( struct FTgPlayerId* pid );
	bool ShowPlayerCard ( struct FScriptDelegate delComplete, struct FTgPlayerId* pid );
	struct FTgPlayerId GetLocalPlayer ( unsigned char nIndex );
	bool CancelProfileRequests ( class UObject* pOwner );
	bool RequestProfileAsync ( struct FScriptDelegate delCallback, unsigned long bWaitOnly, unsigned long bNoFilter, struct FTgPlayerId* pid );
	bool RequestNamesByGFxPlayersAsync ( class UGFxObject* arrPlayers, struct FScriptDelegate delCallback, unsigned long bWaitOnly, unsigned long bNoFilter );
	bool HasUnfilteredNameFor ( struct FTgPlayerId* Id );
	bool HasProfileFor ( struct FTgPlayerId* Id );
	bool HasNameFor ( struct FTgPlayerId* Id );
	void Uninitialize ( );
	void Initialize ( );
	void SystemCall ( unsigned long bSuccess );
	void NameRequestDelegate ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
};

UClass* UTgPlayerNameManager::pClassPointer = NULL;

// Class TgClientBase.TgPlayerNameProcessor
// 0x0138 (0x0198 - 0x0060)
class UTgPlayerNameProcessor : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UOnlineSubsystem*                            m_pProcOnlineSubsystem;                           		// 0x0068 (0x0008) [0x0000000000000000]              
	class UOnlinePlayerInterfaceEx*                    m_pProcPlayerInterfaceEx;                         		// 0x0070 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0078 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FTgNameRequestBuffer                        buffer_;                                          		// 0x0080 (0x0108) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __NameRequestDelegate__Delegate;                  		// 0x0188 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x018C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4981 );

		return pClassPointer;
	};

	void Tick ( float nDeltaTime );
	bool IsTickable ( );
	void RequestPlatformProfile ( struct FString sId, struct FScriptDelegate delCallback );
	void RequestMctsProfile ( struct Fdword nId, struct FScriptDelegate delCallback, unsigned long bWaitOnly, unsigned long bNoFilter );
	void RequestProfile ( struct FScriptDelegate delCallback, unsigned long bWaitOnly, unsigned long bNoFilter, struct FTgPlayerId* pid );
	void OnReadPlatformFriends ( );
	void ReceivePlatformInfo ( unsigned long bSuccess, TArray< struct FString >* arrIds, TArray< struct FOnlineProfile >* arrProfiles );
	void ReceiveMctsInfo ( struct Fdword nPid, struct FString sFilter, struct FTgUserId* Uid );
	void OnFilterResult ( struct FString sOriginal, struct FString sFiltered, unsigned long bTotalCensor );
	void RequestPlatformProfiles ( TArray< struct FString >* arrUids );
	void Empty ( );
	void Uninitialize ( );
	void Initialize ( );
	void eventUnregisterOSS ( );
	void eventRegisterOSS ( );
	void eventSubmitProfilesRequest ( TArray< struct FString >* arrPlayerIdStrings );
	void OnReadOnlinePlayerDataComplete ( unsigned long bWasSuccessful, TArray< struct FString > PlayerIDs, TArray< struct FOnlineProfile > OnlineProfiles );
	void NameRequestDelegate ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
};

UClass* UTgPlayerNameProcessor::pClassPointer = NULL;

// Class TgClientBase.TgPlayerSpeakingEvent
// 0x0014 (0x0088 - 0x0074)
class UTgPlayerSpeakingEvent : public UTgEventDataItem
{
public:
	struct FString                                     sPlayerNetId;                                     		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsSpeaking : 1;                                  		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4982 );

		return pClassPointer;
	};

};

UClass* UTgPlayerSpeakingEvent::pClassPointer = NULL;

// Class TgClientBase.TgPromptManager
// 0x0000 (0x00AC - 0x00AC)
class UTgPromptManager : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4983 );

		return pClassPointer;
	};

	void eventRestoreButtonPrompts ( );
	void eventCacheAndClearButtonPrompts ( );
	void eventUnsuppressGlobalPrompt ( struct FString sButtonDisplay, class UGFxObject* Owner );
	void eventSuppressGlobalPrompt ( struct FString sButtonDisplay, class UGFxObject* Owner );
	void eventClearAllButtonPrompts ( );
	void eventClearButtonPrompt ( struct FString sButtonDisplay );
	void eventSetPrompts ( TArray< class UGFxObject* > prompts );
	void eventUpdateButtonPromptText ( struct FString sButtonDisplay, struct FString sPromptText );
	void eventUpdateButtonPrompt ( struct FString sButtonDisplay, struct FString sPromptMsg );
	void eventSetPrimaryDisplay ( class UGFxObject* Clip );
};

UClass* UTgPromptManager::pClassPointer = NULL;

// Class TgClientBase.TgRewardProgressEvent
// 0x0004 (0x0078 - 0x0074)
class UTgRewardProgressEvent : public UTgEventDataItem
{
public:
	float                                              nValue;                                           		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4984 );

		return pClassPointer;
	};

};

UClass* UTgRewardProgressEvent::pClassPointer = NULL;

// Class TgClientBase.TgRoundUIEvent
// 0x000C (0x0080 - 0x0074)
class UTgRoundUIEvent : public UTgEventDataItem
{
public:
	int                                                nGameTipId;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                nRoundTitleId;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                nCurrentRound;                                    		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4985 );

		return pClassPointer;
	};

};

UClass* UTgRoundUIEvent::pClassPointer = NULL;

// Class TgClientBase.TgScoreboardEvent
// 0x0008 (0x007C - 0x0074)
class UTgScoreboardEvent : public UTgEventDataItem
{
public:
	unsigned long                                      bShow : 1;                                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocused : 1;                                     		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                nView;                                            		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4986 );

		return pClassPointer;
	};

};

UClass* UTgScoreboardEvent::pClassPointer = NULL;

// Class TgClientBase.TgSelectedPopupEvent
// 0x0024 (0x0098 - 0x0074)
class UTgSelectedPopupEvent : public UTgEventDataItem
{
public:
	int                                                nActionId;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     sInputValue;                                      		// 0x0078 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0088 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4987 );

		return pClassPointer;
	};

};

UClass* UTgSelectedPopupEvent::pClassPointer = NULL;

// Class TgClientBase.TgSelectorPopulateEvent
// 0x0020 (0x0094 - 0x0074)
class UTgSelectorPopulateEvent : public UTgEventDataItem
{
public:
	TArray< struct FString >                           strList;                                          		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      idList;                                           		// 0x0084 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4988 );

		return pClassPointer;
	};

};

UClass* UTgSelectorPopulateEvent::pClassPointer = NULL;

// Class TgClientBase.TgSpecSyncEvent
// 0x0004 (0x0078 - 0x0074)
class UTgSpecSyncEvent : public UTgEventDataItem
{
public:
	unsigned long                                      bSpectatorMaster : 1;                             		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSyncWithMasterEnabled : 1;                       		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsSyncingWithMaster : 1;                         		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4989 );

		return pClassPointer;
	};

};

UClass* UTgSpecSyncEvent::pClassPointer = NULL;

// Class TgClientBase.TgSpectatorStatEvent
// 0x000C (0x0080 - 0x0074)
class UTgSpectatorStatEvent : public UTgEventDataItem
{
public:
	class AActor*                                      pActor;                                           		// 0x0074 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nActorId;                                         		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4990 );

		return pClassPointer;
	};

};

UClass* UTgSpectatorStatEvent::pClassPointer = NULL;

// Class TgClientBase.TgStringDataItem
// 0x0010 (0x0070 - 0x0060)
class UTgStringDataItem : public UTgDataItem
{
public:
	struct FString                                     sValue;                                           		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4991 );

		return pClassPointer;
	};

};

UClass* UTgStringDataItem::pClassPointer = NULL;

// Class TgClientBase.TgStringValueEvent
// 0x001C (0x0090 - 0x0074)
class UTgStringValueEvent : public UTgEventDataItem
{
public:
	struct FString                                     sString;                                          		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgDataItemValue                            Value;                                            		// 0x0084 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4992 );

		return pClassPointer;
	};

};

UClass* UTgStringValueEvent::pClassPointer = NULL;

// Class TgClientBase.TgSynchronizedTimer
// 0x0018 (0x00C4 - 0x00AC)
class UTgSynchronizedTimer : public UGFxObject
{
public:
	int                                                m_nIndex;                                         		// 0x00AC (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPausedByGame : 1;                              		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSuppressCallback : 1;                          		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRunning : 1;                                   		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bPaused : 1;                                    		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	class UTgMoviePlayer*                              m_MP;                                             		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UTgTimerManager*                             m_TimerManager;                                   		// 0x00BC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4993 );

		return pClassPointer;
	};

	bool IsPaused ( );
	bool IsRunning ( );
	void EventCallback ( int nTimerId, unsigned char eEvent );
	void ExpireTimer ( unsigned long bFromCallback );
	void UpdateTimer ( float fElapsed, float fTotal, unsigned long bPaused, unsigned long bFromCallback );
	void StartTimer ( float fSeconds );
};

UClass* UTgSynchronizedTimer::pClassPointer = NULL;

// Class TgClientBase.TgTakeHitEvent
// 0x0008 (0x007C - 0x0074)
class UTgTakeHitEvent : public UTgEventDataItem
{
public:
	int                                                nDamage;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              nDamageAngle;                                     		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4994 );

		return pClassPointer;
	};

};

UClass* UTgTakeHitEvent::pClassPointer = NULL;

// Class TgClientBase.TgTutorialImageEvent
// 0x0010 (0x0084 - 0x0074)
class UTgTutorialImageEvent : public UTgEventDataItem
{
public:
	unsigned long                                      bShow : 1;                                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	struct Fdword                                      nHeaderMsgId;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nImageId;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nMsgId;                                           		// 0x0080 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4995 );

		return pClassPointer;
	};

};

UClass* UTgTutorialImageEvent::pClassPointer = NULL;

// Class TgClientBase.TgTutorialMessageEvent
// 0x0010 (0x0084 - 0x0074)
class UTgTutorialMessageEvent : public UTgEventDataItem
{
public:
	TArray< struct FString >                           arrMessages;                                      		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4996 );

		return pClassPointer;
	};

};

UClass* UTgTutorialMessageEvent::pClassPointer = NULL;

// Class TgClientBase.TgTutorialSubtitleEvent
// 0x0014 (0x0088 - 0x0074)
class UTgTutorialSubtitleEvent : public UTgEventDataItem
{
public:
	int                                                nDuration;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0078 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4997 );

		return pClassPointer;
	};

};

UClass* UTgTutorialSubtitleEvent::pClassPointer = NULL;

// Class TgClientBase.TgUIMarshalEvent
// 0x0008 (0x007C - 0x0074)
class UTgUIMarshalEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pMarshal;                                         		// 0x0074 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4998 );

		return pClassPointer;
	};

};

UClass* UTgUIMarshalEvent::pClassPointer = NULL;

// Class TgClientBase.TgMarshalValueEvent
// 0x0004 (0x0080 - 0x007C)
class UTgMarshalValueEvent : public UTgUIMarshalEvent
{
public:
	int                                                nValue;                                           		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4999 );

		return pClassPointer;
	};

};

UClass* UTgMarshalValueEvent::pClassPointer = NULL;

// Class TgClientBase.TgUIMctsEvent
// 0x0010 (0x0084 - 0x0074)
class UTgUIMctsEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pEvent;                                           		// 0x0074 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pEventBase;                                       		// 0x007C (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5000 );

		return pClassPointer;
	};

};

UClass* UTgUIMctsEvent::pClassPointer = NULL;

// Class TgClientBase.TgUIServerStates
// 0x0028 (0x0088 - 0x0060)
class UTgUIServerStates : public UObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;              		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct Fdword                                      m_nLastMatch;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bQueuedSpectating : 1;                          		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_ePendingPrivilegeCheck;                         		// 0x0070 (0x0001) [0x0000000000000000]              
	struct Fdword                                      m_nMatchPendingPrivilege;                         		// 0x0074 (0x0004) [0x0000000000000000]              
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0078 (0x0008) [0x0000000000000000]              
	class UTgEventDispatcher*                          m_pDispatcher;                                    		// 0x0080 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5001 );

		return pClassPointer;
	};

	class UTgEventDispatcher* GetDispatcher ( );
	void Update ( );
	bool IsQueuedToSpectate ( );
	bool IsSpectating ( );
	bool IsInGame ( );
	bool IsInMatch ( );
	bool IsInQueue ( );
	struct Fdword GetLastMatchId ( );
	struct Fdword GetCurrentQueueId ( );
	struct Fdword GetCurrentMatchId ( );
	void SetPendingPrivilegeAllowed ( struct Fdword nMatchId );
	void SetPendingPrivilegeDenied ( struct Fdword nMatchId );
	void StartPendingPrivilegeCheck ( struct Fdword nMatchId );
	void SetSpectatingState ( unsigned long bSpectating );
	void SetMatchComplete ( struct Fdword nMatchId );
};

UClass* UTgUIServerStates::pClassPointer = NULL;

// Class TgClientBase.TgValueChangeEvent
// 0x0018 (0x008C - 0x0074)
class UTgValueChangeEvent : public UTgEventDataItem
{
public:
	struct FTgDataItemValue                            Previous;                                         		// 0x0074 (0x000C) [0x0000000000000000]              
	struct FTgDataItemValue                            Current;                                          		// 0x0080 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5002 );

		return pClassPointer;
	};

};

UClass* UTgValueChangeEvent::pClassPointer = NULL;

// Class TgClientBase.TgValueDataItemBuyAll
// 0x00A0 (0x010C - 0x006C)
class UTgValueDataItemBuyAll : public UTgValueDataItem
{
public:
	struct FBuyAllLinkage                              linkageStrings;                                   		// 0x006C (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sOverviewLinkage;                                 		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListHeaderLinkage;                               		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListDividerLinkage;                              		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListItemLinkage;                                 		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sScrollBarLinkage;                                		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5003 );

		return pClassPointer;
	};

};

UClass* UTgValueDataItemBuyAll::pClassPointer = NULL;

// Class TgClientBase.TgVendorData
// 0x005C (0x00BC - 0x0060)
class UTgVendorData : public UObject
{
public:
	int                                                m_nCurrentVendorId;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasLoaded : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bItemBrowser : 1;                               		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bSaved : 1;                                     		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bTopTier : 1;                                   		// 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bPhysical : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bSubFilter : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_PopularIsLoaded : 1;                            		// 0x0064 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                m_nPlayerClassId;                                 		// 0x0068 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_Filters;                                        		// 0x006C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PopularItems;                                   		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RecommendedProps;                               		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_advItems[ 0x6 ];                                		// 0x009C (0x0018) [0x0000000000000000]              
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x00B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5004 );

		return pClassPointer;
	};

};

UClass* UTgVendorData::pClassPointer = NULL;

// Class TgClientBase.TgVendorItemEvent
// 0x0008 (0x007C - 0x0074)
class UTgVendorItemEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pValue;                                           		// 0x0074 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5005 );

		return pClassPointer;
	};

};

UClass* UTgVendorItemEvent::pClassPointer = NULL;

// Class TgClientBase.TgVirtualKeyboard
// 0x0038 (0x0098 - 0x0060)
class UTgVirtualKeyboard : public UObject
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                         		// 0x0060 (0x0008) [0x0000000000000000]              
	class UOnlinePlayerInterface*                      m_PlayerInterface;                                		// 0x0068 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0070 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UGFxObject*                                  m_CurrentKeyboardFocusObject;                     		// 0x0078 (0x0008) [0x0000000000000000]              
	int                                                m_nMaxLength;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bShowPopup : 1;                                 		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __OnVirtualKeyboard__Delegate;                    		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5006 );

		return pClassPointer;
	};

	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	void OnGFxVirtualKeyboard ( unsigned long bSuccess, struct FString sText );
	bool ShowKeyboardUIGFx ( class UGFxObject* FocusedTextField, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, unsigned long bShowPopup, struct FString DefaultText, int MaxResultLength );
	class UGFxObject* usc_GetFocusedTextField ( );
	class UGFxObject* GetFocusedTextField ( );
	bool usc_IsShowingKeyboardUI ( );
	bool IsShowingKeyboardUI ( );
	bool ShowKeyboardUI ( struct FScriptDelegate delCallback, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, unsigned long bShowPopup, struct FString DefaultText, int MaxResultLength );
	bool HideKeyboardUI ( );
	bool DoShowKeyboardUI ( struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, unsigned long bShowPopup, struct FString DefaultText, int MaxResultLength );
	void eventCleanup ( );
	void eventInitOSSRef ( );
	void BackupLog ( struct FString sText );
	bool SetInputPopupText ( struct FString sText );
	void HideInputPopup ( );
	void ShowInputPopup ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void OnVirtualKeyboard ( unsigned long bSuccess, struct FString sText );
};

UClass* UTgVirtualKeyboard::pClassPointer = NULL;

// Class TgClientBase.TgBlinder
// 0x0000 (0x0060 - 0x0060)
class UTgBlinder : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5007 );

		return pClassPointer;
	};

	void Draw ( class UCanvas* DestinationCanvas, float BlindnessFactor );
};

UClass* UTgBlinder::pClassPointer = NULL;

// Class TgClientBase.TgGameHUD
// 0x00BC (0x06AC - 0x05F0)
class ATgGameHUD : public ATgClientHUD
{
public:
	class UTgOverlayMoviePlayer*                       m_OverlayMP;                                      		// 0x05F0 (0x0008) [0x0000000000100000]              
	class AActor*                                      m_LastTarget;                                     		// 0x05F8 (0x0008) [0x0000000000000000]              
	int                                                m_nLastVendorTableId;                             		// 0x0600 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPlayingIntro : 1;                              		// 0x0604 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowCursor : 1;                                		// 0x0604 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUpdateMinimapThisTick : 1;                     		// 0x0604 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bIsInMapPingMode : 1;                           		// 0x0604 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bMayEnterVGS : 1;                               		// 0x0604 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bInSpamDetention : 1;                           		// 0x0604 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bRecapMode : 1;                                 		// 0x0604 (0x0004) [0x0000000000000000] [0x00000040] 
	class UTgMiniMap*                                  m_MiniMap;                                        		// 0x0608 (0x0008) [0x0000000000000000]              
	class UTgMiniMap_Targeting*                        m_TargetingMap;                                   		// 0x0610 (0x0008) [0x0000000000000000]              
	float                                              m_fMMUpdateTimer;                                 		// 0x0618 (0x0004) [0x0000000000000000]              
	class UTgBlinder*                                  m_Blinder;                                        		// 0x061C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   c_ShowSound;                                      		// 0x0624 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   c_HideSound;                                      		// 0x062C (0x0008) [0x0000000000000000]              
	struct FString                                     m_HudSceneName;                                   		// 0x0634 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATgRepInfo_Player*                           m_AdventuresPRITemp;                              		// 0x0644 (0x0008) [0x0000000000000000]              
	float                                              m_TargetingMovementScalar;                        		// 0x064C (0x0004) [0x0000000000000000]              
	float                                              m_fLastMinimapUpdateTime;                         		// 0x0650 (0x0004) [0x0000000000000000]              
	float                                              m_fSpamPreventionTime;                            		// 0x0654 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nMaxPingsPerTime;                               		// 0x0658 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fSpamDetentionTime;                             		// 0x065C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nCurrentPingsInTime;                            		// 0x0660 (0x0004) [0x0000000000000000]              
	int                                                m_ObjectiveCount;                                 		// 0x0664 (0x0004) [0x0000000000000000]              
	int                                                m_nGodVideoId;                                    		// 0x0668 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sGodVideoUrl;                                   		// 0x066C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgMuteReportTracking                       m_muteReport;                                     		// 0x067C (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5008 );

		return pClassPointer;
	};

	void LeaveSpamDetention ( );
	void SpamPrevention ( );
	void ShowGodTargeter ( unsigned long bShow );
	void ShowTargetingMap ( unsigned long bShow );
	void CheckForGameType ( );
	void eventInitializeUIData ( );
	int eventGetGameState ( );
	void UpdateMinimapFrame ( );
	void HoverMap ( float X, float Y, struct FString MapName );
	void PingMap ( float X, float Y, struct FString Type, struct FString MapName );
	class UTgMiniMap* GetMapByName ( struct FString MapName );
	void UpdateMMTimer ( float fNew );
	void HideOverlay ( );
	void ShowOverlay ( );
	void ToggleOverlay ( );
	void ToggleMiniMap ( );
	void HideMiniMap ( );
	void ShowMiniMap ( );
	void UpdateMiniMap ( );
	void DrawMiniMap ( class UCanvas* theCanvas );
	void eventPreDemoRewind ( );
	void eventPostRender ( );
	void InitCapturePoints ( );
	void eventSetInitialState ( );
	void eventPostBeginPlay ( );
	void eventLeaveMapPingMode ( );
	void UpdateChatDCPriority ( );
	bool OnInputAxis ( int ControllerId, struct FName Key, float Delta, float DeltaTime );
	void eventEnterMapPingMode ( );
	void ShowCrosshair ( unsigned long bShow );
	void eventDestroyed ( );
	void PlayDeviceFailResponse ( unsigned char failType );
	bool OnRawInputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed );
	void SetGameTypeReady ( int GameType );
	void TogglePassiveMeter ( );
	void ToggleHudSection ( struct FString SectionName );
	void NotifyInGame ( );
	void ToggleHUD ( );
	unsigned char GetVisibilityMode ( );
	void ToggleStoreDisplay ( unsigned long bShow );
	void HideFinalEOMScene ( );
	void HideEOMScene ( );
	void FinishIntro ( );
	void PlayIntro ( );
	void ToggleViewSkipCinematic ( unsigned long bShow );
	void DoReportPlayerMutedImpl ( float nDeltaTime );
	void ReportPlayerMuted ( class UTgEventDataItem* pEvent );
	void HideGameTip ( unsigned long bNoSound );
	void ShowGameTip ( int nTipId, unsigned long bNoSound, unsigned long bPopup );
	void SetWaypointPing ( unsigned long bSetWaypointActive, struct FVector vWaypointLoc, int* nWaypointId );
	void PingWorldLocation ( struct FVector PingLocation, unsigned char Type );
	void PrecacheClass ( struct FString godName, struct FString SkinName );
	void TestAchievement ( );
	void TestPrecache ( int nBotId, int nSkinId, unsigned long bAll );
	void TestEquipLobbyPassiveItems ( int nItemId1, int nItemId2 );
	void TestEquipLobbyActiveItems ( int nItemId1, int nItemId2 );
	void SetRecapMode ( unsigned long bRecap );
	bool GetRecapMode ( );
	void EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState );
	bool UpdateItemStoreItems ( class ATgRepInfo_Player* PRI );
	void UpdateScoreboard ( );
	void ToggleConsoleDeathRecap ( );
	void ToggleConsoleScoreBoard ( );
	void StartMapPingMode ( );
	void StartVGS ( );
	void ToggleScoreboard ( unsigned long bShow );
	void PlayTakeHit ( struct FRotator HitDir, int nDamage, class UClass* DamageType );
	void SellItem ( int nInventoryId );
	void UpgradeItem ( int nItemId, int nUpgradeInvId );
	void PurchaseItem ( int nItemId, int nAmount );
	void CloseSkillScreen ( );
	void OpenSkillScreen ( );
	void OpenVendorUnit ( );
	void OpenVendorMenu ( );
	void DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event );
	void UpdateReleaseTimeRemaining ( float fTimeRemaining );
	void UpdateObjectiveKillCount ( int nObjectiveId, int nTaskForceNum );
	void UpdateObjectiveUI ( struct FObjectiveSpawnData Data );
	void UpdatePlayerReady ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerStatUI ( class ATgPawn* changedPawn );
	bool UpdateGameTypeByQueue ( );
	bool UpdateTeamUI ( );
	bool UpdatePlayerVitalsUI ( class ATgPlayerController* PC );
	bool UpdatePlayerPause ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerSurrender ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerInfoUI ( class ATgRepInfo_Player* PRI );
	bool UpdateGameCapturePointControlUI ( int Index );
	bool UpdateGameScoreUI ( );
	bool UpdateGameClockUI ( );
	void UpdateBuildupTimer ( class ATgDevice* Dev );
	void UpdateRefireTimer ( class ATgDevice* Dev );
	void UpdateHoverTarget ( );
	void UpdateDebugDraws ( );
	void UpdateOverlay ( );
	void Uninit ( );
	void UninitOverlayMoviePlayer ( );
	void InitOverlayMoviePlayer ( );
	void UpdateGammaControls ( );
	void InitMainMoviePlayer ( );
	void UnregisterEngineCallbacks ( );
	void RegisterEngineCallbacks ( );
};

UClass* ATgGameHUD::pClassPointer = NULL;

// Class TgClientBase.TgGameHUDOverlay
// 0x00EC (0x0198 - 0x00AC)
class UTgGameHUDOverlay : public UGFxObject
{
public:
	class UTgOverlayMoviePlayer*                       m_MP;                                             		// 0x00AC (0x0008) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_ReferencedObjects;                              		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPointer >                          m_TagReferences;                                  		// 0x00C4 (0x0010) [0x0000000000101000]              ( CPF_Native )
	TArray< struct FPointer >                          m_OverlayList;                                    		// 0x00D4 (0x0010) [0x0000000000101000]              ( CPF_Native )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x00E4 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGameHUDOverlay.m_OverlayMap
	TArray< struct FTG_HUD_INFO >                      c_ActorInfo;                                      		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDamageInfoData >                   m_MiscDamageInfoQueue;                            		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x014C (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGameHUDOverlay.m_DamageInfoQueues
	int                                                m_AllowedLineCheckIndex;                          		// 0x0194 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5009 );

		return pClassPointer;
	};

	void RemoveReferencedClip ( class UGFxObject* pObj );
	void AddReferencedClip ( class UGFxObject* pObj );
	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( );
	void usc_TweenFinished ( class UGFxObject* Obj );
	void ForceRebuildOverlays ( );
};

UClass* UTgGameHUDOverlay::pClassPointer = NULL;

// Class TgClientBase.TgDataGroup_Game
// 0x003B (0x01D8 - 0x019D)
class UTgDataGroup_Game : public UTgDataChunk
{
public:
	class UTgGameDC_LocalPlayer*                       m_PlayerData;                                     		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgGameDC_Target*                            m_TargetData;                                     		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UTgGameDC_PlayerVitals*                      m_PlayerVitals;                                   		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UTgGameDC_Chat*                              m_Chat;                                           		// 0x01B8 (0x0008) [0x0000000000000000]              
	class UTgGameDC_Game*                              m_GameData;                                       		// 0x01C0 (0x0008) [0x0000000000000000]              
	class UTgGameDC_DeviceList*                        m_DevicesData;                                    		// 0x01C8 (0x0008) [0x0000000000000000]              
	class UTgGameDC_EffectList*                        m_EffectData;                                     		// 0x01D0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5010 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Game::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Chat
// 0x00BF (0x025C - 0x019D)
class UTgGameDC_Chat : public UTgDataChunk
{
public:
	struct FQueueMessage                               c_CurrentMessage;                                 		// 0x01A0 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQueueMessage >                     c_QueuedMessages;                                 		// 0x01D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              c_fProcessTime;                                   		// 0x01E0 (0x0004) [0x0000000000000000]              
	TArray< class UTgChatData* >                       c_DeferredMessages;                               		// 0x01E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct Fdword >                            m_MutedPlayers;                                   		// 0x01F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMessageToken >                     m_MessageTokens;                                  		// 0x0204 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0214 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGameDC_Chat.m_PlayerLastPingTime

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5011 );

		return pClassPointer;
	};

	struct FString eventTokenReplace ( struct FString Message, struct FString Token, struct FString sValue );
	void SubmitDeferredMessages ( int nChannel );
	void PlayVGSSound ( int nMsgId, int nPackId, int nBotId, int nSkinId, struct FString customSuffix );
	void PlayMessageSound ( int nMsgId, int nPackId, unsigned char ePriority );
	void AddDeferredMessage ( class UTgChatData* pData );
	void AddNotifyMsg ( struct FString sMessage, unsigned long bIsMain, int nDelay, int nColor, int nSize, int nFill );
	void AddAlert ( struct FString Message );
	void UpdateMessageSoundQueue ( );
	void AddPopupMsg ( struct FString msg );
	void AddCombatMsg ( struct FString msg );
	void AddLocalChatMsg ( struct FString msg, struct FString senderName, unsigned long bIsMapPing );
	void AddChatMsg ( struct FString msg, struct FString senderName, int nTime, int nChannel, unsigned long bIsFeedback, unsigned long bIsVGS, unsigned long bOnlyIfOpen, unsigned long bHideSender, unsigned long bNew );
	void UpdatePriorityQueue ( float Delay );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Chat::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Device
// 0x0013 (0x01B0 - 0x019D)
class UTgGameDC_Device : public UTgDataChunk
{
public:
	int                                                m_nDeviceInstanceId;                              		// 0x01A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bWasShowingAltIcon : 1;                         		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgSynchronizedTimer*                        m_CooldownTimer;                                  		// 0x01A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5012 );

		return pClassPointer;
	};

	void usc_set_cast_mode ( int nCastMode );
	void usc_get_mode_tooltip ( int nRank );
	void NotifyMapChange ( );
	void UpdateCastMode ( );
	void UpdateIcon ( class ATgDevice* Dev, unsigned long ForceUpdate );
	void UpdateInstanceCount ( class ATgDevice* Dev );
	void UpdateHasBeenTrained ( class ATgDevice* Dev );
	void UpdatePtsAlloc ( class ATgDevice* Dev );
	void UpdateToggleState ( class ATgDevice* Dev );
	void UpdateCooldown ( class ATgDevice* Dev );
	void UpdateCanFire ( class ATgDevice* Dev );
	void UpdateSelected ( unsigned long bSelected );
	void UpdateRelicValues ( class ATgDevice* Dev );
	void UpdateValues ( class ATgDevice* Dev );
	void DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Device::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_DeviceList
// 0x00CB (0x0268 - 0x019D)
class UTgGameDC_DeviceList : public UTgDataChunk
{
public:
	class UTgGameDC_Device*                            m_DeviceList[ 0x19 ];                             		// 0x01A0 (0x00C8) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5013 );

		return pClassPointer;
	};

	void SetEmpty ( unsigned char eSlot );
	void UpdatePtsAlloc ( class ATgDevice* Dev );
	void UpdateToggleState ( class ATgDevice* Dev );
	void UpdateSelected ( class ATgDevice* Dev );
	void UpdateDevice ( class ATgDevice* Dev );
	void DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event );
	class UTgGameDC_Device* GetDeviceChunk ( class ATgDevice* Dev );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_DeviceList::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Effect
// 0x000B (0x01A8 - 0x019D)
class UTgGameDC_Effect : public UTgDataChunk
{
public:
	class UTgSynchronizedTimer*                        m_lifeTimer;                                      		// 0x01A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5014 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Effect::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_EffectList
// 0x0103 (0x02A0 - 0x019D)
class UTgGameDC_EffectList : public UTgDataChunk
{
public:
	class UTgGameDC_Effect*                            m_EffectList[ 0x20 ];                             		// 0x01A0 (0x0100) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5015 );

		return pClassPointer;
	};

	void UpdateEffects ( class ATgEffectManager* effectManager, int indexChanged );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_EffectList::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Game
// 0x009B (0x0238 - 0x019D)
class UTgGameDC_Game : public UTgDataChunk
{
public:
	class UTgSynchronizedTimer*                        m_GameTimer;                                      		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_TeamDatas;                                      		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_BotObjective1;                                  		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_BotObjective2;                                  		// 0x01B8 (0x0008) [0x0000000000000000]              
	unsigned char                                      currentGameType;                                  		// 0x01C0 (0x0001) [0x0000000000000000]              
	int                                                m_nPauseType;                                     		// 0x01C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_nPauseTaskForce : 1;                            		// 0x01C8 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  m_GameCustomVals;                                 		// 0x01CC (0x0008) [0x0000000000000000]              
	TArray< class UTgGameDC_Team* >                    m_ValidTaskForces;                                		// 0x01D4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgGameDCGameHandles                        m_Handles;                                        		// 0x01E4 (0x0054) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5016 );

		return pClassPointer;
	};

	void eventOnTaskForceDataUpdate ( int Index );
	void eventSetupTaskForceData ( int Index );
	void asc_OnTaskForceDataUpdate ( int Index );
	void asc_SetupTaskForceData ( int Index );
	void OnRankedTeamUpdate ( class UTgEventDataItem* pEvent );
	void OnFogNextPhase ( class UTgEventDataItem* pEvent );
	void OnFogGrowTime ( class UTgEventDataItem* pEvent );
	void OnTaskForceUpdate ( class UTgEventDataItem* pEvent );
	void OnPauseTimerUpdate ( class UTgEventDataItem* pEvent );
	void OnSurrenderTimerUpdate ( class UTgEventDataItem* pEvent );
	void OnRoundUIUpdate ( class UTgEventDataItem* pEvent );
	bool UpdateGame ( class ATgRepInfo_Game* GameRepInfo );
	void UpdateRound ( int nRound );
	void UpdateEncounter ( struct FString sRoundString );
	void UpdateGameCapturePoint ( int Index, int TaskForce );
	void UpdateGameClock ( );
	void UpdatePauseStatus ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Game::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_MapEntity
// 0x000F (0x01AC - 0x019D)
class UTgGameDC_MapEntity : public UTgDataChunk
{
public:
	int                                                m_nPawnId;                                        		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                m_nBotId;                                         		// 0x01A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bBotSpecificDataSet : 1;                        		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5017 );

		return pClassPointer;
	};

	void SetBotSpecificData ( int nBotId );
	bool SetObjectiveData ( class ATgPawn* PRI, struct FString sEntityName, int nLane, unsigned long bShow );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_MapEntity::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Player
// 0x017C (0x0328 - 0x01AC)
class UTgGameDC_Player : public UTgGameDC_MapEntity
{
public:
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                    		// 0x01AC (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_UltimateTimer;                                  		// 0x01B4 (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_Relic1Timer;                                    		// 0x01BC (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_Relic2Timer;                                    		// 0x01C4 (0x0008) [0x0000000000000000]              
	float                                              m_PrevUltTimer;                                   		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              m_PrevRelic1Timer;                                		// 0x01D0 (0x0004) [0x0000000000000000]              
	float                                              m_PrevRelic2Timer;                                		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_ItemStoreArray;                                 		// 0x01D8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_ActiveItemArray;                                		// 0x01E0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_ConsumableArray;                                		// 0x01E8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_EffectArray;                                    		// 0x01F0 (0x0008) [0x0000000000000000]              
	TArray< struct FTgGameDC_PlayerEffectEntry >       m_EffectData;                                     		// 0x01F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_DeviceArray;                                    		// 0x0208 (0x0008) [0x0000000000000000]              
	TArray< struct FTgGameDC_DeviceEntry >             m_DeviceData;                                     		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eUpdateState;                                   		// 0x0220 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  m_PlayerCustomValsInt;                            		// 0x0224 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_PlayerCustomValsFloat;                          		// 0x022C (0x0008) [0x0000000000000000]              
	class UTgGameDC_PlayerStats*                       m_PlayerStats;                                    		// 0x0234 (0x0008) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerIdHandle;                                 		// 0x023C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_consoleIdHandle;                                		// 0x0240 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerNameHandle;                               		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_displayNameHandle;                              		// 0x0248 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_profileNameHandle;                              		// 0x024C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerShieldPctHandle;                          		// 0x0250 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerHealthPctHandle;                          		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerPowerPctHandle;                           		// 0x0258 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerShieldHandle;                             		// 0x025C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerHealthHandle;                             		// 0x0260 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerHealthMaxHandle;                          		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerPowerHandle;                              		// 0x0268 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerPowerMaxHandle;                           		// 0x026C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_bFriendlyHandle;                                		// 0x0270 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_bVisibleHandle;                                 		// 0x0274 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_levelHandle;                                    		// 0x0278 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerClassIdHandle;                            		// 0x027C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_matchKillsHandle;                               		// 0x0280 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_matchDeathsHandle;                              		// 0x0284 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_matchAssistsHandle;                             		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_botKillsHandle;                                 		// 0x028C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_healingHandle;                                  		// 0x0290 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_reviveTimerHandle;                              		// 0x0294 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_ultimateTimerHandle;                            		// 0x0298 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_relic1TimerHandle;                              		// 0x029C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_relic2TimerHandle;                              		// 0x02A0 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_matchGoldHandle;                                		// 0x02A4 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_currentGoldHandle;                              		// 0x02A8 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_goldPerMinHandle;                               		// 0x02AC (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_xpPerMinHandle;                                 		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_xpNeededHandle;                                 		// 0x02B4 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_playerDmgHandle;                                		// 0x02B8 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_botDmgHandle;                                   		// 0x02BC (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_structDmgHandle;                                		// 0x02C0 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_powerPoolTypeHandle;                            		// 0x02C4 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_magicalPercentHandle;                           		// 0x02C8 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_physicalPercentHandle;                          		// 0x02CC (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_defensePercentHandle;                           		// 0x02D0 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_utilityPercentHandle;                           		// 0x02D4 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_surrenderStatusHandle;                          		// 0x02D8 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_pauseStatusHandle;                              		// 0x02DC (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_ultimateReadyHandle;                            		// 0x02E0 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_ultimateInSecsHandle;                           		// 0x02E4 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_relic1InSecsHandle;                             		// 0x02E8 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_relic2InSecsHandle;                             		// 0x02EC (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_bChatMutedHandle;                               		// 0x02F0 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_isLocalPlayerHandle;                            		// 0x02F4 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_isDisconnectedHandle;                           		// 0x02F8 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_pawnIdHandle;                                   		// 0x02FC (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_wardsPlacedHandle;                              		// 0x0300 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_timeSpentDeadHandle;                            		// 0x0304 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_xpPctHandle;                                    		// 0x0308 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_isBotHandle;                                    		// 0x030C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_dmgMitigated;                                   		// 0x0310 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_characterRankedFrame;                           		// 0x0314 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_portalId;                                       		// 0x0318 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_matchFlagCaptures;                              		// 0x031C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          m_matchFlagReturns;                               		// 0x0320 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSendRelicCooldowns : 1;                        		// 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5018 );

		return pClassPointer;
	};

	bool eventIsPlayerMuted ( struct FUniqueNetId ConsoleId );
	void USC_ForceStatsUpdate ( );
	void NotifyMapChange ( );
	void UpdateItemStoreItems ( class ATgRepInfo_Player* PRI );
	void UpdateStats ( class ATgPawn* changedPawn );
	void UpdatePlayer ( class ATgRepInfo_Player* PRI );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Player::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_LocalPlayer
// 0x0038 (0x0360 - 0x0328)
class UTgGameDC_LocalPlayer : public UTgGameDC_Player
{
public:
	struct FTgGameDCPlayerHandles                      m_Handles;                                        		// 0x0328 (0x0030) [0x0000000000000000]              
	struct FTgGameDCPlayerData                         m_Data;                                           		// 0x0358 (0x0004) [0x0000000000000000]              
	int                                                m_PrevTaskforce;                                  		// 0x035C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5019 );

		return pClassPointer;
	};

	void UpdateTutorialOptions ( unsigned long bDisableSkills, unsigned long bDisableStore, unsigned long bDisableActives );
	void PostDataUpdatedEvent ( );
	void NotifyMapChange ( );
	void UpdateCourierData ( class ATgPawn* Pawn );
	void UpdateSpectatorViewTarget ( class UTgGameDC_MapEntity* entity );
	void SetVendorItemList ( TArray< int > nItemIds );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_LocalPlayer::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Minion
// 0x0000 (0x0328 - 0x0328)
class UTgGameDC_Minion : public UTgGameDC_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5020 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_Minion::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Turret
// 0x0000 (0x0328 - 0x0328)
class UTgGameDC_Turret : public UTgGameDC_Minion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5021 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_Turret::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_PlayerStats
// 0x0008 (0x01B4 - 0x01AC)
class UTgGameDC_PlayerStats : public UTgGameDC_MapEntity
{
public:
	class UGFxObject*                                  m_StatsArray;                                     		// 0x01AC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5022 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void UpdateStats ( class ATgPawn* changedPawn );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_PlayerStats::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_PlayerVitals
// 0x00A8 (0x0254 - 0x01AC)
class UTgGameDC_PlayerVitals : public UTgGameDC_MapEntity
{
public:
	class UTgGameDC_MapEntity*                         m_pCurrentObjectiveDC;                            		// 0x01AC (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     m_pCurrentObjectivePawn;                          		// 0x01B4 (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                    		// 0x01BC (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_RefireTimer;                                    		// 0x01C4 (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_RecallTimer;                                    		// 0x01CC (0x0008) [0x0000000000000000]              
	struct FTgDCPlayerVitalsHandles                    m_Handles;                                        		// 0x01D4 (0x0080) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5023 );

		return pClassPointer;
	};

	void UpdatePawnVitals ( class ATgPawn_Character* Pawn );
	void OnDamageEvent ( class UTgEventDataItem* pEvent );
	void CheckObjectivePawnSetup ( struct Fdword nPawnId );
	void SetNearestObjective ( class ATgPawn* pPawn );
	void UpdateCoreStats ( );
	void UpdateDamageDealt ( );
	void UpdateDamageTaken ( );
	void UpdateDamageRecap ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_PlayerVitals::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_RespawnLocation
// 0x0000 (0x01AC - 0x01AC)
class UTgGameDC_RespawnLocation : public UTgGameDC_MapEntity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5024 );

		return pClassPointer;
	};

};

UClass* UTgGameDC_RespawnLocation::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Tower
// 0x0000 (0x01AC - 0x01AC)
class UTgGameDC_Tower : public UTgGameDC_MapEntity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5025 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Tower::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Target
// 0x0003 (0x01A0 - 0x019D)
class UTgGameDC_Target : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5026 );

		return pClassPointer;
	};

	bool UpdateTarget ( class AActor* NewTarget, unsigned long bHovered );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Target::pClassPointer = NULL;

// Class TgClientBase.TgGameDC_Team
// 0x009F (0x023C - 0x019D)
class UTgGameDC_Team : public UTgDataChunk
{
public:
	int                                                m_nTaskForce;                                     		// 0x01A0 (0x0004) [0x0000000000000000]              
	TArray< class UTgGameDC_Player* >                  m_Members;                                        		// 0x01A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nMaxMemberCount;                                		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_MemberList;                                     		// 0x01B8 (0x0008) [0x0000000000000000]              
	class UTgGameDC_MapEntity*                         m_Guardian;                                       		// 0x01C0 (0x0008) [0x0000000000000000]              
	class UTgGameDC_Tower*                             m_Towers[ 0x9 ];                                  		// 0x01C8 (0x0048) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_SurrenderTimer;                                 		// 0x0210 (0x0008) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_PauseTimer;                                     		// 0x0218 (0x0008) [0x0000000000000000]              
	int                                                m_UpdatePlayersTeamsTimeout;                      		// 0x0220 (0x0004) [0x0000000000000000]              
	TArray< float >                                    m_SiegeHealths;                                   		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_TFCustomVals;                                   		// 0x0234 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5027 );

		return pClassPointer;
	};

	void PostDataUpdatedEvent ( );
	void SetupMemberData ( int nIndex );
	bool UpdateMembersTick ( );
	class UTgGameDC_Tower* FindTower ( int nPawnId, int* nNextIndex );
	class UTgGameDC_Player* FindPlayer ( int nPawnId, int nPlayerCount );
	void ParseUpdatablePlayers ( class ATgRepInfo_TaskForce* tfri, TArray< class ATgRepInfo_Player* >* arrPlayers );
	bool UpdatePlayerPause ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerSurrender ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerItemStoreItems ( class ATgRepInfo_Player* PRI );
	bool UpdatePlayerStat ( class ATgPawn* changedPawn );
	int UpdateTaskForce ( class ATgRepInfo_TaskForce* tfri );
	bool UpdateMembers ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgGameDC_Team::pClassPointer = NULL;

// Class TgClientBase.TgGFxHomeMenuScreen
// 0x00C4 (0x0348 - 0x0284)
class UTgGFxHomeMenuScreen : public UTgGfxScene
{
public:
	struct FStreamTimeData                             streamDataPC;                                     		// 0x0284 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_FeatureButtonPrompts;                           		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinRotatorPrompts;                             		// 0x02DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SimulmediaButton;                               		// 0x02E4 (0x0008) [0x0000000000000000]              
	TArray< class UTgGFxObject* >                      m_MenuButtons;                                    		// 0x02EC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FHomeMenuItem >                     m_MenuItems;                                      		// 0x02FC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSceneModelData >                   m_ModelDataList;                                  		// 0x030C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nSeasonalCount;                                 		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentModelBotRefId;                          		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentModelItemId;                            		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                m_nPreloadModelBotRefId;                          		// 0x0328 (0x0004) [0x0000000000000000]              
	int                                                m_nPreloadModelItemId;                            		// 0x032C (0x0004) [0x0000000000000000]              
	int                                                m_nCurCamPos;                                     		// 0x0330 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bFirstModel : 1;                                		// 0x0334 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSimulmediaBtnActive : 1;                       		// 0x0334 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowSimulmediaBtn : 1;                         		// 0x0334 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nCloseCamIndex;                                 		// 0x0338 (0x0004) [0x0000000000000000]              
	int                                                m_nMediumCamIndex;                                		// 0x033C (0x0004) [0x0000000000000000]              
	int                                                m_nLargeCamIndex;                                 		// 0x0340 (0x0004) [0x0000000000000000]              
	int                                                m_nExtraLargeCamIndex;                            		// 0x0344 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5028 );

		return pClassPointer;
	};

	void eventUpdateSimulmediaOpportunities ( float DeltaTime );
	void eventRemoveSimulmediaDelegate ( );
	void eventSetOnPostAdvanceDelegate ( );
	void OnSimulmediaPopupClosed ( class UTgEventDataItem* pEvent );
	void OnSimulmediaPopupOpened ( class UTgEventDataItem* pEvent );
	void OnEsportsMatchupDataReceived ( class UTgEventDataItem* pEvent );
	void OnQueueStateChange ( class UTgEventDataItem* pEvent );
	void USC_ForwardFeature ( int pItemType, struct FString pItemData, struct FString pItemData2, int nLocationId );
	class UTgGFxObject* FindNavigationButton ( int hmiActionId, int hmiActionDataId );
	void OnOpportunityUpdated ( );
	void SendLobbyCamEvent ( int EventType, int camType );
	void UpdateQuests ( class UTgEventDataItem* pEvent );
	void onFinishModelLoad ( class UTgEventDataItem* pEvent );
	void UpdatePreviewModel ( int Index );
	void UpdateImage ( class UTgEventDataItem* pEvent );
	void UpdateFeatures ( class UTgEventDataItem* pEvent );
	void UpdateCallouts ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
	void ApplyGemPrices ( class UGFxObject* pArray );
	void OnNavigateButton ( unsigned long isMenu, int Index );
	void UpdateMenuButtons ( class UTgEventDataItem* pEvent );
	void PopulateMenuData ( );
};

UClass* UTgGFxHomeMenuScreen::pClassPointer = NULL;

// Class TgClientBase.TgGfxHudChatBase
// 0x0110 (0x0394 - 0x0284)
class UTgGfxHudChatBase : public UTgGfxScene
{
public:
	int                                                m_nIndex;                                         		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nWidth;                                         		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nScroll;                                        		// 0x028C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInput : 1;                                     		// 0x0290 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowCombat : 1;                                		// 0x0290 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAddToCombat : 1;                               		// 0x0290 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bCanChat : 1;                                   		// 0x0290 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              m_fBuffer;                                        		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              m_fFadeDelay;                                     		// 0x0298 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sRemaining;                                     		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgChatData*                                 m_pData;                                          		// 0x02AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BufferText;                                     		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextMovies[ 0x8 ];                              		// 0x02BC (0x0040) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextFields[ 0x8 ];                              		// 0x02FC (0x0040) [0x0000000000000000]              
	float                                              m_fFadeTimer[ 0x8 ];                              		// 0x033C (0x0020) [0x0000000000000000]              
	TArray< struct FString >                           m_CombatLog;                                      		// 0x035C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgChatMessage >                    m_Messages;                                       		// 0x036C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_TabGroup;                                       		// 0x037C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TabBtn[ 0x2 ];                                  		// 0x0384 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5029 );

		return pClassPointer;
	};

	bool ShouldShowCombat ( );
	void CachePrivilegeInfo ( );
	bool CanSeeUserMessages ( );
	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGfxHudChatBase::pClassPointer = NULL;

// Class TgClientBase.TgGfxPlayerSkills
// 0x0050 (0x02D4 - 0x0284)
class UTgGfxPlayerSkills : public UTgGfxScene
{
public:
	class UTgGfxVGSData*                               m_pRoot;                                          		// 0x0284 (0x0008) [0x0000000000000000]              
	class UTgGfxVGSData*                               m_pCurrent;                                       		// 0x028C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIntercept : 1;                                 		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bOpen : 1;                                      		// 0x0294 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCloseSet : 1;                                  		// 0x0294 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_curIndex;                                       		// 0x0298 (0x0004) [0x0000000000000000]              
	struct FKeyBind                                    m_keyBindOpen;                                    		// 0x029C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FKeyBind                                    m_keyBindClose;                                   		// 0x02B8 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5030 );

		return pClassPointer;
	};

	void OnDeviceLevelUp ( class UTgEventDataItem* pEvent );
	void OnToggleSkillScreen ( class UTgEventDataItem* pEvent );
	void OnOffhandSlotReleased ( class UTgEventDataItem* pEvent );
	void OnOffhandSlotPressed ( class UTgEventDataItem* pEvent );
	bool OnInput ( struct FPointer pInputEvent );
	void LevelUpOffhandSlot ( int eqp, class ATgPlayerController* PC );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGfxPlayerSkills::pClassPointer = NULL;

// Class TgClientBase.TgGfxVGS
// 0x0198 (0x041C - 0x0284)
class UTgGfxVGS : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_Label[ 0xF ];                                   		// 0x0284 (0x0078) [0x0000000000000000]              
	class UTgGFxObject*                                m_Keybind[ 0xF ];                                 		// 0x02FC (0x0078) [0x0000000000000000]              
	class UTgGFxObject*                                m_ListItem[ 0xF ];                                		// 0x0374 (0x0078) [0x0000000000000000]              
	class UTgGfxVGSData*                               m_pRoot;                                          		// 0x03EC (0x0008) [0x0000000000000000]              
	class UTgGfxVGSData*                               m_pCurrent;                                       		// 0x03F4 (0x0008) [0x0000000000000000]              
	int                                                m_VGSPlatform;                                    		// 0x03FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_DisplayPrompts;                                 		// 0x0400 (0x0008) [0x0000000000000000]              
	int                                                m_stepIndex;                                      		// 0x0408 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_CloseInputs;                                    		// 0x040C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5031 );

		return pClassPointer;
	};

	bool OnInput ( struct FPointer tgInput );
	void usc_CloseScene ( );
	void usc_UnsetVGS ( unsigned long bRemoveInput );
	void usc_ForceInput ( struct FString Input );
	void CloseVGS ( class UTgEventDataItem* pEvent );
	void Unset ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxVGS::pClassPointer = NULL;

// Class TgClientBase.TgGfxVGSData
// 0x004C (0x00AC - 0x0060)
class UTgGfxVGSData : public UObject
{
public:
	int                                                m_nId;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                m_nParentId;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                m_nScopeVal;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLabel;                                         		// 0x006C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOutput;                                        		// 0x007C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sKeybind;                                       		// 0x008C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgGfxVGSData* >                     m_Children;                                       		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5032 );

		return pClassPointer;
	};

};

UClass* UTgGfxVGSData::pClassPointer = NULL;

// Class TgClientBase.TgMiniMap
// 0x0EE0 (0x0F40 - 0x0060)
class UTgMiniMap : public UObject
{
public:
	class UTexture2D*                                  m_MinimapMinionIcon;                              		// 0x0060 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  m_MinimapFireMinionIcon;                          		// 0x0068 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  m_MinimapMinionOutline;                           		// 0x0070 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  m_MinimapFireMinionOutline;                       		// 0x0078 (0x0008) [0x0000000000000000]              
	int                                                m_nMiniMapMode;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bShouldDisplayMiniMap : 1;                      		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasMiniMapTexture : 1;                         		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRequiresLOS : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bUseFlashSizing : 1;                            		// 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bSpectating : 1;                                		// 0x0084 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              m_fLastUpdateTime;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MiniMapBaseMIC;                                 		// 0x008C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MiniMapMIC;                                     		// 0x0094 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_DeathFogBaseMIC;                                		// 0x009C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_DeathFogMIC;                                    		// 0x00A4 (0x0008) [0x0000000000000000]              
	class UTexture2DDynamic*                           m_DynamicMask;                                    		// 0x00AC (0x0008) [0x0000000000000000]              
	int                                                m_nMaskSize;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              m_fIconScale;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   m_vMapLocation;                                   		// 0x00BC (0x0008) [0x0000000000000000]              
	int                                                m_nMapSize;                                       		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_MiniMapRender;                                  		// 0x00C8 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class ATgPlayerController*                         m_OwnerPC;                                        		// 0x00D0 (0x0008) [0x0000000000000000]              
	int                                                m_nWorldMapSize;                                  		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPinging;                                     		// 0x00DC (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPingingEnemy;                                		// 0x00E4 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICRetreat;                                     		// 0x00EC (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICRetreatEnemy;                                		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAlert;                                       		// 0x00FC (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAlertEnemy;                                  		// 0x0104 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAlertSilent;                                 		// 0x010C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICLocalPlayer;                                 		// 0x0114 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICLocalSpectator;                              		// 0x011C (0x0008) [0x0000000000000000]              
	float                                              PingUpdateX;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	float                                              PingUpdateY;                                      		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              m_fForceOpacity;                                  		// 0x012C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_pMapFrame;                                      		// 0x0130 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPlayer[ 0x6 ];                               		// 0x0138 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICMinion[ 0x6 ];                               		// 0x0168 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICFireMinion[ 0x6 ];                           		// 0x0198 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICMinionOni[ 0x6 ];                            		// 0x01C8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICFireMinionOni[ 0x6 ];                        		// 0x01F8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICWard[ 0x6 ];                                 		// 0x0228 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICWardSentry[ 0x6 ];                           		// 0x0258 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICVulcanThumper[ 0x6 ];                        		// 0x0288 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICChangECourier[ 0x6 ];                        		// 0x02B8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICKaldr[ 0x6 ];                                		// 0x02E8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICBabaYagaHut[ 0x6 ];                          		// 0x0318 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_micTiamatA04a[ 0x6 ];                           		// 0x0348 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICGilgameshPSV[ 0x6 ];                         		// 0x0378 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAhMuzenCabHive[ 0x6 ];                       		// 0x03A8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICCapturePoint[ 0x6 ];                         		// 0x03D8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICCapturePointContest[ 0x6 ];                  		// 0x0408 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPortal[ 0x6 ];                               		// 0x0438 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTimedPortal[ 0x6 ];                          		// 0x0468 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICLanePusher[ 0x6 ];                           		// 0x0498 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICArachneWebWall[ 0x6 ];                       		// 0x04C8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICSylvanusBloom[ 0x6 ];                        		// 0x04F8 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICAhPuchCorpse[ 0x6 ];                         		// 0x0528 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICCamazotzEssence[ 0x6 ];                      		// 0x0558 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICPersephonePlant[ 0x6 ];                      		// 0x0588 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICDajiFox;                                     		// 0x05B8 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICFlagCTF[ 0x6 ];                              		// 0x05C0 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICMinotaur[ 0x6 ];                             		// 0x05F0 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTower[ 0x6 ];                                		// 0x0620 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTitan[ 0x6 ];                                		// 0x0650 (0x0030) [0x0000000000000000]              
	struct FBuffMonsterMIC                             m_MICPhoenix[ 0x6 ];                              		// 0x0680 (0x0090) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICJungleShrine;                                		// 0x0710 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTitanMultiTeam[ 0x6 ];                       		// 0x0718 (0x0030) [0x0000000000000000]              
	struct FBuffMonsterMIC                             m_MICPhoenixMultiTeam[ 0x6 ];                     		// 0x0748 (0x0090) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICMonster;                                     		// 0x07D8 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                m_PortalLinkColor[ 0x6 ];                         		// 0x07E0 (0x0060) [0x0000000000000000]              
	struct FBuffMonsterMIC                             m_MICBuffMonster[ 0x39 ];                         		// 0x0840 (0x0558) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICTowerDestroyed;                              		// 0x0D98 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_PlayerBackground[ 0x6 ];                        		// 0x0DA0 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_TowerAttackBackground[ 0x6 ];                   		// 0x0DD0 (0x0030) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICDeviceVolume[ 0x2 ];                         		// 0x0E00 (0x0010) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_MICOracleWard[ 0x6 ];                           		// 0x0E10 (0x0030) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0E40 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgMiniMap.m_IconMap
	struct FBitArray_Mirror                            m_MaskPoints;                                     		// 0x0E88 (0x0020) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      m_Orientation;                                    		// 0x0EA8 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_LocalTeam;                                      		// 0x0EA9 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_VisibilityMode;                                 		// 0x0EAA (0x0001) [0x0000000000000000]              
	unsigned char                                      bUpdateCapturePoint[ 0x5 ];                       		// 0x0EAB (0x0005) [0x0000000000000000]              
	float                                              m_PingMovementScaling;                            		// 0x0EB0 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x0EB4 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgMiniMap.m_EntityMap
	TArray< struct FLayerIndex >                       m_PortalLayeringIdx;                              		// 0x0EFC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FLayerIndex >                       m_LayeringIdx;                                    		// 0x0F0C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FMiniMapEntity >                    m_TeleportationEntities;                          		// 0x0F1C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                teleportionIdx;                                   		// 0x0F2C (0x0004) [0x0000000000000000]              
	TArray< struct FMiniMapPingInfo >                  m_IndependentPings;                               		// 0x0F30 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5033 );

		return pClassPointer;
	};

	bool eventCheckSpectatorState ( );
	void UpdateMapSize ( int newX );
	void UpdateMiniMapTexture ( );
	void CreateMiniMapTexture ( );
	void RemoveAllEntities ( );
	bool VerifyMapLocation ( float X, float Y );
	void GetRepInfosForLocation ( struct FVector mapLoc, TArray< class AReplicationInfo* >* repInfos );
	struct FVector WorldToMap ( struct FVector Loc );
	struct FVector MapToWorld ( struct FVector Loc );
	void ClearHover ( );
	void HoverMap ( float X, float Y );
	void PingMap ( float X, float Y, unsigned char Pt );
	bool ShouldRender ( );
	void RemoveWaypoint ( int nWaypointId );
	void PlaceWaypoint ( struct FVector vWaypointLoc, int* nWaypointId );
	void SetWaypointPing ( unsigned long bSetWaypointActive, struct FVector vWaypointLoc, int* nWaypointId );
	void PingWorldLocation ( struct FVector PingLocation, unsigned char Pt );
	void Init ( class ATgPlayerController* PC );
	void Draw ( class UCanvas* theCanvas );
	void UpdateThreaded ( );
	void Update ( );
};

UClass* UTgMiniMap::pClassPointer = NULL;

// Class TgClientBase.TgMiniMap_Targeting
// 0x0030 (0x0F70 - 0x0F40)
class UTgMiniMap_Targeting : public UTgMiniMap
{
public:
	class UMaterialInstanceConstant*                   m_MICWardTarget[ 0x6 ];                           		// 0x0F40 (0x0030) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5034 );

		return pClassPointer;
	};

};

UClass* UTgMiniMap_Targeting::pClassPointer = NULL;

// Class TgClientBase.TgOverlayMoviePlayer
// 0x000C (0x0204 - 0x01F8)
class UTgOverlayMoviePlayer : public UGFxMoviePlayer
{
public:
	unsigned long                                      m_bEnableOverlay : 1;                             		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgGameHUDOverlay*                           m_mcOverlay;                                      		// 0x01FC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5035 );

		return pClassPointer;
	};

	void eventOnClose ( );
	void eventusc_TweenFinished ( class UGFxObject* Obj );
	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	struct FString usc_TranslateMsg ( struct FString Identifier, struct FString SectionName );
};

UClass* UTgOverlayMoviePlayer::pClassPointer = NULL;

// Class TgClientBase.TgConfigDC_Cached
// 0x0003 (0x01A0 - 0x019D)
class UTgConfigDC_Cached : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5036 );

		return pClassPointer;
	};

	void PrecacheData ( );
	class UGFxObject* CreateDataObject ( int nId );
	bool usc_load_data ( int nId );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgConfigDC_Cached::pClassPointer = NULL;

// Class TgClientBase.TgConfigDC_Classes
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_Classes : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5037 );

		return pClassPointer;
	};

	class UGFxObject* CreateDataObject ( int nId );
};

UClass* UTgConfigDC_Classes::pClassPointer = NULL;

// Class TgClientBase.TgConfigDC_GameTip
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_GameTip : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5038 );

		return pClassPointer;
	};

	class UGFxObject* CreateDataObject ( int nId );
};

UClass* UTgConfigDC_GameTip::pClassPointer = NULL;

// Class TgClientBase.TgConfigDC_Items
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_Items : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5039 );

		return pClassPointer;
	};

	class UGFxObject* CreateDataObject ( int nId );
};

UClass* UTgConfigDC_Items::pClassPointer = NULL;

// Class TgClientBase.TgConfigDC_LangMessages
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_LangMessages : public UTgConfigDC_Cached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5040 );

		return pClassPointer;
	};

	bool usc_load_data ( int nId );
};

UClass* UTgConfigDC_LangMessages::pClassPointer = NULL;

// Class TgClientBase.TgDataGroup_Config
// 0x0023 (0x01C0 - 0x019D)
class UTgDataGroup_Config : public UTgDataChunk
{
public:
	class UTgConfigDC_LangMessages*                    m_MessageData;                                    		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgConfigDC_Classes*                         m_ClassData;                                      		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UTgConfigDC_Items*                           m_ItemData;                                       		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UTgConfigDC_GameTip*                         m_GameTipData;                                    		// 0x01B8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5041 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Config::pClassPointer = NULL;

// Class TgClientBase.TgGFxEvent
// 0x0001 (0x00AD - 0x00AC)
class UTgGFxEvent : public UGFxObject
{
public:
	unsigned char                                      m_eType;                                          		// 0x00AC (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5042 );

		return pClassPointer;
	};

	class UGFxObject* GetTarget ( class UClass* pClass );
};

UClass* UTgGFxEvent::pClassPointer = NULL;

// Class TgClientBase.TgGFxMouseEvent
// 0x0003 (0x00B0 - 0x00AD)
class UTgGFxMouseEvent : public UTgGFxEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5043 );

		return pClassPointer;
	};

	unsigned char GetButtonState ( );
	unsigned char GetButton ( );
	int GetWheelAmount ( );
	int GetY ( );
	int GetX ( );
};

UClass* UTgGFxMouseEvent::pClassPointer = NULL;

// Class TgClientBase.TgGFxValidationEvent
// 0x0007 (0x00B4 - 0x00AD)
class UTgGFxValidationEvent : public UTgGFxEvent
{
public:
	struct Fdword                                      m_nValidationType;                                		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5044 );

		return pClassPointer;
	};

	bool GetDataBool ( );
	struct FString GetDataString ( );
	float GetDataFloat ( );
	int GetDataInt ( );
	class UGFxObject* GetDataObject ( );
	bool HasInvalidAll ( struct Fdword Flags );
	bool HasInvalidAny ( struct Fdword Flags );
	struct Fdword GetValidationType ( );
};

UClass* UTgGFxValidationEvent::pClassPointer = NULL;

// Class TgClientBase.TgGFxMouse
// 0x0000 (0x00AC - 0x00AC)
class UTgGFxMouse : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5045 );

		return pClassPointer;
	};

	int GetGFxConst ( struct FPointer pField );
	int GetMouseIndex ( );
	void SetCursorType ( int nCursorType, int nMouseIndex );
	struct FVector2D GetMousePosition ( int nMouseIndex );
	class UGFxObject* GetTopMostEntity ( );
	int GetButtonState ( int nMouseIndex );
	int HideMouse ( );
	int ShowMouse ( );
	void RemoveListener ( class UGFxObject* pListener );
	void AddListener ( class UGFxObject* pListener );
};

UClass* UTgGFxMouse::pClassPointer = NULL;

// Class TgClientBase.TgGFxSelection
// 0x0000 (0x00BC - 0x00BC)
class UTgGFxSelection : public UTgGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5046 );

		return pClassPointer;
	};

	struct Fdword GetControllerMaskByFocusGroup ( int nFocusGroupIdx );
	struct Fdword GetFocusBitmask ( class UGFxObject* pMovieClip );
	class UGFxObject* GetFocusArray ( class UGFxObject* pMovieClip );
	int GetControllerFocusGroup ( int nControllerIndex );
	bool SetControllerFocusGroup ( int nControllerIndex, int nFocusGroupIdx );
	void SetSelection ( int nBegin, int nEnd );
	int GetEndIndex ( );
	int GetCaretIndex ( );
	int GetBeginIndex ( );
	void RemoveListener ( class UGFxObject* pListener );
	void AddListener ( class UGFxObject* pListener );
	class UGFxObject* GetModalClip ( int nControllerIdx );
	class UGFxObject* SetModalClip ( class UGFxObject* pModal, int nControllerIdx );
	class UGFxObject* FindFocus ( struct FString sKeyToSimulate, class UGFxObject* pParentMovie, unsigned long bLoop, class UGFxObject* pStartFromMovie, unsigned long bIncludeFocusEnabledChars, int nControllerIndex );
	class UGFxObject* MoveFocus ( struct FString sKeyToSimulate, class UGFxObject* pStartFromMovie );
	class UGFxObject* GetFocusObject ( );
	struct FString GetFocusPath ( );
	bool SetFocus ( class UGFxObject* pFocus );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgGFxSelection::pClassPointer = NULL;

// Class TgClientBase.TgGFxWidget
// 0x0024 (0x00E0 - 0x00BC)
class UTgGFxWidget : public UTgGFxObject
{
public:
	unsigned long                                      m_bInitialized : 1;                               		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UTgGFxWidget* >                      m_arrSubWidgets;                                  		// 0x00C0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGFxEvent__Delegate;                           		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5047 );

		return pClassPointer;
	};

	void RemoveGFxEventListener ( unsigned char Evt, struct FScriptDelegate delCallback );
	void AddGFxEventListener ( unsigned char Evt, struct FScriptDelegate delCallback );
	class UTgGFxObject* GetChildDirect ( struct FPointer sName, unsigned long bRequired, class UClass* pClass );
	class UTgGFxObject* GetChild ( struct FString sName, unsigned long bRequired, class UClass* pClass );
	void SetDisabled ( unsigned long bValue );
	bool IsDisabled ( );
	bool IsASInitialized ( );
	bool IsUCInitialized ( );
	void Uninitialize ( );
	void Initialize ( );
	bool OnGFxEvent ( class UTgGFxEvent* pEvent );
};

UClass* UTgGFxWidget::pClassPointer = NULL;

// Class TgClientBase.TgGFxFriendSearchProvider
// 0x00A4 (0x013C - 0x0098)
class UTgGFxFriendSearchProvider : public UTgClientObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;              		// 0x0098 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x00A0 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FTgSearchResults                            m_Results;                                        		// 0x00A8 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct Fdword                                      m_fSearch;                                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLocalSearch;                                   		// 0x00E8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOnlineSearch;                                  		// 0x00F8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxPlayerProvider*                        m_pLocalSource;                                   		// 0x0108 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIncludeServerOffline : 1;                      		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTgIntervalHandle                           m_ServerTimeout;                                  		// 0x0114 (0x0010) [0x0000000000000000]              
	class UTgEventDispatcher*                          m_pDispatcher;                                    		// 0x0124 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FQWord >                            m_RecentRequestedIDs;                             		// 0x012C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5048 );

		return pClassPointer;
	};

	int Num ( );
	bool IsInvalid ( );
	void Empty ( );
	void OnServerTimeout ( float nDeltaTime );
	void LocalSearchIncrement ( );
	void OnSearchFriendRequest ( class UTgGFxPlayerProvider* pProvider );
	void OnReceivePlayerQuery ( struct FPointer pEvent );
	class UTgEventDispatcher* GetDispatcher ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxFriendSearchProvider::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayerGenerator
// 0x0078 (0x0110 - 0x0098)
class UTgGFxPlayerGenerator : public UTgClientObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0098 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct Fdword                                      m_nCurrentFlag;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                m_nLocalPlayer;                                   		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FQWord                                      m_nLastNameReq;                                   		// 0x00A8 (0x0008) [0x0000000000000000]              
	class UTgGFxPlayerProvider*                        m_pParty;                                         		// 0x00B0 (0x0008) [0x0000000000000000]              
	class UTgGFxPlayerProvider*                        m_pFriends;                                       		// 0x00B8 (0x0008) [0x0000000000000000]              
	class UTgGFxPlayerProvider*                        m_pClan;                                          		// 0x00C0 (0x0008) [0x0000000000000000]              
	TArray< struct FTgPlayerId >                       m_arrPendingNames;                                		// 0x00C8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgGenPlayerData >                  m_arrPlayers;                                     		// 0x00D8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgGenPidLookup                             m_PidLookup;                                      		// 0x00E8 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTgGenUidLookup                             m_UidLookup;                                      		// 0x00FC (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5049 );

		return pClassPointer;
	};

	void OnReceiveNames ( unsigned long bSucces, class UTgPlayerNameManager* pManager );
	class UTgGFxClanData* GetClanData ( );
	class UTgGFxPartyData* GetPartyData ( );
	class UTgGFxFriendData* GetFriendData ( );
	void Empty ( );
	void OnMctsEvent ( struct FPointer pEvent );
	class UTgGFxPlayerData* FindOrCreatePlayer ( unsigned long bWaitForNames, struct FTgPlayerId* pid );
	class UTgGFxPlayerData* CreatePlayer ( unsigned long bWaitForNames, struct FTgPlayerId* pid );
	class UTgGFxPlayerData* FindPlayer ( int nFlags, struct FTgPlayerId* pid );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPlayerGenerator::pClassPointer = NULL;

// Class TgClientBase.TgDataProvider
// 0x003C (0x009C - 0x0060)
class UTgDataProvider : public UObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;              		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0068 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UTgEventDispatcher*                          m_pDispatcher;                                    		// 0x0070 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      m_bIsInvalid : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __OnPopulateRange__Delegate;                      		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPopulateItem__Delegate;                       		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0090 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5050 );

		return pClassPointer;
	};

	void Invalidate ( );
	bool RequestItemAt ( int nIndex, struct FScriptDelegate delCallback );
	bool RequestItemRange ( int nStartIndex, int nCount, struct FScriptDelegate delCallback );
	class UTgEventDispatcher* GetDispatcher ( );
	void Uninitialize ( );
	void Initialize ( );
	void OnPopulateItem ( class UObject* Obj, int nIndex );
	void OnPopulateRange ( struct FPointer arrData );
};

UClass* UTgDataProvider::pClassPointer = NULL;

// Class TgClientBase.TgBasicDataProvider
// 0x0010 (0x00AC - 0x009C)
class UTgBasicDataProvider : public UTgDataProvider
{
public:
	TArray< class UObject* >                           m_arrData;                                        		// 0x009C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5051 );

		return pClassPointer;
	};

	void Invalidate ( );
	bool RequestItemAt ( int nIndex, struct FScriptDelegate delCallback );
	bool RequestItemRange ( int nStartIndex, int nCount, struct FScriptDelegate delCallback );
	void Populate ( TArray< class UObject* > arrData );
};

UClass* UTgBasicDataProvider::pClassPointer = NULL;

// Class TgClientBase.TgGFxExternalLinkData
// 0x0040 (0x00A0 - 0x0060)
class UTgGFxExternalLinkData : public UTgDataItem
{
public:
	struct FString                                     sHeader;                                          		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0070 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sQRFrame;                                         		// 0x0080 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sLink;                                            		// 0x0090 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5052 );

		return pClassPointer;
	};

};

UClass* UTgGFxExternalLinkData::pClassPointer = NULL;

// Class TgClientBase.TgGFxItemHelperBinding
// 0x0008 (0x00B4 - 0x00AC)
class UTgGFxItemHelperBinding : public UGFxObject
{
public:
	struct FPointer                                    VfTable_ITgInitInterface;                         		// 0x00AC (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5053 );

		return pClassPointer;
	};

	void eventNotifyItemUpdate ( TArray< struct Fdword >* arrLTI );
	void eventNotifyCouponChange ( );
	class UGFxObject* GetItemDataByLootId ( int nLootId, int nVendorId );
	class UGFxObject* GetItemDataByItemId ( int nItemId );
	class UGFxObject* GetCouponDataByLootId ( int nLootId, int nVendorId );
	class UGFxObject* GetCouponDataByItemId ( int nItemId );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgGFxItemHelperBinding::pClassPointer = NULL;

// Class TgClientBase.TgGFxDataGroup
// 0x0030 (0x0198 - 0x0168)
class UTgGFxDataGroup : public UTgGFxEventObject
{
public:
	class UTgGFxDataProvider*                          m_pData;                                          		// 0x0168 (0x0008) [0x0000000000000000]              
	struct FString                                     m_sLabel;                                         		// 0x0170 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLabel2;                                        		// 0x0180 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nGroupId;                                       		// 0x0190 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bOpenByDefault : 1;                             		// 0x0194 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsPending : 1;                                 		// 0x0194 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5054 );

		return pClassPointer;
	};

	void eventInvalidate ( );
	class UTgGFxDataProvider* GetData ( );
	bool GetIsPending ( );
	bool GetOpenByDefault ( );
	int GetGroupId ( );
	struct FString GetLabel2 ( );
	struct FString GetLabel ( );
	void SetIsPending ( unsigned long bValue );
	void SetOpenByDefault ( unsigned long bValue );
	void SetGroupId ( int nValue );
	void SetLabel2 ( struct FString sValue );
	void SetLabel ( struct FString sValue );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxDataGroup::pClassPointer = NULL;

// Class TgClientBase.TgGFxDataProviderBase
// 0x0010 (0x0178 - 0x0168)
class UTgGFxDataProviderBase : public UTgGFxEventObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;              		// 0x0168 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UTgEventDispatcher*                          m_pDispatcher;                                    		// 0x0170 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5055 );

		return pClassPointer;
	};

	void eventInvalidate ( );
	void eventValidateNow ( );
	void AddItemUnique ( class UGFxObject* pObject );
	void AddItem ( class UGFxObject* pObject );
	void Empty ( int nReserve );
	void Populate ( struct FPointer pData, int nCount );
	void SetAt ( int nPos, class UGFxObject* pObject );
	class UGFxObject* GetAt ( int nPos, class UClass* pClass );
	void SetNum ( int nValue );
	int Num ( );
	bool IsInvalid ( );
	void USC_CancelPendingRequests ( class UGFxObject* pRequester );
	int USC_IndexOf ( class UGFxObject* pItem, class UGFxObject* pScope, struct FString sCallback );
	class UGFxObject* USC_RequestItemRange ( int nStartIndex, int nEndIndex, class UGFxObject* pScope, struct FString sCallback );
	class UGFxObject* USC_RequestItemAt ( int nIndex, class UGFxObject* pScope, struct FString sCallback );
	class UTgEventDispatcher* GetDispatcher ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxDataProviderBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxDataProvider
// 0x0010 (0x0188 - 0x0178)
class UTgGFxDataProvider : public UTgGFxDataProviderBase
{
public:
	TArray< class UGFxObject* >                        m_arrData;                                        		// 0x0178 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5056 );

		return pClassPointer;
	};

	void Empty ( int nReserve );
	void Populate ( struct FPointer pData, int nCount );
	void SetAt ( int nPos, class UGFxObject* pObject );
	class UGFxObject* GetAt ( int nPos, class UClass* pClass );
	void SetNum ( int nLen );
	int Num ( );
};

UClass* UTgGFxDataProvider::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayerProvider
// 0x0058 (0x01D0 - 0x0178)
class UTgGFxPlayerProvider : public UTgGFxDataProviderBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0178 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct Fdword                                      m_nRefFlag;                                       		// 0x0180 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bReqNames : 1;                                  		// 0x0184 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bNeedsUpdate : 1;                               		// 0x0184 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FTgPlayerId >                       m_arrPlayers;                                     		// 0x0188 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxPlayerGenerator*                       m_pOwner;                                         		// 0x0198 (0x0008) [0x0000000000000000]              
	TArray< struct FRequestASCallback >                m_arrASCallbacks;                                 		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_arrUCCallbacks;                                 		// 0x01B0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __PlayerUpdateDelegate__Delegate;                 		// 0x01C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5057 );

		return pClassPointer;
	};

	void eventCallUCCallback ( struct FScriptDelegate delCallback );
	void USC_CancelPendingRequests ( class UGFxObject* pRequester );
	int USC_IndexOf ( class UGFxObject* pItem, class UGFxObject* pScope, struct FString sCallback );
	class UGFxObject* USC_RequestItemRange ( int nStartIndex, int nEndIndex, class UGFxObject* pScope, struct FString sCallback );
	class UGFxObject* USC_RequestItemAt ( int nIndex, class UGFxObject* pScope, struct FString sCallback );
	void DoUpdate ( );
	bool NeedsUpdate ( );
	void SetAt ( int nPos, class UGFxObject* pObject );
	class UGFxObject* GetAt ( int nPos, class UClass* pClass );
	struct Fdword GetRefFlag ( );
	void SetNum ( int nCount );
	int Num ( );
	bool IsInvalid ( );
	bool TryRequestPlayers ( );
	bool IsEmpty ( );
	void Empty ( int nReserve );
	void SetDirty ( );
	bool IsDirty ( );
	void SetOwner ( class UTgGFxPlayerGenerator* pOwner );
	class UTgGFxPlayerData* GetPlayerAt ( int nIndex );
	void GetList ( TArray< class UTgGFxPlayerData* >* out_arrList );
	void CancelRequests ( class UObject* pScope );
	bool RequestPlayers ( struct FScriptDelegate delCallback );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void PlayerUpdateDelegate ( class UTgGFxPlayerProvider* Data );
};

UClass* UTgGFxPlayerProvider::pClassPointer = NULL;

// Class TgClientBase.TgGFxClanData
// 0x0034 (0x0204 - 0x01D0)
class UTgGFxClanData : public UTgGFxPlayerProvider
{
public:
	struct FString                                     m_sClanName;                                      		// 0x01D0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClanTag;                                       		// 0x01E0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bReqClan : 1;                                   		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UTgGFxPlayerData* >                  m_arrClanTemps;                                   		// 0x01F4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5058 );

		return pClassPointer;
	};

	struct FString GetClanTag ( );
	struct FString GetClanName ( );
	void SetClanTag ( struct FString sValue );
	void SetClanName ( struct FString sValue );
	void OnClanUpdate ( );
	bool TryRequestPlayers ( );
	bool IsInvalid ( );
	void OnMctsEvent ( struct FPointer pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxClanData::pClassPointer = NULL;

// Class TgClientBase.TgGFxFriendData
// 0x0038 (0x0208 - 0x01D0)
class UTgGFxFriendData : public UTgGFxPlayerProvider
{
public:
	TArray< struct Fdword >                            m_arrUpdateIds;                                   		// 0x01D0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      m_nLastUpdate;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bReqMcts : 1;                                   		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bReqPortal : 1;                                 		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bReqPortalHRInfo : 1;                           		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bHasASListeners : 1;                            		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FTgIntervalHandle                           m_UpdateTimeout;                                  		// 0x01E8 (0x0010) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_GiveupTimeout;                                  		// 0x01F8 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5059 );

		return pClassPointer;
	};

	void USC_NotifyListenersChange ( unsigned long bHasListener );
	bool IsInvalid ( );
	void GiveUpOnResponse ( float nDelta );
	void OnUpdate ( float nDelta );
	bool TryRequestPlayers ( );
	void Empty ( int nReserve );
	void OnReceivePlatformFriends ( struct FPointer pEventBase );
	void OnReceivePlatformHRUpdate ( struct FPointer pEventBase );
	void OnMctsEvent ( struct FPointer pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxFriendData::pClassPointer = NULL;

// Class TgClientBase.TgGFxPartyData
// 0x0014 (0x01E4 - 0x01D0)
class UTgGFxPartyData : public UTgGFxPlayerProvider
{
public:
	struct Fdword                                      m_nPartyId;                                       		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UTgGFxPlayerData*                            m_pLeader;                                        		// 0x01D4 (0x0008) [0x0000000000000000]              
	struct FQWord                                      m_nLastUpdate;                                    		// 0x01DC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5060 );

		return pClassPointer;
	};

	bool IsInParty ( );
	class UTgGFxPlayerData* GetLeader ( );
	void SetLeader ( class UTgGFxPlayerData* pLeader );
	bool TryRequestPlayers ( );
	void OnMctsEvent ( struct FPointer pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPartyData::pClassPointer = NULL;

// Class TgClientBase.TgGFxRoleQueuePopup
// 0x0000 (0x0284 - 0x0284)
class UTgGFxRoleQueuePopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5061 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxRoleQueuePopup::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayerClanData
// 0x0040 (0x00FC - 0x00BC)
class UTgGFxPlayerClanData : public UTgGFxObject
{
public:
	struct Fdword                                      m_nClanId;                                        		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FString                                     m_sClanName;                                      		// 0x00C0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClanTag;                                       		// 0x00D0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClanRankName;                                  		// 0x00E0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      m_nClanRankId;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nClanHonor;                                     		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsLeader : 1;                                  		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsInClan : 1;                                  		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsPending : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bCanInvite : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bCanPromote : 1;                                		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bCanRemove : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000020] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5062 );

		return pClassPointer;
	};

	void eventInvalidate ( );
	struct Fdword GetClanHonor ( );
	struct Fdword GetClanId ( );
	bool GetIsPending ( );
	bool GetIsLeader ( );
	bool GetIsInClan ( );
	struct Fdword GetClanRankId ( );
	struct FString GetClanRankName ( );
	struct FString GetClanTag ( );
	struct FString GetClanName ( );
	void SetClanHonor ( struct Fdword nValue );
	void SetClanId ( struct Fdword nValue );
	void SetIsPending ( unsigned long bValue );
	void SetIsLeader ( unsigned long bValue );
	void SetIsInClan ( unsigned long bValue );
	void SetClanRankId ( struct Fdword nRank );
	void SetClanRankName ( struct FString sRank );
	void SetClanTag ( struct FString sTag );
	void SetClanName ( struct FString sName );
};

UClass* UTgGFxPlayerClanData::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayerData
// 0x007C (0x0138 - 0x00BC)
class UTgGFxPlayerData : public UTgGFxObject
{
public:
	struct FTgPlayerId                                 m_pid;                                            		// 0x00BC (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sStatus;                                        		// 0x00E0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRichStatus;                                    		// 0x00F0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sNote;                                          		// 0x0100 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nAvatarId;                                      		// 0x0110 (0x0004) [0x0000000000000000]              
	int                                                m_nStatusStartTime;                               		// 0x0114 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nWorshipperCount;                               		// 0x0118 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nWorshipperLevel;                               		// 0x011C (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nPlayerLevel;                                   		// 0x0120 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nStatusFlags;                                   		// 0x0124 (0x0004) [0x0000000000000000]              
	class UTgGFxPlayerClanData*                        m_pClanData;                                      		// 0x0128 (0x0008) [0x0000000000000000]              
	class UTgGFxPlayerPartyData*                       m_pPartyData;                                     		// 0x0130 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5063 );

		return pClassPointer;
	};

	int USC_GetFriendRequestCount ( );
	bool USC_SetNote ( );
	bool USC_SetStatus ( );
	bool USC_ToggleDND ( );
	bool USC_ReportPlayer ( int nReasonCode, struct FString sReasonMsg, int nPlayerCount, int nSourceTaskForce, int nTargetTaskForce );
	bool USC_ReferFriend ( );
	bool USC_DeclineFriend ( );
	bool USC_AcceptFriend ( );
	bool USC_RemoveFriend ( );
	bool USC_AddFriend ( );
	bool USC_Whisper ( );
	bool USC_ToggleBlock ( );
	bool USC_Spectate ( );
	bool USC_SendGift ( );
	bool USC_ClanInvite ( );
	bool USC_PartyMakeLeader ( );
	bool USC_SetCanPartyInvite ( );
	bool USC_PartyKick ( );
	bool USC_PartyInvite ( );
	bool USC_ViewMatchHistory ( );
	bool USC_ViewSmiteProfile ( );
	bool USC_ViewPortalProfile ( );
	void eventInvalidate ( );
	void OnBlockPopup ( class UTgPagePopup* pPopup, struct FPopupResponse* Response );
	void OnRemoveFriendPopup ( class UTgPagePopup* pPopup, struct FPopupResponse* Response );
	void OnNotePopup ( class UTgPagePopup* pPopup, struct FPopupResponse* Response );
	void OnStatusPopup ( class UTgPagePopup* pPopup, struct FPopupResponse* Response );
	void OnWhisperPopup ( class UTgPagePopup* pPopup, struct FPopupResponse* Response );
	void RemoveClanData ( );
	void RemovePartyData ( );
	void RemoveFriendData ( );
	class UTgGFxPlayerClanData* GetClanData ( );
	class UTgGFxPlayerPartyData* GetPartyData ( );
	class UTgGFxPlayerClanData* CreateClanData ( );
	class UTgGFxPlayerPartyData* CreatePartyData ( );
	void PopulateAS_Level ( );
	void PopulateAS_PrestigeData ( );
	bool GetIsHirezFriend ( );
	bool GetIsPortalFriend ( );
	bool GetDoNotDisturb ( );
	bool GetFriendRequesting ( );
	bool GetFriendRequested ( );
	struct Fdword GetPlayerLevel ( );
	bool GetIsInOurParty ( );
	bool GetIsInOurClan ( );
	bool GetIsMuted ( );
	bool GetIsBlocked ( );
	bool GetIsOnline ( );
	int GetAvatarId ( );
	struct FString GetNote ( );
	struct FString GetRichStatus ( );
	struct FString GetStatus ( );
	struct FString GetPlayerName ( );
	void CheckStatusIntegrity ( );
	void UpdateIsMuted ( );
	void UpdatePlayerName ( );
	bool SetId ( struct FTgPlayerId* pid );
	void SetPlayerLevelByXp ( struct Fdword nValue );
	void SetPlayerLevel ( struct Fdword nValue );
	void SetStatusTimeElapsed ( int nTimeSecs );
	void SetDoNotDisturb ( unsigned long bValue );
	void SetFriendRequesting ( unsigned long bValue );
	void SetFriendRequested ( unsigned long bValue );
	void SetIsInOurParty ( unsigned long bValue );
	void SetIsInOurClan ( unsigned long bValue );
	void SetWorshiperCount ( struct Fdword nValue );
	void SetIsBlocked ( unsigned long bValue );
	void SetIsOnline ( unsigned long bValue );
	void SetAvatarId ( int nAvatarId );
	void SetNote ( struct FString sNote );
	void SetRichStatus ( struct FString sStatus );
	void SetStatus ( struct FString sStatus );
	bool IsValid ( );
	void Initialize ( struct FTgPlayerId* pid );
};

UClass* UTgGFxPlayerData::pClassPointer = NULL;

// Class TgClientBase.TgGFxPlayerPartyData
// 0x000C (0x00C8 - 0x00BC)
class UTgGFxPlayerPartyData : public UTgGFxObject
{
public:
	unsigned long                                      m_bCanInvite : 1;                                 		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsLeader : 1;                                  		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsPending : 1;                                 		// 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 
	struct Fdword                                      m_nPartyId;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nPartyCount;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5064 );

		return pClassPointer;
	};

	void eventInvalidate ( );
	struct Fdword GetPartyCount ( );
	struct Fdword GetPartyId ( );
	bool GetIsPending ( );
	bool GetIsLeader ( );
	bool GetCanInvite ( );
	void SetPartyCount ( struct Fdword nValue );
	void SetPartyId ( struct Fdword nValue );
	void SetIsPending ( unsigned long bValue );
	void SetIsLeader ( unsigned long bValue );
	void SetCanInvite ( unsigned long bValue );
};

UClass* UTgGFxPlayerPartyData::pClassPointer = NULL;

// Class TgClientBase.TgLoginBlockerDataItem
// 0x0078 (0x00D8 - 0x0060)
class UTgLoginBlockerDataItem : public UTgDataItem
{
public:
	struct FLoginBlockerData                           m_loginBlockerData;                               		// 0x0060 (0x0068) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_alreadySeenBlockers;                            		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5065 );

		return pClassPointer;
	};

};

UClass* UTgLoginBlockerDataItem::pClassPointer = NULL;

// Class TgClientBase.TgMainMenuData
// 0x0010 (0x0070 - 0x0060)
class UTgMainMenuData : public UTgDataItem
{
public:
	TArray< struct FTgMainMenuBtn >                    arrButtons;                                       		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5066 );

		return pClassPointer;
	};

};

UClass* UTgMainMenuData::pClassPointer = NULL;

// Class TgClientBase.TgPatchOverviewDataItem
// 0x0090 (0x00F0 - 0x0060)
class UTgPatchOverviewDataItem : public UTgDataItem
{
public:
	struct FPatchOverviewData                          m_patchOverviewData;                              		// 0x0060 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_alreadySeenBlockers;                            		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5067 );

		return pClassPointer;
	};

};

UClass* UTgPatchOverviewDataItem::pClassPointer = NULL;

// Class TgClientBase.TgPlayerIdValueData
// 0x0024 (0x0090 - 0x006C)
class UTgPlayerIdValueData : public UTgValueDataItem
{
public:
	struct FTgPlayerId                                 PlayerID;                                         		// 0x006C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5068 );

		return pClassPointer;
	};

};

UClass* UTgPlayerIdValueData::pClassPointer = NULL;

// Class TgClientBase.TgReportPlayerEvent
// 0x0044 (0x00B8 - 0x0074)
class UTgReportPlayerEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 pidPlayer;                                        		// 0x0074 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sReason;                                          		// 0x0098 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nReasonCode;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nPlayerCount;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	struct Fdword                                      nSourceTaskForce;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nTargetTaskForce;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5069 );

		return pClassPointer;
	};

};

UClass* UTgReportPlayerEvent::pClassPointer = NULL;

// Class TgClientBase.TgSetupMorePointsEvent
// 0x0074 (0x00E8 - 0x0074)
class UTgSetupMorePointsEvent : public UTgEventDataItem
{
public:
	int                                                nVendorId;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     sTitle;                                           		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefaultPurchaseInfo;                             		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChestInfo;                                       		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBundleInfo;                                      		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBattlepassInfo;                                  		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sViewerStoreInfo;                                 		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5070 );

		return pClassPointer;
	};

};

UClass* UTgSetupMorePointsEvent::pClassPointer = NULL;

// Class TgClientBase.TgTeamBoostEvent
// 0x0010 (0x0084 - 0x0074)
class UTgTeamBoostEvent : public UTgEventDataItem
{
public:
	struct Fdword                                      nPlayerId;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              nMultiplier;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nBoosterType;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nTaskForce;                                       		// 0x0080 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5071 );

		return pClassPointer;
	};

};

UClass* UTgTeamBoostEvent::pClassPointer = NULL;

// Class TgClientBase.TgVendorItemDataItem
// 0x0008 (0x0068 - 0x0060)
class UTgVendorItemDataItem : public UTgDataItem
{
public:
	struct FPointer                                    pData;                                            		// 0x0060 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5072 );

		return pClassPointer;
	};

};

UClass* UTgVendorItemDataItem::pClassPointer = NULL;

// Class TgClientBase.TgSetupPurchaseEvent
// 0x0014 (0x007C - 0x0068)
class UTgSetupPurchaseEvent : public UTgVendorItemDataItem
{
public:
	struct Fdword                                      dwLocationId;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nGiftPlayerId;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nGiftMsgId;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsAnonGift : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5073 );

		return pClassPointer;
	};

};

UClass* UTgSetupPurchaseEvent::pClassPointer = NULL;

// Class TgClientBase.TgLobbyHUDBase
// 0x0064 (0x0654 - 0x05F0)
class ATgLobbyHUDBase : public ATgClientHUD
{
public:
	int                                                c_PendingClassId;                                 		// 0x05F0 (0x0004) [0x0000000000000000]              
	int                                                c_PendingSkinId;                                  		// 0x05F4 (0x0004) [0x0000000000000000]              
	int                                                c_CurrentClassId;                                 		// 0x05F8 (0x0004) [0x0000000000000000]              
	int                                                c_CurrentSkinId;                                  		// 0x05FC (0x0004) [0x0000000000000000]              
	int                                                c_RolledOverSkinId;                               		// 0x0600 (0x0004) [0x0000000000000000]              
	int                                                c_PendingPedestalSkinId;                          		// 0x0604 (0x0004) [0x0000000000000000]              
	int                                                c_CurrentPedestalSkinId;                          		// 0x0608 (0x0004) [0x0000000000000000]              
	class ATgLobbyCamera*                              c_CurrentCamera;                                  		// 0x060C (0x0008) [0x0000000000000000]              
	struct FName                                       m_PendingCamera;                                  		// 0x0614 (0x0008) [0x0000000000000000]              
	class UTgCameraModifier_EmoteZoom*                 EmoteZoomModifier;                                		// 0x061C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_MenuContentDataClassName;                       		// 0x0624 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgMenuContentData*                          m_MenuContentData;                                		// 0x0634 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      c_EOML_to_MatchLobby : 1;                         		// 0x063C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_UseEOMMusic : 1;                                		// 0x063C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bTestRenderMode : 1;                            		// 0x063C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bTestRenderLoadMovie : 1;                       		// 0x063C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bHasLoadedTeamNames : 1;                        		// 0x063C (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              c_fTimeQueued;                                    		// 0x0640 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     m_CharacterBuild;                                 		// 0x0644 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             m_LobbyAC;                                        		// 0x064C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5074 );

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventPostRender ( );
	void eventCommitPedestalSelectionChange ( );
	void BeginPedestalSelectionChange ( int nPedestalSkinId );
	void eventCommitClassSelectionChange ( );
	void BeginClassSelectionChange ( int nClassId, int nSkinId );
	void eventNotifyLoggedIn ( );
	void eventPostBeginPlay ( );
	void TriggerLazyPrecache ( );
	void eventPreBeginPlay ( );
	void NotifyKismetToLoadMusicTheme ( );
	void OnGameStateChange ( class UTgEventDataItem* pEvent );
	void OnMatchUpdate ( class UTgEventDataItem* pEvent );
	unsigned char GetLoginDataType ( );
	void OnCameraReady ( class ATgLobbyCamera* PCam );
	void DisableEmoteZoom ( unsigned long bImmediate );
	void EnableEmoteZoom ( );
	void PlayEmote ( int nVgsId );
	void UpdateCardDraws ( class UCanvas* CanvasIn );
	void UpdateDebugDraws ( );
	void NotifyLobbyStateChange ( );
	void UpdateGammaControls ( );
	void TestTrayPopup ( unsigned char popupType );
	void TestEOMLobby ( unsigned long bVictory, struct FString ClassName, struct FString skinName_EOML );
	void TestTransition ( unsigned long bShow, unsigned long bAddData, int frameItemID, int godId );
	class ATgLobbyCamera* SwitchToCamera ( struct FName CamTag, unsigned char camDirection );
	void UnsuspendLoadingClassModels ( );
	void SuspendLoadingClassModels ( );
	void ChangePedestalEnemyModel ( int nIndex, int nPedestalSkinId, unsigned char pose, unsigned long bAsync );
	void ChangeClassEnemyModel ( int nIndex, int nClassId, int nSkinId, unsigned char pose, unsigned long bAsync, unsigned long bLockedIn );
	void ChangePedestalFriendlyModel ( int nIndex, int nPedestalSkinId, unsigned char pose, unsigned long bAsync );
	void ChangeClassFriendlyModel ( int nIndex, int nClassId, int nSkinId, unsigned char pose, unsigned long bAsync, unsigned long bLockedIn );
	bool IsCurrentCameraMatchLobby ( );
	struct FName GetMatchLobbyCameraName ( );
	void ChangePreloadModel ( int nClassId, int nSkinId, struct FName CameraTag );
	void OnPedestalSelected ( int nPedestalSkinId, unsigned long bChangedPedestal );
	void OnClassSelected ( int nClassId, int nSkinId, unsigned long bChangedClass, unsigned long bChangedSkin );
	void RotateModel ( float fValue );
	void TestLobbyModel ( int nSkinId );
	void ChangeClassModel ( int nClassId, int nSkinId, int nPedestalSkinId, unsigned char pose, struct FName CameraTag, unsigned char camDirection, unsigned long bAsync, unsigned long bShowFlag, unsigned long bShowCard );
	void ChangeMenuModel ( unsigned char Type, unsigned char camDirection );
	void AsynchNotifies ( );
	void OnDisconnect ( );
	void SetUpEOMLobby ( );
	bool HaveEOMLobbyData ( );
	void CleanupSessionForDisconnect ( );
	void UnregisterEngineCallbacks ( );
	void RegisterEngineCallbacks ( );
	void InitMainMoviePlayer ( );
	void InitializeDisconnectedState ( );
};

UClass* ATgLobbyHUDBase::pClassPointer = NULL;

// Class TgClientBase.TgClanDC_Player
// 0x000B (0x01A8 - 0x019D)
class UTgClanDC_Player : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                m_nClanPermissions;                               		// 0x01A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5075 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Player::pClassPointer = NULL;

// Class TgClientBase.TgDataGroup_EOMLobby
// 0x0013 (0x01B0 - 0x019D)
class UTgDataGroup_EOMLobby : public UTgDataChunk
{
public:
	class UTgEOMLobbyDC_Lobby*                         m_LobbyData;                                      		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgEOMLobbyDC_ChatLobby*                     m_ChatLobbyData;                                  		// 0x01A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5076 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_EOMLobby::pClassPointer = NULL;

// Class TgClientBase.TgDataGroup_League
// 0x0013 (0x01B0 - 0x019D)
class UTgDataGroup_League : public UTgDataChunk
{
public:
	class UTgLeagueDC_PlayerSummary*                   m_PlayerSummary;                                  		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgLeagueDC_Leaderboard*                     m_Leaderboard;                                    		// 0x01A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5077 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_League::pClassPointer = NULL;

// Class TgClientBase.TgDataGroup_Lobby
// 0x0033 (0x01D0 - 0x019D)
class UTgDataGroup_Lobby : public UTgDataChunk
{
public:
	class UTgLobbyDC_Login*                            m_LoginData;                                      		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgLobbyDC_Match*                            m_MatchData;                                      		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UTgLobbyDC_Lobby*                            m_LobbyData;                                      		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UTgGameDC_Player*                            m_CharacterBuilderData;                           		// 0x01B8 (0x0008) [0x0000000000000000]              
	class UTgLobbyDC_Inventory*                        m_PlayerInventory;                                		// 0x01C0 (0x0008) [0x0000000000000000]              
	class UTgLobbyDC_BattlePass*                       m_BattlePassData;                                 		// 0x01C8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5078 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Lobby::pClassPointer = NULL;

// Class TgClientBase.TgEOMLobbyDC_ChatLobby
// 0x0013 (0x01B0 - 0x019D)
class UTgEOMLobbyDC_ChatLobby : public UTgDataChunk
{
public:
	TArray< class UTgEOMLobbyDC_ChatPlayer* >          m_Players;                                        		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5079 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_ChatLobby::pClassPointer = NULL;

// Class TgClientBase.TgEOMLobbyDC_ChatPlayer
// 0x0007 (0x01A4 - 0x019D)
class UTgEOMLobbyDC_ChatPlayer : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5080 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_ChatPlayer::pClassPointer = NULL;

// Class TgClientBase.TgEOMLobbyDC_Lobby
// 0x001F (0x01BC - 0x019D)
class UTgEOMLobbyDC_Lobby : public UTgDataChunk
{
public:
	class UTgEOMLobbyDC_Team*                          m_FriendTeamData;                                 		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgEOMLobbyDC_Team*                          m_EnemyTeamData;                                  		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_TeamDatas;                                      		// 0x01B0 (0x0008) [0x0000000000000000]              
	float                                              m_SecInMatch;                                     		// 0x01B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5081 );

		return pClassPointer;
	};

	void asc_SetupTaskForceEOML ( int Index );
	void eventSetupTaskForceEOML ( int Index );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_Lobby::pClassPointer = NULL;

// Class TgClientBase.TgEOMLobbyDC_Player
// 0x000B (0x01A8 - 0x019D)
class UTgEOMLobbyDC_Player : public UTgDataChunk
{
public:
	struct FUniqueNetId                                m_nConsoleUserId;                                 		// 0x01A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5082 );

		return pClassPointer;
	};

	bool eventIsPlayerMuted ( struct FUniqueNetId ConsoleId );
	void UpdatePlayerInventory ( struct FPointer pMarshal );
	void UpdatePlayerBehaviour ( struct FPointer pMarshal );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_Player::pClassPointer = NULL;

// Class TgClientBase.TgEOMLobbyDC_Team
// 0x0017 (0x01B4 - 0x019D)
class UTgEOMLobbyDC_Team : public UTgDataChunk
{
public:
	TArray< class UTgEOMLobbyDC_Player* >              m_Players;                                        		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                teamTaskForce;                                    		// 0x01B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5083 );

		return pClassPointer;
	};

	void OnPlayerMute ( class UTgEventDataItem* pEvent );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgEOMLobbyDC_Team::pClassPointer = NULL;

// Class TgClientBase.TgLeagueDC_Leaderboard
// 0x0057 (0x01F4 - 0x019D)
class UTgLeagueDC_Leaderboard : public UTgDataChunk
{
public:
	TArray< struct FUpdatedPlayerInfo >                m_arrUpdatedPlayerInfo;                           		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerIdPointer >                  m_arrLeaderboardPlayerIDs;                        		// 0x01B0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerIdPointer >                  m_arrPendingNames;                                		// 0x01C0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgIntervalHandle                           m_UpdateTimeout;                                  		// 0x01D0 (0x0010) [0x0000000000000000]              
	unsigned long                                      m_bReadFriends : 1;                               		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_prevLeagueId;                                   		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_FriendsReadCallbackLeagueId;                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_arrLeaderboardData;                             		// 0x01EC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5084 );

		return pClassPointer;
	};

	void USC_GetLeaderboard ( int nLeagueId, int nTierId );
	void RequestPlayerName ( class UGFxObject* pObj, struct FTgPlayerId* pid );
	void UpdateNames ( unsigned long bSucces, class UTgPlayerNameManager* pManager );
	void OnUpdate ( float nDelta );
	void Uninitialize ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLeagueDC_Leaderboard::pClassPointer = NULL;

// Class TgClientBase.TgLeagueDC_PlayerSummary
// 0x0003 (0x01A0 - 0x019D)
class UTgLeagueDC_PlayerSummary : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5085 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLeagueDC_PlayerSummary::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_BattlePass
// 0x0007 (0x01A4 - 0x019D)
class UTgLobbyDC_BattlePass : public UTgDataChunk
{
public:
	unsigned long                                      m_bInitialDataSet : 1;                            		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5086 );

		return pClassPointer;
	};

	void USC_PurchaseBattlePass ( );
	void USC_PurchaseNextLevel ( int nQuantity );
	void OnHUDStateChange ( class UTgEventDataItem* pEvent );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_BattlePass::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Class
// 0x002B (0x01C8 - 0x019D)
class UTgLobbyDC_Class : public UTgDataChunk
{
public:
	struct Fdword                                      m_nClassId;                                       		// 0x01A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAvailable : 1;                                 		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVisible : 1;                                   		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOwned : 1;                                     		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bIsBannable : 1;                                		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsBanned : 1;                                  		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bSelectedByUs : 1;                              		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000020] 
	TArray< struct FTgRestrictedSkinUpdate >           m_RestrictedSkins;                                		// 0x01A8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgLobbyDC_Skin* >                   m_Skins;                                          		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5087 );

		return pClassPointer;
	};

	void UpdateFreeRotation ( );
	class UTgLobbyDC_Skin* GetSkinByIndex ( struct Fdword nIndex );
	class UTgLobbyDC_Skin* GetSkinById ( struct Fdword nSkinId );
	void SetSessionDefaultSkin ( struct Fdword nSkinId );
	bool SetSelectedByUs ( unsigned long bSelByUs );
	bool GetSelectedByUs ( );
	bool SetBanned ( unsigned long bIsBanned );
	bool GetBanned ( );
	bool SetBannable ( unsigned long bCanBan );
	bool GetBannable ( );
	void SetVisible ( unsigned long Visible );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Class::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Currencies
// 0x0013 (0x01B0 - 0x019D)
class UTgLobbyDC_Currencies : public UTgDataChunk
{
public:
	TArray< struct FTgDCCurrency >                     m_arrCurrencies;                                  		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5088 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Currencies::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Inventory
// 0x001B (0x01B8 - 0x019D)
class UTgLobbyDC_Inventory : public UTgDataChunk
{
public:
	TArray< struct FTgBoosterEntry >                   m_arrBoosters;                                    		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_pTeamBoosters;                                  		// 0x01B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5089 );

		return pClassPointer;
	};

	int USC_CountActiveBoosters ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Inventory::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Lobby
// 0x00AF (0x024C - 0x019D)
class UTgLobbyDC_Lobby : public UTgDataChunk
{
public:
	int                                                m_nNbrInQueue;                                    		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                m_nNbrInMatch;                                    		// 0x01A4 (0x0004) [0x0000000000000000]              
	int                                                m_nNbrInParty;                                    		// 0x01A8 (0x0004) [0x0000000000000000]              
	float                                              m_fInviteStartTime;                               		// 0x01AC (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsPartyLeader : 1;                             		// 0x01B0 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgLobbyDC_Currencies*                       m_Currencies;                                     		// 0x01B4 (0x0008) [0x0000000000000000]              
	struct FString                                     m_lsLabelName;                                    		// 0x01BC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelLevel;                                   		// 0x01CC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelGold;                                    		// 0x01DC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelFavor;                                   		// 0x01EC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelBoost;                                   		// 0x01FC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelParty;                                   		// 0x020C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelStatus;                                  		// 0x021C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelGoodwill;                                		// 0x022C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLabelPlayerAccount;                           		// 0x023C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5090 );

		return pClassPointer;
	};

	void usc_OpenSimulmediaPopup ( );
	void usc_OpenGifting ( struct FString PlayerName, struct FString sPlayerId, struct FString ConsoleIdString );
	void OnQueueStateChange ( class UTgEventDataItem* pEvent );
	void OnPartyUpdate ( class UTgEventDataItem* pEvent );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Lobby::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Login
// 0x0003 (0x01A0 - 0x019D)
class UTgLobbyDC_Login : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5091 );

		return pClassPointer;
	};

	void RefreshData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Login::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Match
// 0x0C98 (0x0E35 - 0x019D)
class UTgLobbyDC_Match : public UTgDataChunk
{
public:
	struct FMap_Mirror                                 SkinsToEquip;                                     		// 0x01A0 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UTgSynchronizedTimer*                        m_MatchTimer;                                     		// 0x01E8 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bStateTimesLoaded : 1;                          		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSpectator : 1;                                 		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAllGodsAvailable : 1;                          		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FTgClassUpdateInfo                          m_Classes[ 0x96 ];                                		// 0x01F4 (0x0708) [0x0000000000000000]              
	struct FTgLobbyClassLookup                         m_arrSortedClasses[ 0x96 ];                       		// 0x08FC (0x04B0) [0x0000000000000000]              
	class UTgLobbyDC_PlayerTrade*                      m_TradeData[ 0x5 ];                               		// 0x0DAC (0x0028) [0x0000000000000000]              
	int                                                m_nClassCount;                                    		// 0x0DD4 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nLastSelectedProfile;                           		// 0x0DD8 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nLastSelectedSkin;                              		// 0x0DDC (0x0004) [0x0000000000000000]              
	class UTgLobbyDC_Team*                             m_FriendTeamData;                                 		// 0x0DE0 (0x0008) [0x0000000000000000]              
	class UTgLobbyDC_Team*                             m_EnemyTeamData;                                  		// 0x0DE8 (0x0008) [0x0000000000000000]              
	struct Fdword                                      m_nTeamCount;                                     		// 0x0DF0 (0x0004) [0x0000000000000000]              
	class UTgLobbyDC_Team*                             m_arrTeams[ 0x4 ];                                		// 0x0DF4 (0x0020) [0x0000000000000000]              
	class UTgSynchronizedTimer*                        m_BonusTimers[ 0x4 ];                             		// 0x0E14 (0x0020) [0x0000000000000000]              
	unsigned char                                      m_fUpdate;                                        		// 0x0E34 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5092 );

		return pClassPointer;
	};

	bool ConsumeEquipSkinId ( struct Fdword nClassId );
	struct Fdword GetEquipSkinId ( struct Fdword nClassId );
	class UTgLobbyDC_Team* GetOtherTeam ( int nIndex );
	class UTgLobbyDC_Team* GetFriendTeam ( );
	void OnMatchUpdate ( class UTgEventDataItem* pEvent );
	int GetLocalSelectedClassId ( );
	void ClearMatchData ( );
	void ClearBonusTimers ( );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Match::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Player
// 0x0033 (0x01D0 - 0x019D)
class UTgLobbyDC_Player : public UTgDataChunk
{
public:
	int                                                m_nPlayerId;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                m_nClassId;                                       		// 0x01A4 (0x0004) [0x0000000000000000]              
	int                                                m_nBannedGodId;                                   		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                m_nTaskForce;                                     		// 0x01AC (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nPosition;                                      		// 0x01B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsBanning : 1;                                 		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsPicking : 1;                                 		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FUniqueNetId                                m_nConsoleUserId;                                 		// 0x01B8 (0x0008) [0x0000000000000000]              
	struct FRoleCallInfo                               m_RoleCall;                                       		// 0x01C0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5093 );

		return pClassPointer;
	};

	bool eventIsPlayerMuted ( struct FUniqueNetId ConsoleId );
	struct Fdword GetMatchPosition ( );
	void UpdateRoleCall ( struct FRoleCallInfo* rci );
	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Player::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_PlayerTrade
// 0x0003 (0x01A0 - 0x019D)
class UTgLobbyDC_PlayerTrade : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5094 );

		return pClassPointer;
	};

	void NotifyMapChange ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_PlayerTrade::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Skin
// 0x000F (0x01AC - 0x019D)
class UTgLobbyDC_Skin : public UTgDataChunk
{
public:
	struct Fdword                                      m_nSkinId;                                        		// 0x01A0 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_dwSubtype;                                      		// 0x01A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAvailable : 1;                                 		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVisible : 1;                                   		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bSelectedByUs : 1;                              		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bIndirectlyPurchasable : 1;                     		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5095 );

		return pClassPointer;
	};

	bool GetIndirectlyPurchasable ( );
	bool GetSelectedByUs ( );
	bool GetAvailable ( );
	struct Fdword GetSubtype ( );
	struct Fdword GetSkinId ( );
	void SetOwned ( unsigned long bOwned );
	void SetIndirectlyPurchasable ( unsigned long bCanIndirectlyPurchase );
	void SetPurchasable ( unsigned long bCanPurchase );
	void SetAvailable ( unsigned long bIsAvail );
	void SetSelectedByUs ( unsigned long bSelByUs );
	void SetVisible ( unsigned long Visible );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Skin::pClassPointer = NULL;

// Class TgClientBase.TgLobbyDC_Team
// 0x00C3 (0x0260 - 0x019D)
class UTgLobbyDC_Team : public UTgDataChunk
{
public:
	class UTgLobbyDC_Player*                           m_Members[ 0xA ];                                 		// 0x01A0 (0x0050) [0x0000000000000000]              
	class UTgLobbyDC_Class*                            m_Bans[ 0x6 ];                                    		// 0x01F0 (0x0030) [0x0000000000000000]              
	struct FTgIncomingBan                              m_BanWorkItems[ 0x6 ];                            		// 0x0220 (0x0030) [0x0000000000000000]              
	unsigned long                                      m_bLocalTeam : 1;                                 		// 0x0250 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasPicking : 1;                                		// 0x0250 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHasBanning : 1;                                		// 0x0250 (0x0004) [0x0000000000000000] [0x00000004] 
	struct Fdword                                      m_nTaskForce;                                     		// 0x0254 (0x0004) [0x0000000000000000]              
	int                                                m_nMemberCount;                                   		// 0x0258 (0x0004) [0x0000000000000000]              
	int                                                m_nBanCount;                                      		// 0x025C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5096 );

		return pClassPointer;
	};

	void ClearMatchData ( );
	void EndUpdateBans ( unsigned long bShowSpectateInfo );
	void UpdateNextBan ( struct FPointer pRow, unsigned long bShowSpectateInfo );
	void BeginUpdateBans ( );
	void EndUpdateMembers ( );
	void UpdateNextMember ( struct FPointer pRow );
	void BeginUpdateMembers ( );
	void ClearRoleCalls ( );
	void OnMatchMessageIDTag ( struct FPointer pEvent );
	void OnPlayerMute ( class UTgEventDataItem* pEvent );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgLobbyDC_Team::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchInventory
// 0x0048 (0x02CC - 0x0284)
class UTgGFxMatchInventory : public UTgGfxScene
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0284 (0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxMatchInventory.m_mapTextures

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5097 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void ActivateTeamBooster ( struct Fdword dwItemLootId, struct Fdword dwItemSubType );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchInventory::pClassPointer = NULL;

// Class TgClientBase.TgDataGroup_Settings
// 0x0033 (0x01D0 - 0x019D)
class UTgDataGroup_Settings : public UTgDataChunk
{
public:
	class UTgSettingsDC_Video*                         m_VideoSettings;                                  		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgSettingsDC_Audio*                         m_AudioSettings;                                  		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UTgSettingsDC_UI*                            m_UISettings;                                     		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UTgSettingsDC_KeyBinding*                    m_KeyBindings;                                    		// 0x01B8 (0x0008) [0x0000000000000000]              
	class UTgSettingsDC_Spectator*                     m_Spectator;                                      		// 0x01C0 (0x0008) [0x0000000000000000]              
	class UTgSettingsDC_Account*                       m_Account;                                        		// 0x01C8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5098 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Settings::pClassPointer = NULL;

// Class TgClientBase.TgSettingsDC_Account
// 0x0003 (0x01A0 - 0x019D)
class UTgSettingsDC_Account : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5099 );

		return pClassPointer;
	};

	void usc_ResetEmailResponse ( );
	void usc_SetAccountSettings ( unsigned long optInSmiteNewsLetter, struct FString sEmail );
	void PopulateAccountData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Account::pClassPointer = NULL;

// Class TgClientBase.TgSettingsDC_Audio
// 0x0003 (0x01A0 - 0x019D)
class UTgSettingsDC_Audio : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5100 );

		return pClassPointer;
	};

	void usc_requestDeviceList ( );
	void usc_SetAudioSettings ( float Master, float sfx, float music, float voice, float matchNotifier, unsigned long AllPlayerMute, unsigned long skipSave, unsigned long MasterMute, unsigned long SFXMute, unsigned long MusicMute, unsigned long VoiceMute, unsigned long MatchNotifierMute, unsigned long ChatNotifierMute, unsigned long LicensedMusicMute, struct FString DefaultAudioDevice, unsigned long VivoxEnabled, float vivoxVol, unsigned long vivoxVolMute, float vivoxMic, unsigned long VivoxMicMute, int VivoxInputType );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Audio::pClassPointer = NULL;

// Class TgClientBase.TgSettingsDC_KeyBinding
// 0x002B (0x01C8 - 0x019D)
class UTgSettingsDC_KeyBinding : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_KeyBindings;                                    		// 0x01A0 (0x0008) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_KeybindObjects;                                 		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgKeyBind >                        m_BindableCommands;                               		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5101 );

		return pClassPointer;
	};

	void OnInputSettingChange ( class UTgEventDataItem* pEvent );
	void OnKeyBindMenuUpdate ( class UTgEventDataItem* pEvent );
	void OnKeyDisplayUpdate ( class UTgEventDataItem* pEvent );
	void usc_SetControllerSettings ( unsigned long bInvertMouse, unsigned long bControllerFeedback, float fLookSensitivityX, float fLookSensitivityY, float fLookAccelSpeed, float fDeadZoneLeft, float fDeadZoneRight, unsigned long bJumpEnabled, unsigned long bPublicParty, unsigned long bSkipSave, unsigned long bEnableBasicAttackControllerFeedback, unsigned long bEnableAimAssist, unsigned long bUseFixedPitchMode );
	void PopulateKeybinding ( int settingtype );
	void InitializeBindingData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_KeyBinding::pClassPointer = NULL;

// Class TgClientBase.TgSettingsDC_Spectator
// 0x002B (0x01C8 - 0x019D)
class UTgSettingsDC_Spectator : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_KeyBindings;                                    		// 0x01A0 (0x0008) [0x0000000000000000]              
	TArray< class UGFxObject* >                        m_KeybindObjects;                                 		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTgKeyBind >                        m_BindableCommands;                               		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5102 );

		return pClassPointer;
	};

	void OnSpecMenuUpdate ( class UTgEventDataItem* pEvent );
	void OnSpecKeyDisplayUpdate ( class UTgEventDataItem* pEvent );
	void PopulateKeybinding ( );
	void InitializeBindingData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Spectator::pClassPointer = NULL;

// Class TgClientBase.TgSettingsDC_UI
// 0x0013 (0x01B0 - 0x019D)
class UTgSettingsDC_UI : public UTgDataChunk
{
public:
	TArray< int >                                      m_LoadingPlateIDs;                                		// 0x01A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5103 );

		return pClassPointer;
	};

	void usc_SetCrossplaySetting ( int newCrossplaySetting );
	int usc_GetClientCrossplaySearchValue ( );
	void usc_SetUISettings ( struct FString SettingName, struct FString settingValue, int settingtype );
	void OnPrivilegeUpdate ( class UTgEventDataItem* pEvent );
	void OnInputSettingChange ( class UTgEventDataItem* pEvent );
	void OnLoginSuccess ( class UTgEventDataItem* pEvent );
	void UpdateUISettings ( int settingtype );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_UI::pClassPointer = NULL;

// Class TgClientBase.TgSettingsDC_Video
// 0x0003 (0x01A0 - 0x019D)
class UTgSettingsDC_Video : public UTgDataChunk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5104 );

		return pClassPointer;
	};

	void ShowSettingsChangedPopup ( );
	void CreateResolutionList ( );
	void UpdateVideoSettings ( );
	void ViewportResized ( );
	void usc_SetConsoleSettings ( float fGamma, unsigned long bVsync, float fSafeFrame );
	void usc_SetVsyncValue ( unsigned long bVsync );
	void usc_AutoConfig ( );
	void usc_SetGammaValue ( float nGamma );
	void usc_SetVideoSettings ( float nWorldDetail, float nTextureDetail, float nShadowDetail, float nParticleDetail, unsigned long bUseVSync, unsigned long bUseSpecialMatEffects, unsigned long bUseRagdollPhysics, unsigned long bFullScreen, unsigned long bBorderless, float nResX, float nResY, int nMultiSampleCount, unsigned long bD3D11Enabled, int nFXAAQuality, int nShaderQuality, int nResolutionScale );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgSettingsDC_Video::pClassPointer = NULL;

// Class TgClientBase.TgGFxClanListBase
// 0x0014 (0x017C - 0x0168)
class UTgGFxClanListBase : public UTgGFxEventObject
{
public:
	int                                                m_nApplicationId;                                 		// 0x0168 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_RegionList;                                     		// 0x016C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5105 );

		return pClassPointer;
	};

	void eventUpdateApplicationData ( );
	void ASC_UpdateApplicationData ( );
	void eventUpdateClanList ( );
	void ASC_UpdateClanList ( );
	void USC_ApplyToClan ( int nClanId, unsigned long bWithMessage );
	void USC_SearchClans ( struct FString sSearchString, int nJoinTypeId, int nRegionId, unsigned long bRecommendedOnly );
	void eventFinishLoading ( struct FString sMessage );
	void USC_RequestUpdate ( );
	void SetList ( class UGFxObject* pArray, struct FString sMessage );
	void OnPlayerRequest ( class UTgGFxPlayerProvider* pSource );
	void OnPrivilegeCheck ( unsigned char ePriv, unsigned char ePermiss );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxClanListBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxFriendsListView
// 0x002C (0x0194 - 0x0168)
class UTgGFxFriendsListView : public UTgGFxEventObject
{
public:
	unsigned long                                      m_bCanPlayOnline : 1;                             		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgGFxFriendSearchProvider*                  m_pSearch;                                        		// 0x016C (0x0008) [0x0000000000000000]              
	class UTgGFxDataProvider*                          m_pGFxSearchData;                                 		// 0x0174 (0x0008) [0x0000000000000000]              
	class UTgGFxDataGroup*                             m_pGFxLocalData;                                  		// 0x017C (0x0008) [0x0000000000000000]              
	class UTgGFxDataGroup*                             m_pGFxServerData;                                 		// 0x0184 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_pProcessingIndicator;                           		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5106 );

		return pClassPointer;
	};

	void USC_DeclineAllFriendRequests ( );
	void eventFinishLoading ( struct FString Message );
	void OnDeclineRequestProgress ( struct FTgDeferProgress* Progress );
	void OnServerSearchResults ( class UTgEventDataItem* pEvent );
	void OnLocalSearchResults ( class UTgEventDataItem* pEvent );
	void OnSearchEmpty ( class UTgEventDataItem* pEvent );
	void OnStartSearch ( class UTgEventDataItem* pEvent );
	bool USC_Search ( struct FString sSearch, unsigned long bIsLocal );
	void USC_RequestUpdateList ( );
	void SetList ( class UGFxObject* pArray, struct FString sError );
	void OnPrivilegeCheck ( unsigned char ePriv, unsigned char eLevel );
	void OnFriendsUpdate ( class UTgEventDataItem* pEventBase );
	void OnReceiveFriends ( class UTgGFxFriendData* pFriends );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxFriendsListView::pClassPointer = NULL;

// Class TgClientBase.TgGFxLearnVGS
// 0x0000 (0x0168 - 0x0168)
class UTgGFxLearnVGS : public UTgGFxEventObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5107 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxLearnVGS::pClassPointer = NULL;

// Class TgClientBase.TgGFxPartyInvitePane
// 0x0010 (0x0178 - 0x0168)
class UTgGFxPartyInvitePane : public UTgGFxEventObject
{
public:
	class UTgGFxFriendSearchProvider*                  m_pSearch;                                        		// 0x0168 (0x0008) [0x0000000000000000]              
	class UTgGFxDataProvider*                          m_pResults;                                       		// 0x0170 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5108 );

		return pClassPointer;
	};

	void OnSearchServer ( class UTgEventDataItem* pEvent );
	void OnSearchLocal ( class UTgEventDataItem* pEvent );
	void OnSearchEmpty ( class UTgEventDataItem* pEvent );
	void OnSearchStart ( class UTgEventDataItem* pEvent );
	void USC_Search ( struct FString sSearch );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPartyInvitePane::pClassPointer = NULL;

// Class TgClientBase.TgGFxPartyList
// 0x0028 (0x0190 - 0x0168)
class UTgGFxPartyList : public UTgGFxEventObject
{
public:
	struct FTgPlayerId                                 m_pidAutoSelect;                                  		// 0x0168 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bFirstLoad : 1;                                 		// 0x018C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5109 );

		return pClassPointer;
	};

	void eventFinishLoading ( struct FString Message );
	class UGFxObject* USC_GetPartiablePlayers ( );
	void USC_Disband ( );
	void USC_KickPlayer ( class UTgGFxPlayerData* pGFxPlayer );
	void USC_MakeLeader ( class UTgGFxPlayerData* pGFxPlayer );
	void USC_AddPlayer ( class UTgGFxPlayerData* pGFxPlayer );
	void OnMctsEvent ( struct FPointer pEvent );
	void OnPartyUpdate ( class UTgEventDataItem* pEvent );
	void OnFriendRequest ( class UTgGFxPlayerProvider* pProvider );
	void Repopulate ( );
	void OnPrivilegeCheck ( unsigned char ePriv, unsigned char eLevel );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPartyList::pClassPointer = NULL;

// Class TgClientBase.TgGFxAccountLinking
// 0x0000 (0x0284 - 0x0284)
class UTgGFxAccountLinking : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5110 );

		return pClassPointer;
	};

	void eventShowLinkExistingAccountScreen ( );
	void eventShowAccountCreationScreen ( );
	void USC_LinkExistingHiRezAccount ( struct FString sName, struct FString sPassword );
	void USC_CreateAndLinkHiRezAccount ( struct FString sName, struct FString sPassword, struct FString sEmail, unsigned long ageRequirement );
	void OnPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void OnLinkingError ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxAccountLinking::pClassPointer = NULL;

// Class TgClientBase.TgGFxBuyAllPurchaseModal
// 0x0020 (0x02A4 - 0x0284)
class UTgGFxBuyAllPurchaseModal : public UTgGfxScene
{
public:
	TArray< class UGFxObject* >                        arrItemList;                                      		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPriceInUI;                                     		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nLootTableItemId;                               		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nVendorId;                                      		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_nLocationId;                                    		// 0x02A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5111 );

		return pClassPointer;
	};

	bool USC_ShowErrorIfNotEnoughCurrency ( );
	void USC_PurchaseItem ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxBuyAllPurchaseModal::pClassPointer = NULL;

// Class TgClientBase.TgGFxChatModalBase
// 0x0030 (0x02B4 - 0x0284)
class UTgGFxChatModalBase : public UTgGfxScene
{
public:
	struct FTgIntervalHandle                           m_InfoUpdateDelay;                                		// 0x0284 (0x0010) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_InfoQuitDelay;                                  		// 0x0294 (0x0010) [0x0000000000000000]              
	TArray< struct Fdword >                            m_arrPidToUpdate;                                 		// 0x02A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5112 );

		return pClassPointer;
	};

	void ClearTimeouts ( );
	void OnInfoDelay ( float nDeltaTime );
	void ReceivePlayerInfo ( struct FPointer pEventBase );
	void eventSetChannelMembers ( class UGFxObject* Data );
	void eventMinimizeChat ( );
	void eventMaximizeChat ( );
	void UpdateChannelMembers ( class UGFxObject* Obj );
	void OnChatEvent ( class UTgEventDataItem* pEventBase );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxChatModalBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxExternalLink
// 0x0000 (0x0284 - 0x0284)
class UTgGFxExternalLink : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5113 );

		return pClassPointer;
	};

	void USC_GoTolink ( struct FString sLink );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxExternalLink::pClassPointer = NULL;

// Class TgClientBase.TgGfxFooterBase
// 0x00AC (0x0330 - 0x0284)
class UTgGfxFooterBase : public UTgGfxScene
{
public:
	unsigned char                                      m_eLastMode;                                      		// 0x0284 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eLastPlayerDisplayMode;                         		// 0x0285 (0x0001) [0x0000000000000000]              
	class UTgGFxObject*                                m_PlayerInfo;                                     		// 0x0288 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FooterButtons;                                  		// 0x0290 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FooterBg;                                       		// 0x0298 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_PromptBar;                                      		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UTgGFxButtonPrompt*                          m_pOptionsPrompt;                                 		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_QuestsBtnCount;                                 		// 0x02B0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RewardsBtnCount;                                		// 0x02B8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_NotificationBtnCount;                           		// 0x02C0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendsBtnCount;                                		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GiftBtnCount;                                   		// 0x02D0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FooterBtnsGotoPrompt;                           		// 0x02D8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LeaveQueueGamepad;                              		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LeaveQueueKeyboard;                             		// 0x02E8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BackButtonContainer;                            		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BackButton;                                     		// 0x02F8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ChatContainer;                                  		// 0x0300 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ChatMultibox;                                   		// 0x0308 (0x0008) [0x0000000000000000]              
	int                                                m_nFooterButtonHideCount;                         		// 0x0310 (0x0004) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_FriendTimeout;                                  		// 0x0314 (0x0010) [0x0000000000000000]              
	int                                                m_nMissQueueCount;                                		// 0x0324 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bMissQueuePopupArmed : 1;                       		// 0x0328 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bQueueTimeoutArmed : 1;                         		// 0x0328 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fTimerDelay;                                    		// 0x032C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5114 );

		return pClassPointer;
	};

	void eventShowCalloutNotification ( struct FString sValue, float fTime );
	void eventUpdateBoostBtn ( int Time );
	void eventShowSpectateQueued ( unsigned long bQueued );
	void OnFriendUpdateTimeout ( float nDeltaTime );
	void OnFriendUpdate ( struct FPointer pEventBase );
	void OnPopupClosed ( class UTgEventDataItem* pEvent );
	void OnNoMatchFound ( class UTgEventDataItem* pEvent );
	void OnInputModeChanged ( class UTgEventDataItem* pEvent );
	void OnNavigationAction ( class UTgEventDataItem* pEvent );
	void OnFocusFooterMain ( class UTgEventDataItem* pEvent );
	void RefreshBoosterTimer ( class UTgEventDataItem* pEvent );
	void RefreshDisplayMode ( class UTgEventDataItem* pEvent );
	void OnUpdateLogoState ( class UTgEventDataItem* pEvent );
	void OnLobbyStateChange ( class UTgEventDataItem* pEvent );
	void UpdateCallouts ( class UTgEventDataItem* pEvent );
	void OnSetFooterDisplayMode ( class UTgEventDataItem* pEvent );
	void OnUpdatePlayerInfoVisibility ( class UTgEventDataItem* pEvent );
	void OnSpectateQueuedState ( class UTgEventDataItem* pEvent );
	void Tick ( float DeltaTime );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxFooterBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxLoginBase
// 0x002C (0x02B0 - 0x0284)
class UTgGFxLoginBase : public UTgGfxScene
{
public:
	struct FTgIntervalHandle                           m_handleServerCheck;                              		// 0x0284 (0x0010) [0x0000000000000000]              
	unsigned long                                      m_bLinkAccountExisting : 1;                       		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHideCreateAccountBtn : 1;                      		// 0x0294 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bInLinkingProcess : 1;                          		// 0x0294 (0x0004) [0x0000000000000000] [0x00000004] 
	struct Fdword                                      m_dwEulaBitfield;                                 		// 0x0298 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             m_arrGamepadCombo;                                		// 0x029C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nConsolePlatformType;                           		// 0x02AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5115 );

		return pClassPointer;
	};

	struct FString USC_GetConsoleLoginPrompt ( unsigned long bLoginEnabled );
	bool USC_SettingsMenuLoaded ( );
	bool USC_CheckServerStatusIsUp ( );
	void USC_ShowLinkingPopup ( );
	void USC_CancelAccountCreation ( );
	bool USC_LoginGoogle ( );
	bool USC_LoginFacebook ( );
	bool USC_CreateHirezAccount ( struct FString sName, struct FString sPassword, struct FString sEmail, unsigned long ageRequirement );
	void USC_Login ( struct FString sUsername, struct FString sPassword );
	void USC_Reconnect ( );
	void eventShowAccountCreationScreen ( unsigned long bShowCreateScreen, unsigned long bDisableCreateAccountBtn );
	void eventSetLoginEnabled ( unsigned long bCanLogin );
	void eventLoginQueue ( );
	void eventLockOutUser ( struct FString sProcessing, unsigned long bShowLoading, unsigned long bForceCall );
	void eventLoginConsole ( int nControllerIdx );
	void eventasc_LoginReady ( int nAuthType );
	void eventasc_MustAcceptEula ( struct FString sMessage );
	void eventReloadLoginScreen ( );
	void eventCreateAccountError ( struct FString sMessage );
	void eventDefaultLoginError ( struct FString sMessage );
	void eventLoginAccepted ( struct FString sMessage );
	void eventGameNotOnAccount ( struct FString sMessage );
	void eventLoginInvalid ( struct FString sMessage );
	void eventAccountSuspend ( struct FString sMessage );
	void eventWrongVersion ( struct FString sMessage );
	void eventNameInvalid ( struct FString sMessage );
	void eventNameUnavailable ( struct FString sMessage );
	void eventNameUnacceptable ( struct FString sMessage );
	void eventAccountNameChange ( struct FString sMessage );
	void eventAccountHasNoPlayer ( struct FString sMessage );
	void OnPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void ServerUnderMaintenance ( );
	void SetLoginReady ( int nAuthType );
	void OnServerStatusTimeout ( float nDeltaTime );
	void CheckServerStatus ( );
	void OnSceneOpened ( class UTgEventDataItem* pEvent );
	void OnLoginError ( class UTgEventDataItem* pEvent );
	void OverrideStatusLockout ( );
	void MustAcceptEula ( struct FString sError );
	bool OnInput ( struct FPointer pInputEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxLoginBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchAutoOptions
// 0x0000 (0x0284 - 0x0284)
class UTgGFxMatchAutoOptions : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5116 );

		return pClassPointer;
	};

	void USC_SaveOptions ( unsigned long bAutoSkill, unsigned long bAutoBuy, unsigned long bAutoFilter, unsigned long bShowGameTips, unsigned long bShowRoleGuides, unsigned long bShowAllRecommendedBuilds );
	void USC_RequestOptions ( );
	void eventUpdateValues ( unsigned long bAutoSkill, unsigned long bAutoBuy, unsigned long bAutoFilter, unsigned long bShowGameTips, unsigned long bShowRoleGuides, unsigned long bIsTutorial, unsigned long bShowAllRecommendedBuilds );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchAutoOptions::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchCharacterConfirm
// 0x0014 (0x0298 - 0x0284)
class UTgGFxMatchCharacterConfirm : public UTgGfxScene
{
public:
	struct Fdword                                      m_nClassId;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_handleStateCheck;                               		// 0x0288 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5117 );

		return pClassPointer;
	};

	void USC_Confirm ( );
	bool GetLocalPlayerBanning ( );
	void OnUpdate ( float nDeltaTime );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchCharacterConfirm::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchLobbyShared
// 0x0034 (0x02B8 - 0x0284)
class UTgGFxMatchLobbyShared : public UTgGfxScene
{
public:
	class UTgPagePopup*                                m_pCurPopup;                                      		// 0x0284 (0x0008) [0x0000000000000000]              
	struct Fdword                                      m_nItemIdToBuy;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nLastProfileId;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nOverrideSkinId;                                		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nRerollsRemaining;                              		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nGuideCalloutCount;                             		// 0x029C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDemoState;                                     		// 0x02A0 (0x0001) [0x0000000000000000]              
	struct FTgIntervalHandle                           m_RerollTimeout;                                  		// 0x02A4 (0x0010) [0x0000000000000000]              
	unsigned long                                      m_bShouldShowMatchStart : 1;                      		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5118 );

		return pClassPointer;
	};

	bool USC_ToggleChat ( );
	void USC_OpenActions ( );
	bool USC_PreviewItem ( int nItemId, int nItemType );
	bool USC_RequestReroll ( );
	bool USC_CanPurchaseReroll ( );
	bool USC_LeaveLobby ( );
	bool USC_LobbyAction ( );
	bool USC_RequestTrade ( int nPlayerId );
	bool USC_SelectEmote ( int nEmoteId, unsigned long isAux );
	bool USC_SelectVoice ( int nVoiceIndex, unsigned long isAux );
	bool USC_SelectSkin ( int nSkinId, unsigned long isAux );
	bool USC_SelectClass ( int nClassId, unsigned long isAux );
	void eventOpenTeamBoosters ( );
	void eventNotifyUpdateGuideCallout ( int nCount );
	void eventNotifyUpdateEmoteData ( class UGFxObject* pData );
	void eventNotifyUpdateVoiceData ( class UGFxObject* pData );
	void eventNotifySelectVoice ( int nVoiceValueId );
	void eventNotifyRerollsRemaining ( int nCount );
	void eventNotifyLockIn ( class UGFxObject* Result );
	void eventNotifySelectClass ( int nProfileId );
	bool AttemptIndirectPurchase ( struct Fdword nClassId, struct Fdword nSkinId );
	void AttemptMatchPopup ( );
	class UTgLobbyDC_Match* GetMatchDC ( );
	void ClearSkinOverride ( );
	bool ActionError ( struct FString sMessage );
	void PlayErrorSound ( );
	bool SetSkinPreview ( struct Fdword nSkinId );
	class UGFxObject* CreateEmoteData ( struct Fdword nBotId );
	class UGFxObject* CreateVoiceData ( struct Fdword nBotId );
	class UGFxObject* CreateLockInResult ( struct Fdword nBotId );
	void OnRerollTimeout ( float nDeltaTime );
	void SetDemoState ( unsigned char eDemoState );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	bool OnMenuAction ( struct Fdword nAction );
	void OnLeaveLobbyPopup ( class UTgPagePopup* pData, struct FPopupResponse* Response );
	void OnMctsEvent ( struct FPointer pEvent );
	void OnUpdateGuideCallout ( class UTgEventDataItem* pEventBase );
	void OnTeamBooster ( class UTgEventDataItem* pEventBase );
	void OnDemoEvent ( class UTgEventDataItem* pEventBase );
	void OnCancelPurchase ( class UTgEventDataItem* pEventBase );
	void OnMatchStateChange ( class UTgEventDataItem* pEventBase );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchLobbyShared::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchRoleCall
// 0x0000 (0x0284 - 0x0284)
class UTgGFxMatchRoleCall : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5119 );

		return pClassPointer;
	};

	void USC_CallRole ( int nValueId );
	void USC_RequestDataProvider ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchRoleCall::pClassPointer = NULL;

// Class TgClientBase.TgGFxMatchTradePopup
// 0x0008 (0x028C - 0x0284)
class UTgGFxMatchTradePopup : public UTgGfxScene
{
public:
	struct Fdword                                      m_nActiveTradePlayer;                             		// 0x0284 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsGodTrade : 1;                                		// 0x0288 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5120 );

		return pClassPointer;
	};

	void USC_RespondToTrade ( unsigned long bAccept );
	void RejectTrade ( );
	void AcceptTrade ( );
	void CloseScene ( );
	void OnRoleTradeRequest ( struct FPointer pMarshal );
	void OnTradeCancel ( struct FPointer pMarshal );
	void OnTradeRequest ( struct FPointer pMarshal );
	void OnMctsEvent ( struct FPointer pEvent );
	bool PopulateRoleTradeData ( struct FPointer pRequester, struct FPointer pUs, struct Fdword traderRole, struct Fdword playerRole );
	bool PopulateTradeData ( struct FPointer pRequester, struct FPointer pUs );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxMatchTradePopup::pClassPointer = NULL;

// Class TgClientBase.TgGFxMorePoints
// 0x0008 (0x028C - 0x0284)
class UTgGFxMorePoints : public UTgGfxScene
{
public:
	class UTgSetupMorePointsEvent*                     m_pSetupData;                                     		// 0x0284 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5121 );

		return pClassPointer;
	};

	void SetupMorePoints ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGFxMorePoints::pClassPointer = NULL;

// Class TgClientBase.TgGFxPausedDisplay
// 0x0008 (0x028C - 0x0284)
class UTgGFxPausedDisplay : public UTgGfxScene
{
public:
	struct FName                                       m_nmLastBind;                                     		// 0x0284 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5122 );

		return pClassPointer;
	};

	void OnKeyBindChange ( class UTgEventDataItem* pEventBase );
	bool OnInputIntercept ( struct FPointer pInputEvent );
	void UpdateBindIntercept ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPausedDisplay::pClassPointer = NULL;

// Class TgClientBase.TgGFxPurchaseModalBase
// 0x0010 (0x0294 - 0x0284)
class UTgGFxPurchaseModalBase : public UTgGfxScene
{
public:
	struct Fdword                                      m_Location;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLongDescOpen : 1;                              		// 0x0288 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsAnonGift : 1;                                		// 0x0288 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nGiftPlayerId;                                  		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nGiftMsgIndex;                                  		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5123 );

		return pClassPointer;
	};

	void eventHideMarketplaceVisibility ( );
	void SetupLongDescEvent ( class UTgEventDataItem* pEvent );
	void eventCloseScreen ( );
	void eventSetupBattlePassPurchaseLevelModal ( int toLevel, int bundleQuantity );
	void eventSetupDoubleBundle ( class UGFxObject* Data, class UGFxObject* Data2, int Location );
	void eventSetupBundleCompare ( class UGFxObject* Data, class UGFxObject* Data2 );
	void eventSetupData ( class UGFxObject* Data, int popupType );
	void SetupLongDesc ( struct FString sItemName, struct FString sLongDesc, struct FString sSignedOffer );
	bool USC_ShowErrorIfNotEnoughCurrency ( int nCurrencyType, int nQuantity, int nCouponId, TArray< class UGFxObject* > arrItemDatas );
	void USC_CompleteBatchPurchase ( );
	void USC_AddBatchPurchaseItem ( int ItemId, int nVendorId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId );
	void USC_StartBatchPurchase ( );
	void USC_OnCloseScreen ( );
	void USC_CloseLongDesc ( );
	void USC_OnClickConfirm ( );
	void USC_PurchaseItem ( int ItemId, int nVendorId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId );
	void OpenOdysseyVoyagePurchaseModal ( class UTgEventDataItem* pEvent );
	void OpenOdysseyTerritoryPurchaseModal ( class UTgEventDataItem* pEvent );
	void OpenBattlePassPurchaseLevelModal ( class UTgEventDataItem* pEvent );
	void OpenBattlePassPurchaseModal ( class UTgDataItemDoublePurchase* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxPurchaseModalBase::pClassPointer = NULL;

// Class TgClientBase.TgGFxRecentlyPlayed
// 0x0020 (0x02A4 - 0x0284)
class UTgGFxRecentlyPlayed : public UTgGfxScene
{
public:
	TArray< class UTgGFxPlayerData* >                  m_arrRequestedNames;                              		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgGFxPlayerData* >                  m_arrPlayers;                                     		// 0x0294 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5124 );

		return pClassPointer;
	};

	void eventFinishLoading ( struct FString Message );
	void OnReceivePlayerNames ( unsigned long bSuccess, class UTgPlayerNameManager* pManager );
	void OnPrivilegeCheck ( unsigned char ePriv, unsigned char eLevel );
	void Populate ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxRecentlyPlayed::pClassPointer = NULL;

// Class TgClientBase.TgGFxSocialList
// 0x0000 (0x0284 - 0x0284)
class UTgGFxSocialList : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5125 );

		return pClassPointer;
	};

	bool USC_TryOpenDevMenu ( );
	void OnNavigate ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGFxSocialList::pClassPointer = NULL;

// Class TgClientBase.TgGFxVGSGame
// 0x0050 (0x02D4 - 0x0284)
class UTgGFxVGSGame : public UTgGfxScene
{
public:
	TArray< struct FVGSGameData >                      m_arrCommands;                                    		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_arrEasyCmds;                                    		// 0x0294 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_arrHardCmds;                                    		// 0x02A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPointer >                          m_arrRecentCmds;                                  		// 0x02B4 (0x0010) [0x0000000000101002]              ( CPF_Const | CPF_Native )
	struct FString                                     m_sHighScore;                                     		// 0x02C4 (0x0010) [0x0000000000504000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5126 );

		return pClassPointer;
	};

	int USC_GameOver ( int nCorrect, int nLongestStreak, int nTimeSecs, int nBonusTimeSecs );
	int USC_GetHighScore ( );
	class UGFxObject* USC_GetNewCombo ( int ElapsedTime, int maxTime );
	void OnQueueChange ( class UTgEventDataItem* pEvent );
	bool OnGamepadInput ( struct FPointer pInputEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxVGSGame::pClassPointer = NULL;

// Class TgClientBase.TgGFxViewerStore
// 0x0088 (0x030C - 0x0284)
class UTgGFxViewerStore : public UTgGfxScene
{
public:
	struct FTgEsportsData                              m_SeasonData;                                     		// 0x0284 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       m_nmCamera;                                       		// 0x0304 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5127 );

		return pClassPointer;
	};

	void USC_UpdateSelectedItem ( int nLootId );
	void USC_GoToStream ( );
	void USC_GoToLinking ( );
	void USC_TeamBuy ( int nLootId );
	void USC_RotatorBuy ( int nLootId );
	void USC_StoreBuy ( int nLootId, int nQuantity );
	void USC_MatchVote ( int nGroupId, int nTeamId );
	void SetCameraModel ( int nClassId, int nSkinId );
	void SetCamera ( struct FName nmCameraName );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void OnImageLoad ( class UTgEventDataItem* pEventBase );
	void OnJsonUpdate ( class UTgEventDataItem* pEventBase );
	void OnPicksUpdate ( class UTgEventDataItem* pEventBase );
	void OnMatchUpdate ( class UTgEventDataItem* pEventBase );
	void UpdateFromAvailable ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxViewerStore::pClassPointer = NULL;

// Class TgClientBase.TgGFxStoreDeals
// 0x0094 (0x01C4 - 0x0130)
class UTgGFxStoreDeals : public UTgGFxNativeWidget
{
public:
	TArray< struct FTgStoreDealButton >                arrDeal;                                          		// 0x0130 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgStoreDealBundles                         gfxRightPanel;                                    		// 0x0140 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                gfxDealsLabel;                                    		// 0x0180 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxTimerLabel;                                    		// 0x0188 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxBackground;                                    		// 0x0190 (0x0008) [0x0000000000000000]              
	struct FRect                                       m_rectDealArea;                                   		// 0x0198 (0x0010) [0x0000000000000000]              
	struct FQWord                                      m_nEndTime;                                       		// 0x01A8 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bFirstAppearance : 1;                           		// 0x01B0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTgIntervalHandle                           m_TimerInterval;                                  		// 0x01B4 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5128 );

		return pClassPointer;
	};

	void OnAcquisition ( struct FPointer pEventBase );
	void OnInputMode ( class UTgEventDataItem* pEventBase );
	void OnFocusChange ( struct FGFxEventData Data );
	void OnClickBundle ( struct FGFxEventData Data );
	void OnClickDeal ( struct FGFxEventData Data );
	void OnToggleVisibility ( struct FGFxEventData Data );
	void OnTimer ( float nDeltaTime );
	void ShowPage ( );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgGFxStoreDeals::pClassPointer = NULL;

// Class TgClientBase.TgGFxVGSShared
// 0x0098 (0x01C8 - 0x0130)
class UTgGFxVGSShared : public UTgGFxNativeWidget
{
public:
	struct FVGSPrompt                                  PromptA;                                          		// 0x0130 (0x0018) [0x0000000000000000]              
	struct FVGSPrompt                                  PromptB;                                          		// 0x0148 (0x0018) [0x0000000000000000]              
	struct FVGSPrompt                                  PromptX;                                          		// 0x0160 (0x0018) [0x0000000000000000]              
	struct FVGSPrompt                                  PromptY;                                          		// 0x0178 (0x0018) [0x0000000000000000]              
	struct FVGSPrompt                                  PromptLB;                                         		// 0x0190 (0x0018) [0x0000000000000000]              
	struct FVGSPrompt                                  PromptRB;                                         		// 0x01A8 (0x0018) [0x0000000000000000]              
	struct Fdword                                      m_nGroupId;                                       		// 0x01C0 (0x0004) [0x0000000000000000]              
	struct Fdword                                      m_nVGSId;                                         		// 0x01C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5129 );

		return pClassPointer;
	};

	void OnTextInput ( unsigned long bSuccess, struct FString sText );
	void UpdatePrompts ( );
	void SendVGSChat ( struct Fdword nChannel, struct Fdword nVgsId, struct FString sCustomMsg );
	bool OnInput ( struct FPointer pInputEvent );
	void Uninitialize ( );
	void Initialize ( );
};

UClass* UTgGFxVGSShared::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif