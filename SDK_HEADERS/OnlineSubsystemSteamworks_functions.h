/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 OutServerIP                    ( CPF_Parm | CPF_OutParm )
// int                            OutServerPort                  ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerAddr ( struct FIpAddr* OutServerIP, int* OutServerPort )
{
	static UFunction* pFnGetServerAddr = NULL;

	if ( ! pFnGetServerAddr )
		pFnGetServerAddr = (UFunction*) UObject::GObjObjects()->GetIndex( 134154 );

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms GetServerAddr_Parms;

	pFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerAddr, &GetServerAddr_Parms, NULL );

	pFnGetServerAddr->FunctionFlags |= 0x400;

	if ( OutServerIP )
		memcpy ( OutServerIP, &GetServerAddr_Parms.OutServerIP, 0x14 );

	if ( OutServerPort )
		*OutServerPort = GetServerAddr_Parms.OutServerPort;

	return GetServerAddr_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            OutServerUID                   ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId ( struct FUniqueNetId* OutServerUID )
{
	static UFunction* pFnGetServerUniqueId = NULL;

	if ( ! pFnGetServerUniqueId )
		pFnGetServerUniqueId = (UFunction*) UObject::GObjObjects()->GetIndex( 134151 );

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	pFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerUniqueId, &GetServerUniqueId_Parms, NULL );

	pFnGetServerUniqueId->FunctionFlags |= 0x400;

	if ( OutServerUID )
		memcpy ( OutServerUID, &GetServerUniqueId_Parms.OutServerUID, 0x8 );

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID )
{
	static UFunction* pFnVerifyServerAuthSession = NULL;

	if ( ! pFnVerifyServerAuthSession )
		pFnVerifyServerAuthSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134146 );

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy ( &VerifyServerAuthSession_Parms.ServerUID, &ServerUID, 0x8 );
	memcpy ( &VerifyServerAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	VerifyServerAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	pFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, NULL );

	pFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateServerAuthSession = NULL;

	if ( ! pFnCreateServerAuthSession )
		pFnCreateServerAuthSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134140 );

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy ( &CreateServerAuthSession_Parms.ClientUID, &ClientUID, 0x8 );
	memcpy ( &CreateServerAuthSession_Parms.ClientIP, &ClientIP, 0x14 );
	CreateServerAuthSession_Parms.ClientPort = ClientPort;

	pFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, NULL );

	pFnCreateServerAuthSession->FunctionFlags |= 0x400;

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateServerAuthSession_Parms.OutAuthTicketUID;

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID )
{
	static UFunction* pFnVerifyClientAuthSession = NULL;

	if ( ! pFnVerifyClientAuthSession )
		pFnVerifyClientAuthSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134134 );

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy ( &VerifyClientAuthSession_Parms.ClientUID, &ClientUID, 0x8 );
	memcpy ( &VerifyClientAuthSession_Parms.ClientIP, &ClientIP, 0x14 );
	VerifyClientAuthSession_Parms.ClientPort = ClientPort;
	VerifyClientAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	pFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, NULL );

	pFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )
// unsigned long                  bSecure                        ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateClientAuthSession = NULL;

	if ( ! pFnCreateClientAuthSession )
		pFnCreateClientAuthSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134127 );

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy ( &CreateClientAuthSession_Parms.ServerUID, &ServerUID, 0x8 );
	memcpy ( &CreateClientAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	CreateClientAuthSession_Parms.ServerPort = ServerPort;
	CreateClientAuthSession_Parms.bSecure = bSecure;

	pFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, NULL );

	pFnCreateClientAuthSession->FunctionFlags |= 0x400;

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateClientAuthSession_Parms.OutAuthTicketUID;

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest ( struct FUniqueNetId ServerUID )
{
	static UFunction* pFnSendServerAuthRequest = NULL;

	if ( ! pFnSendServerAuthRequest )
		pFnSendServerAuthRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 134124 );

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;
	memcpy ( &SendServerAuthRequest_Parms.ServerUID, &ServerUID, 0x8 );

	pFnSendServerAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, NULL );

	pFnSendServerAuthRequest->FunctionFlags |= 0x400;

	return SendServerAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID )
{
	static UFunction* pFnSendClientAuthRequest = NULL;

	if ( ! pFnSendClientAuthRequest )
		pFnSendClientAuthRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 134120 );

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;
	SendClientAuthRequest_Parms.ClientConnection = ClientConnection;
	memcpy ( &SendClientAuthRequest_Parms.ClientUID, &ClientUID, 0x8 );

	pFnSendClientAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, NULL );

	pFnSendClientAuthRequest->FunctionFlags |= 0x400;

	return SendClientAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetUserConnectionInfoAsync
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       UserNames                      ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::GetUserConnectionInfoAsync ( TArray< struct FString > UserNames )
{
	static UFunction* pFnGetUserConnectionInfoAsync = NULL;

	if ( ! pFnGetUserConnectionInfoAsync )
		pFnGetUserConnectionInfoAsync = (UFunction*) UObject::GObjObjects()->GetIndex( 134421 );

	UOnlineGameInterfaceSteamworks_execGetUserConnectionInfoAsync_Parms GetUserConnectionInfoAsync_Parms;
	memcpy ( &GetUserConnectionInfoAsync_Parms.UserNames, &UserNames, 0x10 );

	this->ProcessEvent ( pFnGetUserConnectionInfoAsync, &GetUserConnectionInfoAsync_Parms, NULL );

	return GetUserConnectionInfoAsync_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfo
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FSessionMemberInfo > OutMemberInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::GetCurrentSessionMemberInfo ( struct FName SessionName, TArray< struct FSessionMemberInfo >* OutMemberInfo )
{
	static UFunction* pFnGetCurrentSessionMemberInfo = NULL;

	if ( ! pFnGetCurrentSessionMemberInfo )
		pFnGetCurrentSessionMemberInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 134416 );

	UOnlineGameInterfaceSteamworks_execGetCurrentSessionMemberInfo_Parms GetCurrentSessionMemberInfo_Parms;
	memcpy ( &GetCurrentSessionMemberInfo_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetCurrentSessionMemberInfo, &GetCurrentSessionMemberInfo_Parms, NULL );

	if ( OutMemberInfo )
		memcpy ( OutMemberInfo, &GetCurrentSessionMemberInfo_Parms.OutMemberInfo, 0x10 );

	return GetCurrentSessionMemberInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfoAsync
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::GetCurrentSessionMemberInfoAsync ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnGetCurrentSessionMemberInfoAsync = NULL;

	if ( ! pFnGetCurrentSessionMemberInfoAsync )
		pFnGetCurrentSessionMemberInfoAsync = (UFunction*) UObject::GObjObjects()->GetIndex( 134412 );

	UOnlineGameInterfaceSteamworks_execGetCurrentSessionMemberInfoAsync_Parms GetCurrentSessionMemberInfoAsync_Parms;
	GetCurrentSessionMemberInfoAsync_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &GetCurrentSessionMemberInfoAsync_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetCurrentSessionMemberInfoAsync, &GetCurrentSessionMemberInfoAsync_Parms, NULL );

	return GetCurrentSessionMemberInfoAsync_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RunBandwidthTest
// [0x00020000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::RunBandwidthTest ( )
{
	static UFunction* pFnRunBandwidthTest = NULL;

	if ( ! pFnRunBandwidthTest )
		pFnRunBandwidthTest = (UFunction*) UObject::GObjObjects()->GetIndex( 134411 );

	UOnlineGameInterfaceSteamworks_execRunBandwidthTest_Parms RunBandwidthTest_Parms;

	this->ProcessEvent ( pFnRunBandwidthTest, &RunBandwidthTest_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsAllowedToNetworkHost
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceSteamworks::IsAllowedToNetworkHost ( )
{
	static UFunction* pFnIsAllowedToNetworkHost = NULL;

	if ( ! pFnIsAllowedToNetworkHost )
		pFnIsAllowedToNetworkHost = (UFunction*) UObject::GObjObjects()->GetIndex( 134409 );

	UOnlineGameInterfaceSteamworks_execIsAllowedToNetworkHost_Parms IsAllowedToNetworkHost_Parms;

	this->ProcessEvent ( pFnIsAllowedToNetworkHost, &IsAllowedToNetworkHost_Parms, NULL );

	return IsAllowedToNetworkHost_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromSessionId
// [0x00020000] 
// Parameters infos:
// struct FString                 SessionId                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::GetRoomIdFromSessionId ( struct FString SessionId )
{
	static UFunction* pFnGetRoomIdFromSessionId = NULL;

	if ( ! pFnGetRoomIdFromSessionId )
		pFnGetRoomIdFromSessionId = (UFunction*) UObject::GObjObjects()->GetIndex( 134407 );

	UOnlineGameInterfaceSteamworks_execGetRoomIdFromSessionId_Parms GetRoomIdFromSessionId_Parms;
	memcpy ( &GetRoomIdFromSessionId_Parms.SessionId, &SessionId, 0x10 );

	this->ProcessEvent ( pFnGetRoomIdFromSessionId, &GetRoomIdFromSessionId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromTitleService
// [0x00020000] 
// Parameters infos:
// struct FQWord                  DataId                         ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::GetRoomIdFromTitleService ( struct FQWord DataId )
{
	static UFunction* pFnGetRoomIdFromTitleService = NULL;

	if ( ! pFnGetRoomIdFromTitleService )
		pFnGetRoomIdFromTitleService = (UFunction*) UObject::GObjObjects()->GetIndex( 134405 );

	UOnlineGameInterfaceSteamworks_execGetRoomIdFromTitleService_Parms GetRoomIdFromTitleService_Parms;
	memcpy ( &GetRoomIdFromTitleService_Parms.DataId, &DataId, 0x8 );

	this->ProcessEvent ( pFnGetRoomIdFromTitleService, &GetRoomIdFromTitleService_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomId
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineGameInterfaceSteamworks::GetRoomId ( )
{
	static UFunction* pFnGetRoomId = NULL;

	if ( ! pFnGetRoomId )
		pFnGetRoomId = (UFunction*) UObject::GObjObjects()->GetIndex( 134403 );

	UOnlineGameInterfaceSteamworks_execGetRoomId_Parms GetRoomId_Parms;

	this->ProcessEvent ( pFnGetRoomId, &GetRoomId_Parms, NULL );

	return GetRoomId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayersCached
// [0x00020000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineGameInterfaceSteamworks::GetNumberOfCurrentPlayersCached ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayersCached = NULL;

	if ( ! pFnGetNumberOfCurrentPlayersCached )
		pFnGetNumberOfCurrentPlayersCached = (UFunction*) UObject::GObjObjects()->GetIndex( 134401 );

	UOnlineGameInterfaceSteamworks_execGetNumberOfCurrentPlayersCached_Parms GetNumberOfCurrentPlayersCached_Parms;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayersCached, &GetNumberOfCurrentPlayersCached_Parms, NULL );

	return GetNumberOfCurrentPlayersCached_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SendPlayerList
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< class APlayerReplicationInfo* > Players                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::SendPlayerList ( TArray< class APlayerReplicationInfo* > Players )
{
	static UFunction* pFnSendPlayerList = NULL;

	if ( ! pFnSendPlayerList )
		pFnSendPlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 134397 );

	UOnlineGameInterfaceSteamworks_execSendPlayerList_Parms SendPlayerList_Parms;
	memcpy ( &SendPlayerList_Parms.Players, &Players, 0x10 );

	this->ProcessEvent ( pFnSendPlayerList, &SendPlayerList_Parms, NULL );

	return SendPlayerList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RetrieveGameSettingsForIP
// [0x00020000] 
// Parameters infos:
// struct FString                 IPAddress                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::RetrieveGameSettingsForIP ( struct FString IPAddress )
{
	static UFunction* pFnRetrieveGameSettingsForIP = NULL;

	if ( ! pFnRetrieveGameSettingsForIP )
		pFnRetrieveGameSettingsForIP = (UFunction*) UObject::GObjObjects()->GetIndex( 134395 );

	UOnlineGameInterfaceSteamworks_execRetrieveGameSettingsForIP_Parms RetrieveGameSettingsForIP_Parms;
	memcpy ( &RetrieveGameSettingsForIP_Parms.IPAddress, &IPAddress, 0x10 );

	this->ProcessEvent ( pFnRetrieveGameSettingsForIP, &RetrieveGameSettingsForIP_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayers
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceSteamworks::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->GetIndex( 134393 );

	UOnlineGameInterfaceSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinMigratedOnlineGame
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinMigratedOnlineGame = NULL;

	if ( ! pFnJoinMigratedOnlineGame )
		pFnJoinMigratedOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134388 );

	UOnlineGameInterfaceSteamworks_execJoinMigratedOnlineGame_Parms JoinMigratedOnlineGame_Parms;
	JoinMigratedOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinMigratedOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinMigratedOnlineGame_Parms.DesiredGame, 0x10 );

	return JoinMigratedOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MigrateOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName )
{
	static UFunction* pFnMigrateOnlineGame = NULL;

	if ( ! pFnMigrateOnlineGame )
		pFnMigrateOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134384 );

	UOnlineGameInterfaceSteamworks_execMigrateOnlineGame_Parms MigrateOnlineGame_Parms;
	MigrateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &MigrateOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnMigrateOnlineGame, &MigrateOnlineGame_Parms, NULL );

	return MigrateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RecalculateSkillRating
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = (UFunction*) UObject::GObjObjects()->GetIndex( 134379 );

	UOnlineGameInterfaceSteamworks_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0x10 );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetArbitratedPlayers
// [0x00020000] 
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineGameInterfaceSteamworks::GetArbitratedPlayers ( struct FName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = (UFunction*) UObject::GObjObjects()->GetIndex( 134375 );

	UOnlineGameInterfaceSteamworks_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterForArbitration
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::RegisterForArbitration ( struct FName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = (UFunction*) UObject::GObjObjects()->GetIndex( 134372 );

	UOnlineGameInterfaceSteamworks_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::EndOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134369 );

	UOnlineGameInterfaceSteamworks_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.StartOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::StartOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134366 );

	UOnlineGameInterfaceSteamworks_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->GetIndex( 134362 );

	UOnlineGameInterfaceSteamworks_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0x10 );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsByKeyword
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalPlayerNum                 ( CPF_Parm )
// struct FString                 Keyword                        ( CPF_Parm | CPF_NeedCtorLink )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QuerySessionsByKeyword ( unsigned char LocalPlayerNum, struct FString Keyword, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnQuerySessionsByKeyword = NULL;

	if ( ! pFnQuerySessionsByKeyword )
		pFnQuerySessionsByKeyword = (UFunction*) UObject::GObjObjects()->GetIndex( 134357 );

	UOnlineGameInterfaceSteamworks_execQuerySessionsByKeyword_Parms QuerySessionsByKeyword_Parms;
	QuerySessionsByKeyword_Parms.LocalPlayerNum = LocalPlayerNum;
	memcpy ( &QuerySessionsByKeyword_Parms.Keyword, &Keyword, 0x10 );
	QuerySessionsByKeyword_Parms.SearchSettings = SearchSettings;

	this->ProcessEvent ( pFnQuerySessionsByKeyword, &QuerySessionsByKeyword_Parms, NULL );

	return QuerySessionsByKeyword_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsForUser
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalPlayerNum                 ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QuerySessionsForUser ( unsigned char LocalPlayerNum )
{
	static UFunction* pFnQuerySessionsForUser = NULL;

	if ( ! pFnQuerySessionsForUser )
		pFnQuerySessionsForUser = (UFunction*) UObject::GObjObjects()->GetIndex( 134354 );

	UOnlineGameInterfaceSteamworks_execQuerySessionsForUser_Parms QuerySessionsForUser_Parms;
	QuerySessionsForUser_Parms.LocalPlayerNum = LocalPlayerNum;

	this->ProcessEvent ( pFnQuerySessionsForUser, &QuerySessionsForUser_Parms, NULL );

	return QuerySessionsForUser_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveAllOnlineSessions
// [0x00024000] 
// Parameters infos:
// unsigned long                  bClearSessionIfHost            ( CPF_OptionalParm | CPF_Parm )

void UOnlineGameInterfaceSteamworks::LeaveAllOnlineSessions ( unsigned long bClearSessionIfHost )
{
	static UFunction* pFnLeaveAllOnlineSessions = NULL;

	if ( ! pFnLeaveAllOnlineSessions )
		pFnLeaveAllOnlineSessions = (UFunction*) UObject::GObjObjects()->GetIndex( 134352 );

	UOnlineGameInterfaceSteamworks_execLeaveAllOnlineSessions_Parms LeaveAllOnlineSessions_Parms;
	LeaveAllOnlineSessions_Parms.bClearSessionIfHost = bClearSessionIfHost;

	this->ProcessEvent ( pFnLeaveAllOnlineSessions, &LeaveAllOnlineSessions_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveOnlineSession
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalPlayerNum                 ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bClearSessionIfHost            ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks::LeaveOnlineSession ( unsigned char LocalPlayerNum, struct FName SessionName, unsigned long bClearSessionIfHost )
{
	static UFunction* pFnLeaveOnlineSession = NULL;

	if ( ! pFnLeaveOnlineSession )
		pFnLeaveOnlineSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134347 );

	UOnlineGameInterfaceSteamworks_execLeaveOnlineSession_Parms LeaveOnlineSession_Parms;
	LeaveOnlineSession_Parms.LocalPlayerNum = LocalPlayerNum;
	memcpy ( &LeaveOnlineSession_Parms.SessionName, &SessionName, 0x8 );
	LeaveOnlineSession_Parms.bClearSessionIfHost = bClearSessionIfHost;

	this->ProcessEvent ( pFnLeaveOnlineSession, &LeaveOnlineSession_Parms, NULL );

	return LeaveOnlineSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptPendingGameSession
// [0x00020000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::AcceptPendingGameSession ( struct FName SessionName )
{
	static UFunction* pFnAcceptPendingGameSession = NULL;

	if ( ! pFnAcceptPendingGameSession )
		pFnAcceptPendingGameSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134345 );

	UOnlineGameInterfaceSteamworks_execAcceptPendingGameSession_Parms AcceptPendingGameSession_Parms;
	memcpy ( &AcceptPendingGameSession_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptPendingGameSession, &AcceptPendingGameSession_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateSessionProperties
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingUserNum                ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UpdateSessionProperties ( unsigned char ScoutingUserNum, struct FName SessionName )
{
	static UFunction* pFnUpdateSessionProperties = NULL;

	if ( ! pFnUpdateSessionProperties )
		pFnUpdateSessionProperties = (UFunction*) UObject::GObjObjects()->GetIndex( 134341 );

	UOnlineGameInterfaceSteamworks_execUpdateSessionProperties_Parms UpdateSessionProperties_Parms;
	UpdateSessionProperties_Parms.ScoutingUserNum = ScoutingUserNum;
	memcpy ( &UpdateSessionProperties_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnUpdateSessionProperties, &UpdateSessionProperties_Parms, NULL );

	return UpdateSessionProperties_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomMemberProperty
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 PropertyName                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::DeleteCustomMemberProperty ( struct FName SessionName, struct FString PropertyName )
{
	static UFunction* pFnDeleteCustomMemberProperty = NULL;

	if ( ! pFnDeleteCustomMemberProperty )
		pFnDeleteCustomMemberProperty = (UFunction*) UObject::GObjObjects()->GetIndex( 134337 );

	UOnlineGameInterfaceSteamworks_execDeleteCustomMemberProperty_Parms DeleteCustomMemberProperty_Parms;
	memcpy ( &DeleteCustomMemberProperty_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &DeleteCustomMemberProperty_Parms.PropertyName, &PropertyName, 0x10 );

	this->ProcessEvent ( pFnDeleteCustomMemberProperty, &DeleteCustomMemberProperty_Parms, NULL );

	return DeleteCustomMemberProperty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomMemberProperty
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 PropertyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PropertyValue                  ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::SetCustomMemberProperty ( struct FName SessionName, struct FString PropertyName, struct FString PropertyValue )
{
	static UFunction* pFnSetCustomMemberProperty = NULL;

	if ( ! pFnSetCustomMemberProperty )
		pFnSetCustomMemberProperty = (UFunction*) UObject::GObjObjects()->GetIndex( 134332 );

	UOnlineGameInterfaceSteamworks_execSetCustomMemberProperty_Parms SetCustomMemberProperty_Parms;
	memcpy ( &SetCustomMemberProperty_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SetCustomMemberProperty_Parms.PropertyName, &PropertyName, 0x10 );
	memcpy ( &SetCustomMemberProperty_Parms.PropertyValue, &PropertyValue, 0x10 );

	this->ProcessEvent ( pFnSetCustomMemberProperty, &SetCustomMemberProperty_Parms, NULL );

	return SetCustomMemberProperty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomSessionProperty
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 PropertyName                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::DeleteCustomSessionProperty ( struct FName SessionName, struct FString PropertyName )
{
	static UFunction* pFnDeleteCustomSessionProperty = NULL;

	if ( ! pFnDeleteCustomSessionProperty )
		pFnDeleteCustomSessionProperty = (UFunction*) UObject::GObjObjects()->GetIndex( 134328 );

	UOnlineGameInterfaceSteamworks_execDeleteCustomSessionProperty_Parms DeleteCustomSessionProperty_Parms;
	memcpy ( &DeleteCustomSessionProperty_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &DeleteCustomSessionProperty_Parms.PropertyName, &PropertyName, 0x10 );

	this->ProcessEvent ( pFnDeleteCustomSessionProperty, &DeleteCustomSessionProperty_Parms, NULL );

	return DeleteCustomSessionProperty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomSessionProperty
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 PropertyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PropertyValue                  ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::SetCustomSessionProperty ( struct FName SessionName, struct FString PropertyName, struct FString PropertyValue )
{
	static UFunction* pFnSetCustomSessionProperty = NULL;

	if ( ! pFnSetCustomSessionProperty )
		pFnSetCustomSessionProperty = (UFunction*) UObject::GObjObjects()->GetIndex( 134323 );

	UOnlineGameInterfaceSteamworks_execSetCustomSessionProperty_Parms SetCustomSessionProperty_Parms;
	memcpy ( &SetCustomSessionProperty_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SetCustomSessionProperty_Parms.PropertyName, &PropertyName, 0x10 );
	memcpy ( &SetCustomSessionProperty_Parms.PropertyValue, &PropertyValue, 0x10 );

	this->ProcessEvent ( pFnSetCustomSessionProperty, &SetCustomSessionProperty_Parms, NULL );

	return SetCustomSessionProperty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMembers
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingPlayerNum              ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Members                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::AddSessionMembers ( unsigned char ScoutingPlayerNum, struct FName SessionName, TArray< struct FUniqueNetId > Members )
{
	static UFunction* pFnAddSessionMembers = NULL;

	if ( ! pFnAddSessionMembers )
		pFnAddSessionMembers = (UFunction*) UObject::GObjObjects()->GetIndex( 134317 );

	UOnlineGameInterfaceSteamworks_execAddSessionMembers_Parms AddSessionMembers_Parms;
	AddSessionMembers_Parms.ScoutingPlayerNum = ScoutingPlayerNum;
	memcpy ( &AddSessionMembers_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &AddSessionMembers_Parms.Members, &Members, 0x10 );

	this->ProcessEvent ( pFnAddSessionMembers, &AddSessionMembers_Parms, NULL );

	return AddSessionMembers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMember
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingPlayerNum              ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Member                         ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::AddSessionMember ( unsigned char ScoutingPlayerNum, struct FName SessionName, struct FUniqueNetId Member )
{
	static UFunction* pFnAddSessionMember = NULL;

	if ( ! pFnAddSessionMember )
		pFnAddSessionMember = (UFunction*) UObject::GObjObjects()->GetIndex( 134312 );

	UOnlineGameInterfaceSteamworks_execAddSessionMember_Parms AddSessionMember_Parms;
	AddSessionMember_Parms.ScoutingPlayerNum = ScoutingPlayerNum;
	memcpy ( &AddSessionMember_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &AddSessionMember_Parms.Member, &Member, 0x8 );

	this->ProcessEvent ( pFnAddSessionMember, &AddSessionMember_Parms, NULL );

	return AddSessionMember_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMemberByString
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingPlayerNum              ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::AddSessionMemberByString ( unsigned char ScoutingPlayerNum, struct FName SessionName, struct FString Member )
{
	static UFunction* pFnAddSessionMemberByString = NULL;

	if ( ! pFnAddSessionMemberByString )
		pFnAddSessionMemberByString = (UFunction*) UObject::GObjObjects()->GetIndex( 134307 );

	UOnlineGameInterfaceSteamworks_execAddSessionMemberByString_Parms AddSessionMemberByString_Parms;
	AddSessionMemberByString_Parms.ScoutingPlayerNum = ScoutingPlayerNum;
	memcpy ( &AddSessionMemberByString_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &AddSessionMemberByString_Parms.Member, &Member, 0x10 );

	this->ProcessEvent ( pFnAddSessionMemberByString, &AddSessionMemberByString_Parms, NULL );

	return AddSessionMemberByString_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineSessionWithTemplate
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingPlayerNum              ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )
// struct FString                 TemplateName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SessionKeyword                 ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::CreateOnlineSessionWithTemplate ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings, struct FString TemplateName, struct FString SessionKeyword )
{
	static UFunction* pFnCreateOnlineSessionWithTemplate = NULL;

	if ( ! pFnCreateOnlineSessionWithTemplate )
		pFnCreateOnlineSessionWithTemplate = (UFunction*) UObject::GObjObjects()->GetIndex( 134300 );

	UOnlineGameInterfaceSteamworks_execCreateOnlineSessionWithTemplate_Parms CreateOnlineSessionWithTemplate_Parms;
	CreateOnlineSessionWithTemplate_Parms.ScoutingPlayerNum = ScoutingPlayerNum;
	memcpy ( &CreateOnlineSessionWithTemplate_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineSessionWithTemplate_Parms.NewGameSettings = NewGameSettings;
	memcpy ( &CreateOnlineSessionWithTemplate_Parms.TemplateName, &TemplateName, 0x10 );
	memcpy ( &CreateOnlineSessionWithTemplate_Parms.SessionKeyword, &SessionKeyword, 0x10 );

	this->ProcessEvent ( pFnCreateOnlineSessionWithTemplate, &CreateOnlineSessionWithTemplate_Parms, NULL );

	return CreateOnlineSessionWithTemplate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.InitiatedSessionSearch
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::InitiatedSessionSearch ( struct FName SessionName )
{
	static UFunction* pFnInitiatedSessionSearch = NULL;

	if ( ! pFnInitiatedSessionSearch )
		pFnInitiatedSessionSearch = (UFunction*) UObject::GObjObjects()->GetIndex( 134297 );

	UOnlineGameInterfaceSteamworks_execInitiatedSessionSearch_Parms InitiatedSessionSearch_Parms;
	memcpy ( &InitiatedSessionSearch_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnInitiatedSessionSearch, &InitiatedSessionSearch_Parms, NULL );

	return InitiatedSessionSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsHostOfSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::IsHostOfSession ( struct FName SessionName )
{
	static UFunction* pFnIsHostOfSession = NULL;

	if ( ! pFnIsHostOfSession )
		pFnIsHostOfSession = (UFunction*) UObject::GObjObjects()->GetIndex( 134294 );

	UOnlineGameInterfaceSteamworks_execIsHostOfSession_Parms IsHostOfSession_Parms;
	memcpy ( &IsHostOfSession_Parms.SessionName, &SessionName, 0x8 );

	pFnIsHostOfSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHostOfSession, &IsHostOfSession_Parms, NULL );

	pFnIsHostOfSession->FunctionFlags |= 0x400;

	return IsHostOfSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakeOnlineGameWithParty
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingPlayerNum              ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::MatchmakeOnlineGameWithParty ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnMatchmakeOnlineGameWithParty = NULL;

	if ( ! pFnMatchmakeOnlineGameWithParty )
		pFnMatchmakeOnlineGameWithParty = (UFunction*) UObject::GObjObjects()->GetIndex( 134289 );

	UOnlineGameInterfaceSteamworks_execMatchmakeOnlineGameWithParty_Parms MatchmakeOnlineGameWithParty_Parms;
	MatchmakeOnlineGameWithParty_Parms.ScoutingPlayerNum = ScoutingPlayerNum;
	memcpy ( &MatchmakeOnlineGameWithParty_Parms.SessionName, &SessionName, 0x8 );
	MatchmakeOnlineGameWithParty_Parms.NewGameSettings = NewGameSettings;

	this->ProcessEvent ( pFnMatchmakeOnlineGameWithParty, &MatchmakeOnlineGameWithParty_Parms, NULL );

	return MatchmakeOnlineGameWithParty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameWithParty
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ScoutingPlayerNum              ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::CreateOnlineGameWithParty ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGameWithParty = NULL;

	if ( ! pFnCreateOnlineGameWithParty )
		pFnCreateOnlineGameWithParty = (UFunction*) UObject::GObjObjects()->GetIndex( 134284 );

	UOnlineGameInterfaceSteamworks_execCreateOnlineGameWithParty_Parms CreateOnlineGameWithParty_Parms;
	CreateOnlineGameWithParty_Parms.ScoutingPlayerNum = ScoutingPlayerNum;
	memcpy ( &CreateOnlineGameWithParty_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGameWithParty_Parms.NewGameSettings = NewGameSettings;

	this->ProcessEvent ( pFnCreateOnlineGameWithParty, &CreateOnlineGameWithParty_Parms, NULL );

	return CreateOnlineGameWithParty_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsCurrentRoomOwner
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceSteamworks::IsCurrentRoomOwner ( )
{
	static UFunction* pFnIsCurrentRoomOwner = NULL;

	if ( ! pFnIsCurrentRoomOwner )
		pFnIsCurrentRoomOwner = (UFunction*) UObject::GObjObjects()->GetIndex( 134282 );

	UOnlineGameInterfaceSteamworks_execIsCurrentRoomOwner_Parms IsCurrentRoomOwner_Parms;

	this->ProcessEvent ( pFnIsCurrentRoomOwner, &IsCurrentRoomOwner_Parms, NULL );

	return IsCurrentRoomOwner_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetRankedReadyStatus
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bReady                         ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::SetRankedReadyStatus ( unsigned long bReady )
{
	static UFunction* pFnSetRankedReadyStatus = NULL;

	if ( ! pFnSetRankedReadyStatus )
		pFnSetRankedReadyStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 134279 );

	UOnlineGameInterfaceSteamworks_execSetRankedReadyStatus_Parms SetRankedReadyStatus_Parms;
	SetRankedReadyStatus_Parms.bReady = bReady;

	this->ProcessEvent ( pFnSetRankedReadyStatus, &SetRankedReadyStatus_Parms, NULL );

	return SetRankedReadyStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsJoinOperationInProgress
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceSteamworks::IsJoinOperationInProgress ( )
{
	static UFunction* pFnIsJoinOperationInProgress = NULL;

	if ( ! pFnIsJoinOperationInProgress )
		pFnIsJoinOperationInProgress = (UFunction*) UObject::GObjObjects()->GetIndex( 134277 );

	UOnlineGameInterfaceSteamworks_execIsJoinOperationInProgress_Parms IsJoinOperationInProgress_Parms;

	this->ProcessEvent ( pFnIsJoinOperationInProgress, &IsJoinOperationInProgress_Parms, NULL );

	return IsJoinOperationInProgress_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameByMatchingParams
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQWord                  RoomId                         ( CPF_Parm )
// class UOnlineGameSettings*     JoinedGameSettings             ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::JoinOnlineGameByMatchingParams ( struct FQWord RoomId, class UOnlineGameSettings** JoinedGameSettings )
{
	static UFunction* pFnJoinOnlineGameByMatchingParams = NULL;

	if ( ! pFnJoinOnlineGameByMatchingParams )
		pFnJoinOnlineGameByMatchingParams = (UFunction*) UObject::GObjObjects()->GetIndex( 134273 );

	UOnlineGameInterfaceSteamworks_execJoinOnlineGameByMatchingParams_Parms JoinOnlineGameByMatchingParams_Parms;
	memcpy ( &JoinOnlineGameByMatchingParams_Parms.RoomId, &RoomId, 0x8 );

	this->ProcessEvent ( pFnJoinOnlineGameByMatchingParams, &JoinOnlineGameByMatchingParams_Parms, NULL );

	if ( JoinedGameSettings )
		*JoinedGameSettings = JoinOnlineGameByMatchingParams_Parms.JoinedGameSettings;

	return JoinOnlineGameByMatchingParams_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangeComplete
// [0x00020000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::OnMapChangeComplete ( )
{
	static UFunction* pFnOnMapChangeComplete = NULL;

	if ( ! pFnOnMapChangeComplete )
		pFnOnMapChangeComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134272 );

	UOnlineGameInterfaceSteamworks_execOnMapChangeComplete_Parms OnMapChangeComplete_Parms;

	this->ProcessEvent ( pFnOnMapChangeComplete, &OnMapChangeComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangePending
// [0x00020000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::OnMapChangePending ( )
{
	static UFunction* pFnOnMapChangePending = NULL;

	if ( ! pFnOnMapChangePending )
		pFnOnMapChangePending = (UFunction*) UObject::GObjObjects()->GetIndex( 134271 );

	UOnlineGameInterfaceSteamworks_execOnMapChangePending_Parms OnMapChangePending_Parms;

	this->ProcessEvent ( pFnOnMapChangePending, &OnMapChangePending_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameBySessionHandle
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 InSessionGuid                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::JoinOnlineGameBySessionHandle ( unsigned char PlayerNum, struct FName SessionName, struct FString InSessionGuid )
{
	static UFunction* pFnJoinOnlineGameBySessionHandle = NULL;

	if ( ! pFnJoinOnlineGameBySessionHandle )
		pFnJoinOnlineGameBySessionHandle = (UFunction*) UObject::GObjObjects()->GetIndex( 134266 );

	UOnlineGameInterfaceSteamworks_execJoinOnlineGameBySessionHandle_Parms JoinOnlineGameBySessionHandle_Parms;
	JoinOnlineGameBySessionHandle_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGameBySessionHandle_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &JoinOnlineGameBySessionHandle_Parms.InSessionGuid, &InSessionGuid, 0x10 );

	this->ProcessEvent ( pFnJoinOnlineGameBySessionHandle, &JoinOnlineGameBySessionHandle_Parms, NULL );

	return JoinOnlineGameBySessionHandle_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134261 );

	UOnlineGameInterfaceSteamworks_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	pFnJoinOnlineGame->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x10 );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FreeSearchResults
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = (UFunction*) UObject::GObjObjects()->GetIndex( 134258 );

	UOnlineGameInterfaceSteamworks_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSearch
// [0x00020000] 
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineGameInterfaceSteamworks::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = (UFunction*) UObject::GObjObjects()->GetIndex( 134256 );

	UOnlineGameInterfaceSteamworks_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = (UFunction*) UObject::GObjObjects()->GetIndex( 134251 );

	UOnlineGameInterfaceSteamworks_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*) UObject::GObjObjects()->GetIndex( 134247 );

	UOnlineGameInterfaceSteamworks_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 134243 );

	UOnlineGameInterfaceSteamworks_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x10 );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CancelFindOnlineGames
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceSteamworks::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = (UFunction*) UObject::GObjObjects()->GetIndex( 134241 );

	UOnlineGameInterfaceSteamworks_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FindOnlineGames
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->GetIndex( 134237 );

	UOnlineGameInterfaceSteamworks_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	return FindOnlineGames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::DestroyOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134234 );

	UOnlineGameInterfaceSteamworks_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134229 );

	UOnlineGameInterfaceSteamworks_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceSteamworks::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 134226 );

	UOnlineGameInterfaceSteamworks_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	pFnGetGameSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	pFnGetGameSettings->FunctionFlags |= 0x400;

	return GetGameSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->GetIndex( 134222 );

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134219 );

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134217 );

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134166 );

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnUnregisterPlayers = NULL;

	if ( ! pFnUnregisterPlayers )
		pFnUnregisterPlayers = (UFunction*) UObject::GObjObjects()->GetIndex( 134209 );

	UOnlineGameInterfaceSteamworks_execUnregisterPlayers_Parms UnregisterPlayers_Parms;
	memcpy ( &UnregisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayers, &UnregisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &UnregisterPlayers_Parms.Players, 0x10 );

	return UnregisterPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 134205 );

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134202 );

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134200 );

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134163 );

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRegisterPlayers = NULL;

	if ( ! pFnRegisterPlayers )
		pFnRegisterPlayers = (UFunction*) UObject::GObjObjects()->GetIndex( 134192 );

	UOnlineGameInterfaceSteamworks_execRegisterPlayers_Parms RegisterPlayers_Parms;
	memcpy ( &RegisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterPlayers, &RegisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RegisterPlayers_Parms.Players, 0x10 );

	return RegisterPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 134187 );

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 134183 );

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134179 );

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134176 );

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->GetIndex( 134160 );

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x10 );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 134170 );

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenChatWithUser
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::OpenChatWithUser ( struct FUniqueNetId UniqueId )
{
	static UFunction* pFnOpenChatWithUser = NULL;

	if ( ! pFnOpenChatWithUser )
		pFnOpenChatWithUser = (UFunction*) UObject::GObjObjects()->GetIndex( 135893 );

	UOnlineSubsystemSteamworks_execOpenChatWithUser_Parms OpenChatWithUser_Parms;
	memcpy ( &OpenChatWithUser_Parms.UniqueId, &UniqueId, 0x8 );

	pFnOpenChatWithUser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenChatWithUser, &OpenChatWithUser_Parms, NULL );

	pFnOpenChatWithUser->FunctionFlags |= 0x400;

	return OpenChatWithUser_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PreLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::PreLogin ( )
{
	static UFunction* pFnPreLogin = NULL;

	if ( ! pFnPreLogin )
		pFnPreLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 135891 );

	UOnlineSubsystemSteamworks_execPreLogin_Parms PreLogin_Parms;

	pFnPreLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreLogin, &PreLogin_Parms, NULL );

	pFnPreLogin->FunctionFlags |= 0x400;

	return PreLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActivePlayerCountry
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetActivePlayerCountry ( )
{
	static UFunction* pFnGetActivePlayerCountry = NULL;

	if ( ! pFnGetActivePlayerCountry )
		pFnGetActivePlayerCountry = (UFunction*) UObject::GObjObjects()->GetIndex( 135889 );

	UOnlineSubsystemSteamworks_execGetActivePlayerCountry_Parms GetActivePlayerCountry_Parms;

	pFnGetActivePlayerCountry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActivePlayerCountry, &GetActivePlayerCountry_Parms, NULL );

	pFnGetActivePlayerCountry->FunctionFlags |= 0x400;

	return GetActivePlayerCountry_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadChallenges
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUnlockedOnly                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadChallenges ( unsigned char LocalUserNum, int TitleId, unsigned long bUnlockedOnly )
{
	static UFunction* pFnReadChallenges = NULL;

	if ( ! pFnReadChallenges )
		pFnReadChallenges = (UFunction*) UObject::GObjObjects()->GetIndex( 135884 );

	UOnlineSubsystemSteamworks_execReadChallenges_Parms ReadChallenges_Parms;
	ReadChallenges_Parms.LocalUserNum = LocalUserNum;
	ReadChallenges_Parms.TitleId = TitleId;
	ReadChallenges_Parms.bUnlockedOnly = bUnlockedOnly;

	pFnReadChallenges->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadChallenges, &ReadChallenges_Parms, NULL );

	pFnReadChallenges->FunctionFlags |= 0x400;

	return ReadChallenges_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 135880 );

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsMuted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	pFnIsMuted->FunctionFlags |= 0x400;

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetCurrentConnectionStatus ( )
{
	static UFunction* pFnGetCurrentConnectionStatus = NULL;

	if ( ! pFnGetCurrentConnectionStatus )
		pFnGetCurrentConnectionStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 135878 );

	UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent ( pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, NULL );

	return GetCurrentConnectionStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForPlayer = NULL;

	if ( ! pFnReadOnlineStatsForPlayer )
		pFnReadOnlineStatsForPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 135874 );

	UOnlineSubsystemSteamworks_execReadOnlineStatsForPlayer_Parms ReadOnlineStatsForPlayer_Parms;
	ReadOnlineStatsForPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForPlayer_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnReadOnlineStatsForPlayer, &ReadOnlineStatsForPlayer_Parms, NULL );

	return ReadOnlineStatsForPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatForFriends
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// unsigned long                  FavoriteFriendsOnly            ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, unsigned long FavoriteFriendsOnly, int NumToRead )
{
	static UFunction* pFnReadOnlineStatForFriends = NULL;

	if ( ! pFnReadOnlineStatForFriends )
		pFnReadOnlineStatForFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 135868 );

	UOnlineSubsystemSteamworks_execReadOnlineStatForFriends_Parms ReadOnlineStatForFriends_Parms;
	ReadOnlineStatForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatForFriends_Parms.StatsRead = StatsRead;
	ReadOnlineStatForFriends_Parms.FavoriteFriendsOnly = FavoriteFriendsOnly;
	ReadOnlineStatForFriends_Parms.NumToRead = NumToRead;

	this->ProcessEvent ( pFnReadOnlineStatForFriends, &ReadOnlineStatForFriends_Parms, NULL );

	return ReadOnlineStatForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionResume
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )
// int                            GameplayModeId                 ( CPF_Parm )
// int                            DifficultyLevelId              ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SendPlayerSessionResume ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId )
{
	static UFunction* pFnSendPlayerSessionResume = NULL;

	if ( ! pFnSendPlayerSessionResume )
		pFnSendPlayerSessionResume = (UFunction*) UObject::GObjObjects()->GetIndex( 135862 );

	UOnlineSubsystemSteamworks_execSendPlayerSessionResume_Parms SendPlayerSessionResume_Parms;
	SendPlayerSessionResume_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionResume_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );
	SendPlayerSessionResume_Parms.GameplayModeId = GameplayModeId;
	SendPlayerSessionResume_Parms.DifficultyLevelId = DifficultyLevelId;

	this->ProcessEvent ( pFnSendPlayerSessionResume, &SendPlayerSessionResume_Parms, NULL );

	return SendPlayerSessionResume_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionPause
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendPlayerSessionPause ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId )
{
	static UFunction* pFnSendPlayerSessionPause = NULL;

	if ( ! pFnSendPlayerSessionPause )
		pFnSendPlayerSessionPause = (UFunction*) UObject::GObjObjects()->GetIndex( 135858 );

	UOnlineSubsystemSteamworks_execSendPlayerSessionPause_Parms SendPlayerSessionPause_Parms;
	SendPlayerSessionPause_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionPause_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );

	this->ProcessEvent ( pFnSendPlayerSessionPause, &SendPlayerSessionPause_Parms, NULL );

	return SendPlayerSessionPause_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionEnd
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )
// int                            GameplayModeId                 ( CPF_Parm )
// int                            DifficultyLevelId              ( CPF_Parm )
// int                            ExitStatusId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SendPlayerSessionEnd ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId )
{
	static UFunction* pFnSendPlayerSessionEnd = NULL;

	if ( ! pFnSendPlayerSessionEnd )
		pFnSendPlayerSessionEnd = (UFunction*) UObject::GObjObjects()->GetIndex( 135851 );

	UOnlineSubsystemSteamworks_execSendPlayerSessionEnd_Parms SendPlayerSessionEnd_Parms;
	SendPlayerSessionEnd_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionEnd_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );
	SendPlayerSessionEnd_Parms.GameplayModeId = GameplayModeId;
	SendPlayerSessionEnd_Parms.DifficultyLevelId = DifficultyLevelId;
	SendPlayerSessionEnd_Parms.ExitStatusId = ExitStatusId;

	this->ProcessEvent ( pFnSendPlayerSessionEnd, &SendPlayerSessionEnd_Parms, NULL );

	return SendPlayerSessionEnd_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionStart
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )
// int                            GameplayModeId                 ( CPF_Parm )
// int                            DifficultyLevelId              ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SendPlayerSessionStart ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId )
{
	static UFunction* pFnSendPlayerSessionStart = NULL;

	if ( ! pFnSendPlayerSessionStart )
		pFnSendPlayerSessionStart = (UFunction*) UObject::GObjObjects()->GetIndex( 135845 );

	UOnlineSubsystemSteamworks_execSendPlayerSessionStart_Parms SendPlayerSessionStart_Parms;
	SendPlayerSessionStart_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionStart_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );
	SendPlayerSessionStart_Parms.GameplayModeId = GameplayModeId;
	SendPlayerSessionStart_Parms.DifficultyLevelId = DifficultyLevelId;

	this->ProcessEvent ( pFnSendPlayerSessionStart, &SendPlayerSessionStart_Parms, NULL );

	return SendPlayerSessionStart_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendReputationFeedback
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SenderLocalUserNum             ( CPF_Parm )
// struct FUniqueNetId            ReputeeNetId                   ( CPF_Parm )
// unsigned char                  FeedbackType                   ( CPF_Parm )
// struct FString                 ReportText                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendReputationFeedback ( unsigned char SenderLocalUserNum, struct FUniqueNetId ReputeeNetId, unsigned char FeedbackType, struct FString ReportText )
{
	static UFunction* pFnSendReputationFeedback = NULL;

	if ( ! pFnSendReputationFeedback )
		pFnSendReputationFeedback = (UFunction*) UObject::GObjObjects()->GetIndex( 135839 );

	UOnlineSubsystemSteamworks_execSendReputationFeedback_Parms SendReputationFeedback_Parms;
	SendReputationFeedback_Parms.SenderLocalUserNum = SenderLocalUserNum;
	memcpy ( &SendReputationFeedback_Parms.ReputeeNetId, &ReputeeNetId, 0x8 );
	SendReputationFeedback_Parms.FeedbackType = FeedbackType;
	memcpy ( &SendReputationFeedback_Parms.ReportText, &ReportText, 0x10 );

	this->ProcessEvent ( pFnSendReputationFeedback, &SendReputationFeedback_Parms, NULL );

	return SendReputationFeedback_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterRemoteTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterRemoteTalkerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnregisterRemoteTalkerCompleteDelegate ( struct FScriptDelegate UnregisterRemoteTalkerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterRemoteTalkerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterRemoteTalkerCompleteDelegate )
		pFnClearUnregisterRemoteTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135837 );

	UOnlineSubsystemSteamworks_execClearUnregisterRemoteTalkerCompleteDelegate_Parms ClearUnregisterRemoteTalkerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterRemoteTalkerCompleteDelegate_Parms.UnregisterRemoteTalkerCompleteDelegate, &UnregisterRemoteTalkerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterRemoteTalkerCompleteDelegate, &ClearUnregisterRemoteTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterRemoteTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterRemoteTalkerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnregisterRemoteTalkerCompleteDelegate ( struct FScriptDelegate UnregisterRemoteTalkerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterRemoteTalkerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterRemoteTalkerCompleteDelegate )
		pFnAddUnregisterRemoteTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135835 );

	UOnlineSubsystemSteamworks_execAddUnregisterRemoteTalkerCompleteDelegate_Parms AddUnregisterRemoteTalkerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterRemoteTalkerCompleteDelegate_Parms.UnregisterRemoteTalkerCompleteDelegate, &UnregisterRemoteTalkerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterRemoteTalkerCompleteDelegate, &AddUnregisterRemoteTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterRemoteTalkerComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            RemoteNetId                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnregisterRemoteTalkerComplete ( struct FUniqueNetId RemoteNetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterRemoteTalkerComplete = NULL;

	if ( ! pFnOnUnregisterRemoteTalkerComplete )
		pFnOnUnregisterRemoteTalkerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135832 );

	UOnlineSubsystemSteamworks_execOnUnregisterRemoteTalkerComplete_Parms OnUnregisterRemoteTalkerComplete_Parms;
	memcpy ( &OnUnregisterRemoteTalkerComplete_Parms.RemoteNetId, &RemoteNetId, 0x8 );
	OnUnregisterRemoteTalkerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterRemoteTalkerComplete, &OnUnregisterRemoteTalkerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterLocalTalkerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnregisterLocalTalkerCompleteDelegate ( struct FScriptDelegate UnregisterLocalTalkerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterLocalTalkerCompleteDelegate )
		pFnClearUnregisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135830 );

	UOnlineSubsystemSteamworks_execClearUnregisterLocalTalkerCompleteDelegate_Parms ClearUnregisterLocalTalkerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterLocalTalkerCompleteDelegate_Parms.UnregisterLocalTalkerCompleteDelegate, &UnregisterLocalTalkerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterLocalTalkerCompleteDelegate, &ClearUnregisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterLocalTalkerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnregisterLocalTalkerCompleteDelegate ( struct FScriptDelegate UnregisterLocalTalkerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterLocalTalkerCompleteDelegate )
		pFnAddUnregisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135828 );

	UOnlineSubsystemSteamworks_execAddUnregisterLocalTalkerCompleteDelegate_Parms AddUnregisterLocalTalkerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterLocalTalkerCompleteDelegate_Parms.UnregisterLocalTalkerCompleteDelegate, &UnregisterLocalTalkerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterLocalTalkerCompleteDelegate, &AddUnregisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterLocalTalkerComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnregisterLocalTalkerComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterLocalTalkerComplete = NULL;

	if ( ! pFnOnUnregisterLocalTalkerComplete )
		pFnOnUnregisterLocalTalkerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135825 );

	UOnlineSubsystemSteamworks_execOnUnregisterLocalTalkerComplete_Parms OnUnregisterLocalTalkerComplete_Parms;
	OnUnregisterLocalTalkerComplete_Parms.LocalUserNum = LocalUserNum;
	OnUnregisterLocalTalkerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterLocalTalkerComplete, &OnUnregisterLocalTalkerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterLocalTalkerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRegisterLocalTalkerCompleteDelegate ( struct FScriptDelegate RegisterLocalTalkerCompleteDelegate )
{
	static UFunction* pFnClearRegisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterLocalTalkerCompleteDelegate )
		pFnClearRegisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135823 );

	UOnlineSubsystemSteamworks_execClearRegisterLocalTalkerCompleteDelegate_Parms ClearRegisterLocalTalkerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterLocalTalkerCompleteDelegate_Parms.RegisterLocalTalkerCompleteDelegate, &RegisterLocalTalkerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterLocalTalkerCompleteDelegate, &ClearRegisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterLocalTalkerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRegisterLocalTalkerCompleteDelegate ( struct FScriptDelegate RegisterLocalTalkerCompleteDelegate )
{
	static UFunction* pFnAddRegisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterLocalTalkerCompleteDelegate )
		pFnAddRegisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135821 );

	UOnlineSubsystemSteamworks_execAddRegisterLocalTalkerCompleteDelegate_Parms AddRegisterLocalTalkerCompleteDelegate_Parms;
	memcpy ( &AddRegisterLocalTalkerCompleteDelegate_Parms.RegisterLocalTalkerCompleteDelegate, &RegisterLocalTalkerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterLocalTalkerCompleteDelegate, &AddRegisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterLocalTalkerComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRegisterLocalTalkerComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterLocalTalkerComplete = NULL;

	if ( ! pFnOnRegisterLocalTalkerComplete )
		pFnOnRegisterLocalTalkerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135818 );

	UOnlineSubsystemSteamworks_execOnRegisterLocalTalkerComplete_Parms OnRegisterLocalTalkerComplete_Parms;
	OnRegisterLocalTalkerComplete_Parms.LocalUserNum = LocalUserNum;
	OnRegisterLocalTalkerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterLocalTalkerComplete, &OnRegisterLocalTalkerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineProfilesCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineProfileDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadOnlineProfilesCompleteDelegate ( struct FScriptDelegate ReadOnlineProfileDelegate )
{
	static UFunction* pFnClearReadOnlineProfilesCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineProfilesCompleteDelegate )
		pFnClearReadOnlineProfilesCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135816 );

	UOnlineSubsystemSteamworks_execClearReadOnlineProfilesCompleteDelegate_Parms ClearReadOnlineProfilesCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineProfilesCompleteDelegate_Parms.ReadOnlineProfileDelegate, &ReadOnlineProfileDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadOnlineProfilesCompleteDelegate, &ClearReadOnlineProfilesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineProfilesCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineProfileDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadOnlineProfilesCompleteDelegate ( struct FScriptDelegate ReadOnlineProfileDelegate )
{
	static UFunction* pFnAddReadOnlineProfilesCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineProfilesCompleteDelegate )
		pFnAddReadOnlineProfilesCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135814 );

	UOnlineSubsystemSteamworks_execAddReadOnlineProfilesCompleteDelegate_Parms AddReadOnlineProfilesCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineProfilesCompleteDelegate_Parms.ReadOnlineProfileDelegate, &ReadOnlineProfileDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadOnlineProfilesCompleteDelegate, &AddReadOnlineProfilesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineProfilesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FString >       PlayerIDs                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FOnlineProfile > OnlineProfiles                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadOnlineProfilesComplete ( unsigned long bWasSuccessful, TArray< struct FString > PlayerIDs, TArray< struct FOnlineProfile > OnlineProfiles )
{
	static UFunction* pFnOnReadOnlineProfilesComplete = NULL;

	if ( ! pFnOnReadOnlineProfilesComplete )
		pFnOnReadOnlineProfilesComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135808 );

	UOnlineSubsystemSteamworks_execOnReadOnlineProfilesComplete_Parms OnReadOnlineProfilesComplete_Parms;
	OnReadOnlineProfilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadOnlineProfilesComplete_Parms.PlayerIDs, &PlayerIDs, 0x10 );
	memcpy ( &OnReadOnlineProfilesComplete_Parms.OnlineProfiles, &OnlineProfiles, 0x10 );

	this->ProcessEvent ( pFnOnReadOnlineProfilesComplete, &OnReadOnlineProfilesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineProfilesForPlayers
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       PlayerIDs                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIncludePresence               ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineProfilesForPlayers ( TArray< struct FString > PlayerIDs, unsigned long bIncludePresence )
{
	static UFunction* pFnReadOnlineProfilesForPlayers = NULL;

	if ( ! pFnReadOnlineProfilesForPlayers )
		pFnReadOnlineProfilesForPlayers = (UFunction*) UObject::GObjObjects()->GetIndex( 135803 );

	UOnlineSubsystemSteamworks_execReadOnlineProfilesForPlayers_Parms ReadOnlineProfilesForPlayers_Parms;
	memcpy ( &ReadOnlineProfilesForPlayers_Parms.PlayerIDs, &PlayerIDs, 0x10 );
	ReadOnlineProfilesForPlayers_Parms.bIncludePresence = bIncludePresence;

	this->ProcessEvent ( pFnReadOnlineProfilesForPlayers, &ReadOnlineProfilesForPlayers_Parms, NULL );

	return ReadOnlineProfilesForPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerIDForPlayerNickname
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InPlayerNickname               ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            OutPlayerId                    ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetPlayerIDForPlayerNickname ( struct FString InPlayerNickname, struct FUniqueNetId* OutPlayerId )
{
	static UFunction* pFnGetPlayerIDForPlayerNickname = NULL;

	if ( ! pFnGetPlayerIDForPlayerNickname )
		pFnGetPlayerIDForPlayerNickname = (UFunction*) UObject::GObjObjects()->GetIndex( 135799 );

	UOnlineSubsystemSteamworks_execGetPlayerIDForPlayerNickname_Parms GetPlayerIDForPlayerNickname_Parms;
	memcpy ( &GetPlayerIDForPlayerNickname_Parms.InPlayerNickname, &InPlayerNickname, 0x10 );

	this->ProcessEvent ( pFnGetPlayerIDForPlayerNickname, &GetPlayerIDForPlayerNickname_Parms, NULL );

	if ( OutPlayerId )
		memcpy ( OutPlayerId, &GetPlayerIDForPlayerNickname_Parms.OutPlayerId, 0x8 );

	return GetPlayerIDForPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameForPlayerId
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InPlayerId                     ( CPF_Parm )
// struct FString                 OutPlayerNickname              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetPlayerNicknameForPlayerId ( struct FUniqueNetId InPlayerId, struct FString* OutPlayerNickname )
{
	static UFunction* pFnGetPlayerNicknameForPlayerId = NULL;

	if ( ! pFnGetPlayerNicknameForPlayerId )
		pFnGetPlayerNicknameForPlayerId = (UFunction*) UObject::GObjObjects()->GetIndex( 135795 );

	UOnlineSubsystemSteamworks_execGetPlayerNicknameForPlayerId_Parms GetPlayerNicknameForPlayerId_Parms;
	memcpy ( &GetPlayerNicknameForPlayerId_Parms.InPlayerId, &InPlayerId, 0x8 );

	this->ProcessEvent ( pFnGetPlayerNicknameForPlayerId, &GetPlayerNicknameForPlayerId_Parms, NULL );

	if ( OutPlayerNickname )
		memcpy ( OutPlayerNickname, &GetPlayerNicknameForPlayerId_Parms.OutPlayerNickname, 0x10 );

	return GetPlayerNicknameForPlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomErrorUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorContext                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DialogTitle                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DialogContent                  ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomErrorUI ( int ErrorCode, struct FString ErrorContext, struct FString DialogTitle, struct FString DialogContent )
{
	static UFunction* pFnShowCustomErrorUI = NULL;

	if ( ! pFnShowCustomErrorUI )
		pFnShowCustomErrorUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135789 );

	UOnlineSubsystemSteamworks_execShowCustomErrorUI_Parms ShowCustomErrorUI_Parms;
	ShowCustomErrorUI_Parms.ErrorCode = ErrorCode;
	memcpy ( &ShowCustomErrorUI_Parms.ErrorContext, &ErrorContext, 0x10 );
	memcpy ( &ShowCustomErrorUI_Parms.DialogTitle, &DialogTitle, 0x10 );
	memcpy ( &ShowCustomErrorUI_Parms.DialogContent, &DialogContent, 0x10 );

	this->ProcessEvent ( pFnShowCustomErrorUI, &ShowCustomErrorUI_Parms, NULL );

	return ShowCustomErrorUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemErrorUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorContext                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowSystemErrorUI ( int ErrorCode, struct FString ErrorContext )
{
	static UFunction* pFnShowSystemErrorUI = NULL;

	if ( ! pFnShowSystemErrorUI )
		pFnShowSystemErrorUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135785 );

	UOnlineSubsystemSteamworks_execShowSystemErrorUI_Parms ShowSystemErrorUI_Parms;
	ShowSystemErrorUI_Parms.ErrorCode = ErrorCode;
	memcpy ( &ShowSystemErrorUI_Parms.ErrorContext, &ErrorContext, 0x10 );

	this->ProcessEvent ( pFnShowSystemErrorUI, &ShowSystemErrorUI_Parms, NULL );

	return ShowSystemErrorUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CloseCurrentContentUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CloseCurrentContentUI ( )
{
	static UFunction* pFnCloseCurrentContentUI = NULL;

	if ( ! pFnCloseCurrentContentUI )
		pFnCloseCurrentContentUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135784 );

	UOnlineSubsystemSteamworks_execCloseCurrentContentUI_Parms CloseCurrentContentUI_Parms;

	this->ProcessEvent ( pFnCloseCurrentContentUI, &CloseCurrentContentUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentRedeemCodeUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Offer                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowContentRedeemCodeUI ( unsigned char LocalUserNum, struct FString Offer )
{
	static UFunction* pFnShowContentRedeemCodeUI = NULL;

	if ( ! pFnShowContentRedeemCodeUI )
		pFnShowContentRedeemCodeUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135780 );

	UOnlineSubsystemSteamworks_execShowContentRedeemCodeUI_Parms ShowContentRedeemCodeUI_Parms;
	ShowContentRedeemCodeUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowContentRedeemCodeUI_Parms.Offer, &Offer, 0x10 );

	this->ProcessEvent ( pFnShowContentRedeemCodeUI, &ShowContentRedeemCodeUI_Parms, NULL );

	return ShowContentRedeemCodeUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Offer                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowContentPurchaseUI ( unsigned char LocalUserNum, struct FString Offer )
{
	static UFunction* pFnShowContentPurchaseUI = NULL;

	if ( ! pFnShowContentPurchaseUI )
		pFnShowContentPurchaseUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135776 );

	UOnlineSubsystemSteamworks_execShowContentPurchaseUI_Parms ShowContentPurchaseUI_Parms;
	ShowContentPurchaseUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowContentPurchaseUI_Parms.Offer, &Offer, 0x10 );

	this->ProcessEvent ( pFnShowContentPurchaseUI, &ShowContentPurchaseUI_Parms, NULL );

	return ShowContentPurchaseUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProductDetailsUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 ParentProductId                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowProductDetailsUI ( unsigned char LocalUserNum, struct FString ParentProductId )
{
	static UFunction* pFnShowProductDetailsUI = NULL;

	if ( ! pFnShowProductDetailsUI )
		pFnShowProductDetailsUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135772 );

	UOnlineSubsystemSteamworks_execShowProductDetailsUI_Parms ShowProductDetailsUI_Parms;
	ShowProductDetailsUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowProductDetailsUI_Parms.ParentProductId, &ParentProductId, 0x10 );

	this->ProcessEvent ( pFnShowProductDetailsUI, &ShowProductDetailsUI_Parms, NULL );

	return ShowProductDetailsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowHelpCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         HelpDelegate                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearShowHelpCompleteDelegate ( struct FScriptDelegate HelpDelegate )
{
	static UFunction* pFnClearShowHelpCompleteDelegate = NULL;

	if ( ! pFnClearShowHelpCompleteDelegate )
		pFnClearShowHelpCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135770 );

	UOnlineSubsystemSteamworks_execClearShowHelpCompleteDelegate_Parms ClearShowHelpCompleteDelegate_Parms;
	memcpy ( &ClearShowHelpCompleteDelegate_Parms.HelpDelegate, &HelpDelegate, 0x10 );

	this->ProcessEvent ( pFnClearShowHelpCompleteDelegate, &ClearShowHelpCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowHelpCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         HelpDelegate                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddShowHelpCompleteDelegate ( struct FScriptDelegate HelpDelegate )
{
	static UFunction* pFnAddShowHelpCompleteDelegate = NULL;

	if ( ! pFnAddShowHelpCompleteDelegate )
		pFnAddShowHelpCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135768 );

	UOnlineSubsystemSteamworks_execAddShowHelpCompleteDelegate_Parms AddShowHelpCompleteDelegate_Parms;
	memcpy ( &AddShowHelpCompleteDelegate_Parms.HelpDelegate, &HelpDelegate, 0x10 );

	this->ProcessEvent ( pFnAddShowHelpCompleteDelegate, &AddShowHelpCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowHelpComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnShowHelpComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnShowHelpComplete = NULL;

	if ( ! pFnOnShowHelpComplete )
		pFnOnShowHelpComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135766 );

	UOnlineSubsystemSteamworks_execOnShowHelpComplete_Parms OnShowHelpComplete_Parms;
	OnShowHelpComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnShowHelpComplete, &OnShowHelpComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpForErrorUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ContextId                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ErrorString                    ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowHelpForErrorUI ( struct FString ContextId, struct FString ErrorString )
{
	static UFunction* pFnShowHelpForErrorUI = NULL;

	if ( ! pFnShowHelpForErrorUI )
		pFnShowHelpForErrorUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135762 );

	UOnlineSubsystemSteamworks_execShowHelpForErrorUI_Parms ShowHelpForErrorUI_Parms;
	memcpy ( &ShowHelpForErrorUI_Parms.ContextId, &ContextId, 0x10 );
	memcpy ( &ShowHelpForErrorUI_Parms.ErrorString, &ErrorString, 0x10 );

	this->ProcessEvent ( pFnShowHelpForErrorUI, &ShowHelpForErrorUI_Parms, NULL );

	return ShowHelpForErrorUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowHelpUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowHelpUI = NULL;

	if ( ! pFnShowHelpUI )
		pFnShowHelpUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135759 );

	UOnlineSubsystemSteamworks_execShowHelpUI_Parms ShowHelpUI_Parms;
	ShowHelpUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowHelpUI, &ShowHelpUI_Parms, NULL );

	return ShowHelpUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptReceivedDataDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearAcceptReceivedDataDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearAcceptReceivedDataDelegate = NULL;

	if ( ! pFnClearAcceptReceivedDataDelegate )
		pFnClearAcceptReceivedDataDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135756 );

	UOnlineSubsystemSteamworks_execClearAcceptReceivedDataDelegate_Parms ClearAcceptReceivedDataDelegate_Parms;
	ClearAcceptReceivedDataDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAcceptReceivedDataDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearAcceptReceivedDataDelegate, &ClearAcceptReceivedDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptReceivedDataDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAcceptReceivedDataDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddAcceptReceivedDataDelegate = NULL;

	if ( ! pFnAddAcceptReceivedDataDelegate )
		pFnAddAcceptReceivedDataDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135753 );

	UOnlineSubsystemSteamworks_execAddAcceptReceivedDataDelegate_Parms AddAcceptReceivedDataDelegate_Parms;
	AddAcceptReceivedDataDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAcceptReceivedDataDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAcceptReceivedDataDelegate, &AddAcceptReceivedDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptReceivedData
// [0x00120000] 
// Parameters infos:
// struct FString                 Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnAcceptReceivedData ( struct FString Data )
{
	static UFunction* pFnOnAcceptReceivedData = NULL;

	if ( ! pFnOnAcceptReceivedData )
		pFnOnAcceptReceivedData = (UFunction*) UObject::GObjObjects()->GetIndex( 135751 );

	UOnlineSubsystemSteamworks_execOnAcceptReceivedData_Parms OnAcceptReceivedData_Parms;
	memcpy ( &OnAcceptReceivedData_Parms.Data, &Data, 0x10 );

	this->ProcessEvent ( pFnOnAcceptReceivedData, &OnAcceptReceivedData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDataSendingUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DataName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DataDescription                ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Data                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            MaxSelectableUsers             ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowDataSendingUI ( unsigned char LocalUserNum, struct FString Message, struct FString DataName, struct FString DataDescription, TArray< unsigned char > Data, int MaxSelectableUsers )
{
	static UFunction* pFnShowDataSendingUI = NULL;

	if ( ! pFnShowDataSendingUI )
		pFnShowDataSendingUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135742 );

	UOnlineSubsystemSteamworks_execShowDataSendingUI_Parms ShowDataSendingUI_Parms;
	ShowDataSendingUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowDataSendingUI_Parms.Message, &Message, 0x10 );
	memcpy ( &ShowDataSendingUI_Parms.DataName, &DataName, 0x10 );
	memcpy ( &ShowDataSendingUI_Parms.DataDescription, &DataDescription, 0x10 );
	memcpy ( &ShowDataSendingUI_Parms.Data, &Data, 0x10 );
	ShowDataSendingUI_Parms.MaxSelectableUsers = MaxSelectableUsers;

	this->ProcessEvent ( pFnShowDataSendingUI, &ShowDataSendingUI_Parms, NULL );

	return ShowDataSendingUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPeoplePickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPeoplePickerCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearPeoplePickerCompleteDelegate = NULL;

	if ( ! pFnClearPeoplePickerCompleteDelegate )
		pFnClearPeoplePickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135739 );

	UOnlineSubsystemSteamworks_execClearPeoplePickerCompleteDelegate_Parms ClearPeoplePickerCompleteDelegate_Parms;
	ClearPeoplePickerCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearPeoplePickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPeoplePickerCompleteDelegate, &ClearPeoplePickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPeoplePickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPeoplePickerCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddPeoplePickerCompleteDelegate = NULL;

	if ( ! pFnAddPeoplePickerCompleteDelegate )
		pFnAddPeoplePickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135736 );

	UOnlineSubsystemSteamworks_execAddPeoplePickerCompleteDelegate_Parms AddPeoplePickerCompleteDelegate_Parms;
	AddPeoplePickerCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddPeoplePickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPeoplePickerCompleteDelegate, &AddPeoplePickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPeoplePickerComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FOnlineFriend > PeoplePicked                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked )
{
	static UFunction* pFnOnPeoplePickerComplete = NULL;

	if ( ! pFnOnPeoplePickerComplete )
		pFnOnPeoplePickerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135732 );

	UOnlineSubsystemSteamworks_execOnPeoplePickerComplete_Parms OnPeoplePickerComplete_Parms;
	OnPeoplePickerComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnPeoplePickerComplete_Parms.PeoplePicked, &PeoplePicked, 0x10 );

	this->ProcessEvent ( pFnOnPeoplePickerComplete, &OnPeoplePickerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPeoplePickerUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriend > People                         ( CPF_Parm | CPF_NeedCtorLink )
// int                            MaxSelectable                  ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowPeoplePickerUI ( unsigned char LocalUserNum, TArray< struct FOnlineFriend > People, int MaxSelectable, struct FString Text )
{
	static UFunction* pFnShowPeoplePickerUI = NULL;

	if ( ! pFnShowPeoplePickerUI )
		pFnShowPeoplePickerUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135725 );

	UOnlineSubsystemSteamworks_execShowPeoplePickerUI_Parms ShowPeoplePickerUI_Parms;
	ShowPeoplePickerUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowPeoplePickerUI_Parms.People, &People, 0x10 );
	ShowPeoplePickerUI_Parms.MaxSelectable = MaxSelectable;
	memcpy ( &ShowPeoplePickerUI_Parms.Text, &Text, 0x10 );

	pFnShowPeoplePickerUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPeoplePickerUI, &ShowPeoplePickerUI_Parms, NULL );

	pFnShowPeoplePickerUI->FunctionFlags |= 0x400;

	return ShowPeoplePickerUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowComposeMessageUICompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearShowComposeMessageUICompleteDelegate ( struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearShowComposeMessageUICompleteDelegate = NULL;

	if ( ! pFnClearShowComposeMessageUICompleteDelegate )
		pFnClearShowComposeMessageUICompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135723 );

	UOnlineSubsystemSteamworks_execClearShowComposeMessageUICompleteDelegate_Parms ClearShowComposeMessageUICompleteDelegate_Parms;
	memcpy ( &ClearShowComposeMessageUICompleteDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnClearShowComposeMessageUICompleteDelegate, &ClearShowComposeMessageUICompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowComposeMessageUICompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddShowComposeMessageUICompleteDelegate ( struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddShowComposeMessageUICompleteDelegate = NULL;

	if ( ! pFnAddShowComposeMessageUICompleteDelegate )
		pFnAddShowComposeMessageUICompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135721 );

	UOnlineSubsystemSteamworks_execAddShowComposeMessageUICompleteDelegate_Parms AddShowComposeMessageUICompleteDelegate_Parms;
	memcpy ( &AddShowComposeMessageUICompleteDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnAddShowComposeMessageUICompleteDelegate, &AddShowComposeMessageUICompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowComposeMessageUIComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnShowComposeMessageUIComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnShowComposeMessageUIComplete = NULL;

	if ( ! pFnOnShowComposeMessageUIComplete )
		pFnOnShowComposeMessageUIComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135719 );

	UOnlineSubsystemSteamworks_execOnShowComposeMessageUIComplete_Parms OnShowComposeMessageUIComplete_Parms;
	OnShowComposeMessageUIComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnShowComposeMessageUIComplete, &OnShowComposeMessageUIComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoteTalkerStatusChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            RemoteNetId                    ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRemoteTalkerStatusChange ( struct FUniqueNetId RemoteNetId, unsigned long bIsTalking )
{
	static UFunction* pFnOnRemoteTalkerStatusChange = NULL;

	if ( ! pFnOnRemoteTalkerStatusChange )
		pFnOnRemoteTalkerStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 135716 );

	UOnlineSubsystemSteamworks_execOnRemoteTalkerStatusChange_Parms OnRemoteTalkerStatusChange_Parms;
	memcpy ( &OnRemoteTalkerStatusChange_Parms.RemoteNetId, &RemoteNetId, 0x8 );
	OnRemoteTalkerStatusChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnRemoteTalkerStatusChange, &OnRemoteTalkerStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdatePlayerMuteSetting
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  PlayerMuteSetting              ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting )
{
	static UFunction* pFnUpdatePlayerMuteSetting = NULL;

	if ( ! pFnUpdatePlayerMuteSetting )
		pFnUpdatePlayerMuteSetting = (UFunction*) UObject::GObjObjects()->GetIndex( 135713 );

	UOnlineSubsystemSteamworks_execUpdatePlayerMuteSetting_Parms UpdatePlayerMuteSetting_Parms;
	UpdatePlayerMuteSetting_Parms.PlayerMuteSetting = PlayerMuteSetting;

	this->ProcessEvent ( pFnUpdatePlayerMuteSetting, &UpdatePlayerMuteSetting_Parms, NULL );

	return UpdatePlayerMuteSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTalkerMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ConsoleId                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsTalkerMuted ( struct FUniqueNetId ConsoleId )
{
	static UFunction* pFnIsTalkerMuted = NULL;

	if ( ! pFnIsTalkerMuted )
		pFnIsTalkerMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 135710 );

	UOnlineSubsystemSteamworks_execIsTalkerMuted_Parms IsTalkerMuted_Parms;
	memcpy ( &IsTalkerMuted_Parms.ConsoleId, &ConsoleId, 0x8 );

	this->ProcessEvent ( pFnIsTalkerMuted, &IsTalkerMuted_Parms, NULL );

	return IsTalkerMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAccountInfoDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGetUserAccountInfoDelegate = NULL;

	if ( ! pFnClearGetUserAccountInfoDelegate )
		pFnClearGetUserAccountInfoDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135708 );

	UOnlineSubsystemSteamworks_execClearGetUserAccountInfoDelegate_Parms ClearGetUserAccountInfoDelegate_Parms;
	memcpy ( &ClearGetUserAccountInfoDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGetUserAccountInfoDelegate, &ClearGetUserAccountInfoDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAccountInfoDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGetUserAccountInfoDelegate = NULL;

	if ( ! pFnAddGetUserAccountInfoDelegate )
		pFnAddGetUserAccountInfoDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135706 );

	UOnlineSubsystemSteamworks_execAddGetUserAccountInfoDelegate_Parms AddGetUserAccountInfoDelegate_Parms;
	memcpy ( &AddGetUserAccountInfoDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGetUserAccountInfoDelegate, &AddGetUserAccountInfoDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAccountInfo
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::GetUserAccountInfo ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetUserAccountInfo = NULL;

	if ( ! pFnGetUserAccountInfo )
		pFnGetUserAccountInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 135703 );

	UOnlineSubsystemSteamworks_execGetUserAccountInfo_Parms GetUserAccountInfo_Parms;
	GetUserAccountInfo_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUserAccountInfo, &GetUserAccountInfo_Parms, NULL );

	return GetUserAccountInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserAccountInfoRetrieved
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// struct FUserAccountInfo        AccountInfo                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnUserAccountInfoRetrieved ( unsigned long bSuccessful, struct FUserAccountInfo AccountInfo )
{
	static UFunction* pFnOnUserAccountInfoRetrieved = NULL;

	if ( ! pFnOnUserAccountInfoRetrieved )
		pFnOnUserAccountInfoRetrieved = (UFunction*) UObject::GObjObjects()->GetIndex( 135700 );

	UOnlineSubsystemSteamworks_execOnUserAccountInfoRetrieved_Parms OnUserAccountInfoRetrieved_Parms;
	OnUserAccountInfoRetrieved_Parms.bSuccessful = bSuccessful;
	memcpy ( &OnUserAccountInfoRetrieved_Parms.AccountInfo, &AccountInfo, 0x50 );

	this->ProcessEvent ( pFnOnUserAccountInfoRetrieved, &OnUserAccountInfoRetrieved_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveAccountPickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::RemoveAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnRemoveAccountPickerCompleteDelegate = NULL;

	if ( ! pFnRemoveAccountPickerCompleteDelegate )
		pFnRemoveAccountPickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135698 );

	UOnlineSubsystemSteamworks_execRemoveAccountPickerCompleteDelegate_Parms RemoveAccountPickerCompleteDelegate_Parms;
	memcpy ( &RemoveAccountPickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnRemoveAccountPickerCompleteDelegate, &RemoveAccountPickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAccountPickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddAccountPickerCompleteDelegate = NULL;

	if ( ! pFnAddAccountPickerCompleteDelegate )
		pFnAddAccountPickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135696 );

	UOnlineSubsystemSteamworks_execAddAccountPickerCompleteDelegate_Parms AddAccountPickerCompleteDelegate_Parms;
	memcpy ( &AddAccountPickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAccountPickerCompleteDelegate, &AddAccountPickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAccountPickerComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bForceLogin                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnAccountPickerComplete ( unsigned long bForceLogin )
{
	static UFunction* pFnOnAccountPickerComplete = NULL;

	if ( ! pFnOnAccountPickerComplete )
		pFnOnAccountPickerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135694 );

	UOnlineSubsystemSteamworks_execOnAccountPickerComplete_Parms OnAccountPickerComplete_Parms;
	OnAccountPickerComplete_Parms.bForceLogin = bForceLogin;

	this->ProcessEvent ( pFnOnAccountPickerComplete, &OnAccountPickerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowGamerCardCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         GamerCardDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearShowGamerCardCompleteDelegate ( struct FScriptDelegate GamerCardDelegate )
{
	static UFunction* pFnClearShowGamerCardCompleteDelegate = NULL;

	if ( ! pFnClearShowGamerCardCompleteDelegate )
		pFnClearShowGamerCardCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135692 );

	UOnlineSubsystemSteamworks_execClearShowGamerCardCompleteDelegate_Parms ClearShowGamerCardCompleteDelegate_Parms;
	memcpy ( &ClearShowGamerCardCompleteDelegate_Parms.GamerCardDelegate, &GamerCardDelegate, 0x10 );

	this->ProcessEvent ( pFnClearShowGamerCardCompleteDelegate, &ClearShowGamerCardCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowGamerCardCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         GamerCardDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddShowGamerCardCompleteDelegate ( struct FScriptDelegate GamerCardDelegate )
{
	static UFunction* pFnAddShowGamerCardCompleteDelegate = NULL;

	if ( ! pFnAddShowGamerCardCompleteDelegate )
		pFnAddShowGamerCardCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135690 );

	UOnlineSubsystemSteamworks_execAddShowGamerCardCompleteDelegate_Parms AddShowGamerCardCompleteDelegate_Parms;
	memcpy ( &AddShowGamerCardCompleteDelegate_Parms.GamerCardDelegate, &GamerCardDelegate, 0x10 );

	this->ProcessEvent ( pFnAddShowGamerCardCompleteDelegate, &AddShowGamerCardCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowGamerCardComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnShowGamerCardComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnShowGamerCardComplete = NULL;

	if ( ! pFnOnShowGamerCardComplete )
		pFnOnShowGamerCardComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135688 );

	UOnlineSubsystemSteamworks_execOnShowGamerCardComplete_Parms OnShowGamerCardComplete_Parms;
	OnShowGamerCardComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnShowGamerCardComplete, &OnShowGamerCardComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVideo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowVideo ( struct FString URL )
{
	static UFunction* pFnShowVideo = NULL;

	if ( ! pFnShowVideo )
		pFnShowVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 135685 );

	UOnlineSubsystemSteamworks_execShowVideo_Parms ShowVideo_Parms;
	memcpy ( &ShowVideo_Parms.URL, &URL, 0x10 );

	pFnShowVideo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowVideo, &ShowVideo_Parms, NULL );

	pFnShowVideo->FunctionFlags |= 0x400;

	return ShowVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnClearSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnClearSystemUserContrllerPairingChangedDelegate )
		pFnClearSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135683 );

	UOnlineSubsystemSteamworks_execClearSystemUserContrllerPairingChangedDelegate_Parms ClearSystemUserContrllerPairingChangedDelegate_Parms;
	memcpy ( &ClearSystemUserContrllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearSystemUserContrllerPairingChangedDelegate, &ClearSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnAddSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnAddSystemUserContrllerPairingChangedDelegate )
		pFnAddSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135681 );

	UOnlineSubsystemSteamworks_execAddSystemUserContrllerPairingChangedDelegate_Parms AddSystemUserContrllerPairingChangedDelegate_Parms;
	memcpy ( &AddSystemUserContrllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddSystemUserContrllerPairingChangedDelegate, &AddSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x00120000] 
// Parameters infos:
// int                            NewLocalUserNum                ( CPF_Parm )
// int                            PreviousLocalUserNum           ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum )
{
	static UFunction* pFnOnSystemUserControllerPairingChanged = NULL;

	if ( ! pFnOnSystemUserControllerPairingChanged )
		pFnOnSystemUserControllerPairingChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 135678 );

	UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Parms OnSystemUserControllerPairingChanged_Parms;
	OnSystemUserControllerPairingChanged_Parms.NewLocalUserNum = NewLocalUserNum;
	OnSystemUserControllerPairingChanged_Parms.PreviousLocalUserNum = PreviousLocalUserNum;

	this->ProcessEvent ( pFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFilterTextDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FilterTextDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFilterTextDelegate ( struct FScriptDelegate FilterTextDelegate )
{
	static UFunction* pFnClearFilterTextDelegate = NULL;

	if ( ! pFnClearFilterTextDelegate )
		pFnClearFilterTextDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135676 );

	UOnlineSubsystemSteamworks_execClearFilterTextDelegate_Parms ClearFilterTextDelegate_Parms;
	memcpy ( &ClearFilterTextDelegate_Parms.FilterTextDelegate, &FilterTextDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFilterTextDelegate, &ClearFilterTextDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFilterTextDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FilterTextDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFilterTextDelegate ( struct FScriptDelegate FilterTextDelegate )
{
	static UFunction* pFnAddFilterTextDelegate = NULL;

	if ( ! pFnAddFilterTextDelegate )
		pFnAddFilterTextDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135673 );

	UOnlineSubsystemSteamworks_execAddFilterTextDelegate_Parms AddFilterTextDelegate_Parms;
	memcpy ( &AddFilterTextDelegate_Parms.FilterTextDelegate, &FilterTextDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFilterTextDelegate, &AddFilterTextDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFilterText
// [0x00120000] 
// Parameters infos:
// struct FString                 OriginalText                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FilteredText                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCensorCompletely              ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFilterText ( struct FString OriginalText, struct FString FilteredText, unsigned long bCensorCompletely )
{
	static UFunction* pFnOnFilterText = NULL;

	if ( ! pFnOnFilterText )
		pFnOnFilterText = (UFunction*) UObject::GObjObjects()->GetIndex( 135669 );

	UOnlineSubsystemSteamworks_execOnFilterText_Parms OnFilterText_Parms;
	memcpy ( &OnFilterText_Parms.OriginalText, &OriginalText, 0x10 );
	memcpy ( &OnFilterText_Parms.FilteredText, &FilteredText, 0x10 );
	OnFilterText_Parms.bCensorCompletely = bCensorCompletely;

	this->ProcessEvent ( pFnOnFilterText, &OnFilterText_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckFilterText
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CheckFilterText ( struct FString Text )
{
	static UFunction* pFnCheckFilterText = NULL;

	if ( ! pFnCheckFilterText )
		pFnCheckFilterText = (UFunction*) UObject::GObjObjects()->GetIndex( 135666 );

	UOnlineSubsystemSteamworks_execCheckFilterText_Parms CheckFilterText_Parms;
	memcpy ( &CheckFilterText_Parms.Text, &Text, 0x10 );

	pFnCheckFilterText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckFilterText, &CheckFilterText_Parms, NULL );

	pFnCheckFilterText->FunctionFlags |= 0x400;

	return CheckFilterText_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate = NULL;

	if ( ! pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate )
		pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135664 );

	UOnlineSubsystemSteamworks_execClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms;
	memcpy ( &ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate, &ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate = NULL;

	if ( ! pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate )
		pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135661 );

	UOnlineSubsystemSteamworks_execAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms;
	memcpy ( &AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate, &AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResultByUniqueNetId > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsersByUniqueNetIds = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsersByUniqueNetIds )
		pFnOnPrivilegeCheckedForUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 135656 );

	UOnlineSubsystemSteamworks_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms OnPrivilegeCheckedForUsersByUniqueNetIds_Parms;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Results, &Results, 0x10 );

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsersByUniqueNetIds, &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeCheckedForUsersDelegate = NULL;

	if ( ! pFnClearPrivilegeCheckedForUsersDelegate )
		pFnClearPrivilegeCheckedForUsersDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135654 );

	UOnlineSubsystemSteamworks_execClearPrivilegeCheckedForUsersDelegate_Parms ClearPrivilegeCheckedForUsersDelegate_Parms;
	memcpy ( &ClearPrivilegeCheckedForUsersDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPrivilegeCheckedForUsersDelegate, &ClearPrivilegeCheckedForUsersDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeCheckedForUsersDelegate = NULL;

	if ( ! pFnAddPrivilegeCheckedForUsersDelegate )
		pFnAddPrivilegeCheckedForUsersDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135651 );

	UOnlineSubsystemSteamworks_execAddPrivilegeCheckedForUsersDelegate_Parms AddPrivilegeCheckedForUsersDelegate_Parms;
	memcpy ( &AddPrivilegeCheckedForUsersDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPrivilegeCheckedForUsersDelegate, &AddPrivilegeCheckedForUsersDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsers
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResult > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnPrivilegeCheckedForUsers ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsers = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsers )
		pFnOnPrivilegeCheckedForUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 135646 );

	UOnlineSubsystemSteamworks_execOnPrivilegeCheckedForUsers_Parms OnPrivilegeCheckedForUsers_Parms;
	OnPrivilegeCheckedForUsers_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsers_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsers_Parms.Results, &Results, 0x10 );

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsers, &OnPrivilegeCheckedForUsers_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineWithUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CanPlayOnlineWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanPlayOnlineWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanPlayOnlineWithUsersByUniqueNetIds )
		pFnCanPlayOnlineWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 135641 );

	UOnlineSubsystemSteamworks_execCanPlayOnlineWithUsersByUniqueNetIds_Parms CanPlayOnlineWithUsersByUniqueNetIds_Parms;
	CanPlayOnlineWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanPlayOnlineWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	pFnCanPlayOnlineWithUsersByUniqueNetIds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnlineWithUsersByUniqueNetIds, &CanPlayOnlineWithUsersByUniqueNetIds_Parms, NULL );

	pFnCanPlayOnlineWithUsersByUniqueNetIds->FunctionFlags |= 0x400;

	return CanPlayOnlineWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineWithUsers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CanPlayOnlineWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanPlayOnlineWithUsers = NULL;

	if ( ! pFnCanPlayOnlineWithUsers )
		pFnCanPlayOnlineWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 135636 );

	UOnlineSubsystemSteamworks_execCanPlayOnlineWithUsers_Parms CanPlayOnlineWithUsers_Parms;
	CanPlayOnlineWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanPlayOnlineWithUsers_Parms.Users, &Users, 0x10 );

	pFnCanPlayOnlineWithUsers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnlineWithUsers, &CanPlayOnlineWithUsers_Parms, NULL );

	pFnCanPlayOnlineWithUsers->FunctionFlags |= 0x400;

	return CanPlayOnlineWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CanCommunicateTextWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanCommunicateTextWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanCommunicateTextWithUsersByUniqueNetIds )
		pFnCanCommunicateTextWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 135631 );

	UOnlineSubsystemSteamworks_execCanCommunicateTextWithUsersByUniqueNetIds_Parms CanCommunicateTextWithUsersByUniqueNetIds_Parms;
	CanCommunicateTextWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateTextWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	pFnCanCommunicateTextWithUsersByUniqueNetIds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicateTextWithUsersByUniqueNetIds, &CanCommunicateTextWithUsersByUniqueNetIds_Parms, NULL );

	pFnCanCommunicateTextWithUsersByUniqueNetIds->FunctionFlags |= 0x400;

	return CanCommunicateTextWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CanCommunicateTextWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanCommunicateTextWithUsers = NULL;

	if ( ! pFnCanCommunicateTextWithUsers )
		pFnCanCommunicateTextWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 135626 );

	UOnlineSubsystemSteamworks_execCanCommunicateTextWithUsers_Parms CanCommunicateTextWithUsers_Parms;
	CanCommunicateTextWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateTextWithUsers_Parms.Users, &Users, 0x10 );

	pFnCanCommunicateTextWithUsers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicateTextWithUsers, &CanCommunicateTextWithUsers_Parms, NULL );

	pFnCanCommunicateTextWithUsers->FunctionFlags |= 0x400;

	return CanCommunicateTextWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsersByUniqueNetIds
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CanCommunicateVoiceWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanCommunicateVoiceWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanCommunicateVoiceWithUsersByUniqueNetIds )
		pFnCanCommunicateVoiceWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 135621 );

	UOnlineSubsystemSteamworks_execCanCommunicateVoiceWithUsersByUniqueNetIds_Parms CanCommunicateVoiceWithUsersByUniqueNetIds_Parms;
	CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoiceWithUsersByUniqueNetIds, &CanCommunicateVoiceWithUsersByUniqueNetIds_Parms, NULL );

	return CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsers
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CanCommunicateVoiceWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanCommunicateVoiceWithUsers = NULL;

	if ( ! pFnCanCommunicateVoiceWithUsers )
		pFnCanCommunicateVoiceWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 135616 );

	UOnlineSubsystemSteamworks_execCanCommunicateVoiceWithUsers_Parms CanCommunicateVoiceWithUsers_Parms;
	CanCommunicateVoiceWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateVoiceWithUsers_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoiceWithUsers, &CanCommunicateVoiceWithUsers_Parms, NULL );

	return CanCommunicateVoiceWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckForGameInviteOnLaunch
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::CheckForGameInviteOnLaunch ( )
{
	static UFunction* pFnCheckForGameInviteOnLaunch = NULL;

	if ( ! pFnCheckForGameInviteOnLaunch )
		pFnCheckForGameInviteOnLaunch = (UFunction*) UObject::GObjObjects()->GetIndex( 135615 );

	UOnlineSubsystemSteamworks_execCheckForGameInviteOnLaunch_Parms CheckForGameInviteOnLaunch_Parms;

	pFnCheckForGameInviteOnLaunch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckForGameInviteOnLaunch, &CheckForGameInviteOnLaunch_Parms, NULL );

	pFnCheckForGameInviteOnLaunch->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerIdFromNetId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            ControllerId                   ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId )
{
	static UFunction* pFnGetControllerIdFromNetId = NULL;

	if ( ! pFnGetControllerIdFromNetId )
		pFnGetControllerIdFromNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 135611 );

	UOnlineSubsystemSteamworks_execGetControllerIdFromNetId_Parms GetControllerIdFromNetId_Parms;
	memcpy ( &GetControllerIdFromNetId_Parms.PlayerID, &PlayerID, 0x8 );

	pFnGetControllerIdFromNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetControllerIdFromNetId, &GetControllerIdFromNetId_Parms, NULL );

	pFnGetControllerIdFromNetId->FunctionFlags |= 0x400;

	if ( ControllerId )
		*ControllerId = GetControllerIdFromNetId_Parms.ControllerId;

	return GetControllerIdFromNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CacheLoggedInGamepad
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CacheLoggedInGamepad ( )
{
	static UFunction* pFnCacheLoggedInGamepad = NULL;

	if ( ! pFnCacheLoggedInGamepad )
		pFnCacheLoggedInGamepad = (UFunction*) UObject::GObjObjects()->GetIndex( 135610 );

	UOnlineSubsystemSteamworks_execCacheLoggedInGamepad_Parms CacheLoggedInGamepad_Parms;

	this->ProcessEvent ( pFnCacheLoggedInGamepad, &CacheLoggedInGamepad_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CurrentUserDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate )
{
	static UFunction* pFnClearCurrentUserChangedDelegate = NULL;

	if ( ! pFnClearCurrentUserChangedDelegate )
		pFnClearCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135608 );

	UOnlineSubsystemSteamworks_execClearCurrentUserChangedDelegate_Parms ClearCurrentUserChangedDelegate_Parms;
	memcpy ( &ClearCurrentUserChangedDelegate_Parms.CurrentUserDelegate, &CurrentUserDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCurrentUserChangedDelegate, &ClearCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CurrentUserDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate )
{
	static UFunction* pFnAddCurrentUserChangedDelegate = NULL;

	if ( ! pFnAddCurrentUserChangedDelegate )
		pFnAddCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135606 );

	UOnlineSubsystemSteamworks_execAddCurrentUserChangedDelegate_Parms AddCurrentUserChangedDelegate_Parms;
	memcpy ( &AddCurrentUserChangedDelegate_Parms.CurrentUserDelegate, &CurrentUserDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCurrentUserChangedDelegate, &AddCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCurrentUserChanged
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 CurrentUser                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 LoggedInUser                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser )
{
	static UFunction* pFnOnCurrentUserChanged = NULL;

	if ( ! pFnOnCurrentUserChanged )
		pFnOnCurrentUserChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 135602 );

	UOnlineSubsystemSteamworks_execOnCurrentUserChanged_Parms OnCurrentUserChanged_Parms;
	OnCurrentUserChanged_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnCurrentUserChanged_Parms.CurrentUser, &CurrentUser, 0x10 );
	memcpy ( &OnCurrentUserChanged_Parms.LoggedInUser, &LoggedInUser, 0x10 );

	this->ProcessEvent ( pFnOnCurrentUserChanged, &OnCurrentUserChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PairUserAndControllerAtIndex
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerIndex                    ( CPF_Parm )
// unsigned char                  ControllerIndex                ( CPF_Parm )
// int                            PairIndex                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::PairUserAndControllerAtIndex ( unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex )
{
	static UFunction* pFnPairUserAndControllerAtIndex = NULL;

	if ( ! pFnPairUserAndControllerAtIndex )
		pFnPairUserAndControllerAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 135597 );

	UOnlineSubsystemSteamworks_execPairUserAndControllerAtIndex_Parms PairUserAndControllerAtIndex_Parms;
	PairUserAndControllerAtIndex_Parms.PlayerIndex = PlayerIndex;
	PairUserAndControllerAtIndex_Parms.ControllerIndex = ControllerIndex;
	PairUserAndControllerAtIndex_Parms.PairIndex = PairIndex;

	this->ProcessEvent ( pFnPairUserAndControllerAtIndex, &PairUserAndControllerAtIndex_Parms, NULL );

	return PairUserAndControllerAtIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateText = NULL;

	if ( ! pFnCanCommunicateText )
		pFnCanCommunicateText = (UFunction*) UObject::GObjObjects()->GetIndex( 135591 );

	UOnlineSubsystemSteamworks_execCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateText_Parms.Reason, &Reason, 0x10 );

	pFnCanCommunicateText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicateText, &CanCommunicateText_Parms, NULL );

	pFnCanCommunicateText->FunctionFlags |= 0x400;

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVideo = NULL;

	if ( ! pFnCanCommunicateVideo )
		pFnCanCommunicateVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 135585 );

	UOnlineSubsystemSteamworks_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;
	CanCommunicateVideo_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVideo_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVideo_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVideo_Parms.PrivilegeLevelHint;

	return CanCommunicateVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVoice = NULL;

	if ( ! pFnCanCommunicateVoice )
		pFnCanCommunicateVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 135579 );

	UOnlineSubsystemSteamworks_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVoice_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVoice_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareUserCreatedContent = NULL;

	if ( ! pFnCanShareUserCreatedContent )
		pFnCanShareUserCreatedContent = (UFunction*) UObject::GObjObjects()->GetIndex( 135573 );

	UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;
	CanShareUserCreatedContent_Parms.LocalUserNum = LocalUserNum;
	CanShareUserCreatedContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareUserCreatedContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareUserCreatedContent_Parms.PrivilegeLevelHint;

	return CanShareUserCreatedContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanRecordDVRClips = NULL;

	if ( ! pFnCanRecordDVRClips )
		pFnCanRecordDVRClips = (UFunction*) UObject::GObjObjects()->GetIndex( 135567 );

	UOnlineSubsystemSteamworks_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;
	CanRecordDVRClips_Parms.LocalUserNum = LocalUserNum;
	CanRecordDVRClips_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanRecordDVRClips_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanRecordDVRClips_Parms.PrivilegeLevelHint;

	return CanRecordDVRClips_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUseCloudStorage = NULL;

	if ( ! pFnCanUseCloudStorage )
		pFnCanUseCloudStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 135561 );

	UOnlineSubsystemSteamworks_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;
	CanUseCloudStorage_Parms.LocalUserNum = LocalUserNum;
	CanUseCloudStorage_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUseCloudStorage_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUseCloudStorage_Parms.PrivilegeLevelHint;

	return CanUseCloudStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumContent = NULL;

	if ( ! pFnCanAccessPremiumContent )
		pFnCanAccessPremiumContent = (UFunction*) UObject::GObjObjects()->GetIndex( 135555 );

	UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;
	CanAccessPremiumContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumVideoContent = NULL;

	if ( ! pFnCanAccessPremiumVideoContent )
		pFnCanAccessPremiumVideoContent = (UFunction*) UObject::GObjObjects()->GetIndex( 135549 );

	UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;
	CanAccessPremiumVideoContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumVideoContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumVideoContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumVideoContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumVideoContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanBrowseInternet = NULL;

	if ( ! pFnCanBrowseInternet )
		pFnCanBrowseInternet = (UFunction*) UObject::GObjObjects()->GetIndex( 135543 );

	UOnlineSubsystemSteamworks_execCanBrowseInternet_Parms CanBrowseInternet_Parms;
	CanBrowseInternet_Parms.LocalUserNum = LocalUserNum;
	CanBrowseInternet_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanBrowseInternet_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanBrowseInternet, &CanBrowseInternet_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanBrowseInternet_Parms.PrivilegeLevelHint;

	return CanBrowseInternet_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareWithSocialNetwork = NULL;

	if ( ! pFnCanShareWithSocialNetwork )
		pFnCanShareWithSocialNetwork = (UFunction*) UObject::GObjObjects()->GetIndex( 135537 );

	UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;
	CanShareWithSocialNetwork_Parms.LocalUserNum = LocalUserNum;
	CanShareWithSocialNetwork_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareWithSocialNetwork_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareWithSocialNetwork_Parms.PrivilegeLevelHint;

	return CanShareWithSocialNetwork_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareKinectContent = NULL;

	if ( ! pFnCanShareKinectContent )
		pFnCanShareKinectContent = (UFunction*) UObject::GObjObjects()->GetIndex( 135531 );

	UOnlineSubsystemSteamworks_execCanShareKinectContent_Parms CanShareKinectContent_Parms;
	CanShareKinectContent_Parms.LocalUserNum = LocalUserNum;
	CanShareKinectContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareKinectContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShareKinectContent, &CanShareKinectContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareKinectContent_Parms.PrivilegeLevelHint;

	return CanShareKinectContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUploadFitnessData = NULL;

	if ( ! pFnCanUploadFitnessData )
		pFnCanUploadFitnessData = (UFunction*) UObject::GObjObjects()->GetIndex( 135525 );

	UOnlineSubsystemSteamworks_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;
	CanUploadFitnessData_Parms.LocalUserNum = LocalUserNum;
	CanUploadFitnessData_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUploadFitnessData_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUploadFitnessData_Parms.PrivilegeLevelHint;

	return CanUploadFitnessData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnsubscribeToStatisticEvent
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )

void UOnlineSubsystemSteamworks::UnsubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName )
{
	static UFunction* pFnUnsubscribeToStatisticEvent = NULL;

	if ( ! pFnUnsubscribeToStatisticEvent )
		pFnUnsubscribeToStatisticEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 135521 );

	UOnlineSubsystemSteamworks_execUnsubscribeToStatisticEvent_Parms UnsubscribeToStatisticEvent_Parms;
	UnsubscribeToStatisticEvent_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnsubscribeToStatisticEvent_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &UnsubscribeToStatisticEvent_Parms.StatName, &StatName, 0x8 );

	this->ProcessEvent ( pFnUnsubscribeToStatisticEvent, &UnsubscribeToStatisticEvent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribeToStatisticEvent
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )
// struct FScriptDelegate         EventDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::SubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName, struct FScriptDelegate EventDelegate )
{
	static UFunction* pFnSubscribeToStatisticEvent = NULL;

	if ( ! pFnSubscribeToStatisticEvent )
		pFnSubscribeToStatisticEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 135516 );

	UOnlineSubsystemSteamworks_execSubscribeToStatisticEvent_Parms SubscribeToStatisticEvent_Parms;
	SubscribeToStatisticEvent_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SubscribeToStatisticEvent_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &SubscribeToStatisticEvent_Parms.StatName, &StatName, 0x8 );
	memcpy ( &SubscribeToStatisticEvent_Parms.EventDelegate, &EventDelegate, 0x10 );

	this->ProcessEvent ( pFnSubscribeToStatisticEvent, &SubscribeToStatisticEvent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStatisticChanged
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )
// struct FString                 NewStatValue                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnStatisticChanged ( struct FUniqueNetId PlayerNetId, struct FName StatName, struct FString NewStatValue )
{
	static UFunction* pFnOnStatisticChanged = NULL;

	if ( ! pFnOnStatisticChanged )
		pFnOnStatisticChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 135512 );

	UOnlineSubsystemSteamworks_execOnStatisticChanged_Parms OnStatisticChanged_Parms;
	memcpy ( &OnStatisticChanged_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &OnStatisticChanged_Parms.StatName, &StatName, 0x8 );
	memcpy ( &OnStatisticChanged_Parms.NewStatValue, &NewStatValue, 0x10 );

	this->ProcessEvent ( pFnOnStatisticChanged, &OnStatisticChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::HideKeyboardUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnHideKeyboardUI = NULL;

	if ( ! pFnHideKeyboardUI )
		pFnHideKeyboardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135509 );

	UOnlineSubsystemSteamworks_execHideKeyboardUI_Parms HideKeyboardUI_Parms;
	HideKeyboardUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnHideKeyboardUI, &HideKeyboardUI_Parms, NULL );

	return HideKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAchievements
// [0x00024000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::ClearAchievements ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearAchievements = NULL;

	if ( ! pFnClearAchievements )
		pFnClearAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 135506 );

	UOnlineSubsystemSteamworks_execClearAchievements_Parms ClearAchievements_Parms;
	ClearAchievements_Parms.LocalUserNum = LocalUserNum;
	ClearAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearAchievements, &ClearAchievements_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeLevelCheckedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnClearPrivilegeLevelCheckedDelegate )
		pFnClearPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135503 );

	UOnlineSubsystemSteamworks_execClearPrivilegeLevelCheckedDelegate_Parms ClearPrivilegeLevelCheckedDelegate_Parms;
	memcpy ( &ClearPrivilegeLevelCheckedDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPrivilegeLevelCheckedDelegate, &ClearPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeLevelCheckedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnAddPrivilegeLevelCheckedDelegate )
		pFnAddPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135500 );

	UOnlineSubsystemSteamworks_execAddPrivilegeLevelCheckedDelegate_Parms AddPrivilegeLevelCheckedDelegate_Parms;
	memcpy ( &AddPrivilegeLevelCheckedDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPrivilegeLevelCheckedDelegate, &AddPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeLevelChecked
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->GetIndex( 135495 );

	UOnlineSubsystemSteamworks_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;
	OnPrivilegeLevelChecked_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelChecked_Parms.Privilege = Privilege;
	OnPrivilegeLevelChecked_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelChecked_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearURLTokenRetrievedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         tsrDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate )
{
	static UFunction* pFnClearURLTokenRetrievedDelegate = NULL;

	if ( ! pFnClearURLTokenRetrievedDelegate )
		pFnClearURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135491 );

	UOnlineSubsystemSteamworks_execClearURLTokenRetrievedDelegate_Parms ClearURLTokenRetrievedDelegate_Parms;
	ClearURLTokenRetrievedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearURLTokenRetrievedDelegate_Parms.tsrDelegate, &tsrDelegate, 0x10 );

	this->ProcessEvent ( pFnClearURLTokenRetrievedDelegate, &ClearURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddURLTokenRetrievedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         tsrDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate )
{
	static UFunction* pFnAddURLTokenRetrievedDelegate = NULL;

	if ( ! pFnAddURLTokenRetrievedDelegate )
		pFnAddURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135487 );

	UOnlineSubsystemSteamworks_execAddURLTokenRetrievedDelegate_Parms AddURLTokenRetrievedDelegate_Parms;
	AddURLTokenRetrievedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddURLTokenRetrievedDelegate_Parms.tsrDelegate, &tsrDelegate, 0x10 );

	this->ProcessEvent ( pFnAddURLTokenRetrievedDelegate, &AddURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTokenAndSignatureRetrieved
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 AuthToken                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Signature                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnTokenAndSignatureRetrieved ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature )
{
	static UFunction* pFnOnTokenAndSignatureRetrieved = NULL;

	if ( ! pFnOnTokenAndSignatureRetrieved )
		pFnOnTokenAndSignatureRetrieved = (UFunction*) UObject::GObjObjects()->GetIndex( 135480 );

	UOnlineSubsystemSteamworks_execOnTokenAndSignatureRetrieved_Parms OnTokenAndSignatureRetrieved_Parms;
	OnTokenAndSignatureRetrieved_Parms.bSuccess = bSuccess;
	OnTokenAndSignatureRetrieved_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.URL, &URL, 0x10 );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.Token, &Token, 0x10 );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.AuthToken, &AuthToken, 0x10 );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.Signature, &Signature, 0x10 );

	this->ProcessEvent ( pFnOnTokenAndSignatureRetrieved, &OnTokenAndSignatureRetrieved_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTokenAndSignatureForURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetTokenAndSignatureForURL ( unsigned char LocalUserNum, struct FString URL )
{
	static UFunction* pFnGetTokenAndSignatureForURL = NULL;

	if ( ! pFnGetTokenAndSignatureForURL )
		pFnGetTokenAndSignatureForURL = (UFunction*) UObject::GObjObjects()->GetIndex( 135476 );

	UOnlineSubsystemSteamworks_execGetTokenAndSignatureForURL_Parms GetTokenAndSignatureForURL_Parms;
	GetTokenAndSignatureForURL_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &GetTokenAndSignatureForURL_Parms.URL, &URL, 0x10 );

	pFnGetTokenAndSignatureForURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTokenAndSignatureForURL, &GetTokenAndSignatureForURL_Parms, NULL );

	pFnGetTokenAndSignatureForURL->FunctionFlags |= 0x400;

	return GetTokenAndSignatureForURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowComposeMessageUI
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  People                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowComposeMessageUI ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > People, struct FString Text )
{
	static UFunction* pFnShowComposeMessageUI = NULL;

	if ( ! pFnShowComposeMessageUI )
		pFnShowComposeMessageUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135470 );

	UOnlineSubsystemSteamworks_execShowComposeMessageUI_Parms ShowComposeMessageUI_Parms;
	ShowComposeMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowComposeMessageUI_Parms.People, &People, 0x10 );
	memcpy ( &ShowComposeMessageUI_Parms.Text, &Text, 0x10 );

	this->ProcessEvent ( pFnShowComposeMessageUI, &ShowComposeMessageUI_Parms, NULL );

	return ShowComposeMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowGamerCardUIByUsername ( unsigned char LocalUserNum, struct FString UserName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowGamerCardUIByUsername = NULL;

	if ( ! pFnShowGamerCardUIByUsername )
		pFnShowGamerCardUIByUsername = (UFunction*) UObject::GObjObjects()->GetIndex( 135465 );

	UOnlineSubsystemSteamworks_execShowGamerCardUIByUsername_Parms ShowGamerCardUIByUsername_Parms;
	ShowGamerCardUIByUsername_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowGamerCardUIByUsername_Parms.UserName, &UserName, 0x10 );
	memcpy ( &ShowGamerCardUIByUsername_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnShowGamerCardUIByUsername, &ShowGamerCardUIByUsername_Parms, NULL );

	return ShowGamerCardUIByUsername_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAllDelegates ( )
{
	static UFunction* pFnClearAllDelegates = NULL;

	if ( ! pFnClearAllDelegates )
		pFnClearAllDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 135464 );

	UOnlineSubsystemSteamworks_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent ( pFnClearAllDelegates, &ClearAllDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate )
{
	static UFunction* pFnClearWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteSharedFileCompleteDelegate )
		pFnClearWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135461 );

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Parms ClearWriteSharedFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, &WriteSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate )
{
	static UFunction* pFnAddWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteSharedFileCompleteDelegate )
		pFnAddWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135458 );

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Parms AddWriteSharedFileCompleteDelegate_Parms;
	memcpy ( &AddWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, &WriteSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Contents                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteSharedFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* Contents )
{
	static UFunction* pFnWriteSharedFile = NULL;

	if ( ! pFnWriteSharedFile )
		pFnWriteSharedFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135452 );

	UOnlineSubsystemSteamworks_execWriteSharedFile_Parms WriteSharedFile_Parms;
	memcpy ( &WriteSharedFile_Parms.UserId, &UserId, 0x10 );
	memcpy ( &WriteSharedFile_Parms.Filename, &Filename, 0x10 );

	pFnWriteSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteSharedFile, &WriteSharedFile_Parms, NULL );

	pFnWriteSharedFile->FunctionFlags |= 0x400;

	if ( Contents )
		memcpy ( Contents, &WriteSharedFile_Parms.Contents, 0x10 );

	return WriteSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle )
{
	static UFunction* pFnOnWriteSharedFileComplete = NULL;

	if ( ! pFnOnWriteSharedFileComplete )
		pFnOnWriteSharedFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135447 );

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Parms OnWriteSharedFileComplete_Parms;
	OnWriteSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteSharedFileComplete_Parms.UserId, &UserId, 0x10 );
	memcpy ( &OnWriteSharedFileComplete_Parms.Filename, &Filename, 0x10 );
	memcpy ( &OnWriteSharedFileComplete_Parms.SharedHandle, &SharedHandle, 0x10 );

	this->ProcessEvent ( pFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate )
{
	static UFunction* pFnClearReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearReadSharedFileCompleteDelegate )
		pFnClearReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135444 );

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Parms ClearReadSharedFileCompleteDelegate_Parms;
	memcpy ( &ClearReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, &ReadSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate )
{
	static UFunction* pFnAddReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddReadSharedFileCompleteDelegate )
		pFnAddReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135441 );

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Parms AddReadSharedFileCompleteDelegate_Parms;
	memcpy ( &AddReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, &ReadSharedFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadSharedFile ( struct FString SharedHandle )
{
	static UFunction* pFnReadSharedFile = NULL;

	if ( ! pFnReadSharedFile )
		pFnReadSharedFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135438 );

	UOnlineSubsystemSteamworks_execReadSharedFile_Parms ReadSharedFile_Parms;
	memcpy ( &ReadSharedFile_Parms.SharedHandle, &SharedHandle, 0x10 );

	pFnReadSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadSharedFile, &ReadSharedFile_Parms, NULL );

	pFnReadSharedFile->FunctionFlags |= 0x400;

	return ReadSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete ( unsigned long bWasSuccessful, struct FString SharedHandle )
{
	static UFunction* pFnOnReadSharedFileComplete = NULL;

	if ( ! pFnOnReadSharedFileComplete )
		pFnOnReadSharedFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135435 );

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Parms OnReadSharedFileComplete_Parms;
	OnReadSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadSharedFileComplete_Parms.SharedHandle, &SharedHandle, 0x10 );

	this->ProcessEvent ( pFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearSharedFile ( struct FString SharedHandle )
{
	static UFunction* pFnClearSharedFile = NULL;

	if ( ! pFnClearSharedFile )
		pFnClearSharedFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135432 );

	UOnlineSubsystemSteamworks_execClearSharedFile_Parms ClearSharedFile_Parms;
	memcpy ( &ClearSharedFile_Parms.SharedHandle, &SharedHandle, 0x10 );

	pFnClearSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFile, &ClearSharedFile_Parms, NULL );

	pFnClearSharedFile->FunctionFlags |= 0x400;

	return ClearSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::ClearSharedFiles ( )
{
	static UFunction* pFnClearSharedFiles = NULL;

	if ( ! pFnClearSharedFiles )
		pFnClearSharedFiles = (UFunction*) UObject::GObjObjects()->GetIndex( 135430 );

	UOnlineSubsystemSteamworks_execClearSharedFiles_Parms ClearSharedFiles_Parms;

	pFnClearSharedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFiles, &ClearSharedFiles_Parms, NULL );

	pFnClearSharedFiles->FunctionFlags |= 0x400;

	return ClearSharedFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetSharedFileContents ( struct FString SharedHandle, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetSharedFileContents = NULL;

	if ( ! pFnGetSharedFileContents )
		pFnGetSharedFileContents = (UFunction*) UObject::GObjObjects()->GetIndex( 135425 );

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Parms GetSharedFileContents_Parms;
	memcpy ( &GetSharedFileContents_Parms.SharedHandle, &SharedHandle, 0x10 );

	pFnGetSharedFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSharedFileContents, &GetSharedFileContents_Parms, NULL );

	pFnGetSharedFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetSharedFileContents_Parms.FileContents, 0x10 );

	return GetSharedFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearDeleteUserFileCompleteDelegate )
		pFnClearDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135422 );

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddDeleteUserFileCompleteDelegate )
		pFnAddDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135419 );

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldCloudDelete             ( CPF_Parm )
// unsigned long                  bShouldLocallyDelete           ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete )
{
	static UFunction* pFnDeleteUserFile = NULL;

	if ( ! pFnDeleteUserFile )
		pFnDeleteUserFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135413 );

	UOnlineSubsystemSteamworks_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy ( &DeleteUserFile_Parms.UserId, &UserId, 0x10 );
	memcpy ( &DeleteUserFile_Parms.Filename, &Filename, 0x10 );
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	pFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteUserFile, &DeleteUserFile_Parms, NULL );

	pFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnDeleteUserFileComplete = NULL;

	if ( ! pFnOnDeleteUserFileComplete )
		pFnOnDeleteUserFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135409 );

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteUserFileComplete_Parms.UserId, &UserId, 0x10 );
	memcpy ( &OnDeleteUserFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteUserFileCompleteDelegate )
		pFnClearWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135406 );

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteUserFileCompleteDelegate )
		pFnAddWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135403 );

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy ( &AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFile = NULL;

	if ( ! pFnWriteUserFile )
		pFnWriteUserFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135397 );

	UOnlineSubsystemSteamworks_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy ( &WriteUserFile_Parms.UserId, &UserId, 0x10 );
	memcpy ( &WriteUserFile_Parms.Filename, &Filename, 0x10 );

	pFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFile, &WriteUserFile_Parms, NULL );

	pFnWriteUserFile->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFile_Parms.FileContents, 0x10 );

	return WriteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnWriteUserFileComplete = NULL;

	if ( ! pFnOnWriteUserFileComplete )
		pFnOnWriteUserFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135393 );

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteUserFileComplete_Parms.UserId, &UserId, 0x10 );
	memcpy ( &OnWriteUserFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = NULL;

	if ( ! pFnClearReadUserFileCompleteDelegate )
		pFnClearReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135390 );

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy ( &ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = NULL;

	if ( ! pFnAddReadUserFileCompleteDelegate )
		pFnAddReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135387 );

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy ( &AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadUserFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnReadUserFile = NULL;

	if ( ! pFnReadUserFile )
		pFnReadUserFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135383 );

	UOnlineSubsystemSteamworks_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy ( &ReadUserFile_Parms.UserId, &UserId, 0x10 );
	memcpy ( &ReadUserFile_Parms.Filename, &Filename, 0x10 );

	pFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadUserFile, &ReadUserFile_Parms, NULL );

	pFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnReadUserFileComplete = NULL;

	if ( ! pFnOnReadUserFileComplete )
		pFnOnReadUserFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135379 );

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadUserFileComplete_Parms.UserId, &UserId, 0x10 );
	memcpy ( &OnReadUserFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FEmsFile >      UserFiles                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles )
{
	static UFunction* pFnGetUserFileList = NULL;

	if ( ! pFnGetUserFileList )
		pFnGetUserFileList = (UFunction*) UObject::GObjObjects()->GetIndex( 135375 );

	UOnlineSubsystemSteamworks_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy ( &GetUserFileList_Parms.UserId, &UserId, 0x10 );

	pFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserFileList, &GetUserFileList_Parms, NULL );

	pFnGetUserFileList->FunctionFlags |= 0x400;

	if ( UserFiles )
		memcpy ( UserFiles, &GetUserFileList_Parms.UserFiles, 0x10 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnClearEnumerateUserFileCompleteDelegate )
		pFnClearEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135372 );

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnAddEnumerateUserFileCompleteDelegate )
		pFnAddEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135369 );

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::EnumerateUserFiles ( struct FString UserId )
{
	static UFunction* pFnEnumerateUserFiles = NULL;

	if ( ! pFnEnumerateUserFiles )
		pFnEnumerateUserFiles = (UFunction*) UObject::GObjObjects()->GetIndex( 135367 );

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy ( &EnumerateUserFiles_Parms.UserId, &UserId, 0x10 );

	pFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, NULL );

	pFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId )
{
	static UFunction* pFnOnEnumerateUserFilesComplete = NULL;

	if ( ! pFnOnEnumerateUserFilesComplete )
		pFnOnEnumerateUserFilesComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135364 );

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnEnumerateUserFilesComplete_Parms.UserId, &UserId, 0x10 );

	this->ProcessEvent ( pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnClearFile = NULL;

	if ( ! pFnClearFile )
		pFnClearFile = (UFunction*) UObject::GObjObjects()->GetIndex( 135360 );

	UOnlineSubsystemSteamworks_execClearFile_Parms ClearFile_Parms;
	memcpy ( &ClearFile_Parms.UserId, &UserId, 0x10 );
	memcpy ( &ClearFile_Parms.Filename, &Filename, 0x10 );

	pFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFile, &ClearFile_Parms, NULL );

	pFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearFiles ( struct FString UserId )
{
	static UFunction* pFnClearFiles = NULL;

	if ( ! pFnClearFiles )
		pFnClearFiles = (UFunction*) UObject::GObjObjects()->GetIndex( 135357 );

	UOnlineSubsystemSteamworks_execClearFiles_Parms ClearFiles_Parms;
	memcpy ( &ClearFiles_Parms.UserId, &UserId, 0x10 );

	pFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFiles, &ClearFiles_Parms, NULL );

	pFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetFileContents = NULL;

	if ( ! pFnGetFileContents )
		pFnGetFileContents = (UFunction*) UObject::GObjObjects()->GetIndex( 135351 );

	UOnlineSubsystemSteamworks_execGetFileContents_Parms GetFileContents_Parms;
	memcpy ( &GetFileContents_Parms.UserId, &UserId, 0x10 );
	memcpy ( &GetFileContents_Parms.Filename, &Filename, 0x10 );

	pFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFileContents, &GetFileContents_Parms, NULL );

	pFnGetFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetFileContents_Parms.FileContents, 0x10 );

	return GetFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteUserFileInternal ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFileInternal = NULL;

	if ( ! pFnWriteUserFileInternal )
		pFnWriteUserFileInternal = (UFunction*) UObject::GObjObjects()->GetIndex( 135345 );

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Parms WriteUserFileInternal_Parms;
	memcpy ( &WriteUserFileInternal_Parms.UserId, &UserId, 0x10 );
	memcpy ( &WriteUserFileInternal_Parms.Filename, &Filename, 0x10 );

	pFnWriteUserFileInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFileInternal, &WriteUserFileInternal_Parms, NULL );

	pFnWriteUserFileInternal->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFileInternal_Parms.FileContents, 0x10 );

	return WriteUserFileInternal_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            FriendUID                      ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFriendJoinURL ( struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID )
{
	static UFunction* pFnGetFriendJoinURL = NULL;

	if ( ! pFnGetFriendJoinURL )
		pFnGetFriendJoinURL = (UFunction*) UObject::GObjObjects()->GetIndex( 135340 );

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms GetFriendJoinURL_Parms;
	memcpy ( &GetFriendJoinURL_Parms.FriendUID, &FriendUID, 0x8 );

	pFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendJoinURL, &GetFriendJoinURL_Parms, NULL );

	pFnGetFriendJoinURL->FunctionFlags |= 0x400;

	if ( ServerURL )
		memcpy ( ServerURL, &GetFriendJoinURL_Parms.ServerURL, 0x10 );

	if ( ServerUID )
		memcpy ( ServerUID, &GetFriendJoinURL_Parms.ServerUID, 0x10 );

	return GetFriendJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bMarkAsJoined                  ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL ( unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID )
{
	static UFunction* pFnGetCommandlineJoinURL = NULL;

	if ( ! pFnGetCommandlineJoinURL )
		pFnGetCommandlineJoinURL = (UFunction*) UObject::GObjObjects()->GetIndex( 135335 );

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms GetCommandlineJoinURL_Parms;
	GetCommandlineJoinURL_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Parms, NULL );

	pFnGetCommandlineJoinURL->FunctionFlags |= 0x400;

	if ( ServerURL )
		memcpy ( ServerURL, &GetCommandlineJoinURL_Parms.ServerURL, 0x10 );

	if ( ServerUID )
		memcpy ( ServerUID, &GetCommandlineJoinURL_Parms.ServerUID, 0x10 );

	return GetCommandlineJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UIDString                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            OutUID                         ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId ( struct FString UIDString, struct FUniqueNetId* OutUID )
{
	static UFunction* pFnInt64ToUniqueNetId = NULL;

	if ( ! pFnInt64ToUniqueNetId )
		pFnInt64ToUniqueNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 135331 );

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms Int64ToUniqueNetId_Parms;
	memcpy ( &Int64ToUniqueNetId_Parms.UIDString, &UIDString, 0x10 );

	pFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Parms, NULL );

	pFnInt64ToUniqueNetId->FunctionFlags |= 0x400;

	if ( OutUID )
		memcpy ( OutUID, &Int64ToUniqueNetId_Parms.OutUID, 0x8 );

	return Int64ToUniqueNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64 ( struct FUniqueNetId* Uid )
{
	static UFunction* pFnUniqueNetIdToInt64 = NULL;

	if ( ! pFnUniqueNetIdToInt64 )
		pFnUniqueNetIdToInt64 = (UFunction*) UObject::GObjObjects()->GetIndex( 135328 );

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms UniqueNetIdToInt64_Parms;

	pFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Parms, NULL );

	pFnUniqueNetIdToInt64->FunctionFlags |= 0x400;

	if ( Uid )
		memcpy ( Uid, &UniqueNetIdToInt64_Parms.Uid, 0x8 );

	return UniqueNetIdToInt64_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAudioComponent*         VOIPAudioComponent             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent )
{
	static UFunction* pFnNotifyVOIPPlaybackFinished = NULL;

	if ( ! pFnNotifyVOIPPlaybackFinished )
		pFnNotifyVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->GetIndex( 135326 );

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms NotifyVOIPPlaybackFinished_Parms;
	NotifyVOIPPlaybackFinished_Parms.VOIPAudioComponent = VOIPAudioComponent;

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Parms, NULL );

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] 
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished ( class UAudioComponent* AC )
{
	static UFunction* pFnOnVOIPPlaybackFinished = NULL;

	if ( ! pFnOnVOIPPlaybackFinished )
		pFnOnVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->GetIndex( 135324 );

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms OnVOIPPlaybackFinished_Parms;
	OnVOIPPlaybackFinished_Parms.AC = AC;

	this->ProcessEvent ( pFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 SubURL                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerUID                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowProfileUI ( unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID )
{
	static UFunction* pFnShowProfileUI = NULL;

	if ( ! pFnShowProfileUI )
		pFnShowProfileUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135319 );

	UOnlineSubsystemSteamworks_execShowProfileUI_Parms ShowProfileUI_Parms;
	ShowProfileUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowProfileUI_Parms.SubURL, &SubURL, 0x10 );
	memcpy ( &ShowProfileUI_Parms.PlayerUID, &PlayerUID, 0x8 );

	pFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowProfileUI, &ShowProfileUI_Parms, NULL );

	pFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName ( struct FUniqueNetId* Uid )
{
	static UFunction* pFnUniqueNetIdToPlayerName = NULL;

	if ( ! pFnUniqueNetIdToPlayerName )
		pFnUniqueNetIdToPlayerName = (UFunction*) UObject::GObjObjects()->GetIndex( 135316 );

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms UniqueNetIdToPlayerName_Parms;

	pFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Parms, NULL );

	pFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;

	if ( Uid )
		memcpy ( Uid, &UniqueNetIdToPlayerName_Parms.Uid, 0x8 );

	return UniqueNetIdToPlayerName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AchievementId                  ( CPF_Parm )
// int                            ProgressCount                  ( CPF_Parm )
// int                            MaxProgress                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress ( int AchievementId, int ProgressCount, int MaxProgress )
{
	static UFunction* pFnDisplayAchievementProgress = NULL;

	if ( ! pFnDisplayAchievementProgress )
		pFnDisplayAchievementProgress = (UFunction*) UObject::GObjObjects()->GetIndex( 135311 );

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms DisplayAchievementProgress_Parms;
	DisplayAchievementProgress_Parms.AchievementId = AchievementId;
	DisplayAchievementProgress_Parms.ProgressCount = ProgressCount;
	DisplayAchievementProgress_Parms.MaxProgress = MaxProgress;

	pFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayAchievementProgress, &DisplayAchievementProgress_Parms, NULL );

	pFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 LeaderboardName                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  SortType                       ( CPF_Parm )
// unsigned char                  DisplayFormat                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat )
{
	static UFunction* pFnCreateLeaderboard = NULL;

	if ( ! pFnCreateLeaderboard )
		pFnCreateLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 135306 );

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;
	memcpy ( &CreateLeaderboard_Parms.LeaderboardName, &LeaderboardName, 0x10 );
	CreateLeaderboard_Parms.SortType = SortType;
	CreateLeaderboard_Parms.DisplayFormat = DisplayFormat;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLeaderboard, &CreateLeaderboard_Parms, NULL );

	pFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bResetAchievements             ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ResetStats ( unsigned long bResetAchievements )
{
	static UFunction* pFnResetStats = NULL;

	if ( ! pFnResetStats )
		pFnResetStats = (UFunction*) UObject::GObjObjects()->GetIndex( 135303 );

	UOnlineSubsystemSteamworks_execResetStats_Parms ResetStats_Parms;
	ResetStats_Parms.bResetAchievements = bResetAchievements;

	pFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetStats, &ResetStats_Parms, NULL );

	pFnResetStats->FunctionFlags |= 0x400;

	return ResetStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MessageTitle                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NonEditableMessage             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EditableMessage                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Recipients                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients )
{
	static UFunction* pFnShowCustomMessageUI = NULL;

	if ( ! pFnShowCustomMessageUI )
		pFnShowCustomMessageUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135295 );

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomMessageUI_Parms.MessageTitle, &MessageTitle, 0x10 );
	memcpy ( &ShowCustomMessageUI_Parms.NonEditableMessage, &NonEditableMessage, 0x10 );
	memcpy ( &ShowCustomMessageUI_Parms.EditableMessage, &EditableMessage, 0x10 );

	this->ProcessEvent ( pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, NULL );

	if ( Recipients )
		memcpy ( Recipients, &ShowCustomMessageUI_Parms.Recipients, 0x10 );

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearCrossTitleProfileSettings = NULL;

	if ( ! pFnClearCrossTitleProfileSettings )
		pFnClearCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 135292 );

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ClearCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnGetCrossTitleProfileSettings = NULL;

	if ( ! pFnGetCrossTitleProfileSettings )
		pFnGetCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 135288 );

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, NULL );

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadCrossTitleProfileSettingsCompleteDelegate )
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135285 );

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadCrossTitleProfileSettingsCompleteDelegate )
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135282 );

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = NULL;

	if ( ! pFnOnReadCrossTitleProfileSettingsComplete )
		pFnOnReadCrossTitleProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135278 );

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadCrossTitleProfileSettingsComplete_Parms.TitleId = TitleId;
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadCrossTitleProfileSettings = NULL;

	if ( ! pFnReadCrossTitleProfileSettings )
		pFnReadCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 135273 );

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleProfileSettings_Parms.TitleId = TitleId;
	ReadCrossTitleProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, NULL );

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AvatarItemId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId )
{
	static UFunction* pFnUnlockAvatarAward = NULL;

	if ( ! pFnUnlockAvatarAward )
		pFnUnlockAvatarAward = (UFunction*) UObject::GObjObjects()->GetIndex( 135269 );

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Parms UnlockAvatarAward_Parms;
	UnlockAvatarAward_Parms.LocalUserNum = LocalUserNum;
	UnlockAvatarAward_Parms.AvatarItemId = AvatarItemId;

	this->ProcessEvent ( pFnUnlockAvatarAward, &UnlockAvatarAward_Parms, NULL );

	return UnlockAvatarAward_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSteamPlayerClanData > Results                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetSteamClanData ( TArray< struct FSteamPlayerClanData >* Results )
{
	static UFunction* pFnGetSteamClanData = NULL;

	if ( ! pFnGetSteamClanData )
		pFnGetSteamClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 135266 );

	UOnlineSubsystemSteamworks_execGetSteamClanData_Parms GetSteamClanData_Parms;

	pFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSteamClanData, &GetSteamClanData_Parms, NULL );

	pFnGetSteamClanData->FunctionFlags |= 0x400;

	if ( Results )
		memcpy ( Results, &GetSteamClanData_Parms.Results, 0x10 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnClearGetNumberOfCurrentPlayersCompleteDelegate )
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135263 );

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnAddGetNumberOfCurrentPlayersCompleteDelegate )
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135260 );

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
// Parameters infos:
// int                            TotalPlayers                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers )
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if ( ! pFnOnGetNumberOfCurrentPlayersComplete )
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135258 );

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	OnGetNumberOfCurrentPlayersComplete_Parms.TotalPlayers = TotalPlayers;

	this->ProcessEvent ( pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->GetIndex( 135256 );

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// int                            Size                           ( CPF_Parm )
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, int Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate )
{
	static UFunction* pFnReadOnlineAvatar = NULL;

	if ( ! pFnReadOnlineAvatar )
		pFnReadOnlineAvatar = (UFunction*) UObject::GObjObjects()->GetIndex( 135252 );

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms ReadOnlineAvatar_Parms;
	memcpy ( &ReadOnlineAvatar_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	ReadOnlineAvatar_Parms.Size = Size;
	memcpy ( &ReadOnlineAvatar_Parms.ReadOnlineAvatarCompleteDelegate, &ReadOnlineAvatarCompleteDelegate, 0x10 );

	pFnReadOnlineAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineAvatar, &ReadOnlineAvatar_Parms, NULL );

	pFnReadOnlineAvatar->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// class UTexture2D*              Avatar                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar )
{
	static UFunction* pFnOnReadOnlineAvatarComplete = NULL;

	if ( ! pFnOnReadOnlineAvatarComplete )
		pFnOnReadOnlineAvatarComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135249 );

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Parms OnReadOnlineAvatarComplete_Parms;
	memcpy ( &OnReadOnlineAvatarComplete_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnReadOnlineAvatarComplete_Parms.Avatar = Avatar;

	this->ProcessEvent ( pFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if ( ! pFnShowCustomPlayersUI )
		pFnShowCustomPlayersUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135242 );

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomPlayersUI_Parms.Title, &Title, 0x10 );
	memcpy ( &ShowCustomPlayersUI_Parms.Description, &Description, 0x10 );

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL );

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ShowCustomPlayersUI_Parms.Players, 0x10 );

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 135236 );

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	pFnGetAchievements->FunctionFlags |= 0x400;

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0x10 );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135232 );

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135228 );

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135226 );

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 135220 );

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowPlayersUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowPlayersUI = NULL;

	if ( ! pFnShowPlayersUI )
		pFnShowPlayersUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135217 );

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL );

	pFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135213 );

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135210 );

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if ( ! pFnClearProfileDataChangedDelegate )
		pFnClearProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135206 );

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if ( ! pFnAddProfileDataChangedDelegate )
		pFnAddProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135202 );

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnProfileDataChanged ( )
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if ( ! pFnOnProfileDataChanged )
		pFnOnProfileDataChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 135201 );

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent ( pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            PictureId                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId )
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if ( ! pFnUnlockGamerPicture )
		pFnUnlockGamerPicture = (UFunction*) UObject::GObjObjects()->GetIndex( 135197 );

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	UnlockGamerPicture_Parms.PictureId = PictureId;

	pFnUnlockGamerPicture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL );

	pFnUnlockGamerPicture->FunctionFlags |= 0x400;

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135193 );

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135189 );

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135187 );

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )
// float                          PercentComplete                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 135182 );

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;
	UnlockAchievement_Parms.PercentComplete = PercentComplete;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DeviceID                       ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::IsDeviceValid ( int DeviceID, int SizeNeeded )
{
	static UFunction* pFnIsDeviceValid = NULL;

	if ( ! pFnIsDeviceValid )
		pFnIsDeviceValid = (UFunction*) UObject::GObjObjects()->GetIndex( 135178 );

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;
	IsDeviceValid_Parms.DeviceID = DeviceID;
	IsDeviceValid_Parms.SizeNeeded = SizeNeeded;

	pFnIsDeviceValid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDeviceValid, &IsDeviceValid_Parms, NULL );

	pFnIsDeviceValid->FunctionFlags |= 0x400;

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 DeviceName                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName )
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if ( ! pFnGetDeviceSelectionResults )
		pFnGetDeviceSelectionResults = (UFunction*) UObject::GObjObjects()->GetIndex( 135174 );

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetDeviceSelectionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL );

	pFnGetDeviceSelectionResults->FunctionFlags |= 0x400;

	if ( DeviceName )
		memcpy ( DeviceName, &GetDeviceSelectionResults_Parms.DeviceName, 0x10 );

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnClearDeviceSelectionDoneDelegate )
		pFnClearDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135170 );

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnAddDeviceSelectionDoneDelegate )
		pFnAddDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135163 );

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if ( ! pFnOnDeviceSelectionComplete )
		pFnOnDeviceSelectionComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135161 );

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_Parm )
// unsigned long                  bManageStorage                 ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage )
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if ( ! pFnShowDeviceSelectionUI )
		pFnShowDeviceSelectionUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135156 );

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	ShowDeviceSelectionUI_Parms.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	pFnShowDeviceSelectionUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL );

	pFnShowDeviceSelectionUI->FunctionFlags |= 0x400;

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if ( ! pFnShowMembershipMarketplaceUI )
		pFnShowMembershipMarketplaceUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135153 );

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;
	ShowMembershipMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMembershipMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL );

	pFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;

	return ShowMembershipMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            ParentProductType              ( CPF_Parm )
// int                            RequestedProductTypes          ( CPF_Parm )
// struct FString                 ParentProductId                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI ( unsigned char LocalUserNum, int ParentProductType, int RequestedProductTypes, struct FString ParentProductId )
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if ( ! pFnShowContentMarketplaceUI )
		pFnShowContentMarketplaceUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135147 );

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	ShowContentMarketplaceUI_Parms.ParentProductType = ParentProductType;
	ShowContentMarketplaceUI_Parms.RequestedProductTypes = RequestedProductTypes;
	memcpy ( &ShowContentMarketplaceUI_Parms.ParentProductId, &ParentProductId, 0x10 );

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL );

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentPurchaseResponse
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ResponseDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearContentPurchaseResponse ( struct FScriptDelegate ResponseDelegate )
{
	static UFunction* pFnClearContentPurchaseResponse = NULL;

	if ( ! pFnClearContentPurchaseResponse )
		pFnClearContentPurchaseResponse = (UFunction*) UObject::GObjObjects()->GetIndex( 135144 );

	UOnlineSubsystemSteamworks_execClearContentPurchaseResponse_Parms ClearContentPurchaseResponse_Parms;
	memcpy ( &ClearContentPurchaseResponse_Parms.ResponseDelegate, &ResponseDelegate, 0x10 );

	this->ProcessEvent ( pFnClearContentPurchaseResponse, &ClearContentPurchaseResponse_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentPurchaseResponse
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ResponseDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddContentPurchaseResponse ( struct FScriptDelegate ResponseDelegate )
{
	static UFunction* pFnAddContentPurchaseResponse = NULL;

	if ( ! pFnAddContentPurchaseResponse )
		pFnAddContentPurchaseResponse = (UFunction*) UObject::GObjObjects()->GetIndex( 135141 );

	UOnlineSubsystemSteamworks_execAddContentPurchaseResponse_Parms AddContentPurchaseResponse_Parms;
	memcpy ( &AddContentPurchaseResponse_Parms.ResponseDelegate, &ResponseDelegate, 0x10 );

	this->ProcessEvent ( pFnAddContentPurchaseResponse, &AddContentPurchaseResponse_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchaseResponse
// [0x00120000] 
// Parameters infos:
// unsigned long                  bAuthorized                    ( CPF_Parm )
// struct FQWord                  qwOrderId                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnContentPurchaseResponse ( unsigned long bAuthorized, struct FQWord qwOrderId )
{
	static UFunction* pFnOnContentPurchaseResponse = NULL;

	if ( ! pFnOnContentPurchaseResponse )
		pFnOnContentPurchaseResponse = (UFunction*) UObject::GObjObjects()->GetIndex( 135138 );

	UOnlineSubsystemSteamworks_execOnContentPurchaseResponse_Parms OnContentPurchaseResponse_Parms;
	OnContentPurchaseResponse_Parms.bAuthorized = bAuthorized;
	memcpy ( &OnContentPurchaseResponse_Parms.qwOrderId, &qwOrderId, 0x8 );

	this->ProcessEvent ( pFnOnContentPurchaseResponse, &OnContentPurchaseResponse_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowContentPurchaseUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::CanShowContentPurchaseUI ( )
{
	static UFunction* pFnCanShowContentPurchaseUI = NULL;

	if ( ! pFnCanShowContentPurchaseUI )
		pFnCanShowContentPurchaseUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135136 );

	UOnlineSubsystemSteamworks_execCanShowContentPurchaseUI_Parms CanShowContentPurchaseUI_Parms;

	pFnCanShowContentPurchaseUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowContentPurchaseUI, &CanShowContentPurchaseUI_Parms, NULL );

	pFnCanShowContentPurchaseUI->FunctionFlags |= 0x400;

	return CanShowContentPurchaseUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviteText                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135132 );

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowInviteUI_Parms.InviteText, &InviteText, 0x10 );

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	pFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowAchievementsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135129 );

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMessagesUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMessagesUI = NULL;

	if ( ! pFnShowMessagesUI )
		pFnShowMessagesUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135126 );

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL );

	pFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135122 );

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->GetIndex( 135118 );

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 135114 );

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->GetIndex( 135111 );

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->GetIndex( 135104 );

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemSteamworks::CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->GetIndex( 135097 );

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy ( &CalcAggregateSkill_Parms.Mus, &Mus, 0x10 );
	memcpy ( &CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0x10 );

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );

	if ( OutAggregateMu )
		memcpy ( OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8 );

	if ( OutAggregateSigma )
		memcpy ( OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 135093 );

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	pFnRegisterStatGuid->FunctionFlags |= 0x400;

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0x10 );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 135091 );

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	pFnGetClientStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	pFnGetClientStatGuid->FunctionFlags |= 0x400;

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135088 );

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135085 );

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135083 );

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 135080 );

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	pFnRegisterHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	pFnRegisterHostStatGuid->FunctionFlags |= 0x400;

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0x10 );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 135078 );

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	pFnGetHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	pFnGetHostStatGuid->FunctionFlags |= 0x400;

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135074 );

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135070 );

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->GetIndex( 135065 );

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0x10 );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->GetIndex( 135060 );

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0x10 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135057 );

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135054 );

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 135052 );

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemSteamworks::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->GetIndex( 135048 );

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135044 );

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135040 );

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 135037 );

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0x10 );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends ( unsigned char LocalUserNum, struct FName SessionName, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 135030 );

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0x10 );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0x10 );

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FName SessionName, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 135024 );

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0x10 );

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 135019 );

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0x10 );

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135015 );

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 135011 );

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->GetIndex( 135006 );

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0x10 );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 135002 );

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 134998 );

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 134994 );

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134990 );

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0x10 );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134985 );

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134983 );

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->GetIndex( 134978 );

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0x10 );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0x10 );

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 134973 );

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0x10 );

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->GetIndex( 134968 );

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134965 );

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0x10 );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134962 );

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0x10 );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134960 );

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 134951 );

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0x10 );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0x10 );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0x10 );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 StatusString                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  PlayerActive                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::SetOnlineStatus ( unsigned char LocalUserNum, struct FString StatusString, unsigned long PlayerActive )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 134947 );

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetOnlineStatus_Parms.StatusString, &StatusString, 0x10 );
	SetOnlineStatus_Parms.PlayerActive = PlayerActive;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	pFnSetOnlineStatus->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       Accounts                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetLocalAccountNames ( TArray< struct FString >* Accounts )
{
	static UFunction* pFnGetLocalAccountNames = NULL;

	if ( ! pFnGetLocalAccountNames )
		pFnGetLocalAccountNames = (UFunction*) UObject::GObjObjects()->GetIndex( 134943 );

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Parms GetLocalAccountNames_Parms;

	this->ProcessEvent ( pFnGetLocalAccountNames, &GetLocalAccountNames_Parms, NULL );

	if ( Accounts )
		memcpy ( Accounts, &GetLocalAccountNames_Parms.Accounts, 0x10 );

	return GetLocalAccountNames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::DeleteLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnDeleteLocalAccount = NULL;

	if ( ! pFnDeleteLocalAccount )
		pFnDeleteLocalAccount = (UFunction*) UObject::GObjObjects()->GetIndex( 134939 );

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Parms DeleteLocalAccount_Parms;
	memcpy ( &DeleteLocalAccount_Parms.UserName, &UserName, 0x10 );
	memcpy ( &DeleteLocalAccount_Parms.Password, &Password, 0x10 );

	this->ProcessEvent ( pFnDeleteLocalAccount, &DeleteLocalAccount_Parms, NULL );

	return DeleteLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password )
{
	static UFunction* pFnRenameLocalAccount = NULL;

	if ( ! pFnRenameLocalAccount )
		pFnRenameLocalAccount = (UFunction*) UObject::GObjObjects()->GetIndex( 134934 );

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Parms RenameLocalAccount_Parms;
	memcpy ( &RenameLocalAccount_Parms.NewUserName, &NewUserName, 0x10 );
	memcpy ( &RenameLocalAccount_Parms.OldUserName, &OldUserName, 0x10 );
	memcpy ( &RenameLocalAccount_Parms.Password, &Password, 0x10 );

	this->ProcessEvent ( pFnRenameLocalAccount, &RenameLocalAccount_Parms, NULL );

	return RenameLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnCreateLocalAccount = NULL;

	if ( ! pFnCreateLocalAccount )
		pFnCreateLocalAccount = (UFunction*) UObject::GObjObjects()->GetIndex( 134930 );

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Parms CreateLocalAccount_Parms;
	memcpy ( &CreateLocalAccount_Parms.UserName, &UserName, 0x10 );
	memcpy ( &CreateLocalAccount_Parms.Password, &Password, 0x10 );

	this->ProcessEvent ( pFnCreateLocalAccount, &CreateLocalAccount_Parms, NULL );

	return CreateLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnClearCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnClearCreateOnlineAccountCompletedDelegate )
		pFnClearCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134927 );

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Parms ClearCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &ClearCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnAddCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnAddCreateOnlineAccountCompletedDelegate )
		pFnAddCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134924 );

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Parms AddCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &AddCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] 
// Parameters infos:
// unsigned char                  ErrorStatus                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus )
{
	static UFunction* pFnOnCreateOnlineAccountCompleted = NULL;

	if ( ! pFnOnCreateOnlineAccountCompleted )
		pFnOnCreateOnlineAccountCompleted = (UFunction*) UObject::GObjObjects()->GetIndex( 134922 );

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Parms OnCreateOnlineAccountCompleted_Parms;
	OnCreateOnlineAccountCompleted_Parms.ErrorStatus = ErrorStatus;

	this->ProcessEvent ( pFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EmailAddress                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ProductKey                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey )
{
	static UFunction* pFnCreateOnlineAccount = NULL;

	if ( ! pFnCreateOnlineAccount )
		pFnCreateOnlineAccount = (UFunction*) UObject::GObjObjects()->GetIndex( 134916 );

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Parms CreateOnlineAccount_Parms;
	memcpy ( &CreateOnlineAccount_Parms.UserName, &UserName, 0x10 );
	memcpy ( &CreateOnlineAccount_Parms.Password, &Password, 0x10 );
	memcpy ( &CreateOnlineAccount_Parms.EmailAddress, &EmailAddress, 0x10 );
	memcpy ( &CreateOnlineAccount_Parms.ProductKey, &ProductKey, 0x10 );

	pFnCreateOnlineAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineAccount, &CreateOnlineAccount_Parms, NULL );

	pFnCreateOnlineAccount->FunctionFlags |= 0x400;

	return CreateOnlineAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->GetIndex( 134913 );

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->GetIndex( 134908 );

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0x10 );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0x10 );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134905 );

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134902 );

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->GetIndex( 134899 );

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0x10 );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134896 );

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134894 );

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134892 );

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134891 );

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemSteamworks::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->GetIndex( 134889 );

	UOnlineSubsystemSteamworks_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->GetIndex( 134887 );

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134884 );

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134881 );

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134879 );

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->GetIndex( 134876 );

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	pFnIsControllerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	pFnIsControllerConnected->FunctionFlags |= 0x400;

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134873 );

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134870 );

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )
// unsigned long                  bPauseGame                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnControllerChange ( int ControllerId, unsigned long bIsConnected, unsigned long bPauseGame )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134866 );

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;
	OnControllerChange_Parms.bPauseGame = bPauseGame;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 134864 );

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 134861 );

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134859 );

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0x10 );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134857 );

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0x10 );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134855 );

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134852 );

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134849 );

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134847 );

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->GetIndex( 134845 );

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 134841 );

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->GetIndex( 134835 );

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0x10 );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134832 );

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134829 );

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134826 );

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->GetIndex( 134823 );

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->GetIndex( 134818 );

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &WriteOnlineStats_Parms.Player, &Player, 0x8 );
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->GetIndex( 134816 );

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134813 );

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134810 );

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134808 );

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 134803 );

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->GetIndex( 134797 );

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 134793 );

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->GetIndex( 134787 );

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	pFnReadOnlineStats->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0x10 );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->GetIndex( 134783 );

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->GetIndex( 134779 );

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134775 );

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134771 );

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134770 );

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->GetIndex( 134765 );

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0x10 );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->GetIndex( 134762 );

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->GetIndex( 134759 );

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 134757 );

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 134755 );

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134752 );

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134748 );

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134745 );

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x8 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 134740 );

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 134735 );

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->GetIndex( 134730 );

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->GetIndex( 134727 );

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->GetIndex( 134724 );

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->GetIndex( 134721 );

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 134718 );

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 134715 );

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ChannelIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 134711 );

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;
	UnregisterLocalTalker_Parms.ChannelIndex = ChannelIndex;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ChannelIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 134707 );

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;
	RegisterLocalTalker_Parms.ChannelIndex = ChannelIndex;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 134700 );

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	pFnGetFriendsList->FunctionFlags |= 0x400;

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0x10 );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134696 );

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134692 );

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134690 );

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 134685 );

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134681 );

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134677 );

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134674 );

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 134669 );

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 134665 );

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134661 );

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134657 );

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134654 );

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 134649 );

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134645 );

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134641 );

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134638 );

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 134633 );

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134629 );

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134625 );

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134622 );

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 134618 );

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 134614 );

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134610 );

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134604 );

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 134601 );

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 134597 );

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134593 );

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134589 );

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134586 );

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0x10 );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134583 );

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0x10 );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134581 );

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134579 );

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134576 );

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0x10 );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134573 );

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0x10 );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134570 );

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134567 );

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134564 );

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 134559 );

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0x10 );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 134555 );

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->GetIndex( 134549 );

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;
	CanShowPresenceInformation_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShowPresenceInformation_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShowPresenceInformation_Parms.PrivilegeLevelHint;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->GetIndex( 134543 );

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;
	CanViewPlayerProfiles_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanViewPlayerProfiles_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanViewPlayerProfiles_Parms.PrivilegeLevelHint;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->GetIndex( 134536 );

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;
	CanPurchaseContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPurchaseContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPurchaseContent_Parms.PrivilegeLevelHint;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanMultiplayerCrossPlay
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanMultiplayerCrossPlay ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanMultiplayerCrossPlay = NULL;

	if ( ! pFnCanMultiplayerCrossPlay )
		pFnCanMultiplayerCrossPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 134542 );

	UOnlineSubsystemSteamworks_execCanMultiplayerCrossPlay_Parms CanMultiplayerCrossPlay_Parms;
	CanMultiplayerCrossPlay_Parms.LocalUserNum = LocalUserNum;
	CanMultiplayerCrossPlay_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanMultiplayerCrossPlay_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanMultiplayerCrossPlay, &CanMultiplayerCrossPlay_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanMultiplayerCrossPlay_Parms.PrivilegeLevelHint;

	return CanMultiplayerCrossPlay_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->GetIndex( 134533 );

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->GetIndex( 134527 );

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;
	CanPlayOnline_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPlayOnline_Parms.Reason, &Reason, 0x10 );

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPlayOnline_Parms.PrivilegeLevelHint;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->GetIndex( 134524 );

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	pFnGetPlayerNickname->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	pFnGetPlayerNickname->FunctionFlags |= 0x400;

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->GetIndex( 134520 );

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	pFnGetUniquePlayerId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	pFnGetUniquePlayerId->FunctionFlags |= 0x400;

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 134517 );

	UOnlineSubsystemSteamworks_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 134514 );

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 134511 );

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134507 );

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134503 );

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->GetIndex( 134501 );

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->GetIndex( 134498 );

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134494 );

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 134490 );

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->GetIndex( 134487 );

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 134485 );

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 134479 );

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0x10 );
	memcpy ( &Login_Parms.Password, &Password, 0x10 );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAccountPickerOpen
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::IsAccountPickerOpen ( )
{
	static UFunction* pFnIsAccountPickerOpen = NULL;

	if ( ! pFnIsAccountPickerOpen )
		pFnIsAccountPickerOpen = (UFunction*) UObject::GObjObjects()->GetIndex( 134477 );

	UOnlineSubsystemSteamworks_execIsAccountPickerOpen_Parms IsAccountPickerOpen_Parms;

	this->ProcessEvent ( pFnIsAccountPickerOpen, &IsAccountPickerOpen_Parms, NULL );

	return IsAccountPickerOpen_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bForceLogin                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowLoginUI ( unsigned char LocalUserNum, unsigned long bForceLogin, unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 134472 );

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.LocalUserNum = LocalUserNum;
	ShowLoginUI_Parms.bForceLogin = bForceLogin;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134471 );

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134470 );

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->GetIndex( 134469 );

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->GetIndex( 134467 );

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventExit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->GetIndex( 134466 );

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 134464 );

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif