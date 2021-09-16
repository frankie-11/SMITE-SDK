/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPC_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemPC.OnlineVoiceInterfacePC.EMuteType
/*enum EMuteType
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemPC.OnlineSubsystemPC
// 0x036C (0x05D4 - 0x0268)
class UOnlineSubsystemPC : public UOnlineSubsystemCommonImpl
{
public:
	int                                                LoggedInPlayerNum;                                		// 0x0268 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LoggedInPlayerName;                               		// 0x026C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x027C (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPointer >                          AsyncTasks;                                       		// 0x0284 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     ProfileDataDirectory;                             		// 0x0294 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x02A4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadProfileSettingsDelegates;                     		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x02D4 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x02DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x02EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x02FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TokenAndSignatureRetrievedDelegates;              		// 0x030C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PrivilegeCheckedForUsersDelegates;                		// 0x031C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PrivilegeCheckedForUsersByUniqueNetIdsDelegates;  		// 0x032C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FilterTextDelegates;                              		// 0x033C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineVoiceInterfacePC*                     PCVoiceInt;                                       		// 0x034C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0354 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0358 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0364 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0368 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCurrentUserChanged__Delegate;                 		// 0x0374 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0378 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTokenAndSignatureRetrieved__Delegate;         		// 0x0384 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0388 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0394 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0398 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x03A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x03A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x03B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x03B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x03C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x03C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate; 		// 0x03D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x03D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x03E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x03E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeLevelChecked__Delegate;              		// 0x03F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x03F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0404 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x0408 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0414 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x0418 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0424 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x0428 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0434 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x0438 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0444 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x0448 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0454 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x0458 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0464 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x0468 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0474 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x0478 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0484 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x0488 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0494 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x0498 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x04A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x04A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x04B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x04B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x04C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x04C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x04D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x04D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x04E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData25[ 0x4 ];                             		// 0x04E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x04F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData26[ 0x4 ];                             		// 0x04F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0504 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData27[ 0x4 ];                             		// 0x0508 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0514 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData28[ 0x4 ];                             		// 0x0518 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0524 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData29[ 0x4 ];                             		// 0x0528 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0534 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData30[ 0x4 ];                             		// 0x0538 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0544 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData31[ 0x4 ];                             		// 0x0548 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0554 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData32[ 0x4 ];                             		// 0x0558 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0564 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData33[ 0x4 ];                             		// 0x0568 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStatisticChanged__Delegate;                   		// 0x0574 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData34[ 0x4 ];                             		// 0x0578 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsers__Delegate;           		// 0x0584 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData35[ 0x4 ];                             		// 0x0588 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsersByUniqueNetIds__Delegate;		// 0x0594 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData36[ 0x4 ];                             		// 0x0598 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFilterText__Delegate;                         		// 0x05A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData37[ 0x4 ];                             		// 0x05A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAccountPickerComplete__Delegate;              		// 0x05B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData38[ 0x4 ];                             		// 0x05B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUserAccountInfoRetrieved__Delegate;           		// 0x05C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData39[ 0x4 ];                             		// 0x05C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1469 );

		return pClassPointer;
	};

	bool SendPlayerSessionResume ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId );
	bool SendPlayerSessionPause ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId );
	bool SendPlayerSessionEnd ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId );
	bool SendPlayerSessionStart ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId );
	bool UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting );
	bool IsTalkerMuted ( struct FUniqueNetId ConsoleId );
	void ClearGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate );
	void AddGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate );
	bool GetUserAccountInfo ( unsigned char LocalUserNum );
	void OnUserAccountInfoRetrieved ( unsigned long bSuccessful, struct FUserAccountInfo AccountInfo );
	void RemoveAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnAccountPickerComplete ( unsigned long bForceLogin );
	void ClearFilterTextDelegate ( struct FScriptDelegate FilterTextDelegate );
	void AddFilterTextDelegate ( struct FScriptDelegate FilterTextDelegate );
	void OnFilterText ( struct FString OriginalText, struct FString FilteredText, unsigned long bCensorCompletely );
	bool CheckFilterText ( struct FString Text );
	void ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results );
	void ClearPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void AddPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void OnPrivilegeCheckedForUsers ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results );
	bool CanPlayOnlineWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users );
	bool CanPlayOnlineWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users );
	bool CanCommunicateTextWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users );
	bool CanCommunicateTextWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users );
	bool CanCommunicateVoiceWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users );
	bool CanCommunicateVoiceWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users );
	void CheckForGameInviteOnLaunch ( );
	bool GetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId );
	void CacheLoggedInGamepad ( );
	void UnsubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName );
	void SubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName, struct FScriptDelegate EventDelegate );
	void OnStatisticChanged ( struct FUniqueNetId PlayerNetId, struct FName StatName, struct FString NewStatValue );
	void ClearAchievements ( unsigned char LocalUserNum, int TitleId );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, struct FName SessionName, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FName SessionName, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool HideKeyboardUI ( unsigned char LocalUserNum );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, struct FString StatusString, unsigned long PlayerActive );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	int GetLocale ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	unsigned char GetCurrentConnectionStatus ( );
	bool IsControllerConnected ( int ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected, unsigned long bPauseGame );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
	void CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, unsigned long FavoriteFriendsOnly, int NumToRead );
	bool ReadOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
	bool ReadOnlineStatsForPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	void ClearCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate );
	void AddCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanMultiplayerCrossPlay ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	void ClearPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void AddPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	bool PairUserAndControllerAtIndex ( unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex );
	void ClearSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate );
	void AddSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate );
	void OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool IsAccountPickerOpen ( );
	bool ShowLoginUI ( unsigned char LocalUserNum, unsigned long bForceLogin, unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void OnMutingChange ( );
	void ClearURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate );
	void AddURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate );
	bool GetTokenAndSignatureForURL ( unsigned char LocalUserNum, struct FString URL );
	void OnTokenAndSignatureRetrieved ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature );
	void OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	bool eventInit ( );
};

UClass* UOnlineSubsystemPC::pClassPointer = NULL;

// Class OnlineSubsystemPC.OnlineVoiceInterfacePC
// 0x0078 (0x00D8 - 0x0060)
class UOnlineVoiceInterfacePC : public UObject
{
public:
	struct FPointer                                    OwningSubsystem;                                  		// 0x0060 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    VoiceEnginePtr;                                   		// 0x0068 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FLocalTalkerPC                              CurrentLocalTalker;                               		// 0x0070 (0x0008) [0x0000000000000000]              
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x0088 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1470 );

		return pClassPointer;
	};

	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	bool SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj );
	bool SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId );
	void ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void OnRecognitionComplete ( );
	bool GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words );
	bool StopSpeechRecognition ( unsigned char LocalUserNum );
	bool StartSpeechRecognition ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
	bool IsTalkerMuted ( struct FUniqueNetId ConsoleId );
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex );
	bool RegisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex );
};

UClass* UOnlineVoiceInterfacePC::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif