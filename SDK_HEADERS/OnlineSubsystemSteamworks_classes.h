/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
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

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
/*enum ELeaderboardSortType
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
/*enum ELeaderboardRequestType
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
/*enum ELeaderboardFormat
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_MAX                                             = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
/*enum ELeaderboardUpdateType
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
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

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000 (0x0324 - 0x0324)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1458 );

		return pClassPointer;
	};

	bool GetServerAddr ( struct FIpAddr* OutServerIP, int* OutServerPort );
	bool GetServerUniqueId ( struct FUniqueNetId* OutServerUID );
	bool VerifyServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID );
	bool CreateServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int* OutAuthTicketUID );
	bool VerifyClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID );
	bool CreateClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID );
	bool SendServerAuthRequest ( struct FUniqueNetId ServerUID );
	bool SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID );
};

UClass* UOnlineAuthInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x0348 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x0358 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0368 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0378 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x037C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0388 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x038C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0398 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x039C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1459 );

		return pClassPointer;
	};

	bool GetUserConnectionInfoAsync ( TArray< struct FString > UserNames );
	bool GetCurrentSessionMemberInfo ( struct FName SessionName, TArray< struct FSessionMemberInfo >* OutMemberInfo );
	bool GetCurrentSessionMemberInfoAsync ( unsigned char LocalUserNum, struct FName SessionName );
	void RunBandwidthTest ( );
	bool IsAllowedToNetworkHost ( );
	void GetRoomIdFromSessionId ( struct FString SessionId );
	void GetRoomIdFromTitleService ( struct FQWord DataId );
	struct FString GetRoomId ( );
	int GetNumberOfCurrentPlayersCached ( );
	bool SendPlayerList ( TArray< class APlayerReplicationInfo* > Players );
	void RetrieveGameSettingsForIP ( struct FString IPAddress );
	bool GetNumberOfCurrentPlayers ( );
	bool JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName );
	bool RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	TArray< struct FOnlineArbitrationRegistrant > GetArbitratedPlayers ( struct FName SessionName );
	bool RegisterForArbitration ( struct FName SessionName );
	bool EndOnlineGame ( struct FName SessionName );
	bool StartOnlineGame ( struct FName SessionName );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	bool QuerySessionsByKeyword ( unsigned char LocalPlayerNum, struct FString Keyword, class UOnlineGameSearch* SearchSettings );
	bool QuerySessionsForUser ( unsigned char LocalPlayerNum );
	void LeaveAllOnlineSessions ( unsigned long bClearSessionIfHost );
	bool LeaveOnlineSession ( unsigned char LocalPlayerNum, struct FName SessionName, unsigned long bClearSessionIfHost );
	void AcceptPendingGameSession ( struct FName SessionName );
	bool UpdateSessionProperties ( unsigned char ScoutingUserNum, struct FName SessionName );
	bool DeleteCustomMemberProperty ( struct FName SessionName, struct FString PropertyName );
	bool SetCustomMemberProperty ( struct FName SessionName, struct FString PropertyName, struct FString PropertyValue );
	bool DeleteCustomSessionProperty ( struct FName SessionName, struct FString PropertyName );
	bool SetCustomSessionProperty ( struct FName SessionName, struct FString PropertyName, struct FString PropertyValue );
	bool AddSessionMembers ( unsigned char ScoutingPlayerNum, struct FName SessionName, TArray< struct FUniqueNetId > Members );
	bool AddSessionMember ( unsigned char ScoutingPlayerNum, struct FName SessionName, struct FUniqueNetId Member );
	bool AddSessionMemberByString ( unsigned char ScoutingPlayerNum, struct FName SessionName, struct FString Member );
	bool CreateOnlineSessionWithTemplate ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings, struct FString TemplateName, struct FString SessionKeyword );
	bool InitiatedSessionSearch ( struct FName SessionName );
	bool IsHostOfSession ( struct FName SessionName );
	bool MatchmakeOnlineGameWithParty ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	bool CreateOnlineGameWithParty ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	bool IsCurrentRoomOwner ( );
	bool SetRankedReadyStatus ( unsigned long bReady );
	bool IsJoinOperationInProgress ( );
	bool JoinOnlineGameByMatchingParams ( struct FQWord RoomId, class UOnlineGameSettings** JoinedGameSettings );
	void OnMapChangeComplete ( );
	void OnMapChangePending ( );
	bool JoinOnlineGameBySessionHandle ( unsigned char PlayerNum, struct FName SessionName, struct FString InSessionGuid );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	class UOnlineGameSearch* GetGameSearch ( );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	bool CancelFindOnlineGames ( );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	bool DestroyOnlineGame ( struct FName SessionName );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
};

UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x094C (0x0BB4 - 0x0268)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    VfTable_PComOnlinePlayerInterface;                		// 0x0268 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bStoringAchievement : 1;                          		// 0x0270 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientStatsStorePending : 1;                     		// 0x0270 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x0270 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x0270 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x0270 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x0270 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x0270 (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x0270 (0x0004) [0x0000000000004002] [0x00000080] ( CPF_Const | CPF_Config )
	int                                                TotalGSStatsStoresPending;                        		// 0x0274 (0x0004) [0x0000000000000000]              
	unsigned char                                      UserStatsReceivedState;                           		// 0x0278 (0x0001) [0x0000000000000000]              
	unsigned char                                      LoggedInStatus;                                   		// 0x0279 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x027A (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x027B (0x0001) [0x0000000000004000]              ( CPF_Config )
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x027C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x0284 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x0294 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x02A4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                LoggedInPlayerNum;                                		// 0x02AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ProfileDataDirectory;                             		// 0x02B0 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x02C0 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x02D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x02E0 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x02E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x02F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x0308 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x0318 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x0328 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x0338 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x0348 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x0358 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x0368 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ContentPurchaseResponseDelegates;                 		// 0x0378 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x0388 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AccountCreateDelegates;                           		// 0x0398 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x03A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x03B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x03C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x03D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x03E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x03F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0408 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0418 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x0428 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EnumerateUserFilesCompleteDelegates;              		// 0x0438 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadUserFileCompleteDelegates;                    		// 0x0448 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteUserFileCompleteDelegates;                   		// 0x0458 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeleteUserFileCompleteDelegates;                  		// 0x0468 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SharedFileReadCompleteDelegates;                  		// 0x0478 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SharedFileWriteCompleteDelegates;                 		// 0x0488 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TokenAndSignatureRetrievedDelegates;              		// 0x0498 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PrivilegeLevelCheckedDelegates;                   		// 0x04A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PrivilegeCheckedForUsersDelegates;                		// 0x04B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PrivilegeCheckedForUsersByUniqueNetIdsDelegates;  		// 0x04C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FilterTextDelegates;                              		// 0x04D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x04E8 (0x000C) [0x0000000000000000]              
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x04F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameID;                                           		// 0x0504 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x0508 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x0510 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x0520 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x0530 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x0540 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x0550 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x0560 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x0570 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x05A8 (0x0008) [0x0000000000000000]              
	struct FString                                     CachedFriendMessage;                              		// 0x05B0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x05C0 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x05E4 (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x05F4 (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x0604 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0614 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x0624 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x0634 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x0644 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x0654 (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x0664 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x0674 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x0684 (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x06A4 (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x06A8 (0x0004) [0x0000000000000000]              
	struct FString                                     EncryptedProductKey;                              		// 0x06AC (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x06BC (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSteamUserCloud >                   UserCloudFiles;                                   		// 0x06CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSteamUserCloudMetadata >           UserCloudMetadata;                                		// 0x06DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        SharedFileCache;                                  		// 0x06EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x06FC (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x070C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FAchievementProgressStat >          PendingAchievementProgress;                       		// 0x071C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardTemplate >              LeaderboardList;                                  		// 0x072C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardRead >          DeferredLeaderboardReads;                         		// 0x073C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         DeferredLeaderboardWrites;                        		// 0x074C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         PendingLeaderboardStats;                          		// 0x075C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FViewIdToLeaderboardName >          LeaderboardNameMappings;                          		// 0x076C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      GameServerStatsMappings;                          		// 0x077C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                    		// 0x078C (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FIpAddr >                           PendingRedirects;                                 		// 0x0794 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x07A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x07A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x07B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x07B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x07C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x07C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x07D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x07D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x07E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x07E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x07F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x07F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0804 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x0808 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0814 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0818 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0824 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x0828 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0834 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x0838 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0844 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x0848 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0854 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x0858 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0864 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x0868 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0874 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x0878 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0884 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x0888 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0894 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x0898 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x08A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x08A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x08B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x08B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x08C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x08C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x08D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x08D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x08E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x08E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x08F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x08F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0904 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x0908 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x0914 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x0918 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0924 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x0928 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0934 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData25[ 0x4 ];                             		// 0x0938 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0944 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData26[ 0x4 ];                             		// 0x0948 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0954 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData27[ 0x4 ];                             		// 0x0958 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0964 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData28[ 0x4 ];                             		// 0x0968 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0974 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData29[ 0x4 ];                             		// 0x0978 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0984 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData30[ 0x4 ];                             		// 0x0988 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnContentPurchaseResponse__Delegate;            		// 0x0994 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData31[ 0x4 ];                             		// 0x0998 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x09A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData32[ 0x4 ];                             		// 0x09A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x09B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData33[ 0x4 ];                             		// 0x09B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x09C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData34[ 0x4 ];                             		// 0x09C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x09D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData35[ 0x4 ];                             		// 0x09D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;           		// 0x09E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData36[ 0x4 ];                             		// 0x09E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x09F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData37[ 0x4 ];                             		// 0x09F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x0A04 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData38[ 0x4 ];                             		// 0x0A08 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x0A14 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData39[ 0x4 ];                             		// 0x0A18 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x0A24 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData40[ 0x4 ];                             		// 0x0A28 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x0A34 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData41[ 0x4 ];                             		// 0x0A38 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x0A44 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData42[ 0x4 ];                             		// 0x0A48 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;             		// 0x0A54 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData43[ 0x4 ];                             		// 0x0A58 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;            		// 0x0A64 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData44[ 0x4 ];                             		// 0x0A68 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTokenAndSignatureRetrieved__Delegate;         		// 0x0A74 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData45[ 0x4 ];                             		// 0x0A78 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeLevelChecked__Delegate;              		// 0x0A84 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData46[ 0x4 ];                             		// 0x0A88 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStatisticChanged__Delegate;                   		// 0x0A94 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData47[ 0x4 ];                             		// 0x0A98 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCurrentUserChanged__Delegate;                 		// 0x0AA4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData48[ 0x4 ];                             		// 0x0AA8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsers__Delegate;           		// 0x0AB4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData49[ 0x4 ];                             		// 0x0AB8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsersByUniqueNetIds__Delegate;		// 0x0AC4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData50[ 0x4 ];                             		// 0x0AC8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFilterText__Delegate;                         		// 0x0AD4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData51[ 0x4 ];                             		// 0x0AD8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate; 		// 0x0AE4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData52[ 0x4 ];                             		// 0x0AE8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnShowGamerCardComplete__Delegate;              		// 0x0AF4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData53[ 0x4 ];                             		// 0x0AF8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAccountPickerComplete__Delegate;              		// 0x0B04 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData54[ 0x4 ];                             		// 0x0B08 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUserAccountInfoRetrieved__Delegate;           		// 0x0B14 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData55[ 0x4 ];                             		// 0x0B18 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRemoteTalkerStatusChange__Delegate;           		// 0x0B24 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData56[ 0x4 ];                             		// 0x0B28 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnShowComposeMessageUIComplete__Delegate;       		// 0x0B34 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData57[ 0x4 ];                             		// 0x0B38 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPeoplePickerComplete__Delegate;               		// 0x0B44 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData58[ 0x4 ];                             		// 0x0B48 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAcceptReceivedData__Delegate;                 		// 0x0B54 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData59[ 0x4 ];                             		// 0x0B58 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnShowHelpComplete__Delegate;                   		// 0x0B64 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData60[ 0x4 ];                             		// 0x0B68 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineProfilesComplete__Delegate;         		// 0x0B74 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData61[ 0x4 ];                             		// 0x0B78 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterLocalTalkerComplete__Delegate;        		// 0x0B84 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData62[ 0x4 ];                             		// 0x0B88 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterLocalTalkerComplete__Delegate;      		// 0x0B94 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData63[ 0x4 ];                             		// 0x0B98 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterRemoteTalkerComplete__Delegate;     		// 0x0BA4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData64[ 0x4 ];                             		// 0x0BA8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1460 );

		return pClassPointer;
	};

	bool OpenChatWithUser ( struct FUniqueNetId UniqueId );
	bool PreLogin ( );
	struct FString GetActivePlayerCountry ( );
	bool ReadChallenges ( unsigned char LocalUserNum, int TitleId, unsigned long bUnlockedOnly );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char GetCurrentConnectionStatus ( );
	bool ReadOnlineStatsForPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStatForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, unsigned long FavoriteFriendsOnly, int NumToRead );
	bool SendPlayerSessionResume ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId );
	bool SendPlayerSessionPause ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId );
	bool SendPlayerSessionEnd ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId );
	bool SendPlayerSessionStart ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId );
	bool SendReputationFeedback ( unsigned char SenderLocalUserNum, struct FUniqueNetId ReputeeNetId, unsigned char FeedbackType, struct FString ReportText );
	void ClearUnregisterRemoteTalkerCompleteDelegate ( struct FScriptDelegate UnregisterRemoteTalkerCompleteDelegate );
	void AddUnregisterRemoteTalkerCompleteDelegate ( struct FScriptDelegate UnregisterRemoteTalkerCompleteDelegate );
	void OnUnregisterRemoteTalkerComplete ( struct FUniqueNetId RemoteNetId, unsigned long bWasSuccessful );
	void ClearUnregisterLocalTalkerCompleteDelegate ( struct FScriptDelegate UnregisterLocalTalkerCompleteDelegate );
	void AddUnregisterLocalTalkerCompleteDelegate ( struct FScriptDelegate UnregisterLocalTalkerCompleteDelegate );
	void OnUnregisterLocalTalkerComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void ClearRegisterLocalTalkerCompleteDelegate ( struct FScriptDelegate RegisterLocalTalkerCompleteDelegate );
	void AddRegisterLocalTalkerCompleteDelegate ( struct FScriptDelegate RegisterLocalTalkerCompleteDelegate );
	void OnRegisterLocalTalkerComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void ClearReadOnlineProfilesCompleteDelegate ( struct FScriptDelegate ReadOnlineProfileDelegate );
	void AddReadOnlineProfilesCompleteDelegate ( struct FScriptDelegate ReadOnlineProfileDelegate );
	void OnReadOnlineProfilesComplete ( unsigned long bWasSuccessful, TArray< struct FString > PlayerIDs, TArray< struct FOnlineProfile > OnlineProfiles );
	bool ReadOnlineProfilesForPlayers ( TArray< struct FString > PlayerIDs, unsigned long bIncludePresence );
	bool GetPlayerIDForPlayerNickname ( struct FString InPlayerNickname, struct FUniqueNetId* OutPlayerId );
	bool GetPlayerNicknameForPlayerId ( struct FUniqueNetId InPlayerId, struct FString* OutPlayerNickname );
	bool ShowCustomErrorUI ( int ErrorCode, struct FString ErrorContext, struct FString DialogTitle, struct FString DialogContent );
	bool ShowSystemErrorUI ( int ErrorCode, struct FString ErrorContext );
	void CloseCurrentContentUI ( );
	bool ShowContentRedeemCodeUI ( unsigned char LocalUserNum, struct FString Offer );
	bool ShowContentPurchaseUI ( unsigned char LocalUserNum, struct FString Offer );
	bool ShowProductDetailsUI ( unsigned char LocalUserNum, struct FString ParentProductId );
	void ClearShowHelpCompleteDelegate ( struct FScriptDelegate HelpDelegate );
	void AddShowHelpCompleteDelegate ( struct FScriptDelegate HelpDelegate );
	void OnShowHelpComplete ( unsigned long bWasSuccessful );
	bool ShowHelpForErrorUI ( struct FString ContextId, struct FString ErrorString );
	bool ShowHelpUI ( unsigned char LocalUserNum );
	void ClearAcceptReceivedDataDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddAcceptReceivedDataDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnAcceptReceivedData ( struct FString Data );
	bool ShowDataSendingUI ( unsigned char LocalUserNum, struct FString Message, struct FString DataName, struct FString DataDescription, TArray< unsigned char > Data, int MaxSelectableUsers );
	void ClearPeoplePickerCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddPeoplePickerCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked );
	bool ShowPeoplePickerUI ( unsigned char LocalUserNum, TArray< struct FOnlineFriend > People, int MaxSelectable, struct FString Text );
	void ClearShowComposeMessageUICompleteDelegate ( struct FScriptDelegate MessageDelegate );
	void AddShowComposeMessageUICompleteDelegate ( struct FScriptDelegate MessageDelegate );
	void OnShowComposeMessageUIComplete ( unsigned long bWasSuccessful );
	void OnRemoteTalkerStatusChange ( struct FUniqueNetId RemoteNetId, unsigned long bIsTalking );
	bool UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting );
	bool IsTalkerMuted ( struct FUniqueNetId ConsoleId );
	void ClearGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate );
	void AddGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate );
	bool GetUserAccountInfo ( unsigned char LocalUserNum );
	void OnUserAccountInfoRetrieved ( unsigned long bSuccessful, struct FUserAccountInfo AccountInfo );
	void RemoveAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnAccountPickerComplete ( unsigned long bForceLogin );
	void ClearShowGamerCardCompleteDelegate ( struct FScriptDelegate GamerCardDelegate );
	void AddShowGamerCardCompleteDelegate ( struct FScriptDelegate GamerCardDelegate );
	void OnShowGamerCardComplete ( unsigned long bWasSuccessful );
	bool ShowVideo ( struct FString URL );
	void ClearSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate );
	void AddSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate );
	void OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum );
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
	void ClearCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate );
	void AddCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate );
	void OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser );
	bool PairUserAndControllerAtIndex ( unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex );
	bool CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	void UnsubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName );
	void SubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName, struct FScriptDelegate EventDelegate );
	void OnStatisticChanged ( struct FUniqueNetId PlayerNetId, struct FName StatName, struct FString NewStatValue );
	bool HideKeyboardUI ( unsigned char LocalUserNum );
	void ClearAchievements ( unsigned char LocalUserNum, int TitleId );
	void ClearPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void AddPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate );
	void OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void ClearURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate );
	void AddURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate );
	void OnTokenAndSignatureRetrieved ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature );
	bool GetTokenAndSignatureForURL ( unsigned char LocalUserNum, struct FString URL );
	bool ShowComposeMessageUI ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > People, struct FString Text );
	bool ShowGamerCardUIByUsername ( unsigned char LocalUserNum, struct FString UserName, struct FUniqueNetId PlayerID );
	void ClearAllDelegates ( );
	void ClearWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate );
	void AddWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate );
	bool WriteSharedFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* Contents );
	void OnWriteSharedFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle );
	void ClearReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate );
	void AddReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate );
	bool ReadSharedFile ( struct FString SharedHandle );
	void OnReadSharedFileComplete ( unsigned long bWasSuccessful, struct FString SharedHandle );
	bool ClearSharedFile ( struct FString SharedHandle );
	bool ClearSharedFiles ( );
	bool GetSharedFileContents ( struct FString SharedHandle, TArray< unsigned char >* FileContents );
	void ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	void AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	bool DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete );
	void OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	void AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	bool WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	void OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	void AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	bool ReadUserFile ( struct FString UserId, struct FString Filename );
	void OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles );
	void ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void EnumerateUserFiles ( struct FString UserId );
	void OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId );
	bool ClearFile ( struct FString UserId, struct FString Filename );
	bool ClearFiles ( struct FString UserId );
	bool GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	bool WriteUserFileInternal ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	bool GetFriendJoinURL ( struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID );
	bool GetCommandlineJoinURL ( unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID );
	bool Int64ToUniqueNetId ( struct FString UIDString, struct FUniqueNetId* OutUID );
	struct FString UniqueNetIdToInt64 ( struct FUniqueNetId* Uid );
	void NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent );
	void OnVOIPPlaybackFinished ( class UAudioComponent* AC );
	bool ShowProfileUI ( unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID );
	struct FString UniqueNetIdToPlayerName ( struct FUniqueNetId* Uid );
	bool DisplayAchievementProgress ( int AchievementId, int ProgressCount, int MaxProgress );
	bool CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat );
	bool ResetStats ( unsigned long bResetAchievements );
	bool ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients );
	void ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	class UOnlineProfileSettings* GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	void ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful );
	bool ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings );
	bool UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId );
	void GetSteamClanData ( TArray< struct FSteamPlayerClanData >* Results );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers );
	bool GetNumberOfCurrentPlayers ( );
	void ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, int Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate );
	void OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int ParentProductType, int RequestedProductTypes, struct FString ParentProductId );
	void ClearContentPurchaseResponse ( struct FScriptDelegate ResponseDelegate );
	void AddContentPurchaseResponse ( struct FScriptDelegate ResponseDelegate );
	void OnContentPurchaseResponse ( unsigned long bAuthorized, struct FQWord qwOrderId );
	bool CanShowContentPurchaseUI ( );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	void CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
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
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, struct FString StatusString, unsigned long PlayerActive );
	bool GetLocalAccountNames ( TArray< struct FString >* Accounts );
	bool DeleteLocalAccount ( struct FString UserName, struct FString Password );
	bool RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password );
	bool CreateLocalAccount ( struct FString UserName, struct FString Password );
	void ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus );
	bool CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	int GetLocale ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
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
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
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
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex );
	bool RegisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
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
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	bool CanMultiplayerCrossPlay ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	bool CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool IsAccountPickerOpen ( );
	bool ShowLoginUI ( unsigned char LocalUserNum, unsigned long bForceLogin, unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	void eventExit ( );
	bool eventInit ( );
};

UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0014 (0x023C - 0x0228)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned long                                      bSteamSocketsOnly : 1;                            		// 0x0228 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x022C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1461 );

		return pClassPointer;
	};

};

UClass* UIpNetDriverSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xB130 - 0xB130)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1462 );

		return pClassPointer;
	};

};

UClass* UIpNetConnectionSteamworks::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif