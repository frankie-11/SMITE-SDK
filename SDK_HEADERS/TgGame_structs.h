/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgGame_structs.h
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

// ScriptStruct TgGame.TgAchievement_AbilityMultiHit.DeviceEffectPair
// 0x0020
struct FDeviceEffectPair
{
	TArray< int >                                      DeviceIds;                                        		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      EffectIds;                                        		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_AbilityMultiHit.DeviceHitInfo
// 0x001C
struct FDeviceHitInfo
{
	class UObject*                                     DeviceReference;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      nFiringInstance;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< class ATgPawn* >                           PawnsHit;                                         		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Bellona_Master.TrackedHits
// 0x000C
struct FTrackedHits
{
	unsigned long                                      bHitInHand : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHitHammer : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHitScourge : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHitShield : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	class AActor*                                      Target;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_Cabrakan_Tremors.TremorsData
// 0x0010
struct FTremorsData
{
	class ATgPawn*                                     GodPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_DeviceMultiHit_ByType.TrackedTargets
// 0x0014
struct FTrackedTargets
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ATgPawn* >                           Targets;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Camazotz_BatOutOfHell.CamazotzTrackedTargets
// 0x0018
struct FCamazotzTrackedTargets
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AmmoInstance;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class ATgPawn* >                           Targets;                                          		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_DeviceHits_SingleShotPerTarget.ShotHitCountInfo
// 0x000C
struct FShotHitCountInfo
{
	class ATgPawn*                                     HitPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                HitCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_DeviceHits_SingleShotPerTarget.ShotHitInfo
// 0x0014
struct FShotHitInfo
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FShotHitCountInfo >                 Hits;                                             		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_DeviceKillsSingleShot.TrackedKilledTargets
// 0x0014
struct FTrackedKilledTargets
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ATgPawn* >                           Targets;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Hel_StanceKills.HelStanceKillTrackingData
// 0x0010
struct FHelStanceKillTrackingData
{
	class ATgPawn*                                     Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                LightStanceKills;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DarkStanceKills;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_HelpingHand.AssistComboData
// 0x000C
struct FAssistComboData
{
	class AActor*                                      m_ComboActor;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nPreviousKillCombo;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_Hera_RoyalAssault.RoyalAssaultData
// 0x000C
struct FRoyalAssaultData
{
	class ATgPawn*                                     HitPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HitCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_HouYi_Trick.HitsPerBounce
// 0x0010
struct FHitsPerBounce
{
	TArray< class AActor* >                            HitTargets;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Kaboom.DeviceDamageInfo
// 0x001C
struct FDeviceDamageInfo
{
	class ATgDevice*                                   DeviceReference;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      nFiringInstance;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              fDamage;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRecorded : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAchievement_KillsSingleAbility.DeviceKillsInfo
// 0x000A
struct FDeviceKillsInfo
{
	class UObject*                                     DeviceReference;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      nFiringInstance;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      nKills;                                           		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_Kuzenbo_TripleTreble.KnockUpHitInfo
// 0x000C
struct FKnockUpHitInfo
{
	class AActor*                                      m_Actor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nKnockUpCount;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_Mulan_TwoForOne.MulanUltimateHitInfo
// 0x0014
struct FMulanUltimateHitInfo
{
	unsigned char                                      m_nFiringInstance;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< class ATgPawn* >                           m_PawnsHit;                                       		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_NeZha_TwosACrowd.BounceData
// 0x000C
struct FBounceData
{
	class ATgPawn*                                     HitPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HitCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgActor_CH08_GooSpawner.CH08_GOO_SPAWNER
// 0x0030
struct FCH08_GOO_SPAWNER
{
	struct FVector                                     vSpawnLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nGooSpawnCount;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsActive : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fSpawnOffsetZ;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fMaxSpread;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fMinSpread;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fRespawnDelay;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fTimeRemaining;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	class ATgCollisionProxy_CH08*                      collisionProxy;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgActor_DeathFog.FOG_CONFIG
// 0x0020
struct FFOG_CONFIG
{
	float                                              fSafeDistance;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPhaseDuration;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadRate;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTickInterval;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AEmitter* >                          Emitters;                                         		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.PEPRewardEntry
// 0x0014
struct FPEPRewardEntry
{
	int                                                m_nRewardBotId;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eRewardType;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eRewardTier;                                    		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_ePusherType;                                    		// 0x0006 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmTypeName;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nSpawnMultiplier;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgObject.PEPRewardMap
// 0x001C
struct FPEPRewardMap
{
	struct FName                                       m_nmEntryName;                                    		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FPEPRewardEntry                             m_eRewardData;                                    		// 0x0008 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgObject.PEPRewardPawnData
// 0x0020
struct FPEPRewardPawnData
{
	class ATgPawn*                                     m_pRewardPawn;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPEPRewardEntry                             m_eRewardData;                                    		// 0x0008 (0x0014) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fCapturedTime;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.MicList
// 0x0010
struct FMicList
{
	TArray< class UMaterialInstanceConstant* >         m_micList;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.ObjectiveSpawnData
// 0x0018
struct FObjectiveSpawnData
{
	int                                                m_nObjectiveId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fNextSpawnDelay;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fNextSpawnOffset;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nTeam1KillCount;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nTeam2KillCount;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bObjectiveHasSpawn : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bFirstUpdate : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgObject.ScoreKillData
// 0x00B4
struct FScoreKillData
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgRepInfo_Player*                           KillerPRI;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     KillerPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FPointer                                    KillerBotAssembly;                                		// 0x0018 (0x0008) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bKillerIsGod : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKillerIsMinion : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bKillerIsTower : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	class AController*                                 Victim;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     VictimPawn;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	class ATgRepInfo_Player*                           VictimPRI;                                        		// 0x0034 (0x0008) [0x0000000000000000]              
	class ATgRepInfo_TaskForce*                        VictimTaskForce;                                  		// 0x003C (0x0008) [0x0000000000000000]              
	struct FPointer                                    VictimBotAssembly;                                		// 0x0044 (0x0008) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      VictimCanScore : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVictimIsGod : 1;                                 		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bVictimIsMinion : 1;                              		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bVictimIsTower : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	class AController*                                 Scorer;                                           		// 0x0050 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     ScorerPawn;                                       		// 0x0058 (0x0008) [0x0000000000000000]              
	class ATgRepInfo_Player*                           ScorerPRI;                                        		// 0x0060 (0x0008) [0x0000000000000000]              
	class ATgRepInfo_TaskForce*                        ScorerTaskForce;                                  		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned long                                      ScorerCanScore : 1;                               		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class AController*                                 KillerOverride;                                   		// 0x0074 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     KillerOverridePawn;                               		// 0x007C (0x0008) [0x0000000000000000]              
	class ATgRepInfo_Player*                           KillerOverridePRI;                                		// 0x0084 (0x0008) [0x0000000000000000]              
	class ATgRepInfo_TaskForce*                        KillerOverrideTaskForce;                          		// 0x008C (0x0008) [0x0000000000000000]              
	unsigned long                                      KillerOverrideCanScore : 1;                       		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgEffectGroup*                              KillingEffectGroup;                               		// 0x0098 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSuicide : 1;                                     		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFirstBlood : 1;                                  		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class ATgRepInfo_Player* >                 AssistingPlayers;                                 		// 0x00A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.ButtonPromptData
// 0x0020
struct FButtonPromptData
{
	struct FString                                     promptText;                                       		// 0x0000 (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     buttonDisplay;                                    		// 0x0010 (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.sTrainingBotMap
// 0x0008
struct FsTrainingBotMap
{
	int                                                BotID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TrainingBotID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.MultiHitInfo
// 0x0010
struct FMultiHitInfo
{
	class AActor*                                      HitTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nTimesHit;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.DeviceInstanceTracker
// 0x000C
struct FDeviceInstanceTracker
{
	struct FPointer                                    m_dev;                                            		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                m_nFiringInstance;                                		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgObject.IncrementalDamageTracker
// 0x0018
struct FIncrementalDamageTracker
{
	struct FDeviceInstanceTracker                      m_deviceInstanceTracker;                          		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      m_hitActor;                                       		// 0x000C (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nHitCount;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.ChargeHitInfo
// 0x000C
struct FChargeHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnDodgedParams
// 0x0020
struct FOnDodgedParams
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class AActor*                                      DodgingActor;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnAbsorbHitParams
// 0x0028
struct FOnAbsorbHitParams
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgEffectGroup*                              AbsorbedEG;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	class AActor*                                      AbsorbingActor;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnHealedParams
// 0x009C
struct FOnHealedParams
{
	class ATgPawn*                                     Healer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgEffectGroup*                              eg;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x0018 (0x0078) [0x0000000000080000]              ( CPF_Component )
	float                                              fHealAmount;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              fHealthChange;                                    		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                nPropertyId;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnDamagedParams
// 0x00A4
struct FOnDamagedParams
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgEffectGroup*                              eg;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x0018 (0x0078) [0x0000000000080000]              ( CPF_Component )
	float                                              fBuffedDamage;                                    		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              fMitigatedDamage;                                 		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              fPreDamageHealth;                                 		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCritical : 1;                                    		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nPropertyId;                                      		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.sPingInfo
// 0x001D
struct FsPingInfo
{
	class ATgRepInfo_Player*                           pingedPri;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fStartTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     vPingedLoc;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bPinging : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eType;                                            		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.TgKeyBind
// 0x0058
struct FTgKeyBind
{
	int                                                nGroupNameMsgId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nNameMsgId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sKeyCommand;                                      		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefaultKey;                                      		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sKey;                                             		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sKeyAlternate;                                    		// 0x0038 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sKeyBindText;                                     		// 0x0048 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.OffhandAnimation
// 0x0014
struct FOffhandAnimation
{
	struct FName                                       m_OffhandUseType;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       m_AnimName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bFullBody : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO_EFFECTS
// 0x0014
struct FTG_HUD_INFO_EFFECTS
{
	int                                                nEffectGroupId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIconStackId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nStackCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fDurationSecs;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fRemainingSecs;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO
// 0x013E
struct FTG_HUD_INFO
{
	unsigned char                                      eOverlayType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nActorId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnemy : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     objectiveString;                                  		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowNameplate : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowPortrait : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowOverlays : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowTaskForce : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsWinning : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsTargeted : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     vScreenLoc;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              fScale;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fAlphaLevel;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fLastSeenTime;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fLastUnseenTime;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nHealth;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nMaxHealth;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nMana;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                nMaxMana;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                nShield;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                nMaxShield;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              fDistance;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nLevel;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nPacingType;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                nTaskForce;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                nHardCCCategoryId;                                		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              fHardCCLengthSecs;                                		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              fHardCCRemainingSecs;                             		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                nImmunityTypeId;                                  		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FTG_HUD_INFO_EFFECTS                        ImportantEffects[ 0x8 ];                          		// 0x008C (0x00A0) [0x0000000000000000]              
	float                                              fLifeLengthSecs;                                  		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              fLifeRemainingSecs;                               		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              fNextLineCheckTime;                               		// 0x0134 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastLineCheckResult : 1;                         		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eLineCheckState;                                  		// 0x013C (0x0001) [0x0000000000000000]              
	unsigned char                                      eOffscreenIndicator;                              		// 0x013D (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.LinearValueRange
// 0x0008
struct FLinearValueRange
{
	float                                              m_fMin;                                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMax;                                           		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgObject.RewardInfo
// 0x0018
struct FRewardInfo
{
	int                                                RequestedReward;                                  		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                BoostReward;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ActualReward;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ActualRewardAccum;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BoostRewardAccum;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ErrorMessage;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.MeshAssets
// 0x0040
struct FMeshAssets
{
	struct FString                                     m_sSkeletalMesh;                                  		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sPhysicsAsset;                                  		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sAnimTreeTemplate;                              		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sAnimSets;                                      		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.ObjectiveMICInfo
// 0x0014
struct FObjectiveMICInfo
{
	int                                                MyTeam;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AmountFilled;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ObjStatus;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                IsContested;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Flip;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.AimData
// 0x0030
struct FAimData
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     AimVector;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	unsigned long                                      bResult : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgObject.EquipDeviceInfo
// 0x000C
struct FEquipDeviceInfo
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceInstanceId;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nMode;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.GAMEMODE_PLAYER_MOD_INFO
// 0x0018
struct FGAMEMODE_PLAYER_MOD_INFO
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nStacks;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UTgEffectGroup* >                    EffectGroups;                                     		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.GAMEMODE_PLAYER_MODS
// 0x0014
struct FGAMEMODE_PLAYER_MODS
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FGAMEMODE_PLAYER_MOD_INFO >         Mods;                                             		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.CH08_GOO_SPAWNER_EVENT
// 0x0014
struct FCH08_GOO_SPAWNER_EVENT
{
	struct FVector                                     vSpawnLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nSpawnerId;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSetActive : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgObject.CH08_GOO_SPOT
// 0x0018
struct FCH08_GOO_SPOT
{
	struct FVector                                     vGooLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      nGooType;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nGooId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSpawnerId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.CH08_GOO_EVENT
// 0x001C
struct FCH08_GOO_EVENT
{
	struct FCH08_GOO_SPOT                              gooSpot;                                          		// 0x0000 (0x0018) [0x0000000000000000]              
	unsigned long                                      bSetActive : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAhMuzenCabSwarmInstance.InfectedInfo
// 0x000C
struct FInfectedInfo
{
	class AActor*                                      InfectedTarget;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fInfectedUntil;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIBehaviorNode.BehaviorStateData
// 0x0009
struct FBehaviorStateData
{
	float                                              LastTickTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NodeToken;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController.ThreatStruct
// 0x000C
struct FThreatStruct
{
	class AActor*                                      Threatener;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fThreat;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController_Behavior.DeferredNode
// 0x0028
struct FDeferredNode
{
	float                                              WorldTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CurrentNode;                                      		// 0x0004 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    CachedStatus;                                     		// 0x000C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    StorageMemory;                                    		// 0x0014 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    WorkingMemory;                                    		// 0x001C (0x0008) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bExpensiveAction : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAIController_Behavior.IncomingDamageEntry
// 0x0030
struct FIncomingDamageEntry
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      DeviceSlot;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FVector                                     SourceInitialLocation;                            		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    SourceInitialAim;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              ExpireTime;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              RemovalTime;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController_Behavior.FollowLaneState
// 0x0008
struct FFollowLaneState
{
	int                                                LastLaneIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFinalApproach : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockedToMarker : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgAIController_Behavior.NavigationQueueEntry
// 0x0040
struct FNavigationQueueEntry
{
	class ATgPawn*                                     TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bNewEntry : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCachedReachability : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     CachedReachabilityLocation;                       		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              CachedReachabilityTime;                           		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLookAtTarget : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMustHaveLOS : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStopNavOnReachedDestination : 1;                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DistanceTolerance;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                NodeToken;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                TeleportIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.DeployWallPushingInfo
// 0x0014
struct FDeployWallPushingInfo
{
	class ATgDeploy_Wall*                              OverlappingWall;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     PushingVector;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.GravityModifierInfo
// 0x0008
struct FGravityModifierInfo
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fMultipler;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.OverlayMICList
// 0x0010
struct FOverlayMICList
{
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn.OverlayInfo
// 0x006D
struct FOverlayInfo
{
	class UTgSkeletalMeshComponent*                    OverlayMesh;                                      		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTgSilhouetteComponent*                      Silhouette;                                       		// 0x0008 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      ParentMesh;                                       		// 0x0010 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bSetPhysAsset : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FOverlayMICList                             OverlayMICInstances[ 0x5 ];                       		// 0x001C (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentState;                                     		// 0x006C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.SpawnedSkelMeshEntry
// 0x0020
struct FSpawnedSkelMeshEntry
{
	int                                                nMeshId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgSkeletalMeshActorSpawnable*               SpawnedMesh;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	class UTgSkeletalMeshComponent*                    SpawnedMeshComp;                                  		// 0x000C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTgAnimNodeSlot*                             FullBodyNode;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                nActiveCount;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.SpawnedAnimNotifyMeshEntry
// 0x0010
struct FSpawnedAnimNotifyMeshEntry
{
	class ATgSkeletalMeshActorSpawnable*               SpawnedMesh;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAnimNotify*                                 AnimNotifyData;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.HealingInfo
// 0x0008
struct FHealingInfo
{
	float                                              HealAmount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.ManaHealToHealth
// 0x0008
struct FManaHealToHealth
{
	unsigned long                                      m_bApplyManaHealToHealth : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bUseHealthCalculations : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fPercManaHealToHealth;                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.FloorPortalTweenInfo
// 0x0014
struct FFloorPortalTweenInfo
{
	unsigned char                                      FloorPortalState;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     StartPosition;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              StartVelocityZ;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.AnimNotifyAudioEntry
// 0x0010
struct FAnimNotifyAudioEntry
{
	class USoundCue*                                   PlayedCue;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fLastTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nGroupNum;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.ExternalCameraOverrides
// 0x001C
struct FExternalCameraOverrides
{
	struct FVector                                     m_vAbsoluteOffset;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vScaledByZoomOffset;                            		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_fZoomOverride;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.DeviceEquipSlotPair
// 0x0008
struct FDeviceEquipSlotPair
{
	int                                                nDeviceInstanceId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nEquipSlotValueId;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.CannotTouchInfo
// 0x000C
struct FCannotTouchInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeToReTouch;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.MicOverridesMap
// 0x0010
struct FMicOverridesMap
{
	TArray< struct FMicList >                          m_micOverrides;                                   		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgProperty.TgPropertyInstance
// 0x001C
struct FTgPropertyInstance
{
	int                                                m_nPropIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPropertyId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fBase;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fRaw;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fMinimum;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fMaximum;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fScalingFactor;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Sound
// 0x0020
struct FFx_Sound
{
	int                                                c_nId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   c_SoundCue;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             c_acSound;                                        		// 0x000C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      c_bAllowSoundToFinishFlag : 1;                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                c_nAudienceType;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      c_bForceAudioComponent : 1;                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgSpecialFx.Fx_PSC
// 0x0035
struct FFx_PSC
{
	int                                                c_nId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    c_PSC;                                            		// 0x0004 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             c_PSCTemplate;                                    		// 0x000C (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              c_fScale;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                c_nScaleType;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      c_bRunning : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       c_nmSocketDisplayGrp;                             		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       c_nmSocket;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	unsigned long                                      c_bAbsoluteRotation : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      c_eDepthPriorityGroup;                            		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Material
// 0x0014
struct FFx_Material
{
	int                                                nFxMatId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFxMatTypeCode;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       nmMIC;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bApplyIfSameTeam : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Decal
// 0x0028
struct FFx_Decal
{
	int                                                c_nId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          c_MaterialInterface;                              		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              c_fWidth;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              c_fHeight;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              c_fThickness;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      c_bNoClip : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_bAttach : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	class UDecalComponent*                             c_Decal;                                          		// 0x001C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              c_fLifetime;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.PostureStack
// 0x0024
struct FPostureStack
{
	TArray< int >                                      GUIDs;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Postures;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NewPostureGUID;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.GlobalEmoteInfo
// 0x0006
struct FGlobalEmoteInfo
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nTicker;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      nFilters;                                         		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEmoteConfigResource.EmoteConfigEntry
// 0x000C
struct FEmoteConfigEntry
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bWantsLoop : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsSuppress : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBlockAnimRestart : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLocksMusicTheme : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUsesPostProcess : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                nLockedBeforeLevel;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.PawnDamagerStruct
// 0x000C
struct FPawnDamagerStruct
{
	class ATgPawn*                                     DamagerPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTimestamp;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.TGEQUIP_SLOTS_STRUCT
// 0x00F8
struct FTGEQUIP_SLOTS_STRUCT
{
	int                                                SlotIndices[ 0x1F ];                              		// 0x0000 (0x007C) [0x0000000000000000]              
	int                                                MiscItems[ 0x1F ];                                		// 0x007C (0x007C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.DeathStampFlashInfo
// 0x0005
struct FDeathStampFlashInfo
{
	int                                                nPawnId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nTicker;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRecommendedBuildInterface.PlayerBuildRecs
// 0x0144
struct FPlayerBuildRecs
{
	int                                                m_nSupportRecommendedItems[ 0xC ];                		// 0x0000 (0x0030) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nCarryRecommendedItems[ 0xC ];                  		// 0x0030 (0x0030) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nMidRecommendedItems[ 0xC ];                    		// 0x0060 (0x0030) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nSoloRecommendedItems[ 0xC ];                   		// 0x0090 (0x0030) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nJungleRecommendedItems[ 0xC ];                 		// 0x00C0 (0x0030) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nGenericRecommendedItems[ 0xC ];                		// 0x00F0 (0x0030) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eCurrentRecommendedRole;                        		// 0x0120 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_bUseRecommendedItems : 1;                       		// 0x0124 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	int                                                m_nT3StarterBuildSlot;                            		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     m_strBotName;                                     		// 0x012C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                m_nPlayerId;                                      		// 0x013C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_bLogDebugInfo : 1;                              		// 0x0140 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct TgGame.TgAIController_BehaviorMapNpc.ThreatEntry
// 0x000C
struct FThreatEntry
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ThreatLevel;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAILocalPositionSolver.DefaultRepulsorData
// 0x000D
struct FDefaultRepulsorData
{
	unsigned char                                      TargetType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              MaxEnemyWeight;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxFriendlyWeight;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      SolverType;                                       		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAimAssistKeyframe.AimAssistKeyframeData
// 0x000C
struct FAimAssistKeyframeData
{
	struct FName                                       KeyframeName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIObstacleAvoidance.ObstacleQueryCache
// 0x0029
struct FObstacleQueryCache
{
	struct FVector                                     RealGoalPos;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ModifiedGoalPos;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           IntermediatePoints;                               		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      PathStatus;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAISquad.SquadPendingRemove
// 0x000C
struct FSquadPendingRemove
{
	class ATgAIController*                             m_aicPendingRemoveMember;                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bDied : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAnimNodeBlendList.ChildBlendParam
// 0x0018
struct FChildBlendParam
{
	int                                                FromChild;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ToChild;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StationaryBlendTime;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseAltBlendTimeWhileStationary : 1;               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MaxBlendTime;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnim_MeshPassthrough.TgAnimPassthroughMeshMap
// 0x0014
struct FTgAnimPassthroughMeshMap
{
	int                                                m_nMeshId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmSocketName;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmMeshFullbodyName;                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnim_MeshPassthrough.TgAnimPassthroughPACMap
// 0x000C
struct FTgAnimPassthroughPACMap
{
	int                                                m_nMeshId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmBoneName;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBehaviorTracker.BehaviorCategoryMap
// 0x0010
struct FBehaviorCategoryMap
{
	TArray< unsigned char >                            eTrackedBehaviors;                                		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn_Character.PERSISTENT_BUFF_STRUCT
// 0x0014
struct FPERSISTENT_BUFF_STRUCT
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPropId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nExpireDateTime;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Character.DEATH_CAM_ZOOM
// 0x000C
struct FDEATH_CAM_ZOOM
{
	unsigned long                                      bUsesDeathZoomOverride : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fDeathZoom;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fDeathZoomTweenTime;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Character.CameraModifierData
// 0x0018
struct FCameraModifierData
{
	class UTgCameraModifier_GameplayCurves*            m_cameraModifierBase;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgCameraModifier_GameplayCurves*            m_cameraModifierInstance;                         		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bActive : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fInterpDurationOverride;                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_BabaYaga.BabaYagaA01FxTrigger
// 0x0014
struct FBabaYagaA01FxTrigger
{
	unsigned char                                      m_byPlayFx;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nCustomFilter;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vSpawnLoc;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.WeaponSetInfo
// 0x0004
struct FWeaponSetInfo
{
	unsigned char                                      CurrentWeaponSet;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SwapState;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding[ 0x2 ];                                   		// 0x0002 (0x0002) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.VisibleWeaponOverrides
// 0x0010
struct FVisibleWeaponOverrides
{
	unsigned char                                      DesiredWeaponSet;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RequestingAnimSeqNode;                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.VisibleFlagMesh
// 0x000C
struct FVisibleFlagMesh
{
	unsigned long                                      bUseOverlay : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAnimNodeSequence*                           RequestingAnimSeqNode;                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.ShieldBashRepInfo
// 0x0011
struct FShieldBashRepInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Rotation;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Ticker;                                           		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimBlendByDirection_WithTransitions.DirectionTransitionAnimSet
// 0x000C
struct FDirectionTransitionAnimSet
{
	unsigned char                                      m_eEndDirection;                                  		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmDirectionTransitionAnim;                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendByDirection_WithTransitions.DirectionalProfile
// 0x0014
struct FDirectionalProfile
{
	unsigned char                                      m_eStartDirection;                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDirectionTransitionAnimSet >       m_directionTransitionAnimSets;                    		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimBlendByEmote.EmoteBlendMap
// 0x0008
struct FEmoteBlendMap
{
	unsigned char                                      EmoteOverride;                                    		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChildOverride;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendByFire.DeviceParameters
// 0x0014
struct FDeviceParameters
{
	struct FString                                     SlotName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bForceReplayOnBuildup : 1;                        		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceReplayOnStartFire : 1;                      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldInterruptIfStopped : 1;                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bShouldInterruptIfInterrupted : 1;                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bShouldInterruptIfJumping : 1;                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct TgGame.TgMarkComponent.TargetMark
// 0x0020
struct FTargetMark
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTimeLeft;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nNumMarks;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class UTgEffectGroup* >                    AppliedEffects;                                   		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn_Freya.FreyaExplodingInhand
// 0x0008
struct FFreyaExplodingInhand
{
	int                                                nInhandExplodeDevId;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nInhandExplodeFiringInstance;                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_G84.MirrorImageData
// 0x0010
struct FMirrorImageData
{
	class UTgSkeletalMeshComponent*                    Mesh;                                             		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTgAnimBlendByG84MirrorImageState*           Node;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseTransitionAnimSet
// 0x000C
struct Fm_PhaseTransitionAnimSet
{
	int                                                m_TransitionToPhase;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_TransitionAnimName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseProfile
// 0x0014
struct Fm_PhaseProfile
{
	int                                                m_Phase;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct Fm_PhaseTransitionAnimSet >         m_TransitionAnimSets;                             		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimBlendByPosture.PostureTransitionOverride
// 0x000E
struct FPostureTransitionOverride
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              BlendTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      StartPosture;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      EndPosture;                                       		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_TransitionAnimSet
// 0x000C
struct Fm_TransitionAnimSet
{
	unsigned char                                      m_TransitionToPosture;                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_TransitionAnimName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_PostureProfile
// 0x0018
struct Fm_PostureProfile
{
	unsigned char                                      m_Posture;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct Fm_TransitionAnimSet >              m_TransitionAnimSets;                             		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_bResetBlendByFireToIdleOnTransition : 1;        		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgPawn_Racer.RacerAnimInstanceData
// 0x0008
struct FRacerAnimInstanceData
{
	unsigned char                                      Current;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Racer.RacerSoundData
// 0x0010
struct FRacerSoundData
{
	class USoundCue*                                   Cue;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LastTriggerTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      ConditionMet : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAnimBlendByRacerAction.RacerActionAnimSlotData
// 0x0028
struct FRacerActionAnimSlotData
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ActionName;                                       		// 0x0008 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      ReplayOnRetrigger : 1;                            		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      CanBeInterrupted : 1;                             		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< unsigned char >                            InterruptExceptions;                              		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CooldownTime;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTriggerTime;                                  		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TgGame.TgAnimBlendBySkin.SkinChildInfo
// 0x0008
struct FSkinChildInfo
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChildIndex;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendBySpeed.ResetSynchGroup
// 0x0028
struct FResetSynchGroup
{
	struct FName                                       AnimNodeSynchName;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSynch*                              SynchNode;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       GroupName;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ResetChannels;                                    		// 0x0018 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimMetaData_BellonaFlagMesh.FlagMeshParameterKeyFrame
// 0x0008
struct FFlagMeshParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_BellonaWeaponSetOverride.WeaponSetParameterKeyFrame
// 0x0008
struct FWeaponSetParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_MICScalarParameter.MICScalarParameterKeyFrame
// 0x0008
struct FMICScalarParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_MICScalarParameter.MICScalarParameterSkinIdOverride
// 0x0024
struct FMICScalarParameterSkinIdOverride
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MICParameterName;                                 		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMICScalarParameterKeyFrame >       KeyFrames;                                        		// 0x0014 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorParameter.MICVectorParameterKeyFrame
// 0x0020
struct FMICVectorParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FVector4                                    TargetValue;                                      		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorParameter.MICVectorParameterSkinIdOverride
// 0x0024
struct FMICVectorParameterSkinIdOverride
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MICParameterName;                                 		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMICVectorParameterKeyFrame >       KeyFrames;                                        		// 0x0014 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorPlusSocket.MICVectorSocketKeyFrame
// 0x0030
struct FMICVectorSocketKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FVector4                                    TranslationTargetValue;                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVector4                                    RotationTargetValue;                              		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorPlusSocket.MICVectorSocketSkinIdOverride
// 0x0038
struct FMICVectorSocketSkinIdOverride
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TranslationMICParameterName;                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RotationMICParameterName;                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                TranslationMaterialIndex;                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RotationMaterialIndex;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMICVectorSocketKeyFrame >          KeyFrames;                                        		// 0x0028 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct TgGame.TgAnimMetaData_SkelControl_BoneScale_KeyFrame.BoneScaleKeyFrameSkinIdOverride
// 0x0028
struct FBoneScaleKeyFrameSkinIdOverride
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             SkelControlNameList;                              		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTimeModifier >                     KeyFrames;                                        		// 0x0018 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct TgGame.TgAnimMetaData_SkinLevel.SkinLevelParameterKeyFrame
// 0x0010
struct FSkinLevelParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fVXGStartTime;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNoLevelChange : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_WithMesh.WithMeshKeyFrame
// 0x0008
struct FWithMeshKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Active : 1;                                       		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_WithMesh.WithMeshMetaData
// 0x0034
struct FWithMeshMetaData
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nMeshId;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPAC : 1;                                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       nmFullBodyName;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmSocketName;                                     		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseSocketLoc : 1;                                		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseSocketRot : 1;                                		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIgnoreOwnerHidden : 1;                           		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	TArray< struct FWithMeshKeyFrame >                 KeyFrames;                                        		// 0x0024 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimNodeAimOffset_Skinned.AimSkinProfile
// 0x000C
struct FAimSkinProfile
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmProfile;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgPawn_Mulan.MulanA03AnimData
// 0x000C
struct FMulanA03AnimData
{
	unsigned char                                      m_eAnimState;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fGrappleTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nPlayAnim;                                      		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildBlendInfo
// 0x0008
struct FChildBlendInfo
{
	unsigned char                                      m_PhysicsState;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fBlendTime;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildrenBlendInfo
// 0x0014
struct FChildrenBlendInfo
{
	unsigned char                                      m_PhysicsState;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FChildBlendInfo >                   m_ChildBlendInfo;                                 		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimNodeBlendList_Bacchus_Inebriation.InebriationLevelInfo
// 0x0004
struct FInebriationLevelInfo
{
	float                                              Percentage;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgPawn_HouYiSkin.HouYiPetInfo
// 0x001B
struct FHouYiPetInfo
{
	struct FPointer                                    m_pAmPetSetup;                                    		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_fPetSpawnSecs;                                  		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fVisibilityDelay;                               		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nBotId;                                         		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nMeshId;                                        		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_ePetType;                                       		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_ePetEvolution;                                  		// 0x0019 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eEqpSlot;                                       		// 0x001A (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgPawn_HouYiSkin.HouYiPetAnimTypeData
// 0x000C
struct FHouYiPetAnimTypeData
{
	unsigned char                                      m_eAnimTypes[ 0x8 ];                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nAnimCount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_HouYiSkin.HouYiPetAnimMetaData
// 0x0030
struct FHouYiPetAnimMetaData
{
	struct FHouYiPetAnimTypeData                       m_petAnimTypeData[ 0x4 ];                         		// 0x0000 (0x0030) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Thoth.Dev1GodHitBy
// 0x000C
struct FDev1GodHitBy
{
	class ATgPawn*                                     m_HitGod;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nHits;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Thoth.SpeedGlyphProjTrackingData
// 0x000C
struct FSpeedGlyphProjTrackingData
{
	int                                                Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Device;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FiringInstance;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Thoth.SpeedGlyphProjEventData
// 0x000C
struct FSpeedGlyphProjEventData
{
	int                                                ProjId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ShooterDevId;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNodeEmoteSequence_WithMesh.EMOTE_MESH_INFO
// 0x001C
struct FEMOTE_MESH_INFO
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                MeshId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FullBodyName;                                     		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIgnoreOwnerHidden : 1;                         		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseSocketRelativeLoc : 1;                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bUseSocketRelativeRot : 1;                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bPlayEmoteAfterSpawn : 1;                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bIgnoreOwnerRotation : 1;                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      c_bActive : 1;                                    		// 0x0018 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
};

// ScriptStruct TgGame.TgAnimNodeEmoteSequence_WithPAC.EMOTE_PAC_INFO
// 0x001C
struct FEMOTE_PAC_INFO
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                MeshId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BoneName;                                         		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      c_bActive : 1;                                    		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct TgGame.TgAnimNodeRandom.TgRandomAnimInfo
// 0x0024
struct FTgRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMin;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMax;                                     		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCanRepeat : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LoopCount;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCallOnAnimEndOnParent : 1;                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bChooseNewNodeOnAnimEnd : 1;                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FVector2D                                   m_ChildActiveTime;                                		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nChildIndex;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNodeSequence_WithMultiMesh.AnimMeshEntry
// 0x0018
struct FAnimMeshEntry
{
	int                                                m_nMeshId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmSocketName;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmFullBodyName;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bUseSocketRelativeLoc : 1;                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseSocketRelativeRot : 1;                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bIgnoreOwnerHidden : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bIgnoreOwnerRotation : 1;                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeSequence_WithPAC.ANIM_PAC_INFO
// 0x0018
struct FANIM_PAC_INFO
{
	int                                                MeshId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BoneName;                                         		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      c_bActive : 1;                                    		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct TgGame.TgAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeSlot.FullbodyMeshEntry
// 0x0020
struct FFullbodyMeshEntry
{
	TArray< struct FName >                             m_nmUseDuringAnims;                               		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nmSocketName;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmMeshFullbodyName;                             		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeSlot.TgAnimSlotMeshMap
// 0x0018
struct FTgAnimSlotMeshMap
{
	int                                                m_nMeshId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FFullbodyMeshEntry >                m_AnimMap;                                        		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      c_bMeshActive : 1;                                		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct TgGame.TgAnimNodeSlot.TgAnimSlotPACMap
// 0x0020
struct FTgAnimSlotPACMap
{
	int                                                m_nMeshId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmBoneName;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             m_AnimList;                                       		// 0x000C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      c_bPACActive : 1;                                 		// 0x001C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceInfo
// 0x000C
struct FCachedTgAnimNodeStanceInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgAnimNodeStance*                           Node;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceTransitionInfo
// 0x000C
struct FCachedTgAnimNodeStanceTransitionInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgAnimNodeStanceTransition*                 Node;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNotify_PlayParticleEffect_Skinned.PPE_Skin
// 0x0018
struct FPPE_Skin
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PSTemplate;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PSTemplateLobby;                                  		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNotify_Sound.PSE_Skin
// 0x0020
struct FPSE_Skin
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPreventRepeat : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fCueDuration;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPreventGroupRepeat : 1;                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nCueGroup;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNotify_Sound_NikeUltSounds.PSE_Skin_Nike
// 0x0028
struct FPSE_Skin_Nike
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USoundCue* >                         SoundCues;                                        		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bPreventRepeat : 1;                               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fCueDuration;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPreventGroupRepeat : 1;                          		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nCueGroup;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimTurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimTurnInPlace_Player.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgArenaManager.SpectatorTargets
// 0x0010
struct FSpectatorTargets
{
	TArray< class ATgBotFactory* >                     TowerFactories;                                   		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgArenaManager.ArenaTeamSpawns
// 0x0014
struct FArenaTeamSpawns
{
	int                                                nTeamNum;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ATgTeamPlayerStart* >                SpawnPoints;                                      		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgArenaManager.ArenaFactoryInfo
// 0x0028
struct FArenaFactoryInfo
{
	class ATgBotFactory*                               Factory;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsesTeamTF : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nTeamOverride;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSetsTF : 1;                                      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nFactoryTF;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      FactoryModItems;                                  		// 0x0018 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgArenaManager.ArenaFactories
// 0x0014
struct FArenaFactories
{
	int                                                nEncounterType;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FArenaFactoryInfo >                 Factories;                                        		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgArenaManager.PlayerEffects
// 0x0024
struct FPlayerEffects
{
	unsigned long                                      bAllTeams : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      AppliedTeams;                                     		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      PlayerModItems;                                   		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgArenaManager.ArenaEffects
// 0x0014
struct FArenaEffects
{
	int                                                nEncounterId;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPlayerEffects >                    EncounterEffects;                                 		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgArenaManager.ArenaTFMap
// 0x0008
struct FArenaTFMap
{
	int                                                nTfNum;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nArenaTeamNum;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgBotFactory.SpawnQueueEntry
// 0x0018
struct FSpawnQueueEntry
{
	float                                              fSpawnTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nBotId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nSpawnTableDetailId;                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       BehaviorTreeOverride;                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgBotFactory.BuffMap
// 0x0010
struct FBuffMap
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nBuffId;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmAnimOverride;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory.TeamBuffMap
// 0x000C
struct FTeamBuffMap
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nTeamBuffId;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fUseAfterGameTime;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory.FactorySpawnModifier
// 0x000C
struct FFactorySpawnModifier
{
	int                                                nSpawnModifierItemId;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fSpawnModifierDuration;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nModifierStacks;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgBotFactory.AccoladeMap
// 0x0018
struct FAccoladeMap
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nAccoladeMessage;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTracksObjectiveSteal : 1;                        		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverrideFriendlyMsg : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                nSpectatorMessage;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nEnemyMessage;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nFriendlyMessage;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory.RewardModifiers
// 0x0028
struct FRewardModifiers
{
	float                                              fUseAfterTime;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fUseUntilTime;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      TaskForceList;                                    		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fGoldMultStart;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGoldMultEnd;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fXPMultStart;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fXPMultEnd;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.LeashedBotEntry
// 0x0010
struct FLeashedBotEntry
{
	struct FName                                       EntryName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nBotId;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nBotSkin;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.IndicatorEntry
// 0x001C
struct FIndicatorEntry
{
	class UMaterialInstanceConstant*                   IndicatorMIC;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MinimapType;                                      		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInstanceConstant* >         InWorldMICs;                                      		// 0x000C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.LeashedBotQueueEntry
// 0x0010
struct FLeashedBotQueueEntry
{
	struct FName                                       EntryName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BehaviorOverride;                                 		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.LeashedBotQueue
// 0x001C
struct FLeashedBotQueue
{
	TArray< struct FLeashedBotQueueEntry >             SpawnQueue;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fRespawnDelay;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nVisualOverrideIndex;                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fUseAfterTime;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.QueueProfile
// 0x0030
struct FQueueProfile
{
	unsigned char                                      eSelectionType;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FLeashedBotQueue >                  ProfileQueues;                                    		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fUseAfterTime;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      nCustomOrder;                                     		// 0x0018 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nCustomOrderIndex;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nStartingQueue;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.BotEntryData
// 0x0018
struct FBotEntryData
{
	struct FName                                       EntryName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nBaseBotId;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nBaseBotSkin;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSuperBotId;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSuperBotSkin;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.QueueEntryData
// 0x0010
struct FQueueEntryData
{
	TArray< struct FName >                             Bots;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.SpawnQueueData
// 0x0014
struct FSpawnQueueData
{
	float                                              fUseAfterTime;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FQueueEntryData >                   SpawnEntries;                                     		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.AdditionalBotData
// 0x000C
struct FAdditionalBotData
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nQueueIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCameraModule_Action.CameraZoomState
// 0x000C
struct FCameraZoomState
{
	float                                              fZoomTarget;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockZoomAfter : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgCameraModule_Action.CameraTranslationState
// 0x0020
struct FCameraTranslationState
{
	struct FVector                                     AbsoluteTranslationVector;                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     RelativeTranslationVector;                        		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockAbsoluteTranslationAfter : 1;                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgCameraModule_Action.CameraShakeState
// 0x003C
struct FCameraShakeState
{
	float                                              fTimeTillStart;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Epicenter;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fShakeScale;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FROscillator                                RotOscillation;                                   		// 0x0018 (0x0024) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_MeshSwapper.StanceInfo
// 0x0038
struct FStanceInfo
{
	int                                                nMeshId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      nDeviceIds;                                       		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nDeviceEqPoints;                                  		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       fnMeshSwapBodyAnim;                               		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoesFullBodyOnSwap : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_MeshSwapper.CachedStanceObject
// 0x0038
struct FCachedStanceObject
{
	int                                                nBaseMeshId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    StanceMeshAssembly;                               		// 0x0004 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    StanceDestroyedMeshAssembly;                      		// 0x000C (0x0008) [0x0000000000001000]              ( CPF_Native )
	TArray< class ATgDevice* >                         StanceDevices;                                    		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       fnMeshSwapBodyAnim;                               		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoesFullBodyOnSwap : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Depthzy.CachedParticleSystem
// 0x0024
struct FCachedParticleSystem
{
	class UParticleSystemComponent*                    m_psc;                                            		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     m_vTranslation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rRotation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_bAbsoluteTranslation : 1;                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAbsoluteRotation : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgCameraModule_Depthzy.DepthzyCameraSetup
// 0x002C
struct FDepthzyCameraSetup
{
	struct FVector                                     m_vAbsoluteOffset;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vScaledByZoomOffset;                            		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_fOffsetInterpSpeed;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fZoomInterpSpeed;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fZoomStep;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fZoomMax;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fZoomMin;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCameraModule_Depthzy_Dead.DepthzyDeadCameraSetup
// 0x0010
struct FDepthzyDeadCameraSetup
{
	float                                              m_fZoom;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fOffsetZ;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fPitchMin;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fPitchMax;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCameraModule_SpectatorOverview.CameraPitchInfo
// 0x0008
struct FCameraPitchInfo
{
	float                                              ZHeight;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCapturePoint.CapturePointTouchingData
// 0x0008
struct FCapturePointTouchingData
{
	int                                                TaskforceNum;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TouchingCount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.sSimProjectileFireInfo
// 0x0034
struct FsSimProjectileFireInfo
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vDirectionMunged;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                nFlashProjectile;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nOwnerFireModeId;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nActorId;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fGeneric1;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fGeneric2;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      ActorType;                                        		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      byTiDi;                                           		// 0x002D (0x0001) [0x0000000000000000]              
	unsigned char                                      byLocalTiDi;                                      		// 0x002E (0x0001) [0x0000000000000000]              
	unsigned long                                      bClientProcessed : 1;                             		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPlayerController.sDeferredProjectileFireInfo
// 0x0038
struct FsDeferredProjectileFireInfo
{
	struct FsSimProjectileFireInfo                     Info;                                             		// 0x0000 (0x0034) [0x0000000000000000]              
	int                                                nDeferCount;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Player.SocialEmoteInfo
// 0x000C
struct FSocialEmoteInfo
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nVgsId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseable : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgGameTipManager.GameTipInfo
// 0x0024
struct FGameTipInfo
{
	int                                                nTipId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelfSuppress : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fRemainingTime;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fTimeOnTop;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRemoveOnTimer : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDismissed : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWaitForDismiss : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisplayAlways : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPopupDisplay : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	class USoundCue*                                   PopupSoundCue;                                    		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.InventoryChangeFlags
// 0x0004
struct FInventoryChangeFlags
{
	unsigned long                                      bDevice : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bComponent : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEquipped : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDeviceFailed : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct TgGame.TgPlayerController.FLOOD
// 0x0008
struct FFLOOD
{
	int                                                m_nCount;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fLastUpdate;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.TG_LAST_PURCHASE
// 0x0008
struct FTG_LAST_PURCHASE
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.AbilityLevelInfo
// 0x0008
struct FAbilityLevelInfo
{
	int                                                Ability[ 0x2 ];                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame.TgPlayerWardSkins
// 0x0014
struct FTgPlayerWardSkins
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      wardSkinIds;                                      		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgGame.TgPlayerGlobalEmoteSkins
// 0x0014
struct FTgPlayerGlobalEmoteSkins
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      globalEmoteSkinIds;                               		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgGame.TgAIBotPlayersToSpawn
// 0x0020
struct FTgAIBotPlayersToSpawn
{
	struct FString                                     fsName;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nBotId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nTaskForceId;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSpawnTableDetailId;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFakeName : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgCharmComponent.FireChainInfo
// 0x0010
struct FFireChainInfo
{
	int                                                nMode;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fPreFireDelay;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fPostFireDelay;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nAttackType;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgClientSettings.TgListLastSeen
// 0x0030
struct FTgListLastSeen
{
	struct FString                                     sStoreDeals;                                      		// 0x0000 (0x0010) [0x0000000000444001]              ( CPF_Edit | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     sStoreChests;                                     		// 0x0010 (0x0010) [0x0000000000444001]              ( CPF_Edit | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     sStoreGodsSkins;                                  		// 0x0020 (0x0010) [0x0000000000444001]              ( CPF_Edit | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgTimerManager.TGT_REG_LINK
// 0x0018
struct FTGT_REG_LINK
{
	struct FPointer                                    NextLink;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     RegObject;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	class UFunction*                                   RegFunction;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTimerManager.TgTimerData
// 0x0030
struct FTgTimerData
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      byTimer;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fStartTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fRemaining;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTimerTimeDilation;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRepeat : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPausedByGame : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FTGT_REG_LINK                               CallbackRegistry;                                 		// 0x0018 (0x0018) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice.ValidTargetInfo
// 0x0010
struct FValidTargetInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgDeviceFire*                               TargetEffectMode;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice.RollingLineAttack
// 0x003C
struct FRollingLineAttack
{
	struct FVector                                     vStartLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rStartRotation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              fStartTime;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fLastUpdatePercent;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseProximityDistance : 1;                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class AActor* >                            HitActors;                                        		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgCollisionProxy_FX.ProxyFxInfo
// 0x0010
struct FProxyFxInfo
{
	class UTgSpecialFx*                                Fx;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCollisionProxy_CH08.CH08_PAWN_LOCATION_HISTORY
// 0x0018
struct FCH08_PAWN_LOCATION_HISTORY
{
	class ATgPawn*                                     trackedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     vPreviousLocation;                                		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bDeleteAfterUpdate : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A04.YemojaWallActorHitInfo
// 0x0010
struct FYemojaWallActorHitInfo
{
	class AActor*                                      m_Actor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class UPrimitiveComponent*                         m_HitComp;                                        		// 0x0008 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A04.YemojaOverlappingActor
// 0x001C
struct FYemojaOverlappingActor
{
	class AActor*                                      m_Actor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     m_vNormal;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	class ATgCollisionProxy_Yemoja_A04*                m_WallProxy;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpectatorController.BroadcastChannel
// 0x0008
struct FBroadcastChannel
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpectatorController.SpectatorBookmark
// 0x0030
struct FSpectatorBookmark
{
	class AActor*                                      ViewTarget;                                       		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ViewMode;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FTPOV                                       POV;                                              		// 0x000C (0x0024) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpectatorDirector.ViewTargetInfo
// 0x0038
struct FViewTargetInfo
{
	class ATgPawn*                                     Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgPawn_Tower*                               ClosestEnemyTower;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Rating;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DistSqToClosestEnemy;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DistSqToClosestFriend;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DistSqToFireGiant;                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DistSqToGoldFury;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DistSqToEnemyTower;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              DistSqToEnemyMinotaur;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              DistSqToEnemyPhoenix;                             		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                NumCloseEnemies;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                NumCloseFriends;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDemoRecSpectator.SpectatorCommand
// 0x000C
struct FSpectatorCommand
{
	int                                                nFrame;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseIndex : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fSpeed;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDemoRecSpectator.DilationData
// 0x0014
struct FDilationData
{
	float                                              fValue;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgDeploy_AutoPortal.PortalExcludeInfo
// 0x000C
struct FPortalExcludeInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTimeLeft;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_AutoPortal.PortalPermanentExcludeInfo
// 0x000C
struct FPortalPermanentExcludeInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nTimesUsed;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_MovingEffectVolume.InterpAnchor
// 0x0024
struct FInterpAnchor
{
	struct FVector                                     LastLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bExists : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Odin_Spears_V2.OdinTouchedTarget
// 0x0018
struct FOdinTouchedTarget
{
	class ATgPawn*                                     m_Pawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     m_vLastValidOctogonLoc;                           		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_bIsTouching : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Odin_Spears_V2.OdinRingNormal
// 0x0018
struct FOdinRingNormal
{
	struct FVector                                     m_vLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Odin_Spears_V2.OdinDeferredTarget
// 0x000C
struct FOdinDeferredTarget
{
	class ATgPawn*                                     m_Pawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bHasTicked : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Persephone_A02.PersephoneA02DeployableData
// 0x000C
struct FPersephoneA02DeployableData
{
	float                                              m_fTime;                                          		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class ATgDevice*                                   m_SubDevice;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Persephone_A02.PersephoneA02Stage3Defaults
// 0x0020
struct FPersephoneA02Stage3Defaults
{
	float                                              m_fVisionRange;                                   		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fBiteDamageRange;                               		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fBiteAttackRange;                               		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMovementRange;                                 		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMovementSpeed;                                 		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fConeAttackAngle;                               		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fConeAttackAngleOffset;                         		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fChaseTime;                                     		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgDeploy_Persephone_A04.PersephoneA04ClientDeployableData
// 0x0018
struct FPersephoneA04ClientDeployableData
{
	int                                                nTetheredPawnId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgStaticMeshComponent*                      TetherMeshComponent;                              		// 0x0004 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     vLastValidLocation;                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Persephone_A04.PersephoneA04DeployableData
// 0x0020
struct FPersephoneA04DeployableData
{
	int                                                nTetheredPawnId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTetherAttachProgressPercentage;                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class ATgDeploy_Persephone_A04_Bounds*             BoundWallComponent;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nHitApplied;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nIsImmune;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nIsOutOfRange;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasSlowDebuff : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Racer_TargetAhead.DelayedImpactByPlace
// 0x000C
struct FDelayedImpactByPlace
{
	class ATgPawn_Racer*                               racerTarget;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nPlacesAhead;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTiDiState.TidiStackItem
// 0x0008
struct FTidiStackItem
{
	class UTgEffectGroup*                              m_EffectGroup;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTiDiState.TiDiTransition
// 0x0008
struct FTiDiTransition
{
	float                                              m_fInterpTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fTiDiDelta;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTiDiState.TiDiSimulatedLinePath
// 0x0041
struct FTiDiSimulatedLinePath
{
	struct FTiDiTransition                             m_Transitions[ 0x8 ];                             		// 0x0000 (0x0040) [0x0000000000000000]              
	unsigned char                                      m_nTiDiTransitionCount;                           		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Wizard_A01.WizardA01LinkInfo
// 0x0054
struct FWizardA01LinkInfo
{
	struct FTiDiSimulatedLinePath                      m_TiDiTransitionRegions;                          		// 0x0000 (0x0044) [0x0000000000000000]              
	struct FVector                                     m_vTargetLocation;                                		// 0x0044 (0x000C) [0x0000000000000000]              
	float                                              m_fTargetColRadius;                               		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardTypeTracker
// 0x000C
struct FWizardTypeTracker
{
	unsigned char                                      m_wtDefault;                                      		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_wtCurrent;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_wtPrevious;                                     		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_wtNext;                                         		// 0x0003 (0x0001) [0x0000000000000000]              
	int                                                m_nForceUpdate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInTransition : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bChangedStance : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A03.RiptideTouchedPawns
// 0x000C
struct FRiptideTouchedPawns
{
	class ATgPawn*                                     m_Pawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bLaunchLocked : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasLaunched : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A03.CollisionBoxBounds
// 0x000C
struct FCollisionBoxBounds
{
	float                                              m_fLength;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fWidth;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fHeight;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Yemoja_B01.FractureStageInfo
// 0x0008
struct FFractureStageInfo
{
	unsigned long                                      m_bWarningActivated : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fTimeToDeploy;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_AhMuzenCab.HoneyVictimInfo
// 0x0014
struct FHoneyVictimInfo
{
	int                                                NumStacks;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     VictimPawn;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	class UTgDeviceFire*                               HoneyFireMode;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Camazotz_Essence.CamazotzTouchData
// 0x000C
struct FCamazotzTouchData
{
	class ATgPawn_Camazotz*                            Camazotz;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fTimeSinceLastDrink;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_CTF_Flag.CarrierAbilityData
// 0x0038
struct FCarrierAbilityData
{
	class ATgPawn*                                     CarrierPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   OriginalInhandDevice;                             		// 0x0008 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   OriginalRelic01Device;                            		// 0x0010 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   OriginalRelic02Device;                            		// 0x0018 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   ChargeDevice;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   MeleeDevice;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	class ATgDevice*                                   ThrowDevice;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_CTF_Flag.ThrowLocationData
// 0x001C
struct FThrowLocationData
{
	int                                                ThrowCount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     ResultLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ResultRotation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Ganesha_Dev4.DamageInfo
// 0x0010
struct FDamageInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeToReDamage;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      TouchingProxy : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeployable_Heimdallr_A04.HeimA04Meshes
// 0x0040
struct FHeimA04Meshes
{
	class UMeshComponent*                              c_Mesh[ 0x2 ];                                    		// 0x0000 (0x0010) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTgSpecialFx*                                c_BarrierFX;                                      		// 0x0010 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTgSpecialFx*                                c_BarrierBreakFX;                                 		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_vSectionStart;                                  		// 0x0020 (0x000C) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nMeshId[ 0x2 ];                                 		// 0x002C (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nBarrierFXId;                                   		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nBarrierBreakFXId;                              		// 0x0038 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_bIsVisible : 1;                                 		// 0x003C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct TgGame.TgDeployable_Heimdallr_A04.HeimA04SectionTimings
// 0x000C
struct FHeimA04SectionTimings
{
	float                                              fTotalTime;                                       		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              fPersistTime;                                     		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              fOutroTime;                                       		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgDeployable_Hercules_HercSmash.HercSmashHitInfo
// 0x001C
struct FHercSmashHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInKnockupArea : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeployable_Jorm_ArcV2.JormArcContainer
// 0x0054
struct FJormArcContainer
{
	struct FInterpCurveVector                          cvSpline;                                         		// 0x0000 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FInterpCurveFloat                           cfRate;                                           		// 0x0014 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ATgSplineLoftActorSpawnable* >       ArcMeshes;                                        		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fCurPerc;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              fCurInVal;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	struct FVector                                     vRight;                                           		// 0x0040 (0x000C) [0x0000000000000000]              
	class ATgSkeletalMeshActorSpawnable*               masHeadMesh;                                      		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Jormungandr_PoisonCloud.ProjSeekLocations
// 0x0018
struct FProjSeekLocations
{
	struct FVector                                     m_vSeekLoc1;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vSeekLoc2;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Olorun_Dev2.OlorunSun_TrackedPlayerInfo
// 0x000C
struct FOlorunSun_TrackedPlayerInfo
{
	class ATgPawn*                                     m_Player;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nTimesHit;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_PortalEntrance.PortalTimer
// 0x000C
struct FPortalTimer
{
	class ATgPawn*                                     P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Racer_Pickup.RacerLootData
// 0x0008
struct FRacerLootData
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Racer_Pickup.RacerLootSet
// 0x0014
struct FRacerLootSet
{
	TArray< struct FRacerLootData >                    Data;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalWeight;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Thoth_SpeedGlyph.SpeedGlyphImpactFXData
// 0x0014
struct FSpeedGlyphImpactFXData
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                ShooterDevId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Tsukuyomi_A03.MoveDamageInfo
// 0x0020
struct FMoveDamageInfo
{
	class ATgDeployable_Tsukuyomi_A03*                 m_a03Deploy;                                      		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class ATgPawn*                                     m_trackedPawn;                                    		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     s_vPreviousLocation;                              		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              s_fDistanceMoved;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDepthzy_IStateMeshProcessor.DepthzyIStateAssetMap
// 0x0018
struct FDepthzyIStateAssetMap
{
	class ATgPawn_Depthzy*                             m_depthzy;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgMapTracker_Depthzy_IState*                m_mapTracker;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgMeshPool_Depthzy_IState*                  m_meshPool;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_ChainedMelee.AttackModeInfo
// 0x000C
struct FAttackModeInfo
{
	int                                                nAttackNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nMode;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fRefireTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_ActiveMode.ActiveModeInfo
// 0x0008
struct FActiveModeInfo
{
	int                                                ActiveMode;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AttackCounter;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Apep_AcidSpray.DeployTouchStatus
// 0x000C
struct FDeployTouchStatus
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumTouches;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_ArcingBeam.ArcTargetSequence
// 0x0034
struct FArcTargetSequence
{
	class AActor*                                      s_PreviousArcTarget;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class AActor* >                            s_PreviousTargets;                                		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgDeviceFire_ArcingBeam*                    s_ArcFiremode;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                s_nFiringInstance;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                s_nJumpsRemaining;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              s_fPersistPulseTime;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              s_fArcRange;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              s_fTriggerTime;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_BabaYaga_A02.BabaYagaPotionData
// 0x0028
struct FBabaYagaPotionData
{
	int                                                m_nIngredients[ 0x3 ];                            		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nTotalIngredients;                              		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nSpawningFireMode;                              		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nArrayIndex;                                    		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nPotionId;                                      		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nBrewerFiringInstance;                          		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eEqpPoint;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bEquipped : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDevice_WarningDeployable.WarningDeployableInfo
// 0x0010
struct FWarningDeployableInfo
{
	class ATgDeployable*                               WarningDeployable;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgProjectile*                               Proj;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_BastetV2.BastetSphinxVisualData
// 0x0011
struct FBastetSphinxVisualData
{
	class UTgSkeletalMeshComponent*                    m_Mesh;                                           		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTgAnimNodeSlot*                             m_FullBodyNode;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_eSphinxPosition;                                		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Cerberus_Dev1.TerrifyingVisageHitInfo
// 0x0010
struct FTerrifyingVisageHitInfo
{
	class AActor*                                      HitTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nTimesHit;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Xbalanque_PoisonDarts.FanInformation
// 0x0010
struct ATgDevice_Xbalanque_PoisonDarts_FFanInformation
{
	int                                                nFiringInstanceId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                nHits;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_CH05_LokiExsanguinate.ExsanguinateData
// 0x000C
struct FExsanguinateData
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                bleedStacks;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_CH05_SunderEarth.SunderEarthDeployTouchStatus
// 0x000C
struct FSunderEarthDeployTouchStatus
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumTouches;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_CH05_Surtr_FireSpinAndTrail.SurtrDeployTouchStatus
// 0x000C
struct FSurtrDeployTouchStatus
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumTouches;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_CH06_TurtleSpin.TurtleSpinDeployTouchStatus
// 0x000C
struct FTurtleSpinDeployTouchStatus
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumTouches;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_CuChulainn_Dev2.CuChulainnVentSteamHits
// 0x000C
struct FCuChulainnVentSteamHits
{
	class AActor*                                      mTarget;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nNumHits;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Danzaburou_A01.RicochetTargetingInfo
// 0x0028
struct FRicochetTargetingInfo
{
	struct FVector                                     m_vTraceStart;                                    		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_vTraceEnd;                                      		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fDistanceTraveledToStart;                       		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMaxCollisionSize;                              		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMinCollisionSize;                              		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMaxRange;                                      		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgDevice_Danzaburou_A01_V2.RicochetTargetingInfoV2
// 0x0028
struct FRicochetTargetingInfoV2
{
	struct FVector                                     m_vTraceStart;                                    		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_vTraceEnd;                                      		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fCollisionRadius;                               		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nDeployableIndex;                               		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nRicochetIndex;                                 		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_bIsLastRicochet : 1;                            		// 0x0024 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct TgGame.TgDevice_Depthzy_A04_Sub.DepthzyA04AuraTormentTargetTimer
// 0x000C
struct FDepthzyA04AuraTormentTargetTimer
{
	class ATgPawn*                                     m_pawnTarget;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fTimeTillTormentApplies;                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Dialogue.DialogueLineInfo
// 0x0010
struct FDialogueLineInfo
{
	int                                                m_nEffectGroupId;                                 		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nSituationalDialogueType;                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nSpeakerBotId;                                  		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fLifeTime;                                      		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgDevice_Dialogue.DialogueInfo
// 0x003C
struct FDialogueInfo
{
	TArray< struct FDialogueLineInfo >                 m_Lines;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RequiredSpeakerIds;                             		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       m_nmDamageTypeClass;                              		// 0x0020 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fPctChanceTrigger;                              		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMinInGameTriggerTime;                          		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMaxInGameTriggerTime;                          		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fTotalLifeTime;                                 		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_bHasBeenTriggeredOnce : 1;                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardEqpPair
// 0x0004
struct FWizardEqpPair
{
	unsigned char                                      m_eEqpKey;                                        		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eEqpOverride;                                   		// 0x0001 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_padding[ 0x2 ];                                 		// 0x0002 (0x0002) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardEqpSet
// 0x0010
struct FWizardEqpSet
{
	TArray< struct FWizardEqpPair >                    m_pairs;                                          		// 0x0000 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardA03Fx
// 0x0010
struct FWizardA03Fx
{
	class UTgSpecialFx*                                c_EnterFx;                                        		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTgSpecialFx*                                c_ExitFx;                                         		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgDevice_Dialogue_Arthurian.MerlinDialogueRestriction
// 0x0009
struct FMerlinDialogueRestriction
{
	struct FName                                       m_nmDamageTypeClass;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_wtWizardType;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_FireGiant_RagnarokFury.RFPotentialTargetData
// 0x000C
struct FRFPotentialTargetData
{
	class ATgPawn*                                     TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Ganesha_Dev2_V2.AppliedEnemyInfo
// 0x000C
struct FAppliedEnemyInfo
{
	class AActor*                                      EnemyTarget;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      InSlice : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDevice_Heimdallr_PSV.HeidallrPSVTarget
// 0x0009
struct FHeidallrPSVTarget
{
	class ATgPawn*                                     m_pawnTarget;                                     		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_byPSVStateFlags;                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Hydra_Arc.DEP_TOUCH_INFO
// 0x0018
struct FDEP_TOUCH_INFO
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class ATgDeployable* >                     Deps;                                             		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgDevice_Janus_DeathGate.DeathGateHitInfo
// 0x0010
struct FDeathGateHitInfo
{
	class AActor*                                      HitTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nTimesHit;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Janus_A02_V2.DeathGateTargetHits
// 0x000A
struct FDeathGateTargetHits
{
	class AActor*                                      m_aHitTarget;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_nSinusoidHitCount;                              		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nMiddleHitCount;                                		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Janus_A02_V2.DeathGateFiringInstanceTargetHits
// 0x0014
struct FDeathGateFiringInstanceTargetHits
{
	TArray< struct FDeathGateTargetHits >              m_targetHits;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nFiringInstance;                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Jumong_FanOfArrows.FanInformation
// 0x0010
struct ATgDevice_Jumong_FanOfArrows_FFanInformation
{
	int                                                FanId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                Hits;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_RadialSweep_MultiHit.MultiHitTrackingInfo
// 0x000C
struct FMultiHitTrackingInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nHitCounter;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgMulanEvolutionInterface.MulanEvolutionXPLevels
// 0x000C
struct FMulanEvolutionXPLevels
{
	float                                              m_fEvolution1XPThreshold;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fEvolution2XPThreshold;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fEvolution3XPThreshold;                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Neith_BrokenWeave.WeaveSpawnInfo
// 0x0010
struct FWeaveSpawnInfo
{
	class ATgDeployable_Neith_BrokenWeave*             Weave;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     Source;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_NeZha.WindFireWheelsQteStatus
// 0x0020
struct FWindFireWheelsQteStatus
{
	int                                                HitTiming;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FadeEndTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              CurrentEnergy;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HitStatus;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     ScreenLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bShown : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDevice_Nike_Dev2_V2.ShieldTouchInfo
// 0x000C
struct FShieldTouchInfo
{
	class AActor*                                      m_TouchedActor;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fTimeRemaining;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_NuWa_Passive.CrystalInfo
// 0x0018
struct FCrystalInfo
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eType;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fTimer;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fLifeTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Ratatoskr_Dart.PreviousChargeInfo
// 0x0014
struct FPreviousChargeInfo
{
	TArray< class AActor* >                            HitActors;                                        		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              fTimer;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Scylla_Num3.TargetFxInfo
// 0x0010
struct FTargetFxInfo
{
	class ATgPawn*                                     Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                Fx;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Serqet_LastBreath.LastBreathExplosionInfo
// 0x0018
struct FLastBreathExplosionInfo
{
	float                                              fDelayLeft;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Surtr_LavaPools.SurtrPoolDeployTouchStatus
// 0x000C
struct FSurtrPoolDeployTouchStatus
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumTouches;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Surtr_SwordSwing.SurtrFanInformation
// 0x0010
struct FSurtrFanInformation
{
	int                                                nFiringInstanceId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                nHits;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Zeus_ForkedLightning.ArcingInfo
// 0x0030
struct FArcingInfo
{
	float                                              DamageMultiplier;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ArcTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RemainingArcTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                JumpsRemaining;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      PreviousArcTarget;                                		// 0x0010 (0x0008) [0x0000000000000000]              
	TArray< class AActor* >                            PreviousTargets;                                  		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgDeviceFire_Zeus_ForkedLightning*          ArcFiremode;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceFire.TGDFM_ANIM_SEQUENCE
// 0x0010
struct FTGDFM_ANIM_SEQUENCE
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       nmSeqName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bLeftHand : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Artio.ArtioDev4TrackingData
// 0x0008
struct FArtioDev4TrackingData
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceFire_BabaYaga_A01.CircleData
// 0x0028
struct FCircleData
{
	float                                              m_fRadius;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fMinRadius;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fOvalScale;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsOvalLong : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_vLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vForward;                                       		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceFire_Cerberus_Dev2.ImpactConeHitCount
// 0x007C
struct FImpactConeHitCount
{
	struct FImpactInfo                                 ImpactInfo;                                       		// 0x0000 (0x0078) [0x0000000000080000]              ( CPF_Component )
	int                                                NumConesHit;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceFire_Spline.SplineSegmentData
// 0x003C
struct FSplineSegmentData
{
	class AActor*                                      m_aDamageInstigator;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgDeviceFire*                               m_FireMode;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     m_vCurveStart;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vStart;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vEnd;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              m_fExtentRadius;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPredicting : 1;                                		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgRepInfo_Player.DeviceTeamInfo
// 0x0054
struct FDeviceTeamInfo
{
	int                                                CurrentDeviceId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastKnownDeviceId[ 0x6 ];                         		// 0x0004 (0x0018) [0x0000000000000000]              
	int                                                CurrentDeviceCount;                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                LastKnownDeviceCount[ 0x6 ];                      		// 0x0020 (0x0018) [0x0000000000000000]              
	int                                                CurrentDeviceIconOverride;                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                LastKnownDeviceIconOverride[ 0x6 ];               		// 0x003C (0x0018) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Player.AdditionalCalculateHudParams
// 0x0010
struct FAdditionalCalculateHudParams
{
	class ATgRepInfo_TaskForce*                        LocalPCTaskForce;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsSpectating : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerHasTgEffectForm_Xbalanque_ApocalypseShroud : 1;		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              FOVAngle;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Player.GodEnabledItem
// 0x0005
struct FGodEnabledItem
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      eTargeterType;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceFire_Ratatoskr_AcornThrowV2.AcornThrowHitData
// 0x0010
struct FAcornThrowHitData
{
	class ATgPawn*                                     HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                numHits;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      hitSpecialApplied : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeviceForm.ModeData
// 0x0020
struct FModeData
{
	float                                              c_fEquipModeTime;                                 		// 0x0000 (0x0004) [0x0000000000100000]              
	float                                              c_fBuildupTime;                                   		// 0x0004 (0x0004) [0x0000000000100000]              
	unsigned long                                      c_bContinuousFire : 1;                            		// 0x0008 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      c_FxInstantFire : 1;                              		// 0x0008 (0x0004) [0x0000000000100000] [0x00000002] 
	struct FName                                       c_nmOffhandAnimationType;                         		// 0x000C (0x0008) [0x0000000000100000]              
	unsigned long                                      c_bScaleFireAnimsWithRefire : 1;                  		// 0x0014 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      c_bInterruptAnimOnRefire : 1;                     		// 0x0014 (0x0004) [0x0000000000100000] [0x00000002] 
	float                                              c_fEffectRadius;                                  		// 0x0018 (0x0004) [0x0000000000100000]              
	float                                              c_fFullBodyAnimTime;                              		// 0x001C (0x0004) [0x0000000000100000]              
};

// ScriptStruct TgGame.TgDeviceForm_SplineTarget.SplineContainer
// 0x0024
struct FSplineContainer
{
	struct FInterpCurveVector                          Spline;                                           		// 0x0000 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ATgSplineLoftActorSpawnable* >       SplineActors;                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgDeviceForm_MultipleTargetIndicator.FormTargetingInfo
// 0x0010
struct FFormTargetingInfo
{
	class UTgSpecialFx*                                Fx;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceForm_Wizard_B02.WizardB02Targeter
// 0x0014
struct FWizardB02Targeter
{
	unsigned char                                      m_ePositionType;                                  		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	class ATgSkeletalMeshActor*                        m_MeshIndicator;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                m_TargetingFx;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceForm_Yemoja_B01.FractureTargeterFx
// 0x000C
struct FFractureTargeterFx
{
	class UTgSpecialFx*                                m_Fx;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fScale;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceVolume.VolumeMapInfo
// 0x0014
struct FVolumeMapInfo
{
	unsigned char                                      mVisType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mMapType;                                         		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vVisLocation;                                     		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fActiveDuration;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgDeviceVolume_Moveable.DVMHitTimeStamp
// 0x000C
struct FDVMHitTimeStamp
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTimestamp;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceVolume_TimedStack.DVTSTouchedPawn
// 0x0014
struct FDVTSTouchedPawn
{
	unsigned long                                      bStillTouching : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasInverseEffect : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class ATgPawn*                                     TouchedPawn;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              fCurrentTimer;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nNumStacks;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDistributionFloatSoundAttenuation.AttenuationGroup
// 0x000C
struct FAttenuationGroup
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              AttenuationDistance;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectForm.MicFxInfo
// 0x000C
struct FMicFxInfo
{
	class UMaterialInstanceConstant*                   m_micFx;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      c_bApplied : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgEffectForm_WithMeshes.EffectMeshInfo
// 0x0040
struct FEffectMeshInfo
{
	class UMeshComponent*                              Mesh;                                             		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       DisplayGroup;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector                                     vAdditiveTranslation;                             		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rAdditiveRotation;                                		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              fScaleMultipler;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nMeshId;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      AbsoluteTranslation : 1;                          		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AbsoluteRotation : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      AbsoluteScale : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWillSelfDestruct : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUsesParentAnimComponent : 1;                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bLoopAnim : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct TgGame.TgEffectManager.StunStackEntry
// 0x0009
struct FStunStackEntry
{
	class UTgEffect*                                   Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      StunType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.RevealStackEntry
// 0x0014
struct FRevealStackEntry
{
	class UTgEffect*                                   Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      RevealType;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	class ATgRepInfo_Player*                           RevealedBy;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.SlowToHaltMode
// 0x000C
struct FSlowToHaltMode
{
	class UTgDeviceFire*                               m_DeviceMode;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nFiringInstance;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.EffectListEntry
// 0x001C
struct FEffectListEntry
{
	int                                                nEffectGroupId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSourceItemId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      byNumStacks;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              fInitTimeRemaining;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nExtraInfo;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nExtraInfo2;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nInstigatorId;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.EffectQueueEntry
// 0x0028
struct FEffectQueueEntry
{
	int                                                nEffectGroupId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nExtraInfo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nExtraInfo2;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nInstigatorInstId;                                		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     vHitLocation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rHitNormal;                                       		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectParameterTransition.EffectParameterTransition
// 0x0012
struct FEffectParameterTransition
{
	struct FName                                       m_nmParameter;                                    		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fDuration;                                      		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fLerpExponential;                               		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eRepeatStrategy;                                		// 0x0010 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_nRepeatCount;                                   		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEmoteConfigResource.EmoteSuccessiveStates
// 0x0008
struct FEmoteSuccessiveStates
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nTrackedStates;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgFlagContentData.FlagMeshData
// 0x000C
struct FFlagMeshData
{
	unsigned char                                      ContentDataType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	class UTgMenuMeshInfo*                             MainMeshInfo;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Game.GraphData
// 0x000C
struct FGraphData
{
	int                                                XP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderVote
// 0x0008
struct FSurrenderVote
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSurrender : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderData
// 0x0024
struct FSurrenderData
{
	float                                              fLastSurrenderTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSurrenderVote >                    SurrenderVotes;                                   		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nSurrenderTotal;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSurrenderNeeded;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nSurrenderVoteCount;                              		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nNoSurrenderVoteCount;                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderTimings
// 0x0018
struct FSurrenderTimings
{
	float                                              fSurrenderTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fUnbalancedSurrenderTime;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fUnbalancedCheckTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnbalanceAbsent : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fDuelSurrenderTime;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fEarlySurrenderDisconnectTime;                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Mission.PauseVoteData
// 0x0024
struct FPauseVoteData
{
	float                                              fLastPauseTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      PauseVotes;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPauseTotal;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPauseNeeded;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nPausesRemaining;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bPausePending : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisconnectPauseLimitOverride : 1;                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgGame_Mission.XPTrackingEntry
// 0x000C
struct FXPTrackingEntry
{
	class AController*                                 ControllerEntry;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fCurrentXp;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Mission.XPTrackingList
// 0x0014
struct FXPTrackingList
{
	TArray< struct FXPTrackingEntry >                  XPList;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nTaskForce;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Adv_CartDefense.CH06_PLAYER_STATS
// 0x0034
struct FCH06_PLAYER_STATS
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nMinionKills;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nEliteKills;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fDamageAbsorbed;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fDamageDealt;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fHealing;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nMinionKillsPrev;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nEliteKillsPrev;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fDamageAbsorbedPrev;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fDamageDealtPrev;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fHealingPrev;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nDeathCount;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nDeathCountPrev;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Adv_CartDefense.CH06_ROUND_STATS
// 0x0068
struct FCH06_ROUND_STATS
{
	unsigned long                                      bIsValidStatBlock : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                topMinionKillId;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                topEliteKillId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                topDamageAbsorbId;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                topDamageDealtId;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                topHealingId;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                topMinionKillValue;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                topEliteKillValue;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                topDamageAbsorbValue;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                topDamageDealtValue;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                topHealingValue;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fFoxPercentHP;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fPillarPercentHP;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fFoxHP;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fPillarHP;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              fFoxDMGTaken;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              fPillarDMGTaken;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< int >                                      PlayerList;                                       		// 0x0044 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      DeathCounts;                                      		// 0x0054 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              fRoundScore;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Battle_Adventure.ADV_MOD_INFO
// 0x0008
struct FADV_MOD_INFO
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgLootTable.LootData
// 0x0014
struct FLootData
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLootTableItemId;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanStack : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgGame_Battle_CTF.CTFStats
// 0x001C
struct FCTFStats
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFlagsPickedUp;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTimeCarried;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nFlagsCaptured;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nCarriersKilled;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nFlagsReturned;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nMeleeKills;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Battle_Round.BattleRoundConfig
// 0x0018
struct FBattleRoundConfig
{
	unsigned long                                      bRoundUpdatesPlayerState : 1;                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nPlayerLevel;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStartingGold;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowPlayerProgress : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fRoundSetupTime;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fRoundDuration;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgGame_CH08.CH08_MOD_STACKER
// 0x0018
struct FCH08_MOD_STACKER
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nAppliedStacks;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nMaxStacks;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTimeToNextStack;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fStackTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_MultiRounds.OpponentMatchups
// 0x0010
struct FOpponentMatchups
{
	unsigned char                                      m_MatchupCounts[ 0x10 ];                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRoundSchedule.ArenaRoundConfig
// 0x0029
struct FArenaRoundConfig
{
	TArray< int >                                      nRoundTaskForces;                                 		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      nTeamRanks;                                       		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nEncounter;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nArenaId;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eTFSelectionStrategy;                             		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgRoundSchedule.ArenaRoundInfo
// 0x002C
struct FArenaRoundInfo
{
	TArray< struct FArenaRoundConfig >                 m_Matches;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nStoreTime;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSetupTime;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nRoundTime;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nPostRoundTime;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nGoldGift;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nPlayerLevel;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nPlayerXP;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgGameConfig_Adventure.QueueEffectMap
// 0x0008
struct FQueueEffectMap
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EffectItemId;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgGameConfig_MultiRounds.EMR_SHOPINFO
// 0x0018
struct FEMR_SHOPINFO
{
	struct FVector                                     vReadyLoc;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vReadyBounds;                                     		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgInventory_RandomizedShop.CustomChanceItem
// 0x0008
struct FCustomChanceItem
{
	int                                                m_nItemId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCustomChance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventory_RandomizedShop.InventoryList
// 0x0010
struct FInventoryList
{
	TArray< int >                                      m_nItems;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgGameConfig_BotShop.BotShopUnit
// 0x0010
struct FBotShopUnit
{
	int                                                m_nBotId;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                m_nCost;                                          		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                m_nEffectGroupId;                                 		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fWeight;                                        		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct TgGame.TgGameConfig_BotShop.BotShopBag
// 0x0030
struct FBotShopBag
{
	TArray< struct FBotShopUnit >                      m_UnitList;                                       		// 0x0000 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBotShopBag >                       m_BagList;                                        		// 0x0010 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              m_fWeight;                                        		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fSellBackPct;                                   		// 0x0024 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fUnitWeightSum;                                 		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fBagWeightSum;                                  		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgGameConfig_CartDefense.CartRoundValues
// 0x0010
struct FCartRoundValues
{
	TArray< float >                                    s_fRoundVals;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgGameConfig_PEP.PEPUpgradeMap
// 0x0020
struct FPEPUpgradeMap
{
	struct FName                                       m_nmUpgradeMapName;                               		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_nmTier1EntryName;                               		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_nmTier2EntryName;                               		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_nmTier3EntryName;                               		// 0x0018 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct TgGame.TgGameConfig_PEP.PEPTeamSpawnModifier
// 0x0008
struct FPEPTeamSpawnModifier
{
	int                                                m_nTFNum;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                m_nModID;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct TgGame.TgGameplayCurvesSet_AimAssistKeyframes.AimAssistKeyframeDebugVals
// 0x0104
struct FAimAssistKeyframeDebugVals
{
	int                                                DebugState;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       curveMin[ 0x8 ];                                  		// 0x0004 (0x0040) [0x0000000000000000]              
	struct FName                                       curveMax[ 0x8 ];                                  		// 0x0044 (0x0040) [0x0000000000000000]              
	float                                              valMin[ 0x8 ];                                    		// 0x0084 (0x0020) [0x0000000000000000]              
	float                                              valMax[ 0x8 ];                                    		// 0x00A4 (0x0020) [0x0000000000000000]              
	float                                              valInterp[ 0x8 ];                                 		// 0x00C4 (0x0020) [0x0000000000000000]              
	float                                              valFinal[ 0x8 ];                                  		// 0x00E4 (0x0020) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGameplayCurvesSet_TargetAimTracking.TargetAimTrackingDebugVals
// 0x003C
struct FTargetAimTrackingDebugVals
{
	int                                                DebugState;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       trackingCurveSetName;                             		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              strengthMultiplier[ 0x2 ];                        		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              strengthByAccuracy[ 0x2 ];                        		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              strengthByDesiredAngle[ 0x2 ];                    		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              strengthFinal[ 0x2 ];                             		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              rawDesiredTurnAmt[ 0x2 ];                         		// 0x002C (0x0008) [0x0000000000000000]              
	float                                              rawDesiredTurnAmtPerSec[ 0x2 ];                   		// 0x0034 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGameTipManager.TipSavedState
// 0x0008
struct FTipSavedState
{
	int                                                nTipId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEncountered : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCompleted : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSuppressed : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct TgGame.TgHeimdallr_A04MeshProcessor.HeimUltMeshMap
// 0x0018
struct FHeimUltMeshMap
{
	class ATgPawn_Heimdallr*                           m_PawnRep;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FHeimA04Meshes >                    m_UltVisuals;                                     		// 0x0008 (0x0010) [0x0000000000580000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInterpolatingCameraActor.InterpolatingCameraInfo
// 0x0040
struct FInterpolatingCameraInfo
{
	unsigned long                                      m_bInterpLocation : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bInterpRotation : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bInterpFOVAngle : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FVector                                     m_BaseLocation;                                   		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_TargetLocation;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_BaseRotation;                                   		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_TargetRotation;                                 		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fBaseFOVAngle;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTargetFOVAngle;                                		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fInterpSpeed;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgInventory_BuildCache.TeamComp
// 0x0005
struct FTeamComp
{
	unsigned char                                      m_bytHunters;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_bytGuardians;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_bytMages;                                       		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_bytAssassins;                                   		// 0x0003 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_bytWarriors;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventory_BuildCache.BuildItem
// 0x0010
struct FBuildItem
{
	TArray< int >                                      m_BuildItemIds;                                   		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventory_BuildCache.BuildLibrary
// 0x0010
struct FBuildLibrary
{
	TArray< struct FBuildItem >                        m_Builds;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventory_BuildCache.BotBuildPair
// 0x000C
struct FBotBuildPair
{
	unsigned char                                      m_eRole;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nGameType;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nBuildIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventory_BuildCache.BotBuildMap
// 0x0014
struct FBotBuildMap
{
	int                                                m_nBotId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FBotBuildPair >                     m_BuildPairs;                                     		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventory_BuildCache.BuildMap
// 0x0018
struct FBuildMap
{
	int                                                m_nModeType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nDefaultGameMode;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FBotBuildMap >                      m_BotBuilds;                                      		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgRepInfo_Player_BotShop.BotUnit
// 0x000C
struct FBotUnit
{
	int                                                m_nBotId;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nCost;                                          		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nEffectGroupId;                                 		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgInventoryManager.InventoryTransaction
// 0x001C
struct FInventoryTransaction
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ExistingObjectInvId;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NewObjectInvId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nInstanceCountChange;                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nGoldValue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nEqpPoint;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fCooldown;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.ItemStatsDetail
// 0x000C
struct FItemStatsDetail
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSell : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fMissionTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.AutoPurchaseItem
// 0x0008
struct FAutoPurchaseItem
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.sInventoryStackItem
// 0x0009
struct FsInventoryStackItem
{
	class UTgInventoryObject_Device*                   Device;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      OldEquipPoint;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.CourierTransaction
// 0x001D
struct FCourierTransaction
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                InventoryId;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Currency;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class ATgPawn_Courier*                             Courier;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned char                                      CourierPhase;                                     		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.InventoryData
// 0x001C
struct FInventoryData
{
	int                                                nInvId;                                           		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                nInstanceCount;                                   		// 0x0008 (0x0004) [0x0000000000100000]              
	unsigned long                                      bBoundFlag : 1;                                   		// 0x000C (0x0004) [0x0000000000100000] [0x00000001] 
	float                                              fAcquiredDatetime;                                		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                nEquipSlotValueId;                                		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                nRequiredLevel;                                   		// 0x0018 (0x0004) [0x0000000000100000]              
};

// ScriptStruct TgGame.TgInventoryManager_Ratatoskr.AcornPurchaseInfo
// 0x0010
struct FAcornPurchaseInfo
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nUpgradeInvId;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsUpgrade : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject.sInventoryReq
// 0x0010
struct FsInventoryReq
{
	unsigned long                                      m_bLevelFail : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSkillFail : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nSkillLevelReq;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nSkillIdReq;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bFlairFail : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLocationFail : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_AhMuzenCabBees.BeeVictimInfo
// 0x0010
struct FBeeVictimInfo
{
	class UTgEffectGroup*                              BeesEG;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fApplyTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fLastDisarm;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Ancile_S3.CooldownModifierInfo
// 0x0010
struct FCooldownModifierInfo
{
	class ATgDevice*                                   ModifiedDevice;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ModifiedCooldown;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDidModify : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_AnvilOfDawn.ThorLightningTarget
// 0x000C
struct FThorLightningTarget
{
	class AActor*                                      m_Target;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nLightningInstance;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Arondight.RevealedPawn
// 0x000C
struct FRevealedPawn
{
	class ATgPawn*                                     TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bHasBeenHit : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BastetPassive.BastetPSVTrackData
// 0x0020
struct FBastetPSVTrackData
{
	class AActor*                                      m_TrackedActor;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIsBleeding : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSpawnFlag : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eTravelingState;                                		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< class ATgCollisionProxy_Bastet_PSV* >      m_TrailProxies;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BellonaScourge.HealAdder
// 0x000C
struct FHealAdder
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nHitsPerStack;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nTrackedHitCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BellonaShieldBash.BlockStackAdder
// 0x000C
struct FBlockStackAdder
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nHitsPerStack;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nTrackedHitCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DeviceTracked.DTFireInstanceData
// 0x0014
struct FDTFireInstanceData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      FiringInstances;                                  		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_OffHand.CastTrackingInfo
// 0x000C
struct FCastTrackingInfo
{
	int                                                nTargetId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_ConduitGem.StacksTrackingInfo
// 0x000C
struct FStacksTrackingInfo
{
	int                                                nStacks;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DamageOrHeal.DOHFireInstanceCount
// 0x0008
struct FDOHFireInstanceCount
{
	int                                                nFiringInstance;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nAbilityCount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DamageOrHeal.DOHFireInstanceData
// 0x0014
struct FDOHFireInstanceData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FDOHFireInstanceCount >             FireInstanceCounts;                               		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Danzaburou_A01_V2.DanzaburouA01HitTrackerInfo
// 0x0018
struct FDanzaburouA01HitTrackerInfo
{
	class AActor*                                      m_actorTracked;                                   		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fMuliHitDamagePercent;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nTrackedFiringInstance;                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nRollingHits;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nBombHits;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DynastyPlateHelm.BUFFED_AUTO_INFO
// 0x0008
struct FBUFFED_AUTO_INFO
{
	int                                                nDevId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Effect_Shockwave_OnHitHigherLevel.TGHHL_HITINFO
// 0x0008
struct FTGHHL_HITINFO
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLastTrackedFiringInstance;                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_KillStackRandom.StackTypeProps
// 0x0010
struct FStackTypeProps
{
	int                                                m_nEffectGroupId;                                 		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nStackTypeSitType;                              		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nStackTypeMax;                                  		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nStackTypeCurrent;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Freya_A01.FreyaExplosionInfo
// 0x000C
struct FFreyaExplosionInfo
{
	class ATgPawn*                                     m_HitPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nFiringInstance;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Freya_PSV.ABILITY_HIT_INFO
// 0x0008
struct FABILITY_HIT_INFO
{
	int                                                nDevId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_God94_Dev2.God94Dev2HealData
// 0x000C
struct FGod94Dev2HealData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FiringInstance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nHealCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_SoulStone_S3.SoulStoneTrackingData
// 0x000C
struct FSoulStoneTrackingData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FiringInstance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      ConsumedStacks : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Heartseeker_S4.FireInstanceData
// 0x0008
struct FFireInstanceData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FiringInstance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_HeartSeeker_S6.HeartSeekerHitTracker
// 0x000C
struct FHeartSeekerHitTracker
{
	class AActor*                                      m_trackedTarget;                                  		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fTimeSinceLastHit;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_HitByOffhand.CastTrackingHitInfo
// 0x0008
struct FCastTrackingHitInfo
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_InHand_OncePerCast.DEV_INST_INFO
// 0x0014
struct FDEV_INST_INFO
{
	int                                                nDev;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      TrackedInstances;                                 		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_JanusPassive.JanusPowerScaledAbility
// 0x000C
struct FJanusPowerScaledAbility
{
	class AActor*                                      m_actorPowerScaled;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nFiringInstance;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_JanusTransitions.TransitionsEffectGroupInfo
// 0x001C
struct FTransitionsEffectGroupInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bReadyToRemove : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UTgEffectGroup* >                    AppliedEffectGroups;                              		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Knight_PSV.KnightFireInstanceData
// 0x0014
struct FKnightFireInstanceData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      FiringInstances;                                  		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_PersephonePassive.PersephonePSVTracker
// 0x0008
struct FPersephonePSVTracker
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_PotionOfMagMight.DeviceToReduce
// 0x000C
struct FDeviceToReduce
{
	int                                                m_nDeviceId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nFiringInst;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCooldownReduced : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_RewardBoots.RewardHitInfo
// 0x0018
struct FRewardHitInfo
{
	class ATgPawn_Character*                           m_GodPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     m_DeviceModeReference;                            		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                m_nFiringInstance;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fLastHitTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Set_A04.SetA04StackData
// 0x000C
struct FSetA04StackData
{
	class ATgPawn*                                     m_HitPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nStacks;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Set_PSV.SetPSVDamageInstanceData
// 0x0008
struct FSetPSVDamageInstanceData
{
	int                                                m_nDeviceId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nFireInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Set_PSV.SetPSVDamageTimeData
// 0x0008
struct FSetPSVDamageTimeData
{
	int                                                m_nDeviceId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fDamageTimeStamp;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Stack_BonusDamageAtMax_DeviceTracked.BDAMFireInstanceData
// 0x0014
struct FBDAMFireInstanceData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      FiringInstances;                                  		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_SoulReaverS6.SRPrevHitInfo
// 0x0010
struct FSRPrevHitInfo
{
	class ATgPawn*                                     PrevHitTarget;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fPrevHitTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nTargetHitCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_StaffOfMyrddin.AffectedDevice
// 0x000C
struct FAffectedDevice
{
	class ATgDevice*                                   m_Device;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nFiringInstance;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_UndoRelic.HistoryElement
// 0x0008
struct FHistoryElement
{
	int                                                m_delta;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timestamp;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Wizard_Passive.WizardChargeBuffInfo
// 0x0005
struct FWizardChargeBuffInfo
{
	int                                                m_nDevId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nInstanceId;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Yemoja_PSV.YemojaPipObjective
// 0x0008
struct FYemojaPipObjective
{
	int                                                m_nThreshold;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasAchieved : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgLobbyCamera_DynamicFocus.LobbyFocusData
// 0x0020
struct FLobbyFocusData
{
	struct FVector                                     vDestination;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRotation;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class ATgSkeletalMeshActor_Lobby*                  ViewTarget;                                       		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgMenuContentData.MeshData
// 0x0014
struct FMeshData
{
	unsigned char                                      ContentDataType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	class UTgMenuMeshInfo*                             MainMeshInfo;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       CameraName;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgMenuMeshInfo.ParticleSystemInfo
// 0x0010
struct FParticleSystemInfo
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgMenuMeshInfo.LobbyMeshInfo
// 0x0068
struct FLobbyMeshInfo
{
	struct FVector                                     Translation;                                      		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               SkelMesh;                                         		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          AnimSets;                                         		// 0x0034 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMorphTargetSet*                             MorphTargetSet;                                   		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOnlySelfShadow : 1;                              		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UMaterialInterface* >                MaterialOverrides;                                		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUseIndividualLightEnvironment : 1;               		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseOverlayMesh : 1;                              		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                SkinOverrideId;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgMeshPool.MeshPool
// 0x0010
struct FMeshPool
{
	TArray< class ATgSkeletalMeshActorSpawnable* >     m_meshes;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgMinimapManager.MiniMapServerEntity
// 0x005C
struct FMiniMapServerEntity
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                nVisionRange;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDead : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class AReplicationInfo*                            RepInfo;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                nIdx;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bMarked : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      bVisibleOnMap;                                    		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      bVisibleBySentinel;                               		// 0x0035 (0x0001) [0x0000000000000000]              
	unsigned long                                      bVisibleByDetector : 1;                           		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fLastPingTime;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRequireLOS : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDetector : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSentinel : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      byVisionMask;                                     		// 0x0044 (0x0001) [0x0000000000000000]              
	float                                              fHealthPCT;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              fTimerPCT;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	class AActor*                                      FogOfWarArea;                                     		// 0x0050 (0x0008) [0x0000000000000000]              
	unsigned long                                      FogOfWarAreaRevealed : 1;                         		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_SplineCart.ServerSplineSync
// 0x0010
struct FServerSplineSync
{
	class ATgSplineActor*                              Spline;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              SplineDist;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMoving : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_AhPuch.Dev3Victim
// 0x000C
struct FDev3Victim
{
	class ATgPawn*                                     VictimPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                HealStacks;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Aphrodite.SoulMateLinkInfo
// 0x003C
struct FSoulMateLinkInfo
{
	class AActor*                                      LinkActor;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                Fx;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector                                     SourceLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              fDetachLength;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fOpacity;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlink : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Minion.FireMinionIds
// 0x0050
struct FFireMinionIds
{
	TArray< int >                                      m_nConquestFireMinions;                           		// 0x0000 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< int >                                      m_nJoustFireMinions;                              		// 0x0010 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< int >                                      m_nClashFireMinions;                              		// 0x0020 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< int >                                      m_nAssaultFireMinions;                            		// 0x0030 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< int >                                      m_nSiegeFireMinions;                              		// 0x0040 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn_Chaac.ChaacPassiveTracker
// 0x000C
struct FChaacPassiveTracker
{
	class ATgDevice*                                   RefundedDevice;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                RefundedDeviceFireInstance;                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Chaac.LevitateVictimInfo
// 0x0010
struct FLevitateVictimInfo
{
	class ATgPawn*                                     VictimPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   RelativeOffset2D;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Chaac.KillMaterialInfo
// 0x0024
struct FKillMaterialInfo
{
	struct FName                                       MaterialParameterName;                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       DisplayGroupName;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nActivationLevel;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fRampUpTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fRampDownTime;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fCurrentValue;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Courier.CourierPhaseState
// 0x000C
struct FCourierPhaseState
{
	unsigned char                                      Phase;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TransactionType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	class ATgPawn*                                     Customer;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Chronos.RewindInfo
// 0x0024
struct FRewindInfo
{
	float                                              fTimestamp;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              fHealth;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fMana;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_CuChulainn.CuChulainnFerocityRefundData
// 0x001C
struct FCuChulainnFerocityRefundData
{
	float                                              fFerocityCostPerFire;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fFerocityGainPerHit;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fFerocityGainedPerMinion;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDeviceFired : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nHitCount;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nMinionHitCount;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fMaxFerocityGainedPerShot;                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_CuChulainn.CuChulainnFerocityData
// 0x0018
struct FCuChulainnFerocityData
{
	unsigned long                                      bWasInitialized : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fFerocityPerSecond;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fChargeLimit;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fBerserkThreshold;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fBerserkDelayTime;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fBerserkTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Phoenix.NavMeshBorderEdges
// 0x0018
struct FNavMeshBorderEdges
{
	struct FVector                                     P1;                                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     P2;                                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Djinni.ScalingProp
// 0x0008
struct FScalingProp
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_G72.G72PassiveTarget
// 0x0010
struct FG72PassiveTarget
{
	class ATgCollisionProxy*                           Aura;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_G86.SeasonInhandRecordData
// 0x0008
struct FSeasonInhandRecordData
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Season;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Ganesha.DamageData
// 0x0038
struct FDamageData
{
	class ATgPawn*                                     VictimPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     attackerPawn;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0010 (0x0028) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct TgGame.TgPawn_GuanYuV2.GuanYuV2UltTarget
// 0x000C
struct FGuanYuV2UltTarget
{
	class ATgPawn*                                     Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                HitCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_GuanYuV2.SavedChargeHitV2
// 0x000C
struct FSavedChargeHitV2
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_HelV3Skin.A01SpawnDarkDepFlashEvent
// 0x001C
struct FA01SpawnDarkDepFlashEvent
{
	struct FVector                                     m_vSpawnLoc;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rSpawnRot;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                m_nFlashTrigger;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Hera.HeraPolymorphPair
// 0x0008
struct FHeraPolymorphPair
{
	int                                                m_nPawnInstanceId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nMeshId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Jormungandr.EruptFXIds
// 0x0008
struct FEruptFXIds
{
	int                                                m_nEffect1;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nEffect2;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Jormungandr_WithExtraMesh.JormungandrSecondaryMesh
// 0x0010
struct FJormungandrSecondaryMesh
{
	struct FVector                                     m_vCachedTranslation;                             		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nMeshId;                                        		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgPawn_Juggernaut.MinionSpawnInfo
// 0x003C
struct FMinionSpawnInfo
{
	float                                              fSpawnDelay;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       DeathAnimName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     vSpawnLocations[ 0x2 ];                           		// 0x000C (0x0018) [0x0000000000000000]              
	struct FRotator                                    rSpawnRotations[ 0x2 ];                           		// 0x0024 (0x0018) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Kaldr.KaldrDamageInstance
// 0x000C
struct FKaldrDamageInstance
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceInstanceId;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nDeviceFiringInstance;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Knight.KnightFiringInstance
// 0x0008
struct FKnightFiringInstance
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasDamagedGod : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Kukulkan.SlipstreamMod
// 0x0008
struct FSlipstreamMod
{
	float                                              fSpeedMod;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Kumbhakarna.VictimCollisionData
// 0x0014
struct FVictimCollisionData
{
	class ATgPawn*                                     KnockedUpVictim;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_NeZha.UniverseRingTossDamageTracker
// 0x000C
struct FUniverseRingTossDamageTracker
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                HitCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Nox.ShadowLockInfo
// 0x003C
struct FShadowLockInfo
{
	class AActor*                                      LinkActor;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                Fx;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector                                     SourceLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              fDetachLength;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fOpacity;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlink : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_NuWa.NuWaFormControl
// 0x0018
struct FNuWaFormControl
{
	class USkelControlBase*                            SkelCon;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SkelConName;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      eActiveForm;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bNotOnIntro : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_NuWa.NuWaCrystalInfo
// 0x0018
struct FNuWaCrystalInfo
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fTimer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class USkelControlBase*                            SkelCon;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       SkelConName;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Ratatoskr.RatatoskrSkinTailBaseColor
// 0x0014
struct FRatatoskrSkinTailBaseColor
{
	int                                                m_nSkinId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                m_colorBase;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Terra.TerraWardstoneFXData
// 0x0010
struct FTerraWardstoneFXData
{
	class ATgPawn*                                     Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ActiveStoneCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsActive : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Thanatos.LowHealthInfo
// 0x0014
struct FLowHealthInfo
{
	class UTgSpecialFx*                                LowHealthFx;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fBearing;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Thanatos.KillBallInfo
// 0x0028
struct FKillBallInfo
{
	class UTgSkeletalMeshComponent*                    Mesh;                                             		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     vLocation;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsMovable : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fStartDistance;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTimeActive;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fReturnTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fMoveWeight;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Totem_JungleShrine_Conquest_S7.ChaliceInfo
// 0x001C
struct FChaliceInfo
{
	class UTgStaticMeshComponent*                      m_Mesh;                                           		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     m_vLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	class UTgSpecialFx*                                m_auraFx;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Tower_Obelisk.TowerBeamInfo
// 0x0010
struct FTowerBeamInfo
{
	class ATgPawn*                                     TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                TowerBeamFx;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_ZhongKui.FierceGlareInfo
// 0x0028
struct FFierceGlareInfo
{
	class UTgSkeletalMeshComponent*                    Mesh;                                             		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     vLocation;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bGoToBag : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsMovable : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fStartDistance;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTimeActive;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fReturnTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fMoveWeight;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_ZhongKui.FierceGlareHealInfo
// 0x0010
struct FFierceGlareHealInfo
{
	float                                              fHealTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               HealMode;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEnergyOnly : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPlayerInput_Racer.RacerKeyBind
// 0x0018
struct FRacerKeyBind
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgProj_Discordia_GoldenAppleOfDiscord.AppleHitInfo
// 0x000C
struct FAppleHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                numHits;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgProj_Hercules_Boulder.BoulderHitInfo
// 0x000C
struct FBoulderHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                numHits;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgProj_Wizard_AUTO.WizardAutoVisibilityDelay
// 0x0008
struct FWizardAutoVisibilityDelay
{
	int                                                m_nSkinId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nProjId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRacingCheckpoint.RaceSegmentData
// 0x0018
struct FRaceSegmentData
{
	struct FVector                                     P1;                                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     P2;                                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_CH08_GooSpawner.CH08_GOO_FX
// 0x0030
struct FCH08_GOO_FX
{
	struct FCH08_GOO_SPOT                              gooSpot;                                          		// 0x0000 (0x0018) [0x0000000000000000]              
	float                                              fElapsedTransition;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTransitionTime;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	class ATgSkeletalMeshActor*                        gooPreviewActor;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                gooPreviewFX;                                     		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_CH08_GooSpawner.CH08_CLIENT_SPAWNER
// 0x0010
struct FCH08_CLIENT_SPAWNER
{
	struct FVector                                     vSpawnLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nSpawnerId;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_DeathFog.FOG_GROWTH
// 0x000C
struct FFOG_GROWTH
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fSafeRadius;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fSpreadRate;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_DeathFog.FOG_FX
// 0x0014
struct FFOG_FX
{
	unsigned long                                      bHasInitializedFx : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFogFxVisible : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class ATgSurvivalFogVolumeDensityInfo*             sphericalFogFx;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	class ATgSkeletalMeshActorSpawnable*               flatFogFx;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Game_MultiRounds.ArenaMatchup
// 0x0010
struct FArenaMatchup
{
	int                                                m_nTaskForces[ 0x4 ];                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Player_BotShop.BotBuffPair
// 0x0008
struct FBotBuffPair
{
	int                                                m_nBotId;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nEffectGroupId;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgRepInfo_Player_Store.PlayerStoreItemList
// 0x00CC
struct FPlayerStoreItemList
{
	int                                                m_nItems[ 0x32 ];                                 		// 0x0000 (0x00C8) [0x0000000000000000]              
	int                                                m_nCount;                                         		// 0x00C8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TGTEAM_ENTRY
// 0x0034
struct FTGTEAM_ENTRY
{
	struct FString                                     fsName;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     fsMapName;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nHealth;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nMaxHealth;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLeader : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class ATgRepInfo_Player*                           pPrep;                                            		// 0x002C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TEAMTIMEMANAGER_ENTRY
// 0x000C
struct FTEAMTIMEMANAGER_ENTRY
{
	class UTgTimerManager*                             m_TimerManager;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nDeviceId;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.GLOBALEFFECT_ENTRY
// 0x0010
struct FGLOBALEFFECT_ENTRY
{
	class UTgEffectGroup*                              eg;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	class ATgPawn*                                     pawnInstigator;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.sPredefinedLevelDeployInfo
// 0x0010
struct FsPredefinedLevelDeployInfo
{
	int                                                m_Id;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_Location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_VolumeTimedKill.TimedKillInfo
// 0x0018
struct FTimedKillInfo
{
	struct FVector                                     vKillLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              fKillTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nMeshId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nInstance;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSkelCon_CCD_IK_FootPlacement.JointConstraintInformation
// 0x0008
struct FJointConstraintInformation
{
	float                                              AngleConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StretchConstraint;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_Gate.SkelControlGateChild
// 0x000C
struct FSkelControlGateChild
{
	class USkelControlBase*                            SkelControl;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DrawY;                                            		// 0x0008 (0x0004) [0x0000000000022000]              ( CPF_Transient | CPF_EditConst )
};

// ScriptStruct TgGame.TgSkelCon_HitReaction.RecoilInfo
// 0x00E0
struct FRecoilInfo
{
	struct FRecoilDef                                  Min;                                              		// 0x0000 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FRecoilDef                                  Max;                                              		// 0x0070 (0x0070) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_PropertyGate.SkelControlPropertyGateChild
// 0x001C
struct FSkelControlPropertyGateChild
{
	class USkelControlBase*                            SkelControl;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      nBytePropertyValue;                               		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFloatPropertyValue;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBoolPropertyValue : 1;                           		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nIntPropertyValue;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawY;                                            		// 0x0018 (0x0004) [0x0000000000022000]              ( CPF_Transient | CPF_EditConst )
};

// ScriptStruct TgGame.TgSkelCon_PropertyGate.SkelControlPropertyGateConfig
// 0x002C
struct FSkelControlPropertyGateConfig
{
	unsigned long                                      bWasInitialized : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      CachedOwner;                                      		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    CachedByteProperty;                               		// 0x000C (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    CachedFloatProperty;                              		// 0x0014 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    CachedBoolProperty;                               		// 0x001C (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    CachedIntProperty;                                		// 0x0024 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct TgGame.TgSkelControlSingleBone.TgSkelControlSingleBoneSkinControls
// 0x0034
struct FTgSkelControlSingleBoneSkinControls
{
	int                                                OverrideSkinId;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            SkinOverrideStrengthEmoteNameList;                		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SkinOverrideFullBodyAnimNameList;                 		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SkinOverrideAnimNodeNameList;                     		// 0x0024 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgSkelCon_ScalarParamByTranslation.TranslationScalarMICParamInfo
// 0x0010
struct FTranslationScalarMICParamInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInverseOfControlStrength : 1;                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              ParamStrength;                                    		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TgGame.TgSkelCon_SkinGate.SkelControlSkinGateChild
// 0x0014
struct FSkelControlSkinGateChild
{
	class USkelControlBase*                            SkelControl;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawY;                                            		// 0x0010 (0x0004) [0x0000000000022000]              ( CPF_Transient | CPF_EditConst )
};

// ScriptStruct TgGame.TgSkelCon_Spinner_Skinned.SkinnedSpinData
// 0x0008
struct FSkinnedSpinData
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSkinnedRotationsPerSecond;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_WithMesh.WithMeshInfo
// 0x0028
struct FWithMeshInfo
{
	int                                                MeshId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPAC : 1;                                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       FullBodyName;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WhenMeshOn;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Strength;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOn : 1;                                          		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      ForceOffIfMeshHidden : 1;                         		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseSocketLocation : 1;                           		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseSocketRotation : 1;                           		// 0x0024 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      ForceOffIfBelowLobbyWall : 1;                     		// 0x0024 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFreezeAnimTreeOnHidden : 1;                      		// 0x0024 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bResetMeshOnActivate : 1;                         		// 0x0024 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_bIgnoreOwnerRotation : 1;                       		// 0x0024 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_ZhongKui_BagGrowth.BagGrowthDef
// 0x0030
struct FBagGrowthDef
{
	float                                              fMinScale;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxScale;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAbsoluteMinScale;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAbsoluteMaxScale;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEmptyBagScale;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthPerDemon;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthCoefficient;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDampeningCoefficient;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthImpulse;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthImpulseDecay;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fShrinkImpulse;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fShrinkImpulseDecay;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelControlSingleBone_DisplayGroup.DisplayGroupInfo
// 0x0028
struct FDisplayGroupInfo
{
	struct FName                                       DisplayGroupName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WhenDisplayGroupOn;                               		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Strength;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOn : 1;                                          		// 0x0010 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      ForceOffIfMeshHidden : 1;                         		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< struct FName >                             SocketNames;                                      		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      ForceOffIfBelowLobbyWall : 1;                     		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelControlSingleBone_ScalarMICParam.ScalarMICParamInfo
// 0x0018
struct FScalarMICParamInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInverseOfControlStrength : 1;                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseMultScale : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              fMultScale;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyToChildren : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              ParamStrength;                                    		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TgGame.TgSkelControlSingleBone_Skinned.SkinStrengthOverride
// 0x0008
struct FSkinStrengthOverride
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDesiredStrength;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkeletalMeshActor_Pedestal.RacerPedestalFlags
// 0x0014
struct FRacerPedestalFlags
{
	int                                                nRacerPedestalId;                                 		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nAchievement1Id;                                  		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nAchievement2Id;                                  		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nAchievement3Id;                                  		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHasAchievement1 : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasAchievement2 : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasAchievement3 : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct TgGame.TgSkinAssemblyConfig.PackageCookFlagMap
// 0x0020
struct FPackageCookFlagMap
{
	struct FString                                     SkinPackage;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PackageFlags;                                     		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgSkinAssemblyConfig.SkinAssemblyPackages
// 0x0014
struct FSkinAssemblyPackages
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FPackageCookFlagMap >               SkinPackageRefs;                                  		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgSkinAssemblyConfig.BotAssemblyPackages
// 0x0024
struct FBotAssemblyPackages
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSkinAssemblyPackages >             SkinAssemblies;                                   		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           BotPackageRefs;                                   		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgSoundGroup.FootstepSoundInfo
// 0x0010
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpecialFxLightManager.TgFxLight
// 0x0014
struct FTgFxLight
{
	struct FPointer                                    m_FxEmitter;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgSpecialFx*                                m_OwnerSpecialFx;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              m_Score;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTitanForgeTools.LineSegment
// 0x0010
struct FLineSegment
{
	struct FVector2D                                   vStart;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   vEnd;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTrailComponent_GroundTrail.TouchInfo
// 0x0018
struct FTouchInfo
{
	class AActor*                                      TouchedActor;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class ATgDeployable* >                     TouchingChildren;                                 		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgValueDataItem.TgDataItemValue
// 0x000C
struct FTgDataItemValue
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FQWord                                      Dummy;                                            		// 0x0004 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct TgGame.TgVolume_TimedKill.TimedKillTrackedPawn
// 0x0010
struct FTimedKillTrackedPawn
{
	class ATgPawn*                                     trackedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TrackedPawnTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWaitingForKill : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAchievement_Gilgamesh_DropkickAdventure.DropkickTarget
// 0x000C
struct FDropkickTarget
{
	class ATgPawn*                                     m_pawnTarget;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bMinionHit : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bGodHit : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bWallHit : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bUltHit : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct TgGame.TgAnimBlendByFire_Complete_WithTransitions.TransitionAnimSet
// 0x0020
struct FTransitionAnimSet
{
	struct FName                                       m_nmPreviousFire;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             m_nmTransitionToFires;                            		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nmTransitionAnimName;                           		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNotify_Sound_ConditionalAlternateCue.SkinSoundInfo
// 0x000C
struct FSkinSoundInfo
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nMeshAssemblyId;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNotify_Sound_ConditionalAlternateCue.ConditionalAlternativeCueSkinData
// 0x002C
struct FConditionalAlternativeCueSkinData
{
	struct FSkinSoundInfo                              nSkinSoundInfo;                                   		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCues[ 0x2 ];                                 		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPreventRepeat : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fCueDuration;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPreventGroupRepeat : 1;                          		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nCueGroup;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgCameraModifier_Zoom.CachedZoomValues
// 0x0010
struct FCachedZoomValues
{
	float                                              m_fZoomMax;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fZoomMin;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fZoomFactor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fZoomStep;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Charybdis_A01.CharybdisA01ProjInfos
// 0x0044
struct FCharybdisA01ProjInfos
{
	int                                                m_nFireModeId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nProjectileInstanceId[ 0x10 ];                  		// 0x0004 (0x0040) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_DynamicConquestWall.DynamicConquestWallHitReaction
// 0x0008
struct FDynamicConquestWallHitReaction
{
	unsigned char                                      m_eRecoilDir;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nHitCount;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Gilgamesh_A03.GilgameshA03SpeedBuffData
// 0x000C
struct FGilgameshA03SpeedBuffData
{
	class ATgPawn*                                     m_pawnTracked;                                    		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_bValidSpeedBuff : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Gilgamesh_A04.GilgameshA04TouchingData
// 0x0009
struct FGilgameshA04TouchingData
{
	class ATgPawn*                                     m_pawnTouched;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_eTouchLocation;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_Persephone_A01V2.BoneRushTrajectoryLocations
// 0x001C
struct FBoneRushTrajectoryLocations
{
	struct FVector                                     m_vStartLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vEndLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      m_bInitialized : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Persephone_A01V2.BoneRushTrajectoryLocationsUncompressed
// 0x001C
struct FBoneRushTrajectoryLocationsUncompressed
{
	float                                              m_fStartLocationX;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fStartLocationY;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fStartLocationZ;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fEndLocationX;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fEndLocationY;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fEndLocationZ;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInitialized : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeploy_Relic_BracerOfRadiance.BracerOfRadianceBuffData
// 0x0009
struct FBracerOfRadianceBuffData
{
	class ATgPawn*                                     m_pawnTracked;                                    		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eBuffType;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Tiamat_A02.RoundedTriangleData
// 0x000C
struct FRoundedTriangleData
{
	float                                              m_fOuterRadius;                                   		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fInnerRadius;                                   		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fCurvatureRatio;                                		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgDevice_Charybdis_A04_Shooter.CharybdisAnimationRange
// 0x000C
struct FCharybdisAnimationRange
{
	int                                                m_nMaxDistance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nMinDistance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fPersistTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Gilgamesh_PSV.GilgameshQuest
// 0x0006
struct FGilgameshQuest
{
	int                                                m_nActivationThreshold;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eQuestState;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eQuestType;                                     		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Tiamat_A01.TiamatAmmoStage
// 0x0008
struct FTiamatAmmoStage
{
	int                                                m_nAmmoCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeFinished;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Tiamat.TiamatB02WarningFxNotify
// 0x001C
struct FTiamatB02WarningFxNotify
{
	struct FVector                                     m_vSpawnLoc;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rSpawnRot;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                m_nNotifyCounter;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceForm_Tiamat_A01.AmmoRevealStage
// 0x0008
struct FAmmoRevealStage
{
	float                                              m_fRevealTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxAmmoIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceForm_Tiamat_Dev03.FullBodyAnimData
// 0x0010
struct FFullBodyAnimData
{
	struct FName                                       m_nmAnimName;                                     		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fBlendInTime;                                   		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fBlendOutTime;                                  		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgEffectForm_MicTransition.MicTranstionInfo
// 0x0018
struct FMicTranstionInfo
{
	struct FName                                       m_nmMicParameter;                                 		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fStartingValue;                                 		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fEndingValue;                                   		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_fTransitionTime;                                		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_nApplicationType;                               		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgEffectForm_MicTransition.MicParamEntry
// 0x000C
struct FMicParamEntry
{
	int                                                m_nId;                                            		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       m_nmMicParameter;                                 		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TgGame.TgFxPool.FxPool
// 0x0010
struct FFxPool
{
	TArray< class UTgSpecialFx* >                      m_fxList;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgRepInfo_TaskForce_Slash.SlashLaneData
// 0x0020
struct FSlashLaneData
{
	TArray< class ATgPawn_Snakeman_Flagbearer* >       m_pawnFlagbearers;                                		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATgDeployableFactory_LaneSpecific*           m_factoryDeployLaneSpecific;                      		// 0x0010 (0x0008) [0x0000000000000000]              
	class ATgBotFactory_LanePushers*                   m_factoryLanePushers;                             		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_StoneOfFal.HitInfo
// 0x0014
struct FHitInfo
{
	int                                                nDevId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      nFiringInstance;                                  		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn_Charybdis.CharybdisA04ConeFx
// 0x0018
struct FCharybdisA04ConeFx
{
	struct FVector                                     m_vLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rRotation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_DepthzySkin6.DepthzySkinMaterialSectionPair
// 0x0008
struct FDepthzySkinMaterialSectionPair
{
	int                                                m_nMaterialIds[ 0x2 ];                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_DepthzySkin6.SanityBreakMeshMaterialResourceGroupData
// 0x0010
struct FSanityBreakMeshMaterialResourceGroupData
{
	int                                                m_nMeshId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nMaterialResourceGroupId;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    c_pSanityBreakMaterialResourceGroup;              		// 0x0008 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TgGame.TgPlayerVisibility.PlayerVisibilityLayer
// 0x0014
struct FPlayerVisibilityLayer
{
	struct FPointer                                    m_pawnInstigator;                                 		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       m_nmVisibilityLayer;                              		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct Fdword                                      m_dwVisibilityFlags;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgProj_Bastet_A04_V3_Pull.CachedPawnCollisionValues
// 0x0004
struct FCachedPawnCollisionValues
{
	unsigned long                                      m_bIgnoreForces : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCanBeKnockedBack : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCollideActors : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bBlockActors : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIgnoreEnchroachers : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif