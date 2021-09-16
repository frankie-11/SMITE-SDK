/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_classes.h
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

#define CONST_DCCLAN_MAX_MEMBERS                                 1000
#define CONST_CLAN_RANK_GROUP                                    96
#define CONST_MAX_BROWSER_TEXTURES                               12
#define CONST_RATATOSKR_BOT_ID                                   2063
#define CONST_RATATOSKR_ACORN_DEVICE_ID                          18703
#define CONST_RECOMMEND_ITEM_CATEGORY_STARTER                    10772
#define CONST_STORE_HEAD_COUNT                                   4
#define CONST_STORE_LIST_COUNT                                   12
#define CONST_STORE_GRID_COUNT                                   16
#define CONST_STORE_ITEMS_PER_LINE_MAX                           4
#define CONST_NUM_ITEM_TIERS                                     3
#define CONST_NUM_ITEMS_IN_BUILD                                 6
#define CONST_NUM_ACTIVES_IN_BUILD                               2
#define CONST_NUM_CONSUMABLES_IN_BUILD                           2
#define CONST_NUM_ABILITIES                                      5
#define CONST_NUM_UPGRADEABLE_ABILITIES                          4
#define CONST_NUM_BUILDER_TABS                                   2
#define CONST_MAX_ABILITIES_PER_LEVEL                            2
#define CONST_NUM_ABILITY_ROWS                                   20
#define CONST_MAX_ABILITY_LEVEL                                  5
#define CONST_BITS_PER_ABILITY_LEVEL                             5
#define CONST_NUM_STAR_RATINGS                                   5
#define CONST_ITEM_COUNT                                         56
#define CONST_SKIN_COUNT                                         6
#define CONST_GOD_CARD_COUNT                                     16
#define CONST_WARD_COL_COUNT                                     8
#define CONST_QUEUE_TYPE_ALL                                     0
#define CONST_INVALID_GOD_ID                                     -1
#define CONST_HUD_ITEM_COUNT                                     6
#define CONST_ICON_COUNT                                         5
#define CONST_LOADOUT_CHOICE_COUNT                               45
#define CONST_LOADOUT_COL_COUNT                                  9
#define CONST_PLAYERS_COUNT                                      4
#define CONST_MAX_PARTY_COUNT                                    5

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TgClient.TgClanDC_Roster.TG_CLAN_ACTION
/*enum TG_CLAN_ACTION
{
	CLAN_KICK                                          = 0,
	CLAN_PROMOTE                                       = 1,
	CLAN_DEMOTE                                        = 2,
	CLAN_MAX                                           = 3
};*/

// Enum TgClient.TgGameMoviePlayer.ESpecialFunction
/*enum ESpecialFunction
{
	ESF_EmailPrompt                                    = 0,
	ESF_ClaimGodPack                                   = 1,
	ESF_PurchaseProductId                              = 2,
	ESF_MAX                                            = 3
};*/

// Enum TgClient.TgGfxAdventureProgressFox.EAdventureProgressFoxActions
/*enum EAdventureProgressFoxActions
{
	EAPFA_PurchaseAdventure                            = 0,
	EAPFA_PurchasePoints                               = 1,
	EAPFA_ClaimChest                                   = 2,
	EAPFA_MAX                                          = 3
};*/

// Enum TgClient.TgGfxAdventuresHub.EAdventureHub
/*enum EAdventureHub
{
	EAHEA_JoinQueue                                    = 0,
	EAHEA_UnlockBundle                                 = 1,
	EAHEA_VaultOver                                    = 2,
	EAHEA_VaultOut                                     = 3,
	EAHEA_VaultIn                                      = 4,
	EAHEA_GoalData                                     = 5,
	EAHEA_LeaveQueue                                   = 6,
	EAHEA_MAX                                          = 7
};*/

// Enum TgClient.TgGfxCharacterBuilder.TipType
/*enum TipType
{
	ETT_GridTip                                        = 0,
	ETT_ListTip                                        = 1,
	ETT_PreviewTip                                     = 2,
	ETT_ConsumableTip                                  = 3,
	ETT_ActiveTip                                      = 4,
	ETT_AbilityTip                                     = 5,
	ETT_MAX                                            = 6
};*/

// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderActions
/*enum CharacterBuilderActions
{
	ECBA_None                                          = 0,
	ECBA_ClearItems                                    = 1,
	ECBA_SaveProfile                                   = 2,
	ECBA_SetLevel                                      = 3,
	ECBA_ListScroll                                    = 4,
	ECBA_ListItem                                      = 5,
	ECBA_GridItem                                      = 6,
	ECBA_RoleChanged                                   = 7,
	ECBA_SelectItem                                    = 8,
	ECBA_ListTip                                       = 9,
	ECBA_GridTip                                       = 10,
	ECBA_HideTip                                       = 11,
	ECBA_RemoveItem                                    = 12,
	ECBA_BuildCheckbox                                 = 13,
	ECBA_PreviewTip                                    = 14,
	ECBA_PreviewItem                                   = 15,
	ECBA_ConsumableTip                                 = 16,
	ECBA_ConsumableItem                                = 17,
	ECBA_ActiveTip                                     = 18,
	ECBA_ActiveItem                                    = 19,
	ECBA_QtyChange                                     = 20,
	ECBA_AbilityTip                                    = 21,
	ECBA_AbilityItem                                   = 22,
	ECBA_Tab                                           = 23,
	ECBA_SetAbility                                    = 24,
	ECBA_SetAbilitySlot                                = 25,
	ECBA_SetClass                                      = 26,
	ECBA_SetAbilityActive                              = 27,
	ECBA_MAX                                           = 28
};*/

// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderTabs
/*enum CharacterBuilderTabs
{
	ECBT_Items                                         = 0,
	ECBT_Abilities                                     = 1,
	ECBT_MAX                                           = 2
};*/

// Enum TgClient.TgGfxChatInput.EChatInputActions
/*enum EChatInputActions
{
	ECIA_None                                          = 0,
	ECIA_Focus                                         = 1,
	ECIA_Input                                         = 2,
	ECIA_SetPlayerSelection                            = 3,
	ECIA_MAX                                           = 4
};*/

// Enum TgClient.TgGfxEOMLobby.EOMLEventAction
/*enum EOMLEventAction
{
	EOMLEA_SendGiftPoints                              = 0,
	EOMLEA_UnlockTriumpChest                           = 1,
	EOMLEA_UnlockAdventure                             = 2,
	EOMLEA_Facebook                                    = 3,
	EOMLEA_Twitter                                     = 4,
	EOMLEA_Stats                                       = 5,
	EOMLEA_Feedback                                    = 6,
	EOMLEA_MAX                                         = 7
};*/

// Enum TgClient.TgGfxEventLeaderboard.EEventLeaderboardTypes
/*enum EEventLeaderboardTypes
{
	EELT_NONE                                          = 0,
	EELT_XingMountain                                  = 1,
	EELT_FafMountNorm                                  = 2,
	EELT_FafMountHard                                  = 3,
	EELT_MAX                                           = 4
};*/

// Enum TgClient.TgGfxEventPurchase.EEventPurchaseActions
/*enum EEventPurchaseActions
{
	EVTPA_GetItemInfo                                  = 0,
	EVTPA_SubmitPurchase                               = 1,
	EVTPA_MAX                                          = 2
};*/

// Enum TgClient.TgGFxEventQuestNotification.EventQuestNotificationAction
/*enum EventQuestNotificationAction
{
	EVQNA_CancelSubmit                                 = 0,
	EVQNA_RedirectPlayNow                              = 1,
	EVQNA_RedirectQuestList                            = 2,
	EVQNA_MAX                                          = 3
};*/

// Enum TgClient.TgGfxFeedback.EFeedbackPopupActions
/*enum EFeedbackPopupActions
{
	EFPA_None                                          = 0,
	EFPA_Close                                         = 1,
	EFPA_SetStar                                       = 2,
	EFPA_Submit                                        = 3,
	EFPA_MAX                                           = 4
};*/

// Enum TgClient.TgGfxGods.EGodsTagMode
/*enum EGodsTagMode
{
	EGTM_None                                          = 0,
	EGTM_New                                           = 1,
	EGTM_Sale                                          = 2,
	EGTM_MAX                                           = 3
};*/

// Enum TgClient.TgGfxGods.EGodsViewPageActions
/*enum EGodsViewPageActions
{
	EGVPA_None                                         = 0,
	EGVPA_ItemScroll                                   = 1,
	EGVPA_ItemSelect                                   = 2,
	EGVPA_ItemToolTip                                  = 3,
	EGVPA_OnTabSelected                                = 4,
	EGVPA_SetPrice                                     = 5,
	EGVPA_Unlock                                       = 6,
	EGVPA_SkinScroll                                   = 7,
	EGVPA_SkinSelect                                   = 8,
	EGVPA_SkinToolTip                                  = 9,
	EGVPA_OnFilterchange                               = 10,
	EGVPA_UnlockItem                                   = 11,
	EGVPA_OnGodBuilder                                 = 12,
	EGVPA_GodSelect                                    = 13,
	EGVPA_GodScroll                                    = 14,
	EGVPA_SetGodOwned                                  = 15,
	EGVPA_SetSkinOwned                                 = 16,
	EGVPA_OnVoiceSkin                                  = 17,
	EGVPA_GotoItem                                     = 18,
	EGVPA_GodGridSelect                                = 19,
	EGVPA_SwapGodView                                  = 20,
	EGVPA_RefreshUnlock                                = 21,
	EGVPA_RefreshUGPRefund                             = 22,
	EGVPA_OpenLegendaryBundle                          = 23,
	EGVPA_MAX                                          = 24
};*/

// Enum TgClient.TgGfxGods.EGodsSkinTypeId
/*enum EGodsSkinTypeId
{
	EGSTI_Default                                      = 0,
	EGSTI_Other                                        = 1,
	EGSTI_Golden                                       = 2,
	EGSTI_Legendary                                    = 3,
	EGSTI_Diamond                                      = 4,
	EGSTI_MAX                                          = 5
};*/

// Enum TgClient.TgGfxGods.EGodsViewTabs
/*enum EGodsViewTabs
{
	EGVT_GODS                                          = 0,
	EGVT_ABOUT                                         = 1,
	EGVT_ABILITIES                                     = 2,
	EGVT_SKINS                                         = 3,
	EGVT_STATS                                         = 4,
	EGVT_ACHIEVE                                       = 5,
	EGVT_LORE                                          = 6,
	EGVT_EXTRAS                                        = 7,
	EGVT_HISTORY                                       = 8,
	EGVT_WARDS                                         = 9,
	EGVT_VOICE                                         = 10,
	EGVT_MAX                                           = 11
};*/

// Enum TgClient.TgGfxGods.EGodFilters
/*enum EGodFilters
{
	EGF_None                                           = 0,
	EGF_Owned                                          = 1,
	EGF_Assassin                                       = 2,
	EGF_Guardian                                       = 3,
	EGF_Hunter                                         = 4,
	EGF_Mage                                           = 5,
	EGF_Warrior                                        = 6,
	EGF_Mastered                                       = 7,
	EGF_Not_Mastered                                   = 8,
	EGF_Purchasable                                    = 9,
	EGF_MAX                                            = 10
};*/

// Enum TgClient.TgGfxHudNotify.NotifyType
/*enum NotifyType
{
	NT_Alert                                           = 0,
	NT_Accolade                                        = 1,
	NT_Kill                                            = 2,
	NT_MAX                                             = 3
};*/

// Enum TgClient.TgGfxHudNotify.NotifySubTypeAccolade
/*enum NotifySubTypeAccolade
{
	NSTA_Aced                                          = 0,
	NSTA_GoldFury                                      = 1,
	NSTA_Wild_Juggernaut                               = 2,
	NSTA_Siege_Juggernaut                              = 3,
	NSTA_FireGiant                                     = 4,
	NSTA_TowerKill                                     = 5,
	NSTA_PhoenixKill                                   = 6,
	NSTA_CapturedPoint                                 = 7,
	NSTA_ObjectiveSteal                                = 8,
	NSTA_NoScope                                       = 9,
	NSTA_HoldTheLine                                   = 10,
	NSTA_TowerDive                                     = 11,
	NSTA_Revenge                                       = 12,
	NSTA_Assist                                        = 13,
	NSTA_KillStreak_Basic                              = 14,
	NSTA_KillStreak_Breaker                            = 15,
	NSTA_Ganesha_Kill                                  = 16,
	NSTA_Ganesha_Assist                                = 17,
	NSTA_KillCombo                                     = 18,
	NSTA_KillStreak                                    = 19,
	NSTA_KillStreak01                                  = 20,
	NSTA_KillStreak02                                  = 21,
	NSTA_KillStreak03                                  = 22,
	NSTA_KillStreak04                                  = 23,
	NSTA_KillStreak05                                  = 24,
	NSTA_KillStreak06                                  = 25,
	NSTA_KillStreak07                                  = 26,
	NSTA_KillCombo01                                   = 27,
	NSTA_KillCombo02                                   = 28,
	NSTA_KillCombo03                                   = 29,
	NSTA_KillCombo04                                   = 30,
	NSTA_FirstBlood                                    = 31,
	NSTA_BullDemonKing                                 = 32,
	NSTA_Apophis                                       = 33,
	NSTA_Pyromancer                                    = 34,
	NSTA_MAX                                           = 35
};*/

// Enum TgClient.TgGfxLeaderboard.ELeaderboardTypes
/*enum ELeaderboardTypes
{
	LBT_RANKED_GOD                                     = 0,
	LBT_RANKED_MAX                                     = 1
};*/

// Enum TgClient.TgGfxPartyManagement.EPartyManagementView
/*enum EPartyManagementView
{
	EPMV_Friends                                       = 0,
	EPMV_Clans                                         = 1,
	EPMV_RecentlyPlayed                                = 2,
	EPMV_MAX                                           = 3
};*/

// Enum TgClient.TgGfxPartyManagement.PartyManagementActions
/*enum PartyManagementActions
{
	PMA_None                                           = 0,
	PMA_SelectTab                                      = 1,
	PMA_Search                                         = 2,
	PMA_Invite                                         = 3,
	PMA_ViewProfile                                    = 4,
	PMA_PromoteLeader                                  = 5,
	PMA_PromoteInvite                                  = 6,
	PMA_Kick                                           = 7,
	PMA_Leave                                          = 8,
	PMA_UpdateInviteList                               = 9,
	PMA_InviteListToggle                               = 10,
	PMA_UpdateTab                                      = 11,
	PMA_UpdateInviteListDisabled                       = 12,
	PMA_MAX                                            = 13
};*/

// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileFilter
/*enum EPlayerProfileFilter
{
	PPF_YOURSELF                                       = 0,
	PPF_FRIENDS                                        = 1,
	PPF_CLAN                                           = 2,
	PPF_RECENTLY_PLAYED                                = 3,
	PPF_MAX                                            = 4
};*/

// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileTab
/*enum EPlayerProfileTab
{
	PPT_OVERVIEW                                       = 0,
	PPT_MATCHES                                        = 1,
	PPT_GODS                                           = 2,
	PPT_RECORDS                                        = 3,
	PPT_MAX                                            = 4
};*/

// Enum TgClient.TgGfxProfileWorshiper.EGodMasteryFilter
/*enum EGodMasteryFilter
{
	GMS_ALL                                            = 0,
	GMS_MASTERED                                       = 1,
	GMS_IN_PROGRESS                                    = 2,
	GMS_NOT_MASTERED                                   = 3,
	GMS_NOT_PLAYED                                     = 4,
	GMS_MAX                                            = 5
};*/

// Enum TgClient.TgGfxRacerDispatcher.TgRacerDispatcherEvent
/*enum TgRacerDispatcherEvent
{
	TGRDE_PlacementChange                              = 0,
	TGRDE_WeaponChange                                 = 1,
	TGRDE_LapChange                                    = 2,
	TGRDE_MAX                                          = 3
};*/

