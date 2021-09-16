/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct PlatformCommon.PComOpenBroadcaster.PComOpenBroadcasterSettings
// 0x0004
struct FPComOpenBroadcasterSettings
{
	unsigned long                                      bAllowWebcam : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowMicrophone : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAllowDesktopAudio : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct PlatformCommon.PComImageDownloader.PComImageDownload
// 0x0040
struct FPComImageDownload
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FilePath;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    HttpDownloader;                                   		// 0x0020 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      State;                                            		// 0x0028 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x002C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPendingRemoval : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlatformCommon.PComInputLightingEffect.PComInputLightingPreset
// 0x003C
struct FPComInputLightingPreset
{
	struct FName                                       PresetName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveLinearColor                     Curve;                                            		// 0x0008 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                ColorTint;                                        		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                LoopCount;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlaybackRate;                                     		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlatformCommon.PComInputLightingEffect.PComActiveInputLightingPreset
// 0x000C
struct FPComActiveInputLightingPreset
{
	int                                                LoopCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              PlaybackRate;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComMusicTheme.MusicEvent
// 0x0038
struct FMusicEvent
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicTrackStruct                           EventTrack;                                       		// 0x0008 (0x002C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              EventDuration;                                    		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureProfile
// 0x001C
struct FPComPerformanceCaptureProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ScalabilityBucket;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ResolutionX;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ResolutionY;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VsyncInterval;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFullScreen : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStat
// 0x0010
struct FPComPerformanceCaptureStat
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FDouble                                     StatValue;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStatsPerNode
// 0x0018
struct FPComPerformanceCaptureStatsPerNode
{
	class AActor*                                      Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPComPerformanceCaptureStat >       Stats;                                            		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStatsPerSkin
// 0x0070
struct FPComPerformanceCaptureStatsPerSkin
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SkinName;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SkeletalMeshPathName;                             		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SkeletalMeshPathNameHead;                         		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SkeletalMeshPathNameBody;                         		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SkeletalMeshPathNameWeapon;                       		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPComPerformanceCaptureStat >       Stats;                                            		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureGame.PComPerformanceCaptureStatCollection
// 0x0018
struct FPComPerformanceCaptureStatCollection
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPComPerformanceCaptureStat >       Stats;                                            		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlatformCommon.PComPictureInPicture.PComPipViewDesc
// 0x01E4
struct FPComPipViewDesc
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     ViewLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ViewRotation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FBox                                        Viewport;                                         		// 0x0020 (0x001C) [0x0000000000000000]              
	class UPostProcessChain*                           PostProcessChain;                                 		// 0x003C (0x0008) [0x0000000000000000]              
	struct FPostProcessSettings                        PostProcessSettings;                              		// 0x0044 (0x0180) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              FOV;                                              		// 0x01C4 (0x0004) [0x0000000000000000]              
	struct FColor                                      ClearColor;                                       		// 0x01C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDebugRenderTranslucent : 1;                      		// 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlwaysRender : 1;                                		// 0x01CC (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDouble                                     RequestRenderTime;                                		// 0x01D0 (0x0008) [0x0000000000000000]              
	struct FDouble                                     LastRenderedTime;                                 		// 0x01D8 (0x0008) [0x0000000000000000]              
	int                                                NumFramesSinceRender;                             		// 0x01E0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComPlayerInput.KeyBindingProp
// 0x0014
struct FKeyBindingProp
{
	struct FString                                     kbCommand;                                        		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                propId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComPlayerProfile.BadgeStruct
// 0x003C
struct FBadgeStruct
{
	int                                                BadgeId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ActivityId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Icon;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Progress;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxValue;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Category;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x002C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlatformCommon.PComPlayerProfile.PropertyPair
// 0x0008
struct FPropertyPair
{
	int                                                PropertyId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComPlayerProfile.AccoladeStruct
// 0x0010
struct FAccoladeStruct
{
	int                                                AccoladeId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ActivityId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Type;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComPositionHistoryServerComponent.PComPositionHistoryData
// 0x002C
struct FPComPositionHistoryData
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	unsigned char                                      Physics;                                          		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned long                                      bWasFalling : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCollideActors : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBlockActors : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct PlatformCommon.PComStructures.CombatMessageInfo
// 0x0038
struct FCombatMessageInfo
{
	int                                                nMsgId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSourceId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eSourceType;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                nSourceOwnerId;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTargetId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      eTargetType;                                      		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                nAmount1;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nAmount2;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nSourceItemId;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nDamageTypeId;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nLocationId;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nEventIndex;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nLocationX;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nLocationY;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlatformCommon.PComUIManagerBase.ManagerImage
// 0x0018
struct FManagerImage
{
	struct FString                                     strImageName;                                     		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTexture2DDynamic*                           pTexture;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif