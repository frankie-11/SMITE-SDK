/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Vivox_f_structs.h
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

// Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged
// [0x00020400] ( FUNC_Native )
struct UVivoxOSSConnectors_execOnGameChatBlockedChanged_Parms
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Vivox.VivoxOSSConnectors.IsGameChatBlocked
// [0x00020802] ( FUNC_Event )
struct UVivoxOSSConnectors_eventIsGameChatBlocked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Vivox.VivoxOSSConnectors.SignalGameChatStopping
// [0x00020802] ( FUNC_Event )
struct UVivoxOSSConnectors_eventSignalGameChatStopping_Parms
{
};

// Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting
// [0x00020802] ( FUNC_Event )
struct UVivoxOSSConnectors_eventSignalGameChatAttempting_Parms
{
};

// Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
struct UVivoxOSSConnectors_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResultByUniqueNetId >   Results;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds
// [0x00020802] ( FUNC_Event )
struct UVivoxOSSConnectors_eventCanCommunicateVoiceWithUsersByUniqueNetIds_Parms
{
	TArray< struct FUniqueNetId >                      Users;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked
// [0x00020400] ( FUNC_Native )
struct UVivoxOSSConnectors_execOnPrivilegeLevelChecked_Parms
{
	int                                                ChannelJoinCount;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0006 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Vivox.VivoxOSSConnectors.CanCommunicateVoice
// [0x00420802] ( FUNC_Event )
struct UVivoxOSSConnectors_eventCanCommunicateVoice_Parms
{
	int                                                ChannelJoinCount;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0004 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UVivoxClosureOnPrivilegeLevelChecked*     Closure;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function Vivox.VivoxOSSConnectors.RemoveClosure
// [0x00020002] 
struct UVivoxOSSConnectors_execRemoveClosure_Parms
{
	class UVivoxClosure*                               Closure;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates
// [0x00020802] ( FUNC_Event )
struct UVivoxOSSConnectors_eventRegisterOnlineDelegates_Parms
{
};

// Function Vivox.VivoxClosure.ClearOnlineDelegates
// [0x00020000] 
struct UVivoxClosure_execClearOnlineDelegates_Parms
{
};

// Function Vivox.VivoxClosure.RegisterOnlineDelegates
// [0x00020002] 
struct UVivoxClosure_execRegisterOnlineDelegates_Parms
{
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Vivox.VivoxClosure.Init
// [0x00080002] 
struct UVivoxClosure_execInit_Parms
{
	class UVivoxOSSConnectors*                         ParamConnector;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked
// [0x00020002] 
struct UVivoxClosureOnPrivilegeLevelChecked_execOnPrivilegeLevelChecked_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates
// [0x00020002] 
struct UVivoxClosureOnPrivilegeLevelChecked_execClearOnlineDelegates_Parms
{
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates
// [0x00020002] 
struct UVivoxClosureOnPrivilegeLevelChecked_execRegisterOnlineDelegates_Parms
{
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure
// [0x00020002] 
struct UVivoxClosureOnPrivilegeLevelChecked_execInitClosure_Parms
{
	int                                                ChannelJoinCount;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UVivoxOSSConnectors*                         Connector;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif