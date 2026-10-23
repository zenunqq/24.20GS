#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "NetCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AIModule_structs.hpp"
#include "FortniteVersion_structs.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "WorldConditions_structs.hpp"

namespace SDK
{

enum class EAlertLevel : uint8
{
	Unaware                                  = 0,
	Alerted                                  = 1,
	LKP                                      = 2,
	Threatened                               = 3,
	Count                                    = 4,
	EAlertLevel_MAX                          = 5,
};

enum class EConvertedType : uint8
{
	NPC                                      = 0,
	Creature                                 = 1,
	All                                      = 2,
	Unknown                                  = 3,
	EConvertedType_MAX                       = 4,
};

enum class EPingCommandType : uint8
{
	GoTo                                     = 0,
	BackToMe                                 = 1,
	BackToDefault                            = 2,
	HoldPosition                             = 3,
	Revive                                   = 4,
	Dismiss                                  = 5,
	Item                                     = 6,
	Attack                                   = 7,
	Invalid                                  = 8,
	MAX                                      = 9,
};

enum class ENavigationObstacleOverride : uint8
{
	UseMeshSettings                          = 0,
	ForceEnabled                             = 1,
	ForceDisabled                            = 2,
	ExportAsPrimitive                        = 3,
	ENavigationObstacleOverride_MAX          = 4,
};

enum class EUnconvertReason : uint8
{
	StealByOtherPlayer                       = 0,
	ConverterDeath                           = 1,
	ConvertedDeath                           = 2,
	TooManyConverted                         = 3,
	TooFarFromConverter                      = 4,
	GameplayTagBlockConvert                  = 5,
	EndPlay                                  = 6,
	Dismiss                                  = 7,
	Unknown                                  = 8,
	EUnconvertReason_MAX                     = 9,
};

enum class ELootElementType : uint8
{
	Pickup                                   = 0,
	Chest                                    = 1,
	SupplyDrop                               = 2,
	Invalid                                  = 255,

};

enum class EBotNamingMode : uint8
{
	RealName                                 = 0,
	SkinName                                 = 1,
	Anonymous                                = 2,
	Custom                                   = 3,
	CharacterDataDisplayName                 = 4,
	CustomIncremental                        = 5,
	EBotNamingMode_MAX                       = 6,
};

enum class EFortEncounterUtilityDesire : uint8
{
	Low                                      = 0,
	Medium                                   = 1,
	High                                     = 2,
	VeryHigh                                 = 3,
	Max_None                                 = 4,
	EFortEncounterUtilityDesire_MAX          = 5,
};

enum class EAIHotSpotSlotFilter : uint8
{
	All                                      = 0,
	AvailableOnly                            = 1,
	UnavailableOnly                          = 2,
	EAIHotSpotSlotFilter_MAX                 = 3,
};

enum class EAIHotSpotAssignmentFilter : uint8
{
	All                                      = 0,
	WithSlots                                = 1,
	WaitingList                              = 2,
	EAIHotSpotAssignmentFilter_MAX           = 3,
};

enum class EAIHotSpotSlot : uint8
{
	Free                                     = 0,
	Claimed                                  = 1,
	Occupied                                 = 2,
	Blocked                                  = 3,
	Disabled                                 = 4,
	EAIHotSpotSlot_MAX                       = 5,
};

enum class EAthenaPathFollowingFocus : uint8
{
	TowardsNextPathPoint                     = 0,
	AlignWithSmoothedVelocity                = 1,
	EAthenaPathFollowingFocus_MAX            = 2,
};

enum class EAthenaAITelemetryEventType : uint8
{
	Spawn                                    = 0,
	Despawn                                  = 1,
	EAthenaAITelemetryEventType_MAX          = 2,
};

enum class EAICustomTargetRequestType : uint8
{
	Movement                                 = 1,
	MeleeAttack                              = 2,
	RangedAttack                             = 4,
	EAICustomTargetRequestType_MAX           = 5,
};

enum class EDespawnAIType : uint8
{
	Relevancy                                = 0,
	Distance                                 = 1,
	EDespawnAIType_MAX                       = 2,
};

enum class EFortAIDirectorEventContribution : uint8
{
	Increment                                = 0,
	Set                                      = 1,
	EFortAIDirectorEventContribution_MAX     = 2,
};

enum class EFortAIDirectorFactorContribution : uint8
{
	Direct                                   = 0,
	Inverse                                  = 1,
	EFortAIDirectorFactorContribution_MAX    = 2,
};

enum class EFortEncounterPacingState : uint8
{
	Ramp                                     = 0,
	Peak                                     = 1,
	Fade                                     = 2,
	Rest                                     = 3,
	Max_None                                 = 4,
	EFortEncounterPacingState_MAX            = 5,
};

enum class EFortEncounterState : uint8
{
	Uninitialized                            = 0,
	InitializingProperties                   = 1,
	InitializingRiftManager                  = 2,
	AwaitingActivation                       = 3,
	Active                                   = 4,
	ReplacingRifts                           = 5,
	Max_None                                 = 6,
	EFortEncounterState_MAX                  = 7,
};

enum class EFortAIWaveProgressSection : uint8
{
	SectionOne                               = 0,
	SectionTwo                               = 1,
	Max_None                                 = 2,
	EFortAIWaveProgressSection_MAX           = 3,
};

enum class EFortEncounterSequenceResult : uint8
{
	Success                                  = 0,
	FailedEncounterInProgress                = 1,
	Failed                                   = 2,
	EFortEncounterSequenceResult_MAX         = 3,
};

enum class EAssignmentCreationResult : uint8
{
	AssignmentNotFoundOrCreated              = 0,
	AssignmentCreated                        = 1,
	AssignmentFound                          = 2,
	EAssignmentCreationResult_MAX            = 3,
};

enum class ECorePerceptionTypes : uint8
{
	Sight                                    = 0,
	Hearing                                  = 1,
	Damage                                   = 2,
	Touch                                    = 3,
	Team                                     = 4,
	Prediction                               = 5,
	MAX                                      = 6,
};

enum class EFortAILODLevel : uint8
{
	Invalid                                  = 0,
	MIN                                      = 0,
	Dormant                                  = 1,
	BelowLower                               = 2,
	Lower                                    = 3,
	AboveLower                               = 4,
	BelowNormal                              = 5,
	Normal                                   = 6,
	AboveNormal                              = 7,
	MAX                                      = 8,
};

enum class EAssignmentType : uint8
{
	Invalid                                  = 0,
	Encounter                                = 1,
	World                                    = 2,
	Enemy                                    = 3,
	NumAssignmentTypes                       = 4,
	EAssignmentType_MAX                      = 5,
};

enum class EBuildingWallArea : uint8
{
	Regular                                  = 0,
	Flat                                     = 1,
	Special                                  = 2,
	EBuildingWallArea_MAX                    = 3,
};

enum class EBuildingStairsRailing : uint8
{
	None                                     = 0,
	Partial                                  = 1,
	Full                                     = 2,
	EBuildingStairsRailing_MAX               = 3,
};

enum class EBuildingFloorRailing : uint8
{
	None                                     = 0,
	Balcony                                  = 1,
	EBuildingFloorRailing_MAX                = 2,
};

enum class EFortHotSpotSlot : uint8
{
	Melee                                    = 0,
	MeleeHuge                                = 1,
	Ranged                                   = 2,
	None                                     = 3,
	EFortHotSpotSlot_MAX                     = 4,
};

enum class EFortHotSpotDirection : uint8
{
	PositiveX                                = 0,
	NegativeX                                = 1,
	PositiveY                                = 2,
	NegativeY                                = 3,
	PositiveZ                                = 4,
	NegativeZ                                = 5,
	Any                                      = 6,
	EFortHotSpotDirection_MAX                = 7,
};

enum class EFortHotSpotPreview : uint8
{
	None                                     = 0,
	Smashing                                 = 1,
	Shooting                                 = 2,
	EFortHotSpotPreview_MAX                  = 3,
};

enum class EHotspotTypeConfigMode : uint8
{
	AlwaysAdd                                = 0,
	WhenNotDefined                           = 1,
	WhenNotValid                             = 2,
	EHotspotTypeConfigMode_MAX               = 3,
};

enum class EFortPartialPathUsage : uint8
{
	Always                                   = 0,
	OnlyGoalsOnDestructible                  = 1,
	Never                                    = 2,
	EFortPartialPathUsage_MAX                = 3,
};

enum class ETargetDistanceComparisonType : uint8
{
	TwoDimensions                            = 0,
	ThreeDimensions                          = 1,
	CollisionHalfHeightMultiplier            = 2,
	ETargetDistanceComparisonType_MAX        = 3,
};

enum class EAIScalableFloatScalingType : uint32
{
	Disabled                                 = 0,
	ReceivedDamageByTarget                   = 1,
	EAIScalableFloatScalingType_MAX          = 2,
};

enum class ETeleportReason : uint8
{
	AgentNotOnNavmesh                        = 0,
	AgentDestinationNotOnNavMesh             = 1,
	AgentStuckInRepetitivePartialPaths       = 2,
	AgentBlocked                             = 3,
	Unknown                                  = 4,
	ETeleportReason_MAX                      = 5,
};

enum class EObstacleType : uint8
{
	IncomingSmashable                        = 0,
	BlockingSmashable                        = 1,
	BlockingDetectedTrap                     = 2,
	Unknown                                  = 3,
	Count                                    = 3,
	EObstacleType_MAX                        = 4,
};

enum class EHarvestResult : uint8
{
	None                                     = 0,
	InProgress                               = 1,
	Success                                  = 2,
	Fail                                     = 3,
	EHarvestResult_MAX                       = 4,
};

enum class EReachLocationValidationMode : uint8
{
	None                                     = 0,
	Storm                                    = 1,
	Leash                                    = 2,
	SoftLeash                                = 3,
	EReachLocationValidationMode_MAX         = 4,
};

enum class EBlackboardUpdateType : uint8
{
	NoUpdate                                 = 0,
	UpdateNow                                = 1,
	UpdateNextTick                           = 2,
	EBlackboardUpdateType_MAX                = 3,
};

enum class EBotControllerClamberStatus : uint8
{
	Invalid                                  = 0,
	MoveStarted                              = 1,
	MoveDone                                 = 2,
	MoveFailed                               = 3,
	EBotControllerClamberStatus_MAX          = 4,
};

enum class EDefensivePlayerStyleSource : uint8
{
	Unknown                                  = 0,
	Escape                                   = 1,
	MAX                                      = 2,
};

enum class ETwoPointSolverRotationA : uint8
{
	PointAToQuerier                          = 0,
	QuerierToPointA                          = 1,
	PointAToQuerierWithRandomOffset          = 2,
	QuerierToPointAWithRandomOffset          = 3,
	Custom                                   = 4,
	ETwoPointSolverRotationA_MAX             = 5,
};

enum class EFortIntensityCurveSequenceType : uint8
{
	Sequence                                 = 0,
	Loop                                     = 1,
	Random                                   = 2,
	Max_None                                 = 3,
	EFortIntensityCurveSequenceType_MAX      = 4,
};

enum class EFortNavLinkPattern : uint8
{
	Floor                                    = 0,
	Stairs                                   = 1,
	Roof                                     = 2,
	Manual                                   = 3,
	EFortNavLinkPattern_MAX                  = 4,
};

enum class EFortNamedNavmesh : uint8
{
	Husk                                     = 0,
	Smasher                                  = 1,
	MAX                                      = 2,
};

enum class EPathObstacleAction : uint8
{
	Melee                                    = 0,
	Ignore                                   = 1,
	AbortMoveAsFailed                        = 2,
	FinishMoveAsSucceeded                    = 3,
	EPathObstacleAction_MAX                  = 4,
};

enum class EPathUndermineEvent : uint8
{
	Predicted                                = 0,
	Started                                  = 1,
	Finished                                 = 2,
	EPathUndermineEvent_MAX                  = 3,
};

enum class EWardAffectType : uint8
{
	AffectsBothStartAndEndPoints             = 0,
	AffectsOnlyStartPoints                   = 1,
	AffectsOnlyEndPoints                     = 2,
	EWardAffectType_MAX                      = 3,
};

enum class ETagGoalScoringCategory : uint8
{
	Ignore                                   = 0,
	HighInterest                             = 1,
	NumCategories                            = 2,
	ETagGoalScoringCategory_MAX              = 3,
};

enum class EBoundingBoxSlotDirectionCalculation : uint8
{
	Auto                                     = 0,
	FaceWall                                 = 1,
	FaceAwayFromWall                         = 2,
	FaceCenter                               = 3,
	EBoundingBoxSlotDirectionCalculation_MAX = 4,
};

enum class EFortAreaFlag : uint8
{
	Default                                  = 0,
	Obstacle                                 = 1,
	Smashable                                = 2,
	Unwalkable                               = 3,
	Interactable                             = 4,
	EFortAreaFlag_MAX                        = 5,
};

enum class EInBoundsState : uint8
{
	NoBounds                                 = 0,
	NotInBounds                              = 1,
	InBounds                                 = 2,
	EInBoundsState_MAX                       = 3,
};

enum class ENavPathRendererStatus : uint8
{
	INVALID                                  = 0,
	CALCULATING                              = 1,
	SUCCESS                                  = 2,
	FAILED                                   = 3,
	ENavPathRendererStatus_MAX               = 4,
};

enum class EFortThreatDeactivationType : uint8
{
	Off                                      = 0,
	Dormant                                  = 1,
	EFortThreatDeactivationType_MAX          = 2,
};

enum class EFortCreativePatrolPathGroup : uint8
{
	Group_1                                  = 0,
	Group_2                                  = 1,
	Group_3                                  = 2,
	Group_4                                  = 3,
	Group_5                                  = 4,
	Group_6                                  = 5,
	Group_7                                  = 6,
	Group_8                                  = 7,
	Group_9                                  = 8,
	Group_10                                 = 9,
	Group_11                                 = 10,
	Group_12                                 = 11,
	Group_13                                 = 12,
	Group_14                                 = 13,
	Group_15                                 = 14,
	Group_16                                 = 15,
	Group_17                                 = 16,
	Group_18                                 = 17,
	Group_19                                 = 18,
	Group_20                                 = 19,
	Group_21                                 = 20,
	Group_22                                 = 21,
	Group_23                                 = 22,
	Group_24                                 = 23,
	Group_25                                 = 24,
	Group_26                                 = 25,
	Group_27                                 = 26,
	Group_28                                 = 27,
	Group_29                                 = 28,
	Group_30                                 = 29,
	Group_31                                 = 30,
	Group_32                                 = 31,
	Group_33                                 = 32,
	Group_34                                 = 33,
	Group_35                                 = 34,
	Group_36                                 = 35,
	Group_37                                 = 36,
	Group_38                                 = 37,
	Group_39                                 = 38,
	Group_40                                 = 39,
	Group_41                                 = 40,
	Group_42                                 = 41,
	Group_43                                 = 42,
	Group_44                                 = 43,
	Group_45                                 = 44,
	Group_46                                 = 45,
	Group_47                                 = 46,
	Group_48                                 = 47,
	Group_49                                 = 48,
	Group_50                                 = 49,
	Group_51                                 = 50,
	Group_52                                 = 51,
	Group_53                                 = 52,
	Group_54                                 = 53,
	Group_55                                 = 54,
	Group_56                                 = 55,
	Group_57                                 = 56,
	Group_58                                 = 57,
	Group_59                                 = 58,
	Group_60                                 = 59,
	Group_61                                 = 60,
	Group_62                                 = 61,
	Group_63                                 = 62,
	Group_64                                 = 63,
	Group_65                                 = 64,
	Group_66                                 = 65,
	Group_67                                 = 66,
	Group_68                                 = 67,
	Group_69                                 = 68,
	Group_70                                 = 69,
	Group_71                                 = 70,
	Group_72                                 = 71,
	Group_73                                 = 72,
	Group_74                                 = 73,
	Group_75                                 = 74,
	Group_76                                 = 75,
	Group_77                                 = 76,
	Group_78                                 = 77,
	Group_79                                 = 78,
	Group_80                                 = 79,
	Group_81                                 = 80,
	Group_82                                 = 81,
	Group_83                                 = 82,
	Group_84                                 = 83,
	Group_85                                 = 84,
	Group_86                                 = 85,
	Group_87                                 = 86,
	Group_88                                 = 87,
	Group_89                                 = 88,
	Group_90                                 = 89,
	Group_91                                 = 90,
	Group_92                                 = 91,
	Group_93                                 = 92,
	Group_94                                 = 93,
	Group_95                                 = 94,
	Group_96                                 = 95,
	Group_97                                 = 96,
	Group_98                                 = 97,
	Group_99                                 = 98,
	Group_100                                = 99,
	Group_None                               = 100,
	Group_MAX                                = 101,
};

enum class EAIBotBuildingTemplate : uint8
{
	SingleWall                               = 0,
	SingleRamp                               = 1,
	SingleRoof                               = 2,
	SingleBrace                              = 3,
	SingleWallWindow                         = 4,
	MAX                                      = 5,
};

enum class EBotDataOverrideCosmeticMode : uint8
{
	SpecificLoadout                          = 0,
	CosmeticLibrary                          = 1,
	BotDataOverrideCosmeticMode_MAX          = 2,
};

enum class EAILootExcludeListReason : uint8
{
	Invalid                                  = 0,
	ExecutionError                           = 1,
	CannotReachLootLocation                  = 2,
	OutsideSafeZoneRadius                    = 3,
	NoInventorySpace                         = 4,
	LootStateUnavailable                     = 5,
	PathNotFound                             = 6,
	GoalOffNavmesh                           = 7,
	AgentBlocked                             = 8,
	IsolatedIsland                           = 9,
	UnsupportedItem                          = 10,
	Count                                    = 11,
	EAILootExcludeListReason_MAX             = 12,
};

enum class EBotMovementState : uint8
{
	None                                     = 0,
	InProgress                               = 1,
	Failed_NoPathFound                       = 2,
	Failed_Aborted                           = 3,
	Failed_AgentOffNavmesh                   = 4,
	Failed_GoalOffNavmesh                    = 5,
	Failed_Blocked                           = 6,
	Failed_OffPath                           = 7,
	Failed_Falling                           = 8,
	Success                                  = 9,
	Success_Partial                          = 10,
	Success_AlreadyAtGoal                    = 11,
	EBotMovementState_MAX                    = 12,
};

enum class EBotUnstuckSteeringReason : uint8
{
	Unknown                                  = 0,
	OffNavMesh                               = 1,
	IsolatedIsland                           = 2,
	EBotUnstuckSteeringReason_MAX            = 3,
};

enum class EExecutionStatus : uint8
{
	ExecutionError                           = 0,
	ExecutionDenied                          = 1,
	ExecutionSuccess                         = 2,
	ExecutionPending                         = 3,
	ExecutionAllowed                         = 4,
	EExecutionStatus_MAX                     = 5,
};

enum class EFortAthenaAIObjectTrackerQueryOrder : uint8
{
	None                                     = 0,
	Distance                                 = 1,
	EFortAthenaAIObjectTrackerQueryOrder_MAX = 2,
};

enum class EFortAthenaSmartObjectPriority : uint8
{
	Lowest                                   = 0,
	Lower                                    = 1,
	Low                                      = 2,
	BelowNormal                              = 3,
	Normal                                   = 4,
	AboveNormal                              = 5,
	High                                     = 6,
	Higher                                   = 7,
	Highest                                  = 8,
	MIN                                      = 0,
	MAX                                      = 8,
};

enum class EFortAthenaAISpawnerDataComponentTriBool : uint8
{
	Yes                                      = 0,
	No                                       = 1,
	DoNotModify                              = 2,
	EFortAthenaAISpawnerDataComponentTriBool_MAX = 3,
};

enum class EBehaviorTreeBranches : uint8
{
	CanUseDiving                             = 0,
	CanUseGliding                            = 1,
	CanReactToProjectile                     = 2,
	CanReactToTraps                          = 3,
	CanAvoidDangerArea                       = 4,
	CanBeConverted                           = 5,
	CanPropagateAwareness                    = 6,
	CanUseThreatenedBehaviors                = 7,
	CanUseLastKnownPositionBehavior          = 8,
	CanUseAlertedBehavior                    = 9,
	CanUseSmartObjects                       = 10,
	CanReviveDBNOTeammates                   = 11,
	CanPlayEmote                             = 12,
	CanConverse                              = 13,
	CanPatrolOnPath                          = 14,
	CanPatrolAround                          = 15,
	CanTeleportWhenStuck                     = 16,
	CanEmoteWhenStuck                        = 17,
	Count                                    = 18,
	EBehaviorTreeBranches_MAX                = 19,
};

enum class EBehaviorTreeBranchesBitmask : uint8
{
	CanUseDiving                             = 0,
	CanUseGliding                            = 1,
	CanReactToProjectile                     = 2,
	CanReactToTraps                          = 3,
	CanAvoidDangerArea                       = 4,
	CanBeConverted                           = 5,
	CanPropagateAwareness                    = 6,
	CanUseThreatenedBehaviors                = 7,
	CanUseLastKnownPositionBehavior          = 8,
	CanUseAlertedBehavior                    = 9,
	CanUseSmartObjects                       = 10,
	CanReviveDBNOTeammates                   = 11,
	CanPlayEmote                             = 12,
	CanConverse                              = 13,
	CanPatrolOnPath                          = 14,
	CanPatrolAround                          = 15,
	CanTeleportWhenStuck                     = 16,
	CanEmoteWhenStuck                        = 17,
	Count                                    = 18,
	EBehaviorTreeBranchesBitmask_MAX         = 19,
};

enum class EPatrollingMode : uint8
{
	BackAndForth                             = 0,
	Loop                                     = 1,
	StopAtEnd                                = 2,
	EPatrollingMode_MAX                      = 3,
};

enum class EDBNOPlayStyle : uint8
{
	Thirsty                                  = 0,
	Default                                  = 1,
	Passive                                  = 2,
	ThristyButPassiveOnPlayers               = 3,
	DefaultButPassiveOnPlayers               = 4,
	EDBNOPlayStyle_MAX                       = 5,
};

enum class EStimType : uint8
{
	Seeing                                   = 0,
	Seen                                     = 1,
	MightHaveSeen                            = 2,
	Hurt                                     = 3,
	Heard                                    = 4,
	Obstacle                                 = 5,
	Enemy                                    = 6,
	Unknown                                  = 7,
	Count                                    = 7,
	EStimType_MAX                            = 8,
};

enum class EPerceptionState : uint8
{
	Threat_Seeing                            = 0,
	Threat_LKP                               = 1,
	Threat_Alerted                           = 2,
	ObstacleIncoming                         = 3,
	ObstacleBlockedBy                        = 4,
	ObstacleDetectedTrap                     = 5,
	Unknown                                  = 6,
	Count                                    = 6,
	Threat_Count                             = 3,
	EPerceptionState_MAX                     = 7,
};

enum class ETrackingOffsetModifierCurve : uint8
{
	Default                                  = 0,
	CombatStart                              = 1,
	TargetLowHealth                          = 2,
	MAX                                      = 3,
};

enum class EPerceptionSoundType : uint8
{
	Default                                  = 0,
	Explosion                                = 1,
	ProjectileFlyBy                          = 2,
	ProjectileImpact                         = 3,
	WeaponFiring                             = 4,
	Building                                 = 5,
	MeleeImpact                              = 6,
	MAX                                      = 7,
};

enum class ELookAtType : uint8
{
	ScanAround                               = 0,
	Investigate                              = 1,
	HeardSound                               = 2,
	Ambush                                   = 3,
	MAX                                      = 4,
};

enum class ELeashReturnLocationMode : uint8
{
	Closest                                  = 0,
	Random                                   = 1,
	ELeashReturnLocationMode_MAX             = 2,
};

enum class EOrientedConstructionBuildingType : uint8
{
	WallX                                    = 0,
	WallY                                    = 1,
	Floor                                    = 2,
	StairsUpX                                = 3,
	StairsUpY                                = 4,
	StairsDownX                              = 5,
	StairsDownY                              = 6,
	Roof                                     = 7,
	BraceLeftX                               = 8,
	BraceRightX                              = 9,
	BraceLeftY                               = 10,
	BraceRightY                              = 11,
	WallWindowX                              = 12,
	WallWindowY                              = 13,
	Count                                    = 14,
	EOrientedConstructionBuildingType_MAX    = 15,
};

enum class EConstructionBuildingType : uint8
{
	Wall                                     = 0,
	Floor                                    = 1,
	Stairs                                   = 2,
	Roof                                     = 3,
	Brace                                    = 4,
	WallWindow                               = 5,
	Count                                    = 6,
	EConstructionBuildingType_MAX            = 7,
};

enum class EAthenaAIServicePOIList : uint8
{
	MainBusDrop                              = 0,
	SecondaryBusDrop                         = 1,
	OnGround                                 = 2,
	EAthenaAIServicePOIList_MAX              = 3,
};

enum class EAthenaAITrackedZoneType : uint8
{
	Occluder                                 = 0,
	Danger                                   = 1,
	EAthenaAITrackedZoneType_MAX             = 2,
};

enum class EBotPOIType : uint8
{
	Unknown                                  = 0,
	ClusterLoot                              = 1,
	MidMatchObjective                        = 2,
	EBotPOIType_MAX                          = 3,
};

enum class EBotPOIUsageBitmask : uint8
{
	None                                     = 0,
	BotJumpOffBus                            = 1,
	BotNavigation                            = 2,
	EBotPOIUsageBitmask_MAX                  = 3,
};

enum class ERatingsEnforcementType : uint8
{
	Default                                  = 0,
	IgnoreMaximums                           = 1,
	IgnoreParty                              = 2,
	IgnorePartyMaximum                       = 3,
	ERatingsEnforcementType_MAX              = 4,
};

enum class EClampType : uint8
{
	Minimum                                  = 0,
	Maximum                                  = 1,
	EClampType_MAX                           = 2,
};

struct FTargetBasedAccuracy final
{
public:
	struct FScalableFloat                         AimTrackingOffsetErrorMultiplier;
	struct FScalableFloat                         AimTrackingHeightOffsetErrorMultiplier;
	struct FScalableFloat                         AimTrackingDistanceErrorMultiplier;
	struct FScalableFloat                         AimTrackingReactionTimeMultiplier;
	struct FScalableFloat                         AimTrackingInterpTimeMultiplier;
	struct FScalableFloat                         AimTrackingInAirVelocityThresholdMultiplier;
	struct FScalableFloat                         AimTrackinginAirHeightDataThresholdMultiplier;
};
static_assert(alignof(FTargetBasedAccuracy) == 0x000008, "Wrong alignment on FTargetBasedAccuracy");
static_assert(sizeof(FTargetBasedAccuracy) == 0x000118, "Wrong size on FTargetBasedAccuracy");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackingOffsetErrorMultiplier) == 0x000000, "Member 'FTargetBasedAccuracy::AimTrackingOffsetErrorMultiplier' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackingHeightOffsetErrorMultiplier) == 0x000028, "Member 'FTargetBasedAccuracy::AimTrackingHeightOffsetErrorMultiplier' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackingDistanceErrorMultiplier) == 0x000050, "Member 'FTargetBasedAccuracy::AimTrackingDistanceErrorMultiplier' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackingReactionTimeMultiplier) == 0x000078, "Member 'FTargetBasedAccuracy::AimTrackingReactionTimeMultiplier' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackingInterpTimeMultiplier) == 0x0000A0, "Member 'FTargetBasedAccuracy::AimTrackingInterpTimeMultiplier' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackingInAirVelocityThresholdMultiplier) == 0x0000C8, "Member 'FTargetBasedAccuracy::AimTrackingInAirVelocityThresholdMultiplier' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracy, AimTrackinginAirHeightDataThresholdMultiplier) == 0x0000F0, "Member 'FTargetBasedAccuracy::AimTrackinginAirHeightDataThresholdMultiplier' has a wrong offset!");

struct FTargetBasedAccuracyCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FTargetBasedAccuracy                   TargetBasedAccuracy;
};
static_assert(alignof(FTargetBasedAccuracyCategory) == 0x000008, "Wrong alignment on FTargetBasedAccuracyCategory");
static_assert(sizeof(FTargetBasedAccuracyCategory) == 0x000138, "Wrong size on FTargetBasedAccuracyCategory");
static_assert(offsetof(FTargetBasedAccuracyCategory, Tags) == 0x000000, "Member 'FTargetBasedAccuracyCategory::Tags' has a wrong offset!");
static_assert(offsetof(FTargetBasedAccuracyCategory, TargetBasedAccuracy) == 0x000020, "Member 'FTargetBasedAccuracyCategory::TargetBasedAccuracy' has a wrong offset!");

struct FDebugMinimapData final
{
public:
	bool                                          bIsOverridden;
	uint8                                         Pad_1[0xF];
	struct FSlateBrush                            DebugMinimapIconBrush;
	struct FVector2D                              DebugMinimapIconScale;
	struct FSlateBrush                            DebugCompassIconBrush;
	struct FVector2D                              DebugCompassIconScale;
};
static_assert(alignof(FDebugMinimapData) == 0x000010, "Wrong alignment on FDebugMinimapData");
static_assert(sizeof(FDebugMinimapData) == 0x0001B0, "Wrong size on FDebugMinimapData");
static_assert(offsetof(FDebugMinimapData, bIsOverridden) == 0x000000, "Member 'FDebugMinimapData::bIsOverridden' has a wrong offset!");
static_assert(offsetof(FDebugMinimapData, DebugMinimapIconBrush) == 0x000010, "Member 'FDebugMinimapData::DebugMinimapIconBrush' has a wrong offset!");
static_assert(offsetof(FDebugMinimapData, DebugMinimapIconScale) == 0x0000D0, "Member 'FDebugMinimapData::DebugMinimapIconScale' has a wrong offset!");
static_assert(offsetof(FDebugMinimapData, DebugCompassIconBrush) == 0x0000E0, "Member 'FDebugMinimapData::DebugCompassIconBrush' has a wrong offset!");
static_assert(offsetof(FDebugMinimapData, DebugCompassIconScale) == 0x0001A0, "Member 'FDebugMinimapData::DebugCompassIconScale' has a wrong offset!");

struct FFortInjectedBehaviorEntry final
{
public:
	struct FGameplayTagContainer                  InjectionTags;
	TSubclassOf<class UFortInjectedBehavior>      InjectedBehavior;
};
static_assert(alignof(FFortInjectedBehaviorEntry) == 0x000008, "Wrong alignment on FFortInjectedBehaviorEntry");
static_assert(sizeof(FFortInjectedBehaviorEntry) == 0x000028, "Wrong size on FFortInjectedBehaviorEntry");
static_assert(offsetof(FFortInjectedBehaviorEntry, InjectionTags) == 0x000000, "Member 'FFortInjectedBehaviorEntry::InjectionTags' has a wrong offset!");
static_assert(offsetof(FFortInjectedBehaviorEntry, InjectedBehavior) == 0x000020, "Member 'FFortInjectedBehaviorEntry::InjectedBehavior' has a wrong offset!");

struct FFortAISpawnerTagQueryInjectedBehavior final
{
public:
	struct FGameplayTagQuery                      SpawnerTagsQuery;
	TArray<struct FFortInjectedBehaviorEntry>     InjectedBehaviors;
};
static_assert(alignof(FFortAISpawnerTagQueryInjectedBehavior) == 0x000008, "Wrong alignment on FFortAISpawnerTagQueryInjectedBehavior");
static_assert(sizeof(FFortAISpawnerTagQueryInjectedBehavior) == 0x000058, "Wrong size on FFortAISpawnerTagQueryInjectedBehavior");
static_assert(offsetof(FFortAISpawnerTagQueryInjectedBehavior, SpawnerTagsQuery) == 0x000000, "Member 'FFortAISpawnerTagQueryInjectedBehavior::SpawnerTagsQuery' has a wrong offset!");
static_assert(offsetof(FFortAISpawnerTagQueryInjectedBehavior, InjectedBehaviors) == 0x000048, "Member 'FFortAISpawnerTagQueryInjectedBehavior::InjectedBehaviors' has a wrong offset!");

struct FFortAthenaAIFormationSlotRuntime final
{
public:
	struct FVector                                LocalLocation;
	class AFortPawn*                              UserPawn;
};
static_assert(alignof(FFortAthenaAIFormationSlotRuntime) == 0x000008, "Wrong alignment on FFortAthenaAIFormationSlotRuntime");
static_assert(sizeof(FFortAthenaAIFormationSlotRuntime) == 0x000020, "Wrong size on FFortAthenaAIFormationSlotRuntime");
static_assert(offsetof(FFortAthenaAIFormationSlotRuntime, LocalLocation) == 0x000000, "Member 'FFortAthenaAIFormationSlotRuntime::LocalLocation' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIFormationSlotRuntime, UserPawn) == 0x000018, "Member 'FFortAthenaAIFormationSlotRuntime::UserPawn' has a wrong offset!");

struct FFortAISpawnGroupUpgradeUIData final
{
public:
	bool                                          bAlwaysDisplayHealthBar;
	bool                                          bOverrideHealthBarColor;
	uint8                                         Pad_2[0x6];
	TSoftObjectPtr<class UTexture2D>              UpgradeIconImage;
	struct FSlateColor                            UpgradeIconTintColor;
	struct FLinearColor                           HealthBarColorOverride;
	uint8                                         Pad_54[0x4];
	class FText                                   UpgradeName;
};
static_assert(alignof(FFortAISpawnGroupUpgradeUIData) == 0x000008, "Wrong alignment on FFortAISpawnGroupUpgradeUIData");
static_assert(sizeof(FFortAISpawnGroupUpgradeUIData) == 0x000070, "Wrong size on FFortAISpawnGroupUpgradeUIData");
static_assert(offsetof(FFortAISpawnGroupUpgradeUIData, bAlwaysDisplayHealthBar) == 0x000000, "Member 'FFortAISpawnGroupUpgradeUIData::bAlwaysDisplayHealthBar' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeUIData, bOverrideHealthBarColor) == 0x000001, "Member 'FFortAISpawnGroupUpgradeUIData::bOverrideHealthBarColor' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeUIData, UpgradeIconImage) == 0x000008, "Member 'FFortAISpawnGroupUpgradeUIData::UpgradeIconImage' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeUIData, UpgradeIconTintColor) == 0x000030, "Member 'FFortAISpawnGroupUpgradeUIData::UpgradeIconTintColor' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeUIData, HealthBarColorOverride) == 0x000044, "Member 'FFortAISpawnGroupUpgradeUIData::HealthBarColorOverride' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeUIData, UpgradeName) == 0x000058, "Member 'FFortAISpawnGroupUpgradeUIData::UpgradeName' has a wrong offset!");

struct alignas(0x08) FClimbLinkData final
{
public:
	uint8                                         Pad_0[0x38];
	uint32                                        UniqueLinkId;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FClimbLinkData) == 0x000008, "Wrong alignment on FClimbLinkData");
static_assert(sizeof(FClimbLinkData) == 0x000040, "Wrong size on FClimbLinkData");
static_assert(offsetof(FClimbLinkData, UniqueLinkId) == 0x000038, "Member 'FClimbLinkData::UniqueLinkId' has a wrong offset!");

struct FFortAthenaAILODSetting
{
public:
	bool                                          bIsValid;
};
static_assert(alignof(FFortAthenaAILODSetting) == 0x000001, "Wrong alignment on FFortAthenaAILODSetting");
static_assert(sizeof(FFortAthenaAILODSetting) == 0x000001, "Wrong size on FFortAthenaAILODSetting");
static_assert(offsetof(FFortAthenaAILODSetting, bIsValid) == 0x000000, "Member 'FFortAthenaAILODSetting::bIsValid' has a wrong offset!");

struct FFortAILODSetting_AIEvaluator final : public FFortAthenaAILODSetting
{
public:
	uint8                                         Pad_1[0x7];
	struct FScalableFloat                         IntervalMultiplier;
	uint8                                         Pad_30[0x8];
	struct FScalableFloat                         RandomDeviationMultiplier;
	uint8                                         Pad_60[0x8];
};
static_assert(alignof(FFortAILODSetting_AIEvaluator) == 0x000008, "Wrong alignment on FFortAILODSetting_AIEvaluator");
static_assert(sizeof(FFortAILODSetting_AIEvaluator) == 0x000068, "Wrong size on FFortAILODSetting_AIEvaluator");
static_assert(offsetof(FFortAILODSetting_AIEvaluator, IntervalMultiplier) == 0x000008, "Member 'FFortAILODSetting_AIEvaluator::IntervalMultiplier' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_AIEvaluator, RandomDeviationMultiplier) == 0x000038, "Member 'FFortAILODSetting_AIEvaluator::RandomDeviationMultiplier' has a wrong offset!");

struct FFortAILODSetting_CharacterMovement final : public FFortAthenaAILODSetting
{
public:
	uint8                                         Pad_1[0x7];
	struct FScalableFloat                         Interval;
	struct FScalableFloat                         RandomDeviation;
	struct FScalableFloat                         MinimumDynamicInterval;
	struct FScalableFloat                         MaximumDotDifferenceBetweenInputVectors;
	struct FScalableFloat                         bDisableAvoidance;
	struct FScalableFloat                         bBotsEnableNavWalkingMode;
	struct FScalableFloat                         bBotsEnablePhysNavWalkingPathFollowingMode;
	struct FScalableFloat                         bSweepWhileNavWalking;
	struct FScalableFloat                         bGenerateOverlapInNavWalking;
	uint8                                         Pad_170[0x18];
};
static_assert(alignof(FFortAILODSetting_CharacterMovement) == 0x000008, "Wrong alignment on FFortAILODSetting_CharacterMovement");
static_assert(sizeof(FFortAILODSetting_CharacterMovement) == 0x000188, "Wrong size on FFortAILODSetting_CharacterMovement");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, Interval) == 0x000008, "Member 'FFortAILODSetting_CharacterMovement::Interval' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, RandomDeviation) == 0x000030, "Member 'FFortAILODSetting_CharacterMovement::RandomDeviation' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, MinimumDynamicInterval) == 0x000058, "Member 'FFortAILODSetting_CharacterMovement::MinimumDynamicInterval' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, MaximumDotDifferenceBetweenInputVectors) == 0x000080, "Member 'FFortAILODSetting_CharacterMovement::MaximumDotDifferenceBetweenInputVectors' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, bDisableAvoidance) == 0x0000A8, "Member 'FFortAILODSetting_CharacterMovement::bDisableAvoidance' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, bBotsEnableNavWalkingMode) == 0x0000D0, "Member 'FFortAILODSetting_CharacterMovement::bBotsEnableNavWalkingMode' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, bBotsEnablePhysNavWalkingPathFollowingMode) == 0x0000F8, "Member 'FFortAILODSetting_CharacterMovement::bBotsEnablePhysNavWalkingPathFollowingMode' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, bSweepWhileNavWalking) == 0x000120, "Member 'FFortAILODSetting_CharacterMovement::bSweepWhileNavWalking' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_CharacterMovement, bGenerateOverlapInNavWalking) == 0x000148, "Member 'FFortAILODSetting_CharacterMovement::bGenerateOverlapInNavWalking' has a wrong offset!");

struct FFortAILODSetting_FortWeaponRanged final : public FFortAthenaAILODSetting
{
public:
	uint8                                         Pad_1[0x7];
	struct FScalableFloat                         Interval;
	uint8                                         Pad_30[0x8];
	struct FScalableFloat                         RandomDeviation;
	uint8                                         Pad_60[0x8];
};
static_assert(alignof(FFortAILODSetting_FortWeaponRanged) == 0x000008, "Wrong alignment on FFortAILODSetting_FortWeaponRanged");
static_assert(sizeof(FFortAILODSetting_FortWeaponRanged) == 0x000068, "Wrong size on FFortAILODSetting_FortWeaponRanged");
static_assert(offsetof(FFortAILODSetting_FortWeaponRanged, Interval) == 0x000008, "Member 'FFortAILODSetting_FortWeaponRanged::Interval' has a wrong offset!");
static_assert(offsetof(FFortAILODSetting_FortWeaponRanged, RandomDeviation) == 0x000038, "Member 'FFortAILODSetting_FortWeaponRanged::RandomDeviation' has a wrong offset!");

struct FTrackingOffsetModifiers final
{
public:
	struct FScalableFloat                         CombatStartDuration;
	struct FScalableFloat                         TargetLowHealthThreshold;
	struct FScalableFloat                         Curves[0x3];
	struct FScalableFloat                         DistanceCurves[0x3];
	struct FScalableFloat                         InAirHeightCurve;
};
static_assert(alignof(FTrackingOffsetModifiers) == 0x000008, "Wrong alignment on FTrackingOffsetModifiers");
static_assert(sizeof(FTrackingOffsetModifiers) == 0x000168, "Wrong size on FTrackingOffsetModifiers");
static_assert(offsetof(FTrackingOffsetModifiers, CombatStartDuration) == 0x000000, "Member 'FTrackingOffsetModifiers::CombatStartDuration' has a wrong offset!");
static_assert(offsetof(FTrackingOffsetModifiers, TargetLowHealthThreshold) == 0x000028, "Member 'FTrackingOffsetModifiers::TargetLowHealthThreshold' has a wrong offset!");
static_assert(offsetof(FTrackingOffsetModifiers, Curves) == 0x000050, "Member 'FTrackingOffsetModifiers::Curves' has a wrong offset!");
static_assert(offsetof(FTrackingOffsetModifiers, DistanceCurves) == 0x0000C8, "Member 'FTrackingOffsetModifiers::DistanceCurves' has a wrong offset!");
static_assert(offsetof(FTrackingOffsetModifiers, InAirHeightCurve) == 0x000140, "Member 'FTrackingOffsetModifiers::InAirHeightCurve' has a wrong offset!");

struct FFortAILODSetting_GenericTickingObject final : public FFortAthenaAILODSetting
{
public:
	uint8                                         Pad_1[0x7];
	struct FScalableFloat                         TickMultiplier;
	uint8                                         Pad_30[0x8];
};
static_assert(alignof(FFortAILODSetting_GenericTickingObject) == 0x000008, "Wrong alignment on FFortAILODSetting_GenericTickingObject");
static_assert(sizeof(FFortAILODSetting_GenericTickingObject) == 0x000038, "Wrong size on FFortAILODSetting_GenericTickingObject");
static_assert(offsetof(FFortAILODSetting_GenericTickingObject, TickMultiplier) == 0x000008, "Member 'FFortAILODSetting_GenericTickingObject::TickMultiplier' has a wrong offset!");

struct FFortItemInjectedBehaviorsDataTableRow final : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortItemDefinition>     ItemDefinition;
	TArray<struct FFortInjectedBehaviorEntry>     InjectedBehaviors;
};
static_assert(alignof(FFortItemInjectedBehaviorsDataTableRow) == 0x000008, "Wrong alignment on FFortItemInjectedBehaviorsDataTableRow");
static_assert(sizeof(FFortItemInjectedBehaviorsDataTableRow) == 0x000040, "Wrong size on FFortItemInjectedBehaviorsDataTableRow");
static_assert(offsetof(FFortItemInjectedBehaviorsDataTableRow, ItemDefinition) == 0x000008, "Member 'FFortItemInjectedBehaviorsDataTableRow::ItemDefinition' has a wrong offset!");
static_assert(offsetof(FFortItemInjectedBehaviorsDataTableRow, InjectedBehaviors) == 0x000030, "Member 'FFortItemInjectedBehaviorsDataTableRow::InjectedBehaviors' has a wrong offset!");

struct FAimingCircleSettings final
{
public:
	struct FScalableFloat                         UseAimingCircle;
	struct FScalableFloat                         CircleCenterOffsetZ;
	struct FScalableFloat                         MinCircleOpeningAngleVerticalCurve;
	struct FScalableFloat                         MaxCircleOpeningAngleVerticalCurve;
	struct FScalableFloat                         MinCircleOpeningAngleHorizontalCurve;
	struct FScalableFloat                         MaxCircleOpeningAngleHorizontalCurve;
	struct FScalableFloat                         MinCursorRotationSpeed;
	struct FScalableFloat                         MaxCursorRotationSpeed;
	struct FScalableFloat                         MinCursorUpdateInterval;
	struct FScalableFloat                         MaxCursorUpdateInterval;
	struct FScalableFloat                         MinCursorTrackingFrequency;
	struct FScalableFloat                         MaxCursorTrackingFrequency;
	struct FScalableFloat                         CircleShrinkCurve;
	struct FScalableFloat                         MinDistanceForTimeBetweenHits;
	struct FScalableFloat                         MaxDistanceForTimeBetweenHits;
	struct FScalableFloat                         MinTimeBetweenHitsAtMinRange;
	struct FScalableFloat                         MaxTimeBetweenHitsAtMinRange;
	struct FScalableFloat                         MinTimeBetweenHitsAtMaxRange;
	struct FScalableFloat                         MaxTimeBetweenHitsAtMaxRange;
	struct FScalableFloat                         ForceMissEnabled;
	struct FScalableFloat                         PreventHeadshots;
	struct FScalableFloat                         WeaponSpreadContributionToClampCurve;
	struct FScalableFloat                         KillingBlowGracePeriodAtMinRange;
	struct FScalableFloat                         KillingBlowGracePeriodAtMaxRange;
	struct FScalableFloat                         ExtraHitOddsCurve;
};
static_assert(alignof(FAimingCircleSettings) == 0x000008, "Wrong alignment on FAimingCircleSettings");
static_assert(sizeof(FAimingCircleSettings) == 0x0003E8, "Wrong size on FAimingCircleSettings");
static_assert(offsetof(FAimingCircleSettings, UseAimingCircle) == 0x000000, "Member 'FAimingCircleSettings::UseAimingCircle' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, CircleCenterOffsetZ) == 0x000028, "Member 'FAimingCircleSettings::CircleCenterOffsetZ' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinCircleOpeningAngleVerticalCurve) == 0x000050, "Member 'FAimingCircleSettings::MinCircleOpeningAngleVerticalCurve' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxCircleOpeningAngleVerticalCurve) == 0x000078, "Member 'FAimingCircleSettings::MaxCircleOpeningAngleVerticalCurve' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinCircleOpeningAngleHorizontalCurve) == 0x0000A0, "Member 'FAimingCircleSettings::MinCircleOpeningAngleHorizontalCurve' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxCircleOpeningAngleHorizontalCurve) == 0x0000C8, "Member 'FAimingCircleSettings::MaxCircleOpeningAngleHorizontalCurve' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinCursorRotationSpeed) == 0x0000F0, "Member 'FAimingCircleSettings::MinCursorRotationSpeed' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxCursorRotationSpeed) == 0x000118, "Member 'FAimingCircleSettings::MaxCursorRotationSpeed' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinCursorUpdateInterval) == 0x000140, "Member 'FAimingCircleSettings::MinCursorUpdateInterval' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxCursorUpdateInterval) == 0x000168, "Member 'FAimingCircleSettings::MaxCursorUpdateInterval' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinCursorTrackingFrequency) == 0x000190, "Member 'FAimingCircleSettings::MinCursorTrackingFrequency' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxCursorTrackingFrequency) == 0x0001B8, "Member 'FAimingCircleSettings::MaxCursorTrackingFrequency' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, CircleShrinkCurve) == 0x0001E0, "Member 'FAimingCircleSettings::CircleShrinkCurve' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinDistanceForTimeBetweenHits) == 0x000208, "Member 'FAimingCircleSettings::MinDistanceForTimeBetweenHits' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxDistanceForTimeBetweenHits) == 0x000230, "Member 'FAimingCircleSettings::MaxDistanceForTimeBetweenHits' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinTimeBetweenHitsAtMinRange) == 0x000258, "Member 'FAimingCircleSettings::MinTimeBetweenHitsAtMinRange' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxTimeBetweenHitsAtMinRange) == 0x000280, "Member 'FAimingCircleSettings::MaxTimeBetweenHitsAtMinRange' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MinTimeBetweenHitsAtMaxRange) == 0x0002A8, "Member 'FAimingCircleSettings::MinTimeBetweenHitsAtMaxRange' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, MaxTimeBetweenHitsAtMaxRange) == 0x0002D0, "Member 'FAimingCircleSettings::MaxTimeBetweenHitsAtMaxRange' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, ForceMissEnabled) == 0x0002F8, "Member 'FAimingCircleSettings::ForceMissEnabled' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, PreventHeadshots) == 0x000320, "Member 'FAimingCircleSettings::PreventHeadshots' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, WeaponSpreadContributionToClampCurve) == 0x000348, "Member 'FAimingCircleSettings::WeaponSpreadContributionToClampCurve' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, KillingBlowGracePeriodAtMinRange) == 0x000370, "Member 'FAimingCircleSettings::KillingBlowGracePeriodAtMinRange' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, KillingBlowGracePeriodAtMaxRange) == 0x000398, "Member 'FAimingCircleSettings::KillingBlowGracePeriodAtMaxRange' has a wrong offset!");
static_assert(offsetof(FAimingCircleSettings, ExtraHitOddsCurve) == 0x0003C0, "Member 'FAimingCircleSettings::ExtraHitOddsCurve' has a wrong offset!");

struct FWeaponAccuracy final
{
public:
	struct FScalableFloat                         MaxTrackingOffsetError;
	struct FScalableFloat                         TargetingMaxTrackingOffsetError;
	struct FScalableFloat                         MaxTrackingDistanceFarError;
	struct FScalableFloat                         TargetingMaxTrackingDistanceFarError;
	struct FScalableFloat                         MaxTrackingDistanceNearError;
	struct FScalableFloat                         TargetingMaxTrackingDistanceNearError;
	struct FScalableFloat                         TrackingDistanceNearErrorProbability;
	struct FScalableFloat                         TargetingActivationProbability;
	struct FScalableFloat                         FiringRestrictedToTargetingActive;
	struct FScalableFloat                         MinimumDistanceForAiming;
	struct FScalableFloat                         MinimumDistanceForPawnAiming;
	struct FScalableFloat                         IdealAttackRange;
	struct FScalableFloat                         TargetingIdealAttackRange;
	struct FScalableFloat                         MaxAttackRangeFactor;
	struct FScalableFloat                         ShouldAimAtTargetsFeet;
	struct FScalableFloat                         ShouldUseProjectileArcForAiming;
	struct FScalableFloat                         KeepAimingOnSameSideWhileFiring;
	struct FScalableFloat                         MaxTrackingHeightOffsetError;
	struct FScalableFloat                         MinRotationInterpSpeed;
	struct FScalableFloat                         MaxRotationInterpSpeed;
	struct FScalableFloat                         ConsiderProjectileTravelTime;
	bool                                          bOverrideAimingCircleSettings;
	uint8                                         Pad_349[0x7];
	struct FAimingCircleSettings                  AimingCircleSettingsOverride;
};
static_assert(alignof(FWeaponAccuracy) == 0x000008, "Wrong alignment on FWeaponAccuracy");
static_assert(sizeof(FWeaponAccuracy) == 0x000738, "Wrong size on FWeaponAccuracy");
static_assert(offsetof(FWeaponAccuracy, MaxTrackingOffsetError) == 0x000000, "Member 'FWeaponAccuracy::MaxTrackingOffsetError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, TargetingMaxTrackingOffsetError) == 0x000028, "Member 'FWeaponAccuracy::TargetingMaxTrackingOffsetError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MaxTrackingDistanceFarError) == 0x000050, "Member 'FWeaponAccuracy::MaxTrackingDistanceFarError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, TargetingMaxTrackingDistanceFarError) == 0x000078, "Member 'FWeaponAccuracy::TargetingMaxTrackingDistanceFarError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MaxTrackingDistanceNearError) == 0x0000A0, "Member 'FWeaponAccuracy::MaxTrackingDistanceNearError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, TargetingMaxTrackingDistanceNearError) == 0x0000C8, "Member 'FWeaponAccuracy::TargetingMaxTrackingDistanceNearError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, TrackingDistanceNearErrorProbability) == 0x0000F0, "Member 'FWeaponAccuracy::TrackingDistanceNearErrorProbability' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, TargetingActivationProbability) == 0x000118, "Member 'FWeaponAccuracy::TargetingActivationProbability' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, FiringRestrictedToTargetingActive) == 0x000140, "Member 'FWeaponAccuracy::FiringRestrictedToTargetingActive' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MinimumDistanceForAiming) == 0x000168, "Member 'FWeaponAccuracy::MinimumDistanceForAiming' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MinimumDistanceForPawnAiming) == 0x000190, "Member 'FWeaponAccuracy::MinimumDistanceForPawnAiming' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, IdealAttackRange) == 0x0001B8, "Member 'FWeaponAccuracy::IdealAttackRange' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, TargetingIdealAttackRange) == 0x0001E0, "Member 'FWeaponAccuracy::TargetingIdealAttackRange' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MaxAttackRangeFactor) == 0x000208, "Member 'FWeaponAccuracy::MaxAttackRangeFactor' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, ShouldAimAtTargetsFeet) == 0x000230, "Member 'FWeaponAccuracy::ShouldAimAtTargetsFeet' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, ShouldUseProjectileArcForAiming) == 0x000258, "Member 'FWeaponAccuracy::ShouldUseProjectileArcForAiming' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, KeepAimingOnSameSideWhileFiring) == 0x000280, "Member 'FWeaponAccuracy::KeepAimingOnSameSideWhileFiring' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MaxTrackingHeightOffsetError) == 0x0002A8, "Member 'FWeaponAccuracy::MaxTrackingHeightOffsetError' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MinRotationInterpSpeed) == 0x0002D0, "Member 'FWeaponAccuracy::MinRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, MaxRotationInterpSpeed) == 0x0002F8, "Member 'FWeaponAccuracy::MaxRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, ConsiderProjectileTravelTime) == 0x000320, "Member 'FWeaponAccuracy::ConsiderProjectileTravelTime' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, bOverrideAimingCircleSettings) == 0x000348, "Member 'FWeaponAccuracy::bOverrideAimingCircleSettings' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracy, AimingCircleSettingsOverride) == 0x000350, "Member 'FWeaponAccuracy::AimingCircleSettingsOverride' has a wrong offset!");

struct FPendingSpawnInfo final
{
public:
	TSubclassOf<class AFortAIPawn>                PawnClassToSpawn;
	class AActor*                                 SpawnPoint;
	struct FVector                                SpawnLocation;
	struct FRotator                               SpawnRotation;
	class AActor*                                 SpawnSource;
	bool                                          bSpawnedFromExternalSpawner;
	EFortressAIType                               AIType;
	uint8                                         Pad_4A[0x6];
	class AFortPlayerController*                  TargetPlayer;
	class UFortAIEncounterInfo*                   EncounterInfo;
	float                                         DifficultyLevel;
	uint8                                         Pad_64[0x4];
	class UFortAISpawnGroup*                      SpawnGroup;
	struct FGuid                                  SpawnGroupGuid;
	int32                                         EnemyIndexInSpawnGroup;
	float                                         TimeToSpawn;
	struct FGuid                                  PendingSpawnInfoGuid;
	bool                                          bIgnoreCollision;
	bool                                          bKillBuildingActorsAtSpawnLocation;
	uint8                                         Pad_9A[0x2];
	float                                         EncounterAILifespan;
	float                                         ScoreMultiplier;
	bool                                          bDebugSpawnedAI;
	uint8                                         Pad_A5[0x3];
	TArray<class UFortAbilitySet*>                AbilitySetsToGrantOnSpawn;
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn;
	struct FFortAISpawnGroupUpgradeUIData         UpgradeUIData;
	struct FFortAIPawnLootDropData                LootDropData;
};
static_assert(alignof(FPendingSpawnInfo) == 0x000008, "Wrong alignment on FPendingSpawnInfo");
static_assert(sizeof(FPendingSpawnInfo) == 0x000148, "Wrong size on FPendingSpawnInfo");
static_assert(offsetof(FPendingSpawnInfo, PawnClassToSpawn) == 0x000000, "Member 'FPendingSpawnInfo::PawnClassToSpawn' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, SpawnPoint) == 0x000008, "Member 'FPendingSpawnInfo::SpawnPoint' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, SpawnLocation) == 0x000010, "Member 'FPendingSpawnInfo::SpawnLocation' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, SpawnRotation) == 0x000028, "Member 'FPendingSpawnInfo::SpawnRotation' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, SpawnSource) == 0x000040, "Member 'FPendingSpawnInfo::SpawnSource' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, bSpawnedFromExternalSpawner) == 0x000048, "Member 'FPendingSpawnInfo::bSpawnedFromExternalSpawner' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, AIType) == 0x000049, "Member 'FPendingSpawnInfo::AIType' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, TargetPlayer) == 0x000050, "Member 'FPendingSpawnInfo::TargetPlayer' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, EncounterInfo) == 0x000058, "Member 'FPendingSpawnInfo::EncounterInfo' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, DifficultyLevel) == 0x000060, "Member 'FPendingSpawnInfo::DifficultyLevel' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, SpawnGroup) == 0x000068, "Member 'FPendingSpawnInfo::SpawnGroup' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, SpawnGroupGuid) == 0x000070, "Member 'FPendingSpawnInfo::SpawnGroupGuid' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, EnemyIndexInSpawnGroup) == 0x000080, "Member 'FPendingSpawnInfo::EnemyIndexInSpawnGroup' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, TimeToSpawn) == 0x000084, "Member 'FPendingSpawnInfo::TimeToSpawn' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, PendingSpawnInfoGuid) == 0x000088, "Member 'FPendingSpawnInfo::PendingSpawnInfoGuid' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, bIgnoreCollision) == 0x000098, "Member 'FPendingSpawnInfo::bIgnoreCollision' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, bKillBuildingActorsAtSpawnLocation) == 0x000099, "Member 'FPendingSpawnInfo::bKillBuildingActorsAtSpawnLocation' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, EncounterAILifespan) == 0x00009C, "Member 'FPendingSpawnInfo::EncounterAILifespan' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, ScoreMultiplier) == 0x0000A0, "Member 'FPendingSpawnInfo::ScoreMultiplier' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, bDebugSpawnedAI) == 0x0000A4, "Member 'FPendingSpawnInfo::bDebugSpawnedAI' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, AbilitySetsToGrantOnSpawn) == 0x0000A8, "Member 'FPendingSpawnInfo::AbilitySetsToGrantOnSpawn' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, ModifiersToApplyOnSpawn) == 0x0000B8, "Member 'FPendingSpawnInfo::ModifiersToApplyOnSpawn' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, UpgradeUIData) == 0x0000C8, "Member 'FPendingSpawnInfo::UpgradeUIData' has a wrong offset!");
static_assert(offsetof(FPendingSpawnInfo, LootDropData) == 0x000138, "Member 'FPendingSpawnInfo::LootDropData' has a wrong offset!");

struct FMMRSpawningBracketBaseDataTableRow : public FTableRowBase
{
public:
	int32                                         MMRBracketLow;
	int32                                         MMRBracketHigh;
};
static_assert(alignof(FMMRSpawningBracketBaseDataTableRow) == 0x000008, "Wrong alignment on FMMRSpawningBracketBaseDataTableRow");
static_assert(sizeof(FMMRSpawningBracketBaseDataTableRow) == 0x000010, "Wrong size on FMMRSpawningBracketBaseDataTableRow");
static_assert(offsetof(FMMRSpawningBracketBaseDataTableRow, MMRBracketLow) == 0x000008, "Member 'FMMRSpawningBracketBaseDataTableRow::MMRBracketLow' has a wrong offset!");
static_assert(offsetof(FMMRSpawningBracketBaseDataTableRow, MMRBracketHigh) == 0x00000C, "Member 'FMMRSpawningBracketBaseDataTableRow::MMRBracketHigh' has a wrong offset!");

struct FDigestedAimingCircleSettings final
{
public:
	bool                                          bUseAimingCircle;
	uint8                                         Pad_1[0x3];
	float                                         CircleCenterOffsetZ;
	struct FScalableFloat                         MinCircleOpeningAngleVerticalCurve;
	struct FScalableFloat                         MaxCircleOpeningAngleVerticalCurve;
	struct FScalableFloat                         MinCircleOpeningAngleHorizontalCurve;
	struct FScalableFloat                         MaxCircleOpeningAngleHorizontalCurve;
	float                                         MinCursorRotationSpeed;
	float                                         MaxCursorRotationSpeed;
	float                                         MinCursorUpdateInterval;
	float                                         MaxCursorUpdateInterval;
	float                                         MinCursorTrackingFrequency;
	float                                         MaxCursorTrackingFrequency;
	struct FScalableFloat                         CircleShrinkCurve;
	float                                         MinDistanceForTimeBetweenHits;
	float                                         MaxDistanceForTimeBetweenHits;
	float                                         MinTimeBetweenHitsAtMinRange;
	float                                         MaxTimeBetweenHitsAtMinRange;
	float                                         MinTimeBetweenHitsAtMaxRange;
	float                                         MaxTimeBetweenHitsAtMaxRange;
	bool                                          bForceMissEnabled;
	bool                                          bPreventHeadshots;
	uint8                                         Pad_102[0x6];
	struct FScalableFloat                         WeaponSpreadContributionToClampCurve;
	float                                         KillingBlowGracePeriodAtMinRange;
	float                                         KillingBlowGracePeriodAtMaxRange;
	struct FScalableFloat                         ExtraHitOddsCurve;
};
static_assert(alignof(FDigestedAimingCircleSettings) == 0x000008, "Wrong alignment on FDigestedAimingCircleSettings");
static_assert(sizeof(FDigestedAimingCircleSettings) == 0x000160, "Wrong size on FDigestedAimingCircleSettings");
static_assert(offsetof(FDigestedAimingCircleSettings, bUseAimingCircle) == 0x000000, "Member 'FDigestedAimingCircleSettings::bUseAimingCircle' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, CircleCenterOffsetZ) == 0x000004, "Member 'FDigestedAimingCircleSettings::CircleCenterOffsetZ' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinCircleOpeningAngleVerticalCurve) == 0x000008, "Member 'FDigestedAimingCircleSettings::MinCircleOpeningAngleVerticalCurve' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxCircleOpeningAngleVerticalCurve) == 0x000030, "Member 'FDigestedAimingCircleSettings::MaxCircleOpeningAngleVerticalCurve' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinCircleOpeningAngleHorizontalCurve) == 0x000058, "Member 'FDigestedAimingCircleSettings::MinCircleOpeningAngleHorizontalCurve' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxCircleOpeningAngleHorizontalCurve) == 0x000080, "Member 'FDigestedAimingCircleSettings::MaxCircleOpeningAngleHorizontalCurve' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinCursorRotationSpeed) == 0x0000A8, "Member 'FDigestedAimingCircleSettings::MinCursorRotationSpeed' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxCursorRotationSpeed) == 0x0000AC, "Member 'FDigestedAimingCircleSettings::MaxCursorRotationSpeed' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinCursorUpdateInterval) == 0x0000B0, "Member 'FDigestedAimingCircleSettings::MinCursorUpdateInterval' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxCursorUpdateInterval) == 0x0000B4, "Member 'FDigestedAimingCircleSettings::MaxCursorUpdateInterval' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinCursorTrackingFrequency) == 0x0000B8, "Member 'FDigestedAimingCircleSettings::MinCursorTrackingFrequency' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxCursorTrackingFrequency) == 0x0000BC, "Member 'FDigestedAimingCircleSettings::MaxCursorTrackingFrequency' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, CircleShrinkCurve) == 0x0000C0, "Member 'FDigestedAimingCircleSettings::CircleShrinkCurve' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinDistanceForTimeBetweenHits) == 0x0000E8, "Member 'FDigestedAimingCircleSettings::MinDistanceForTimeBetweenHits' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxDistanceForTimeBetweenHits) == 0x0000EC, "Member 'FDigestedAimingCircleSettings::MaxDistanceForTimeBetweenHits' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinTimeBetweenHitsAtMinRange) == 0x0000F0, "Member 'FDigestedAimingCircleSettings::MinTimeBetweenHitsAtMinRange' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxTimeBetweenHitsAtMinRange) == 0x0000F4, "Member 'FDigestedAimingCircleSettings::MaxTimeBetweenHitsAtMinRange' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MinTimeBetweenHitsAtMaxRange) == 0x0000F8, "Member 'FDigestedAimingCircleSettings::MinTimeBetweenHitsAtMaxRange' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, MaxTimeBetweenHitsAtMaxRange) == 0x0000FC, "Member 'FDigestedAimingCircleSettings::MaxTimeBetweenHitsAtMaxRange' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, bForceMissEnabled) == 0x000100, "Member 'FDigestedAimingCircleSettings::bForceMissEnabled' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, bPreventHeadshots) == 0x000101, "Member 'FDigestedAimingCircleSettings::bPreventHeadshots' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, WeaponSpreadContributionToClampCurve) == 0x000108, "Member 'FDigestedAimingCircleSettings::WeaponSpreadContributionToClampCurve' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, KillingBlowGracePeriodAtMinRange) == 0x000130, "Member 'FDigestedAimingCircleSettings::KillingBlowGracePeriodAtMinRange' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, KillingBlowGracePeriodAtMaxRange) == 0x000134, "Member 'FDigestedAimingCircleSettings::KillingBlowGracePeriodAtMaxRange' has a wrong offset!");
static_assert(offsetof(FDigestedAimingCircleSettings, ExtraHitOddsCurve) == 0x000138, "Member 'FDigestedAimingCircleSettings::ExtraHitOddsCurve' has a wrong offset!");

struct alignas(0x08) FMMRSpawningBaseRuntimeInfo
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FMMRSpawningBaseRuntimeInfo) == 0x000008, "Wrong alignment on FMMRSpawningBaseRuntimeInfo");
static_assert(sizeof(FMMRSpawningBaseRuntimeInfo) == 0x000010, "Wrong size on FMMRSpawningBaseRuntimeInfo");

struct FMMRSpawningDataTableInfo final
{
public:
	TSubclassOf<class UFortAthenaAISpawnerData>   AISpawnerData;
	float                                         Skill;
	float                                         Weight;
	int32                                         SpawingItemIndex;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FMMRSpawningDataTableInfo) == 0x000008, "Wrong alignment on FMMRSpawningDataTableInfo");
static_assert(sizeof(FMMRSpawningDataTableInfo) == 0x000018, "Wrong size on FMMRSpawningDataTableInfo");
static_assert(offsetof(FMMRSpawningDataTableInfo, AISpawnerData) == 0x000000, "Member 'FMMRSpawningDataTableInfo::AISpawnerData' has a wrong offset!");
static_assert(offsetof(FMMRSpawningDataTableInfo, Skill) == 0x000008, "Member 'FMMRSpawningDataTableInfo::Skill' has a wrong offset!");
static_assert(offsetof(FMMRSpawningDataTableInfo, Weight) == 0x00000C, "Member 'FMMRSpawningDataTableInfo::Weight' has a wrong offset!");
static_assert(offsetof(FMMRSpawningDataTableInfo, SpawingItemIndex) == 0x000010, "Member 'FMMRSpawningDataTableInfo::SpawingItemIndex' has a wrong offset!");

struct FMMRPhaseSpawningDataTableInfo final
{
public:
	int32                                         GamePhaseIndexToSpawn;
	uint8                                         Pad_4[0x4];
	TArray<struct FMMRSpawningDataTableInfo>      SpawningItems;
};
static_assert(alignof(FMMRPhaseSpawningDataTableInfo) == 0x000008, "Wrong alignment on FMMRPhaseSpawningDataTableInfo");
static_assert(sizeof(FMMRPhaseSpawningDataTableInfo) == 0x000018, "Wrong size on FMMRPhaseSpawningDataTableInfo");
static_assert(offsetof(FMMRPhaseSpawningDataTableInfo, GamePhaseIndexToSpawn) == 0x000000, "Member 'FMMRPhaseSpawningDataTableInfo::GamePhaseIndexToSpawn' has a wrong offset!");
static_assert(offsetof(FMMRPhaseSpawningDataTableInfo, SpawningItems) == 0x000008, "Member 'FMMRPhaseSpawningDataTableInfo::SpawningItems' has a wrong offset!");

struct FMMRSpawningBracketBotDataTableRow final : public FMMRSpawningBracketBaseDataTableRow
{
public:
	TArray<struct FMMRPhaseSpawningDataTableInfo> PhaseSpawningItems;
};
static_assert(alignof(FMMRSpawningBracketBotDataTableRow) == 0x000008, "Wrong alignment on FMMRSpawningBracketBotDataTableRow");
static_assert(sizeof(FMMRSpawningBracketBotDataTableRow) == 0x000020, "Wrong size on FMMRSpawningBracketBotDataTableRow");
static_assert(offsetof(FMMRSpawningBracketBotDataTableRow, PhaseSpawningItems) == 0x000010, "Member 'FMMRSpawningBracketBotDataTableRow::PhaseSpawningItems' has a wrong offset!");

struct FFortAthenaAIBotBuildDescriptor final
{
public:
	struct FIntVector                             Location;
	EOrientedConstructionBuildingType             BuildingType;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FFortAthenaAIBotBuildDescriptor) == 0x000004, "Wrong alignment on FFortAthenaAIBotBuildDescriptor");
static_assert(sizeof(FFortAthenaAIBotBuildDescriptor) == 0x000010, "Wrong size on FFortAthenaAIBotBuildDescriptor");
static_assert(offsetof(FFortAthenaAIBotBuildDescriptor, Location) == 0x000000, "Member 'FFortAthenaAIBotBuildDescriptor::Location' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotBuildDescriptor, BuildingType) == 0x00000C, "Member 'FFortAthenaAIBotBuildDescriptor::BuildingType' has a wrong offset!");

struct FAIHotSpotSlotInfo
{
public:
	class AAIHotSpot*                             HotSpot;
	int32                                         SlotIndex;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FAIHotSpotSlotInfo) == 0x000008, "Wrong alignment on FAIHotSpotSlotInfo");
static_assert(sizeof(FAIHotSpotSlotInfo) == 0x000010, "Wrong size on FAIHotSpotSlotInfo");
static_assert(offsetof(FAIHotSpotSlotInfo, HotSpot) == 0x000000, "Member 'FAIHotSpotSlotInfo::HotSpot' has a wrong offset!");
static_assert(offsetof(FAIHotSpotSlotInfo, SlotIndex) == 0x000008, "Member 'FAIHotSpotSlotInfo::SlotIndex' has a wrong offset!");

struct alignas(0x08) FAthenaMemoryBudgetInterfaces final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FAthenaMemoryBudgetInterfaces) == 0x000008, "Wrong alignment on FAthenaMemoryBudgetInterfaces");
static_assert(sizeof(FAthenaMemoryBudgetInterfaces) == 0x000010, "Wrong size on FAthenaMemoryBudgetInterfaces");

struct FClientAILODMovementCompOptimizationConfiguration final
{
public:
	struct FScalableFloat                         bEnable;
	struct FScalableFloat                         bEnableSimulationDataOptimizations;
	struct FScalableFloat                         MinDistanceToApplyFrameSkippingWhenVisible;
	struct FScalableFloat                         FrameSkippingOnLOD1;
	struct FScalableFloat                         bRequireHittingPawnThresholdForLOD1;
	struct FScalableFloat                         FrameSkippingOnLOD2;
	struct FScalableFloat                         bRequireHittingPawnThresholdForLOD2;
	struct FScalableFloat                         FrameSkippingOnLowestLOD;
	struct FScalableFloat                         FrameSkippingOnLowestLODWithSmallViewAngleRendered;
	struct FScalableFloat                         FrameSkippingOnLowestLODWithSmallViewAngleNotRendered;
	struct FScalableFloat                         FrameSkippingInvisible;
	struct FScalableFloat                         bForceInvisibleValueWhenNotRenderedForThreshold;
};
static_assert(alignof(FClientAILODMovementCompOptimizationConfiguration) == 0x000008, "Wrong alignment on FClientAILODMovementCompOptimizationConfiguration");
static_assert(sizeof(FClientAILODMovementCompOptimizationConfiguration) == 0x0001E0, "Wrong size on FClientAILODMovementCompOptimizationConfiguration");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, bEnable) == 0x000000, "Member 'FClientAILODMovementCompOptimizationConfiguration::bEnable' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, bEnableSimulationDataOptimizations) == 0x000028, "Member 'FClientAILODMovementCompOptimizationConfiguration::bEnableSimulationDataOptimizations' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, MinDistanceToApplyFrameSkippingWhenVisible) == 0x000050, "Member 'FClientAILODMovementCompOptimizationConfiguration::MinDistanceToApplyFrameSkippingWhenVisible' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, FrameSkippingOnLOD1) == 0x000078, "Member 'FClientAILODMovementCompOptimizationConfiguration::FrameSkippingOnLOD1' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, bRequireHittingPawnThresholdForLOD1) == 0x0000A0, "Member 'FClientAILODMovementCompOptimizationConfiguration::bRequireHittingPawnThresholdForLOD1' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, FrameSkippingOnLOD2) == 0x0000C8, "Member 'FClientAILODMovementCompOptimizationConfiguration::FrameSkippingOnLOD2' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, bRequireHittingPawnThresholdForLOD2) == 0x0000F0, "Member 'FClientAILODMovementCompOptimizationConfiguration::bRequireHittingPawnThresholdForLOD2' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, FrameSkippingOnLowestLOD) == 0x000118, "Member 'FClientAILODMovementCompOptimizationConfiguration::FrameSkippingOnLowestLOD' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, FrameSkippingOnLowestLODWithSmallViewAngleRendered) == 0x000140, "Member 'FClientAILODMovementCompOptimizationConfiguration::FrameSkippingOnLowestLODWithSmallViewAngleRendered' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, FrameSkippingOnLowestLODWithSmallViewAngleNotRendered) == 0x000168, "Member 'FClientAILODMovementCompOptimizationConfiguration::FrameSkippingOnLowestLODWithSmallViewAngleNotRendered' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, FrameSkippingInvisible) == 0x000190, "Member 'FClientAILODMovementCompOptimizationConfiguration::FrameSkippingInvisible' has a wrong offset!");
static_assert(offsetof(FClientAILODMovementCompOptimizationConfiguration, bForceInvisibleValueWhenNotRenderedForThreshold) == 0x0001B8, "Member 'FClientAILODMovementCompOptimizationConfiguration::bForceInvisibleValueWhenNotRenderedForThreshold' has a wrong offset!");

struct FClientAILODSettings final
{
public:
	struct FScalableFloat                         ScoreMultiplier;
	struct FScalableFloat                         PreloadingPriorityOverride;
	struct FScalableFloat                         bSupportCharacterMovementOptimization;
	struct FClientAILODMovementCompOptimizationConfiguration MovementCompOptimizationConfiguration;
	struct FScalableFloat                         bAIPawnOnlyTickMeshWhenRendered;
	struct FScalableFloat                         bAIPawnApplyEffectOptimizations;
	uint8                                         Pad_2A8[0x48];
};
static_assert(alignof(FClientAILODSettings) == 0x000008, "Wrong alignment on FClientAILODSettings");
static_assert(sizeof(FClientAILODSettings) == 0x0002F0, "Wrong size on FClientAILODSettings");
static_assert(offsetof(FClientAILODSettings, ScoreMultiplier) == 0x000000, "Member 'FClientAILODSettings::ScoreMultiplier' has a wrong offset!");
static_assert(offsetof(FClientAILODSettings, PreloadingPriorityOverride) == 0x000028, "Member 'FClientAILODSettings::PreloadingPriorityOverride' has a wrong offset!");
static_assert(offsetof(FClientAILODSettings, bSupportCharacterMovementOptimization) == 0x000050, "Member 'FClientAILODSettings::bSupportCharacterMovementOptimization' has a wrong offset!");
static_assert(offsetof(FClientAILODSettings, MovementCompOptimizationConfiguration) == 0x000078, "Member 'FClientAILODSettings::MovementCompOptimizationConfiguration' has a wrong offset!");
static_assert(offsetof(FClientAILODSettings, bAIPawnOnlyTickMeshWhenRendered) == 0x000258, "Member 'FClientAILODSettings::bAIPawnOnlyTickMeshWhenRendered' has a wrong offset!");
static_assert(offsetof(FClientAILODSettings, bAIPawnApplyEffectOptimizations) == 0x000280, "Member 'FClientAILODSettings::bAIPawnApplyEffectOptimizations' has a wrong offset!");

struct FDroppingAgentData final
{
public:
	class AAthenaAIController*                    AIController;
	class ABuildingActor*                         MovementBase;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FDroppingAgentData) == 0x000008, "Wrong alignment on FDroppingAgentData");
static_assert(sizeof(FDroppingAgentData) == 0x000018, "Wrong size on FDroppingAgentData");
static_assert(offsetof(FDroppingAgentData, AIController) == 0x000000, "Member 'FDroppingAgentData::AIController' has a wrong offset!");
static_assert(offsetof(FDroppingAgentData, MovementBase) == 0x000008, "Member 'FDroppingAgentData::MovementBase' has a wrong offset!");

struct alignas(0x08) FAISpawnCountInfo final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FAISpawnCountInfo) == 0x000008, "Wrong alignment on FAISpawnCountInfo");
static_assert(sizeof(FAISpawnCountInfo) == 0x000020, "Wrong size on FAISpawnCountInfo");

struct FDigestedFocusSetting final
{
public:
	struct FGameplayTagQuery                      WeaponTagQuery;
	bool                                          bRequireAmmoToMatch;
	uint8                                         Pad_49[0x3];
	float                                         IgnoreThreatTimeWhenNotAttacking;
	float                                         IgnoreThreatDeviationWhenNotAttacking;
	float                                         IgnoreThreatDuration;
	float                                         IgnoreThreatDurationDeviation;
	float                                         IgnoreThreatDistanceWhenFleeing;
	float                                         IgnoreThreatDirectionCosAngleWhenFleeing;
	uint8                                         Pad_64[0x4];
};
static_assert(alignof(FDigestedFocusSetting) == 0x000008, "Wrong alignment on FDigestedFocusSetting");
static_assert(sizeof(FDigestedFocusSetting) == 0x000068, "Wrong size on FDigestedFocusSetting");
static_assert(offsetof(FDigestedFocusSetting, WeaponTagQuery) == 0x000000, "Member 'FDigestedFocusSetting::WeaponTagQuery' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, bRequireAmmoToMatch) == 0x000048, "Member 'FDigestedFocusSetting::bRequireAmmoToMatch' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, IgnoreThreatTimeWhenNotAttacking) == 0x00004C, "Member 'FDigestedFocusSetting::IgnoreThreatTimeWhenNotAttacking' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, IgnoreThreatDeviationWhenNotAttacking) == 0x000050, "Member 'FDigestedFocusSetting::IgnoreThreatDeviationWhenNotAttacking' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, IgnoreThreatDuration) == 0x000054, "Member 'FDigestedFocusSetting::IgnoreThreatDuration' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, IgnoreThreatDurationDeviation) == 0x000058, "Member 'FDigestedFocusSetting::IgnoreThreatDurationDeviation' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, IgnoreThreatDistanceWhenFleeing) == 0x00005C, "Member 'FDigestedFocusSetting::IgnoreThreatDistanceWhenFleeing' has a wrong offset!");
static_assert(offsetof(FDigestedFocusSetting, IgnoreThreatDirectionCosAngleWhenFleeing) == 0x000060, "Member 'FDigestedFocusSetting::IgnoreThreatDirectionCosAngleWhenFleeing' has a wrong offset!");

struct alignas(0x08) FPendingRequestManager final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FPendingRequestManager) == 0x000008, "Wrong alignment on FPendingRequestManager");
static_assert(sizeof(FPendingRequestManager) == 0x000030, "Wrong size on FPendingRequestManager");

struct FGoalSelectionQueryInfo final
{
public:
	class UEnvQuery*                              GoalSelectionQuery;
	struct FGameplayTagContainer                  RequiredGameplayTags;
};
static_assert(alignof(FGoalSelectionQueryInfo) == 0x000008, "Wrong alignment on FGoalSelectionQueryInfo");
static_assert(sizeof(FGoalSelectionQueryInfo) == 0x000028, "Wrong size on FGoalSelectionQueryInfo");
static_assert(offsetof(FGoalSelectionQueryInfo, GoalSelectionQuery) == 0x000000, "Member 'FGoalSelectionQueryInfo::GoalSelectionQuery' has a wrong offset!");
static_assert(offsetof(FGoalSelectionQueryInfo, RequiredGameplayTags) == 0x000008, "Member 'FGoalSelectionQueryInfo::RequiredGameplayTags' has a wrong offset!");

struct FEvasiveManeuverSkillSettings final
{
public:
	struct FScalableFloat                         CrouchOverlayWeight;
	struct FScalableFloat                         JumpOverlayWeight;
	struct FScalableFloat                         NoOverlayWeight;
	struct FScalableFloat                         DodgeWeight;
	struct FScalableFloat                         DodgeJumpWeight;
	struct FScalableFloat                         JumpDelay;
	struct FScalableFloat                         JumpRandomDeviationDelay;
	struct FScalableFloat                         CrouchDelay;
	struct FScalableFloat                         CrouchRandomDeviationDelay;
	struct FScalableFloat                         DodgeDelay;
	struct FScalableFloat                         DodgeRandomDeviationDelay;
	struct FScalableFloat                         DodgeDistanceMax;
	struct FScalableFloat                         DodgeDistanceMin;
	struct FScalableFloat                         CrouchTimeMax;
	struct FScalableFloat                         CrouchTimeMin;
};
static_assert(alignof(FEvasiveManeuverSkillSettings) == 0x000008, "Wrong alignment on FEvasiveManeuverSkillSettings");
static_assert(sizeof(FEvasiveManeuverSkillSettings) == 0x000258, "Wrong size on FEvasiveManeuverSkillSettings");
static_assert(offsetof(FEvasiveManeuverSkillSettings, CrouchOverlayWeight) == 0x000000, "Member 'FEvasiveManeuverSkillSettings::CrouchOverlayWeight' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, JumpOverlayWeight) == 0x000028, "Member 'FEvasiveManeuverSkillSettings::JumpOverlayWeight' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, NoOverlayWeight) == 0x000050, "Member 'FEvasiveManeuverSkillSettings::NoOverlayWeight' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, DodgeWeight) == 0x000078, "Member 'FEvasiveManeuverSkillSettings::DodgeWeight' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, DodgeJumpWeight) == 0x0000A0, "Member 'FEvasiveManeuverSkillSettings::DodgeJumpWeight' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, JumpDelay) == 0x0000C8, "Member 'FEvasiveManeuverSkillSettings::JumpDelay' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, JumpRandomDeviationDelay) == 0x0000F0, "Member 'FEvasiveManeuverSkillSettings::JumpRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, CrouchDelay) == 0x000118, "Member 'FEvasiveManeuverSkillSettings::CrouchDelay' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, CrouchRandomDeviationDelay) == 0x000140, "Member 'FEvasiveManeuverSkillSettings::CrouchRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, DodgeDelay) == 0x000168, "Member 'FEvasiveManeuverSkillSettings::DodgeDelay' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, DodgeRandomDeviationDelay) == 0x000190, "Member 'FEvasiveManeuverSkillSettings::DodgeRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, DodgeDistanceMax) == 0x0001B8, "Member 'FEvasiveManeuverSkillSettings::DodgeDistanceMax' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, DodgeDistanceMin) == 0x0001E0, "Member 'FEvasiveManeuverSkillSettings::DodgeDistanceMin' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, CrouchTimeMax) == 0x000208, "Member 'FEvasiveManeuverSkillSettings::CrouchTimeMax' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettings, CrouchTimeMin) == 0x000230, "Member 'FEvasiveManeuverSkillSettings::CrouchTimeMin' has a wrong offset!");

struct FEvasiveManeuverSkillSettingsSpecialization final
{
public:
	struct FScalableFloat                         OddsToBeUsed;
	struct FScalableFloat                         MaxDuration;
	struct FScalableFloat                         MaxDurationRandomDeviation;
	struct FScalableFloat                         Cooldown;
	struct FScalableFloat                         CooldownRandomDeviation;
	class FString                                 DebugName;
	struct FScalableFloat                         DistanceMin;
	struct FScalableFloat                         DistanceMax;
	struct FGameplayTagQuery                      WeaponTagQuery;
	struct FEvasiveManeuverSkillSettings          EvasiveManeuverSkillSettings;
};
static_assert(alignof(FEvasiveManeuverSkillSettingsSpecialization) == 0x000008, "Wrong alignment on FEvasiveManeuverSkillSettingsSpecialization");
static_assert(sizeof(FEvasiveManeuverSkillSettingsSpecialization) == 0x0003C8, "Wrong size on FEvasiveManeuverSkillSettingsSpecialization");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, OddsToBeUsed) == 0x000000, "Member 'FEvasiveManeuverSkillSettingsSpecialization::OddsToBeUsed' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, MaxDuration) == 0x000028, "Member 'FEvasiveManeuverSkillSettingsSpecialization::MaxDuration' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, MaxDurationRandomDeviation) == 0x000050, "Member 'FEvasiveManeuverSkillSettingsSpecialization::MaxDurationRandomDeviation' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, Cooldown) == 0x000078, "Member 'FEvasiveManeuverSkillSettingsSpecialization::Cooldown' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, CooldownRandomDeviation) == 0x0000A0, "Member 'FEvasiveManeuverSkillSettingsSpecialization::CooldownRandomDeviation' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, DebugName) == 0x0000C8, "Member 'FEvasiveManeuverSkillSettingsSpecialization::DebugName' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, DistanceMin) == 0x0000D8, "Member 'FEvasiveManeuverSkillSettingsSpecialization::DistanceMin' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, DistanceMax) == 0x000100, "Member 'FEvasiveManeuverSkillSettingsSpecialization::DistanceMax' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, WeaponTagQuery) == 0x000128, "Member 'FEvasiveManeuverSkillSettingsSpecialization::WeaponTagQuery' has a wrong offset!");
static_assert(offsetof(FEvasiveManeuverSkillSettingsSpecialization, EvasiveManeuverSkillSettings) == 0x000170, "Member 'FEvasiveManeuverSkillSettingsSpecialization::EvasiveManeuverSkillSettings' has a wrong offset!");

struct FAICustomTargetConfiguration final
{
public:
	struct FVector                                Offset;
	uint8                                         ValidRequestTypes;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FAICustomTargetConfiguration) == 0x000008, "Wrong alignment on FAICustomTargetConfiguration");
static_assert(sizeof(FAICustomTargetConfiguration) == 0x000020, "Wrong size on FAICustomTargetConfiguration");
static_assert(offsetof(FAICustomTargetConfiguration, Offset) == 0x000000, "Member 'FAICustomTargetConfiguration::Offset' has a wrong offset!");
static_assert(offsetof(FAICustomTargetConfiguration, ValidRequestTypes) == 0x000018, "Member 'FAICustomTargetConfiguration::ValidRequestTypes' has a wrong offset!");

struct FIntensityContribution final
{
public:
	EFortCombatFactors                            CombatFactor;
	EFortAIDirectorFactor                         ContributingAIDirectorFactor;
	uint8                                         Pad_2[0x2];
	float                                         MaxContribution;
	bool                                          bModifyContributionByCompletionPercentage;
	uint8                                         Pad_9[0x7];
	struct FCurveTableRowHandle                   CompletionPercentageInitialMultiplier;
	struct FCurveTableRowHandle                   CompletionPercentageToStartReducingMultiplier;
	struct FCurveTableRowHandle                   CompletionPercentageToStopReducingMultiplier;
	bool                                          bModifyByNumberOfCriticalEncounterGoals;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FIntensityContribution) == 0x000008, "Wrong alignment on FIntensityContribution");
static_assert(sizeof(FIntensityContribution) == 0x000048, "Wrong size on FIntensityContribution");
static_assert(offsetof(FIntensityContribution, CombatFactor) == 0x000000, "Member 'FIntensityContribution::CombatFactor' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, ContributingAIDirectorFactor) == 0x000001, "Member 'FIntensityContribution::ContributingAIDirectorFactor' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, MaxContribution) == 0x000004, "Member 'FIntensityContribution::MaxContribution' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, bModifyContributionByCompletionPercentage) == 0x000008, "Member 'FIntensityContribution::bModifyContributionByCompletionPercentage' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, CompletionPercentageInitialMultiplier) == 0x000010, "Member 'FIntensityContribution::CompletionPercentageInitialMultiplier' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, CompletionPercentageToStartReducingMultiplier) == 0x000020, "Member 'FIntensityContribution::CompletionPercentageToStartReducingMultiplier' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, CompletionPercentageToStopReducingMultiplier) == 0x000030, "Member 'FIntensityContribution::CompletionPercentageToStopReducingMultiplier' has a wrong offset!");
static_assert(offsetof(FIntensityContribution, bModifyByNumberOfCriticalEncounterGoals) == 0x000040, "Member 'FIntensityContribution::bModifyByNumberOfCriticalEncounterGoals' has a wrong offset!");

struct FAthenaFortAIBotDigestedWeightedBuildingList final
{
public:
	float                                         Weight;
	uint8                                         Pad_4[0x4];
	TArray<struct FFortAthenaAIBotBuildDescriptor> BuildDescriptors;
};
static_assert(alignof(FAthenaFortAIBotDigestedWeightedBuildingList) == 0x000008, "Wrong alignment on FAthenaFortAIBotDigestedWeightedBuildingList");
static_assert(sizeof(FAthenaFortAIBotDigestedWeightedBuildingList) == 0x000018, "Wrong size on FAthenaFortAIBotDigestedWeightedBuildingList");
static_assert(offsetof(FAthenaFortAIBotDigestedWeightedBuildingList, Weight) == 0x000000, "Member 'FAthenaFortAIBotDigestedWeightedBuildingList::Weight' has a wrong offset!");
static_assert(offsetof(FAthenaFortAIBotDigestedWeightedBuildingList, BuildDescriptors) == 0x000008, "Member 'FAthenaFortAIBotDigestedWeightedBuildingList::BuildDescriptors' has a wrong offset!");

struct FIntensityData final
{
public:
	TArray<struct FIntensityContribution>         ContributingFactors;
	float                                         ContributionsTotal;
	uint8                                         Pad_14[0x4];
	TArray<class UBuildingEditModeMetadata*>      ExceptionEditModes;
	float                                         ExceptionEditModeWeight;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FIntensityData) == 0x000008, "Wrong alignment on FIntensityData");
static_assert(sizeof(FIntensityData) == 0x000030, "Wrong size on FIntensityData");
static_assert(offsetof(FIntensityData, ContributingFactors) == 0x000000, "Member 'FIntensityData::ContributingFactors' has a wrong offset!");
static_assert(offsetof(FIntensityData, ContributionsTotal) == 0x000010, "Member 'FIntensityData::ContributionsTotal' has a wrong offset!");
static_assert(offsetof(FIntensityData, ExceptionEditModes) == 0x000018, "Member 'FIntensityData::ExceptionEditModes' has a wrong offset!");
static_assert(offsetof(FIntensityData, ExceptionEditModeWeight) == 0x000028, "Member 'FIntensityData::ExceptionEditModeWeight' has a wrong offset!");

struct FUtilityTypeFloatPair final
{
public:
	EFortAIUtility                                Utility;
	uint8                                         Pad_1[0x3];
	float                                         Value;
};
static_assert(alignof(FUtilityTypeFloatPair) == 0x000004, "Wrong alignment on FUtilityTypeFloatPair");
static_assert(sizeof(FUtilityTypeFloatPair) == 0x000008, "Wrong size on FUtilityTypeFloatPair");
static_assert(offsetof(FUtilityTypeFloatPair, Utility) == 0x000000, "Member 'FUtilityTypeFloatPair::Utility' has a wrong offset!");
static_assert(offsetof(FUtilityTypeFloatPair, Value) == 0x000004, "Member 'FUtilityTypeFloatPair::Value' has a wrong offset!");

struct FLookAtDigestedSetting final
{
public:
	float                                         LookAtDuration;
	float                                         LookAtDurationDeviation;
	float                                         LookAtDelay;
	float                                         LookAtDelayDeviation;
};
static_assert(alignof(FLookAtDigestedSetting) == 0x000004, "Wrong alignment on FLookAtDigestedSetting");
static_assert(sizeof(FLookAtDigestedSetting) == 0x000010, "Wrong size on FLookAtDigestedSetting");
static_assert(offsetof(FLookAtDigestedSetting, LookAtDuration) == 0x000000, "Member 'FLookAtDigestedSetting::LookAtDuration' has a wrong offset!");
static_assert(offsetof(FLookAtDigestedSetting, LookAtDurationDeviation) == 0x000004, "Member 'FLookAtDigestedSetting::LookAtDurationDeviation' has a wrong offset!");
static_assert(offsetof(FLookAtDigestedSetting, LookAtDelay) == 0x000008, "Member 'FLookAtDigestedSetting::LookAtDelay' has a wrong offset!");
static_assert(offsetof(FLookAtDigestedSetting, LookAtDelayDeviation) == 0x00000C, "Member 'FLookAtDigestedSetting::LookAtDelayDeviation' has a wrong offset!");

struct FUtilityContribution final
{
public:
	float                                         MaxContribution;
	EFortCombatFactors                            ContributingFactor;
	EFortAIDirectorFactor                         ContributingAIDirectorFactor;
	EFortFactorContributionType                   ContributionType;
	uint8                                         Pad_7[0x1];
};
static_assert(alignof(FUtilityContribution) == 0x000004, "Wrong alignment on FUtilityContribution");
static_assert(sizeof(FUtilityContribution) == 0x000008, "Wrong size on FUtilityContribution");
static_assert(offsetof(FUtilityContribution, MaxContribution) == 0x000000, "Member 'FUtilityContribution::MaxContribution' has a wrong offset!");
static_assert(offsetof(FUtilityContribution, ContributingFactor) == 0x000004, "Member 'FUtilityContribution::ContributingFactor' has a wrong offset!");
static_assert(offsetof(FUtilityContribution, ContributingAIDirectorFactor) == 0x000005, "Member 'FUtilityContribution::ContributingAIDirectorFactor' has a wrong offset!");
static_assert(offsetof(FUtilityContribution, ContributionType) == 0x000006, "Member 'FUtilityContribution::ContributionType' has a wrong offset!");

struct FUtilityData final
{
public:
	TArray<struct FUtilityContribution>           ContributingFactors;
	float                                         ContributionsTotal;
	bool                                          bApplyRecentSelectionPenalty;
	uint8                                         Pad_15[0x3];
	float                                         RecentlySelectedPenaltyPercentage;
	float                                         PenaltyFallOffRate;
	class FString                                 DebugGraphName;
	struct FLinearColor                           DebugGraphColor;
};
static_assert(alignof(FUtilityData) == 0x000008, "Wrong alignment on FUtilityData");
static_assert(sizeof(FUtilityData) == 0x000040, "Wrong size on FUtilityData");
static_assert(offsetof(FUtilityData, ContributingFactors) == 0x000000, "Member 'FUtilityData::ContributingFactors' has a wrong offset!");
static_assert(offsetof(FUtilityData, ContributionsTotal) == 0x000010, "Member 'FUtilityData::ContributionsTotal' has a wrong offset!");
static_assert(offsetof(FUtilityData, bApplyRecentSelectionPenalty) == 0x000014, "Member 'FUtilityData::bApplyRecentSelectionPenalty' has a wrong offset!");
static_assert(offsetof(FUtilityData, RecentlySelectedPenaltyPercentage) == 0x000018, "Member 'FUtilityData::RecentlySelectedPenaltyPercentage' has a wrong offset!");
static_assert(offsetof(FUtilityData, PenaltyFallOffRate) == 0x00001C, "Member 'FUtilityData::PenaltyFallOffRate' has a wrong offset!");
static_assert(offsetof(FUtilityData, DebugGraphName) == 0x000020, "Member 'FUtilityData::DebugGraphName' has a wrong offset!");
static_assert(offsetof(FUtilityData, DebugGraphColor) == 0x000030, "Member 'FUtilityData::DebugGraphColor' has a wrong offset!");

struct FFortAIEncounterPIDControllerSettings final
{
public:
	struct FCurveTableRowHandle                   ProportionalGain;
	struct FCurveTableRowHandle                   IntegralGain;
	struct FCurveTableRowHandle                   DerivativeGain;
};
static_assert(alignof(FFortAIEncounterPIDControllerSettings) == 0x000008, "Wrong alignment on FFortAIEncounterPIDControllerSettings");
static_assert(sizeof(FFortAIEncounterPIDControllerSettings) == 0x000030, "Wrong size on FFortAIEncounterPIDControllerSettings");
static_assert(offsetof(FFortAIEncounterPIDControllerSettings, ProportionalGain) == 0x000000, "Member 'FFortAIEncounterPIDControllerSettings::ProportionalGain' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterPIDControllerSettings, IntegralGain) == 0x000010, "Member 'FFortAIEncounterPIDControllerSettings::IntegralGain' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterPIDControllerSettings, DerivativeGain) == 0x000020, "Member 'FFortAIEncounterPIDControllerSettings::DerivativeGain' has a wrong offset!");

struct alignas(0x08) FFortAIEncounterPIDController final
{
public:
	float                                         ProportionalGain;
	float                                         IntegralGain;
	float                                         DerivativeGain;
	uint8                                         Pad_C[0x5C];
};
static_assert(alignof(FFortAIEncounterPIDController) == 0x000008, "Wrong alignment on FFortAIEncounterPIDController");
static_assert(sizeof(FFortAIEncounterPIDController) == 0x000068, "Wrong size on FFortAIEncounterPIDController");
static_assert(offsetof(FFortAIEncounterPIDController, ProportionalGain) == 0x000000, "Member 'FFortAIEncounterPIDController::ProportionalGain' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterPIDController, IntegralGain) == 0x000004, "Member 'FFortAIEncounterPIDController::IntegralGain' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterPIDController, DerivativeGain) == 0x000008, "Member 'FFortAIEncounterPIDController::DerivativeGain' has a wrong offset!");

struct FDigestedBotEquipWeaponInfo final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FScalableFloat                         DistanceEffectivenessWithThreat;
	struct FScalableFloat                         DistanceEffectivenessNoThreat;
};
static_assert(alignof(FDigestedBotEquipWeaponInfo) == 0x000008, "Wrong alignment on FDigestedBotEquipWeaponInfo");
static_assert(sizeof(FDigestedBotEquipWeaponInfo) == 0x000098, "Wrong size on FDigestedBotEquipWeaponInfo");
static_assert(offsetof(FDigestedBotEquipWeaponInfo, TagQuery) == 0x000000, "Member 'FDigestedBotEquipWeaponInfo::TagQuery' has a wrong offset!");
static_assert(offsetof(FDigestedBotEquipWeaponInfo, DistanceEffectivenessWithThreat) == 0x000048, "Member 'FDigestedBotEquipWeaponInfo::DistanceEffectivenessWithThreat' has a wrong offset!");
static_assert(offsetof(FDigestedBotEquipWeaponInfo, DistanceEffectivenessNoThreat) == 0x000070, "Member 'FDigestedBotEquipWeaponInfo::DistanceEffectivenessNoThreat' has a wrong offset!");

struct FFortPlayerPerformanceEstimateSettings final
{
public:
	struct FCurveTableRowHandle                   PlayerPerformanceEstimateTransformMin;
	struct FCurveTableRowHandle                   PlayerPerformanceEstimateTransformOrigin;
	struct FCurveTableRowHandle                   PlayerPerformanceEstimateTransformMax;
	float                                         EncounterPlayerPerformanceWeight;
	float                                         PreviousWavePlayerPerformanceWeight;
	float                                         CampaignPlayerPerformanceWeight;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FFortPlayerPerformanceEstimateSettings) == 0x000008, "Wrong alignment on FFortPlayerPerformanceEstimateSettings");
static_assert(sizeof(FFortPlayerPerformanceEstimateSettings) == 0x000040, "Wrong size on FFortPlayerPerformanceEstimateSettings");
static_assert(offsetof(FFortPlayerPerformanceEstimateSettings, PlayerPerformanceEstimateTransformMin) == 0x000000, "Member 'FFortPlayerPerformanceEstimateSettings::PlayerPerformanceEstimateTransformMin' has a wrong offset!");
static_assert(offsetof(FFortPlayerPerformanceEstimateSettings, PlayerPerformanceEstimateTransformOrigin) == 0x000010, "Member 'FFortPlayerPerformanceEstimateSettings::PlayerPerformanceEstimateTransformOrigin' has a wrong offset!");
static_assert(offsetof(FFortPlayerPerformanceEstimateSettings, PlayerPerformanceEstimateTransformMax) == 0x000020, "Member 'FFortPlayerPerformanceEstimateSettings::PlayerPerformanceEstimateTransformMax' has a wrong offset!");
static_assert(offsetof(FFortPlayerPerformanceEstimateSettings, EncounterPlayerPerformanceWeight) == 0x000030, "Member 'FFortPlayerPerformanceEstimateSettings::EncounterPlayerPerformanceWeight' has a wrong offset!");
static_assert(offsetof(FFortPlayerPerformanceEstimateSettings, PreviousWavePlayerPerformanceWeight) == 0x000034, "Member 'FFortPlayerPerformanceEstimateSettings::PreviousWavePlayerPerformanceWeight' has a wrong offset!");
static_assert(offsetof(FFortPlayerPerformanceEstimateSettings, CampaignPlayerPerformanceWeight) == 0x000038, "Member 'FFortPlayerPerformanceEstimateSettings::CampaignPlayerPerformanceWeight' has a wrong offset!");

struct FFortEncounterPawnNumberCaps final
{
public:
	bool                                          bApplyPawnNumberCaps;
	uint8                                         Pad_1[0x7];
	TArray<struct FCurveTableRowHandle>           PawnCapsPerPlayerCount;
};
static_assert(alignof(FFortEncounterPawnNumberCaps) == 0x000008, "Wrong alignment on FFortEncounterPawnNumberCaps");
static_assert(sizeof(FFortEncounterPawnNumberCaps) == 0x000018, "Wrong size on FFortEncounterPawnNumberCaps");
static_assert(offsetof(FFortEncounterPawnNumberCaps, bApplyPawnNumberCaps) == 0x000000, "Member 'FFortEncounterPawnNumberCaps::bApplyPawnNumberCaps' has a wrong offset!");
static_assert(offsetof(FFortEncounterPawnNumberCaps, PawnCapsPerPlayerCount) == 0x000008, "Member 'FFortEncounterPawnNumberCaps::PawnCapsPerPlayerCount' has a wrong offset!");

struct FFortBotDigestedHealingItems final
{
public:
	float                                         UseItemResourceThreshold;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  ItemTags;
};
static_assert(alignof(FFortBotDigestedHealingItems) == 0x000008, "Wrong alignment on FFortBotDigestedHealingItems");
static_assert(sizeof(FFortBotDigestedHealingItems) == 0x000028, "Wrong size on FFortBotDigestedHealingItems");
static_assert(offsetof(FFortBotDigestedHealingItems, UseItemResourceThreshold) == 0x000000, "Member 'FFortBotDigestedHealingItems::UseItemResourceThreshold' has a wrong offset!");
static_assert(offsetof(FFortBotDigestedHealingItems, ItemTags) == 0x000008, "Member 'FFortBotDigestedHealingItems::ItemTags' has a wrong offset!");

struct FFortAIEncounterSpawnGroupCap final
{
public:
	struct FCurveTableRowHandle                   MinSpawnGroupNumberCap;
	struct FCurveTableRowHandle                   MaxSpawnGroupNumberCap;
};
static_assert(alignof(FFortAIEncounterSpawnGroupCap) == 0x000008, "Wrong alignment on FFortAIEncounterSpawnGroupCap");
static_assert(sizeof(FFortAIEncounterSpawnGroupCap) == 0x000020, "Wrong size on FFortAIEncounterSpawnGroupCap");
static_assert(offsetof(FFortAIEncounterSpawnGroupCap, MinSpawnGroupNumberCap) == 0x000000, "Member 'FFortAIEncounterSpawnGroupCap::MinSpawnGroupNumberCap' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCap, MaxSpawnGroupNumberCap) == 0x000010, "Member 'FFortAIEncounterSpawnGroupCap::MaxSpawnGroupNumberCap' has a wrong offset!");

struct FFortAIEncounterSpawnGroupCapsCategory final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	bool                                          bApplyGroupPopulationCurveToCategoryMax;
	uint8                                         Pad_49[0x7];
	struct FCurveTableRowHandle                   InitialSpawnGroupAvailabilityDelaySeconds;
	struct FCurveTableRowHandle                   SpawnGroupAvailabilityDelaySeconds;
	struct FGameplayTagQuery                      UnlockingTagQuery;
	TArray<struct FFortAIEncounterSpawnGroupCap>  SpawnGroupCapsPerPlayerCount;
	float                                         InitialSpawnGroupAvailabilityTime;
	float                                         NumActiveCategorySpawnGroups;
	TArray<float>                                 SpawnGroupAvailabilityTimes;
	int32                                         NumSpawnGroupAvailable;
	uint8                                         Pad_E4[0x4];
	class UObject*                                CategorySource;
	uint8                                         Pad_F0[0x50];
};
static_assert(alignof(FFortAIEncounterSpawnGroupCapsCategory) == 0x000008, "Wrong alignment on FFortAIEncounterSpawnGroupCapsCategory");
static_assert(sizeof(FFortAIEncounterSpawnGroupCapsCategory) == 0x000140, "Wrong size on FFortAIEncounterSpawnGroupCapsCategory");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, TagQuery) == 0x000000, "Member 'FFortAIEncounterSpawnGroupCapsCategory::TagQuery' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, bApplyGroupPopulationCurveToCategoryMax) == 0x000048, "Member 'FFortAIEncounterSpawnGroupCapsCategory::bApplyGroupPopulationCurveToCategoryMax' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, InitialSpawnGroupAvailabilityDelaySeconds) == 0x000050, "Member 'FFortAIEncounterSpawnGroupCapsCategory::InitialSpawnGroupAvailabilityDelaySeconds' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, SpawnGroupAvailabilityDelaySeconds) == 0x000060, "Member 'FFortAIEncounterSpawnGroupCapsCategory::SpawnGroupAvailabilityDelaySeconds' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, UnlockingTagQuery) == 0x000070, "Member 'FFortAIEncounterSpawnGroupCapsCategory::UnlockingTagQuery' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, SpawnGroupCapsPerPlayerCount) == 0x0000B8, "Member 'FFortAIEncounterSpawnGroupCapsCategory::SpawnGroupCapsPerPlayerCount' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, InitialSpawnGroupAvailabilityTime) == 0x0000C8, "Member 'FFortAIEncounterSpawnGroupCapsCategory::InitialSpawnGroupAvailabilityTime' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, NumActiveCategorySpawnGroups) == 0x0000CC, "Member 'FFortAIEncounterSpawnGroupCapsCategory::NumActiveCategorySpawnGroups' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, SpawnGroupAvailabilityTimes) == 0x0000D0, "Member 'FFortAIEncounterSpawnGroupCapsCategory::SpawnGroupAvailabilityTimes' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, NumSpawnGroupAvailable) == 0x0000E0, "Member 'FFortAIEncounterSpawnGroupCapsCategory::NumSpawnGroupAvailable' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsCategory, CategorySource) == 0x0000E8, "Member 'FFortAIEncounterSpawnGroupCapsCategory::CategorySource' has a wrong offset!");

struct FFortAthenaAIBotRunTimeCustomizationData final
{
public:
	struct FGameplayTag                           PredefinedCosmeticSetTag;
	float                                         CullDistanceSquared;
	bool                                          bCheckForOverlaps;
	bool                                          bHasCustomSquadId;
	uint8                                         CustomSquadId;
	uint8                                         Pad_B[0x1];
};
static_assert(alignof(FFortAthenaAIBotRunTimeCustomizationData) == 0x000004, "Wrong alignment on FFortAthenaAIBotRunTimeCustomizationData");
static_assert(sizeof(FFortAthenaAIBotRunTimeCustomizationData) == 0x00000C, "Wrong size on FFortAthenaAIBotRunTimeCustomizationData");
static_assert(offsetof(FFortAthenaAIBotRunTimeCustomizationData, PredefinedCosmeticSetTag) == 0x000000, "Member 'FFortAthenaAIBotRunTimeCustomizationData::PredefinedCosmeticSetTag' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotRunTimeCustomizationData, CullDistanceSquared) == 0x000004, "Member 'FFortAthenaAIBotRunTimeCustomizationData::CullDistanceSquared' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotRunTimeCustomizationData, bCheckForOverlaps) == 0x000008, "Member 'FFortAthenaAIBotRunTimeCustomizationData::bCheckForOverlaps' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotRunTimeCustomizationData, bHasCustomSquadId) == 0x000009, "Member 'FFortAthenaAIBotRunTimeCustomizationData::bHasCustomSquadId' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotRunTimeCustomizationData, CustomSquadId) == 0x00000A, "Member 'FFortAthenaAIBotRunTimeCustomizationData::CustomSquadId' has a wrong offset!");

struct FFortAIEncounterSpawnGroupCapsProfile final
{
public:
	struct FGameplayTagContainer                  EncounterTypeTags;
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories;
};
static_assert(alignof(FFortAIEncounterSpawnGroupCapsProfile) == 0x000008, "Wrong alignment on FFortAIEncounterSpawnGroupCapsProfile");
static_assert(sizeof(FFortAIEncounterSpawnGroupCapsProfile) == 0x000030, "Wrong size on FFortAIEncounterSpawnGroupCapsProfile");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsProfile, EncounterTypeTags) == 0x000000, "Member 'FFortAIEncounterSpawnGroupCapsProfile::EncounterTypeTags' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnGroupCapsProfile, PopulationCategories) == 0x000020, "Member 'FFortAIEncounterSpawnGroupCapsProfile::PopulationCategories' has a wrong offset!");

struct FFortAIEncounterSpawnPointsProfile final
{
public:
	struct FGameplayTagContainer                  EncounterTypeTags;
	TArray<struct FCurveTableRowHandle>           MaxSpawnPointsPerPlayerCount;
	TArray<struct FCurveTableRowHandle>           MinSpawnPointsPerPlayerCount;
};
static_assert(alignof(FFortAIEncounterSpawnPointsProfile) == 0x000008, "Wrong alignment on FFortAIEncounterSpawnPointsProfile");
static_assert(sizeof(FFortAIEncounterSpawnPointsProfile) == 0x000040, "Wrong size on FFortAIEncounterSpawnPointsProfile");
static_assert(offsetof(FFortAIEncounterSpawnPointsProfile, EncounterTypeTags) == 0x000000, "Member 'FFortAIEncounterSpawnPointsProfile::EncounterTypeTags' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnPointsProfile, MaxSpawnPointsPerPlayerCount) == 0x000020, "Member 'FFortAIEncounterSpawnPointsProfile::MaxSpawnPointsPerPlayerCount' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnPointsProfile, MinSpawnPointsPerPlayerCount) == 0x000030, "Member 'FFortAIEncounterSpawnPointsProfile::MinSpawnPointsPerPlayerCount' has a wrong offset!");

struct FFortBotDigestedHealingItemsList final
{
public:
	TArray<struct FFortBotDigestedHealingItems>   HealthItems;
};
static_assert(alignof(FFortBotDigestedHealingItemsList) == 0x000008, "Wrong alignment on FFortBotDigestedHealingItemsList");
static_assert(sizeof(FFortBotDigestedHealingItemsList) == 0x000010, "Wrong size on FFortBotDigestedHealingItemsList");
static_assert(offsetof(FFortBotDigestedHealingItemsList, HealthItems) == 0x000000, "Member 'FFortBotDigestedHealingItemsList::HealthItems' has a wrong offset!");

struct FFortBotDigestedHealingItemsSpec final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FFortBotDigestedHealingItemsList       HealthItemsList;
};
static_assert(alignof(FFortBotDigestedHealingItemsSpec) == 0x000008, "Wrong alignment on FFortBotDigestedHealingItemsSpec");
static_assert(sizeof(FFortBotDigestedHealingItemsSpec) == 0x000058, "Wrong size on FFortBotDigestedHealingItemsSpec");
static_assert(offsetof(FFortBotDigestedHealingItemsSpec, TagQuery) == 0x000000, "Member 'FFortBotDigestedHealingItemsSpec::TagQuery' has a wrong offset!");
static_assert(offsetof(FFortBotDigestedHealingItemsSpec, HealthItemsList) == 0x000048, "Member 'FFortBotDigestedHealingItemsSpec::HealthItemsList' has a wrong offset!");

struct FFortAIPawnUpgradeProbability final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FCurveTableRowHandle                   UpgradeProbability;
};
static_assert(alignof(FFortAIPawnUpgradeProbability) == 0x000008, "Wrong alignment on FFortAIPawnUpgradeProbability");
static_assert(sizeof(FFortAIPawnUpgradeProbability) == 0x000058, "Wrong size on FFortAIPawnUpgradeProbability");
static_assert(offsetof(FFortAIPawnUpgradeProbability, TagQuery) == 0x000000, "Member 'FFortAIPawnUpgradeProbability::TagQuery' has a wrong offset!");
static_assert(offsetof(FFortAIPawnUpgradeProbability, UpgradeProbability) == 0x000048, "Member 'FFortAIPawnUpgradeProbability::UpgradeProbability' has a wrong offset!");

struct FFortAISpawnGroupUpgradeData final
{
public:
	TSubclassOf<class UFortAISpawnGroupUpgrade>   SpawnGroupUpgrade;
	TSubclassOf<class UFortAISpawnGroupUpgradeProbabilities> UpgradeProbabilities;
	TSubclassOf<class UFortAISpawnGroupCapsCategorySet> SpawnGroupCapsCategories;
	struct FGameplayTagQuery                      EncounterTagRequirementsQuery;
};
static_assert(alignof(FFortAISpawnGroupUpgradeData) == 0x000008, "Wrong alignment on FFortAISpawnGroupUpgradeData");
static_assert(sizeof(FFortAISpawnGroupUpgradeData) == 0x000060, "Wrong size on FFortAISpawnGroupUpgradeData");
static_assert(offsetof(FFortAISpawnGroupUpgradeData, SpawnGroupUpgrade) == 0x000000, "Member 'FFortAISpawnGroupUpgradeData::SpawnGroupUpgrade' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeData, UpgradeProbabilities) == 0x000008, "Member 'FFortAISpawnGroupUpgradeData::UpgradeProbabilities' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeData, SpawnGroupCapsCategories) == 0x000010, "Member 'FFortAISpawnGroupUpgradeData::SpawnGroupCapsCategories' has a wrong offset!");
static_assert(offsetof(FFortAISpawnGroupUpgradeData, EncounterTagRequirementsQuery) == 0x000018, "Member 'FFortAISpawnGroupUpgradeData::EncounterTagRequirementsQuery' has a wrong offset!");

struct FDigestedSightReactionSpecialization final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FScalableFloat                         SightMinAdditionTime;
	struct FScalableFloat                         SightMaxAdditionTime;
};
static_assert(alignof(FDigestedSightReactionSpecialization) == 0x000008, "Wrong alignment on FDigestedSightReactionSpecialization");
static_assert(sizeof(FDigestedSightReactionSpecialization) == 0x000070, "Wrong size on FDigestedSightReactionSpecialization");
static_assert(offsetof(FDigestedSightReactionSpecialization, Tags) == 0x000000, "Member 'FDigestedSightReactionSpecialization::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedSightReactionSpecialization, SightMinAdditionTime) == 0x000020, "Member 'FDigestedSightReactionSpecialization::SightMinAdditionTime' has a wrong offset!");
static_assert(offsetof(FDigestedSightReactionSpecialization, SightMaxAdditionTime) == 0x000048, "Member 'FDigestedSightReactionSpecialization::SightMaxAdditionTime' has a wrong offset!");

struct FFortAIEncounterPawnDifficultyLevelModifier final
{
public:
	struct FGameplayTagQuery                      EncounterTagRequirementsQuery;
	struct FCurveTableRowHandle                   DifficultyLevelModifierCurve;
};
static_assert(alignof(FFortAIEncounterPawnDifficultyLevelModifier) == 0x000008, "Wrong alignment on FFortAIEncounterPawnDifficultyLevelModifier");
static_assert(sizeof(FFortAIEncounterPawnDifficultyLevelModifier) == 0x000058, "Wrong size on FFortAIEncounterPawnDifficultyLevelModifier");
static_assert(offsetof(FFortAIEncounterPawnDifficultyLevelModifier, EncounterTagRequirementsQuery) == 0x000000, "Member 'FFortAIEncounterPawnDifficultyLevelModifier::EncounterTagRequirementsQuery' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterPawnDifficultyLevelModifier, DifficultyLevelModifierCurve) == 0x000048, "Member 'FFortAIEncounterPawnDifficultyLevelModifier::DifficultyLevelModifierCurve' has a wrong offset!");

struct FFortPendingStoppedEncounterData final
{
public:
	class UFortAIEncounterInfo*                   Encounter;
	EFortObjectiveStatus                          ObjectiveStatus;
	bool                                          bForceDestroyAI;
	bool                                          bEncounterCompletedSuccessfully;
	uint8                                         Pad_B[0x5];
};
static_assert(alignof(FFortPendingStoppedEncounterData) == 0x000008, "Wrong alignment on FFortPendingStoppedEncounterData");
static_assert(sizeof(FFortPendingStoppedEncounterData) == 0x000010, "Wrong size on FFortPendingStoppedEncounterData");
static_assert(offsetof(FFortPendingStoppedEncounterData, Encounter) == 0x000000, "Member 'FFortPendingStoppedEncounterData::Encounter' has a wrong offset!");
static_assert(offsetof(FFortPendingStoppedEncounterData, ObjectiveStatus) == 0x000008, "Member 'FFortPendingStoppedEncounterData::ObjectiveStatus' has a wrong offset!");
static_assert(offsetof(FFortPendingStoppedEncounterData, bForceDestroyAI) == 0x000009, "Member 'FFortPendingStoppedEncounterData::bForceDestroyAI' has a wrong offset!");
static_assert(offsetof(FFortPendingStoppedEncounterData, bEncounterCompletedSuccessfully) == 0x00000A, "Member 'FFortPendingStoppedEncounterData::bEncounterCompletedSuccessfully' has a wrong offset!");

struct FBotKnockbackSettings final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FScalableFloat                         ShouldAllowCharacterToBeLaunched;
	struct FScalableFloat                         ShouldStopActiveMovement;
	struct FScalableFloat                         IgnoreMoveInputDuration;
};
static_assert(alignof(FBotKnockbackSettings) == 0x000008, "Wrong alignment on FBotKnockbackSettings");
static_assert(sizeof(FBotKnockbackSettings) == 0x0000C0, "Wrong size on FBotKnockbackSettings");
static_assert(offsetof(FBotKnockbackSettings, TagQuery) == 0x000000, "Member 'FBotKnockbackSettings::TagQuery' has a wrong offset!");
static_assert(offsetof(FBotKnockbackSettings, ShouldAllowCharacterToBeLaunched) == 0x000048, "Member 'FBotKnockbackSettings::ShouldAllowCharacterToBeLaunched' has a wrong offset!");
static_assert(offsetof(FBotKnockbackSettings, ShouldStopActiveMovement) == 0x000070, "Member 'FBotKnockbackSettings::ShouldStopActiveMovement' has a wrong offset!");
static_assert(offsetof(FBotKnockbackSettings, IgnoreMoveInputDuration) == 0x000098, "Member 'FBotKnockbackSettings::IgnoreMoveInputDuration' has a wrong offset!");

struct FFortEncounterGroupLimitData final
{
public:
	int32                                         DesiredPawnNumCap;
	int32                                         RemainingDesiredLimit;
	int32                                         CurrentEncounterLimit;
};
static_assert(alignof(FFortEncounterGroupLimitData) == 0x000004, "Wrong alignment on FFortEncounterGroupLimitData");
static_assert(sizeof(FFortEncounterGroupLimitData) == 0x00000C, "Wrong size on FFortEncounterGroupLimitData");
static_assert(offsetof(FFortEncounterGroupLimitData, DesiredPawnNumCap) == 0x000000, "Member 'FFortEncounterGroupLimitData::DesiredPawnNumCap' has a wrong offset!");
static_assert(offsetof(FFortEncounterGroupLimitData, RemainingDesiredLimit) == 0x000004, "Member 'FFortEncounterGroupLimitData::RemainingDesiredLimit' has a wrong offset!");
static_assert(offsetof(FFortEncounterGroupLimitData, CurrentEncounterLimit) == 0x000008, "Member 'FFortEncounterGroupLimitData::CurrentEncounterLimit' has a wrong offset!");

struct FFortAIEncounterRequirements final
{
public:
	EFortMissionType                              AssociatedMissionType;
	uint8                                         Pad_1[0x7];
	struct FGameplayTagQuery                      TagQuery;
};
static_assert(alignof(FFortAIEncounterRequirements) == 0x000008, "Wrong alignment on FFortAIEncounterRequirements");
static_assert(sizeof(FFortAIEncounterRequirements) == 0x000050, "Wrong size on FFortAIEncounterRequirements");
static_assert(offsetof(FFortAIEncounterRequirements, AssociatedMissionType) == 0x000000, "Member 'FFortAIEncounterRequirements::AssociatedMissionType' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRequirements, TagQuery) == 0x000008, "Member 'FFortAIEncounterRequirements::TagQuery' has a wrong offset!");

struct FFortAIBaseLootDropRow final : public FTableRowBase
{
public:
	int32                                         Priority;
	float                                         ItemDropChance;
	class FName                                   WorldItemLootTierGroup;
	class FName                                   WorldItemInstancedLootTierGroup;
	class FName                                   AccountItemLootTierGroup;
	uint8                                         Pad_1C[0x4];
	struct FGameplayTagContainer                  AITagsContainer;
};
static_assert(alignof(FFortAIBaseLootDropRow) == 0x000008, "Wrong alignment on FFortAIBaseLootDropRow");
static_assert(sizeof(FFortAIBaseLootDropRow) == 0x000040, "Wrong size on FFortAIBaseLootDropRow");
static_assert(offsetof(FFortAIBaseLootDropRow, Priority) == 0x000008, "Member 'FFortAIBaseLootDropRow::Priority' has a wrong offset!");
static_assert(offsetof(FFortAIBaseLootDropRow, ItemDropChance) == 0x00000C, "Member 'FFortAIBaseLootDropRow::ItemDropChance' has a wrong offset!");
static_assert(offsetof(FFortAIBaseLootDropRow, WorldItemLootTierGroup) == 0x000010, "Member 'FFortAIBaseLootDropRow::WorldItemLootTierGroup' has a wrong offset!");
static_assert(offsetof(FFortAIBaseLootDropRow, WorldItemInstancedLootTierGroup) == 0x000014, "Member 'FFortAIBaseLootDropRow::WorldItemInstancedLootTierGroup' has a wrong offset!");
static_assert(offsetof(FFortAIBaseLootDropRow, AccountItemLootTierGroup) == 0x000018, "Member 'FFortAIBaseLootDropRow::AccountItemLootTierGroup' has a wrong offset!");
static_assert(offsetof(FFortAIBaseLootDropRow, AITagsContainer) == 0x000020, "Member 'FFortAIBaseLootDropRow::AITagsContainer' has a wrong offset!");

struct FFortAILootDropModifierRow final : public FTableRowBase
{
public:
	int32                                         Priority;
	float                                         ItemDropChanceMultiplier;
	class FName                                   WorldItemLootTierGroup;
	uint8                                         Pad_14[0x4];
	struct FGameplayTagContainer                  AITagsContainer;
};
static_assert(alignof(FFortAILootDropModifierRow) == 0x000008, "Wrong alignment on FFortAILootDropModifierRow");
static_assert(sizeof(FFortAILootDropModifierRow) == 0x000038, "Wrong size on FFortAILootDropModifierRow");
static_assert(offsetof(FFortAILootDropModifierRow, Priority) == 0x000008, "Member 'FFortAILootDropModifierRow::Priority' has a wrong offset!");
static_assert(offsetof(FFortAILootDropModifierRow, ItemDropChanceMultiplier) == 0x00000C, "Member 'FFortAILootDropModifierRow::ItemDropChanceMultiplier' has a wrong offset!");
static_assert(offsetof(FFortAILootDropModifierRow, WorldItemLootTierGroup) == 0x000010, "Member 'FFortAILootDropModifierRow::WorldItemLootTierGroup' has a wrong offset!");
static_assert(offsetof(FFortAILootDropModifierRow, AITagsContainer) == 0x000018, "Member 'FFortAILootDropModifierRow::AITagsContainer' has a wrong offset!");

struct FBotPOIExcludedZonesDebugInfo final
{
public:
	struct FBox                                   Box;
	uint8                                         UsagesToExclude;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FBotPOIExcludedZonesDebugInfo) == 0x000008, "Wrong alignment on FBotPOIExcludedZonesDebugInfo");
static_assert(sizeof(FBotPOIExcludedZonesDebugInfo) == 0x000040, "Wrong size on FBotPOIExcludedZonesDebugInfo");
static_assert(offsetof(FBotPOIExcludedZonesDebugInfo, Box) == 0x000000, "Member 'FBotPOIExcludedZonesDebugInfo::Box' has a wrong offset!");
static_assert(offsetof(FBotPOIExcludedZonesDebugInfo, UsagesToExclude) == 0x000038, "Member 'FBotPOIExcludedZonesDebugInfo::UsagesToExclude' has a wrong offset!");

struct FFortAILootDropModifiers final
{
public:
	struct FFortAIEncounterRequirements           Requirements;
	TArray<struct FDataTableRowHandle>            LootDropModifierRows;
};
static_assert(alignof(FFortAILootDropModifiers) == 0x000008, "Wrong alignment on FFortAILootDropModifiers");
static_assert(sizeof(FFortAILootDropModifiers) == 0x000060, "Wrong size on FFortAILootDropModifiers");
static_assert(offsetof(FFortAILootDropModifiers, Requirements) == 0x000000, "Member 'FFortAILootDropModifiers::Requirements' has a wrong offset!");
static_assert(offsetof(FFortAILootDropModifiers, LootDropModifierRows) == 0x000050, "Member 'FFortAILootDropModifiers::LootDropModifierRows' has a wrong offset!");

struct alignas(0x08) FLODAIUpdateInfo final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FLODAIUpdateInfo) == 0x000008, "Wrong alignment on FLODAIUpdateInfo");
static_assert(sizeof(FLODAIUpdateInfo) == 0x000018, "Wrong size on FLODAIUpdateInfo");

struct FPlaystyleSwitchToAggressiveData final
{
public:
	struct FGameplayTagQuery                      TagQueryToMatch;
	struct FScalableFloat                         TurnToAggressiveMinimumDistance;
	struct FScalableFloat                         TurnToAggressiveTime;
	struct FScalableFloat                         SwitchBackToDefensivePreventionTime;
	struct FScalableFloat                         DamageThresholdToSwitchToAggressive;
};
static_assert(alignof(FPlaystyleSwitchToAggressiveData) == 0x000008, "Wrong alignment on FPlaystyleSwitchToAggressiveData");
static_assert(sizeof(FPlaystyleSwitchToAggressiveData) == 0x0000E8, "Wrong size on FPlaystyleSwitchToAggressiveData");
static_assert(offsetof(FPlaystyleSwitchToAggressiveData, TagQueryToMatch) == 0x000000, "Member 'FPlaystyleSwitchToAggressiveData::TagQueryToMatch' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveData, TurnToAggressiveMinimumDistance) == 0x000048, "Member 'FPlaystyleSwitchToAggressiveData::TurnToAggressiveMinimumDistance' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveData, TurnToAggressiveTime) == 0x000070, "Member 'FPlaystyleSwitchToAggressiveData::TurnToAggressiveTime' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveData, SwitchBackToDefensivePreventionTime) == 0x000098, "Member 'FPlaystyleSwitchToAggressiveData::SwitchBackToDefensivePreventionTime' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveData, DamageThresholdToSwitchToAggressive) == 0x0000C0, "Member 'FPlaystyleSwitchToAggressiveData::DamageThresholdToSwitchToAggressive' has a wrong offset!");

struct FFortAIEncounterQueryData final
{
public:
	TArray<struct FVector>                        QueryLocations;
	TArray<class AActor*>                         QueryActors;
};
static_assert(alignof(FFortAIEncounterQueryData) == 0x000008, "Wrong alignment on FFortAIEncounterQueryData");
static_assert(sizeof(FFortAIEncounterQueryData) == 0x000020, "Wrong size on FFortAIEncounterQueryData");
static_assert(offsetof(FFortAIEncounterQueryData, QueryLocations) == 0x000000, "Member 'FFortAIEncounterQueryData::QueryLocations' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterQueryData, QueryActors) == 0x000010, "Member 'FFortAIEncounterQueryData::QueryActors' has a wrong offset!");

struct FPlayerLODViewConeConfig final
{
public:
	struct FScalableFloat                         ObserverVisionAngleDeg;
	struct FScalableFloat                         ViewConeMaxRadius;
	struct FScalableFloat                         AlwaysVisibleRadius;
	EFortAILODLevel                               FortAILODLevel;
	uint8                                         Pad_79[0x7];
};
static_assert(alignof(FPlayerLODViewConeConfig) == 0x000008, "Wrong alignment on FPlayerLODViewConeConfig");
static_assert(sizeof(FPlayerLODViewConeConfig) == 0x000080, "Wrong size on FPlayerLODViewConeConfig");
static_assert(offsetof(FPlayerLODViewConeConfig, ObserverVisionAngleDeg) == 0x000000, "Member 'FPlayerLODViewConeConfig::ObserverVisionAngleDeg' has a wrong offset!");
static_assert(offsetof(FPlayerLODViewConeConfig, ViewConeMaxRadius) == 0x000028, "Member 'FPlayerLODViewConeConfig::ViewConeMaxRadius' has a wrong offset!");
static_assert(offsetof(FPlayerLODViewConeConfig, AlwaysVisibleRadius) == 0x000050, "Member 'FPlayerLODViewConeConfig::AlwaysVisibleRadius' has a wrong offset!");
static_assert(offsetof(FPlayerLODViewConeConfig, FortAILODLevel) == 0x000078, "Member 'FPlayerLODViewConeConfig::FortAILODLevel' has a wrong offset!");

struct FMovingLootInfo final
{
public:
	struct FVector                                LastLocationInOctree;
};
static_assert(alignof(FMovingLootInfo) == 0x000008, "Wrong alignment on FMovingLootInfo");
static_assert(sizeof(FMovingLootInfo) == 0x000018, "Wrong size on FMovingLootInfo");
static_assert(offsetof(FMovingLootInfo, LastLocationInOctree) == 0x000000, "Member 'FMovingLootInfo::LastLocationInOctree' has a wrong offset!");

struct FPlayerLODViewConeHysteresisConfig final
{
public:
	struct FScalableFloat                         AdditionalObserverVisionAngleDeg;
	struct FScalableFloat                         AdditionalRadius;
};
static_assert(alignof(FPlayerLODViewConeHysteresisConfig) == 0x000008, "Wrong alignment on FPlayerLODViewConeHysteresisConfig");
static_assert(sizeof(FPlayerLODViewConeHysteresisConfig) == 0x000050, "Wrong size on FPlayerLODViewConeHysteresisConfig");
static_assert(offsetof(FPlayerLODViewConeHysteresisConfig, AdditionalObserverVisionAngleDeg) == 0x000000, "Member 'FPlayerLODViewConeHysteresisConfig::AdditionalObserverVisionAngleDeg' has a wrong offset!");
static_assert(offsetof(FPlayerLODViewConeHysteresisConfig, AdditionalRadius) == 0x000028, "Member 'FPlayerLODViewConeHysteresisConfig::AdditionalRadius' has a wrong offset!");

struct FFortAIDirectorPerLODConfig final
{
public:
	struct FScalableFloat                         MaxNPCCosts;
	EFortAILODLevel                               FortAILODLevel;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FFortAIDirectorPerLODConfig) == 0x000008, "Wrong alignment on FFortAIDirectorPerLODConfig");
static_assert(sizeof(FFortAIDirectorPerLODConfig) == 0x000030, "Wrong size on FFortAIDirectorPerLODConfig");
static_assert(offsetof(FFortAIDirectorPerLODConfig, MaxNPCCosts) == 0x000000, "Member 'FFortAIDirectorPerLODConfig::MaxNPCCosts' has a wrong offset!");
static_assert(offsetof(FFortAIDirectorPerLODConfig, FortAILODLevel) == 0x000028, "Member 'FFortAIDirectorPerLODConfig::FortAILODLevel' has a wrong offset!");

struct FBotDebugInfo final
{
public:
	int32                                         BotID;
	int32                                         SquadId;
	class FString                                 BTActiveTasks;
	EAlertLevel                                   AlertLevel;
	uint8                                         Pad_19[0x7];
	struct FVector                                Location;
};
static_assert(alignof(FBotDebugInfo) == 0x000008, "Wrong alignment on FBotDebugInfo");
static_assert(sizeof(FBotDebugInfo) == 0x000038, "Wrong size on FBotDebugInfo");
static_assert(offsetof(FBotDebugInfo, BotID) == 0x000000, "Member 'FBotDebugInfo::BotID' has a wrong offset!");
static_assert(offsetof(FBotDebugInfo, SquadId) == 0x000004, "Member 'FBotDebugInfo::SquadId' has a wrong offset!");
static_assert(offsetof(FBotDebugInfo, BTActiveTasks) == 0x000008, "Member 'FBotDebugInfo::BTActiveTasks' has a wrong offset!");
static_assert(offsetof(FBotDebugInfo, AlertLevel) == 0x000018, "Member 'FBotDebugInfo::AlertLevel' has a wrong offset!");
static_assert(offsetof(FBotDebugInfo, Location) == 0x000020, "Member 'FBotDebugInfo::Location' has a wrong offset!");

struct FAIDirectorEventData final
{
public:
	EFortAIDirectorEvent                          Event;
	uint8                                         Pad_1[0x7];
	struct FCurveTableRowHandle                   DataMax;
	struct FCurveTableRowHandle                   CoolDownRate;
	EFortAIDirectorEventContribution              ContributionType;
	EFortAIDirectorEventParticipant               OwnerParticipantType;
	uint8                                         Pad_2A[0x6];
};
static_assert(alignof(FAIDirectorEventData) == 0x000008, "Wrong alignment on FAIDirectorEventData");
static_assert(sizeof(FAIDirectorEventData) == 0x000030, "Wrong size on FAIDirectorEventData");
static_assert(offsetof(FAIDirectorEventData, Event) == 0x000000, "Member 'FAIDirectorEventData::Event' has a wrong offset!");
static_assert(offsetof(FAIDirectorEventData, DataMax) == 0x000008, "Member 'FAIDirectorEventData::DataMax' has a wrong offset!");
static_assert(offsetof(FAIDirectorEventData, CoolDownRate) == 0x000018, "Member 'FAIDirectorEventData::CoolDownRate' has a wrong offset!");
static_assert(offsetof(FAIDirectorEventData, ContributionType) == 0x000028, "Member 'FAIDirectorEventData::ContributionType' has a wrong offset!");
static_assert(offsetof(FAIDirectorEventData, OwnerParticipantType) == 0x000029, "Member 'FAIDirectorEventData::OwnerParticipantType' has a wrong offset!");

struct FFortAIDirectorFactorContribution final
{
public:
	EFortAIDirectorEvent                          AIDirectorEvent;
	uint8                                         Pad_1[0x3];
	float                                         MaxContribution;
	EFortAIDirectorFactorContribution             ContributionType;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FFortAIDirectorFactorContribution) == 0x000004, "Wrong alignment on FFortAIDirectorFactorContribution");
static_assert(sizeof(FFortAIDirectorFactorContribution) == 0x00000C, "Wrong size on FFortAIDirectorFactorContribution");
static_assert(offsetof(FFortAIDirectorFactorContribution, AIDirectorEvent) == 0x000000, "Member 'FFortAIDirectorFactorContribution::AIDirectorEvent' has a wrong offset!");
static_assert(offsetof(FFortAIDirectorFactorContribution, MaxContribution) == 0x000004, "Member 'FFortAIDirectorFactorContribution::MaxContribution' has a wrong offset!");
static_assert(offsetof(FFortAIDirectorFactorContribution, ContributionType) == 0x000008, "Member 'FFortAIDirectorFactorContribution::ContributionType' has a wrong offset!");

struct FPerceptionStateSettings final
{
public:
	struct FScalableFloat                         ForgetTime;
	struct FScalableFloat                         ForgetTimeDeviation;
	struct FScalableFloat                         ForgetDistance;
	struct FScalableFloat                         ForgetDistanceDeviation;
	struct FScalableFloat                         ThreatDistanceWeight;
};
static_assert(alignof(FPerceptionStateSettings) == 0x000008, "Wrong alignment on FPerceptionStateSettings");
static_assert(sizeof(FPerceptionStateSettings) == 0x0000C8, "Wrong size on FPerceptionStateSettings");
static_assert(offsetof(FPerceptionStateSettings, ForgetTime) == 0x000000, "Member 'FPerceptionStateSettings::ForgetTime' has a wrong offset!");
static_assert(offsetof(FPerceptionStateSettings, ForgetTimeDeviation) == 0x000028, "Member 'FPerceptionStateSettings::ForgetTimeDeviation' has a wrong offset!");
static_assert(offsetof(FPerceptionStateSettings, ForgetDistance) == 0x000050, "Member 'FPerceptionStateSettings::ForgetDistance' has a wrong offset!");
static_assert(offsetof(FPerceptionStateSettings, ForgetDistanceDeviation) == 0x000078, "Member 'FPerceptionStateSettings::ForgetDistanceDeviation' has a wrong offset!");
static_assert(offsetof(FPerceptionStateSettings, ThreatDistanceWeight) == 0x0000A0, "Member 'FPerceptionStateSettings::ThreatDistanceWeight' has a wrong offset!");

struct FFortAthenaAIBotTargetHeuristicSettings final
{
public:
	struct FPerceptionStateSettings               ThreatSeeingPerceptionSettings;
	struct FPerceptionStateSettings               ThreatLKPPerceptionSettings;
	struct FPerceptionStateSettings               ThreatAlertedPerceptionSettings;
	struct FScalableFloat                         ThreatDamageWeight;
	struct FScalableFloat                         ThreatDamageWeightMultiplier;
	struct FScalableFloat                         ThreatTimeSinceLastDamageMultiplier;
	struct FScalableFloat                         ThreatLoFWeight;
	struct FScalableFloat                         DBNOWeightModifier;
	struct FScalableFloat                         GameParticipantWeightModifier;
};
static_assert(alignof(FFortAthenaAIBotTargetHeuristicSettings) == 0x000008, "Wrong alignment on FFortAthenaAIBotTargetHeuristicSettings");
static_assert(sizeof(FFortAthenaAIBotTargetHeuristicSettings) == 0x000348, "Wrong size on FFortAthenaAIBotTargetHeuristicSettings");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatSeeingPerceptionSettings) == 0x000000, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatSeeingPerceptionSettings' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatLKPPerceptionSettings) == 0x0000C8, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatLKPPerceptionSettings' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatAlertedPerceptionSettings) == 0x000190, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatAlertedPerceptionSettings' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatDamageWeight) == 0x000258, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatDamageWeight' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatDamageWeightMultiplier) == 0x000280, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatDamageWeightMultiplier' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatTimeSinceLastDamageMultiplier) == 0x0002A8, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatTimeSinceLastDamageMultiplier' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, ThreatLoFWeight) == 0x0002D0, "Member 'FFortAthenaAIBotTargetHeuristicSettings::ThreatLoFWeight' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, DBNOWeightModifier) == 0x0002F8, "Member 'FFortAthenaAIBotTargetHeuristicSettings::DBNOWeightModifier' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettings, GameParticipantWeightModifier) == 0x000320, "Member 'FFortAthenaAIBotTargetHeuristicSettings::GameParticipantWeightModifier' has a wrong offset!");

struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization final
{
public:
	struct FGameplayTagQuery                      TargetTagQuery;
	struct FFortAthenaAIBotTargetHeuristicSettings Settings;
};
static_assert(alignof(FFortAthenaAIBotTargetHeuristicSettingsSpecialization) == 0x000008, "Wrong alignment on FFortAthenaAIBotTargetHeuristicSettingsSpecialization");
static_assert(sizeof(FFortAthenaAIBotTargetHeuristicSettingsSpecialization) == 0x000390, "Wrong size on FFortAthenaAIBotTargetHeuristicSettingsSpecialization");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettingsSpecialization, TargetTagQuery) == 0x000000, "Member 'FFortAthenaAIBotTargetHeuristicSettingsSpecialization::TargetTagQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotTargetHeuristicSettingsSpecialization, Settings) == 0x000048, "Member 'FFortAthenaAIBotTargetHeuristicSettingsSpecialization::Settings' has a wrong offset!");

struct FFortAIDirectorFactorData final
{
public:
	EFortAIDirectorFactor                         AIDirectorFactor;
	uint8                                         Pad_1[0x7];
	TArray<struct FFortAIDirectorFactorContribution> ContributingEvents;
	float                                         MaxValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FFortAIDirectorFactorData) == 0x000008, "Wrong alignment on FFortAIDirectorFactorData");
static_assert(sizeof(FFortAIDirectorFactorData) == 0x000020, "Wrong size on FFortAIDirectorFactorData");
static_assert(offsetof(FFortAIDirectorFactorData, AIDirectorFactor) == 0x000000, "Member 'FFortAIDirectorFactorData::AIDirectorFactor' has a wrong offset!");
static_assert(offsetof(FFortAIDirectorFactorData, ContributingEvents) == 0x000008, "Member 'FFortAIDirectorFactorData::ContributingEvents' has a wrong offset!");
static_assert(offsetof(FFortAIDirectorFactorData, MaxValue) == 0x000018, "Member 'FFortAIDirectorFactorData::MaxValue' has a wrong offset!");

struct FSpawnGroupProgression final
{
public:
	class UFortAISpawnGroup*                      SpawnGroup;
};
static_assert(alignof(FSpawnGroupProgression) == 0x000008, "Wrong alignment on FSpawnGroupProgression");
static_assert(sizeof(FSpawnGroupProgression) == 0x000008, "Wrong size on FSpawnGroupProgression");
static_assert(offsetof(FSpawnGroupProgression, SpawnGroup) == 0x000000, "Member 'FSpawnGroupProgression::SpawnGroup' has a wrong offset!");

struct FDigestedFiringPattern final
{
public:
	float                                         MinRange;
	float                                         MaxRange;
	float                                         HoldTimeDeviation;
	float                                         PreventFireTimeDeviation;
	float                                         FiringPatternHysteresis;
	uint8                                         Pad_14[0x4];
	class UCurveFloat*                            FiringPatternCurve;
};
static_assert(alignof(FDigestedFiringPattern) == 0x000008, "Wrong alignment on FDigestedFiringPattern");
static_assert(sizeof(FDigestedFiringPattern) == 0x000020, "Wrong size on FDigestedFiringPattern");
static_assert(offsetof(FDigestedFiringPattern, MinRange) == 0x000000, "Member 'FDigestedFiringPattern::MinRange' has a wrong offset!");
static_assert(offsetof(FDigestedFiringPattern, MaxRange) == 0x000004, "Member 'FDigestedFiringPattern::MaxRange' has a wrong offset!");
static_assert(offsetof(FDigestedFiringPattern, HoldTimeDeviation) == 0x000008, "Member 'FDigestedFiringPattern::HoldTimeDeviation' has a wrong offset!");
static_assert(offsetof(FDigestedFiringPattern, PreventFireTimeDeviation) == 0x00000C, "Member 'FDigestedFiringPattern::PreventFireTimeDeviation' has a wrong offset!");
static_assert(offsetof(FDigestedFiringPattern, FiringPatternHysteresis) == 0x000010, "Member 'FDigestedFiringPattern::FiringPatternHysteresis' has a wrong offset!");
static_assert(offsetof(FDigestedFiringPattern, FiringPatternCurve) == 0x000018, "Member 'FDigestedFiringPattern::FiringPatternCurve' has a wrong offset!");

struct FDigestedRangedWeaponSkill final
{
public:
	float                                         DelayBetweenShots;
	float                                         DelayDeviationTimeBetweenShots;
	float                                         TriggerHoldDuration;
	float                                         TriggerHoldDeviationTime;
	float                                         DelayBeforeFirstShot;
	float                                         ShotDelayAfterTargeting;
	float                                         ShotDelayAfterIncomingLethality;
	float                                         InterruptReloadToShootOdds;
	TArray<struct FDigestedFiringPattern>         TargetInAirFiringPatterns;
	TArray<struct FDigestedFiringPattern>         FiringPatterns;
};
static_assert(alignof(FDigestedRangedWeaponSkill) == 0x000008, "Wrong alignment on FDigestedRangedWeaponSkill");
static_assert(sizeof(FDigestedRangedWeaponSkill) == 0x000040, "Wrong size on FDigestedRangedWeaponSkill");
static_assert(offsetof(FDigestedRangedWeaponSkill, DelayBetweenShots) == 0x000000, "Member 'FDigestedRangedWeaponSkill::DelayBetweenShots' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, DelayDeviationTimeBetweenShots) == 0x000004, "Member 'FDigestedRangedWeaponSkill::DelayDeviationTimeBetweenShots' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, TriggerHoldDuration) == 0x000008, "Member 'FDigestedRangedWeaponSkill::TriggerHoldDuration' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, TriggerHoldDeviationTime) == 0x00000C, "Member 'FDigestedRangedWeaponSkill::TriggerHoldDeviationTime' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, DelayBeforeFirstShot) == 0x000010, "Member 'FDigestedRangedWeaponSkill::DelayBeforeFirstShot' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, ShotDelayAfterTargeting) == 0x000014, "Member 'FDigestedRangedWeaponSkill::ShotDelayAfterTargeting' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, ShotDelayAfterIncomingLethality) == 0x000018, "Member 'FDigestedRangedWeaponSkill::ShotDelayAfterIncomingLethality' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, InterruptReloadToShootOdds) == 0x00001C, "Member 'FDigestedRangedWeaponSkill::InterruptReloadToShootOdds' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, TargetInAirFiringPatterns) == 0x000020, "Member 'FDigestedRangedWeaponSkill::TargetInAirFiringPatterns' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkill, FiringPatterns) == 0x000030, "Member 'FDigestedRangedWeaponSkill::FiringPatterns' has a wrong offset!");

struct FDigestedRangedWeaponSkillCategorySpecialization final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FDigestedRangedWeaponSkill             WeaponSkill;
};
static_assert(alignof(FDigestedRangedWeaponSkillCategorySpecialization) == 0x000008, "Wrong alignment on FDigestedRangedWeaponSkillCategorySpecialization");
static_assert(sizeof(FDigestedRangedWeaponSkillCategorySpecialization) == 0x000060, "Wrong size on FDigestedRangedWeaponSkillCategorySpecialization");
static_assert(offsetof(FDigestedRangedWeaponSkillCategorySpecialization, Tags) == 0x000000, "Member 'FDigestedRangedWeaponSkillCategorySpecialization::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkillCategorySpecialization, WeaponSkill) == 0x000020, "Member 'FDigestedRangedWeaponSkillCategorySpecialization::WeaponSkill' has a wrong offset!");

struct FDigestedRangedWeaponSkillCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FDigestedRangedWeaponSkill             WeaponSkill;
	TArray<struct FDigestedRangedWeaponSkillCategorySpecialization> Specializations;
};
static_assert(alignof(FDigestedRangedWeaponSkillCategory) == 0x000008, "Wrong alignment on FDigestedRangedWeaponSkillCategory");
static_assert(sizeof(FDigestedRangedWeaponSkillCategory) == 0x000070, "Wrong size on FDigestedRangedWeaponSkillCategory");
static_assert(offsetof(FDigestedRangedWeaponSkillCategory, Tags) == 0x000000, "Member 'FDigestedRangedWeaponSkillCategory::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkillCategory, WeaponSkill) == 0x000020, "Member 'FDigestedRangedWeaponSkillCategory::WeaponSkill' has a wrong offset!");
static_assert(offsetof(FDigestedRangedWeaponSkillCategory, Specializations) == 0x000060, "Member 'FDigestedRangedWeaponSkillCategory::Specializations' has a wrong offset!");

struct alignas(0x08) FAIEncounterSpawnGroupWeights final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FAIEncounterSpawnGroupWeights) == 0x000008, "Wrong alignment on FAIEncounterSpawnGroupWeights");
static_assert(sizeof(FAIEncounterSpawnGroupWeights) == 0x000018, "Wrong size on FAIEncounterSpawnGroupWeights");

struct FFortSpawnPointsPercentageCurve final : public FTableRowBase
{
public:
	class UCurveTable*                            SpawnPointsPercentageCurveTable;
	class FName                                   SpawnPointsPercentageCurveTableRow;
	float                                         MaxRampTime;
};
static_assert(alignof(FFortSpawnPointsPercentageCurve) == 0x000008, "Wrong alignment on FFortSpawnPointsPercentageCurve");
static_assert(sizeof(FFortSpawnPointsPercentageCurve) == 0x000018, "Wrong size on FFortSpawnPointsPercentageCurve");
static_assert(offsetof(FFortSpawnPointsPercentageCurve, SpawnPointsPercentageCurveTable) == 0x000008, "Member 'FFortSpawnPointsPercentageCurve::SpawnPointsPercentageCurveTable' has a wrong offset!");
static_assert(offsetof(FFortSpawnPointsPercentageCurve, SpawnPointsPercentageCurveTableRow) == 0x000010, "Member 'FFortSpawnPointsPercentageCurve::SpawnPointsPercentageCurveTableRow' has a wrong offset!");
static_assert(offsetof(FFortSpawnPointsPercentageCurve, MaxRampTime) == 0x000014, "Member 'FFortSpawnPointsPercentageCurve::MaxRampTime' has a wrong offset!");

struct FFiringPattern final
{
public:
	struct FScalableFloat                         MinRange;
	struct FScalableFloat                         MaxRange;
	struct FScalableFloat                         HoldTimeDeviation;
	struct FScalableFloat                         PreventFireTimeDeviation;
	struct FScalableFloat                         FiringPatternHysteresis;
	class UCurveFloat*                            FiringPatternCurve;
};
static_assert(alignof(FFiringPattern) == 0x000008, "Wrong alignment on FFiringPattern");
static_assert(sizeof(FFiringPattern) == 0x0000D0, "Wrong size on FFiringPattern");
static_assert(offsetof(FFiringPattern, MinRange) == 0x000000, "Member 'FFiringPattern::MinRange' has a wrong offset!");
static_assert(offsetof(FFiringPattern, MaxRange) == 0x000028, "Member 'FFiringPattern::MaxRange' has a wrong offset!");
static_assert(offsetof(FFiringPattern, HoldTimeDeviation) == 0x000050, "Member 'FFiringPattern::HoldTimeDeviation' has a wrong offset!");
static_assert(offsetof(FFiringPattern, PreventFireTimeDeviation) == 0x000078, "Member 'FFiringPattern::PreventFireTimeDeviation' has a wrong offset!");
static_assert(offsetof(FFiringPattern, FiringPatternHysteresis) == 0x0000A0, "Member 'FFiringPattern::FiringPatternHysteresis' has a wrong offset!");
static_assert(offsetof(FFiringPattern, FiringPatternCurve) == 0x0000C8, "Member 'FFiringPattern::FiringPatternCurve' has a wrong offset!");

struct FRangedWeaponSkill final
{
public:
	struct FScalableFloat                         DelayBetweenShots;
	struct FScalableFloat                         DelayDeviationTimeBetweenShots;
	struct FScalableFloat                         TriggerHoldDuration;
	struct FScalableFloat                         TriggerHoldDeviationTime;
	struct FScalableFloat                         DelayBeforeFirstShot;
	struct FScalableFloat                         ShotDelayAfterTargeting;
	struct FScalableFloat                         ShotDelayAfterIncomingLethality;
	TArray<struct FFiringPattern>                 TargetInAirFiringPatterns;
	TArray<struct FFiringPattern>                 FiringPatterns;
	struct FScalableFloat                         InterruptReloadToShootOdds;
};
static_assert(alignof(FRangedWeaponSkill) == 0x000008, "Wrong alignment on FRangedWeaponSkill");
static_assert(sizeof(FRangedWeaponSkill) == 0x000160, "Wrong size on FRangedWeaponSkill");
static_assert(offsetof(FRangedWeaponSkill, DelayBetweenShots) == 0x000000, "Member 'FRangedWeaponSkill::DelayBetweenShots' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, DelayDeviationTimeBetweenShots) == 0x000028, "Member 'FRangedWeaponSkill::DelayDeviationTimeBetweenShots' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, TriggerHoldDuration) == 0x000050, "Member 'FRangedWeaponSkill::TriggerHoldDuration' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, TriggerHoldDeviationTime) == 0x000078, "Member 'FRangedWeaponSkill::TriggerHoldDeviationTime' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, DelayBeforeFirstShot) == 0x0000A0, "Member 'FRangedWeaponSkill::DelayBeforeFirstShot' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, ShotDelayAfterTargeting) == 0x0000C8, "Member 'FRangedWeaponSkill::ShotDelayAfterTargeting' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, ShotDelayAfterIncomingLethality) == 0x0000F0, "Member 'FRangedWeaponSkill::ShotDelayAfterIncomingLethality' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, TargetInAirFiringPatterns) == 0x000118, "Member 'FRangedWeaponSkill::TargetInAirFiringPatterns' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, FiringPatterns) == 0x000128, "Member 'FRangedWeaponSkill::FiringPatterns' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkill, InterruptReloadToShootOdds) == 0x000138, "Member 'FRangedWeaponSkill::InterruptReloadToShootOdds' has a wrong offset!");

struct FFortIntensityCurve final : public FTableRowBase
{
public:
	class UCurveTable*                            IntensityCurveTable;
	class FName                                   IntensityCurveTableRow;
	float                                         LowPlayerPerformancePeakIntensityThreshold;
	float                                         NormalPlayerPerformancePeakIntensityThreshold;
	float                                         HighPlayerPerformancePeakIntensityThreshold;
	float                                         MaxRampTime;
	float                                         FadeEndIntensityThreshold;
	float                                         StartIntensityOffsetFloor;
	float                                         EndIntensityOffsetFloor;
	float                                         StartIntensityOffsetCeiling;
	float                                         EndIntensityOffsetCeiling;
};
static_assert(alignof(FFortIntensityCurve) == 0x000008, "Wrong alignment on FFortIntensityCurve");
static_assert(sizeof(FFortIntensityCurve) == 0x000038, "Wrong size on FFortIntensityCurve");
static_assert(offsetof(FFortIntensityCurve, IntensityCurveTable) == 0x000008, "Member 'FFortIntensityCurve::IntensityCurveTable' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, IntensityCurveTableRow) == 0x000010, "Member 'FFortIntensityCurve::IntensityCurveTableRow' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, LowPlayerPerformancePeakIntensityThreshold) == 0x000014, "Member 'FFortIntensityCurve::LowPlayerPerformancePeakIntensityThreshold' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, NormalPlayerPerformancePeakIntensityThreshold) == 0x000018, "Member 'FFortIntensityCurve::NormalPlayerPerformancePeakIntensityThreshold' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, HighPlayerPerformancePeakIntensityThreshold) == 0x00001C, "Member 'FFortIntensityCurve::HighPlayerPerformancePeakIntensityThreshold' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, MaxRampTime) == 0x000020, "Member 'FFortIntensityCurve::MaxRampTime' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, FadeEndIntensityThreshold) == 0x000024, "Member 'FFortIntensityCurve::FadeEndIntensityThreshold' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, StartIntensityOffsetFloor) == 0x000028, "Member 'FFortIntensityCurve::StartIntensityOffsetFloor' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, EndIntensityOffsetFloor) == 0x00002C, "Member 'FFortIntensityCurve::EndIntensityOffsetFloor' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, StartIntensityOffsetCeiling) == 0x000030, "Member 'FFortIntensityCurve::StartIntensityOffsetCeiling' has a wrong offset!");
static_assert(offsetof(FFortIntensityCurve, EndIntensityOffsetCeiling) == 0x000034, "Member 'FFortIntensityCurve::EndIntensityOffsetCeiling' has a wrong offset!");

struct alignas(0x08) FCurrentIntensityAnalyticsBucket final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FCurrentIntensityAnalyticsBucket) == 0x000008, "Wrong alignment on FCurrentIntensityAnalyticsBucket");
static_assert(sizeof(FCurrentIntensityAnalyticsBucket) == 0x000038, "Wrong size on FCurrentIntensityAnalyticsBucket");

struct FSoundPerceptionSetting final
{
public:
	struct FScalableFloat                         Loudness;
	struct FScalableFloat                         IgnoreTime;
	struct FScalableFloat                         OverrideReactionDistance;
};
static_assert(alignof(FSoundPerceptionSetting) == 0x000008, "Wrong alignment on FSoundPerceptionSetting");
static_assert(sizeof(FSoundPerceptionSetting) == 0x000078, "Wrong size on FSoundPerceptionSetting");
static_assert(offsetof(FSoundPerceptionSetting, Loudness) == 0x000000, "Member 'FSoundPerceptionSetting::Loudness' has a wrong offset!");
static_assert(offsetof(FSoundPerceptionSetting, IgnoreTime) == 0x000028, "Member 'FSoundPerceptionSetting::IgnoreTime' has a wrong offset!");
static_assert(offsetof(FSoundPerceptionSetting, OverrideReactionDistance) == 0x000050, "Member 'FSoundPerceptionSetting::OverrideReactionDistance' has a wrong offset!");

struct alignas(0x04) FFortCurveSequenceInstanceInfo
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FFortCurveSequenceInstanceInfo) == 0x000004, "Wrong alignment on FFortCurveSequenceInstanceInfo");
static_assert(sizeof(FFortCurveSequenceInstanceInfo) == 0x000004, "Wrong size on FFortCurveSequenceInstanceInfo");

struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo final : public FFortCurveSequenceInstanceInfo
{
public:
	uint8                                         Pad_4[0x4];
	class UFortSpawnPointsPercentageCurveSequence* SpawnPointsPercentageCurveSequence;
};
static_assert(alignof(FFortSpawnPointsPercentageCurveSequenceInstanceInfo) == 0x000008, "Wrong alignment on FFortSpawnPointsPercentageCurveSequenceInstanceInfo");
static_assert(sizeof(FFortSpawnPointsPercentageCurveSequenceInstanceInfo) == 0x000010, "Wrong size on FFortSpawnPointsPercentageCurveSequenceInstanceInfo");
static_assert(offsetof(FFortSpawnPointsPercentageCurveSequenceInstanceInfo, SpawnPointsPercentageCurveSequence) == 0x000008, "Member 'FFortSpawnPointsPercentageCurveSequenceInstanceInfo::SpawnPointsPercentageCurveSequence' has a wrong offset!");

struct FFortIntensityCurveSequenceInstanceInfo final : public FFortCurveSequenceInstanceInfo
{
public:
	uint8                                         Pad_4[0x4];
	class UFortIntensityCurveSequence*            IntensityCurveSequence;
};
static_assert(alignof(FFortIntensityCurveSequenceInstanceInfo) == 0x000008, "Wrong alignment on FFortIntensityCurveSequenceInstanceInfo");
static_assert(sizeof(FFortIntensityCurveSequenceInstanceInfo) == 0x000010, "Wrong size on FFortIntensityCurveSequenceInstanceInfo");
static_assert(offsetof(FFortIntensityCurveSequenceInstanceInfo, IntensityCurveSequence) == 0x000008, "Member 'FFortIntensityCurveSequenceInstanceInfo::IntensityCurveSequence' has a wrong offset!");

struct FFortAIPawnUpgradeData final
{
public:
	struct FCurveTableRowHandle                   SpawnPointsMultiplierCurve;
	struct FCurveTableRowHandle                   LifespanMultiplierCurve;
	struct FCurveTableRowHandle                   ScoreMultiplierCurve;
	class UFortGameplayModifierItemDefinition*    ModifierDefinition;
	TArray<class UFortGameplayModifierItemDefinition*> AdditionalModifiers;
};
static_assert(alignof(FFortAIPawnUpgradeData) == 0x000008, "Wrong alignment on FFortAIPawnUpgradeData");
static_assert(sizeof(FFortAIPawnUpgradeData) == 0x000048, "Wrong size on FFortAIPawnUpgradeData");
static_assert(offsetof(FFortAIPawnUpgradeData, SpawnPointsMultiplierCurve) == 0x000000, "Member 'FFortAIPawnUpgradeData::SpawnPointsMultiplierCurve' has a wrong offset!");
static_assert(offsetof(FFortAIPawnUpgradeData, LifespanMultiplierCurve) == 0x000010, "Member 'FFortAIPawnUpgradeData::LifespanMultiplierCurve' has a wrong offset!");
static_assert(offsetof(FFortAIPawnUpgradeData, ScoreMultiplierCurve) == 0x000020, "Member 'FFortAIPawnUpgradeData::ScoreMultiplierCurve' has a wrong offset!");
static_assert(offsetof(FFortAIPawnUpgradeData, ModifierDefinition) == 0x000030, "Member 'FFortAIPawnUpgradeData::ModifierDefinition' has a wrong offset!");
static_assert(offsetof(FFortAIPawnUpgradeData, AdditionalModifiers) == 0x000038, "Member 'FFortAIPawnUpgradeData::AdditionalModifiers' has a wrong offset!");

struct FSpawnGroupInstanceInfo final
{
public:
	class UFortAISpawnGroup*                      SpawnGroup;
	int32                                         NumActiveAlive;
	int32                                         TotalGroupCost;
	int32                                         SpawnPointsUsed;
	int32                                         NumEngaged;
	bool                                          bReadyToSpawn;
	bool                                          bFinishedSpawning;
	uint8                                         Pad_1A[0x2];
	struct FGuid                                  GroupGuid;
	int32                                         EnemySpawnDataIndex;
	float                                         TimeSelected;
	int32                                         NextEnemyToSpawnIndex;
	struct FGameplayTagContainer                  UpgradeTags;
	struct FFortAISpawnGroupUpgradeUIData         UpgradeUIData;
	TArray<struct FFortAIPawnUpgradeData>         PawnUpgrades;
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersForAllPawns;
	TArray<class AFortAIPawn*>                    PawnList;
	TArray<class AFortAIPawn*>                    LifespanExpiredList;
};
static_assert(alignof(FSpawnGroupInstanceInfo) == 0x000008, "Wrong alignment on FSpawnGroupInstanceInfo");
static_assert(sizeof(FSpawnGroupInstanceInfo) == 0x000108, "Wrong size on FSpawnGroupInstanceInfo");
static_assert(offsetof(FSpawnGroupInstanceInfo, SpawnGroup) == 0x000000, "Member 'FSpawnGroupInstanceInfo::SpawnGroup' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, NumActiveAlive) == 0x000008, "Member 'FSpawnGroupInstanceInfo::NumActiveAlive' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, TotalGroupCost) == 0x00000C, "Member 'FSpawnGroupInstanceInfo::TotalGroupCost' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, SpawnPointsUsed) == 0x000010, "Member 'FSpawnGroupInstanceInfo::SpawnPointsUsed' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, NumEngaged) == 0x000014, "Member 'FSpawnGroupInstanceInfo::NumEngaged' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, bReadyToSpawn) == 0x000018, "Member 'FSpawnGroupInstanceInfo::bReadyToSpawn' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, bFinishedSpawning) == 0x000019, "Member 'FSpawnGroupInstanceInfo::bFinishedSpawning' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, GroupGuid) == 0x00001C, "Member 'FSpawnGroupInstanceInfo::GroupGuid' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, EnemySpawnDataIndex) == 0x00002C, "Member 'FSpawnGroupInstanceInfo::EnemySpawnDataIndex' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, TimeSelected) == 0x000030, "Member 'FSpawnGroupInstanceInfo::TimeSelected' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, NextEnemyToSpawnIndex) == 0x000034, "Member 'FSpawnGroupInstanceInfo::NextEnemyToSpawnIndex' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, UpgradeTags) == 0x000038, "Member 'FSpawnGroupInstanceInfo::UpgradeTags' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, UpgradeUIData) == 0x000058, "Member 'FSpawnGroupInstanceInfo::UpgradeUIData' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, PawnUpgrades) == 0x0000C8, "Member 'FSpawnGroupInstanceInfo::PawnUpgrades' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, ModifiersForAllPawns) == 0x0000D8, "Member 'FSpawnGroupInstanceInfo::ModifiersForAllPawns' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, PawnList) == 0x0000E8, "Member 'FSpawnGroupInstanceInfo::PawnList' has a wrong offset!");
static_assert(offsetof(FSpawnGroupInstanceInfo, LifespanExpiredList) == 0x0000F8, "Member 'FSpawnGroupInstanceInfo::LifespanExpiredList' has a wrong offset!");

struct FVehicleDigestedPIDController final
{
public:
	float                                         KP;
	float                                         KI;
	float                                         KD;
};
static_assert(alignof(FVehicleDigestedPIDController) == 0x000004, "Wrong alignment on FVehicleDigestedPIDController");
static_assert(sizeof(FVehicleDigestedPIDController) == 0x00000C, "Wrong size on FVehicleDigestedPIDController");
static_assert(offsetof(FVehicleDigestedPIDController, KP) == 0x000000, "Member 'FVehicleDigestedPIDController::KP' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedPIDController, KI) == 0x000004, "Member 'FVehicleDigestedPIDController::KI' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedPIDController, KD) == 0x000008, "Member 'FVehicleDigestedPIDController::KD' has a wrong offset!");

struct FVehicleDigestedAppendToPath final
{
public:
	float                                         MinimumPathLengthToEndOfPath;
	float                                         MinTimeSinceLastAppend;
};
static_assert(alignof(FVehicleDigestedAppendToPath) == 0x000004, "Wrong alignment on FVehicleDigestedAppendToPath");
static_assert(sizeof(FVehicleDigestedAppendToPath) == 0x000008, "Wrong size on FVehicleDigestedAppendToPath");
static_assert(offsetof(FVehicleDigestedAppendToPath, MinimumPathLengthToEndOfPath) == 0x000000, "Member 'FVehicleDigestedAppendToPath::MinimumPathLengthToEndOfPath' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedAppendToPath, MinTimeSinceLastAppend) == 0x000004, "Member 'FVehicleDigestedAppendToPath::MinTimeSinceLastAppend' has a wrong offset!");

struct FVehicleDigestedTurnInPlace final
{
public:
	float                                         MovingAngleBegin;
	float                                         MovingAngleEnd;
	float                                         IdleAngleBegin;
	float                                         IdleAngleEnd;
	float                                         MinMovingSpeed;
	bool                                          bMissedPathPointReverse;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FVehicleDigestedTurnInPlace) == 0x000004, "Wrong alignment on FVehicleDigestedTurnInPlace");
static_assert(sizeof(FVehicleDigestedTurnInPlace) == 0x000018, "Wrong size on FVehicleDigestedTurnInPlace");
static_assert(offsetof(FVehicleDigestedTurnInPlace, MovingAngleBegin) == 0x000000, "Member 'FVehicleDigestedTurnInPlace::MovingAngleBegin' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedTurnInPlace, MovingAngleEnd) == 0x000004, "Member 'FVehicleDigestedTurnInPlace::MovingAngleEnd' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedTurnInPlace, IdleAngleBegin) == 0x000008, "Member 'FVehicleDigestedTurnInPlace::IdleAngleBegin' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedTurnInPlace, IdleAngleEnd) == 0x00000C, "Member 'FVehicleDigestedTurnInPlace::IdleAngleEnd' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedTurnInPlace, MinMovingSpeed) == 0x000010, "Member 'FVehicleDigestedTurnInPlace::MinMovingSpeed' has a wrong offset!");
static_assert(offsetof(FVehicleDigestedTurnInPlace, bMissedPathPointReverse) == 0x000014, "Member 'FVehicleDigestedTurnInPlace::bMissedPathPointReverse' has a wrong offset!");

struct FDigestedVehicleDriving final
{
public:
	bool                                          bCanTurnInPlace;
	bool                                          bAvoidanceEnabled;
	bool                                          bPreventTurningWhenStopping;
	uint8                                         Pad_3[0x5];
	struct FGameplayTagQuery                      AvoidanceTagQuery;
	bool                                          bReverseSwapLeftAndRight;
	uint8                                         Pad_51[0x3];
	float                                         MinimumForwardPIDValueForStopping;
	float                                         MinimumDistanceLeftForBoosting;
	struct FVehicleDigestedPIDController          ForwardPIDController;
	struct FVehicleDigestedPIDController          SteeringPIDController;
	struct FVehicleDigestedAppendToPath           AppendToPath;
	struct FVehicleDigestedTurnInPlace            TurnInPlace;
	uint8                                         Pad_94[0x4];
	struct FGameplayTagContainer                  ModsTags;
};
static_assert(alignof(FDigestedVehicleDriving) == 0x000008, "Wrong alignment on FDigestedVehicleDriving");
static_assert(sizeof(FDigestedVehicleDriving) == 0x0000B8, "Wrong size on FDigestedVehicleDriving");
static_assert(offsetof(FDigestedVehicleDriving, bCanTurnInPlace) == 0x000000, "Member 'FDigestedVehicleDriving::bCanTurnInPlace' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, bAvoidanceEnabled) == 0x000001, "Member 'FDigestedVehicleDriving::bAvoidanceEnabled' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, bPreventTurningWhenStopping) == 0x000002, "Member 'FDigestedVehicleDriving::bPreventTurningWhenStopping' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, AvoidanceTagQuery) == 0x000008, "Member 'FDigestedVehicleDriving::AvoidanceTagQuery' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, bReverseSwapLeftAndRight) == 0x000050, "Member 'FDigestedVehicleDriving::bReverseSwapLeftAndRight' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, MinimumForwardPIDValueForStopping) == 0x000054, "Member 'FDigestedVehicleDriving::MinimumForwardPIDValueForStopping' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, MinimumDistanceLeftForBoosting) == 0x000058, "Member 'FDigestedVehicleDriving::MinimumDistanceLeftForBoosting' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, ForwardPIDController) == 0x00005C, "Member 'FDigestedVehicleDriving::ForwardPIDController' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, SteeringPIDController) == 0x000068, "Member 'FDigestedVehicleDriving::SteeringPIDController' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, AppendToPath) == 0x000074, "Member 'FDigestedVehicleDriving::AppendToPath' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, TurnInPlace) == 0x00007C, "Member 'FDigestedVehicleDriving::TurnInPlace' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDriving, ModsTags) == 0x000098, "Member 'FDigestedVehicleDriving::ModsTags' has a wrong offset!");

struct FDigestedVehicleDrivingCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FDigestedVehicleDriving                VehicleDriving;
};
static_assert(alignof(FDigestedVehicleDrivingCategory) == 0x000008, "Wrong alignment on FDigestedVehicleDrivingCategory");
static_assert(sizeof(FDigestedVehicleDrivingCategory) == 0x0000D8, "Wrong size on FDigestedVehicleDrivingCategory");
static_assert(offsetof(FDigestedVehicleDrivingCategory, Tags) == 0x000000, "Member 'FDigestedVehicleDrivingCategory::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedVehicleDrivingCategory, VehicleDriving) == 0x000020, "Member 'FDigestedVehicleDrivingCategory::VehicleDriving' has a wrong offset!");

struct FFortSpawnAIRequest final
{
public:
	struct FGuid                                  SpawnGroupInstanceGuid;
	int32                                         EnemyIndex;
	uint8                                         Pad_14[0x4];
	struct FVector                                SpawnLocation;
	struct FRotator                               SpawnRotation;
	class AActor*                                 SpawnPoint;
	TArray<class UFortAbilitySet*>                AbilitySetsToGrantOnSpawn;
	bool                                          bIgnoreCollisionWhenSpawning;
	uint8                                         Pad_61[0x3];
	float                                         SpawnDelay;
};
static_assert(alignof(FFortSpawnAIRequest) == 0x000008, "Wrong alignment on FFortSpawnAIRequest");
static_assert(sizeof(FFortSpawnAIRequest) == 0x000068, "Wrong size on FFortSpawnAIRequest");
static_assert(offsetof(FFortSpawnAIRequest, SpawnGroupInstanceGuid) == 0x000000, "Member 'FFortSpawnAIRequest::SpawnGroupInstanceGuid' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, EnemyIndex) == 0x000010, "Member 'FFortSpawnAIRequest::EnemyIndex' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, SpawnLocation) == 0x000018, "Member 'FFortSpawnAIRequest::SpawnLocation' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, SpawnRotation) == 0x000030, "Member 'FFortSpawnAIRequest::SpawnRotation' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, SpawnPoint) == 0x000048, "Member 'FFortSpawnAIRequest::SpawnPoint' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, AbilitySetsToGrantOnSpawn) == 0x000050, "Member 'FFortSpawnAIRequest::AbilitySetsToGrantOnSpawn' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, bIgnoreCollisionWhenSpawning) == 0x000060, "Member 'FFortSpawnAIRequest::bIgnoreCollisionWhenSpawning' has a wrong offset!");
static_assert(offsetof(FFortSpawnAIRequest, SpawnDelay) == 0x000064, "Member 'FFortSpawnAIRequest::SpawnDelay' has a wrong offset!");

struct FVehiclePIDController final
{
public:
	struct FScalableFloat                         KP;
	struct FScalableFloat                         KI;
	struct FScalableFloat                         KD;
};
static_assert(alignof(FVehiclePIDController) == 0x000008, "Wrong alignment on FVehiclePIDController");
static_assert(sizeof(FVehiclePIDController) == 0x000078, "Wrong size on FVehiclePIDController");
static_assert(offsetof(FVehiclePIDController, KP) == 0x000000, "Member 'FVehiclePIDController::KP' has a wrong offset!");
static_assert(offsetof(FVehiclePIDController, KI) == 0x000028, "Member 'FVehiclePIDController::KI' has a wrong offset!");
static_assert(offsetof(FVehiclePIDController, KD) == 0x000050, "Member 'FVehiclePIDController::KD' has a wrong offset!");

struct FFortAISpawnerData final
{
public:
	struct FGuid                                  SpawnGroupInstanceGuid;
	struct FFortSpawnAIRequest                    ReservedSpawnRequest;
};
static_assert(alignof(FFortAISpawnerData) == 0x000008, "Wrong alignment on FFortAISpawnerData");
static_assert(sizeof(FFortAISpawnerData) == 0x000078, "Wrong size on FFortAISpawnerData");
static_assert(offsetof(FFortAISpawnerData, SpawnGroupInstanceGuid) == 0x000000, "Member 'FFortAISpawnerData::SpawnGroupInstanceGuid' has a wrong offset!");
static_assert(offsetof(FFortAISpawnerData, ReservedSpawnRequest) == 0x000010, "Member 'FFortAISpawnerData::ReservedSpawnRequest' has a wrong offset!");

struct FFortEncounterAIDirectorFactor final
{
public:
	float                                         CurrentValue;
	float                                         AccumulatedPeriodValue;
	float                                         TotalPeriodTime;
};
static_assert(alignof(FFortEncounterAIDirectorFactor) == 0x000004, "Wrong alignment on FFortEncounterAIDirectorFactor");
static_assert(sizeof(FFortEncounterAIDirectorFactor) == 0x00000C, "Wrong size on FFortEncounterAIDirectorFactor");
static_assert(offsetof(FFortEncounterAIDirectorFactor, CurrentValue) == 0x000000, "Member 'FFortEncounterAIDirectorFactor::CurrentValue' has a wrong offset!");
static_assert(offsetof(FFortEncounterAIDirectorFactor, AccumulatedPeriodValue) == 0x000004, "Member 'FFortEncounterAIDirectorFactor::AccumulatedPeriodValue' has a wrong offset!");
static_assert(offsetof(FFortEncounterAIDirectorFactor, TotalPeriodTime) == 0x000008, "Member 'FFortEncounterAIDirectorFactor::TotalPeriodTime' has a wrong offset!");

struct FRangedWeaponSkillCategorySpecialization final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FRangedWeaponSkill                     WeaponSkill;
};
static_assert(alignof(FRangedWeaponSkillCategorySpecialization) == 0x000008, "Wrong alignment on FRangedWeaponSkillCategorySpecialization");
static_assert(sizeof(FRangedWeaponSkillCategorySpecialization) == 0x000180, "Wrong size on FRangedWeaponSkillCategorySpecialization");
static_assert(offsetof(FRangedWeaponSkillCategorySpecialization, Tags) == 0x000000, "Member 'FRangedWeaponSkillCategorySpecialization::Tags' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkillCategorySpecialization, WeaponSkill) == 0x000020, "Member 'FRangedWeaponSkillCategorySpecialization::WeaponSkill' has a wrong offset!");

struct FEncounterEnvironmentQueryInstance final
{
public:
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> EnvironmentQueryInfo;
	int32                                         QueryID;
	bool                                          bIsWaitingForQueryResults;
	EFortEncounterDirection                       ChosenDirection;
	uint8                                         Pad_2E[0x2];
	TArray<struct FVector>                        QueryLocations;
	TArray<TWeakObjectPtr<class ABuildingRift>>   FoundRifts;
	int32                                         NumTimesUsed;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FEncounterEnvironmentQueryInstance) == 0x000008, "Wrong alignment on FEncounterEnvironmentQueryInstance");
static_assert(sizeof(FEncounterEnvironmentQueryInstance) == 0x000058, "Wrong size on FEncounterEnvironmentQueryInstance");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, EnvironmentQueryInfo) == 0x000000, "Member 'FEncounterEnvironmentQueryInstance::EnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, QueryID) == 0x000028, "Member 'FEncounterEnvironmentQueryInstance::QueryID' has a wrong offset!");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, bIsWaitingForQueryResults) == 0x00002C, "Member 'FEncounterEnvironmentQueryInstance::bIsWaitingForQueryResults' has a wrong offset!");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, ChosenDirection) == 0x00002D, "Member 'FEncounterEnvironmentQueryInstance::ChosenDirection' has a wrong offset!");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, QueryLocations) == 0x000030, "Member 'FEncounterEnvironmentQueryInstance::QueryLocations' has a wrong offset!");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, FoundRifts) == 0x000040, "Member 'FEncounterEnvironmentQueryInstance::FoundRifts' has a wrong offset!");
static_assert(offsetof(FEncounterEnvironmentQueryInstance, NumTimesUsed) == 0x000050, "Member 'FEncounterEnvironmentQueryInstance::NumTimesUsed' has a wrong offset!");

struct FFortAIEncounterWaveProgressEstimation final
{
public:
	float                                         SectionProgressEstimate;
	float                                         SectionStartTime;
	float                                         LastWaveProgressUpdateTime;
	float                                         PeakAndFadeWavePercentage;
	float                                         MaxAdjustmentPerSecond;
	EFortAIWaveProgressSection                    CurrentSection;
	uint8                                         Pad_15[0x3];
	int32                                         NumberOfWaveSegments;
};
static_assert(alignof(FFortAIEncounterWaveProgressEstimation) == 0x000004, "Wrong alignment on FFortAIEncounterWaveProgressEstimation");
static_assert(sizeof(FFortAIEncounterWaveProgressEstimation) == 0x00001C, "Wrong size on FFortAIEncounterWaveProgressEstimation");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, SectionProgressEstimate) == 0x000000, "Member 'FFortAIEncounterWaveProgressEstimation::SectionProgressEstimate' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, SectionStartTime) == 0x000004, "Member 'FFortAIEncounterWaveProgressEstimation::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, LastWaveProgressUpdateTime) == 0x000008, "Member 'FFortAIEncounterWaveProgressEstimation::LastWaveProgressUpdateTime' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, PeakAndFadeWavePercentage) == 0x00000C, "Member 'FFortAIEncounterWaveProgressEstimation::PeakAndFadeWavePercentage' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, MaxAdjustmentPerSecond) == 0x000010, "Member 'FFortAIEncounterWaveProgressEstimation::MaxAdjustmentPerSecond' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, CurrentSection) == 0x000014, "Member 'FFortAIEncounterWaveProgressEstimation::CurrentSection' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterWaveProgressEstimation, NumberOfWaveSegments) == 0x000018, "Member 'FFortAIEncounterWaveProgressEstimation::NumberOfWaveSegments' has a wrong offset!");

struct FVehicleTurnInPlace final
{
public:
	struct FScalableFloat                         MovingAngleBegin;
	struct FScalableFloat                         MovingAngleEnd;
	struct FScalableFloat                         IdleAngleBegin;
	struct FScalableFloat                         IdleAngleEnd;
	struct FScalableFloat                         MinMovingSpeed;
	bool                                          bMissedPathPointReverse;
	uint8                                         Pad_C9[0x7];
};
static_assert(alignof(FVehicleTurnInPlace) == 0x000008, "Wrong alignment on FVehicleTurnInPlace");
static_assert(sizeof(FVehicleTurnInPlace) == 0x0000D0, "Wrong size on FVehicleTurnInPlace");
static_assert(offsetof(FVehicleTurnInPlace, MovingAngleBegin) == 0x000000, "Member 'FVehicleTurnInPlace::MovingAngleBegin' has a wrong offset!");
static_assert(offsetof(FVehicleTurnInPlace, MovingAngleEnd) == 0x000028, "Member 'FVehicleTurnInPlace::MovingAngleEnd' has a wrong offset!");
static_assert(offsetof(FVehicleTurnInPlace, IdleAngleBegin) == 0x000050, "Member 'FVehicleTurnInPlace::IdleAngleBegin' has a wrong offset!");
static_assert(offsetof(FVehicleTurnInPlace, IdleAngleEnd) == 0x000078, "Member 'FVehicleTurnInPlace::IdleAngleEnd' has a wrong offset!");
static_assert(offsetof(FVehicleTurnInPlace, MinMovingSpeed) == 0x0000A0, "Member 'FVehicleTurnInPlace::MinMovingSpeed' has a wrong offset!");
static_assert(offsetof(FVehicleTurnInPlace, bMissedPathPointReverse) == 0x0000C8, "Member 'FVehicleTurnInPlace::bMissedPathPointReverse' has a wrong offset!");

struct FFortGoalActorEncounterDataManagerPair final
{
public:
	class AActor*                                 GoalActor;
	class AFortAIDirectorDataManager*             EncounterDataManager;
};
static_assert(alignof(FFortGoalActorEncounterDataManagerPair) == 0x000008, "Wrong alignment on FFortGoalActorEncounterDataManagerPair");
static_assert(sizeof(FFortGoalActorEncounterDataManagerPair) == 0x000010, "Wrong size on FFortGoalActorEncounterDataManagerPair");
static_assert(offsetof(FFortGoalActorEncounterDataManagerPair, GoalActor) == 0x000000, "Member 'FFortGoalActorEncounterDataManagerPair::GoalActor' has a wrong offset!");
static_assert(offsetof(FFortGoalActorEncounterDataManagerPair, EncounterDataManager) == 0x000008, "Member 'FFortGoalActorEncounterDataManagerPair::EncounterDataManager' has a wrong offset!");

struct FFortAIEncounterRift final
{
public:
	int32                                         QueryID;
	uint8                                         Pad_4[0x4];
	struct FVector                                RiftLocation;
	class ABuildingRift*                          RiftActor;
	TStructCycleFixup<struct FFortRiftReservationHandle, 0x0004, 0x04> RiftReservationHandle;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FFortAIEncounterRift) == 0x000008, "Wrong alignment on FFortAIEncounterRift");
static_assert(sizeof(FFortAIEncounterRift) == 0x000030, "Wrong size on FFortAIEncounterRift");
static_assert(offsetof(FFortAIEncounterRift, QueryID) == 0x000000, "Member 'FFortAIEncounterRift::QueryID' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRift, RiftLocation) == 0x000008, "Member 'FFortAIEncounterRift::RiftLocation' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRift, RiftActor) == 0x000020, "Member 'FFortAIEncounterRift::RiftActor' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRift, RiftReservationHandle) == 0x000028, "Member 'FFortAIEncounterRift::RiftReservationHandle' has a wrong offset!");

struct alignas(0x04) FFortAthenaSmartObjectSlotStateData final : public FSmartObjectSlotStateData
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FFortAthenaSmartObjectSlotStateData) == 0x000004, "Wrong alignment on FFortAthenaSmartObjectSlotStateData");
static_assert(sizeof(FFortAthenaSmartObjectSlotStateData) == 0x000004, "Wrong size on FFortAthenaSmartObjectSlotStateData");

struct FFortAIEncounterSpawnArea final
{
public:
	TArray<struct FEncounterEnvironmentQueryInstance> QueryInstances;
	TArray<struct FFortAIEncounterRift>           PendingRifts;
	TArray<struct FFortAIEncounterRift>           Rifts;
	TArray<struct FVector>                        UsedRiftLocations;
	TArray<class UFortPathCostEstimator*>         PathEstimators;
	bool                                          bIsActive;
	bool                                          bUsingFallbackQuery;
	EFortEncounterSpawnLocationManagementMode     SpawnLocationManagementMode;
	uint8                                         Pad_53[0x5];
};
static_assert(alignof(FFortAIEncounterSpawnArea) == 0x000008, "Wrong alignment on FFortAIEncounterSpawnArea");
static_assert(sizeof(FFortAIEncounterSpawnArea) == 0x000058, "Wrong size on FFortAIEncounterSpawnArea");
static_assert(offsetof(FFortAIEncounterSpawnArea, QueryInstances) == 0x000000, "Member 'FFortAIEncounterSpawnArea::QueryInstances' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, PendingRifts) == 0x000010, "Member 'FFortAIEncounterSpawnArea::PendingRifts' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, Rifts) == 0x000020, "Member 'FFortAIEncounterSpawnArea::Rifts' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, UsedRiftLocations) == 0x000030, "Member 'FFortAIEncounterSpawnArea::UsedRiftLocations' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, PathEstimators) == 0x000040, "Member 'FFortAIEncounterSpawnArea::PathEstimators' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, bIsActive) == 0x000050, "Member 'FFortAIEncounterSpawnArea::bIsActive' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, bUsingFallbackQuery) == 0x000051, "Member 'FFortAIEncounterSpawnArea::bUsingFallbackQuery' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterSpawnArea, SpawnLocationManagementMode) == 0x000052, "Member 'FFortAIEncounterSpawnArea::SpawnLocationManagementMode' has a wrong offset!");

struct FFortAIEncounterRiftManagerInitializationData final
{
public:
	class UFortAIEncounterInfo*                   EncounterInfo;
	TStructCycleFixup<struct FFortEncounterSettings, 0x00C0, 0x08> EncounterSettings;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> CurrentEnvironmentQueryInfo;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> FallbackEnvironmentQueryInfo;
	TSubclassOf<class ABuildingRift>              RiftClassTemplate;
	int32                                         NumRiftsToUse;
	int32                                         MinRiftsToUse;
	float                                         UpdateIntervalTimeSeconds;
	uint8                                         Pad_12C[0x4];
};
static_assert(alignof(FFortAIEncounterRiftManagerInitializationData) == 0x000008, "Wrong alignment on FFortAIEncounterRiftManagerInitializationData");
static_assert(sizeof(FFortAIEncounterRiftManagerInitializationData) == 0x000130, "Wrong size on FFortAIEncounterRiftManagerInitializationData");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, EncounterInfo) == 0x000000, "Member 'FFortAIEncounterRiftManagerInitializationData::EncounterInfo' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, EncounterSettings) == 0x000008, "Member 'FFortAIEncounterRiftManagerInitializationData::EncounterSettings' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, CurrentEnvironmentQueryInfo) == 0x0000C8, "Member 'FFortAIEncounterRiftManagerInitializationData::CurrentEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, FallbackEnvironmentQueryInfo) == 0x0000F0, "Member 'FFortAIEncounterRiftManagerInitializationData::FallbackEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, RiftClassTemplate) == 0x000118, "Member 'FFortAIEncounterRiftManagerInitializationData::RiftClassTemplate' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, NumRiftsToUse) == 0x000120, "Member 'FFortAIEncounterRiftManagerInitializationData::NumRiftsToUse' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, MinRiftsToUse) == 0x000124, "Member 'FFortAIEncounterRiftManagerInitializationData::MinRiftsToUse' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterRiftManagerInitializationData, UpdateIntervalTimeSeconds) == 0x000128, "Member 'FFortAIEncounterRiftManagerInitializationData::UpdateIntervalTimeSeconds' has a wrong offset!");

struct FVehicleAppendToPath final
{
public:
	struct FScalableFloat                         MinimumPathLengthToEndOfPath;
	struct FScalableFloat                         MinTimeSinceLastAppend;
};
static_assert(alignof(FVehicleAppendToPath) == 0x000008, "Wrong alignment on FVehicleAppendToPath");
static_assert(sizeof(FVehicleAppendToPath) == 0x000050, "Wrong size on FVehicleAppendToPath");
static_assert(offsetof(FVehicleAppendToPath, MinimumPathLengthToEndOfPath) == 0x000000, "Member 'FVehicleAppendToPath::MinimumPathLengthToEndOfPath' has a wrong offset!");
static_assert(offsetof(FVehicleAppendToPath, MinTimeSinceLastAppend) == 0x000028, "Member 'FVehicleAppendToPath::MinTimeSinceLastAppend' has a wrong offset!");

struct FVehicleDriving final
{
public:
	bool                                          bCanTurnInPlace;
	uint8                                         Pad_1[0x7];
	struct FVehicleTurnInPlace                    TurnInPlace;
	struct FScalableFloat                         ReverseSwapLeftAndRight;
	struct FScalableFloat                         MinimumForwardPIDValueForStopping;
	struct FScalableFloat                         MinimumDistanceLeftForBoosting;
	struct FVehiclePIDController                  ForwardPIDController;
	struct FVehiclePIDController                  SteeringPIDController;
	bool                                          bAvoidanceEnabled;
	bool                                          bPreventTurningWhenStopping;
	uint8                                         Pad_242[0x6];
	struct FGameplayTagQuery                      AvoidanceTagQuery;
	struct FVehicleAppendToPath                   AppendToPath;
	struct FGameplayTagContainer                  ModsTags;
};
static_assert(alignof(FVehicleDriving) == 0x000008, "Wrong alignment on FVehicleDriving");
static_assert(sizeof(FVehicleDriving) == 0x000300, "Wrong size on FVehicleDriving");
static_assert(offsetof(FVehicleDriving, bCanTurnInPlace) == 0x000000, "Member 'FVehicleDriving::bCanTurnInPlace' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, TurnInPlace) == 0x000008, "Member 'FVehicleDriving::TurnInPlace' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, ReverseSwapLeftAndRight) == 0x0000D8, "Member 'FVehicleDriving::ReverseSwapLeftAndRight' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, MinimumForwardPIDValueForStopping) == 0x000100, "Member 'FVehicleDriving::MinimumForwardPIDValueForStopping' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, MinimumDistanceLeftForBoosting) == 0x000128, "Member 'FVehicleDriving::MinimumDistanceLeftForBoosting' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, ForwardPIDController) == 0x000150, "Member 'FVehicleDriving::ForwardPIDController' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, SteeringPIDController) == 0x0001C8, "Member 'FVehicleDriving::SteeringPIDController' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, bAvoidanceEnabled) == 0x000240, "Member 'FVehicleDriving::bAvoidanceEnabled' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, bPreventTurningWhenStopping) == 0x000241, "Member 'FVehicleDriving::bPreventTurningWhenStopping' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, AvoidanceTagQuery) == 0x000248, "Member 'FVehicleDriving::AvoidanceTagQuery' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, AppendToPath) == 0x000290, "Member 'FVehicleDriving::AppendToPath' has a wrong offset!");
static_assert(offsetof(FVehicleDriving, ModsTags) == 0x0002E0, "Member 'FVehicleDriving::ModsTags' has a wrong offset!");

struct FVehicleDrivingCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FVehicleDriving                        VehicleDriving;
};
static_assert(alignof(FVehicleDrivingCategory) == 0x000008, "Wrong alignment on FVehicleDrivingCategory");
static_assert(sizeof(FVehicleDrivingCategory) == 0x000320, "Wrong size on FVehicleDrivingCategory");
static_assert(offsetof(FVehicleDrivingCategory, Tags) == 0x000000, "Member 'FVehicleDrivingCategory::Tags' has a wrong offset!");
static_assert(offsetof(FVehicleDrivingCategory, VehicleDriving) == 0x000020, "Member 'FVehicleDrivingCategory::VehicleDriving' has a wrong offset!");

struct FFortAIEncounterQueryDirectionTracker final
{
public:
	bool                                          bHasTriedPreviousDirections;
	uint8                                         Pad_1[0x7];
	TArray<EFortEncounterDirection>               PreviousQueryDirections;
	TArray<EFortEncounterDirection>               ChosenDirections;
	TArray<EFortEncounterDirection>               FailedDirections;
	TArray<EFortEncounterDirection>               AvailableDirections;
};
static_assert(alignof(FFortAIEncounterQueryDirectionTracker) == 0x000008, "Wrong alignment on FFortAIEncounterQueryDirectionTracker");
static_assert(sizeof(FFortAIEncounterQueryDirectionTracker) == 0x000048, "Wrong size on FFortAIEncounterQueryDirectionTracker");
static_assert(offsetof(FFortAIEncounterQueryDirectionTracker, bHasTriedPreviousDirections) == 0x000000, "Member 'FFortAIEncounterQueryDirectionTracker::bHasTriedPreviousDirections' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterQueryDirectionTracker, PreviousQueryDirections) == 0x000008, "Member 'FFortAIEncounterQueryDirectionTracker::PreviousQueryDirections' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterQueryDirectionTracker, ChosenDirections) == 0x000018, "Member 'FFortAIEncounterQueryDirectionTracker::ChosenDirections' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterQueryDirectionTracker, FailedDirections) == 0x000028, "Member 'FFortAIEncounterQueryDirectionTracker::FailedDirections' has a wrong offset!");
static_assert(offsetof(FFortAIEncounterQueryDirectionTracker, AvailableDirections) == 0x000038, "Member 'FFortAIEncounterQueryDirectionTracker::AvailableDirections' has a wrong offset!");

struct FFortAIGoalInfo
{
public:
	TWeakObjectPtr<class AActor>                  Actor;
	struct FVector                                Location;
	bool                                          bActorAlwaysPerceived;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FFortAIGoalInfo) == 0x000008, "Wrong alignment on FFortAIGoalInfo");
static_assert(sizeof(FFortAIGoalInfo) == 0x000028, "Wrong size on FFortAIGoalInfo");
static_assert(offsetof(FFortAIGoalInfo, Actor) == 0x000000, "Member 'FFortAIGoalInfo::Actor' has a wrong offset!");
static_assert(offsetof(FFortAIGoalInfo, Location) == 0x000008, "Member 'FFortAIGoalInfo::Location' has a wrong offset!");
static_assert(offsetof(FFortAIGoalInfo, bActorAlwaysPerceived) == 0x000020, "Member 'FFortAIGoalInfo::bActorAlwaysPerceived' has a wrong offset!");

struct FAIDiscouragedGoalTimer final
{
public:
	struct FFortAIGoalInfo                        DiscouragedGoalInfo;
	double                                        ExpirationTime;
	uint32                                        NumberOfTimesMarkedForDiscouragement;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FAIDiscouragedGoalTimer) == 0x000008, "Wrong alignment on FAIDiscouragedGoalTimer");
static_assert(sizeof(FAIDiscouragedGoalTimer) == 0x000038, "Wrong size on FAIDiscouragedGoalTimer");
static_assert(offsetof(FAIDiscouragedGoalTimer, DiscouragedGoalInfo) == 0x000000, "Member 'FAIDiscouragedGoalTimer::DiscouragedGoalInfo' has a wrong offset!");
static_assert(offsetof(FAIDiscouragedGoalTimer, ExpirationTime) == 0x000028, "Member 'FAIDiscouragedGoalTimer::ExpirationTime' has a wrong offset!");
static_assert(offsetof(FAIDiscouragedGoalTimer, NumberOfTimesMarkedForDiscouragement) == 0x000030, "Member 'FAIDiscouragedGoalTimer::NumberOfTimesMarkedForDiscouragement' has a wrong offset!");

struct FAIAssignmentInfo final
{
public:
	TWeakObjectPtr<class UFortAIAssignment>       CurrentAssignment;
	struct FFortAIGoalInfo                        CurrentGoal;
	float                                         TimeCurrentGoalWasChosen;
	float                                         TimeExitedLastAssignmentOfType[0x4];
	TWeakObjectPtr<class UFortAIAssignment>       PreviousAssignment;
	uint8                                         Pad_4C[0x4];
	struct FFortAIGoalInfo                        PreviousGoal;
	bool                                          bWaitingForQueryResponse;
	bool                                          bSuppressGoalUpdates;
	bool                                          bReportEnemyGoalSelection;
	uint8                                         Pad_7B[0x7D];
};
static_assert(alignof(FAIAssignmentInfo) == 0x000008, "Wrong alignment on FAIAssignmentInfo");
static_assert(sizeof(FAIAssignmentInfo) == 0x0000F8, "Wrong size on FAIAssignmentInfo");
static_assert(offsetof(FAIAssignmentInfo, CurrentAssignment) == 0x000000, "Member 'FAIAssignmentInfo::CurrentAssignment' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, CurrentGoal) == 0x000008, "Member 'FAIAssignmentInfo::CurrentGoal' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, TimeCurrentGoalWasChosen) == 0x000030, "Member 'FAIAssignmentInfo::TimeCurrentGoalWasChosen' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, TimeExitedLastAssignmentOfType) == 0x000034, "Member 'FAIAssignmentInfo::TimeExitedLastAssignmentOfType' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, PreviousAssignment) == 0x000044, "Member 'FAIAssignmentInfo::PreviousAssignment' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, PreviousGoal) == 0x000050, "Member 'FAIAssignmentInfo::PreviousGoal' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, bWaitingForQueryResponse) == 0x000078, "Member 'FAIAssignmentInfo::bWaitingForQueryResponse' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, bSuppressGoalUpdates) == 0x000079, "Member 'FAIAssignmentInfo::bSuppressGoalUpdates' has a wrong offset!");
static_assert(offsetof(FAIAssignmentInfo, bReportEnemyGoalSelection) == 0x00007A, "Member 'FAIAssignmentInfo::bReportEnemyGoalSelection' has a wrong offset!");

struct FDigestedWeaponAccuracy final
{
public:
	struct FScalableFloat                         TrackingOffsetError;
	struct FScalableFloat                         TargetingTrackingOffsetError;
	struct FScalableFloat                         TrackingDistanceFarError;
	struct FScalableFloat                         TargetingTrackingDistanceFarError;
	struct FScalableFloat                         TrackingDistanceNearError;
	struct FScalableFloat                         TargetingTrackingDistanceNearError;
	struct FScalableFloat                         TrackingDistanceNearErrorProbability;
	struct FScalableFloat                         TargetingActivationProbability;
	struct FScalableFloat                         FiringRestrictedToTargetingActive;
	float                                         MinimumDistanceForAiming;
	float                                         MinimumDistanceForPawnAiming;
	float                                         IdealAttackRange;
	float                                         TargetingIdealAttackRange;
	float                                         MaxAttackRange;
	float                                         ChanceToAimAtTargetsFeet;
	struct FScalableFloat                         ShouldUseProjectileArcForAiming;
	bool                                          bKeepAimingOnSameSideWhileFiring;
	uint8                                         Pad_1A9[0x3];
	float                                         MaxTrackingHeightOffsetError;
	float                                         MinRotationInterpSpeed;
	float                                         MaxRotationInterpSpeed;
	bool                                          bOverrideAimingCircleSettings;
	bool                                          bConsiderProjectileTravelTime;
	uint8                                         Pad_1BA[0x6];
	struct FDigestedAimingCircleSettings          AimingCircleSettingsOverride;
};
static_assert(alignof(FDigestedWeaponAccuracy) == 0x000008, "Wrong alignment on FDigestedWeaponAccuracy");
static_assert(sizeof(FDigestedWeaponAccuracy) == 0x000320, "Wrong size on FDigestedWeaponAccuracy");
static_assert(offsetof(FDigestedWeaponAccuracy, TrackingOffsetError) == 0x000000, "Member 'FDigestedWeaponAccuracy::TrackingOffsetError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TargetingTrackingOffsetError) == 0x000028, "Member 'FDigestedWeaponAccuracy::TargetingTrackingOffsetError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TrackingDistanceFarError) == 0x000050, "Member 'FDigestedWeaponAccuracy::TrackingDistanceFarError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TargetingTrackingDistanceFarError) == 0x000078, "Member 'FDigestedWeaponAccuracy::TargetingTrackingDistanceFarError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TrackingDistanceNearError) == 0x0000A0, "Member 'FDigestedWeaponAccuracy::TrackingDistanceNearError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TargetingTrackingDistanceNearError) == 0x0000C8, "Member 'FDigestedWeaponAccuracy::TargetingTrackingDistanceNearError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TrackingDistanceNearErrorProbability) == 0x0000F0, "Member 'FDigestedWeaponAccuracy::TrackingDistanceNearErrorProbability' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TargetingActivationProbability) == 0x000118, "Member 'FDigestedWeaponAccuracy::TargetingActivationProbability' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, FiringRestrictedToTargetingActive) == 0x000140, "Member 'FDigestedWeaponAccuracy::FiringRestrictedToTargetingActive' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, MinimumDistanceForAiming) == 0x000168, "Member 'FDigestedWeaponAccuracy::MinimumDistanceForAiming' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, MinimumDistanceForPawnAiming) == 0x00016C, "Member 'FDigestedWeaponAccuracy::MinimumDistanceForPawnAiming' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, IdealAttackRange) == 0x000170, "Member 'FDigestedWeaponAccuracy::IdealAttackRange' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, TargetingIdealAttackRange) == 0x000174, "Member 'FDigestedWeaponAccuracy::TargetingIdealAttackRange' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, MaxAttackRange) == 0x000178, "Member 'FDigestedWeaponAccuracy::MaxAttackRange' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, ChanceToAimAtTargetsFeet) == 0x00017C, "Member 'FDigestedWeaponAccuracy::ChanceToAimAtTargetsFeet' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, ShouldUseProjectileArcForAiming) == 0x000180, "Member 'FDigestedWeaponAccuracy::ShouldUseProjectileArcForAiming' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, bKeepAimingOnSameSideWhileFiring) == 0x0001A8, "Member 'FDigestedWeaponAccuracy::bKeepAimingOnSameSideWhileFiring' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, MaxTrackingHeightOffsetError) == 0x0001AC, "Member 'FDigestedWeaponAccuracy::MaxTrackingHeightOffsetError' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, MinRotationInterpSpeed) == 0x0001B0, "Member 'FDigestedWeaponAccuracy::MinRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, MaxRotationInterpSpeed) == 0x0001B4, "Member 'FDigestedWeaponAccuracy::MaxRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, bOverrideAimingCircleSettings) == 0x0001B8, "Member 'FDigestedWeaponAccuracy::bOverrideAimingCircleSettings' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, bConsiderProjectileTravelTime) == 0x0001B9, "Member 'FDigestedWeaponAccuracy::bConsiderProjectileTravelTime' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracy, AimingCircleSettingsOverride) == 0x0001C0, "Member 'FDigestedWeaponAccuracy::AimingCircleSettingsOverride' has a wrong offset!");

struct FDigestedWeaponAccuracyCategorySpecialization final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FDigestedWeaponAccuracy                WeaponAccuracy;
};
static_assert(alignof(FDigestedWeaponAccuracyCategorySpecialization) == 0x000008, "Wrong alignment on FDigestedWeaponAccuracyCategorySpecialization");
static_assert(sizeof(FDigestedWeaponAccuracyCategorySpecialization) == 0x000340, "Wrong size on FDigestedWeaponAccuracyCategorySpecialization");
static_assert(offsetof(FDigestedWeaponAccuracyCategorySpecialization, Tags) == 0x000000, "Member 'FDigestedWeaponAccuracyCategorySpecialization::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracyCategorySpecialization, WeaponAccuracy) == 0x000020, "Member 'FDigestedWeaponAccuracyCategorySpecialization::WeaponAccuracy' has a wrong offset!");

struct FFortAIPawnMaterialDefinition final
{
public:
	TSoftObjectPtr<class UMaterialInterface>      Material;
	bool                                          bRequireDynamicInstance;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FFortAIPawnMaterialDefinition) == 0x000008, "Wrong alignment on FFortAIPawnMaterialDefinition");
static_assert(sizeof(FFortAIPawnMaterialDefinition) == 0x000030, "Wrong size on FFortAIPawnMaterialDefinition");
static_assert(offsetof(FFortAIPawnMaterialDefinition, Material) == 0x000000, "Member 'FFortAIPawnMaterialDefinition::Material' has a wrong offset!");
static_assert(offsetof(FFortAIPawnMaterialDefinition, bRequireDynamicInstance) == 0x000028, "Member 'FFortAIPawnMaterialDefinition::bRequireDynamicInstance' has a wrong offset!");

struct FFortAIPawnVariantDefinition final
{
public:
	TSubclassOf<class AFortAIPawn>                PawnClass;
	struct FCurveTableRowHandle                   VariantWeightCurve;
	float                                         CurrentWeight;
	uint8                                         Pad_1C[0x4];
	struct FGameplayTagQuery                      RequiredTagsQuery;
};
static_assert(alignof(FFortAIPawnVariantDefinition) == 0x000008, "Wrong alignment on FFortAIPawnVariantDefinition");
static_assert(sizeof(FFortAIPawnVariantDefinition) == 0x000068, "Wrong size on FFortAIPawnVariantDefinition");
static_assert(offsetof(FFortAIPawnVariantDefinition, PawnClass) == 0x000000, "Member 'FFortAIPawnVariantDefinition::PawnClass' has a wrong offset!");
static_assert(offsetof(FFortAIPawnVariantDefinition, VariantWeightCurve) == 0x000008, "Member 'FFortAIPawnVariantDefinition::VariantWeightCurve' has a wrong offset!");
static_assert(offsetof(FFortAIPawnVariantDefinition, CurrentWeight) == 0x000018, "Member 'FFortAIPawnVariantDefinition::CurrentWeight' has a wrong offset!");
static_assert(offsetof(FFortAIPawnVariantDefinition, RequiredTagsQuery) == 0x000020, "Member 'FFortAIPawnVariantDefinition::RequiredTagsQuery' has a wrong offset!");

struct FSpawnerDataComponentAffiliationSharedBBConfiguration final
{
public:
	struct FGameplayTag                           FactionTag;
	uint8                                         Pad_4[0x4];
	struct FScalableFloat                         MaximumDistance;
	struct FGameplayTag                           SharedBlackboardTag;
	uint8                                         Pad_34[0x4];
	class UBlackboardData*                        SharedBlackboard;
};
static_assert(alignof(FSpawnerDataComponentAffiliationSharedBBConfiguration) == 0x000008, "Wrong alignment on FSpawnerDataComponentAffiliationSharedBBConfiguration");
static_assert(sizeof(FSpawnerDataComponentAffiliationSharedBBConfiguration) == 0x000040, "Wrong size on FSpawnerDataComponentAffiliationSharedBBConfiguration");
static_assert(offsetof(FSpawnerDataComponentAffiliationSharedBBConfiguration, FactionTag) == 0x000000, "Member 'FSpawnerDataComponentAffiliationSharedBBConfiguration::FactionTag' has a wrong offset!");
static_assert(offsetof(FSpawnerDataComponentAffiliationSharedBBConfiguration, MaximumDistance) == 0x000008, "Member 'FSpawnerDataComponentAffiliationSharedBBConfiguration::MaximumDistance' has a wrong offset!");
static_assert(offsetof(FSpawnerDataComponentAffiliationSharedBBConfiguration, SharedBlackboardTag) == 0x000030, "Member 'FSpawnerDataComponentAffiliationSharedBBConfiguration::SharedBlackboardTag' has a wrong offset!");
static_assert(offsetof(FSpawnerDataComponentAffiliationSharedBBConfiguration, SharedBlackboard) == 0x000038, "Member 'FSpawnerDataComponentAffiliationSharedBBConfiguration::SharedBlackboard' has a wrong offset!");

struct FFortVariantSpawnPoints final : public FTableRowBase
{
public:
	int32                                         BudgetPoints;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FFortVariantSpawnPoints) == 0x000008, "Wrong alignment on FFortVariantSpawnPoints");
static_assert(sizeof(FFortVariantSpawnPoints) == 0x000010, "Wrong size on FFortVariantSpawnPoints");
static_assert(offsetof(FFortVariantSpawnPoints, BudgetPoints) == 0x000008, "Member 'FFortVariantSpawnPoints::BudgetPoints' has a wrong offset!");

struct FSpawnGroupEnemy final
{
public:
	TSubclassOf<class UFortAIPawnVariant>         EnemyVariantClass;
	bool                                          bOverrideVariantSpawnPointValue;
	uint8                                         Pad_9[0x3];
	int32                                         SpawnValue;
};
static_assert(alignof(FSpawnGroupEnemy) == 0x000008, "Wrong alignment on FSpawnGroupEnemy");
static_assert(sizeof(FSpawnGroupEnemy) == 0x000010, "Wrong size on FSpawnGroupEnemy");
static_assert(offsetof(FSpawnGroupEnemy, EnemyVariantClass) == 0x000000, "Member 'FSpawnGroupEnemy::EnemyVariantClass' has a wrong offset!");
static_assert(offsetof(FSpawnGroupEnemy, bOverrideVariantSpawnPointValue) == 0x000008, "Member 'FSpawnGroupEnemy::bOverrideVariantSpawnPointValue' has a wrong offset!");
static_assert(offsetof(FSpawnGroupEnemy, SpawnValue) == 0x00000C, "Member 'FSpawnGroupEnemy::SpawnValue' has a wrong offset!");

struct FDigestedTrackingOffsetModifierCurves final
{
public:
	int32                                         Values[0xA];
};
static_assert(alignof(FDigestedTrackingOffsetModifierCurves) == 0x000004, "Wrong alignment on FDigestedTrackingOffsetModifierCurves");
static_assert(sizeof(FDigestedTrackingOffsetModifierCurves) == 0x000028, "Wrong size on FDigestedTrackingOffsetModifierCurves");
static_assert(offsetof(FDigestedTrackingOffsetModifierCurves, Values) == 0x000000, "Member 'FDigestedTrackingOffsetModifierCurves::Values' has a wrong offset!");

struct FFortSpawnGroupEncounterTypeData final
{
public:
	struct FGameplayTagContainer                  EncounterTypeTags;
	struct FCurveTableRowHandle                   MaxGroupCategoryPopulationDensityCurve;
	struct FCurveTableRowHandle                   RespawnDelayCurve;
};
static_assert(alignof(FFortSpawnGroupEncounterTypeData) == 0x000008, "Wrong alignment on FFortSpawnGroupEncounterTypeData");
static_assert(sizeof(FFortSpawnGroupEncounterTypeData) == 0x000040, "Wrong size on FFortSpawnGroupEncounterTypeData");
static_assert(offsetof(FFortSpawnGroupEncounterTypeData, EncounterTypeTags) == 0x000000, "Member 'FFortSpawnGroupEncounterTypeData::EncounterTypeTags' has a wrong offset!");
static_assert(offsetof(FFortSpawnGroupEncounterTypeData, MaxGroupCategoryPopulationDensityCurve) == 0x000020, "Member 'FFortSpawnGroupEncounterTypeData::MaxGroupCategoryPopulationDensityCurve' has a wrong offset!");
static_assert(offsetof(FFortSpawnGroupEncounterTypeData, RespawnDelayCurve) == 0x000030, "Member 'FFortSpawnGroupEncounterTypeData::RespawnDelayCurve' has a wrong offset!");

struct FFortAIPawnUpgrade final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	TArray<struct FFortAIPawnUpgradeData>         PawnUpgradeDataPerPlayerCount;
};
static_assert(alignof(FFortAIPawnUpgrade) == 0x000008, "Wrong alignment on FFortAIPawnUpgrade");
static_assert(sizeof(FFortAIPawnUpgrade) == 0x000058, "Wrong size on FFortAIPawnUpgrade");
static_assert(offsetof(FFortAIPawnUpgrade, TagQuery) == 0x000000, "Member 'FFortAIPawnUpgrade::TagQuery' has a wrong offset!");
static_assert(offsetof(FFortAIPawnUpgrade, PawnUpgradeDataPerPlayerCount) == 0x000048, "Member 'FFortAIPawnUpgrade::PawnUpgradeDataPerPlayerCount' has a wrong offset!");

struct FWeaponAccuracyCategorySpecialization final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FWeaponAccuracy                        WeaponAccuracy;
};
static_assert(alignof(FWeaponAccuracyCategorySpecialization) == 0x000008, "Wrong alignment on FWeaponAccuracyCategorySpecialization");
static_assert(sizeof(FWeaponAccuracyCategorySpecialization) == 0x000758, "Wrong size on FWeaponAccuracyCategorySpecialization");
static_assert(offsetof(FWeaponAccuracyCategorySpecialization, Tags) == 0x000000, "Member 'FWeaponAccuracyCategorySpecialization::Tags' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracyCategorySpecialization, WeaponAccuracy) == 0x000020, "Member 'FWeaponAccuracyCategorySpecialization::WeaponAccuracy' has a wrong offset!");

struct FWeaponAccuracyCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FWeaponAccuracy                        WeaponAccuracy;
	TArray<struct FWeaponAccuracyCategorySpecialization> Specializations;
};
static_assert(alignof(FWeaponAccuracyCategory) == 0x000008, "Wrong alignment on FWeaponAccuracyCategory");
static_assert(sizeof(FWeaponAccuracyCategory) == 0x000768, "Wrong size on FWeaponAccuracyCategory");
static_assert(offsetof(FWeaponAccuracyCategory, Tags) == 0x000000, "Member 'FWeaponAccuracyCategory::Tags' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracyCategory, WeaponAccuracy) == 0x000020, "Member 'FWeaponAccuracyCategory::WeaponAccuracy' has a wrong offset!");
static_assert(offsetof(FWeaponAccuracyCategory, Specializations) == 0x000758, "Member 'FWeaponAccuracyCategory::Specializations' has a wrong offset!");

struct FFortAIAssignmentIdentifier final
{
public:
	EAssignmentType                               AssignmentType;
	uint8                                         Pad_1[0x7];
	struct FGameplayTagContainer                  AssignmentGameplayTags;
	EFortTeam                                     AssignmentTeam;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FFortAIAssignmentIdentifier) == 0x000008, "Wrong alignment on FFortAIAssignmentIdentifier");
static_assert(sizeof(FFortAIAssignmentIdentifier) == 0x000030, "Wrong size on FFortAIAssignmentIdentifier");
static_assert(offsetof(FFortAIAssignmentIdentifier, AssignmentType) == 0x000000, "Member 'FFortAIAssignmentIdentifier::AssignmentType' has a wrong offset!");
static_assert(offsetof(FFortAIAssignmentIdentifier, AssignmentGameplayTags) == 0x000008, "Member 'FFortAIAssignmentIdentifier::AssignmentGameplayTags' has a wrong offset!");
static_assert(offsetof(FFortAIAssignmentIdentifier, AssignmentTeam) == 0x000028, "Member 'FFortAIAssignmentIdentifier::AssignmentTeam' has a wrong offset!");

struct FBuildingActorNavArea final
{
public:
	int32                                         AreaBits;
};
static_assert(alignof(FBuildingActorNavArea) == 0x000004, "Wrong alignment on FBuildingActorNavArea");
static_assert(sizeof(FBuildingActorNavArea) == 0x000004, "Wrong size on FBuildingActorNavArea");
static_assert(offsetof(FBuildingActorNavArea, AreaBits) == 0x000000, "Member 'FBuildingActorNavArea::AreaBits' has a wrong offset!");

struct FFortAthenaAISmartObjectActivityCondition final
{
public:
	struct FGameplayTagQuery                      SmartObjectActivityConditionTagQuery;
};
static_assert(alignof(FFortAthenaAISmartObjectActivityCondition) == 0x000008, "Wrong alignment on FFortAthenaAISmartObjectActivityCondition");
static_assert(sizeof(FFortAthenaAISmartObjectActivityCondition) == 0x000048, "Wrong size on FFortAthenaAISmartObjectActivityCondition");
static_assert(offsetof(FFortAthenaAISmartObjectActivityCondition, SmartObjectActivityConditionTagQuery) == 0x000000, "Member 'FFortAthenaAISmartObjectActivityCondition::SmartObjectActivityConditionTagQuery' has a wrong offset!");

struct FFortNavLinkPattern final
{
public:
	int32                                         PatternBits;
	int32                                         WildcardBits;
};
static_assert(alignof(FFortNavLinkPattern) == 0x000004, "Wrong alignment on FFortNavLinkPattern");
static_assert(sizeof(FFortNavLinkPattern) == 0x000008, "Wrong size on FFortNavLinkPattern");
static_assert(offsetof(FFortNavLinkPattern, PatternBits) == 0x000000, "Member 'FFortNavLinkPattern::PatternBits' has a wrong offset!");
static_assert(offsetof(FFortNavLinkPattern, WildcardBits) == 0x000004, "Member 'FFortNavLinkPattern::WildcardBits' has a wrong offset!");

struct FAIHotSpotUseInfo final : public FAIHotSpotSlotInfo
{
public:
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FAIHotSpotUseInfo) == 0x000008, "Wrong alignment on FAIHotSpotUseInfo");
static_assert(sizeof(FAIHotSpotUseInfo) == 0x000018, "Wrong size on FAIHotSpotUseInfo");

struct FAILootInfoRowEntry final
{
public:
	struct FGameplayTagQuery                      OptionalTagQuery;
	uint8                                         bShouldDropInventoryOnDeath : 1;
	uint8                                         bShouldDropLootOnDeath : 1;
	uint8                                         bShouldGrantLootOnSpawn : 1;
	uint8                                         Pad_49[0x7];
	TArray<class FName>                           LootTiers;
};
static_assert(alignof(FAILootInfoRowEntry) == 0x000008, "Wrong alignment on FAILootInfoRowEntry");
static_assert(sizeof(FAILootInfoRowEntry) == 0x000060, "Wrong size on FAILootInfoRowEntry");
static_assert(offsetof(FAILootInfoRowEntry, OptionalTagQuery) == 0x000000, "Member 'FAILootInfoRowEntry::OptionalTagQuery' has a wrong offset!");
static_assert(offsetof(FAILootInfoRowEntry, LootTiers) == 0x000050, "Member 'FAILootInfoRowEntry::LootTiers' has a wrong offset!");

struct FFortAthenaAILootInfoDataTableRow final : public FTableRowBase
{
public:
	TArray<struct FAILootInfoRowEntry>            LootDroppingBehaviors;
};
static_assert(alignof(FFortAthenaAILootInfoDataTableRow) == 0x000008, "Wrong alignment on FFortAthenaAILootInfoDataTableRow");
static_assert(sizeof(FFortAthenaAILootInfoDataTableRow) == 0x000018, "Wrong size on FFortAthenaAILootInfoDataTableRow");
static_assert(offsetof(FFortAthenaAILootInfoDataTableRow, LootDroppingBehaviors) == 0x000008, "Member 'FFortAthenaAILootInfoDataTableRow::LootDroppingBehaviors' has a wrong offset!");

struct FDistanceToTargetComparison final
{
public:
	bool                                          bUseOverriddenValue;
	uint8                                         Pad_1[0x3];
	float                                         OverriddenValue;
	struct FGameplayTagContainer                  DistanceDataTags;
	bool                                          bUseAddedOffset;
	uint8                                         Pad_29[0x3];
	float                                         AddedOffset;
	EArithmeticKeyOperation                       Operator;
	ETargetDistanceComparisonType                 ComparisonType;
	uint8                                         Pad_32[0x6];
};
static_assert(alignof(FDistanceToTargetComparison) == 0x000008, "Wrong alignment on FDistanceToTargetComparison");
static_assert(sizeof(FDistanceToTargetComparison) == 0x000038, "Wrong size on FDistanceToTargetComparison");
static_assert(offsetof(FDistanceToTargetComparison, bUseOverriddenValue) == 0x000000, "Member 'FDistanceToTargetComparison::bUseOverriddenValue' has a wrong offset!");
static_assert(offsetof(FDistanceToTargetComparison, OverriddenValue) == 0x000004, "Member 'FDistanceToTargetComparison::OverriddenValue' has a wrong offset!");
static_assert(offsetof(FDistanceToTargetComparison, DistanceDataTags) == 0x000008, "Member 'FDistanceToTargetComparison::DistanceDataTags' has a wrong offset!");
static_assert(offsetof(FDistanceToTargetComparison, bUseAddedOffset) == 0x000028, "Member 'FDistanceToTargetComparison::bUseAddedOffset' has a wrong offset!");
static_assert(offsetof(FDistanceToTargetComparison, AddedOffset) == 0x00002C, "Member 'FDistanceToTargetComparison::AddedOffset' has a wrong offset!");
static_assert(offsetof(FDistanceToTargetComparison, Operator) == 0x000030, "Member 'FDistanceToTargetComparison::Operator' has a wrong offset!");
static_assert(offsetof(FDistanceToTargetComparison, ComparisonType) == 0x000031, "Member 'FDistanceToTargetComparison::ComparisonType' has a wrong offset!");

struct FAIScalableFloat final
{
public:
	struct FScalableFloat                         ScalableFloat;
	EAIScalableFloatScalingType                   ScalingType;
	uint8                                         Pad_2C[0xC];
};
static_assert(alignof(FAIScalableFloat) == 0x000008, "Wrong alignment on FAIScalableFloat");
static_assert(sizeof(FAIScalableFloat) == 0x000038, "Wrong size on FAIScalableFloat");
static_assert(offsetof(FAIScalableFloat, ScalableFloat) == 0x000000, "Member 'FAIScalableFloat::ScalableFloat' has a wrong offset!");
static_assert(offsetof(FAIScalableFloat, ScalingType) == 0x000028, "Member 'FAIScalableFloat::ScalingType' has a wrong offset!");

struct FConstructionBuildingInfo final
{
public:
	TSubclassOf<class ABuildingSMActor>           BuildingActorClass[0x3];
};
static_assert(alignof(FConstructionBuildingInfo) == 0x000008, "Wrong alignment on FConstructionBuildingInfo");
static_assert(sizeof(FConstructionBuildingInfo) == 0x000018, "Wrong size on FConstructionBuildingInfo");
static_assert(offsetof(FConstructionBuildingInfo, BuildingActorClass) == 0x000000, "Member 'FConstructionBuildingInfo::BuildingActorClass' has a wrong offset!");

struct FFortBotInventoryInfo final
{
public:
	class UFortItemDefinition*                    ItemDefinition;
	class UFortWorldItem*                         FortItem;
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FFortBotInventoryInfo) == 0x000008, "Wrong alignment on FFortBotInventoryInfo");
static_assert(sizeof(FFortBotInventoryInfo) == 0x000028, "Wrong size on FFortBotInventoryInfo");
static_assert(offsetof(FFortBotInventoryInfo, ItemDefinition) == 0x000000, "Member 'FFortBotInventoryInfo::ItemDefinition' has a wrong offset!");
static_assert(offsetof(FFortBotInventoryInfo, FortItem) == 0x000008, "Member 'FFortBotInventoryInfo::FortItem' has a wrong offset!");

struct FFortAthenaAIBotNameDataTableRow final : public FTableRowBase
{
public:
	class FString                                 Name;
	class FString                                 UniqueId;
};
static_assert(alignof(FFortAthenaAIBotNameDataTableRow) == 0x000008, "Wrong alignment on FFortAthenaAIBotNameDataTableRow");
static_assert(sizeof(FFortAthenaAIBotNameDataTableRow) == 0x000028, "Wrong size on FFortAthenaAIBotNameDataTableRow");
static_assert(offsetof(FFortAthenaAIBotNameDataTableRow, Name) == 0x000008, "Member 'FFortAthenaAIBotNameDataTableRow::Name' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotNameDataTableRow, UniqueId) == 0x000018, "Member 'FFortAthenaAIBotNameDataTableRow::UniqueId' has a wrong offset!");

struct FAIRuntimeParametersSmartObjectActivityConfig final
{
public:
	struct FGameplayTagQuery                      ActivityRequirements;
	float                                         MaxDetectionRadius;
	float                                         MaxDetectionRadiusSqr;
	float                                         ActivityCooldownOnFinished;
	float                                         ActivityCooldownOnInterrupted;
};
static_assert(alignof(FAIRuntimeParametersSmartObjectActivityConfig) == 0x000008, "Wrong alignment on FAIRuntimeParametersSmartObjectActivityConfig");
static_assert(sizeof(FAIRuntimeParametersSmartObjectActivityConfig) == 0x000058, "Wrong size on FAIRuntimeParametersSmartObjectActivityConfig");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivityConfig, ActivityRequirements) == 0x000000, "Member 'FAIRuntimeParametersSmartObjectActivityConfig::ActivityRequirements' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivityConfig, MaxDetectionRadius) == 0x000048, "Member 'FAIRuntimeParametersSmartObjectActivityConfig::MaxDetectionRadius' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivityConfig, MaxDetectionRadiusSqr) == 0x00004C, "Member 'FAIRuntimeParametersSmartObjectActivityConfig::MaxDetectionRadiusSqr' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivityConfig, ActivityCooldownOnFinished) == 0x000050, "Member 'FAIRuntimeParametersSmartObjectActivityConfig::ActivityCooldownOnFinished' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivityConfig, ActivityCooldownOnInterrupted) == 0x000054, "Member 'FAIRuntimeParametersSmartObjectActivityConfig::ActivityCooldownOnInterrupted' has a wrong offset!");

struct FFortAthenaAIBotNameRegionData final
{
public:
	class FString                                 RegionId;
	TSoftObjectPtr<class UDataTable>              NameDataTable;
};
static_assert(alignof(FFortAthenaAIBotNameRegionData) == 0x000008, "Wrong alignment on FFortAthenaAIBotNameRegionData");
static_assert(sizeof(FFortAthenaAIBotNameRegionData) == 0x000038, "Wrong size on FFortAthenaAIBotNameRegionData");
static_assert(offsetof(FFortAthenaAIBotNameRegionData, RegionId) == 0x000000, "Member 'FFortAthenaAIBotNameRegionData::RegionId' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotNameRegionData, NameDataTable) == 0x000010, "Member 'FFortAthenaAIBotNameRegionData::NameDataTable' has a wrong offset!");

struct FFortInstensityCurveSequenceProgression final
{
public:
	class UFortIntensityCurveSequence*            CurveSequence;
	struct FCurveTableRowHandle                   SelectionWeight;
};
static_assert(alignof(FFortInstensityCurveSequenceProgression) == 0x000008, "Wrong alignment on FFortInstensityCurveSequenceProgression");
static_assert(sizeof(FFortInstensityCurveSequenceProgression) == 0x000018, "Wrong size on FFortInstensityCurveSequenceProgression");
static_assert(offsetof(FFortInstensityCurveSequenceProgression, CurveSequence) == 0x000000, "Member 'FFortInstensityCurveSequenceProgression::CurveSequence' has a wrong offset!");
static_assert(offsetof(FFortInstensityCurveSequenceProgression, SelectionWeight) == 0x000008, "Member 'FFortInstensityCurveSequenceProgression::SelectionWeight' has a wrong offset!");

struct FPickupTagConvertInfo final
{
public:
	struct FGameplayTagContainer                  PickupTags;
	struct FScalableFloat                         ConvertDamage;
};
static_assert(alignof(FPickupTagConvertInfo) == 0x000008, "Wrong alignment on FPickupTagConvertInfo");
static_assert(sizeof(FPickupTagConvertInfo) == 0x000048, "Wrong size on FPickupTagConvertInfo");
static_assert(offsetof(FPickupTagConvertInfo, PickupTags) == 0x000000, "Member 'FPickupTagConvertInfo::PickupTags' has a wrong offset!");
static_assert(offsetof(FPickupTagConvertInfo, ConvertDamage) == 0x000020, "Member 'FPickupTagConvertInfo::ConvertDamage' has a wrong offset!");

struct alignas(0x08) FMetaNavCachedEntry final
{
public:
	uint8                                         Pad_0[0x1E8];
};
static_assert(alignof(FMetaNavCachedEntry) == 0x000008, "Wrong alignment on FMetaNavCachedEntry");
static_assert(sizeof(FMetaNavCachedEntry) == 0x0001E8, "Wrong size on FMetaNavCachedEntry");

struct FThreatGridIndex final
{
public:
	int32                                         X;
	int32                                         Y;
};
static_assert(alignof(FThreatGridIndex) == 0x000004, "Wrong alignment on FThreatGridIndex");
static_assert(sizeof(FThreatGridIndex) == 0x000008, "Wrong size on FThreatGridIndex");
static_assert(offsetof(FThreatGridIndex, X) == 0x000000, "Member 'FThreatGridIndex::X' has a wrong offset!");
static_assert(offsetof(FThreatGridIndex, Y) == 0x000004, "Member 'FThreatGridIndex::Y' has a wrong offset!");

struct alignas(0x04) FTrapPerceptionSettings final
{
public:
	uint8                                         Pad_0[0x14];
};
static_assert(alignof(FTrapPerceptionSettings) == 0x000004, "Wrong alignment on FTrapPerceptionSettings");
static_assert(sizeof(FTrapPerceptionSettings) == 0x000014, "Wrong size on FTrapPerceptionSettings");

struct FThreatLocationInfo final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	struct FVector                                CloudLocation;
	struct FBox                                   ThreatVolume;
	class AFortThreatVisualsManager*              ThreatVisualsManager;
	TWeakObjectPtr<class AThreatCloud>            CloudActor;
	uint8                                         Pad_70[0x1];
	bool                                          bThreatActivated;
	EFortThreatDeactivationType                   DeactivationType;
	uint8                                         Pad_73[0x15];
};
static_assert(alignof(FThreatLocationInfo) == 0x000008, "Wrong alignment on FThreatLocationInfo");
static_assert(sizeof(FThreatLocationInfo) == 0x000088, "Wrong size on FThreatLocationInfo");
static_assert(offsetof(FThreatLocationInfo, CloudLocation) == 0x000010, "Member 'FThreatLocationInfo::CloudLocation' has a wrong offset!");
static_assert(offsetof(FThreatLocationInfo, ThreatVolume) == 0x000028, "Member 'FThreatLocationInfo::ThreatVolume' has a wrong offset!");
static_assert(offsetof(FThreatLocationInfo, ThreatVisualsManager) == 0x000060, "Member 'FThreatLocationInfo::ThreatVisualsManager' has a wrong offset!");
static_assert(offsetof(FThreatLocationInfo, CloudActor) == 0x000068, "Member 'FThreatLocationInfo::CloudActor' has a wrong offset!");
static_assert(offsetof(FThreatLocationInfo, bThreatActivated) == 0x000071, "Member 'FThreatLocationInfo::bThreatActivated' has a wrong offset!");
static_assert(offsetof(FThreatLocationInfo, DeactivationType) == 0x000072, "Member 'FThreatLocationInfo::DeactivationType' has a wrong offset!");

struct FThreatLocationArray final : public FFastArraySerializer
{
public:
	TArray<struct FThreatLocationInfo>            Locations;
};
static_assert(alignof(FThreatLocationArray) == 0x000008, "Wrong alignment on FThreatLocationArray");
static_assert(sizeof(FThreatLocationArray) == 0x000118, "Wrong size on FThreatLocationArray");
static_assert(offsetof(FThreatLocationArray, Locations) == 0x000108, "Member 'FThreatLocationArray::Locations' has a wrong offset!");

struct FFortBotTargetInfo final
{
public:
	class AActor*                                 SourceActor;
	uint8                                         Pad_8[0x8];
	class AActor*                                 SupportingActor;
	uint8                                         Pad_18[0x18];
	class ABuildingActor*                         AlternateTargetingActor;
	uint8                                         Pad_38[0x108];
};
static_assert(alignof(FFortBotTargetInfo) == 0x000008, "Wrong alignment on FFortBotTargetInfo");
static_assert(sizeof(FFortBotTargetInfo) == 0x000140, "Wrong size on FFortBotTargetInfo");
static_assert(offsetof(FFortBotTargetInfo, SourceActor) == 0x000000, "Member 'FFortBotTargetInfo::SourceActor' has a wrong offset!");
static_assert(offsetof(FFortBotTargetInfo, SupportingActor) == 0x000010, "Member 'FFortBotTargetInfo::SupportingActor' has a wrong offset!");
static_assert(offsetof(FFortBotTargetInfo, AlternateTargetingActor) == 0x000030, "Member 'FFortBotTargetInfo::AlternateTargetingActor' has a wrong offset!");

struct FStormWind final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	struct FVector                                Location;
	struct FVector                                Direction;
	float                                         Radius;
	float                                         Magnitude;
	class AFortThreatVisualsManager*              ThreatVisualsManager;
	TArray<class UFortAIEncounterInfo*>           Encounters;
	TStructCycleFixup<struct FFortWindImpulseHandle, 0x0004, 0x04> WindHandle;
	uint8                                         Pad_64[0x4];
};
static_assert(alignof(FStormWind) == 0x000008, "Wrong alignment on FStormWind");
static_assert(sizeof(FStormWind) == 0x000068, "Wrong size on FStormWind");
static_assert(offsetof(FStormWind, Location) == 0x000010, "Member 'FStormWind::Location' has a wrong offset!");
static_assert(offsetof(FStormWind, Direction) == 0x000028, "Member 'FStormWind::Direction' has a wrong offset!");
static_assert(offsetof(FStormWind, Radius) == 0x000040, "Member 'FStormWind::Radius' has a wrong offset!");
static_assert(offsetof(FStormWind, Magnitude) == 0x000044, "Member 'FStormWind::Magnitude' has a wrong offset!");
static_assert(offsetof(FStormWind, ThreatVisualsManager) == 0x000048, "Member 'FStormWind::ThreatVisualsManager' has a wrong offset!");
static_assert(offsetof(FStormWind, Encounters) == 0x000050, "Member 'FStormWind::Encounters' has a wrong offset!");
static_assert(offsetof(FStormWind, WindHandle) == 0x000060, "Member 'FStormWind::WindHandle' has a wrong offset!");

struct FStormWindArray final : public FFastArraySerializer
{
public:
	TArray<struct FStormWind>                     StormWinds;
};
static_assert(alignof(FStormWindArray) == 0x000008, "Wrong alignment on FStormWindArray");
static_assert(sizeof(FStormWindArray) == 0x000118, "Wrong size on FStormWindArray");
static_assert(offsetof(FStormWindArray, StormWinds) == 0x000108, "Member 'FStormWindArray::StormWinds' has a wrong offset!");

struct FInitialGameplayEffectInfo final
{
public:
	TSubclassOf<class UGameplayEffect>            GameplayEffect;
	float                                         Level;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FInitialGameplayEffectInfo) == 0x000008, "Wrong alignment on FInitialGameplayEffectInfo");
static_assert(sizeof(FInitialGameplayEffectInfo) == 0x000010, "Wrong size on FInitialGameplayEffectInfo");
static_assert(offsetof(FInitialGameplayEffectInfo, GameplayEffect) == 0x000000, "Member 'FInitialGameplayEffectInfo::GameplayEffect' has a wrong offset!");
static_assert(offsetof(FInitialGameplayEffectInfo, Level) == 0x000008, "Member 'FInitialGameplayEffectInfo::Level' has a wrong offset!");

struct alignas(0x08) FGoalUpdateSuppressionHandle final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FGoalUpdateSuppressionHandle) == 0x000008, "Wrong alignment on FGoalUpdateSuppressionHandle");
static_assert(sizeof(FGoalUpdateSuppressionHandle) == 0x000008, "Wrong size on FGoalUpdateSuppressionHandle");

struct FFortAIGoal final : public FFortAIGoalInfo
{
public:
	uint8                                         Pad_28[0x10];
};
static_assert(alignof(FFortAIGoal) == 0x000008, "Wrong alignment on FFortAIGoal");
static_assert(sizeof(FFortAIGoal) == 0x000038, "Wrong size on FFortAIGoal");

struct FBotPerceivedSound final
{
public:
	class AActor*                                 SourceActor;
	uint8                                         Pad_8[0x20];
};
static_assert(alignof(FBotPerceivedSound) == 0x000008, "Wrong alignment on FBotPerceivedSound");
static_assert(sizeof(FBotPerceivedSound) == 0x000028, "Wrong size on FBotPerceivedSound");
static_assert(offsetof(FBotPerceivedSound, SourceActor) == 0x000000, "Member 'FBotPerceivedSound::SourceActor' has a wrong offset!");

struct FGoalSelectionCriteria final
{
public:
	TSoftObjectPtr<class UEnvQuery>               GoalSelectionQuery;
};
static_assert(alignof(FGoalSelectionCriteria) == 0x000008, "Wrong alignment on FGoalSelectionCriteria");
static_assert(sizeof(FGoalSelectionCriteria) == 0x000028, "Wrong size on FGoalSelectionCriteria");
static_assert(offsetof(FGoalSelectionCriteria, GoalSelectionQuery) == 0x000000, "Member 'FGoalSelectionCriteria::GoalSelectionQuery' has a wrong offset!");

struct FEncounterGoalSelectionTableEntry final
{
public:
	struct FGameplayTagContainer                  RequiredGameplayTags;
	struct FGoalSelectionCriteria                 GoalSelectionCriteria;
};
static_assert(alignof(FEncounterGoalSelectionTableEntry) == 0x000008, "Wrong alignment on FEncounterGoalSelectionTableEntry");
static_assert(sizeof(FEncounterGoalSelectionTableEntry) == 0x000048, "Wrong size on FEncounterGoalSelectionTableEntry");
static_assert(offsetof(FEncounterGoalSelectionTableEntry, RequiredGameplayTags) == 0x000000, "Member 'FEncounterGoalSelectionTableEntry::RequiredGameplayTags' has a wrong offset!");
static_assert(offsetof(FEncounterGoalSelectionTableEntry, GoalSelectionCriteria) == 0x000020, "Member 'FEncounterGoalSelectionTableEntry::GoalSelectionCriteria' has a wrong offset!");

struct FAthenaAIServiceGroupInfo final
{
public:
	int32                                         GroupId;
	uint8                                         Pad_4[0x4];
	class UFortPawnComponent_AIGroup*             GroupLeader;
	TArray<class UFortPawnComponent_AIGroup*>     GroupMembers;
	struct FGameplayTagContainer                  GroupTags;
};
static_assert(alignof(FAthenaAIServiceGroupInfo) == 0x000008, "Wrong alignment on FAthenaAIServiceGroupInfo");
static_assert(sizeof(FAthenaAIServiceGroupInfo) == 0x000040, "Wrong size on FAthenaAIServiceGroupInfo");
static_assert(offsetof(FAthenaAIServiceGroupInfo, GroupId) == 0x000000, "Member 'FAthenaAIServiceGroupInfo::GroupId' has a wrong offset!");
static_assert(offsetof(FAthenaAIServiceGroupInfo, GroupLeader) == 0x000008, "Member 'FAthenaAIServiceGroupInfo::GroupLeader' has a wrong offset!");
static_assert(offsetof(FAthenaAIServiceGroupInfo, GroupMembers) == 0x000010, "Member 'FAthenaAIServiceGroupInfo::GroupMembers' has a wrong offset!");
static_assert(offsetof(FAthenaAIServiceGroupInfo, GroupTags) == 0x000020, "Member 'FAthenaAIServiceGroupInfo::GroupTags' has a wrong offset!");

struct FPawnGoalSelectionCriteria final
{
public:
	struct FGameplayTagContainer                  IncludeEnemiesWithTags;
	struct FGameplayTagContainer                  ExcludeEnemiesWithTags;
	TArray<struct FGoalSelectionCriteria>         GoalSelectionCriteria;
};
static_assert(alignof(FPawnGoalSelectionCriteria) == 0x000008, "Wrong alignment on FPawnGoalSelectionCriteria");
static_assert(sizeof(FPawnGoalSelectionCriteria) == 0x000050, "Wrong size on FPawnGoalSelectionCriteria");
static_assert(offsetof(FPawnGoalSelectionCriteria, IncludeEnemiesWithTags) == 0x000000, "Member 'FPawnGoalSelectionCriteria::IncludeEnemiesWithTags' has a wrong offset!");
static_assert(offsetof(FPawnGoalSelectionCriteria, ExcludeEnemiesWithTags) == 0x000020, "Member 'FPawnGoalSelectionCriteria::ExcludeEnemiesWithTags' has a wrong offset!");
static_assert(offsetof(FPawnGoalSelectionCriteria, GoalSelectionCriteria) == 0x000040, "Member 'FPawnGoalSelectionCriteria::GoalSelectionCriteria' has a wrong offset!");

struct FPawnGoalSelectionTableEntry final
{
public:
	struct FGameplayTagContainer                  RequiredGameplayTags;
	struct FPawnGoalSelectionCriteria             PawnGoalSelectionCriteria;
};
static_assert(alignof(FPawnGoalSelectionTableEntry) == 0x000008, "Wrong alignment on FPawnGoalSelectionTableEntry");
static_assert(sizeof(FPawnGoalSelectionTableEntry) == 0x000070, "Wrong size on FPawnGoalSelectionTableEntry");
static_assert(offsetof(FPawnGoalSelectionTableEntry, RequiredGameplayTags) == 0x000000, "Member 'FPawnGoalSelectionTableEntry::RequiredGameplayTags' has a wrong offset!");
static_assert(offsetof(FPawnGoalSelectionTableEntry, PawnGoalSelectionCriteria) == 0x000020, "Member 'FPawnGoalSelectionTableEntry::PawnGoalSelectionCriteria' has a wrong offset!");

struct alignas(0x08) FFortAIRuntimePerkInfo
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FFortAIRuntimePerkInfo) == 0x000008, "Wrong alignment on FFortAIRuntimePerkInfo");
static_assert(sizeof(FFortAIRuntimePerkInfo) == 0x000040, "Wrong size on FFortAIRuntimePerkInfo");

struct FFortAIRuntimePerkInfo_Bunker final : public FFortAIRuntimePerkInfo
{
public:
	float                                         OddsToBeUsedAgainstUnknownThreat;
	float                                         OddsToUseRoofBuilding;
	float                                         OddsToBuildForwardRamp;
	float                                         InitialBuildDelay;
	float                                         SamePieceBuildDelay;
	float                                         SamePieceBuildDelayRandomDeviation;
	float                                         DifferentPieceBuildDelay;
	float                                         DifferentPieceBuildDelayRandomDeviation;
	float                                         OddsToSelectRandomMaterial;
	uint8                                         Pad_64[0x4];
};
static_assert(alignof(FFortAIRuntimePerkInfo_Bunker) == 0x000008, "Wrong alignment on FFortAIRuntimePerkInfo_Bunker");
static_assert(sizeof(FFortAIRuntimePerkInfo_Bunker) == 0x000068, "Wrong size on FFortAIRuntimePerkInfo_Bunker");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, OddsToBeUsedAgainstUnknownThreat) == 0x000040, "Member 'FFortAIRuntimePerkInfo_Bunker::OddsToBeUsedAgainstUnknownThreat' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, OddsToUseRoofBuilding) == 0x000044, "Member 'FFortAIRuntimePerkInfo_Bunker::OddsToUseRoofBuilding' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, OddsToBuildForwardRamp) == 0x000048, "Member 'FFortAIRuntimePerkInfo_Bunker::OddsToBuildForwardRamp' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, InitialBuildDelay) == 0x00004C, "Member 'FFortAIRuntimePerkInfo_Bunker::InitialBuildDelay' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, SamePieceBuildDelay) == 0x000050, "Member 'FFortAIRuntimePerkInfo_Bunker::SamePieceBuildDelay' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, SamePieceBuildDelayRandomDeviation) == 0x000054, "Member 'FFortAIRuntimePerkInfo_Bunker::SamePieceBuildDelayRandomDeviation' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, DifferentPieceBuildDelay) == 0x000058, "Member 'FFortAIRuntimePerkInfo_Bunker::DifferentPieceBuildDelay' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, DifferentPieceBuildDelayRandomDeviation) == 0x00005C, "Member 'FFortAIRuntimePerkInfo_Bunker::DifferentPieceBuildDelayRandomDeviation' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_Bunker, OddsToSelectRandomMaterial) == 0x000060, "Member 'FFortAIRuntimePerkInfo_Bunker::OddsToSelectRandomMaterial' has a wrong offset!");

struct FAIHotSpotSlotConfig final
{
public:
	struct FVector                                Offset;
	struct FVector                                Direction;
	EFortHotSpotSlot                              SlotType;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FAIHotSpotSlotConfig) == 0x000008, "Wrong alignment on FAIHotSpotSlotConfig");
static_assert(sizeof(FAIHotSpotSlotConfig) == 0x000038, "Wrong size on FAIHotSpotSlotConfig");
static_assert(offsetof(FAIHotSpotSlotConfig, Offset) == 0x000000, "Member 'FAIHotSpotSlotConfig::Offset' has a wrong offset!");
static_assert(offsetof(FAIHotSpotSlotConfig, Direction) == 0x000018, "Member 'FAIHotSpotSlotConfig::Direction' has a wrong offset!");
static_assert(offsetof(FAIHotSpotSlotConfig, SlotType) == 0x000030, "Member 'FAIHotSpotSlotConfig::SlotType' has a wrong offset!");

struct FBuildingActorHotSpotDirection final
{
public:
	class UAIHotSpotConfig*                       HotSpotConfig;
	struct FVector                                Offset;
	uint8                                         bMirrorX : 1;
	uint8                                         bMirrorY : 1;
	uint8                                         Pad_21[0x3];
	EFortHotSpotDirection                         Direction;
	EHotspotTypeConfigMode                        TypeConfigUsage;
	uint8                                         Pad_26[0x2];
};
static_assert(alignof(FBuildingActorHotSpotDirection) == 0x000008, "Wrong alignment on FBuildingActorHotSpotDirection");
static_assert(sizeof(FBuildingActorHotSpotDirection) == 0x000028, "Wrong size on FBuildingActorHotSpotDirection");
static_assert(offsetof(FBuildingActorHotSpotDirection, HotSpotConfig) == 0x000000, "Member 'FBuildingActorHotSpotDirection::HotSpotConfig' has a wrong offset!");
static_assert(offsetof(FBuildingActorHotSpotDirection, Offset) == 0x000008, "Member 'FBuildingActorHotSpotDirection::Offset' has a wrong offset!");
static_assert(offsetof(FBuildingActorHotSpotDirection, Direction) == 0x000024, "Member 'FBuildingActorHotSpotDirection::Direction' has a wrong offset!");
static_assert(offsetof(FBuildingActorHotSpotDirection, TypeConfigUsage) == 0x000025, "Member 'FBuildingActorHotSpotDirection::TypeConfigUsage' has a wrong offset!");

struct FFortBotTargetHandler final
{
public:
	uint8                                         Pad_0[0x18];
	TArray<struct FFortBotTargetInfo>             Targets;
	uint8                                         Pad_28[0x18];
};
static_assert(alignof(FFortBotTargetHandler) == 0x000008, "Wrong alignment on FFortBotTargetHandler");
static_assert(sizeof(FFortBotTargetHandler) == 0x000040, "Wrong size on FFortBotTargetHandler");
static_assert(offsetof(FFortBotTargetHandler, Targets) == 0x000018, "Member 'FFortBotTargetHandler::Targets' has a wrong offset!");

struct FAutoAcquireSlot final : public FAIHotSpotSlotInfo
{
public:
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FAutoAcquireSlot) == 0x000008, "Wrong alignment on FAutoAcquireSlot");
static_assert(sizeof(FAutoAcquireSlot) == 0x000028, "Wrong size on FAutoAcquireSlot");

struct FNavAgentData final
{
public:
	class FName                                   AgentName;
	uint8                                         Pad_4[0x4];
	struct FCurveTableRowHandle                   BuildingActorHealthToNavAreaStrengthHandle;
	struct FCurveTableRowHandle                   PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle;
};
static_assert(alignof(FNavAgentData) == 0x000008, "Wrong alignment on FNavAgentData");
static_assert(sizeof(FNavAgentData) == 0x000028, "Wrong size on FNavAgentData");
static_assert(offsetof(FNavAgentData, AgentName) == 0x000000, "Member 'FNavAgentData::AgentName' has a wrong offset!");
static_assert(offsetof(FNavAgentData, BuildingActorHealthToNavAreaStrengthHandle) == 0x000008, "Member 'FNavAgentData::BuildingActorHealthToNavAreaStrengthHandle' has a wrong offset!");
static_assert(offsetof(FNavAgentData, PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle) == 0x000018, "Member 'FNavAgentData::PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle' has a wrong offset!");

struct FUpdatedNavMeshTiles final
{
public:
	class AAthenaNavMesh*                         NavMesh;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FUpdatedNavMeshTiles) == 0x000008, "Wrong alignment on FUpdatedNavMeshTiles");
static_assert(sizeof(FUpdatedNavMeshTiles) == 0x000018, "Wrong size on FUpdatedNavMeshTiles");
static_assert(offsetof(FUpdatedNavMeshTiles, NavMesh) == 0x000000, "Member 'FUpdatedNavMeshTiles::NavMesh' has a wrong offset!");

struct FNavMeshDetectedInfo final
{
public:
	class AAthenaNavMesh*                         NavMesh;
	uint8                                         Pad_8[0x28];
};
static_assert(alignof(FNavMeshDetectedInfo) == 0x000008, "Wrong alignment on FNavMeshDetectedInfo");
static_assert(sizeof(FNavMeshDetectedInfo) == 0x000030, "Wrong size on FNavMeshDetectedInfo");
static_assert(offsetof(FNavMeshDetectedInfo, NavMesh) == 0x000000, "Member 'FNavMeshDetectedInfo::NavMesh' has a wrong offset!");

struct FBoxNavInvoker final
{
public:
	class AAthenaNavInvokerBox*                   Invoker;
	uint8                                         Pad_8[0x18];
};
static_assert(alignof(FBoxNavInvoker) == 0x000008, "Wrong alignment on FBoxNavInvoker");
static_assert(sizeof(FBoxNavInvoker) == 0x000020, "Wrong size on FBoxNavInvoker");
static_assert(offsetof(FBoxNavInvoker, Invoker) == 0x000000, "Member 'FBoxNavInvoker::Invoker' has a wrong offset!");

struct FNavDataSetVariantSettings final
{
public:
	TSoftObjectPtr<class UWorld>                  Level;
	uint32                                        OceanFloodLevel;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FNavDataSetVariantSettings) == 0x000008, "Wrong alignment on FNavDataSetVariantSettings");
static_assert(sizeof(FNavDataSetVariantSettings) == 0x000030, "Wrong size on FNavDataSetVariantSettings");
static_assert(offsetof(FNavDataSetVariantSettings, Level) == 0x000000, "Member 'FNavDataSetVariantSettings::Level' has a wrong offset!");
static_assert(offsetof(FNavDataSetVariantSettings, OceanFloodLevel) == 0x000028, "Member 'FNavDataSetVariantSettings::OceanFloodLevel' has a wrong offset!");

struct FOverriddenSupportedAgentsByReleaseVersion final
{
public:
	struct FFortReleaseVersion                    StartVersion;
	struct FFortReleaseVersion                    EndVersion;
	struct FNavAgentSelector                      OverriddenSupportedAgentsMask;
};
static_assert(alignof(FOverriddenSupportedAgentsByReleaseVersion) == 0x000004, "Wrong alignment on FOverriddenSupportedAgentsByReleaseVersion");
static_assert(sizeof(FOverriddenSupportedAgentsByReleaseVersion) == 0x00000C, "Wrong size on FOverriddenSupportedAgentsByReleaseVersion");
static_assert(offsetof(FOverriddenSupportedAgentsByReleaseVersion, StartVersion) == 0x000000, "Member 'FOverriddenSupportedAgentsByReleaseVersion::StartVersion' has a wrong offset!");
static_assert(offsetof(FOverriddenSupportedAgentsByReleaseVersion, EndVersion) == 0x000004, "Member 'FOverriddenSupportedAgentsByReleaseVersion::EndVersion' has a wrong offset!");
static_assert(offsetof(FOverriddenSupportedAgentsByReleaseVersion, OverriddenSupportedAgentsMask) == 0x000008, "Member 'FOverriddenSupportedAgentsByReleaseVersion::OverriddenSupportedAgentsMask' has a wrong offset!");

struct FPathRendererDetails final
{
public:
	TArray<struct FVector>                        PathPoints;
	ENavPathRendererStatus                        PathStatus;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FPathRendererDetails) == 0x000008, "Wrong alignment on FPathRendererDetails");
static_assert(sizeof(FPathRendererDetails) == 0x000018, "Wrong size on FPathRendererDetails");
static_assert(offsetof(FPathRendererDetails, PathPoints) == 0x000000, "Member 'FPathRendererDetails::PathPoints' has a wrong offset!");
static_assert(offsetof(FPathRendererDetails, PathStatus) == 0x000010, "Member 'FPathRendererDetails::PathStatus' has a wrong offset!");

struct FPathRendererInfo final
{
public:
	TScriptInterface<class IFortNavPathRendererInfoInterface> PathRendererInterface;
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FPathRendererInfo) == 0x000008, "Wrong alignment on FPathRendererInfo");
static_assert(sizeof(FPathRendererInfo) == 0x000028, "Wrong size on FPathRendererInfo");
static_assert(offsetof(FPathRendererInfo, PathRendererInterface) == 0x000000, "Member 'FPathRendererInfo::PathRendererInterface' has a wrong offset!");

struct FWeightedAIPerk final
{
public:
	TSubclassOf<class UFortAIPerkBase>            PerkClass;
	struct FScalableFloat                         RandomWeight;
};
static_assert(alignof(FWeightedAIPerk) == 0x000008, "Wrong alignment on FWeightedAIPerk");
static_assert(sizeof(FWeightedAIPerk) == 0x000030, "Wrong size on FWeightedAIPerk");
static_assert(offsetof(FWeightedAIPerk, PerkClass) == 0x000000, "Member 'FWeightedAIPerk::PerkClass' has a wrong offset!");
static_assert(offsetof(FWeightedAIPerk, RandomWeight) == 0x000008, "Member 'FWeightedAIPerk::RandomWeight' has a wrong offset!");

struct FPerkAvailabilityContainer final
{
public:
	TArray<struct FWeightedAIPerk>                AvailablePerks;
	int32                                         DesiredPerkCount;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FPerkAvailabilityContainer) == 0x000008, "Wrong alignment on FPerkAvailabilityContainer");
static_assert(sizeof(FPerkAvailabilityContainer) == 0x000018, "Wrong size on FPerkAvailabilityContainer");
static_assert(offsetof(FPerkAvailabilityContainer, AvailablePerks) == 0x000000, "Member 'FPerkAvailabilityContainer::AvailablePerks' has a wrong offset!");
static_assert(offsetof(FPerkAvailabilityContainer, DesiredPerkCount) == 0x000010, "Member 'FPerkAvailabilityContainer::DesiredPerkCount' has a wrong offset!");

struct FFortMoveConfig final
{
public:
	uint8                                         Pad_0[0x28];
	class AActor*                                 FocusTarget;
	TSubclassOf<class AFortPawn>                  PushPawnClassOnBump;
};
static_assert(alignof(FFortMoveConfig) == 0x000008, "Wrong alignment on FFortMoveConfig");
static_assert(sizeof(FFortMoveConfig) == 0x000038, "Wrong size on FFortMoveConfig");
static_assert(offsetof(FFortMoveConfig, FocusTarget) == 0x000028, "Member 'FFortMoveConfig::FocusTarget' has a wrong offset!");
static_assert(offsetof(FFortMoveConfig, PushPawnClassOnBump) == 0x000030, "Member 'FFortMoveConfig::PushPawnClassOnBump' has a wrong offset!");

struct alignas(0x08) FFortAthenaAIBotBuildingQueue final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FFortAthenaAIBotBuildingQueue) == 0x000008, "Wrong alignment on FFortAthenaAIBotBuildingQueue");
static_assert(sizeof(FFortAthenaAIBotBuildingQueue) == 0x000030, "Wrong size on FFortAthenaAIBotBuildingQueue");

struct FFortPingInfo final
{
public:
	uint8                                         Pad_0[0x8];
	struct FFortWorldMarkerData                   MarkerData;
	uint8                                         Pad_188[0x18];
};
static_assert(alignof(FFortPingInfo) == 0x000008, "Wrong alignment on FFortPingInfo");
static_assert(sizeof(FFortPingInfo) == 0x0001A0, "Wrong size on FFortPingInfo");
static_assert(offsetof(FFortPingInfo, MarkerData) == 0x000008, "Member 'FFortPingInfo::MarkerData' has a wrong offset!");

struct FDigestedTargetBasedAccuracy final
{
public:
	float                                         AimTrackingOffsetErrorMultiplier;
	float                                         AimTrackingHeightOffsetErrorMultiplier;
	float                                         AimTrackingDistanceErrorMultiplier;
	float                                         AimTrackingReactionTimeMultiplier;
	float                                         AimTrackingInterpTimeMultiplier;
	float                                         AimTrackingInAirVelocityThresholdMultiplier;
	float                                         AimTrackinginAirHeightDataThresholdMultiplier;
};
static_assert(alignof(FDigestedTargetBasedAccuracy) == 0x000004, "Wrong alignment on FDigestedTargetBasedAccuracy");
static_assert(sizeof(FDigestedTargetBasedAccuracy) == 0x00001C, "Wrong size on FDigestedTargetBasedAccuracy");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackingOffsetErrorMultiplier) == 0x000000, "Member 'FDigestedTargetBasedAccuracy::AimTrackingOffsetErrorMultiplier' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackingHeightOffsetErrorMultiplier) == 0x000004, "Member 'FDigestedTargetBasedAccuracy::AimTrackingHeightOffsetErrorMultiplier' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackingDistanceErrorMultiplier) == 0x000008, "Member 'FDigestedTargetBasedAccuracy::AimTrackingDistanceErrorMultiplier' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackingReactionTimeMultiplier) == 0x00000C, "Member 'FDigestedTargetBasedAccuracy::AimTrackingReactionTimeMultiplier' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackingInterpTimeMultiplier) == 0x000010, "Member 'FDigestedTargetBasedAccuracy::AimTrackingInterpTimeMultiplier' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackingInAirVelocityThresholdMultiplier) == 0x000014, "Member 'FDigestedTargetBasedAccuracy::AimTrackingInAirVelocityThresholdMultiplier' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracy, AimTrackinginAirHeightDataThresholdMultiplier) == 0x000018, "Member 'FDigestedTargetBasedAccuracy::AimTrackinginAirHeightDataThresholdMultiplier' has a wrong offset!");

struct FDigestedTargetBasedAccuracyCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FDigestedTargetBasedAccuracy           TargetBasedAccuracy;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FDigestedTargetBasedAccuracyCategory) == 0x000008, "Wrong alignment on FDigestedTargetBasedAccuracyCategory");
static_assert(sizeof(FDigestedTargetBasedAccuracyCategory) == 0x000040, "Wrong size on FDigestedTargetBasedAccuracyCategory");
static_assert(offsetof(FDigestedTargetBasedAccuracyCategory, Tags) == 0x000000, "Member 'FDigestedTargetBasedAccuracyCategory::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedTargetBasedAccuracyCategory, TargetBasedAccuracy) == 0x000020, "Member 'FDigestedTargetBasedAccuracyCategory::TargetBasedAccuracy' has a wrong offset!");

struct FDigestedWeaponAccuracyCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FDigestedWeaponAccuracy                WeaponAccuracy;
	TArray<struct FDigestedWeaponAccuracyCategorySpecialization> Specializations;
};
static_assert(alignof(FDigestedWeaponAccuracyCategory) == 0x000008, "Wrong alignment on FDigestedWeaponAccuracyCategory");
static_assert(sizeof(FDigestedWeaponAccuracyCategory) == 0x000350, "Wrong size on FDigestedWeaponAccuracyCategory");
static_assert(offsetof(FDigestedWeaponAccuracyCategory, Tags) == 0x000000, "Member 'FDigestedWeaponAccuracyCategory::Tags' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracyCategory, WeaponAccuracy) == 0x000020, "Member 'FDigestedWeaponAccuracyCategory::WeaponAccuracy' has a wrong offset!");
static_assert(offsetof(FDigestedWeaponAccuracyCategory, Specializations) == 0x000340, "Member 'FDigestedWeaponAccuracyCategory::Specializations' has a wrong offset!");

struct FTrackingOffsetModifierInfo final
{
public:
	struct FScalableFloat                         MinSkill;
	struct FScalableFloat                         MaxSkill;
	struct FTrackingOffsetModifiers               Modifiers;
};
static_assert(alignof(FTrackingOffsetModifierInfo) == 0x000008, "Wrong alignment on FTrackingOffsetModifierInfo");
static_assert(sizeof(FTrackingOffsetModifierInfo) == 0x0001B8, "Wrong size on FTrackingOffsetModifierInfo");
static_assert(offsetof(FTrackingOffsetModifierInfo, MinSkill) == 0x000000, "Member 'FTrackingOffsetModifierInfo::MinSkill' has a wrong offset!");
static_assert(offsetof(FTrackingOffsetModifierInfo, MaxSkill) == 0x000028, "Member 'FTrackingOffsetModifierInfo::MaxSkill' has a wrong offset!");
static_assert(offsetof(FTrackingOffsetModifierInfo, Modifiers) == 0x000050, "Member 'FTrackingOffsetModifierInfo::Modifiers' has a wrong offset!");

struct FDigestedTrackingOffsetModifiers final
{
public:
	float                                         CombatStartDuration;
	float                                         TargetLowHealthThreshold;
	struct FDigestedTrackingOffsetModifierCurves  Curves[0x3];
	struct FDigestedTrackingOffsetModifierCurves  DistanceCurves[0x3];
	struct FDigestedTrackingOffsetModifierCurves  InAirHeightCurve;
};
static_assert(alignof(FDigestedTrackingOffsetModifiers) == 0x000004, "Wrong alignment on FDigestedTrackingOffsetModifiers");
static_assert(sizeof(FDigestedTrackingOffsetModifiers) == 0x000120, "Wrong size on FDigestedTrackingOffsetModifiers");
static_assert(offsetof(FDigestedTrackingOffsetModifiers, CombatStartDuration) == 0x000000, "Member 'FDigestedTrackingOffsetModifiers::CombatStartDuration' has a wrong offset!");
static_assert(offsetof(FDigestedTrackingOffsetModifiers, TargetLowHealthThreshold) == 0x000004, "Member 'FDigestedTrackingOffsetModifiers::TargetLowHealthThreshold' has a wrong offset!");
static_assert(offsetof(FDigestedTrackingOffsetModifiers, Curves) == 0x000008, "Member 'FDigestedTrackingOffsetModifiers::Curves' has a wrong offset!");
static_assert(offsetof(FDigestedTrackingOffsetModifiers, DistanceCurves) == 0x000080, "Member 'FDigestedTrackingOffsetModifiers::DistanceCurves' has a wrong offset!");
static_assert(offsetof(FDigestedTrackingOffsetModifiers, InAirHeightCurve) == 0x0000F8, "Member 'FDigestedTrackingOffsetModifiers::InAirHeightCurve' has a wrong offset!");

struct FFocusSetting final
{
public:
	struct FGameplayTagQuery                      WeaponTagQuery;
	bool                                          bRequireAmmoToMatch;
	uint8                                         Pad_49[0x7];
	struct FScalableFloat                         IgnoreThreatTimeWhenNotAttacking;
	struct FScalableFloat                         IgnoreThreatDeviationWhenNotAttacking;
	struct FScalableFloat                         IgnoreThreatDuration;
	struct FScalableFloat                         IgnoreThreatDurationDeviation;
	struct FScalableFloat                         IgnoreThreatDistanceWhenFleeing;
	struct FScalableFloat                         IgnoreThreatDirectionAngleWhenFleeing;
};
static_assert(alignof(FFocusSetting) == 0x000008, "Wrong alignment on FFocusSetting");
static_assert(sizeof(FFocusSetting) == 0x000140, "Wrong size on FFocusSetting");
static_assert(offsetof(FFocusSetting, WeaponTagQuery) == 0x000000, "Member 'FFocusSetting::WeaponTagQuery' has a wrong offset!");
static_assert(offsetof(FFocusSetting, bRequireAmmoToMatch) == 0x000048, "Member 'FFocusSetting::bRequireAmmoToMatch' has a wrong offset!");
static_assert(offsetof(FFocusSetting, IgnoreThreatTimeWhenNotAttacking) == 0x000050, "Member 'FFocusSetting::IgnoreThreatTimeWhenNotAttacking' has a wrong offset!");
static_assert(offsetof(FFocusSetting, IgnoreThreatDeviationWhenNotAttacking) == 0x000078, "Member 'FFocusSetting::IgnoreThreatDeviationWhenNotAttacking' has a wrong offset!");
static_assert(offsetof(FFocusSetting, IgnoreThreatDuration) == 0x0000A0, "Member 'FFocusSetting::IgnoreThreatDuration' has a wrong offset!");
static_assert(offsetof(FFocusSetting, IgnoreThreatDurationDeviation) == 0x0000C8, "Member 'FFocusSetting::IgnoreThreatDurationDeviation' has a wrong offset!");
static_assert(offsetof(FFocusSetting, IgnoreThreatDistanceWhenFleeing) == 0x0000F0, "Member 'FFocusSetting::IgnoreThreatDistanceWhenFleeing' has a wrong offset!");
static_assert(offsetof(FFocusSetting, IgnoreThreatDirectionAngleWhenFleeing) == 0x000118, "Member 'FFocusSetting::IgnoreThreatDirectionAngleWhenFleeing' has a wrong offset!");

struct FLookAtSetting final
{
public:
	struct FScalableFloat                         LookAtDuration;
	struct FScalableFloat                         LookAtDurationDeviation;
	struct FScalableFloat                         LookAtDelay;
	struct FScalableFloat                         LookAtDelayDeviation;
};
static_assert(alignof(FLookAtSetting) == 0x000008, "Wrong alignment on FLookAtSetting");
static_assert(sizeof(FLookAtSetting) == 0x0000A0, "Wrong size on FLookAtSetting");
static_assert(offsetof(FLookAtSetting, LookAtDuration) == 0x000000, "Member 'FLookAtSetting::LookAtDuration' has a wrong offset!");
static_assert(offsetof(FLookAtSetting, LookAtDurationDeviation) == 0x000028, "Member 'FLookAtSetting::LookAtDurationDeviation' has a wrong offset!");
static_assert(offsetof(FLookAtSetting, LookAtDelay) == 0x000050, "Member 'FLookAtSetting::LookAtDelay' has a wrong offset!");
static_assert(offsetof(FLookAtSetting, LookAtDelayDeviation) == 0x000078, "Member 'FLookAtSetting::LookAtDelayDeviation' has a wrong offset!");

struct FAthenaFortAIBotWeightedBuildingList final
{
public:
	struct FScalableFloat                         Weight;
	TArray<struct FFortAthenaAIBotBuildDescriptor> BuildDescriptors;
};
static_assert(alignof(FAthenaFortAIBotWeightedBuildingList) == 0x000008, "Wrong alignment on FAthenaFortAIBotWeightedBuildingList");
static_assert(sizeof(FAthenaFortAIBotWeightedBuildingList) == 0x000038, "Wrong size on FAthenaFortAIBotWeightedBuildingList");
static_assert(offsetof(FAthenaFortAIBotWeightedBuildingList, Weight) == 0x000000, "Member 'FAthenaFortAIBotWeightedBuildingList::Weight' has a wrong offset!");
static_assert(offsetof(FAthenaFortAIBotWeightedBuildingList, BuildDescriptors) == 0x000028, "Member 'FAthenaFortAIBotWeightedBuildingList::BuildDescriptors' has a wrong offset!");

struct FMMRSpawningBracketNPCDataTableRow final : public FMMRSpawningBracketBaseDataTableRow
{
public:
	float                                         Skill;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FMMRSpawningBracketNPCDataTableRow) == 0x000008, "Wrong alignment on FMMRSpawningBracketNPCDataTableRow");
static_assert(sizeof(FMMRSpawningBracketNPCDataTableRow) == 0x000018, "Wrong size on FMMRSpawningBracketNPCDataTableRow");
static_assert(offsetof(FMMRSpawningBracketNPCDataTableRow, Skill) == 0x000010, "Member 'FMMRSpawningBracketNPCDataTableRow::Skill' has a wrong offset!");

struct FDigestedEvasiveManeuverSkillSettings final
{
public:
	float                                         JumpDelay;
	float                                         JumpRandomDeviationDelay;
	float                                         CrouchDelay;
	float                                         CrouchRandomDeviationDelay;
	float                                         DodgeDelay;
	float                                         DodgeRandomDeviationDelay;
	float                                         CrouchOverlayWeight;
	float                                         JumpOverlayWeight;
	float                                         NoOverlayWeight;
	float                                         DodgeWeight;
	float                                         DodgeJumpWeight;
	float                                         DodgeDistanceMax;
	float                                         DodgeDistanceMin;
	float                                         CrouchTimeMax;
	float                                         CrouchTimeMin;
	uint8                                         Pad_3C[0x4];
	class FString                                 DebugName;
	uint8                                         Pad_50[0x8];
};
static_assert(alignof(FDigestedEvasiveManeuverSkillSettings) == 0x000008, "Wrong alignment on FDigestedEvasiveManeuverSkillSettings");
static_assert(sizeof(FDigestedEvasiveManeuverSkillSettings) == 0x000058, "Wrong size on FDigestedEvasiveManeuverSkillSettings");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, JumpDelay) == 0x000000, "Member 'FDigestedEvasiveManeuverSkillSettings::JumpDelay' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, JumpRandomDeviationDelay) == 0x000004, "Member 'FDigestedEvasiveManeuverSkillSettings::JumpRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, CrouchDelay) == 0x000008, "Member 'FDigestedEvasiveManeuverSkillSettings::CrouchDelay' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, CrouchRandomDeviationDelay) == 0x00000C, "Member 'FDigestedEvasiveManeuverSkillSettings::CrouchRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DodgeDelay) == 0x000010, "Member 'FDigestedEvasiveManeuverSkillSettings::DodgeDelay' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DodgeRandomDeviationDelay) == 0x000014, "Member 'FDigestedEvasiveManeuverSkillSettings::DodgeRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, CrouchOverlayWeight) == 0x000018, "Member 'FDigestedEvasiveManeuverSkillSettings::CrouchOverlayWeight' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, JumpOverlayWeight) == 0x00001C, "Member 'FDigestedEvasiveManeuverSkillSettings::JumpOverlayWeight' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, NoOverlayWeight) == 0x000020, "Member 'FDigestedEvasiveManeuverSkillSettings::NoOverlayWeight' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DodgeWeight) == 0x000024, "Member 'FDigestedEvasiveManeuverSkillSettings::DodgeWeight' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DodgeJumpWeight) == 0x000028, "Member 'FDigestedEvasiveManeuverSkillSettings::DodgeJumpWeight' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DodgeDistanceMax) == 0x00002C, "Member 'FDigestedEvasiveManeuverSkillSettings::DodgeDistanceMax' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DodgeDistanceMin) == 0x000030, "Member 'FDigestedEvasiveManeuverSkillSettings::DodgeDistanceMin' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, CrouchTimeMax) == 0x000034, "Member 'FDigestedEvasiveManeuverSkillSettings::CrouchTimeMax' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, CrouchTimeMin) == 0x000038, "Member 'FDigestedEvasiveManeuverSkillSettings::CrouchTimeMin' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettings, DebugName) == 0x000040, "Member 'FDigestedEvasiveManeuverSkillSettings::DebugName' has a wrong offset!");

struct FDigestedEvasiveManeuverSkillSettingsSpecialization final
{
public:
	float                                         OddsToBeUsed;
	float                                         MaxDuration;
	float                                         MaxDurationRandomDeviation;
	float                                         Cooldown;
	float                                         CooldownRandomDeviation;
	float                                         DistanceMinSquared;
	float                                         DistanceMaxSquared;
	uint8                                         Pad_1C[0x4];
	struct FGameplayTagQuery                      WeaponTagQuery;
	struct FDigestedEvasiveManeuverSkillSettings  EvasiveManeuverSkillSettings;
};
static_assert(alignof(FDigestedEvasiveManeuverSkillSettingsSpecialization) == 0x000008, "Wrong alignment on FDigestedEvasiveManeuverSkillSettingsSpecialization");
static_assert(sizeof(FDigestedEvasiveManeuverSkillSettingsSpecialization) == 0x0000C0, "Wrong size on FDigestedEvasiveManeuverSkillSettingsSpecialization");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, OddsToBeUsed) == 0x000000, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::OddsToBeUsed' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, MaxDuration) == 0x000004, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::MaxDuration' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, MaxDurationRandomDeviation) == 0x000008, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::MaxDurationRandomDeviation' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, Cooldown) == 0x00000C, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::Cooldown' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, CooldownRandomDeviation) == 0x000010, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::CooldownRandomDeviation' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, DistanceMinSquared) == 0x000014, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::DistanceMinSquared' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, DistanceMaxSquared) == 0x000018, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::DistanceMaxSquared' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, WeaponTagQuery) == 0x000020, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::WeaponTagQuery' has a wrong offset!");
static_assert(offsetof(FDigestedEvasiveManeuverSkillSettingsSpecialization, EvasiveManeuverSkillSettings) == 0x000068, "Member 'FDigestedEvasiveManeuverSkillSettingsSpecialization::EvasiveManeuverSkillSettings' has a wrong offset!");

struct FFortBotHealingItems final
{
public:
	struct FScalableFloat                         UseItemResourceThreshold;
	struct FGameplayTagContainer                  ItemTags;
};
static_assert(alignof(FFortBotHealingItems) == 0x000008, "Wrong alignment on FFortBotHealingItems");
static_assert(sizeof(FFortBotHealingItems) == 0x000048, "Wrong size on FFortBotHealingItems");
static_assert(offsetof(FFortBotHealingItems, UseItemResourceThreshold) == 0x000000, "Member 'FFortBotHealingItems::UseItemResourceThreshold' has a wrong offset!");
static_assert(offsetof(FFortBotHealingItems, ItemTags) == 0x000028, "Member 'FFortBotHealingItems::ItemTags' has a wrong offset!");

struct FFortBotHealingItemsList final
{
public:
	TArray<struct FFortBotHealingItems>           HealthItems;
};
static_assert(alignof(FFortBotHealingItemsList) == 0x000008, "Wrong alignment on FFortBotHealingItemsList");
static_assert(sizeof(FFortBotHealingItemsList) == 0x000010, "Wrong size on FFortBotHealingItemsList");
static_assert(offsetof(FFortBotHealingItemsList, HealthItems) == 0x000000, "Member 'FFortBotHealingItemsList::HealthItems' has a wrong offset!");

struct FFortBotHealingItemsSpec final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FFortBotHealingItemsList               HealthItemsList;
};
static_assert(alignof(FFortBotHealingItemsSpec) == 0x000008, "Wrong alignment on FFortBotHealingItemsSpec");
static_assert(sizeof(FFortBotHealingItemsSpec) == 0x000058, "Wrong size on FFortBotHealingItemsSpec");
static_assert(offsetof(FFortBotHealingItemsSpec, TagQuery) == 0x000000, "Member 'FFortBotHealingItemsSpec::TagQuery' has a wrong offset!");
static_assert(offsetof(FFortBotHealingItemsSpec, HealthItemsList) == 0x000048, "Member 'FFortBotHealingItemsSpec::HealthItemsList' has a wrong offset!");

struct FBotEquipWeaponInfo final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FScalableFloat                         DistanceEffectivenessWithThreat;
	struct FScalableFloat                         DistanceEffectivenessNoThreat;
};
static_assert(alignof(FBotEquipWeaponInfo) == 0x000008, "Wrong alignment on FBotEquipWeaponInfo");
static_assert(sizeof(FBotEquipWeaponInfo) == 0x000098, "Wrong size on FBotEquipWeaponInfo");
static_assert(offsetof(FBotEquipWeaponInfo, TagQuery) == 0x000000, "Member 'FBotEquipWeaponInfo::TagQuery' has a wrong offset!");
static_assert(offsetof(FBotEquipWeaponInfo, DistanceEffectivenessWithThreat) == 0x000048, "Member 'FBotEquipWeaponInfo::DistanceEffectivenessWithThreat' has a wrong offset!");
static_assert(offsetof(FBotEquipWeaponInfo, DistanceEffectivenessNoThreat) == 0x000070, "Member 'FBotEquipWeaponInfo::DistanceEffectivenessNoThreat' has a wrong offset!");

struct FWeaponAmmoCheat final
{
public:
	struct FGameplayTag                           WeaponTag;
	uint8                                         Pad_4[0x4];
	struct FScalableFloat                         HasInfiniteAmmo;
	struct FScalableFloat                         CheckLoadedAmmoForInfiniteAmmo;
};
static_assert(alignof(FWeaponAmmoCheat) == 0x000008, "Wrong alignment on FWeaponAmmoCheat");
static_assert(sizeof(FWeaponAmmoCheat) == 0x000058, "Wrong size on FWeaponAmmoCheat");
static_assert(offsetof(FWeaponAmmoCheat, WeaponTag) == 0x000000, "Member 'FWeaponAmmoCheat::WeaponTag' has a wrong offset!");
static_assert(offsetof(FWeaponAmmoCheat, HasInfiniteAmmo) == 0x000008, "Member 'FWeaponAmmoCheat::HasInfiniteAmmo' has a wrong offset!");
static_assert(offsetof(FWeaponAmmoCheat, CheckLoadedAmmoForInfiniteAmmo) == 0x000030, "Member 'FWeaponAmmoCheat::CheckLoadedAmmoForInfiniteAmmo' has a wrong offset!");

struct FDigestedBotKnockbackSettings final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	bool                                          bShouldAllowCharacterToBeLaunched;
	bool                                          bShouldStopActiveMovement;
	uint8                                         Pad_4A[0x2];
	float                                         IgnoreMoveInputDuration;
};
static_assert(alignof(FDigestedBotKnockbackSettings) == 0x000008, "Wrong alignment on FDigestedBotKnockbackSettings");
static_assert(sizeof(FDigestedBotKnockbackSettings) == 0x000050, "Wrong size on FDigestedBotKnockbackSettings");
static_assert(offsetof(FDigestedBotKnockbackSettings, TagQuery) == 0x000000, "Member 'FDigestedBotKnockbackSettings::TagQuery' has a wrong offset!");
static_assert(offsetof(FDigestedBotKnockbackSettings, bShouldAllowCharacterToBeLaunched) == 0x000048, "Member 'FDigestedBotKnockbackSettings::bShouldAllowCharacterToBeLaunched' has a wrong offset!");
static_assert(offsetof(FDigestedBotKnockbackSettings, bShouldStopActiveMovement) == 0x000049, "Member 'FDigestedBotKnockbackSettings::bShouldStopActiveMovement' has a wrong offset!");
static_assert(offsetof(FDigestedBotKnockbackSettings, IgnoreMoveInputDuration) == 0x00004C, "Member 'FDigestedBotKnockbackSettings::IgnoreMoveInputDuration' has a wrong offset!");

struct FAlertLevelInfo final
{
public:
	TArray<class UAISenseConfig*>                 SensesConfig;
};
static_assert(alignof(FAlertLevelInfo) == 0x000008, "Wrong alignment on FAlertLevelInfo");
static_assert(sizeof(FAlertLevelInfo) == 0x000010, "Wrong size on FAlertLevelInfo");
static_assert(offsetof(FAlertLevelInfo, SensesConfig) == 0x000000, "Member 'FAlertLevelInfo::SensesConfig' has a wrong offset!");

struct alignas(0x08) FDigestedPerceptionStateSettings final
{
public:
	float                                         ForgetTime;
	float                                         ForgetTimeDeviation;
	float                                         ForgetDistance;
	float                                         ForgetDistanceDeviation;
	uint8                                         Pad_10[0x28];
};
static_assert(alignof(FDigestedPerceptionStateSettings) == 0x000008, "Wrong alignment on FDigestedPerceptionStateSettings");
static_assert(sizeof(FDigestedPerceptionStateSettings) == 0x000038, "Wrong size on FDigestedPerceptionStateSettings");
static_assert(offsetof(FDigestedPerceptionStateSettings, ForgetTime) == 0x000000, "Member 'FDigestedPerceptionStateSettings::ForgetTime' has a wrong offset!");
static_assert(offsetof(FDigestedPerceptionStateSettings, ForgetTimeDeviation) == 0x000004, "Member 'FDigestedPerceptionStateSettings::ForgetTimeDeviation' has a wrong offset!");
static_assert(offsetof(FDigestedPerceptionStateSettings, ForgetDistance) == 0x000008, "Member 'FDigestedPerceptionStateSettings::ForgetDistance' has a wrong offset!");
static_assert(offsetof(FDigestedPerceptionStateSettings, ForgetDistanceDeviation) == 0x00000C, "Member 'FDigestedPerceptionStateSettings::ForgetDistanceDeviation' has a wrong offset!");

struct FSoundPerceptionDigestedSetting final
{
public:
	float                                         Loudness;
	float                                         IgnoreTime;
	float                                         OverrideReactionDistanceSq;
};
static_assert(alignof(FSoundPerceptionDigestedSetting) == 0x000004, "Wrong alignment on FSoundPerceptionDigestedSetting");
static_assert(sizeof(FSoundPerceptionDigestedSetting) == 0x00000C, "Wrong size on FSoundPerceptionDigestedSetting");
static_assert(offsetof(FSoundPerceptionDigestedSetting, Loudness) == 0x000000, "Member 'FSoundPerceptionDigestedSetting::Loudness' has a wrong offset!");
static_assert(offsetof(FSoundPerceptionDigestedSetting, IgnoreTime) == 0x000004, "Member 'FSoundPerceptionDigestedSetting::IgnoreTime' has a wrong offset!");
static_assert(offsetof(FSoundPerceptionDigestedSetting, OverrideReactionDistanceSq) == 0x000008, "Member 'FSoundPerceptionDigestedSetting::OverrideReactionDistanceSq' has a wrong offset!");

struct FSightReactionSpecialization final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FScalableFloat                         SightMinAdditionTime;
	struct FScalableFloat                         SightMaxAdditionTime;
};
static_assert(alignof(FSightReactionSpecialization) == 0x000008, "Wrong alignment on FSightReactionSpecialization");
static_assert(sizeof(FSightReactionSpecialization) == 0x000070, "Wrong size on FSightReactionSpecialization");
static_assert(offsetof(FSightReactionSpecialization, Tags) == 0x000000, "Member 'FSightReactionSpecialization::Tags' has a wrong offset!");
static_assert(offsetof(FSightReactionSpecialization, SightMinAdditionTime) == 0x000020, "Member 'FSightReactionSpecialization::SightMinAdditionTime' has a wrong offset!");
static_assert(offsetof(FSightReactionSpecialization, SightMaxAdditionTime) == 0x000048, "Member 'FSightReactionSpecialization::SightMaxAdditionTime' has a wrong offset!");

struct FFortAthenaAIBotDigestedTargetHeuristicSettings final
{
public:
	struct FDigestedPerceptionStateSettings       PerceptionStateSettings[0x6];
	float                                         ThreatDamageWeight;
	float                                         ThreatDamageWeightMultiplier;
	struct FScalableFloat                         ThreatTimeSinceLastDamageMultiplier;
	float                                         ThreatLoFWeight;
	float                                         DBNOWeightModifier;
	float                                         GameParticipantWeightModifier;
	uint8                                         Pad_18C[0x4];
};
static_assert(alignof(FFortAthenaAIBotDigestedTargetHeuristicSettings) == 0x000008, "Wrong alignment on FFortAthenaAIBotDigestedTargetHeuristicSettings");
static_assert(sizeof(FFortAthenaAIBotDigestedTargetHeuristicSettings) == 0x000190, "Wrong size on FFortAthenaAIBotDigestedTargetHeuristicSettings");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, PerceptionStateSettings) == 0x000000, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::PerceptionStateSettings' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, ThreatDamageWeight) == 0x000150, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::ThreatDamageWeight' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, ThreatDamageWeightMultiplier) == 0x000154, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::ThreatDamageWeightMultiplier' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, ThreatTimeSinceLastDamageMultiplier) == 0x000158, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::ThreatTimeSinceLastDamageMultiplier' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, ThreatLoFWeight) == 0x000180, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::ThreatLoFWeight' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, DBNOWeightModifier) == 0x000184, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::DBNOWeightModifier' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettings, GameParticipantWeightModifier) == 0x000188, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettings::GameParticipantWeightModifier' has a wrong offset!");

struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization final
{
public:
	struct FGameplayTagQuery                      TargetTagQuery;
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings Settings;
};
static_assert(alignof(FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization) == 0x000008, "Wrong alignment on FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization");
static_assert(sizeof(FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization) == 0x0001D8, "Wrong size on FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization, TargetTagQuery) == 0x000000, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization::TargetTagQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization, Settings) == 0x000048, "Member 'FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization::Settings' has a wrong offset!");

struct FPlaystyleSwitchToAggressiveDataDigested final
{
public:
	struct FGameplayTagQuery                      TagQueryToMatch;
	float                                         TurnToAggressiveMinimumDistanceSquared;
	float                                         TurnToAggressiveTime;
	float                                         DamageThresholdToSwitchToAggressive;
	float                                         SwitchBackToDefensivePreventionTime;
};
static_assert(alignof(FPlaystyleSwitchToAggressiveDataDigested) == 0x000008, "Wrong alignment on FPlaystyleSwitchToAggressiveDataDigested");
static_assert(sizeof(FPlaystyleSwitchToAggressiveDataDigested) == 0x000058, "Wrong size on FPlaystyleSwitchToAggressiveDataDigested");
static_assert(offsetof(FPlaystyleSwitchToAggressiveDataDigested, TagQueryToMatch) == 0x000000, "Member 'FPlaystyleSwitchToAggressiveDataDigested::TagQueryToMatch' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveDataDigested, TurnToAggressiveMinimumDistanceSquared) == 0x000048, "Member 'FPlaystyleSwitchToAggressiveDataDigested::TurnToAggressiveMinimumDistanceSquared' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveDataDigested, TurnToAggressiveTime) == 0x00004C, "Member 'FPlaystyleSwitchToAggressiveDataDigested::TurnToAggressiveTime' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveDataDigested, DamageThresholdToSwitchToAggressive) == 0x000050, "Member 'FPlaystyleSwitchToAggressiveDataDigested::DamageThresholdToSwitchToAggressive' has a wrong offset!");
static_assert(offsetof(FPlaystyleSwitchToAggressiveDataDigested, SwitchBackToDefensivePreventionTime) == 0x000054, "Member 'FPlaystyleSwitchToAggressiveDataDigested::SwitchBackToDefensivePreventionTime' has a wrong offset!");

struct FRangedWeaponSkillCategory final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FRangedWeaponSkill                     WeaponSkill;
	TArray<struct FRangedWeaponSkillCategorySpecialization> Specializations;
};
static_assert(alignof(FRangedWeaponSkillCategory) == 0x000008, "Wrong alignment on FRangedWeaponSkillCategory");
static_assert(sizeof(FRangedWeaponSkillCategory) == 0x000190, "Wrong size on FRangedWeaponSkillCategory");
static_assert(offsetof(FRangedWeaponSkillCategory, Tags) == 0x000000, "Member 'FRangedWeaponSkillCategory::Tags' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkillCategory, WeaponSkill) == 0x000020, "Member 'FRangedWeaponSkillCategory::WeaponSkill' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSkillCategory, Specializations) == 0x000180, "Member 'FRangedWeaponSkillCategory::Specializations' has a wrong offset!");

struct FMovementEvaluatorInfo final
{
public:
	uint8                                         Pad_0[0x8];
	class UFortAthenaAIBotEvaluator_Movement*     MovementEval;
};
static_assert(alignof(FMovementEvaluatorInfo) == 0x000008, "Wrong alignment on FMovementEvaluatorInfo");
static_assert(sizeof(FMovementEvaluatorInfo) == 0x000010, "Wrong size on FMovementEvaluatorInfo");
static_assert(offsetof(FMovementEvaluatorInfo, MovementEval) == 0x000008, "Member 'FMovementEvaluatorInfo::MovementEval' has a wrong offset!");

struct FFortAthenaAIObjectTrackerQuerySimplified
{
public:
	EFortAthenaAIObjectTrackerQueryOrder          PickOrder;
	bool                                          bMustBeUsable;
	uint8                                         Pad_2[0x6];
	struct FGameplayTagQuery                      RequiredTagsQuery;
	struct FVector                                MaximumDistance;
	class AFortPlayspace*                         RequiredToBeInPlayspace;
	uint8                                         Pad_70[0x10];
};
static_assert(alignof(FFortAthenaAIObjectTrackerQuerySimplified) == 0x000008, "Wrong alignment on FFortAthenaAIObjectTrackerQuerySimplified");
static_assert(sizeof(FFortAthenaAIObjectTrackerQuerySimplified) == 0x000080, "Wrong size on FFortAthenaAIObjectTrackerQuerySimplified");
static_assert(offsetof(FFortAthenaAIObjectTrackerQuerySimplified, PickOrder) == 0x000000, "Member 'FFortAthenaAIObjectTrackerQuerySimplified::PickOrder' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIObjectTrackerQuerySimplified, bMustBeUsable) == 0x000001, "Member 'FFortAthenaAIObjectTrackerQuerySimplified::bMustBeUsable' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIObjectTrackerQuerySimplified, RequiredTagsQuery) == 0x000008, "Member 'FFortAthenaAIObjectTrackerQuerySimplified::RequiredTagsQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIObjectTrackerQuerySimplified, MaximumDistance) == 0x000050, "Member 'FFortAthenaAIObjectTrackerQuerySimplified::MaximumDistance' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIObjectTrackerQuerySimplified, RequiredToBeInPlayspace) == 0x000068, "Member 'FFortAthenaAIObjectTrackerQuerySimplified::RequiredToBeInPlayspace' has a wrong offset!");

struct FFortAthenaAIObjectTrackerQuery final : public FFortAthenaAIObjectTrackerQuerySimplified
{
public:
	struct FVector                                StartLocation;
};
static_assert(alignof(FFortAthenaAIObjectTrackerQuery) == 0x000008, "Wrong alignment on FFortAthenaAIObjectTrackerQuery");
static_assert(sizeof(FFortAthenaAIObjectTrackerQuery) == 0x000098, "Wrong size on FFortAthenaAIObjectTrackerQuery");
static_assert(offsetof(FFortAthenaAIObjectTrackerQuery, StartLocation) == 0x000080, "Member 'FFortAthenaAIObjectTrackerQuery::StartLocation' has a wrong offset!");

struct alignas(0x10) FAITrackedObjectsSet final
{
public:
	uint8                                         Pad_0[0x100];
};
static_assert(alignof(FAITrackedObjectsSet) == 0x000010, "Wrong alignment on FAITrackedObjectsSet");
static_assert(sizeof(FAITrackedObjectsSet) == 0x000100, "Wrong size on FAITrackedObjectsSet");

struct FFortSmartObjectSlotDefinitionData final : public FSmartObjectSlotDefinitionData
{
public:
	float                                         CooldownOnFinished;
	float                                         CooldownOnInterrupted;
	float                                         Radius;
	float                                         SlotCooldownOnFinished;
	float                                         SlotCooldownOnInterrupted;
	EFortAthenaSmartObjectPriority                Priority;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FFortSmartObjectSlotDefinitionData) == 0x000008, "Wrong alignment on FFortSmartObjectSlotDefinitionData");
static_assert(sizeof(FFortSmartObjectSlotDefinitionData) == 0x000020, "Wrong size on FFortSmartObjectSlotDefinitionData");
static_assert(offsetof(FFortSmartObjectSlotDefinitionData, CooldownOnFinished) == 0x000008, "Member 'FFortSmartObjectSlotDefinitionData::CooldownOnFinished' has a wrong offset!");
static_assert(offsetof(FFortSmartObjectSlotDefinitionData, CooldownOnInterrupted) == 0x00000C, "Member 'FFortSmartObjectSlotDefinitionData::CooldownOnInterrupted' has a wrong offset!");
static_assert(offsetof(FFortSmartObjectSlotDefinitionData, Radius) == 0x000010, "Member 'FFortSmartObjectSlotDefinitionData::Radius' has a wrong offset!");
static_assert(offsetof(FFortSmartObjectSlotDefinitionData, SlotCooldownOnFinished) == 0x000014, "Member 'FFortSmartObjectSlotDefinitionData::SlotCooldownOnFinished' has a wrong offset!");
static_assert(offsetof(FFortSmartObjectSlotDefinitionData, SlotCooldownOnInterrupted) == 0x000018, "Member 'FFortSmartObjectSlotDefinitionData::SlotCooldownOnInterrupted' has a wrong offset!");
static_assert(offsetof(FFortSmartObjectSlotDefinitionData, Priority) == 0x00001C, "Member 'FFortSmartObjectSlotDefinitionData::Priority' has a wrong offset!");

struct alignas(0x08) FSmartObjectRecentlyUsed final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FSmartObjectRecentlyUsed) == 0x000008, "Wrong alignment on FSmartObjectRecentlyUsed");
static_assert(sizeof(FSmartObjectRecentlyUsed) == 0x000018, "Wrong size on FSmartObjectRecentlyUsed");

struct alignas(0x04) FSmartObjectBanned final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FSmartObjectBanned) == 0x000004, "Wrong alignment on FSmartObjectBanned");
static_assert(sizeof(FSmartObjectBanned) == 0x000008, "Wrong size on FSmartObjectBanned");

struct FAIRuntimeParametersSmartObjectActivityCondition final
{
public:
	struct FGameplayTagQuery                      SmartObjectActivityConditionTagQuery;
};
static_assert(alignof(FAIRuntimeParametersSmartObjectActivityCondition) == 0x000008, "Wrong alignment on FAIRuntimeParametersSmartObjectActivityCondition");
static_assert(sizeof(FAIRuntimeParametersSmartObjectActivityCondition) == 0x000048, "Wrong size on FAIRuntimeParametersSmartObjectActivityCondition");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivityCondition, SmartObjectActivityConditionTagQuery) == 0x000000, "Member 'FAIRuntimeParametersSmartObjectActivityCondition::SmartObjectActivityConditionTagQuery' has a wrong offset!");

struct FAIRuntimeParametersSmartObjectActivity final
{
public:
	struct FAIRuntimeParametersSmartObjectActivityCondition SmartObjectActivityCondition;
	struct FAIRuntimeParametersSmartObjectActivityConfig SmartObjectActivityConfig;
	uint8                                         bEnabled : 1;
	uint8                                         Pad_A1[0x3];
	int32                                         ActivityId;
	float                                         LastUseTimestamp;
	float                                         Cooldown;
};
static_assert(alignof(FAIRuntimeParametersSmartObjectActivity) == 0x000008, "Wrong alignment on FAIRuntimeParametersSmartObjectActivity");
static_assert(sizeof(FAIRuntimeParametersSmartObjectActivity) == 0x0000B0, "Wrong size on FAIRuntimeParametersSmartObjectActivity");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivity, SmartObjectActivityCondition) == 0x000000, "Member 'FAIRuntimeParametersSmartObjectActivity::SmartObjectActivityCondition' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivity, SmartObjectActivityConfig) == 0x000048, "Member 'FAIRuntimeParametersSmartObjectActivity::SmartObjectActivityConfig' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivity, ActivityId) == 0x0000A4, "Member 'FAIRuntimeParametersSmartObjectActivity::ActivityId' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivity, LastUseTimestamp) == 0x0000A8, "Member 'FAIRuntimeParametersSmartObjectActivity::LastUseTimestamp' has a wrong offset!");
static_assert(offsetof(FAIRuntimeParametersSmartObjectActivity, Cooldown) == 0x0000AC, "Member 'FAIRuntimeParametersSmartObjectActivity::Cooldown' has a wrong offset!");

struct FFortAthenaAISmartObjectActivityConfig final
{
public:
	struct FGameplayTagQuery                      ActivityRequirements;
	struct FScalableFloat                         MaxDetectionRadius;
	struct FScalableFloat                         ActivityCooldownOnFinished;
	struct FScalableFloat                         ActivityCooldownOnInterrupted;
};
static_assert(alignof(FFortAthenaAISmartObjectActivityConfig) == 0x000008, "Wrong alignment on FFortAthenaAISmartObjectActivityConfig");
static_assert(sizeof(FFortAthenaAISmartObjectActivityConfig) == 0x0000C0, "Wrong size on FFortAthenaAISmartObjectActivityConfig");
static_assert(offsetof(FFortAthenaAISmartObjectActivityConfig, ActivityRequirements) == 0x000000, "Member 'FFortAthenaAISmartObjectActivityConfig::ActivityRequirements' has a wrong offset!");
static_assert(offsetof(FFortAthenaAISmartObjectActivityConfig, MaxDetectionRadius) == 0x000048, "Member 'FFortAthenaAISmartObjectActivityConfig::MaxDetectionRadius' has a wrong offset!");
static_assert(offsetof(FFortAthenaAISmartObjectActivityConfig, ActivityCooldownOnFinished) == 0x000070, "Member 'FFortAthenaAISmartObjectActivityConfig::ActivityCooldownOnFinished' has a wrong offset!");
static_assert(offsetof(FFortAthenaAISmartObjectActivityConfig, ActivityCooldownOnInterrupted) == 0x000098, "Member 'FFortAthenaAISmartObjectActivityConfig::ActivityCooldownOnInterrupted' has a wrong offset!");

struct FConstructionBuildingList final
{
public:
	struct FConstructionBuildingInfo              BuildingList[0x6];
};
static_assert(alignof(FConstructionBuildingList) == 0x000008, "Wrong alignment on FConstructionBuildingList");
static_assert(sizeof(FConstructionBuildingList) == 0x000090, "Wrong size on FConstructionBuildingList");
static_assert(offsetof(FConstructionBuildingList, BuildingList) == 0x000000, "Member 'FConstructionBuildingList::BuildingList' has a wrong offset!");

struct FFortAthenaAIWeightedCosmeticLoadout final
{
public:
	TStructCycleFixup<struct FFortAthenaLoadout, 0x0178, 0x08> CosmeticLoadout;
	struct FScalableFloat                         Weight;
};
static_assert(alignof(FFortAthenaAIWeightedCosmeticLoadout) == 0x000008, "Wrong alignment on FFortAthenaAIWeightedCosmeticLoadout");
static_assert(sizeof(FFortAthenaAIWeightedCosmeticLoadout) == 0x0001A0, "Wrong size on FFortAthenaAIWeightedCosmeticLoadout");
static_assert(offsetof(FFortAthenaAIWeightedCosmeticLoadout, CosmeticLoadout) == 0x000000, "Member 'FFortAthenaAIWeightedCosmeticLoadout::CosmeticLoadout' has a wrong offset!");
static_assert(offsetof(FFortAthenaAIWeightedCosmeticLoadout, Weight) == 0x000178, "Member 'FFortAthenaAIWeightedCosmeticLoadout::Weight' has a wrong offset!");

struct FTeleportSettings final
{
public:
	struct FScalableFloat                         CheckTeleportConditionsTimeInterval;
	float                                         TeleportRange;
	float                                         TimeNeededOutsideTeleportRange;
	struct FGameplayTag                           TeleportAbilityTag;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FTeleportSettings) == 0x000008, "Wrong alignment on FTeleportSettings");
static_assert(sizeof(FTeleportSettings) == 0x000038, "Wrong size on FTeleportSettings");
static_assert(offsetof(FTeleportSettings, CheckTeleportConditionsTimeInterval) == 0x000000, "Member 'FTeleportSettings::CheckTeleportConditionsTimeInterval' has a wrong offset!");
static_assert(offsetof(FTeleportSettings, TeleportRange) == 0x000028, "Member 'FTeleportSettings::TeleportRange' has a wrong offset!");
static_assert(offsetof(FTeleportSettings, TimeNeededOutsideTeleportRange) == 0x00002C, "Member 'FTeleportSettings::TimeNeededOutsideTeleportRange' has a wrong offset!");
static_assert(offsetof(FTeleportSettings, TeleportAbilityTag) == 0x000030, "Member 'FTeleportSettings::TeleportAbilityTag' has a wrong offset!");

struct FWeightedAIInventoryLoadout final
{
public:
	struct FScalableFloat                         Weight;
	TArray<struct FItemAndCount>                  Items;
};
static_assert(alignof(FWeightedAIInventoryLoadout) == 0x000008, "Wrong alignment on FWeightedAIInventoryLoadout");
static_assert(sizeof(FWeightedAIInventoryLoadout) == 0x000038, "Wrong size on FWeightedAIInventoryLoadout");
static_assert(offsetof(FWeightedAIInventoryLoadout, Weight) == 0x000000, "Member 'FWeightedAIInventoryLoadout::Weight' has a wrong offset!");
static_assert(offsetof(FWeightedAIInventoryLoadout, Items) == 0x000028, "Member 'FWeightedAIInventoryLoadout::Items' has a wrong offset!");

struct FFortBotThreatActorInfo final
{
public:
	class AActor*                                 ThreatActor;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FFortBotThreatActorInfo) == 0x000008, "Wrong alignment on FFortBotThreatActorInfo");
static_assert(sizeof(FFortBotThreatActorInfo) == 0x000018, "Wrong size on FFortBotThreatActorInfo");
static_assert(offsetof(FFortBotThreatActorInfo, ThreatActor) == 0x000000, "Member 'FFortBotThreatActorInfo::ThreatActor' has a wrong offset!");

struct FBotDelayedStimulus final
{
public:
	class AActor*                                 SourceActor;
	uint8                                         Pad_8[0x60];
};
static_assert(alignof(FBotDelayedStimulus) == 0x000008, "Wrong alignment on FBotDelayedStimulus");
static_assert(sizeof(FBotDelayedStimulus) == 0x000068, "Wrong size on FBotDelayedStimulus");
static_assert(offsetof(FBotDelayedStimulus, SourceActor) == 0x000000, "Member 'FBotDelayedStimulus::SourceActor' has a wrong offset!");

struct FPatrolPathLeash final
{
public:
	struct FGameplayTagQuery                      TagQuery;
	float                                         Width;
	float                                         Height;
};
static_assert(alignof(FPatrolPathLeash) == 0x000008, "Wrong alignment on FPatrolPathLeash");
static_assert(sizeof(FPatrolPathLeash) == 0x000050, "Wrong size on FPatrolPathLeash");
static_assert(offsetof(FPatrolPathLeash, TagQuery) == 0x000000, "Member 'FPatrolPathLeash::TagQuery' has a wrong offset!");
static_assert(offsetof(FPatrolPathLeash, Width) == 0x000048, "Member 'FPatrolPathLeash::Width' has a wrong offset!");
static_assert(offsetof(FPatrolPathLeash, Height) == 0x00004C, "Member 'FPatrolPathLeash::Height' has a wrong offset!");

struct alignas(0x04) FTrapDetectionState final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FTrapDetectionState) == 0x000004, "Wrong alignment on FTrapDetectionState");
static_assert(sizeof(FTrapDetectionState) == 0x000008, "Wrong size on FTrapDetectionState");

struct FFortAIRuntimePerkInfo_EvasiveManeuvers final : public FFortAIRuntimePerkInfo
{
public:
	uint8                                         Pad_40[0x58];
	float                                         DistanceMinSquared;
	float                                         DistanceMaxSquared;
};
static_assert(alignof(FFortAIRuntimePerkInfo_EvasiveManeuvers) == 0x000008, "Wrong alignment on FFortAIRuntimePerkInfo_EvasiveManeuvers");
static_assert(sizeof(FFortAIRuntimePerkInfo_EvasiveManeuvers) == 0x0000A0, "Wrong size on FFortAIRuntimePerkInfo_EvasiveManeuvers");
static_assert(offsetof(FFortAIRuntimePerkInfo_EvasiveManeuvers, DistanceMinSquared) == 0x000098, "Member 'FFortAIRuntimePerkInfo_EvasiveManeuvers::DistanceMinSquared' has a wrong offset!");
static_assert(offsetof(FFortAIRuntimePerkInfo_EvasiveManeuvers, DistanceMaxSquared) == 0x00009C, "Member 'FFortAIRuntimePerkInfo_EvasiveManeuvers::DistanceMaxSquared' has a wrong offset!");

struct FBotPOIDebugInfo final
{
public:
	int32                                         ID;
	bool                                          bEnabled;
	uint8                                         Pad_5[0x3];
	struct FBox                                   Box;
	int32                                         Weight;
	EBotPOIType                                   Type;
	uint8                                         Usage;
	uint8                                         Pad_46[0x2];
	int32                                         NavMeshLocationsCount;
	bool                                          bIsMainPOI;
	uint8                                         Pad_4D[0x3];
};
static_assert(alignof(FBotPOIDebugInfo) == 0x000008, "Wrong alignment on FBotPOIDebugInfo");
static_assert(sizeof(FBotPOIDebugInfo) == 0x000050, "Wrong size on FBotPOIDebugInfo");
static_assert(offsetof(FBotPOIDebugInfo, ID) == 0x000000, "Member 'FBotPOIDebugInfo::ID' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, bEnabled) == 0x000004, "Member 'FBotPOIDebugInfo::bEnabled' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, Box) == 0x000008, "Member 'FBotPOIDebugInfo::Box' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, Weight) == 0x000040, "Member 'FBotPOIDebugInfo::Weight' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, Type) == 0x000044, "Member 'FBotPOIDebugInfo::Type' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, Usage) == 0x000045, "Member 'FBotPOIDebugInfo::Usage' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, NavMeshLocationsCount) == 0x000048, "Member 'FBotPOIDebugInfo::NavMeshLocationsCount' has a wrong offset!");
static_assert(offsetof(FBotPOIDebugInfo, bIsMainPOI) == 0x00004C, "Member 'FBotPOIDebugInfo::bIsMainPOI' has a wrong offset!");

struct FAIPopulationCountSnapshot final
{
public:
	int32                                         NumTotalSpawnedBots;
	int32                                         NumAliveBots;
	int32                                         NumAlivePlayerBots;
	int32                                         NumAliveNPCBots;
	int32                                         NumAliveAIPawns;
};
static_assert(alignof(FAIPopulationCountSnapshot) == 0x000004, "Wrong alignment on FAIPopulationCountSnapshot");
static_assert(sizeof(FAIPopulationCountSnapshot) == 0x000014, "Wrong size on FAIPopulationCountSnapshot");
static_assert(offsetof(FAIPopulationCountSnapshot, NumTotalSpawnedBots) == 0x000000, "Member 'FAIPopulationCountSnapshot::NumTotalSpawnedBots' has a wrong offset!");
static_assert(offsetof(FAIPopulationCountSnapshot, NumAliveBots) == 0x000004, "Member 'FAIPopulationCountSnapshot::NumAliveBots' has a wrong offset!");
static_assert(offsetof(FAIPopulationCountSnapshot, NumAlivePlayerBots) == 0x000008, "Member 'FAIPopulationCountSnapshot::NumAlivePlayerBots' has a wrong offset!");
static_assert(offsetof(FAIPopulationCountSnapshot, NumAliveNPCBots) == 0x00000C, "Member 'FAIPopulationCountSnapshot::NumAliveNPCBots' has a wrong offset!");
static_assert(offsetof(FAIPopulationCountSnapshot, NumAliveAIPawns) == 0x000010, "Member 'FAIPopulationCountSnapshot::NumAliveAIPawns' has a wrong offset!");

struct FCachedSupplyDrop final
{
public:
	class AFortAthenaSupplyDrop*                  supplydrop;
	bool                                          bInOctree;
	uint8                                         Pad_9[0x7];
	struct FVector                                LastLocation;
};
static_assert(alignof(FCachedSupplyDrop) == 0x000008, "Wrong alignment on FCachedSupplyDrop");
static_assert(sizeof(FCachedSupplyDrop) == 0x000028, "Wrong size on FCachedSupplyDrop");
static_assert(offsetof(FCachedSupplyDrop, supplydrop) == 0x000000, "Member 'FCachedSupplyDrop::supplydrop' has a wrong offset!");
static_assert(offsetof(FCachedSupplyDrop, bInOctree) == 0x000008, "Member 'FCachedSupplyDrop::bInOctree' has a wrong offset!");
static_assert(offsetof(FCachedSupplyDrop, LastLocation) == 0x000010, "Member 'FCachedSupplyDrop::LastLocation' has a wrong offset!");

struct FClusterLoot final
{
public:
	struct FBox                                   ClusterBox;
	int32                                         Weight;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FClusterLoot) == 0x000008, "Wrong alignment on FClusterLoot");
static_assert(sizeof(FClusterLoot) == 0x000040, "Wrong size on FClusterLoot");
static_assert(offsetof(FClusterLoot, ClusterBox) == 0x000000, "Member 'FClusterLoot::ClusterBox' has a wrong offset!");
static_assert(offsetof(FClusterLoot, Weight) == 0x000038, "Member 'FClusterLoot::Weight' has a wrong offset!");

struct FFortBotClusterLootWeightDataTableRow final : public FTableRowBase
{
public:
	struct FGameplayTag                           tag;
	int32                                         Weight;
};
static_assert(alignof(FFortBotClusterLootWeightDataTableRow) == 0x000008, "Wrong alignment on FFortBotClusterLootWeightDataTableRow");
static_assert(sizeof(FFortBotClusterLootWeightDataTableRow) == 0x000010, "Wrong size on FFortBotClusterLootWeightDataTableRow");
static_assert(offsetof(FFortBotClusterLootWeightDataTableRow, tag) == 0x000008, "Member 'FFortBotClusterLootWeightDataTableRow::tag' has a wrong offset!");
static_assert(offsetof(FFortBotClusterLootWeightDataTableRow, Weight) == 0x00000C, "Member 'FFortBotClusterLootWeightDataTableRow::Weight' has a wrong offset!");

struct FBattleBusPOI final
{
public:
	struct FScalableFloat                         IsEnabled;
	struct FGameplayTagQuery                      POIFilterQuery;
	TArray<class AFortPoiVolume*>                 ValidPOIVolumeList;
	uint8                                         Pad_80[0x10];
};
static_assert(alignof(FBattleBusPOI) == 0x000008, "Wrong alignment on FBattleBusPOI");
static_assert(sizeof(FBattleBusPOI) == 0x000090, "Wrong size on FBattleBusPOI");
static_assert(offsetof(FBattleBusPOI, IsEnabled) == 0x000000, "Member 'FBattleBusPOI::IsEnabled' has a wrong offset!");
static_assert(offsetof(FBattleBusPOI, POIFilterQuery) == 0x000028, "Member 'FBattleBusPOI::POIFilterQuery' has a wrong offset!");
static_assert(offsetof(FBattleBusPOI, ValidPOIVolumeList) == 0x000070, "Member 'FBattleBusPOI::ValidPOIVolumeList' has a wrong offset!");

struct FNavigationPOI final
{
public:
	struct FScalableFloat                         IsEnabled;
	struct FGameplayTagQuery                      POIFilterQuery;
	TArray<class AFortPoiVolume*>                 ValidPOIVolumeList;
};
static_assert(alignof(FNavigationPOI) == 0x000008, "Wrong alignment on FNavigationPOI");
static_assert(sizeof(FNavigationPOI) == 0x000080, "Wrong size on FNavigationPOI");
static_assert(offsetof(FNavigationPOI, IsEnabled) == 0x000000, "Member 'FNavigationPOI::IsEnabled' has a wrong offset!");
static_assert(offsetof(FNavigationPOI, POIFilterQuery) == 0x000028, "Member 'FNavigationPOI::POIFilterQuery' has a wrong offset!");
static_assert(offsetof(FNavigationPOI, ValidPOIVolumeList) == 0x000070, "Member 'FNavigationPOI::ValidPOIVolumeList' has a wrong offset!");

struct FCachedPOIVolumeLocations final
{
public:
	class AFortPoiVolume*                         POIVolume;
	uint8                                         Pad_8[0x18];
};
static_assert(alignof(FCachedPOIVolumeLocations) == 0x000008, "Wrong alignment on FCachedPOIVolumeLocations");
static_assert(sizeof(FCachedPOIVolumeLocations) == 0x000020, "Wrong size on FCachedPOIVolumeLocations");
static_assert(offsetof(FCachedPOIVolumeLocations, POIVolume) == 0x000000, "Member 'FCachedPOIVolumeLocations::POIVolume' has a wrong offset!");

struct FFortServerBotInfo final
{
public:
	class AFortAthenaAIBotController*             BotController;
	class AFortPoiVolume*                         SelectedPoiVolume;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FFortServerBotInfo) == 0x000008, "Wrong alignment on FFortServerBotInfo");
static_assert(sizeof(FFortServerBotInfo) == 0x000018, "Wrong size on FFortServerBotInfo");
static_assert(offsetof(FFortServerBotInfo, BotController) == 0x000000, "Member 'FFortServerBotInfo::BotController' has a wrong offset!");
static_assert(offsetof(FFortServerBotInfo, SelectedPoiVolume) == 0x000008, "Member 'FFortServerBotInfo::SelectedPoiVolume' has a wrong offset!");

struct alignas(0x08) FFortBotBackfillSpawnRequest final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FFortBotBackfillSpawnRequest) == 0x000008, "Wrong alignment on FFortBotBackfillSpawnRequest");
static_assert(sizeof(FFortBotBackfillSpawnRequest) == 0x000018, "Wrong size on FFortBotBackfillSpawnRequest");

struct alignas(0x08) FMMRSpawningInfo final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FMMRSpawningInfo) == 0x000008, "Wrong alignment on FMMRSpawningInfo");
static_assert(sizeof(FMMRSpawningInfo) == 0x000028, "Wrong size on FMMRSpawningInfo");

struct FMMRSpawningPlayerBotsRuntimeInfo final : public FMMRSpawningBaseRuntimeInfo
{
public:
	uint8                                         Pad_10[0x10];
	TArray<struct FMMRSpawningInfo>               SpawningInfos;
	uint8                                         Pad_30[0x8];
};
static_assert(alignof(FMMRSpawningPlayerBotsRuntimeInfo) == 0x000008, "Wrong alignment on FMMRSpawningPlayerBotsRuntimeInfo");
static_assert(sizeof(FMMRSpawningPlayerBotsRuntimeInfo) == 0x000038, "Wrong size on FMMRSpawningPlayerBotsRuntimeInfo");
static_assert(offsetof(FMMRSpawningPlayerBotsRuntimeInfo, SpawningInfos) == 0x000020, "Member 'FMMRSpawningPlayerBotsRuntimeInfo::SpawningInfos' has a wrong offset!");

struct alignas(0x04) FUpdateBotSkillInfo final
{
public:
	uint8                                         Pad_0[0xC];
};
static_assert(alignof(FUpdateBotSkillInfo) == 0x000004, "Wrong alignment on FUpdateBotSkillInfo");
static_assert(sizeof(FUpdateBotSkillInfo) == 0x00000C, "Wrong size on FUpdateBotSkillInfo");

struct FFortBotDisablePOIRequest final
{
public:
	uint8                                         Pad_0[0x8];
	class UAthenaAIServicePlayerBots*             CachedAIServicePlayerBots;
};
static_assert(alignof(FFortBotDisablePOIRequest) == 0x000008, "Wrong alignment on FFortBotDisablePOIRequest");
static_assert(sizeof(FFortBotDisablePOIRequest) == 0x000010, "Wrong size on FFortBotDisablePOIRequest");
static_assert(offsetof(FFortBotDisablePOIRequest, CachedAIServicePlayerBots) == 0x000008, "Member 'FFortBotDisablePOIRequest::CachedAIServicePlayerBots' has a wrong offset!");

struct alignas(0x08) FAthenaAITrackedZone final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FAthenaAITrackedZone) == 0x000008, "Wrong alignment on FAthenaAITrackedZone");
static_assert(sizeof(FAthenaAITrackedZone) == 0x000030, "Wrong size on FAthenaAITrackedZone");

struct FBotPOI final
{
public:
	int32                                         ID;
	bool                                          bEnabled;
	uint8                                         Pad_5[0x3];
	struct FBox                                   Box;
	int32                                         Weight;
	EBotPOIType                                   Type;
	uint8                                         Pad_45[0x3];
	TArray<struct FVector>                        NavMeshLocations;
	bool                                          bIsMainPOI;
	uint8                                         Usage;
	uint8                                         Pad_5A[0x6];
};
static_assert(alignof(FBotPOI) == 0x000008, "Wrong alignment on FBotPOI");
static_assert(sizeof(FBotPOI) == 0x000060, "Wrong size on FBotPOI");
static_assert(offsetof(FBotPOI, ID) == 0x000000, "Member 'FBotPOI::ID' has a wrong offset!");
static_assert(offsetof(FBotPOI, bEnabled) == 0x000004, "Member 'FBotPOI::bEnabled' has a wrong offset!");
static_assert(offsetof(FBotPOI, Box) == 0x000008, "Member 'FBotPOI::Box' has a wrong offset!");
static_assert(offsetof(FBotPOI, Weight) == 0x000040, "Member 'FBotPOI::Weight' has a wrong offset!");
static_assert(offsetof(FBotPOI, Type) == 0x000044, "Member 'FBotPOI::Type' has a wrong offset!");
static_assert(offsetof(FBotPOI, NavMeshLocations) == 0x000048, "Member 'FBotPOI::NavMeshLocations' has a wrong offset!");
static_assert(offsetof(FBotPOI, bIsMainPOI) == 0x000058, "Member 'FBotPOI::bIsMainPOI' has a wrong offset!");
static_assert(offsetof(FBotPOI, Usage) == 0x000059, "Member 'FBotPOI::Usage' has a wrong offset!");

struct FBotPOIExcludedZone final
{
public:
	struct FBox                                   Box;
	uint8                                         UsagesToExclude;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FBotPOIExcludedZone) == 0x000008, "Wrong alignment on FBotPOIExcludedZone");
static_assert(sizeof(FBotPOIExcludedZone) == 0x000040, "Wrong size on FBotPOIExcludedZone");
static_assert(offsetof(FBotPOIExcludedZone, Box) == 0x000000, "Member 'FBotPOIExcludedZone::Box' has a wrong offset!");
static_assert(offsetof(FBotPOIExcludedZone, UsagesToExclude) == 0x000038, "Member 'FBotPOIExcludedZone::UsagesToExclude' has a wrong offset!");

struct FFortBotPOIExcludedZoneDataTableRow final : public FTableRowBase
{
public:
	struct FVector                                Location;
	struct FVector                                BoxHalfSize;
	uint8                                         UsagesToExclude;
	uint8                                         Pad_39[0x7];
	struct FGameplayTagQuery                      PlaylistQuery;
	bool                                          bEnabled;
	uint8                                         Pad_89[0x7];
};
static_assert(alignof(FFortBotPOIExcludedZoneDataTableRow) == 0x000008, "Wrong alignment on FFortBotPOIExcludedZoneDataTableRow");
static_assert(sizeof(FFortBotPOIExcludedZoneDataTableRow) == 0x000090, "Wrong size on FFortBotPOIExcludedZoneDataTableRow");
static_assert(offsetof(FFortBotPOIExcludedZoneDataTableRow, Location) == 0x000008, "Member 'FFortBotPOIExcludedZoneDataTableRow::Location' has a wrong offset!");
static_assert(offsetof(FFortBotPOIExcludedZoneDataTableRow, BoxHalfSize) == 0x000020, "Member 'FFortBotPOIExcludedZoneDataTableRow::BoxHalfSize' has a wrong offset!");
static_assert(offsetof(FFortBotPOIExcludedZoneDataTableRow, UsagesToExclude) == 0x000038, "Member 'FFortBotPOIExcludedZoneDataTableRow::UsagesToExclude' has a wrong offset!");
static_assert(offsetof(FFortBotPOIExcludedZoneDataTableRow, PlaylistQuery) == 0x000040, "Member 'FFortBotPOIExcludedZoneDataTableRow::PlaylistQuery' has a wrong offset!");
static_assert(offsetof(FFortBotPOIExcludedZoneDataTableRow, bEnabled) == 0x000088, "Member 'FFortBotPOIExcludedZoneDataTableRow::bEnabled' has a wrong offset!");

struct FFortWorldConditionAthenaGamePhase final : public FWorldConditionCommonBase
{
public:
	EAthenaGamePhaseStep                          PhaseStep;
	uint8                                         Pad_11[0x3];
	int32                                         SafeZonePhase;
};
static_assert(alignof(FFortWorldConditionAthenaGamePhase) == 0x000008, "Wrong alignment on FFortWorldConditionAthenaGamePhase");
static_assert(sizeof(FFortWorldConditionAthenaGamePhase) == 0x000018, "Wrong size on FFortWorldConditionAthenaGamePhase");
static_assert(offsetof(FFortWorldConditionAthenaGamePhase, PhaseStep) == 0x000010, "Member 'FFortWorldConditionAthenaGamePhase::PhaseStep' has a wrong offset!");
static_assert(offsetof(FFortWorldConditionAthenaGamePhase, SafeZonePhase) == 0x000014, "Member 'FFortWorldConditionAthenaGamePhase::SafeZonePhase' has a wrong offset!");

struct FFortWorldConditionInSafeZone final : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef          ActorRef;
};
static_assert(alignof(FFortWorldConditionInSafeZone) == 0x000008, "Wrong alignment on FFortWorldConditionInSafeZone");
static_assert(sizeof(FFortWorldConditionInSafeZone) == 0x000018, "Wrong size on FFortWorldConditionInSafeZone");
static_assert(offsetof(FFortWorldConditionInSafeZone, ActorRef) == 0x000010, "Member 'FFortWorldConditionInSafeZone::ActorRef' has a wrong offset!");

struct FFortWorldConditionPerceivedHostilePlayer final : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef          ActorRef;
};
static_assert(alignof(FFortWorldConditionPerceivedHostilePlayer) == 0x000008, "Wrong alignment on FFortWorldConditionPerceivedHostilePlayer");
static_assert(sizeof(FFortWorldConditionPerceivedHostilePlayer) == 0x000018, "Wrong size on FFortWorldConditionPerceivedHostilePlayer");
static_assert(offsetof(FFortWorldConditionPerceivedHostilePlayer, ActorRef) == 0x000010, "Member 'FFortWorldConditionPerceivedHostilePlayer::ActorRef' has a wrong offset!");

struct FGameDifficultyInfo final : public FTableRowBase
{
public:
	bool                                          bIsOnboarding;
	uint8                                         Pad_9[0x3];
	float                                         Difficulty;
	float                                         DifficultyMatchmakingMinOverride;
	float                                         DifficultyMatchmakingMaxOverride;
	int32                                         LootLevel;
	ERatingsEnforcementType                       RatingsEnforcement;
	uint8                                         Pad_1D[0x3];
	int32                                         RequiredRating;
	int32                                         MaximumRating;
	int32                                         PvPRating;
	int32                                         RecommendedRating;
	float                                         ScoreBonus;
	uint8                                         Pad_34[0x4];
	class FString                                 LootTierGroup;
	class FString                                 BonusLootTierGroup;
	class FString                                 DifficultyIncreaseLootTierGroup;
	int32                                         NumDifficultyIncreases;
	uint8                                         Pad_6C[0x4];
	class FText                                   ThreatDisplayName;
	class FName                                   ColorParamName;
	int32                                         DefaultPlayerLives;
	class FName                                   PlayerStatClampRowName;
	uint8                                         Pad_94[0x4];
};
static_assert(alignof(FGameDifficultyInfo) == 0x000008, "Wrong alignment on FGameDifficultyInfo");
static_assert(sizeof(FGameDifficultyInfo) == 0x000098, "Wrong size on FGameDifficultyInfo");
static_assert(offsetof(FGameDifficultyInfo, bIsOnboarding) == 0x000008, "Member 'FGameDifficultyInfo::bIsOnboarding' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, Difficulty) == 0x00000C, "Member 'FGameDifficultyInfo::Difficulty' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, DifficultyMatchmakingMinOverride) == 0x000010, "Member 'FGameDifficultyInfo::DifficultyMatchmakingMinOverride' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, DifficultyMatchmakingMaxOverride) == 0x000014, "Member 'FGameDifficultyInfo::DifficultyMatchmakingMaxOverride' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, LootLevel) == 0x000018, "Member 'FGameDifficultyInfo::LootLevel' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, RatingsEnforcement) == 0x00001C, "Member 'FGameDifficultyInfo::RatingsEnforcement' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, RequiredRating) == 0x000020, "Member 'FGameDifficultyInfo::RequiredRating' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, MaximumRating) == 0x000024, "Member 'FGameDifficultyInfo::MaximumRating' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, PvPRating) == 0x000028, "Member 'FGameDifficultyInfo::PvPRating' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, RecommendedRating) == 0x00002C, "Member 'FGameDifficultyInfo::RecommendedRating' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, ScoreBonus) == 0x000030, "Member 'FGameDifficultyInfo::ScoreBonus' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, LootTierGroup) == 0x000038, "Member 'FGameDifficultyInfo::LootTierGroup' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, BonusLootTierGroup) == 0x000048, "Member 'FGameDifficultyInfo::BonusLootTierGroup' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, DifficultyIncreaseLootTierGroup) == 0x000058, "Member 'FGameDifficultyInfo::DifficultyIncreaseLootTierGroup' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, NumDifficultyIncreases) == 0x000068, "Member 'FGameDifficultyInfo::NumDifficultyIncreases' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, ThreatDisplayName) == 0x000070, "Member 'FGameDifficultyInfo::ThreatDisplayName' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, ColorParamName) == 0x000088, "Member 'FGameDifficultyInfo::ColorParamName' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, DefaultPlayerLives) == 0x00008C, "Member 'FGameDifficultyInfo::DefaultPlayerLives' has a wrong offset!");
static_assert(offsetof(FGameDifficultyInfo, PlayerStatClampRowName) == 0x000090, "Member 'FGameDifficultyInfo::PlayerStatClampRowName' has a wrong offset!");

struct FAttributeClamp final
{
public:
	struct FGameplayAttribute                     Attribute;
	EClampType                                    ClampType;
	uint8                                         Pad_39[0x3];
	float                                         ClampValue;
};
static_assert(alignof(FAttributeClamp) == 0x000008, "Wrong alignment on FAttributeClamp");
static_assert(sizeof(FAttributeClamp) == 0x000040, "Wrong size on FAttributeClamp");
static_assert(offsetof(FAttributeClamp, Attribute) == 0x000000, "Member 'FAttributeClamp::Attribute' has a wrong offset!");
static_assert(offsetof(FAttributeClamp, ClampType) == 0x000038, "Member 'FAttributeClamp::ClampType' has a wrong offset!");
static_assert(offsetof(FAttributeClamp, ClampValue) == 0x00003C, "Member 'FAttributeClamp::ClampValue' has a wrong offset!");

struct FPlayerClampInfo final : public FTableRowBase
{
public:
	TArray<struct FAttributeClamp>                AttributeClamps;
};
static_assert(alignof(FPlayerClampInfo) == 0x000008, "Wrong alignment on FPlayerClampInfo");
static_assert(sizeof(FPlayerClampInfo) == 0x000018, "Wrong size on FPlayerClampInfo");
static_assert(offsetof(FPlayerClampInfo, AttributeClamps) == 0x000008, "Member 'FPlayerClampInfo::AttributeClamps' has a wrong offset!");

struct FGameRewardOverridesInfo final : public FTableRowBase
{
public:
	class FString                                 MissionName;
	class FString                                 OverrideRewardsTag;
	int32                                         LootLevel;
	uint8                                         Pad_2C[0x4];
	class FString                                 LootTierGroup;
};
static_assert(alignof(FGameRewardOverridesInfo) == 0x000008, "Wrong alignment on FGameRewardOverridesInfo");
static_assert(sizeof(FGameRewardOverridesInfo) == 0x000040, "Wrong size on FGameRewardOverridesInfo");
static_assert(offsetof(FGameRewardOverridesInfo, MissionName) == 0x000008, "Member 'FGameRewardOverridesInfo::MissionName' has a wrong offset!");
static_assert(offsetof(FGameRewardOverridesInfo, OverrideRewardsTag) == 0x000018, "Member 'FGameRewardOverridesInfo::OverrideRewardsTag' has a wrong offset!");
static_assert(offsetof(FGameRewardOverridesInfo, LootLevel) == 0x000028, "Member 'FGameRewardOverridesInfo::LootLevel' has a wrong offset!");
static_assert(offsetof(FGameRewardOverridesInfo, LootTierGroup) == 0x000030, "Member 'FGameRewardOverridesInfo::LootTierGroup' has a wrong offset!");

}