// Enum TgClient.TgGfxStoreChestPC.EStoreChestPCActions
/*enum EStoreChestPCActions
{
	ESCPCA_None                                        = 0,
	ESCPCA_ItemUnlock                                  = 1,
	ESCPCA_RefreshItems                                = 2,
	ESCPCA_ChestIndex                                  = 3,
	ESCPCA_MAX                                         = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TgClient.TgGameLaunch
// 0x0000 (0x04D0 - 0x04D0)
class ATgGameLaunch : public ATgGameLaunchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5130 );

		return pClassPointer;
	};

};

UClass* ATgGameLaunch::pClassPointer = NULL;

// Class TgClient.TgGameViewportClient
// 0x0000 (0x01D8 - 0x01D8)
class UTgGameViewportClient : public UTgGameViewportClientBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5131 );

		return pClassPointer;
	};

};

UClass* UTgGameViewportClient::pClassPointer = NULL;

// Class TgClient.TgGfxAchievementPopup
// 0x0000 (0x0284 - 0x0284)
class UTgGfxAchievementPopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5132 );

		return pClassPointer;
	};

	void eventQueueAchievement ( );
	void asc_QueueAchievement ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxAchievementPopup::pClassPointer = NULL;

// Class TgClient.TgGfxAchievementSelection
// 0x0014 (0x0298 - 0x0284)
class UTgGfxAchievementSelection : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                              		// 0x0284 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_ApplySelections_Delegate__Delegate;         		// 0x0288 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x028C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5133 );

		return pClassPointer;
	};

	void eventUpdateSelectedAchievements ( );
	void ASC_UpdateSelectedAchievements ( );
	void eventUpdateScreen ( );
	void ASC_UpdateScreen ( );
	void USC_ApplySelections ( int as1, int as2, int as3, int as4 );
	void USC_ApplySelections_Delegate ( int as1, int as2, int as3, int as4 );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAchievementSelection::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgress
// 0x0008 (0x028C - 0x0284)
class UTgGfxAdventureProgress : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nVictoryLaps;                                   		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5134 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgress::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgressDungeon2
// 0x0014 (0x0298 - 0x0284)
class UTgGfxAdventureProgressDungeon2 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nStatueActivityId;                              		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nStatueGoalId;                                  		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nStatueCompleteGoalId;                          		// 0x0294 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5135 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressDungeon2::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgressFox
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxAdventureProgressFox : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nChestItemId;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleId;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nFox1LTI;                                       		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nFox2LTI;                                       		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nFox3LTI;                                       		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_nFox4LTI;                                       		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_nFox1ItemId;                                    		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                m_nFox2ItemId;                                    		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                m_nFox3ItemId;                                    		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                m_nFox4ItemId;                                    		// 0x02B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      b_chestPurchaseLock : 1;                          		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      b_requestedChestPurchase : 1;                     		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5136 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void SetupChestPurchaseFox ( );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressFox::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgressMMO
// 0x0008 (0x028C - 0x0284)
class UTgGfxAdventureProgressMMO : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5137 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressMMO::pClassPointer = NULL;

// Class TgClient.TgGfxAdventuresHub
// 0x0074 (0x02F8 - 0x0284)
class UTgGfxAdventuresHub : public UTgGfxScene
{
public:
	int                                                m_nBundleId;                                      		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nChestItemId;                                   		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleLTI;                                		// 0x028C (0x0004) [0x0000000000000000]              
	unsigned long                                      b_chestPurchaseLock : 1;                          		// 0x0290 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      b_requestedChestPurchase : 1;                     		// 0x0290 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nCurrentQueueId;                                		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nChestLTI;                                      		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nPointLTI;                                      		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI1;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI2;                                      		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI3;                                      		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI4;                                      		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentAdventureItem;                          		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                m_nActivityId;                                    		// 0x02B4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SetUserViewedEvent_Delegate__Delegate;      		// 0x02B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_GetAdventureLeaderboard_Delegate__Delegate; 		// 0x02C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_GotoVault_Delegate__Delegate;               		// 0x02D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x02DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_OpenEventCam_Delegate__Delegate;            		// 0x02E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x02EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5138 );

		return pClassPointer;
	};

	void eventSceneTick ( float Delta );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void SetBundleOwnership ( );
	void TriggerLobbyEventHub ( int nType, int nTarget );
	void TriggerLobbyCamEvent ( int nType, int nTarget );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void LeaveQueue ( );
	void PopulateGoalData ( );
	void USC_OpenEventCam ( unsigned long isSmall );
	void USC_GotoVault ( unsigned long bIsSmall );
	void USC_SetUserViewedEvent ( );
	void USC_GetAdventureLeaderboard ( int nEventId );
	void USC_OpenEventCam_Delegate ( );
	void USC_GotoVault_Delegate ( );
	void USC_GetAdventureLeaderboard_Delegate ( );
	void USC_SetUserViewedEvent_Delegate ( );
};

UClass* UTgGfxAdventuresHub::pClassPointer = NULL;

// Class TgClient.TgGfxBooster
// 0x0010 (0x0294 - 0x0284)
class UTgGfxBooster : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_ShowPurchasePopup_Delegate__Delegate;       		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5139 );

		return pClassPointer;
	};

	void UpdateBoosterTime ( );
	void USC_ShowPurchasePopup ( int ItemId, int nQuantity );
	void USC_ShowPurchasePopup_Delegate ( int ItemId, int nQuantity );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxBooster::pClassPointer = NULL;

// Class TgClient.TgGfxCharacterBuilder
// 0x16E8 (0x196C - 0x0284)
class UTgGfxCharacterBuilder : public UTgGfxScene
{
public:
	struct FString                                     m_lsItems;                                        		// 0x0284 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActives;                                      		// 0x0294 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsConsumables;                                  		// 0x02A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsPassive;                                      		// 0x02B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActivated;                                    		// 0x02C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAbilities;                                    		// 0x02D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSkip;                                         		// 0x02E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSaveItems;                                    		// 0x02F4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSaveAbilities;                                		// 0x0304 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                m_playerClassId;                                  		// 0x0314 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedTab;                                   		// 0x0318 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Tabs[ 0x2 ];                                    		// 0x031C (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_SaveButton;                                     		// 0x032C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ClearButton;                                    		// 0x0334 (0x0008) [0x0000000000000000]              
	int                                                m_nSelectedItem;                                  		// 0x033C (0x0004) [0x0000000000000000]              
	int                                                m_nHighlightIndex;                                		// 0x0340 (0x0004) [0x0000000000000000]              
	int                                                m_nItemScrollIndex;                               		// 0x0344 (0x0004) [0x0000000000000000]              
	TArray< struct FItemBuilderCategory >              m_Categories;                                     		// 0x0348 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemBuilderCategory >              m_CustomCategories;                               		// 0x0358 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownList;                                      		// 0x0368 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownGrid;                                      		// 0x0378 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nRoleIndex;                                     		// 0x0388 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_TipType;                                        		// 0x038C (0x0001) [0x0000000000000000]              
	int                                                m_nPreviewTipIndex;                               		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x0394 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x0398 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsCustomRole : 1;                              		// 0x039C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsSubFilter : 1;                               		// 0x039C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bProfileModified : 1;                           		// 0x039C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bAbilitiesModified : 1;                         		// 0x039C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_nCustomRoleIndex;                               		// 0x03A0 (0x0004) [0x0000000000000000]              
	TArray< struct FPreviewItem >                      m_PreviewItemData;                                		// 0x03A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      m_PreviewActiveData;                              		// 0x03B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      m_PreviewConsumableData;                          		// 0x03C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nFilterIndex;                                   		// 0x03D4 (0x0004) [0x0000000000000000]              
	int                                                m_nFocusedItemIndex;                              		// 0x03D8 (0x0004) [0x0000000000000000]              
	int                                                m_nFocusedItemCategory;                           		// 0x03DC (0x0004) [0x0000000000000000]              
	int                                                m_bIsFocusingGridItem;                            		// 0x03E0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemView;                                       		// 0x03E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BuildPreview;                                   		// 0x03EC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RoleDropDown;                                   		// 0x03F4 (0x0008) [0x0000000000000000]              
	struct FItemDisplay                                m_ListItem[ 0xC ];                                		// 0x03FC (0x0600) [0x0000000000000000]              
	struct FItemDisplay                                m_GridItem[ 0x10 ];                               		// 0x09FC (0x0800) [0x0000000000000000]              
	class UTgGFxObject*                                m_Header[ 0x4 ];                                  		// 0x11FC (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderTF[ 0x4 ];                                		// 0x121C (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderBlock[ 0x4 ];                             		// 0x123C (0x0020) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewItems[ 0x6 ];                            		// 0x125C (0x0060) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewActives[ 0x2 ];                          		// 0x12BC (0x0020) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewConsumables[ 0x2 ];                      		// 0x12DC (0x0020) [0x0000000000000000]              
	int                                                m_nSelectedLevel;                                 		// 0x12FC (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedAbility;                               		// 0x1300 (0x0004) [0x0000000000000000]              
	struct FLevelInfo                                  m_nLevelAbilities[ 0x14 ];                        		// 0x1304 (0x00A0) [0x0000000000000000]              
	int                                                m_nAbilityLevels[ 0x4 ];                          		// 0x13A4 (0x0010) [0x0000000000000000]              
	struct FString                                     m_AbilityIcons[ 0x4 ];                            		// 0x13B4 (0x0040) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_AbilityPreview;                                 		// 0x13F4 (0x0008) [0x0000000000000000]              
	struct FAbilitySelectionButton                     m_PreviewAbilities[ 0x5 ];                        		// 0x13FC (0x0140) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilitiesView;                                  		// 0x153C (0x0008) [0x0000000000000000]              
	struct FAbilitySelectionButton                     m_AbilityBtns[ 0x4 ];                             		// 0x1544 (0x0100) [0x0000000000000000]              
	struct FAbilityRow                                 m_AbilityRows[ 0x14 ];                            		// 0x1644 (0x0320) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilitySkip;                                    		// 0x1964 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5140 );

		return pClassPointer;
	};

	bool HasVendorData ( );
	class UTgVendorData* GetVendorData ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxCharacterBuilder::pClassPointer = NULL;

// Class TgClient.TgGfxClanIconPicker
// 0x0010 (0x0294 - 0x0284)
class UTgGfxClanIconPicker : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectIcon_Delegate__Delegate;              		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5141 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* pMP );
	void USC_SelectIcon ( int nIconItemId );
	void USC_SelectIcon_Delegate ( );
};

UClass* UTgGfxClanIconPicker::pClassPointer = NULL;

// Class TgClient.TgGFxDungeonCurrencies
// 0x0000 (0x0284 - 0x0284)
class UTgGFxDungeonCurrencies : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5142 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxDungeonCurrencies::pClassPointer = NULL;

// Class TgClient.TgGfxEOMLobby
// 0x0014 (0x0298 - 0x0284)
class UTgGfxEOMLobby : public UTgGfxScene
{
public:
	struct FString                                     m_sGiftedPlayerName;                              		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nGiftedPlayerId;                                		// 0x0294 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5143 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void OnStats ( struct FString instanceId );
	void OnFeedback ( );
	void OnTwitter ( struct FString instanceId );
	void OnFacebook ( struct FString instanceId );
	void OnSendPlayerGift ( class UTgEventDataItem* pEvent );
	void OnSendGiftPoints ( class UGFxObject* pData );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void USC_SendPlayerGift ( struct FString PlayerName, struct FString nPlayerId );
	void eventReceiveGiftedPoints ( class UGFxObject* Data );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxEOMLobby::pClassPointer = NULL;

// Class TgClient.TgGfxEventAchievements
// 0x0000 (0x0284 - 0x0284)
class UTgGfxEventAchievements : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5144 );

		return pClassPointer;
	};

	void CheckBundleOwned ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventAchievements::pClassPointer = NULL;

// Class TgClient.TgGfxEventLeaderboard
// 0x0020 (0x02A4 - 0x0284)
class UTgGfxEventLeaderboard : public UTgGfxScene
{
public:
	unsigned long                                      requestingData : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      gotFriendsData : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      gotPersonalData : 1;                              		// 0x0284 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      gotWorldData : 1;                                 		// 0x0284 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     dataIndex;                                        		// 0x0288 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCurrentEventId;                                  		// 0x0298 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  cachedBoards;                                     		// 0x029C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5145 );

		return pClassPointer;
	};

	void USC_RequestEventLeaderboard ( int EventIdx );
	class UGFxObject* Chunk ( struct FString dataIdx );
	class UGFxObject* CreateChunk ( struct FString dataIdx );
	bool UpdateFromChunk ( struct FString dataIdx );
	void OnReceivePlayerNames ( );
	void ReceivedAllData ( );
	void PopulateDropdown ( TArray< int > arrEventIds );
	void ShowLeaderboard ( int nStartIndex, int nEndIndex );
	void RequestFriendAndWorldPlayerNames ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventLeaderboard::pClassPointer = NULL;

// Class TgClient.TgGfxFeedback
// 0x00AC (0x0330 - 0x0284)
class UTgGfxFeedback : public UTgGfxScene
{
public:
	struct FString                                     m_lsHeaderServerStability;                        		// 0x0284 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsHeaderMatchmaking;                            		// 0x0294 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDescriptionServerStability;                   		// 0x02A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDescriptionMatchmaking;                       		// 0x02B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSubmit;                                       		// 0x02C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsComments;                                     		// 0x02D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnrated;                                      		// 0x02E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTgGFxObject*                                m_Comments;                                       		// 0x02F4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RatingBtns[ 0x5 ];                              		// 0x02FC (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                m_RatingTF;                                       		// 0x0324 (0x0008) [0x0000000000000000]              
	int                                                m_nStarRating;                                    		// 0x032C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5146 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxFeedback::pClassPointer = NULL;

// Class TgClient.TgGfxGlossary
// 0x0000 (0x0284 - 0x0284)
class UTgGfxGlossary : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5147 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxGlossary::pClassPointer = NULL;

// Class TgClient.TgGfxGods
// 0x17CC (0x1A50 - 0x0284)
class UTgGfxGods : public UTgGfxScene
{
public:
	struct FString                                     m_lsStandard;                                     		// 0x0284 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsOwned;                                        		// 0x0294 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     rented_label;                                     		// 0x02A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsCurrentRentalExpiresIn;                       		// 0x02B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDiamond;                                      		// 0x02C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDiamond_description;                          		// 0x02D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusive;                                    		// 0x02E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusive_description;                        		// 0x02F4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveChest;                               		// 0x0304 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveChest_description;                   		// 0x0314 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveClan;                                		// 0x0324 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveClan_description;                    		// 0x0334 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusivePromo;                               		// 0x0344 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusivePromo_description;                   		// 0x0354 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveEsports;                             		// 0x0364 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveEsports_description;                 		// 0x0374 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveSeasonal;                            		// 0x0384 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveSeasonal_description;                		// 0x0394 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsGold;                                         		// 0x03A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsGold_description;                             		// 0x03B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLegendary;                                    		// 0x03C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLegendary_description;                        		// 0x03D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimited;                                      		// 0x03E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimited_description;                          		// 0x03F4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedChest;                                 		// 0x0404 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedChest_description;                     		// 0x0414 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedClan;                                  		// 0x0424 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedClan_description;                      		// 0x0434 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedPromo;                                 		// 0x0444 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedPromo_description;                     		// 0x0454 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedEsports;                               		// 0x0464 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedEsports_description;                   		// 0x0474 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedSeasonal;                              		// 0x0484 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedSeasonal_description;                  		// 0x0494 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnlimited;                                    		// 0x04A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnlimited_description;                        		// 0x04B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsClan;                                         		// 0x04C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     days_label;                                       		// 0x04D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     day_label;                                        		// 0x04E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hours_label;                                      		// 0x04F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hour_label;                                       		// 0x0504 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     minutes_label;                                    		// 0x0514 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     minute_label;                                     		// 0x0524 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     seconds_label;                                    		// 0x0534 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     second_label;                                     		// 0x0544 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      god_ids;                                          		// 0x0554 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGFxItem                                    m_ItemBtn[ 0x38 ];                                		// 0x0564 (0x08C0) [0x0000000000000000]              
	struct FGFxSkinBtn                                 m_SkinBtn[ 0x6 ];                                 		// 0x0E24 (0x02A0) [0x0000000000000000]              
	struct FGFxGodBtn                                  m_GodCardBtn[ 0x10 ];                             		// 0x10C4 (0x0680) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchField;                                    		// 0x1744 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterDropdown;                                 		// 0x174C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodGrid;                                        		// 0x1754 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodCardCheckbox;                                		// 0x175C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodGridScrollbar;                               		// 0x1764 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodCardScrollbar;                               		// 0x176C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_UGPIconsBtn;                                    		// 0x1774 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_UGPCardsBtn;                                    		// 0x177C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinCall;                                       		// 0x1784 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinCallTF;                                     		// 0x178C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraCall;                                      		// 0x1794 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraCallTF;                                    		// 0x179C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceCall;                                      		// 0x17A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceCallTF;                                    		// 0x17AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VPContainer;                                    		// 0x17B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinGoto;                                       		// 0x17BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RentalInfo;                                     		// 0x17C4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinInfo;                                       		// 0x17CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SideSkinInfo;                                   		// 0x17D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_UnlockBtn;                                      		// 0x17DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EmoteLabel;                                     		// 0x17E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RightGodsText;                                  		// 0x17EC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RightGodsText2;                                 		// 0x17F4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilityScreen;                                  		// 0x17FC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_AboutScreen;                                    		// 0x1804 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoreScreen;                                     		// 0x180C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatScreen;                                     		// 0x1814 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraScreen;                                    		// 0x181C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_HistoryScreen;                                  		// 0x1824 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceScreen;                                    		// 0x182C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_AchieveScreen;                                  		// 0x1834 (0x0008) [0x0000000000000000]              
	int                                                m_nSelectedIndex;                                 		// 0x183C (0x0004) [0x0000000000000000]              
	int                                                m_nScrollIndex;                                   		// 0x1840 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_nShownItems;                                    		// 0x1844 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nUnsortedItems;                                 		// 0x1854 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RentalGodsIndex;                                		// 0x1864 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearchField;                                   		// 0x1874 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x1884 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fTipWaitTimer;                                  		// 0x1894 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x1898 (0x0004) [0x0000000000000000]              
	float                                              m_fRentalTimer;                                   		// 0x189C (0x0004) [0x0000000000000000]              
	int                                                m_nHighlightIndex;                                		// 0x18A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bScrollToSelection : 1;                         		// 0x18A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasGodPack : 1;                                		// 0x18A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShouldUpdateCall : 1;                          		// 0x18A4 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nSelectedTab;                                   		// 0x18A8 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedGodId;                                 		// 0x18AC (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedSkinId;                                		// 0x18B0 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedWardSkinId;                            		// 0x18B4 (0x0004) [0x0000000000000000]              
	int                                                m_nFilterType;                                    		// 0x18B8 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevGodScrollIndex;                            		// 0x18BC (0x0004) [0x0000000000000000]              
	int                                                m_nPrevWardScrollIndex;                           		// 0x18C0 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsHPLow;                                    		// 0x18C4 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsHPHigh;                                   		// 0x18C8 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsManaLow;                                  		// 0x18CC (0x0004) [0x0000000000000000]              
	int                                                m_nStatsManaHigh;                                 		// 0x18D0 (0x0004) [0x0000000000000000]              
	int                                                m_nCachedGodsTabSelection;                        		// 0x18D4 (0x0004) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x18D8 (0x0004) [0x0000000000000000]              
	int                                                m_nColCount;                                      		// 0x18DC (0x0004) [0x0000000000000000]              
	struct FItemData_GodPage                           m_SelectedGod;                                    		// 0x18E0 (0x00E8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_GodData;                                        		// 0x19C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_WardData;                                       		// 0x19D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_SkinData;                                       		// 0x19E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStreamData_Gods >                  m_StreamData;                                     		// 0x19F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchievementData_GodsAchievements > m_achievementDatas;                               		// 0x1A08 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_achievementDatasArray;                          		// 0x1A18 (0x0008) [0x0000000000000000]              
	TArray< struct FVendorItemUIHint >                 m_vendorUiHints;                                  		// 0x1A20 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateEmoteSelection_Delegate__Delegate;    		// 0x1A30 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x1A34 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_PlayGodVideo_Delegate__Delegate;            		// 0x1A40 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x1A44 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5148 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void UpdateUGPValue ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_PlayGodVideo ( int abilityNumber );
	void USC_PlayGodVideo_Delegate ( );
	void USC_UpdateEmoteSelection ( struct FString emoteName );
	void USC_UpdateEmoteSelection_Delegate ( struct FString emoteName );
};

UClass* UTgGfxGods::pClassPointer = NULL;

// Class TgClient.TgGfxGodsHistory
// 0x0038 (0x02BC - 0x0284)
class UTgGfxGodsHistory : public UTgGfxScene
{
public:
	int                                                m_godId;                                          		// 0x0284 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_updatedQueues : 1;                              		// 0x0288 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __USC_GetQueuesDropdown_Delegate__Delegate;       		// 0x028C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0290 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_GetHistoryData_Delegate__Delegate;          		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_ShowMatchDetails_Delegate__Delegate;        		// 0x02AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x02B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5149 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateGodHistory ( );
	void ASC_UpdateGodHistory ( );
	void eventUpdateQueueData ( );
	void ASC_UpdateQueueData ( );
	void USC_ShowMatchDetails ( int pMatchID );
	void USC_GetHistoryData ( int queueId );
	void USC_GetQueuesDropdown ( int godId );
	void USC_ShowMatchDetails_Delegate ( int pMatchID );
	void USC_GetHistoryData_Delegate ( int queueId );
	void USC_GetQueuesDropdown_Delegate ( int godId );
};

UClass* UTgGfxGodsHistory::pClassPointer = NULL;

// Class TgClient.TgGfxGuides
// 0x0000 (0x0284 - 0x0284)
class UTgGfxGuides : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5150 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxGuides::pClassPointer = NULL;

// Class TgClient.TgGfxHudItems
// 0x004C (0x02D0 - 0x0284)
class UTgGfxHudItems : public UTgGfxScene
{
public:
	class UTgVendorData*                               m_VendorData;                                     		// 0x0284 (0x0008) [0x0000000000000000]              
	int                                                m_nPlayerClass;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Item[ 0x6 ];                                    		// 0x0290 (0x0030) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SetupItemDisplay_Delegate__Delegate;        		// 0x02C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5151 );

		return pClassPointer;
	};

	void eventUpdateGlow ( int Index, unsigned long Visibility );
	void ASC_UpdateGlow ( int Index, unsigned long Visibility );
	void USC_SetupItemDisplay ( );
	void USC_SetupItemDisplay_Delegate ( );
	void CheckCurrency ( class UTgEventDataItem* pEvent );
	void CheckWishList ( unsigned long bPurge );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxHudItems::pClassPointer = NULL;

// Class TgClient.TgGfxHudNotify
// 0x0204 (0x0488 - 0x0284)
class UTgGfxHudNotify : public UTgGfxScene
{
public:
	float                                              m_fKillDuration;                                  		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              m_fKillTimer;                                     		// 0x0288 (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeAccumulateDuration;                    		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeDuration;                              		// 0x0290 (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeTimer;                                 		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nEnemyIconIndex;                                		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nFriendIconIndex;                               		// 0x029C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bKillInterrupt : 1;                             		// 0x02A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fIconDuration;                                  		// 0x02A4 (0x0004) [0x0000000000000000]              
	float                                              m_fEnemyIconTimer;                                		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              m_fFriendIconTimer;                               		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              m_fObjectiveDuration;                             		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillMC;                                         		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerName;                                     		// 0x02BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerIcon;                                     		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerGlow;                                     		// 0x02CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerFrame;                                    		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimName;                                     		// 0x02DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimIcon;                                     		// 0x02E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimGlow;                                     		// 0x02EC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimFrame;                                    		// 0x02F4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_RedSlash;                                       		// 0x02FC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BlueSlash;                                      		// 0x0304 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EnemyMC[ 0x5 ];                                 		// 0x030C (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                m_EnemyIcon[ 0x5 ];                               		// 0x0334 (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendMC[ 0x5 ];                                		// 0x035C (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendIcon[ 0x5 ];                              		// 0x0384 (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                m_AccoladeMC;                                     		// 0x03AC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_AccoladeName;                                   		// 0x03B4 (0x0008) [0x0000000000000000]              
	struct FNotifyData                                 m_NewData;                                        		// 0x03BC (0x00AC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FNotifyData >                       m_Notifications;                                  		// 0x0468 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventLogData >                     m_EventLog;                                       		// 0x0478 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5152 );

		return pClassPointer;
	};

	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudNotify::pClassPointer = NULL;

// Class TgClient.TgGfxHudUpgrade
// 0x0070 (0x02F4 - 0x0284)
class UTgGfxHudUpgrade : public UTgGfxScene
{
public:
	float                                              m_fItemTimer;                                     		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              m_fSkillTimer;                                    		// 0x0288 (0x0004) [0x0000000000000000]              
	float                                              m_fItemDuration;                                  		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              m_fSkillDuration;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_Items;                                          		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_Skills;                                         		// 0x02A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_ItemMC;                                         		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemType;                                       		// 0x02BC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemName;                                       		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemIcon;                                       		// 0x02CC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillMC;                                        		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillType;                                      		// 0x02DC (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillName;                                      		// 0x02E4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillIcon;                                      		// 0x02EC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5153 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudUpgrade::pClassPointer = NULL;

// Class TgClient.TgGfxIntro
// 0x0000 (0x0284 - 0x0284)
class UTgGfxIntro : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5154 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxIntro::pClassPointer = NULL;

// Class TgClient.TgGfxItemToast
// 0x0000 (0x0284 - 0x0284)
class UTgGfxItemToast : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5155 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventToastItem ( int ItemId );
	void ASC_ToastItem ( int ItemId );
};

UClass* UTgGfxItemToast::pClassPointer = NULL;

// Class TgClient.TgGfxLeaderboard
// 0x0000 (0x0284 - 0x0284)
class UTgGfxLeaderboard : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5156 );

		return pClassPointer;
	};

	void RequestCharacterLeaderboard ( int classId, int rankType );
	void ShowLeaderboard ( struct FString boardName, int aValue, int Option );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLeaderboard::pClassPointer = NULL;

// Class TgClient.TgGfxLoadouts
// 0x07C8 (0x0A80 - 0x02B8)
class UTgGfxLoadouts : public UTgGfxLoadoutsBase
{
public:
	struct FGFxLoadoutItem                             m_ItemBtn[ 0x2D ];                                		// 0x02B8 (0x05A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_UseClanBtn;                                     		// 0x0858 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutEquipBtn;                                		// 0x0860 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutEquipBtnBanner;                          		// 0x0868 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutUnlockBtn;                               		// 0x0870 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutFavoritesBtn;                            		// 0x0878 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutFavoritesCloseBtn;                       		// 0x0880 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_EquipItemScrollBar;                             		// 0x0888 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutInsetBg;                                 		// 0x0890 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideStatsBtn;                                   		// 0x0898 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemSelection;                                  		// 0x08A0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoostSelection;                                 		// 0x08A8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterBtn;                                     		// 0x08B0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterTitleTF;                                 		// 0x08B8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterTimeTF;                                  		// 0x08C0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextAudioBtn;                                   		// 0x08C8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedTitleTF;                                		// 0x08D0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchField;                                    		// 0x08D8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterDropdown;                                 		// 0x08E0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GemObject;                                      		// 0x08E8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_GemTF;                                          		// 0x08F0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavorObject;                                    		// 0x08F8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavorTF;                                        		// 0x0900 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavoritesInfoPanel;                             		// 0x0908 (0x0008) [0x0000000000000000]              
	int                                                m_nSelectedItemId;                                		// 0x0910 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItemType;                              		// 0x0914 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedIndex;                                 		// 0x0918 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bScrollToSelection : 1;                         		// 0x091C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bFavoritesMode : 1;                             		// 0x091C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nScrollIndex;                                   		// 0x0920 (0x0004) [0x0000000000000000]              
	int                                                m_nFilterId;                                      		// 0x0924 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_nShownItems;                                    		// 0x0928 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nUnsortedItems;                                 		// 0x0938 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nHighlightIndex;                                		// 0x0948 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x094C (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x0950 (0x0004) [0x0000000000000000]              
	float                                              m_fDoubleClickTimer;                              		// 0x0954 (0x0004) [0x0000000000000000]              
	float                                              m_fDoubleClickDuration;                           		// 0x0958 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearchField;                                   		// 0x095C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x096C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBoosterTitle;                                  		// 0x097C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCachedMusicThemePreview;                       		// 0x098C (0x0004) [0x0000000000000000]              
	TArray< struct FItemData_LoadoutsPage >            m_AvatarData;                                     		// 0x0990 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_WardData;                                       		// 0x09A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_PedestalData;                                   		// 0x09B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_AnnouncerData;                                  		// 0x09C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_FrameData;                                      		// 0x09D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_JumpStampData;                                  		// 0x09E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_GlobalEmoteData;                                		// 0x09F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_MusicThemeData;                                 		// 0x0A00 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_RecallSkinData;                                 		// 0x0A10 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_HudThemeData;                                   		// 0x0A20 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_LoadingBackgroundData;                          		// 0x0A30 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_FountainFXData;                                 		// 0x0A40 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_LevelUpFXData;                                  		// 0x0A50 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_DeathStampData;                                 		// 0x0A60 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_PlayerTitleData;                                		// 0x0A70 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5157 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void RefreshBoosterTimer ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLoadouts::pClassPointer = NULL;

// Class TgClient.TgGfxLobbyMain
// 0x0000 (0x0284 - 0x0284)
class UTgGfxLobbyMain : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5158 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLobbyMain::pClassPointer = NULL;

// Class TgClient.TgGfxMatchDetails
// 0x0010 (0x0294 - 0x0284)
class UTgGfxMatchDetails : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SearchByMatchId_Delegate__Delegate;         		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5159 );

		return pClassPointer;
	};

	void eventMatchDataUpdated ( );
	void ASC_MatchDataUpdated ( );
	void USC_SearchByMatchId ( struct FString matchId );
	void USC_SearchByMatchId_Delegate ( struct FString matchId );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxMatchDetails::pClassPointer = NULL;

// Class TgClient.TgGfxPartyManagement
// 0x0110 (0x0394 - 0x0284)
class UTgGfxPartyManagement : public UTgGfxScene
{
public:
	struct FPlayerBtn                                  m_PlayerBtns[ 0x4 ];                              		// 0x0284 (0x00A0) [0x0000000000000000]              
	struct FPlayerBtn                                  m_LocalPlayer;                                    		// 0x0324 (0x0028) [0x0000000000000000]              
	TArray< struct FListPlayerData >                   m_FriendList;                                     		// 0x034C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FListPlayerData >                   m_RecentlyPlayedList;                             		// 0x035C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FListPlayerData >                   m_ClanList;                                       		// 0x036C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_CurrentList;                                    		// 0x037C (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                m_nCurrentView;                                   		// 0x0384 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_InviteList;                                     		// 0x0388 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIsViewingInvite : 1;                           		// 0x0390 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5160 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGfxPartyManagement::pClassPointer = NULL;

// Class TgClient.TgGfxPlayerProfile
// 0x0030 (0x0198 - 0x0168)
class UTgGfxPlayerProfile : public UTgGFxEventObject
{
public:
	unsigned long                                      m_receivedPlayerActivities : 1;                   		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_receivedHistory : 1;                            		// 0x0168 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_receivedProfileInfo : 1;                        		// 0x0168 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_receivedMatchHistory : 1;                       		// 0x0168 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_updatedProfileData : 1;                         		// 0x0168 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_initializedFirstFilter : 1;                     		// 0x0168 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                m_playerId;                                       		// 0x016C (0x0004) [0x0000000000000000]              
	TArray< class UTgGFxPlayerData* >                  m_arrPendingSelector;                             		// 0x0170 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_recentMatchesFilter;                            		// 0x0180 (0x0008) [0x0000000000000000]              
	TArray< struct FMatchMembersFilter >               m_matchMembersFilter;                             		// 0x0188 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5161 );

		return pClassPointer;
	};

	void OnFriendSelector ( class UTgEventDataItem* pBaseEvent );
	void eventPlayerNameUpdated ( );
	void ASC_PlayerNameUpdated ( );
	void eventDropDownUpdated ( int Index );
	void ASC_DropDownUpdated ( int Index );
	void USC_TabSelected ( int Index );
	void USC_SearchByName ( struct FString PlayerName );
	void USC_SetFilter ( int filterIndex, int val );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxPlayerProfile::pClassPointer = NULL;

// Class TgClient.TgGfxProfileAccolade
// 0x0004 (0x0288 - 0x0284)
class UTgGfxProfileAccolade : public UTgGfxScene
{
public:
	int                                                m_nPlayerId;                                      		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5162 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventAccoladeDataUpdated ( );
	void ASC_AccoladeDataUpdated ( );
};

UClass* UTgGfxProfileAccolade::pClassPointer = NULL;

// Class TgClient.TgGfxProfileAchievements
// 0x0024 (0x02A8 - 0x0284)
class UTgGfxProfileAchievements : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_searchedPlayerId;                               		// 0x0288 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_gotAllActivities : 1;                           		// 0x028C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FAchievementData_ProfileAchievements > m_achievementDatas;                               		// 0x0290 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_achievementDatasArray;                          		// 0x02A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5163 );

		return pClassPointer;
	};

	void eventCheckIfHasMasterList ( );
	void ASC_CheckIfHasMasterList ( );
	void eventUpdateAchievements ( );
	void ASC_UpdateAchievements ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileAchievements::pClassPointer = NULL;

// Class TgClient.TgGfxProfileHistory
// 0x0048 (0x02CC - 0x0284)
class UTgGfxProfileHistory : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                s_lastFilterQueueId;                              		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FString                                     s_GodFilter;                                      		// 0x028C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetGodsFilter_Delegate__Delegate;           		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_SetQueueFilter_Delegate__Delegate;          		// 0x02AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_ShowDetails_Delegate__Delegate;             		// 0x02BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x02C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5164 );

		return pClassPointer;
	};

	void eventQueueDataUpdated ( );
	void ASC_QueueDataUpdated ( );
	void eventMatchesDataUpdated ( );
	void ASC_MatchesDataUpdated ( );
	void USC_ShowDetails ( struct FString matchId );
	void USC_SetQueueFilter ( int queueId );
	void USC_SetGodsFilter ( struct FString sFilterGod );
	void USC_ShowDetails_Delegate ( struct FString matchId );
	void USC_SetQueueFilter_Delegate ( int queueId );
	void USC_SetGodsFilter_Delegate ( struct FString sFilterGod );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileHistory::pClassPointer = NULL;

// Class TgClient.TgGfxProfileLeagueStats
// 0x0000 (0x0284 - 0x0284)
class UTgGfxProfileLeagueStats : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5165 );

		return pClassPointer;
	};

	void eventUpdateLeagueStats ( );
	void ASC_UpdateLeagueStats ( );
	void UpdateQueueLeagues ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileLeagueStats::pClassPointer = NULL;

// Class TgClient.TgGfxProfileMastery
// 0x000C (0x0290 - 0x0284)
class UTgGfxProfileMastery : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_searchedPlayerId;                               		// 0x0288 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_gotAllActivities : 1;                           		// 0x028C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5166 );

		return pClassPointer;
	};

	void eventUpdateAll ( );
	void asc_updateAll ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileMastery::pClassPointer = NULL;

// Class TgClient.TgGfxProfileOverview
// 0x002C (0x02B0 - 0x0284)
class UTgGfxProfileOverview : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                              		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_cachedUpdatedPlayerId;                          		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal1;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal2;                                 		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal3;                                 		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal4;                                 		// 0x029C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_NavigateToClan_Delegate__Delegate;          		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5167 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateSelectedAchievements ( );
	void ASC_UpdateSelectedAchievements ( );
	void eventLeagueDataUpdated ( );
	void ASC_LeagueDataUpdated ( );
	void eventProfileDataUpdated ( );
	void ASC_ProfileDataUpdated ( );
	void USC_NavigateToClan ( );
	void USC_NavigateToClan_Delegate ( );
};

UClass* UTgGfxProfileOverview::pClassPointer = NULL;

// Class TgClient.TgGfxProfilePage
// 0x0040 (0x02C4 - 0x0284)
class UTgGfxProfilePage : public UTgGfxScene
{
public:
	int                                                cachedPlayerId;                                   		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_CurrentSelectedTab;                             		// 0x0288 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideProfile;                                    		// 0x028C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_supportIdLabel;                                 		// 0x0294 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_supportIdTF;                                    		// 0x029C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_gameVersionLabel;                               		// 0x02A4 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_gameVersionTF;                                  		// 0x02AC (0x0008) [0x0000000000000000]              
	TArray< class UTgGFxPlayerData* >                  m_arrPendingSelector;                             		// 0x02B4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5168 );

		return pClassPointer;
	};

	void OnFriendSelector ( class UTgEventDataItem* pBaseEvent );
	void eventUpdateAvailable ( unsigned long vis );
	void ASC_UpdateAvailable ( unsigned long vis );
	void eventUpdateCallout ( );
	void ASC_UpdateCallout ( );
	void eventUpdatePlayer ( );
	void ASC_UpdatePlayer ( );
	void eventUpdateTab ( );
	void ASC_UpdateTab ( );
	void USC_GiftPlayer ( unsigned long isYourself );
	void USC_TwitchLink ( );
	void USC_UpdatePrivacy ( );
	void USC_AddFriend ( );
	void USC_TabSelected ( int tabId );
	void USC_SearchPlayerByName ( struct FString PlayerName );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfilePage::pClassPointer = NULL;

// Class TgClient.TgGfxProfileWorshiper
// 0x0038 (0x02BC - 0x0284)
class UTgGfxProfileWorshiper : public UTgGfxScene
{
public:
	unsigned char                                      m_filterId;                                       		// 0x0284 (0x0001) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x028C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetGodMasteryFilter_Delegate__Delegate;     		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_Search_Delegate__Delegate;                  		// 0x02AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5169 );

		return pClassPointer;
	};

	void eventFilterDataUpdated ( );
	void ASC_FilterDataUpdated ( );
	void eventGodMasteryUpdated ( );
	void ASC_GodMasteryUpdated ( );
	void USC_Search ( struct FString searchText );
	void USC_Search_Delegate ( struct FString searchText );
	void USC_SetGodMasteryFilter ( int filterId );
	void USC_SetGodMasteryFilter_Delegate ( int filterId );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileWorshiper::pClassPointer = NULL;

// Class TgClient.TgGfxQuestWindow
// 0x0000 (0x0284 - 0x0284)
class UTgGfxQuestWindow : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5170 );

		return pClassPointer;
	};

	void eventUpdateQuest ( int Id, int Count, int Goal, struct FString msg );
	void ASC_UpdateQuest ( int Id, int Count, int Goal, struct FString msg );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxQuestWindow::pClassPointer = NULL;

// Class TgClient.TgGfxRacerDispatcher
// 0x001C (0x02A0 - 0x0284)
class UTgGfxRacerDispatcher : public UTgGfxScene
{
public:
	struct FRacerDispatcherState                       lastState;                                        		// 0x0284 (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_CheckForUpdates_Delegate__Delegate;         		// 0x0290 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0294 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5171 );

		return pClassPointer;
	};

	void USC_CheckForUpdates ( );
	void USC_CheckForUpdates_Delegate ( );
	void eventDataChange ( class UGFxObject* Data );
	void ASC_DataChange ( class UGFxObject* Obj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxRacerDispatcher::pClassPointer = NULL;

// Class TgClient.TgGfxReferralPopup
// 0x0010 (0x0294 - 0x0284)
class UTgGfxReferralPopup : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SendFriendReferral_Delegate__Delegate;      		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5172 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateFriendList ( );
	void ASC_UpdateFriendList ( );
	void USC_SendFriendReferral ( struct FString sQQId, struct FString sMessage, struct FString sPlayerName );
	void USC_SendFriendReferral_Delegate ( );
};

UClass* UTgGfxReferralPopup::pClassPointer = NULL;

// Class TgClient.TgGfxReferralReward
// 0x0010 (0x0294 - 0x0284)
class UTgGfxReferralReward : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenReferFriendReward_Delegate__Delegate;   		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5173 );

		return pClassPointer;
	};

	void USC_OpenReferFriendReward ( );
	void USC_OpenReferFriendReward_Delegate ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxReferralReward::pClassPointer = NULL;

// Class TgClient.TgGfxReferrals
// 0x0030 (0x02B4 - 0x0284)
class UTgGfxReferrals : public UTgGfxScene
{
public:
	TArray< struct FLevelRewardData >                  m_levelRewardDatas;                               		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayedRewardData >                 m_playedRewardDatas;                              		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OpenReferFriend_Delegate__Delegate;         		// 0x02A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5174 );

		return pClassPointer;
	};

	void eventUpdateAchievements ( );
	void ASC_UpdateAchievements ( );
	void eventUpdatePlayerList ( );
	void ASC_UpdatePlayerList ( );
	void USC_OpenReferFriend ( );
	void USC_OpenReferFriend_Delegate ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxReferrals::pClassPointer = NULL;

// Class TgClient.TgGfxReferralSelector
// 0x0028 (0x02AC - 0x0284)
class UTgGfxReferralSelector : public UTgGfxScene
{
public:
	float                                              m_nTimeout;                                       		// 0x0284 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTimeoutActive : 1;                             		// 0x0288 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pFriendMarshal;                                   		// 0x028C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pReferralMarshal;                                 		// 0x0294 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FScriptDelegate                             __USC_SelectReferral_Delegate__Delegate;          		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5175 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateFriendList ( );
	void ASC_UpdateFriendList ( );
	void USC_SelectReferral ( struct FString sQQId );
	void USC_SelectReferral_Delegate ( );
};

UClass* UTgGfxReferralSelector::pClassPointer = NULL;

// Class TgClient.TgGfxSettingsMenu
// 0x0010 (0x0294 - 0x0284)
class UTgGfxSettingsMenu : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenQueueWarning_Delegate__Delegate;        		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5176 );

		return pClassPointer;
	};

	void USC_OpenQueueWarning ( );
	void USC_OpenQueueWarning_Delegate ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxSettingsMenu::pClassPointer = NULL;

// Class TgClient.TgGfxSpectatorHud
// 0x00A8 (0x032C - 0x0284)
class UTgGfxSpectatorHud : public UTgGfxScene
{
public:
	int                                                m_BannedIds[ 0x6 ];                               		// 0x0284 (0x0018) [0x0000000000000000]              
	unsigned long                                      m_bFindMatchDetails : 1;                          		// 0x029C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTeamStatsOpen : 1;                             		// 0x029C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHasDroppedPlayer : 1;                          		// 0x029C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_fUpdateWaitRT;                                  		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              m_fUpdateWaitGT;                                  		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  _global;                                          		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_goldArray;                                      		// 0x02B0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_xpArray;                                        		// 0x02B8 (0x0008) [0x0000000000000000]              
	TArray< struct FObjectiveSpawnData >               m_ObjectiveData;                                  		// 0x02C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCachedMaxPlayers;                              		// 0x02D0 (0x0004) [0x0000000000000000]              
	int                                                m_arrCachedPlayerMapping[ 0xA ];                  		// 0x02D4 (0x0028) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_UpdateStat_Delegate__Delegate;              		// 0x02FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0300 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_SetMenuIsOpen_Delegate__Delegate;           		// 0x030C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0310 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __USC_UpdatePlayerList_Delegate__Delegate;        		// 0x031C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0320 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5177 );

		return pClassPointer;
	};

	void eventSendGraphData ( class UGFxObject* Obj );
	void USC_UpdatePlayerList ( class UGFxObject* pPlayerList, int nLength );
	void USC_UpdatePlayerList_Delegate ( class UGFxObject* pPlayerList, int nLength );
	void USC_SetMenuIsOpen ( unsigned long bOpen );
	void USC_SetMenuIsOpen_Delegate ( unsigned long bOpen );
	void USC_UpdateStat ( int pawnId );
	void USC_UpdateStat_Delegate ( int pawnId );
	void OnGameHUDEvent ( class UTgEventDataItem* pEvent );
	void OnSpectatorEvent ( class UTgEventDataItem* pEvent );
	void UpdateGraph ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pParentMovie );
};

UClass* UTgGfxSpectatorHud::pClassPointer = NULL;

// Class TgClient.TgGfxStoreChestPC
// 0x0004 (0x0288 - 0x0284)
class UTgGfxStoreChestPC : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsClanChest : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5178 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxStoreChestPC::pClassPointer = NULL;

// Class TgClient.TgGfxTreasurePicker
// 0x0010 (0x0294 - 0x0284)
class UTgGfxTreasurePicker : public UTgGfxScene
{
public:
	TArray< struct FGFxTreasureItem >                  m_nShownItems;                                    		// 0x0284 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5179 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxTreasurePicker::pClassPointer = NULL;

// Class TgClient.TgGfxWisdomMain
// 0x0000 (0x0284 - 0x0284)
class UTgGfxWisdomMain : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5180 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxWisdomMain::pClassPointer = NULL;

// Class TgClient.TgGfxWisdomWeb
// 0x0010 (0x0294 - 0x0284)
class UTgGfxWisdomWeb : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_StartStreamData_Delegate__Delegate;         		// 0x0284 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5181 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void ASC_UpdateStreamList ( );
	void eventUpdateStreamList ( );
	void USC_StartStreamData ( int streamId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	void USC_StartStreamData_Delegate ( );
};

UClass* UTgGfxWisdomWeb::pClassPointer = NULL;

// Class TgClient.TgStreamManager
// 0x0000 (0x0100 - 0x0100)
class UTgStreamManager : public UTgStreamManagerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5182 );

		return pClassPointer;
	};

	bool OpenStream ( int surfaceId, struct FString URL, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat );
};

UClass* UTgStreamManager::pClassPointer = NULL;

// Class TgClient.TgGameDataHandler
// 0x0008 (0x0168 - 0x0160)
class UTgGameDataHandler : public UTgDataHandler
{
public:
	class UTgDataGroup_Clan*                           m_Clan;                                           		// 0x0160 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5183 );

		return pClassPointer;
	};

	void ChatInput_SetReplyName ( struct FString sSenderName );
	void DispatchEvent_VendorStore_UpdateInventory ( );
	void DispatchEvent_VendorStore_UpdateStats ( );
	void InitializeDataHandler ( );
};

UClass* UTgGameDataHandler::pClassPointer = NULL;

// Class TgClient.TgGameMoviePlayer
// 0x00D8 (0x0A30 - 0x0958)
class UTgGameMoviePlayer : public UTgMoviePlayer
{
public:
	struct FString                                     m_sRealMoneyCurCode;                              		// 0x0958 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FWebRegion >                        m_WebRegions;                                     		// 0x0968 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        m_renderTargetCallback;                           		// 0x0978 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_bFeatureAutoVoicePack;                          		// 0x0988 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureItemType;                               		// 0x098C (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureItemId;                                 		// 0x0990 (0x0004) [0x0000000000000000]              
	struct FString                                     m_smiteTvPageAutoTab;                             		// 0x0994 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_LastPlayNowScreen;                              		// 0x09A4 (0x0004) [0x0000000000000000]              
	int                                                m_nReturnToEventId;                               		// 0x09A8 (0x0004) [0x0000000000000000]              
	class UTexture*                                    m_BrowserTexture[ 0xC ];                          		// 0x09AC (0x0060) [0x0000000000000000]              
	unsigned long                                      m_bAllowSpaceBar : 1;                             		// 0x0A0C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bWasCustom : 1;                                 		// 0x0A0C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_SkipPlayIntoVideo : 1;                          		// 0x0A0C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nPlayerNoteId;                                  		// 0x0A10 (0x0004) [0x0000000000000000]              
	int                                                m_browserOpen;                                    		// 0x0A14 (0x0004) [0x0000000000000000]              
	class UTgGfxSovereigntyVendorStore*                m_mcSovereigntyVendorStore;                       		// 0x0A18 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __DelegateGFxList__Delegate;                      		// 0x0A20 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0A24 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5184 );

		return pClassPointer;
	};

	void DelegateGFxList ( class UGFxObject* List );
	void usc_rotate_lobby_model ( float fValue );
	void usc_activate_key ( );
	void eventCacheLoggedInGamepad ( );
	void SetUISetting ( struct FString Setting, struct FString Value );
	void CheckSpecialInput ( class ATgPlayerController* TgPC, struct FName ButtonName, unsigned char Event );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char Event );
	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool GetBrowserType ( int nURLType );
	void usc_forceFlushActionLog ( );
	void ToggleCombatLog ( );
	int usc_get_ui_display_mode ( );
	void NativeTick ( float DeltaTime );
	void UpdateTutorialImage ( unsigned long show, int HeaderMsgId, int ImageId, int msgId );
	void HandleEscapeKey ( );
	void PostInit ( );
	void UpdateQuestUI ( int Id, int Count, int Goal, int msgId );
	void usc_allowSpaceBar ( unsigned long bAllow );
	struct FString usc_getPassiveMeterPath ( int BotID );
	void RunIntroMovie ( unsigned long bRun );
	void InvokeRenderTargetReady ( );
	void SetRenderTargetCallback ( class UGFxObject* targetObj, unsigned long addObj );
	void usc_autoConfigureSettings ( );
	void usc_goto_item ( int nItemId, unsigned long bUseAltRedirect );
	bool usc_send_chat ( int nChannel, struct FString msg, struct FString Recipient );
	void usc_toggle_player_mute ( struct FString sPlayerName, struct FString sUnused, struct FString nPlayerId );
	bool usc_lobbyFeaturesShouldShow ( );
	void usc_isPlayingTutorial ( unsigned long Toggle );
	void usc_stopSoundCue ( struct FString soundTheme, struct FString SoundEventName );
	void usc_join_channel ( int Id );
	struct FString usc_GetWinningTeamName ( );
	struct FString usc_get_device_tooltip ( int nItemId, int nRank );
	void usc_force_purchase_current_item ( );
	void usc_forward_feature2 ( int pItemType, struct FString pItemData, struct FString pItemData2 );
	void usc_forward_feature ( int pItemType, struct FString pItemData );
	void usc_class_loading_resume ( );
	void usc_class_loading_suspend ( );
	void usc_clearReferral ( struct FString sExtId );
	void usc_ListenNextVivoxBtn ( );
	int usc_GetLocalPlayerId ( );
	void usc_request_account_info ( int nType );
	void OnHUDStateChange ( class UTgEventDataItem* pEvent );
	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void ProcessUIEvents ( );
	bool SetRenderTargetEnabled ( unsigned long bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height );
	class UTgDataGroup_Clan* GetClanData ( );
	void SetLoginReady ( unsigned long fromIntro );
	void ShowLoginUI ( );
	void ShowNormalUI ( );
	void SetHUDVisiblity ( );
	void USC_ShowLeaderboard ( struct FString sName, int nValue, int nOption );
	void usc_Scene_Manager_Scene_Unloaded ( struct FString sSceneName );
	void usc_Scene_Manager_Scene_Loaded ( struct FString sSceneName );
	class UGFxObject* usc_getItemData ( int ItemId, int quantityCount, int vendorId );
	bool usc_resize_browser ( int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	void usc_enable_browser_input ( unsigned long bEnable );
	void UnloadHudSection ( struct FString Section );
	void usc_rejectNotification ( int nNotificationType, int nId );
	void usc_acceptNotification ( int nNotificationType, int nId );
	void usc_test_voice_pack ( int nVoicePackId, int nSkinId );
	void usc_show_skin ( int nSkinId );
	void usc_request_treasure_roll ( int nItemId, int CurrencyType );
	bool is_item_owned ( int ItemId );
	bool usc_is_item_owned ( struct FString ItemId );
	void usc_unregister_mouse_region ( struct FString Key );
	void usc_register_mouse_region ( struct FString Key, int X, int Y, int Width, int Height );
	bool usc_is_in_game ( );
	void EndLobbyPlayback ( );
	void CancelPlayback ( );
	void OnDemoReady ( );
	bool usc_match_can_purchase_random_class ( int nQueueId );
	void usc_viewStatsOnline ( struct FString sInstanceId );
	void usc_close_eom_lobby ( int nNavigationTarget );
	bool usc_can_play_again ( );
	void usc_match_choose_skin ( int nSkinId );
	void usc_match_choose_class ( int nClassId );
	void USC_SelectedPopup ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue );
	void FakeItemToast ( int nItemId );
	void CloseChatTab ( int nChannel, struct FString sSender );
	void OpenChatTab ( int nChannel, unsigned long bForce );
	bool ShowGodPackPurchase ( );
	struct FString usc_CheckForLoginErrorMsg ( );
	void LeavePartyNotification ( );
	void DisbandPartyNotification ( );
	void GotoSendGift ( struct FPointer pPID );
	void GotoChestItem ( int nChestItemId, int nOriginalItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	void GotoItem ( int nItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	int usc_getBoostedTime ( );
	void UnregisterWebPageRegion ( struct FString sName );
	int RegisterWebPageRegion ( struct FString sName, unsigned long bWidescreen, int nStreamId, struct FString sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight );
	void USC_OpenInternalBrowser ( struct FString URL );
	void USC_OpenExternalBrowser ( struct FString externalURL );
	void LoadBrowserScene ( );
};

UClass* UTgGameMoviePlayer::pClassPointer = NULL;

// Class TgClient.TgGameSceneManager
// 0x0000 (0x00FC - 0x00FC)
class UTgGameSceneManager : public UTgSceneManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5185 );

		return pClassPointer;
	};

};

UClass* UTgGameSceneManager::pClassPointer = NULL;

// Class TgClient.TgGfxChatInput
// 0x0084 (0x0308 - 0x0284)
class UTgGfxChatInput : public UTgGfxScene
{
public:
	int                                                m_nYPos;                                          		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                m_nBuffer;                                        		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                m_nOffset;                                        		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                m_nChannel;                                       		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxWidth;                                      		// 0x0294 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevIndex;                                     		// 0x0298 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInput : 1;                                     		// 0x029C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIntercept : 1;                                 		// 0x029C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAutoFilled : 1;                                		// 0x029C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     m_sReplyName;                                     		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRecipient;                                     		// 0x02B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLastBlocked;                                   		// 0x02C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_Help;                                           		// 0x02D0 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Input;                                          		// 0x02D8 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_Channel;                                        		// 0x02E0 (0x0008) [0x0000000000000000]              
	TArray< struct FChannelData >                      m_Shortcuts;                                      		// 0x02E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_PrevChats;                                      		// 0x02F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5186 );

		return pClassPointer;
	};

	void OnGameUIEvent ( class UTgEventDataItem* pEvt );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGfxChatInput::pClassPointer = NULL;

// Class TgClient.TgSpectatorHUD
// 0x0020 (0x06CC - 0x06AC)
class ATgSpectatorHUD : public ATgGameHUD
{
public:
	unsigned char                                      m_eClientVisibilityMode;                          		// 0x06AC (0x0001) [0x0000000000000000]              
	class AActor*                                      m_LastUIViewTarget;                               		// 0x06B0 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_StatsSeeded : 1;                                		// 0x06B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bStatsPanelHidden : 1;                          		// 0x06B8 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nCurrentStatsPanel;                             		// 0x06BC (0x0004) [0x0000000000000000]              
	int                                                m_nMaxStatsPanel;                                 		// 0x06C0 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentInfoPanel;                              		// 0x06C4 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxInfoPanel;                                  		// 0x06C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5187 );

		return pClassPointer;
	};

	void ToggleHUD ( );
	void eventTick ( float DeltaTime );
	int eventGetGameState ( );
	void SetVisibilityMode ( unsigned char Mode );
	void ToggleVisibilityMode ( );
	void ShowPreviousInfoPanel ( );
	void ShowNextInfoPanel ( );
	void ToggleStatPanel ( );
	void ShowPreviousStatPanel ( );
	void ShowNextStatPanel ( );
	bool UpdatePlayerStatUI ( class ATgPawn* changedPawn );
	void SetStatIndex ( int StatIndex );
	void SpectatorShowAll ( );
	void SpectatorHideBottomHalf ( );
	void SpectatorHideAll ( );
	void ToggleSpectatorGameStats ( );
	void ToggleSpectatorMinimap ( );
	void ToggleSpectatorPlayerPanels ( );
	void ToggleSpectatorObjectives ( );
	void ToggleSpectatorTimeline ( );
	void ToggleSecretMessage ( );
	void ToggleSpectatorControls ( );
	void ToggleSpectatorPlayerInformation ( );
	void ToggleSpectatorTicker ( );
	void SetSpectatorMode ( int nNum );
	void ToggleBans ( );
	void EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState );
	void UpdateSpectatorViewMode ( unsigned char Mode );
	void UpdateSpectatorViewTarget ( class AActor* Target );
	unsigned char GetVisibilityMode ( );
};

UClass* ATgSpectatorHUD::pClassPointer = NULL;

// Class TgClient.TgClanDC_ClanStats
// 0x0013 (0x01B0 - 0x019D)
class UTgClanDC_ClanStats : public UTgDataChunk
{
public:
	struct FString                                     m_sPendingMOTD;                                   		// 0x01A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5188 );

		return pClassPointer;
	};

	void usc_UpdateClanNameFormat ( int nIndex );
	void usc_UpdateTag ( struct FString sMessage );
	void usc_ApplicationAction ( int nAction, struct FString sPlayerId );
	void usc_UpdateRecruiting ( struct FString sMessage, unsigned long bIsRecruiting );
	void usc_UpdateMessage ( struct FString sMessage, unsigned long bIsDaily );
	void OnFilterResult ( struct FString sOriginal, struct FString sFiltered, unsigned long bTotalCensor );
	void UpdateRecruiting ( struct FString sDesc, unsigned long bIsRecruiting );
	void UpdateClanMOTD ( struct FString sMessage );
	void UpdateClanDesc ( struct FString sMessage );
	void UpdateClanName ( struct FString sName );
	void UpdateClanData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_ClanStats::pClassPointer = NULL;

// Class TgClient.TgClanDC_Roster
// 0x1F47 (0x20E4 - 0x019D)
class UTgClanDC_Roster : public UTgDataChunk
{
public:
	struct Fdword                                      m_nPlayerId;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UTgClanDC_Player*                            m_MemberArray[ 0x3E8 ];                           		// 0x01A4 (0x1F40) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5189 );

		return pClassPointer;
	};

	void usc_UpdateComment ( struct FString nPlayerId, struct FString sComment, unsigned long isOfficerNote );
	void usc_ClanAction ( int nAction, struct FString nPlayerId );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Roster::pClassPointer = NULL;

// Class TgClient.TgClanDC_Settings
// 0x000B (0x01A8 - 0x019D)
class UTgClanDC_Settings : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_RankArray;                                      		// 0x01A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5190 );

		return pClassPointer;
	};

	void usc_UpdateLeader ( struct FString sName );
	void usc_UpdateRank ( float RankId, struct FString sName, float rankPermission );
	void UpdateRankArray ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Settings::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Clan
// 0x001B (0x01B8 - 0x019D)
class UTgDataGroup_Clan : public UTgDataChunk
{
public:
	class UTgClanDC_ClanStats*                         m_ClanStats;                                      		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UTgClanDC_Settings*                          m_ClanSettings;                                   		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UTgClanDC_Roster*                            m_ClanRoster;                                     		// 0x01B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5191 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Clan::pClassPointer = NULL;

// Class TgClient.TgGfxEventPurchase
// 0x0000 (0x0284 - 0x0284)
class UTgGfxEventPurchase : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5192 );

		return pClassPointer;
	};

	void ShowOutOfCurrency ( int CurrencyType );
	void SubmitPurchase ( class UGFxObject* Data );
	void GetItemInfo ( int ItemId );
	void ReceiveGFxData ( class UGFxObject* theObject );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventPurchase::pClassPointer = NULL;

// Class TgClient.TgGFxEventQuestNotification
// 0x0058 (0x02DC - 0x0284)
class UTgGFxEventQuestNotification : public UTgGfxScene
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0284 (0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgGFxEventQuestNotification.ActivityRedirects
	struct FScriptDelegate                             __USC_GetOptOut_Delegate__Delegate;               		// 0x02CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5193 );

		return pClassPointer;
	};

	bool USC_GetOptOut ( );
	bool USC_GetOptOut_Delegate ( );
	void ReceiveGFxData ( class UGFxObject* Data );
	void RedirectToFirstQuest ( );
	void UpdateNotifySetting ( unsigned long bDisable );
	bool GetHasAvailableSpecialEventQuest ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxEventQuestNotification::pClassPointer = NULL;

// Class TgClient.TgLobbyHUD
// 0x0000 (0x0654 - 0x0654)
class ATgLobbyHUD : public ATgLobbyHUDBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5194 );

		return pClassPointer;
	};

	void eventSetInitialState ( );
	void eventReturnToMain ( );
	bool IsCurrentCameraMatchLobby ( );
	struct FName GetMatchLobbyCameraName ( );
	void OnClassSelected ( int nClassId, int nSkinId, unsigned long bChangedClass, unsigned long bChangedSkin );
	void AsynchNotifies ( );
};

UClass* ATgLobbyHUD::pClassPointer = NULL;

// Class TgClient.TgTestMoviePlayer
// 0x0000 (0x0958 - 0x0958)
class UTgTestMoviePlayer : public UTgMoviePlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 149080 );

		return pClassPointer;
	};

};

UClass* UTgTestMoviePlayer::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif