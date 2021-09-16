/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPC_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionResume
// [0x00020000] 
struct UOnlineSubsystemPC_execSendPlayerSessionResume_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                GameplayModeId;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DifficultyLevelId;                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause
// [0x00020000] 
struct UOnlineSubsystemPC_execSendPlayerSessionPause_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd
// [0x00020000] 
struct UOnlineSubsystemPC_execSendPlayerSessionEnd_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                GameplayModeId;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DifficultyLevelId;                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ExitStatusId;                                     		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart
// [0x00020000] 
struct UOnlineSubsystemPC_execSendPlayerSessionStart_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                GameplayModeId;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DifficultyLevelId;                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UpdatePlayerMuteSetting
// [0x00020002] 
struct UOnlineSubsystemPC_execUpdatePlayerMuteSetting_Parms
{
	unsigned long                                      PlayerMuteSetting : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsTalkerMuted
// [0x00020000] 
struct UOnlineSubsystemPC_execIsTalkerMuted_Parms
{
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearGetUserAccountInfoDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearGetUserAccountInfoDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddGetUserAccountInfoDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddGetUserAccountInfoDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUserAccountInfo
// [0x00020000] 
struct UOnlineSubsystemPC_execGetUserAccountInfo_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUserAccountInfoRetrieved
// [0x00120000] 
struct UOnlineSubsystemPC_execOnUserAccountInfoRetrieved_Parms
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FUserAccountInfo                            AccountInfo;                                      		// 0x0004 (0x0050) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveAccountPickerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execRemoveAccountPickerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAccountPickerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddAccountPickerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAccountPickerComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnAccountPickerComplete_Parms
{
	unsigned long                                      bForceLogin : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFilterTextDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearFilterTextDelegate_Parms
{
	struct FScriptDelegate                             FilterTextDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFilterTextDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddFilterTextDelegate_Parms
{
	struct FScriptDelegate                             FilterTextDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFilterText
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFilterText_Parms
{
	struct FString                                     OriginalText;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     FilteredText;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bCensorCompletely : 1;                            		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckFilterText
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execCheckFilterText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms
{
	struct FScriptDelegate                             PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms
{
	struct FScriptDelegate                             PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00120000] 
struct UOnlineSubsystemPC_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResultByUniqueNetId >   Results;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearPrivilegeCheckedForUsersDelegate_Parms
{
	struct FScriptDelegate                             PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddPrivilegeCheckedForUsersDelegate_Parms
{
	struct FScriptDelegate                             PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsers
// [0x00120000] 
struct UOnlineSubsystemPC_execOnPrivilegeCheckedForUsers_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResult >                Results;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnlineWithUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execCanPlayOnlineWithUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnlineWithUsers
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execCanPlayOnlineWithUsers_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSessionMemberInfo >                Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execCanCommunicateTextWithUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsers
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execCanCommunicateTextWithUsers_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSessionMemberInfo >                Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsersByUniqueNetIds
// [0x00020000] 
struct UOnlineSubsystemPC_execCanCommunicateVoiceWithUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsers
// [0x00020000] 
struct UOnlineSubsystemPC_execCanCommunicateVoiceWithUsers_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSessionMemberInfo >                Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckForGameInviteOnLaunch
// [0x00020000] 
struct UOnlineSubsystemPC_execCheckForGameInviteOnLaunch_Parms
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetControllerIdFromNetId
// [0x00420000] 
struct UOnlineSubsystemPC_execGetControllerIdFromNetId_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerId;                                     		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CacheLoggedInGamepad
// [0x00020000] 
struct UOnlineSubsystemPC_execCacheLoggedInGamepad_Parms
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnsubscribeToStatisticEvent
// [0x00020000] 
struct UOnlineSubsystemPC_execUnsubscribeToStatisticEvent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       StatName;                                         		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SubscribeToStatisticEvent
// [0x00020000] 
struct UOnlineSubsystemPC_execSubscribeToStatisticEvent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       StatName;                                         		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EventDelegate;                                    		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStatisticChanged
// [0x00120000] 
struct UOnlineSubsystemPC_execOnStatisticChanged_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       StatName;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewStatValue;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAchievements
// [0x00024000] 
struct UOnlineSubsystemPC_execClearAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
// [0x00424000] 
struct UOnlineSubsystemPC_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements
// [0x00024000] 
struct UOnlineSubsystemPC_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement
// [0x00024000] 
struct UOnlineSubsystemPC_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
// [0x00020000] 
struct UOnlineSubsystemPC_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages
// [0x00420000] 
struct UOnlineSubsystemPC_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriendMessage >              FriendMessages;                                   		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame
// [0x00020000] 
struct UOnlineSubsystemPC_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends
// [0x00024000] 
struct UOnlineSubsystemPC_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Friends;                                          		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x001C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend
// [0x00024000] 
struct UOnlineSubsystemPC_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend
// [0x00020000] 
struct UOnlineSubsystemPC_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend
// [0x00020000] 
struct UOnlineSubsystemPC_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite
// [0x00020000] 
struct UOnlineSubsystemPC_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite
// [0x00020000] 
struct UOnlineSubsystemPC_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName
// [0x00024000] 
struct UOnlineSubsystemPC_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend
// [0x00024000] 
struct UOnlineSubsystemPC_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemPC_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeviceID;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemPC_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemPC_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeviceID;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemPC_execReadPlayerStorageForNetId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NetId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults
// [0x00420000] 
struct UOnlineSubsystemPC_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HideKeyboardUI
// [0x00020000] 
struct UOnlineSubsystemPC_execHideKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI
// [0x00024000] 
struct UOnlineSubsystemPC_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus
// [0x00024000] 
struct UOnlineSubsystemPC_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     StatusString;                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      PlayerActive : 1;                                 		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnStorageDeviceChange_Parms
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale
// [0x00020002] 
struct UOnlineSubsystemPC_execGetLocale_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
// [0x00020002] 
struct UOnlineSubsystemPC_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetCurrentConnectionStatus
// [0x00020000] 
struct UOnlineSubsystemPC_execGetCurrentConnectionStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
// [0x00020002] 
struct UOnlineSubsystemPC_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bPauseGame : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemPC_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemPC_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection
// [0x00020002] 
struct UOnlineSubsystemPC_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemPC_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemPC_execCalcAggregateSkill_Parms
{
	TArray< struct FDouble >                           Mus;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FDouble >                           Sigmas;                                           		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FDouble                                     OutAggregateMu;                                   		// 0x0020 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FDouble                                     OutAggregateSigma;                                		// 0x0028 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid
// [0x00420000] 
struct UOnlineSubsystemPC_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ClientStatGuid;                                   		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid
// [0x00020000] 
struct UOnlineSubsystemPC_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnRegisterHostStatGuidComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid
// [0x00420000] 
struct UOnlineSubsystemPC_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid
// [0x00020000] 
struct UOnlineSubsystemPC_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
// [0x00420000] 
struct UOnlineSubsystemPC_execWriteOnlinePlayerScores_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlinePlayerScore >                PlayerScores;                                     		// 0x000C (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats
// [0x00020000] 
struct UOnlineSubsystemPC_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
// [0x00020000] 
struct UOnlineSubsystemPC_execWriteOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats
// [0x00020000] 
struct UOnlineSubsystemPC_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
struct UOnlineSubsystemPC_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumRows;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
// [0x00024000] 
struct UOnlineSubsystemPC_execReadOnlineStatsByRank_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                StartIndex;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumToRead;                                        		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatForFriends
// [0x00024000] 
struct UOnlineSubsystemPC_execReadOnlineStatForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      FavoriteFriendsOnly : 1;                          		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                NumToRead;                                        		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
// [0x00420000] 
struct UOnlineSubsystemPC_execReadOnlineStats_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0004 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForPlayer
// [0x00020000] 
struct UOnlineSubsystemPC_execReadOnlineStatsForPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadOnlineStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList
// [0x00424000] 
struct UOnlineSubsystemPC_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriend >                     Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList
// [0x00024002] 
struct UOnlineSubsystemPC_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemPC_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemPC_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemPC_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCurrentUserChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearCurrentUserChangedDelegate_Parms
{
	struct FScriptDelegate                             CurrentUserDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddCurrentUserChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddCurrentUserChangedDelegate_Parms
{
	struct FScriptDelegate                             CurrentUserDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI
// [0x00020000] 
struct UOnlineSubsystemPC_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted
// [0x00020000] 
struct UOnlineSubsystemPC_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
// [0x00420000] 
struct UOnlineSubsystemPC_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FFriendsQuery >                     Query;                                            		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend
// [0x00020000] 
struct UOnlineSubsystemPC_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUploadFitnessData
// [0x00424000] 
struct UOnlineSubsystemPC_execCanUploadFitnessData_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareKinectContent
// [0x00424000] 
struct UOnlineSubsystemPC_execCanShareKinectContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareWithSocialNetwork
// [0x00424000] 
struct UOnlineSubsystemPC_execCanShareWithSocialNetwork_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanBrowseInternet
// [0x00424000] 
struct UOnlineSubsystemPC_execCanBrowseInternet_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumVideoContent
// [0x00424000] 
struct UOnlineSubsystemPC_execCanAccessPremiumVideoContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumContent
// [0x00424000] 
struct UOnlineSubsystemPC_execCanAccessPremiumContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUseCloudStorage
// [0x00424000] 
struct UOnlineSubsystemPC_execCanUseCloudStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanRecordDVRClips
// [0x00424000] 
struct UOnlineSubsystemPC_execCanRecordDVRClips_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation
// [0x00424000] 
struct UOnlineSubsystemPC_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles
// [0x00424000] 
struct UOnlineSubsystemPC_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent
// [0x00424000] 
struct UOnlineSubsystemPC_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareUserCreatedContent
// [0x00424000] 
struct UOnlineSubsystemPC_execCanShareUserCreatedContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanMultiplayerCrossPlay
// [0x00424002] 
struct UOnlineSubsystemPC_execCanMultiplayerCrossPlay_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoice
// [0x00424000] 
struct UOnlineSubsystemPC_execCanCommunicateVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVideo
// [0x00424000] 
struct UOnlineSubsystemPC_execCanCommunicateVideo_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateText
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemPC_execCanCommunicateText_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline
// [0x00424000] 
struct UOnlineSubsystemPC_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeLevelCheckedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearPrivilegeLevelCheckedDelegate_Parms
{
	struct FScriptDelegate                             PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeLevelCheckedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddPrivilegeLevelCheckedDelegate_Parms
{
	struct FScriptDelegate                             PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeLevelChecked
// [0x00120000] 
struct UOnlineSubsystemPC_execOnPrivilegeLevelChecked_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemPC_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemPC_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
// [0x00020002] 
struct UOnlineSubsystemPC_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Logout
// [0x00020000] 
struct UOnlineSubsystemPC_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.PairUserAndControllerAtIndex
// [0x00020000] 
struct UOnlineSubsystemPC_execPairUserAndControllerAtIndex_Parms
{
	unsigned char                                      PlayerIndex;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ControllerIndex;                                  		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PairIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearSystemUserContrllerPairingChangedDelegate_Parms
{
	struct FScriptDelegate                             PairingChangeDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddSystemUserContrllerPairingChangedDelegate_Parms
{
	struct FScriptDelegate                             PairingChangeDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnSystemUserControllerPairingChanged
// [0x00120000] 
struct UOnlineSubsystemPC_execOnSystemUserControllerPairingChanged_Parms
{
	int                                                NewLocalUserNum;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PreviousLocalUserNum;                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin
// [0x00020000] 
struct UOnlineSubsystemPC_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Login
// [0x00024000] 
struct UOnlineSubsystemPC_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsAccountPickerOpen
// [0x00020002] 
struct UOnlineSubsystemPC_execIsAccountPickerOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI
// [0x00024000] 
struct UOnlineSubsystemPC_execShowLoginUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceLogin : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFriendsChange_Parms
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemPC_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
// [0x00420000] 
struct UOnlineSubsystemPC_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile
// [0x00020000] 
struct UOnlineSubsystemPC_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnMutingChange_Parms
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearURLTokenRetrievedDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearURLTokenRetrievedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             tsrDelegate;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddURLTokenRetrievedDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddURLTokenRetrievedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             tsrDelegate;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTokenAndSignatureForURL
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPC_execGetTokenAndSignatureForURL_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnTokenAndSignatureRetrieved
// [0x00120000] 
struct UOnlineSubsystemPC_execOnTokenAndSignatureRetrieved_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     AuthToken;                                        		// 0x0028 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Signature;                                        		// 0x0038 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnCurrentUserChanged
// [0x00120000] 
struct UOnlineSubsystemPC_execOnCurrentUserChanged_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CurrentUser;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     LoggedInUser;                                     		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginCancelled_Parms
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemPC_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteAll
// [0x00020002] 
struct UOnlineVoiceInterfacePC_execUnmuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteAll
// [0x00020002] 
struct UOnlineVoiceInterfacePC_execMuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execSetSpeechRecognitionObject_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SelectVocabulary
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execSelectVocabulary_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineVoiceInterfacePC_execClearRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineVoiceInterfacePC_execAddRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnRecognitionComplete
// [0x00120000] 
struct UOnlineVoiceInterfacePC_execOnRecognitionComplete_Parms
{
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execGetRecognitionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSpeechRecognizedWord >             Words;                                            		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execStopSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execStartSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execStopNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execStartNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineVoiceInterfacePC_execClearPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineVoiceInterfacePC_execAddPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineVoiceInterfacePC_execOnPlayerTalkingStateChange_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsTalkerMuted
// [0x00020000] 
struct UOnlineVoiceInterfacePC_execIsTalkerMuted_Parms
{
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execUnmuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execMuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UpdatePlayerMuteSetting
// [0x00020000] 
struct UOnlineVoiceInterfacePC_execUpdatePlayerMuteSetting_Parms
{
	unsigned long                                      PlayerMuteSetting : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execSetRemoteTalkerPriority_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execIsHeadsetPresent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execIsRemotePlayerTalking_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execIsLocalPlayerTalking_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execUnregisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execRegisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterLocalTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ChannelIndex;                                     		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterLocalTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineVoiceInterfacePC_execRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ChannelIndex;                                     		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif