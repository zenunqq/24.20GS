#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NiagaraCore_structs.hpp"
#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"
#include "NiagaraShader_structs.hpp"

namespace SDK
{

enum class ENiagaraSimCacheAttributeCaptureMode : uint8
{
	All                                      = 0,
	RenderingOnly                            = 1,
	ExplicitAttributes                       = 2,
	ENiagaraSimCacheAttributeCaptureMode_MAX = 3,
};

enum class ENiagaraCollisionMode : uint8
{
	None                                     = 0,
	SceneGeometry                            = 1,
	DepthBuffer                              = 2,
	DistanceField                            = 3,
	ENiagaraCollisionMode_MAX                = 4,
};

enum class ENiagaraBaseTypes : uint8
{
	Half                                     = 0,
	Float                                    = 1,
	Int32                                    = 2,
	Bool                                     = 3,
	Max                                      = 4,
};

enum class ENiagaraGpuBufferFormat : uint8
{
	Float                                    = 0,
	HalfFloat                                = 1,
	UnsignedNormalizedByte                   = 2,
	Max                                      = 3,
};

enum class ENiagaraGpuSyncMode : uint32
{
	None                                     = 0,
	SyncCpuToGpu                             = 1,
	SyncGpuToCpu                             = 2,
	SyncBoth                                 = 3,
	ENiagaraGpuSyncMode_MAX                  = 4,
};

enum class ENiagaraMipMapGeneration : uint8
{
	Disabled                                 = 0,
	PostStage                                = 1,
	PostSimulate                             = 2,
	ENiagaraMipMapGeneration_MAX             = 3,
};

enum class ENiagaraDefaultMode : uint8
{
	Value                                    = 0,
	Binding                                  = 1,
	Custom                                   = 2,
	FailIfPreviouslyNotSet                   = 3,
	ENiagaraDefaultMode_MAX                  = 4,
};

enum class ENiagaraDefaultRendererMotionVectorSetting : uint32
{
	Precise                                  = 0,
	Approximate                              = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class ENiagaraRendererMotionVectorSetting : uint32
{
	AutoDetect                               = 0,
	Precise                                  = 1,
	Approximate                              = 2,
	Disable                                  = 3,
	ENiagaraRendererMotionVectorSetting_MAX  = 4,
};

enum class ENiagaraSimTarget : uint8
{
	CPUSim                                   = 0,
	GPUComputeSim                            = 1,
	ENiagaraSimTarget_MAX                    = 2,
};

enum class ENiagaraAgeUpdateMode : uint8
{
	TickDeltaTime                            = 0,
	DesiredAge                               = 1,
	DesiredAgeNoSeek                         = 2,
	ENiagaraAgeUpdateMode_MAX                = 3,
};

enum class ENiagaraStatEvaluationType : uint8
{
	Average                                  = 0,
	Maximum                                  = 1,
	ENiagaraStatEvaluationType_MAX           = 2,
};

enum class ENiagaraStatDisplayMode : uint8
{
	Percent                                  = 0,
	Absolute                                 = 1,
	ENiagaraStatDisplayMode_MAX              = 2,
};

enum class ENiagaraDataSetType : uint8
{
	ParticleData                             = 0,
	Shared                                   = 1,
	Event                                    = 2,
	ENiagaraDataSetType_MAX                  = 3,
};

enum class ENiagaraInputNodeUsage : uint8
{
	Undefined                                = 0,
	Parameter                                = 1,
	Attribute                                = 2,
	SystemConstant                           = 3,
	TranslatorConstant                       = 4,
	RapidIterationParameter                  = 5,
	ENiagaraInputNodeUsage_MAX               = 6,
};

enum class ENiagaraScriptCompileStatus : uint8
{
	NCS_Unknown                              = 0,
	NCS_Dirty                                = 1,
	NCS_Error                                = 2,
	NCS_UpToDate                             = 3,
	NCS_BeingCreated                         = 4,
	NCS_UpToDateWithWarnings                 = 5,
	NCS_ComputeUpToDateWithWarnings          = 6,
	NCS_MAX                                  = 7,
};

enum class ENiagaraScriptUsage : uint8
{
	Function                                 = 0,
	Module                                   = 1,
	DynamicInput                             = 2,
	ParticleSpawnScript                      = 3,
	ParticleSpawnScriptInterpolated          = 4,
	ParticleUpdateScript                     = 5,
	ParticleEventScript                      = 6,
	ParticleSimulationStageScript            = 7,
	ParticleGPUComputeScript                 = 8,
	EmitterSpawnScript                       = 9,
	EmitterUpdateScript                      = 10,
	SystemSpawnScript                        = 11,
	SystemUpdateScript                       = 12,
	ENiagaraScriptUsage_MAX                  = 13,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8
{
	Spawn                                    = 0,
	Update                                   = 1,
	Event                                    = 2,
	SimulationStage                          = 3,
	Default                                  = 4,
	ENiagaraCompileUsageStaticSwitch_MAX     = 5,
};

enum class ENiagaraScriptContextStaticSwitch : uint8
{
	System                                   = 0,
	Emitter                                  = 1,
	Particle                                 = 2,
	ENiagaraScriptContextStaticSwitch_MAX    = 3,
};

enum class ENiagaraScriptGroup : uint8
{
	Particle                                 = 0,
	Emitter                                  = 1,
	System                                   = 2,
	Max                                      = 3,
};

enum class ENiagaraIterationSource : uint8
{
	Particles                                = 0,
	DataInterface                            = 1,
	ENiagaraIterationSource_MAX              = 2,
};

enum class ENiagaraBindingSource : uint8
{
	ImplicitFromSource                       = 0,
	ExplicitParticles                        = 1,
	ExplicitEmitter                          = 2,
	ExplicitSystem                           = 3,
	ExplicitUser                             = 4,
	MaxBindingSource                         = 5,
	ENiagaraBindingSource_MAX                = 6,
};

enum class ENiagaraRendererSourceDataMode : uint8
{
	Particles                                = 0,
	Emitter                                  = 1,
	ENiagaraRendererSourceDataMode_MAX       = 2,
};

enum class ENiagaraLegacyTrailWidthMode : uint8
{
	FromCentre                               = 0,
	FromFirst                                = 1,
	FromSecond                               = 2,
	ENiagaraLegacyTrailWidthMode_MAX         = 3,
};

enum class ENiagaraSystemInstanceState : uint8
{
	None                                     = 0,
	PendingSpawn                             = 1,
	PendingSpawnPaused                       = 2,
	Spawning                                 = 3,
	Running                                  = 4,
	Paused                                   = 5,
	Num                                      = 6,
	ENiagaraSystemInstanceState_MAX          = 7,
};

enum class ENiagaraFunctionDebugState : uint8
{
	NoDebug                                  = 0,
	Basic                                    = 1,
	ENiagaraFunctionDebugState_MAX           = 2,
};

enum class ENiagaraGpuComputeTickStage : uint8
{
	PreInitViews                             = 0,
	PostInitViews                            = 1,
	PostOpaqueRender                         = 2,
	Max                                      = 3,
	First                                    = 0,
	Last                                     = 2,
};

enum class ENCPoolMethod : uint8
{
	None                                     = 0,
	AutoRelease                              = 1,
	ManualRelease                            = 2,
	ManualRelease_OnComplete                 = 3,
	FreeInPool                               = 4,
	ENCPoolMethod_MAX                        = 5,
};

enum class ENiagaraDataChannelAllocationMode : uint8
{
	Static                                   = 0,
	ENiagaraDataChannelAllocationMode_MAX    = 1,
};

enum class ENiagaraSortMode : uint8
{
	None                                     = 0,
	ViewDepth                                = 1,
	ViewDistance                             = 2,
	CustomAscending                          = 3,
	CustomDecending                          = 4,
	ENiagaraSortMode_MAX                     = 5,
};

enum class ENiagaraTickBehavior : uint8
{
	UsePrereqs                               = 0,
	UseComponentTickGroup                    = 1,
	ForceTickFirst                           = 2,
	ForceTickLast                            = 3,
	ENiagaraTickBehavior_MAX                 = 4,
};

enum class ENDIActorComponentSourceMode : uint8
{
	Default                                  = 0,
	AttachParent                             = 1,
	LocalPlayer                              = 2,
	ENDIActorComponentSourceMode_MAX         = 3,
};

enum class ENDIStaticMesh_SourceMode : uint8
{
	Default                                  = 0,
	Source                                   = 1,
	AttachParent                             = 2,
	DefaultMeshOnly                          = 3,
	ENDIStaticMesh_MAX                       = 4,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : uint32
{
	Activate                                 = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32
{
	ActivateIfInactive                       = 0,
	None                                     = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : uint32
{
	SetSystemInactive                        = 0,
	Deactivate                               = 1,
	None                                     = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraCompilationState : uint8
{
	CheckDDC                                 = 0,
	Precompile                               = 1,
	StartCompileJob                          = 2,
	AwaitResult                              = 3,
	OptimizeByteCode                         = 4,
	ProcessResult                            = 5,
	PutToDDC                                 = 6,
	Finished                                 = 7,
	Aborted                                  = 8,
	ENiagaraCompilationState_MAX             = 9,
};

enum class ENiagaraBakerViewMode : uint32
{
	Perspective                              = 0,
	OrthoFront                               = 1,
	OrthoBack                                = 2,
	OrthoLeft                                = 3,
	OrthoRight                               = 4,
	OrthoTop                                 = 5,
	OrthoBottom                              = 6,
	Num                                      = 7,
	ENiagaraBakerViewMode_MAX                = 8,
};

enum class ENiagaraDataInterfaceEmitterBindingMode : uint32
{
	Self                                     = 0,
	Other                                    = 1,
	ENiagaraDataInterfaceEmitterBindingMode_MAX = 2,
};

enum class ENDIExport_GPUAllocationMode : uint8
{
	FixedSize                                = 0,
	PerParticle                              = 1,
	ENDIExport_MAX                           = 2,
};

enum class ENDILandscape_SourceMode : uint8
{
	Default                                  = 0,
	Source                                   = 1,
	AttachParent                             = 2,
	ENDILandscape_MAX                        = 3,
};

enum class ESetResolutionMethod : uint32
{
	Independent                              = 0,
	MaxAxis                                  = 1,
	CellSize                                 = 2,
	ESetResolutionMethod_MAX                 = 3,
};

enum class ENDISkeletalMesh_SourceMode : uint8
{
	Default                                  = 0,
	Source                                   = 1,
	AttachParent                             = 2,
	ENDISkeletalMesh_MAX                     = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8
{
	Invalid                                  = 255,
	None                                     = 0,
	SkinOnTheFly                             = 1,
	PreSkin                                  = 2,

};

enum class ENiagaraDebugPlaybackMode : uint8
{
	Play                                     = 0,
	Loop                                     = 1,
	Paused                                   = 2,
	Step                                     = 3,
	ENiagaraDebugPlaybackMode_MAX            = 4,
};

enum class ENiagaraDebugHudHAlign : uint8
{
	Left                                     = 0,
	Center                                   = 1,
	Right                                    = 2,
	ENiagaraDebugHudHAlign_MAX               = 3,
};

enum class ENiagaraDebugHudVAlign : uint8
{
	Top                                      = 0,
	Center                                   = 1,
	Bottom                                   = 2,
	ENiagaraDebugHudVAlign_MAX               = 3,
};

enum class ENiagaraDebugHudFont : uint32
{
	Small                                    = 0,
	Normal                                   = 1,
	ENiagaraDebugHudFont_MAX                 = 2,
};

enum class ENiagaraDebugHudVerbosity : uint32
{
	None                                     = 0,
	Basic                                    = 1,
	Verbose                                  = 2,
	ENiagaraDebugHudVerbosity_MAX            = 3,
};

enum class ENiagaraDebugHUDOverviewMode : uint32
{
	Overview                                 = 0,
	Scalability                              = 1,
	Performance                              = 2,
	GpuComputePerformance                    = 3,
	ENiagaraDebugHUDOverviewMode_MAX         = 4,
};

enum class ENiagaraDebugHUDPerfGraphMode : uint32
{
	None                                     = 0,
	GameThread                               = 1,
	RenderThread                             = 2,
	GPU                                      = 3,
	ENiagaraDebugHUDPerfGraphMode_MAX        = 4,
};

enum class ENiagaraDebugHUDPerfSampleMode : uint32
{
	FrameTotal                               = 0,
	PerInstanceAverage                       = 1,
	ENiagaraDebugHUDPerfSampleMode_MAX       = 2,
};

enum class ENiagaraCullReaction : uint32
{
	Deactivate                               = 0,
	DeactivateImmediate                      = 1,
	DeactivateResume                         = 2,
	DeactivateImmediateResume                = 3,
	PauseResume                              = 4,
	ENiagaraCullReaction_MAX                 = 5,
};

enum class ENiagaraScalabilityUpdateFrequency : uint32
{
	SpawnOnly                                = 0,
	Low                                      = 1,
	Medium                                   = 2,
	High                                     = 3,
	Continuous                               = 4,
	ENiagaraScalabilityUpdateFrequency_MAX   = 5,
};

enum class ENiagaraCullProxyMode : uint32
{
	None                                     = 0,
	Instanced_Rendered                       = 1,
	ENiagaraCullProxyMode_MAX                = 2,
};

enum class EScriptExecutionMode : uint8
{
	EveryParticle                            = 0,
	SpawnedParticles                         = 1,
	SingleParticle                           = 2,
	EScriptExecutionMode_MAX                 = 3,
};

enum class EParticleAllocationMode : uint8
{
	AutomaticEstimate                        = 0,
	ManualEstimate                           = 1,
	FixedCount                               = 2,
	EParticleAllocationMode_MAX              = 3,
};

enum class ENiagaraEmitterCalculateBoundMode : uint8
{
	Dynamic                                  = 0,
	Fixed                                    = 1,
	Programmable                             = 2,
	ENiagaraEmitterCalculateBoundMode_MAX    = 3,
};

enum class ENiagaraMeshFacingMode : uint8
{
	Default                                  = 0,
	Velocity                                 = 1,
	CameraPosition                           = 2,
	CameraPlane                              = 3,
	ENiagaraMeshFacingMode_MAX               = 4,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8
{
	Mesh                                     = 0,
	Simulation                               = 1,
	World                                    = 2,
	Local                                    = 3,
	ENiagaraMeshPivotOffsetSpace_MAX         = 4,
};

enum class ENiagaraMeshLockedAxisSpace : uint8
{
	Simulation                               = 0,
	World                                    = 1,
	Local                                    = 2,
	ENiagaraMeshLockedAxisSpace_MAX          = 3,
};

enum class ENiagaraPlatformSelectionState : uint8
{
	Default                                  = 0,
	Enabled                                  = 1,
	Disabled                                 = 2,
	ENiagaraPlatformSelectionState_MAX       = 3,
};

enum class ENiagaraPlatformSetState : uint8
{
	Disabled                                 = 0,
	Enabled                                  = 1,
	Active                                   = 2,
	Unknown                                  = 3,
	ENiagaraPlatformSetState_MAX             = 4,
};

enum class ENiagaraCVarConditionResponse : uint8
{
	None                                     = 0,
	Enable                                   = 1,
	Disable                                  = 2,
	ENiagaraCVarConditionResponse_MAX        = 3,
};

enum class ENiagaraDeviceProfileRedirectMode : uint8
{
	CVar                                     = 0,
	DeviceProfile                            = 1,
	ENiagaraDeviceProfileRedirectMode_MAX    = 2,
};

enum class ENiagaraPreviewGridResetMode : uint8
{
	Never                                    = 0,
	Individual                               = 1,
	All                                      = 2,
	ENiagaraPreviewGridResetMode_MAX         = 3,
};

enum class ENiagaraRendererSortPrecision : uint8
{
	Default                                  = 0,
	Low                                      = 1,
	High                                     = 2,
	ENiagaraRendererSortPrecision_MAX        = 3,
};

enum class ENiagaraRendererGpuTranslucentLatency : uint8
{
	ProjectDefault                           = 0,
	Immediate                                = 1,
	Latent                                   = 2,
	ENiagaraRendererGpuTranslucentLatency_MAX = 3,
};

enum class ENiagaraRibbonFacingMode : uint8
{
	Screen                                   = 0,
	Custom                                   = 1,
	CustomSideVector                         = 2,
	ENiagaraRibbonFacingMode_MAX             = 3,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8
{
	Scale                                    = 0,
	Clip                                     = 1,
	ENiagaraRibbonAgeOffsetMode_MAX          = 2,
};

enum class ENiagaraRibbonDrawDirection : uint8
{
	FrontToBack                              = 0,
	BackToFront                              = 1,
	ENiagaraRibbonDrawDirection_MAX          = 2,
};

enum class ENiagaraRibbonShapeMode : uint8
{
	Plane                                    = 0,
	MultiPlane                               = 1,
	Tube                                     = 2,
	Custom                                   = 3,
	ENiagaraRibbonShapeMode_MAX              = 4,
};

enum class ENiagaraRibbonTessellationMode : uint8
{
	Automatic                                = 0,
	Custom                                   = 1,
	Disabled                                 = 2,
	ENiagaraRibbonTessellationMode_MAX       = 3,
};

enum class ENiagaraRibbonUVEdgeMode : uint32
{
	SmoothTransition                         = 0,
	Locked                                   = 1,
	ENiagaraRibbonUVEdgeMode_MAX             = 2,
};

enum class ENiagaraRibbonUVDistributionMode : uint32
{
	ScaledUniformly                          = 0,
	ScaledUsingRibbonSegmentLength           = 1,
	TiledOverRibbonLength                    = 2,
	TiledFromStartOverRibbonLength           = 3,
	ENiagaraRibbonUVDistributionMode_MAX     = 4,
};

enum class EUnusedAttributeBehaviour : uint8
{
	Copy                                     = 0,
	Zero                                     = 1,
	None                                     = 2,
	MarkInvalid                              = 3,
	PassThrough                              = 4,
	EUnusedAttributeBehaviour_MAX            = 5,
};

enum class ENiagaraModuleDependencyType : uint8
{
	PreDependency                            = 0,
	PostDependency                           = 1,
	ENiagaraModuleDependencyType_MAX         = 2,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
	SameScript                               = 0,
	AllScripts                               = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraScriptLibraryVisibility : uint8
{
	Invalid                                  = 0,
	Unexposed                                = 1,
	Library                                  = 2,
	Hidden                                   = 3,
	ENiagaraScriptLibraryVisibility_MAX      = 4,
};

enum class ENiagaraScriptTemplateSpecification : uint8
{
	None                                     = 0,
	Template                                 = 1,
	Behavior                                 = 2,
	ENiagaraScriptTemplateSpecification_MAX  = 3,
};

enum class ENiagaraModuleDependencyUsage : uint8
{
	None                                     = 0,
	Spawn                                    = 1,
	Update                                   = 2,
	Event                                    = 3,
	SimulationStage                          = 4,
	ENiagaraModuleDependencyUsage_MAX        = 5,
};

enum class ENDISkelMesh_GpuMaxInfluences : uint8
{
	AllowMax4                                = 0,
	AllowMax8                                = 1,
	Unlimited                                = 2,
	ENDISkelMesh_MAX                         = 3,
};

enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8
{
	Full                                     = 0,
	Limited_24_8                             = 1,
	Limited_23_9                             = 2,
	ENDISkelMesh_MAX                         = 3,
};

enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8
{
	Full                                     = 0,
	Half                                     = 1,
	ENDISkelMesh_MAX                         = 2,
};

enum class ENiagaraDefaultRendererPixelCoverageMode : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	ENiagaraDefaultRendererPixelCoverageMode_MAX = 2,
};

enum class ENiagaraDefaultSortPrecision : uint8
{
	Low                                      = 0,
	High                                     = 1,
	ENiagaraDefaultSortPrecision_MAX         = 2,
};

enum class ENiagaraDefaultGpuTranslucentLatency : uint8
{
	Immediate                                = 0,
	Latent                                   = 1,
	ENiagaraDefaultGpuTranslucentLatency_MAX = 2,
};

enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8
{
	Default                                  = 0,
	HWRT                                     = 1,
	GSDF                                     = 2,
	None                                     = 3,
	ENDICollisionQuery_MAX                   = 4,
};

enum class ENiagaraSpriteAlignment : uint8
{
	Unaligned                                = 0,
	VelocityAligned                          = 1,
	CustomAlignment                          = 2,
	ENiagaraSpriteAlignment_MAX              = 3,
};

enum class ENiagaraSpriteFacingMode : uint8
{
	FaceCamera                               = 0,
	FaceCameraPlane                          = 1,
	CustomFacingVector                       = 2,
	FaceCameraPosition                       = 3,
	FaceCameraDistanceBlend                  = 4,
	ENiagaraSpriteFacingMode_MAX             = 5,
};

enum class ENiagaraRendererPixelCoverageMode : uint8
{
	Automatic                                = 0,
	Disabled                                 = 1,
	Enabled                                  = 2,
	Enabled_RGBA                             = 3,
	Enabled_RGB                              = 4,
	Enabled_A                                = 5,
	ENiagaraRendererPixelCoverageMode_MAX    = 6,
};

enum class ENiagaraStructConversionType : uint8
{
	CopyOnly                                 = 0,
	DoubleToFloat                            = 1,
	Vector2                                  = 2,
	Vector3                                  = 3,
	Vector4                                  = 4,
	Quat                                     = 5,
	ENiagaraStructConversionType_MAX         = 6,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	None                                     = 0,
	Largest                                  = 1,
	Smallest                                 = 2,
	Scalar                                   = 3,
	Custom                                   = 4,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 5,
};

enum class ENiagaraExecutionStateSource : uint8
{
	Scalability                              = 0,
	Internal                                 = 1,
	Owner                                    = 2,
	InternalCompletion                       = 3,
	ENiagaraExecutionStateSource_MAX         = 4,
};

enum class ENiagaraExecutionState : uint32
{
	Active                                   = 0,
	Inactive                                 = 1,
	InactiveClear                            = 2,
	Complete                                 = 3,
	Disabled                                 = 4,
	Num                                      = 5,
	ENiagaraExecutionState_MAX               = 6,
};

enum class ENiagaraCoordinateSpace : uint8
{
	Simulation                               = 0,
	World                                    = 1,
	Local                                    = 2,
	ENiagaraCoordinateSpace_MAX              = 3,
};

enum class ENiagaraPythonUpdateScriptReference : uint8
{
	None                                     = 0,
	ScriptAsset                              = 1,
	DirectTextEntry                          = 2,
	ENiagaraPythonUpdateScriptReference_MAX  = 3,
};

enum class ENiagaraOrientationAxis : uint8
{
	XAxis                                    = 0,
	YAxis                                    = 1,
	ZAxis                                    = 2,
	ENiagaraOrientationAxis_MAX              = 3,
};

enum class ENiagaraBoolDisplayMode : uint8
{
	DisplayAlways                            = 0,
	DisplayIfTrue                            = 1,
	DisplayIfFalse                           = 2,
	ENiagaraBoolDisplayMode_MAX              = 3,
};

enum class ENiagaraValidationSeverity : uint8
{
	Info                                     = 0,
	Warning                                  = 1,
	Error                                    = 2,
	ENiagaraValidationSeverity_MAX           = 3,
};

enum class ENiagaraVariantMode : uint32
{
	None                                     = 0,
	Object                                   = 1,
	DataInterface                            = 2,
	Bytes                                    = 3,
	ENiagaraVariantMode_MAX                  = 4,
};

enum class EVolumeCacheType : uint8
{
	OpenVDB                                  = 0,
	EVolumeCacheType_MAX                     = 1,
};

struct FNiagaraTypeDefinitionHandle final
{
public:
	int32                                         RegisteredTypeIndex;
};
static_assert(alignof(FNiagaraTypeDefinitionHandle) == 0x000004, "Wrong alignment on FNiagaraTypeDefinitionHandle");
static_assert(sizeof(FNiagaraTypeDefinitionHandle) == 0x000004, "Wrong size on FNiagaraTypeDefinitionHandle");
static_assert(offsetof(FNiagaraTypeDefinitionHandle, RegisteredTypeIndex) == 0x000000, "Member 'FNiagaraTypeDefinitionHandle::RegisteredTypeIndex' has a wrong offset!");

struct FNiagaraVariableBase
{
public:
	class FName                                   Name;
	struct FNiagaraTypeDefinitionHandle           TypeDefHandle;
};
static_assert(alignof(FNiagaraVariableBase) == 0x000004, "Wrong alignment on FNiagaraVariableBase");
static_assert(sizeof(FNiagaraVariableBase) == 0x000008, "Wrong size on FNiagaraVariableBase");
static_assert(offsetof(FNiagaraVariableBase, Name) == 0x000000, "Member 'FNiagaraVariableBase::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 0x000004, "Member 'FNiagaraVariableBase::TypeDefHandle' has a wrong offset!");

struct FNiagaraVariable final : public FNiagaraVariableBase
{
public:
	TArray<uint8>                                 VarData;
};
static_assert(alignof(FNiagaraVariable) == 0x000008, "Wrong alignment on FNiagaraVariable");
static_assert(sizeof(FNiagaraVariable) == 0x000018, "Wrong size on FNiagaraVariable");
static_assert(offsetof(FNiagaraVariable, VarData) == 0x000008, "Member 'FNiagaraVariable::VarData' has a wrong offset!");

struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FNiagaraVariable                       Parameter;
};
static_assert(alignof(FMovieSceneNiagaraParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraParameterSectionTemplate");
static_assert(sizeof(FMovieSceneNiagaraParameterSectionTemplate) == 0x000038, "Wrong size on FMovieSceneNiagaraParameterSectionTemplate");
static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 0x000020, "Member 'FMovieSceneNiagaraParameterSectionTemplate::Parameter' has a wrong offset!");

struct FMovieSceneNiagaraFloatParameterSectionTemplate final : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel                FloatChannel;
};
static_assert(alignof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraFloatParameterSectionTemplate");
static_assert(sizeof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x000148, "Wrong size on FMovieSceneNiagaraFloatParameterSectionTemplate");
static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 0x000038, "Member 'FMovieSceneNiagaraFloatParameterSectionTemplate::FloatChannel' has a wrong offset!");

struct FNiagaraSimCacheCreateParameters final
{
public:
	ENiagaraSimCacheAttributeCaptureMode          AttributeCaptureMode;
	uint8                                         Pad_1[0x3];
	uint8                                         bAllowRebasing : 1;
	uint8                                         bAllowDataInterfaceCaching : 1;
	uint8                                         Pad_5[0x3];
	TArray<class FName>                           RebaseIncludeAttributes;
	TArray<class FName>                           RebaseExcludeAttributes;
	TArray<class FName>                           ExplicitCaptureAttributes;
};
static_assert(alignof(FNiagaraSimCacheCreateParameters) == 0x000008, "Wrong alignment on FNiagaraSimCacheCreateParameters");
static_assert(sizeof(FNiagaraSimCacheCreateParameters) == 0x000038, "Wrong size on FNiagaraSimCacheCreateParameters");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, AttributeCaptureMode) == 0x000000, "Member 'FNiagaraSimCacheCreateParameters::AttributeCaptureMode' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, RebaseIncludeAttributes) == 0x000008, "Member 'FNiagaraSimCacheCreateParameters::RebaseIncludeAttributes' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, RebaseExcludeAttributes) == 0x000018, "Member 'FNiagaraSimCacheCreateParameters::RebaseExcludeAttributes' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, ExplicitCaptureAttributes) == 0x000028, "Member 'FNiagaraSimCacheCreateParameters::ExplicitCaptureAttributes' has a wrong offset!");

struct FNiagaraDataSetID final
{
public:
	class FName                                   Name;
	ENiagaraDataSetType                           Type;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FNiagaraDataSetID) == 0x000004, "Wrong alignment on FNiagaraDataSetID");
static_assert(sizeof(FNiagaraDataSetID) == 0x000008, "Wrong size on FNiagaraDataSetID");
static_assert(offsetof(FNiagaraDataSetID, Name) == 0x000000, "Member 'FNiagaraDataSetID::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetID, Type) == 0x000004, "Member 'FNiagaraDataSetID::Type' has a wrong offset!");

struct FNiagaraDataSetProperties final
{
public:
	struct FNiagaraDataSetID                      ID;
	TArray<struct FNiagaraVariable>               Variables;
};
static_assert(alignof(FNiagaraDataSetProperties) == 0x000008, "Wrong alignment on FNiagaraDataSetProperties");
static_assert(sizeof(FNiagaraDataSetProperties) == 0x000018, "Wrong size on FNiagaraDataSetProperties");
static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0x000000, "Member 'FNiagaraDataSetProperties::ID' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 0x000008, "Member 'FNiagaraDataSetProperties::Variables' has a wrong offset!");

struct FNiagaraScriptDataUsageInfo final
{
public:
	bool                                          bReadsAttributeData;
};
static_assert(alignof(FNiagaraScriptDataUsageInfo) == 0x000001, "Wrong alignment on FNiagaraScriptDataUsageInfo");
static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x000001, "Wrong size on FNiagaraScriptDataUsageInfo");
static_assert(offsetof(FNiagaraScriptDataUsageInfo, bReadsAttributeData) == 0x000000, "Member 'FNiagaraScriptDataUsageInfo::bReadsAttributeData' has a wrong offset!");

struct FNiagaraFunctionSignature final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	TArray<struct FNiagaraVariable>               Inputs;
	TArray<struct FNiagaraVariable>               Outputs;
	class FName                                   OwnerName;
	uint8                                         bRequiresContext : 1;
	uint8                                         bRequiresExecPin : 1;
	uint8                                         bMemberFunction : 1;
	uint8                                         bExperimental : 1;
	uint8                                         bSupportsCPU : 1;
	uint8                                         bSupportsGPU : 1;
	uint8                                         bWriteFunction : 1;
	uint8                                         bReadFunction : 1;
	uint8                                         bSoftDeprecatedFunction : 1;
	uint8                                         bIsCompileTagGenerator : 1;
	uint8                                         bHidden : 1;
	uint8                                         Pad_2E[0x2];
	int32                                         ModuleUsageBitmask;
	int32                                         ContextStageIndex;
	int16                                         RequiredInputs;
	int16                                         RequiredOutputs;
	uint8                                         Pad_3C[0x4];
	TMap<class FName, class FName>                FunctionSpecifiers;
};
static_assert(alignof(FNiagaraFunctionSignature) == 0x000008, "Wrong alignment on FNiagaraFunctionSignature");
static_assert(sizeof(FNiagaraFunctionSignature) == 0x000090, "Wrong size on FNiagaraFunctionSignature");
static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0x000000, "Member 'FNiagaraFunctionSignature::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 0x000008, "Member 'FNiagaraFunctionSignature::Inputs' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 0x000018, "Member 'FNiagaraFunctionSignature::Outputs' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 0x000028, "Member 'FNiagaraFunctionSignature::OwnerName' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, ModuleUsageBitmask) == 0x000030, "Member 'FNiagaraFunctionSignature::ModuleUsageBitmask' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, ContextStageIndex) == 0x000034, "Member 'FNiagaraFunctionSignature::ContextStageIndex' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, RequiredInputs) == 0x000038, "Member 'FNiagaraFunctionSignature::RequiredInputs' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, RequiredOutputs) == 0x00003A, "Member 'FNiagaraFunctionSignature::RequiredOutputs' has a wrong offset!");
static_assert(offsetof(FNiagaraFunctionSignature, FunctionSpecifiers) == 0x000040, "Member 'FNiagaraFunctionSignature::FunctionSpecifiers' has a wrong offset!");

struct FNiagaraTypeDefinition final
{
public:
	class UObject*                                ClassStructOrEnum;
	uint16                                        UnderlyingType;
	uint8                                         Flags;
	uint8                                         Pad_B[0x5];
};
static_assert(alignof(FNiagaraTypeDefinition) == 0x000008, "Wrong alignment on FNiagaraTypeDefinition");
static_assert(sizeof(FNiagaraTypeDefinition) == 0x000010, "Wrong size on FNiagaraTypeDefinition");
static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0x000000, "Member 'FNiagaraTypeDefinition::ClassStructOrEnum' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeDefinition, UnderlyingType) == 0x000008, "Member 'FNiagaraTypeDefinition::UnderlyingType' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeDefinition, Flags) == 0x00000A, "Member 'FNiagaraTypeDefinition::Flags' has a wrong offset!");

struct FNiagaraScriptDataInterfaceInfo final
{
public:
	class UNiagaraDataInterface*                  DataInterface;
	class FName                                   Name;
	int32                                         UserPtrIdx;
	struct FNiagaraTypeDefinition                 Type;
	class FName                                   RegisteredParameterMapRead;
	class FName                                   RegisteredParameterMapWrite;
};
static_assert(alignof(FNiagaraScriptDataInterfaceInfo) == 0x000008, "Wrong alignment on FNiagaraScriptDataInterfaceInfo");
static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x000028, "Wrong size on FNiagaraScriptDataInterfaceInfo");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0x000000, "Member 'FNiagaraScriptDataInterfaceInfo::DataInterface' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 0x000008, "Member 'FNiagaraScriptDataInterfaceInfo::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, UserPtrIdx) == 0x00000C, "Member 'FNiagaraScriptDataInterfaceInfo::UserPtrIdx' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 0x000010, "Member 'FNiagaraScriptDataInterfaceInfo::Type' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 0x000020, "Member 'FNiagaraScriptDataInterfaceInfo::RegisteredParameterMapRead' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 0x000024, "Member 'FNiagaraScriptDataInterfaceInfo::RegisteredParameterMapWrite' has a wrong offset!");

struct FNiagaraScriptDataInterfaceCompileInfo final
{
public:
	class FName                                   Name;
	int32                                         UserPtrIdx;
	struct FNiagaraTypeDefinition                 Type;
	class FName                                   RegisteredParameterMapRead;
	class FName                                   RegisteredParameterMapWrite;
	bool                                          bIsPlaceholder;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FNiagaraScriptDataInterfaceCompileInfo) == 0x000008, "Wrong alignment on FNiagaraScriptDataInterfaceCompileInfo");
static_assert(sizeof(FNiagaraScriptDataInterfaceCompileInfo) == 0x000028, "Wrong size on FNiagaraScriptDataInterfaceCompileInfo");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0x000000, "Member 'FNiagaraScriptDataInterfaceCompileInfo::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, UserPtrIdx) == 0x000004, "Member 'FNiagaraScriptDataInterfaceCompileInfo::UserPtrIdx' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 0x000008, "Member 'FNiagaraScriptDataInterfaceCompileInfo::Type' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 0x000018, "Member 'FNiagaraScriptDataInterfaceCompileInfo::RegisteredParameterMapRead' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 0x00001C, "Member 'FNiagaraScriptDataInterfaceCompileInfo::RegisteredParameterMapWrite' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, bIsPlaceholder) == 0x000020, "Member 'FNiagaraScriptDataInterfaceCompileInfo::bIsPlaceholder' has a wrong offset!");

struct FNiagaraStatScope final
{
public:
	class FName                                   FullName;
	class FName                                   FriendlyName;
};
static_assert(alignof(FNiagaraStatScope) == 0x000004, "Wrong alignment on FNiagaraStatScope");
static_assert(sizeof(FNiagaraStatScope) == 0x000008, "Wrong size on FNiagaraStatScope");
static_assert(offsetof(FNiagaraStatScope, FullName) == 0x000000, "Member 'FNiagaraStatScope::FullName' has a wrong offset!");
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 0x000004, "Member 'FNiagaraStatScope::FriendlyName' has a wrong offset!");

struct FVMFunctionSpecifier final
{
public:
	class FName                                   Key;
	class FName                                   Value;
};
static_assert(alignof(FVMFunctionSpecifier) == 0x000004, "Wrong alignment on FVMFunctionSpecifier");
static_assert(sizeof(FVMFunctionSpecifier) == 0x000008, "Wrong size on FVMFunctionSpecifier");
static_assert(offsetof(FVMFunctionSpecifier, Key) == 0x000000, "Member 'FVMFunctionSpecifier::Key' has a wrong offset!");
static_assert(offsetof(FVMFunctionSpecifier, Value) == 0x000004, "Member 'FVMFunctionSpecifier::Value' has a wrong offset!");

struct FVMExternalFunctionBindingInfo final
{
public:
	class FName                                   Name;
	class FName                                   OwnerName;
	TArray<bool>                                  InputParamLocations;
	int32                                         NumOutputs;
	uint8                                         Pad_1C[0x4];
	TArray<struct FVMFunctionSpecifier>           FunctionSpecifiers;
	TArray<struct FNiagaraVariableBase>           VariadicInputs;
	TArray<struct FNiagaraVariableBase>           VariadicOutputs;
};
static_assert(alignof(FVMExternalFunctionBindingInfo) == 0x000008, "Wrong alignment on FVMExternalFunctionBindingInfo");
static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x000050, "Wrong size on FVMExternalFunctionBindingInfo");
static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0x000000, "Member 'FVMExternalFunctionBindingInfo::Name' has a wrong offset!");
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 0x000004, "Member 'FVMExternalFunctionBindingInfo::OwnerName' has a wrong offset!");
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 0x000008, "Member 'FVMExternalFunctionBindingInfo::InputParamLocations' has a wrong offset!");
static_assert(offsetof(FVMExternalFunctionBindingInfo, NumOutputs) == 0x000018, "Member 'FVMExternalFunctionBindingInfo::NumOutputs' has a wrong offset!");
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 0x000020, "Member 'FVMExternalFunctionBindingInfo::FunctionSpecifiers' has a wrong offset!");
static_assert(offsetof(FVMExternalFunctionBindingInfo, VariadicInputs) == 0x000030, "Member 'FVMExternalFunctionBindingInfo::VariadicInputs' has a wrong offset!");
static_assert(offsetof(FVMExternalFunctionBindingInfo, VariadicOutputs) == 0x000040, "Member 'FVMExternalFunctionBindingInfo::VariadicOutputs' has a wrong offset!");

struct FNiagaraSystemUpdateContext final
{
public:
	TArray<class UNiagaraComponent*>              ComponentsToReset;
	TArray<class UNiagaraComponent*>              ComponentsToReInit;
	TArray<class UNiagaraComponent*>              ComponentsToNotifySimDestroy;
	TArray<class UNiagaraSystem*>                 SystemSimsToDestroy;
	TArray<class UNiagaraSystem*>                 SystemSimsToRecache;
	uint8                                         Pad_50[0x28];
};
static_assert(alignof(FNiagaraSystemUpdateContext) == 0x000008, "Wrong alignment on FNiagaraSystemUpdateContext");
static_assert(sizeof(FNiagaraSystemUpdateContext) == 0x000078, "Wrong size on FNiagaraSystemUpdateContext");
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0x000000, "Member 'FNiagaraSystemUpdateContext::ComponentsToReset' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 0x000010, "Member 'FNiagaraSystemUpdateContext::ComponentsToReInit' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 0x000020, "Member 'FNiagaraSystemUpdateContext::ComponentsToNotifySimDestroy' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 0x000030, "Member 'FNiagaraSystemUpdateContext::SystemSimsToDestroy' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToRecache) == 0x000040, "Member 'FNiagaraSystemUpdateContext::SystemSimsToRecache' has a wrong offset!");

struct FNiagaraVariableInfo final
{
public:
	struct FNiagaraVariable                       Variable;
	class FText                                   Definition;
	class UNiagaraDataInterface*                  DataInterface;
};
static_assert(alignof(FNiagaraVariableInfo) == 0x000008, "Wrong alignment on FNiagaraVariableInfo");
static_assert(sizeof(FNiagaraVariableInfo) == 0x000038, "Wrong size on FNiagaraVariableInfo");
static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0x000000, "Member 'FNiagaraVariableInfo::Variable' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 0x000018, "Member 'FNiagaraVariableInfo::Definition' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 0x000030, "Member 'FNiagaraVariableInfo::DataInterface' has a wrong offset!");

struct FNiagaraVariableAttributeBinding final
{
public:
	struct FNiagaraVariableBase                   ParamMapVariable;
	struct FNiagaraVariable                       DataSetVariable;
	struct FNiagaraVariable                       RootVariable;
	ENiagaraBindingSource                         BindingSourceMode;
	uint8                                         Pad_39[0x3];
	uint8                                         bBindingExistsOnSource : 1;
	uint8                                         bIsCachedParticleValue : 1;
	uint8                                         Pad_3D[0x3];
};
static_assert(alignof(FNiagaraVariableAttributeBinding) == 0x000008, "Wrong alignment on FNiagaraVariableAttributeBinding");
static_assert(sizeof(FNiagaraVariableAttributeBinding) == 0x000040, "Wrong size on FNiagaraVariableAttributeBinding");
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 0x000000, "Member 'FNiagaraVariableAttributeBinding::ParamMapVariable' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetVariable) == 0x000008, "Member 'FNiagaraVariableAttributeBinding::DataSetVariable' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableAttributeBinding, RootVariable) == 0x000020, "Member 'FNiagaraVariableAttributeBinding::RootVariable' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableAttributeBinding, BindingSourceMode) == 0x000038, "Member 'FNiagaraVariableAttributeBinding::BindingSourceMode' has a wrong offset!");

struct FNiagaraMaterialAttributeBinding final
{
public:
	class FName                                   MaterialParameterName;
	struct FNiagaraVariableBase                   NiagaraVariable;
	struct FNiagaraVariableBase                   ResolvedNiagaraVariable;
	struct FNiagaraVariableBase                   NiagaraChildVariable;
};
static_assert(alignof(FNiagaraMaterialAttributeBinding) == 0x000004, "Wrong alignment on FNiagaraMaterialAttributeBinding");
static_assert(sizeof(FNiagaraMaterialAttributeBinding) == 0x00001C, "Wrong size on FNiagaraMaterialAttributeBinding");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0x000000, "Member 'FNiagaraMaterialAttributeBinding::MaterialParameterName' has a wrong offset!");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 0x000004, "Member 'FNiagaraMaterialAttributeBinding::NiagaraVariable' has a wrong offset!");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 0x00000C, "Member 'FNiagaraMaterialAttributeBinding::ResolvedNiagaraVariable' has a wrong offset!");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 0x000014, "Member 'FNiagaraMaterialAttributeBinding::NiagaraChildVariable' has a wrong offset!");

struct FNiagaraVariableDataInterfaceBinding final
{
public:
	struct FNiagaraVariable                       BoundVariable;
};
static_assert(alignof(FNiagaraVariableDataInterfaceBinding) == 0x000008, "Wrong alignment on FNiagaraVariableDataInterfaceBinding");
static_assert(sizeof(FNiagaraVariableDataInterfaceBinding) == 0x000018, "Wrong size on FNiagaraVariableDataInterfaceBinding");
static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0x000000, "Member 'FNiagaraVariableDataInterfaceBinding::BoundVariable' has a wrong offset!");

struct FNiagaraScriptVariableBinding final
{
public:
	class FName                                   Name;
};
static_assert(alignof(FNiagaraScriptVariableBinding) == 0x000004, "Wrong alignment on FNiagaraScriptVariableBinding");
static_assert(sizeof(FNiagaraScriptVariableBinding) == 0x000004, "Wrong size on FNiagaraScriptVariableBinding");
static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0x000000, "Member 'FNiagaraScriptVariableBinding::Name' has a wrong offset!");

struct FNiagaraUserParameterBinding final
{
public:
	struct FNiagaraVariable                       Parameter;
};
static_assert(alignof(FNiagaraUserParameterBinding) == 0x000008, "Wrong alignment on FNiagaraUserParameterBinding");
static_assert(sizeof(FNiagaraUserParameterBinding) == 0x000018, "Wrong size on FNiagaraUserParameterBinding");
static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0x000000, "Member 'FNiagaraUserParameterBinding::Parameter' has a wrong offset!");

struct FNiagaraCompileDependency final
{
public:
	class FString                                 LinkerErrorMessage;
	struct FGuid                                  NodeGUID;
	struct FGuid                                  PinGuid;
	TArray<struct FGuid>                          StackGuids;
	struct FNiagaraVariableBase                   DependentVariable;
	bool                                          bDependentVariableFromCustomIterationNamespace;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(FNiagaraCompileDependency) == 0x000008, "Wrong alignment on FNiagaraCompileDependency");
static_assert(sizeof(FNiagaraCompileDependency) == 0x000050, "Wrong size on FNiagaraCompileDependency");
static_assert(offsetof(FNiagaraCompileDependency, LinkerErrorMessage) == 0x000000, "Member 'FNiagaraCompileDependency::LinkerErrorMessage' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileDependency, NodeGUID) == 0x000010, "Member 'FNiagaraCompileDependency::NodeGUID' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileDependency, PinGuid) == 0x000020, "Member 'FNiagaraCompileDependency::PinGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileDependency, StackGuids) == 0x000030, "Member 'FNiagaraCompileDependency::StackGuids' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileDependency, DependentVariable) == 0x000040, "Member 'FNiagaraCompileDependency::DependentVariable' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileDependency, bDependentVariableFromCustomIterationNamespace) == 0x000048, "Member 'FNiagaraCompileDependency::bDependentVariableFromCustomIterationNamespace' has a wrong offset!");

struct FNiagaraCompileHashVisitorDebugInfo final
{
public:
	class FString                                 Object;
	TArray<class FString>                         PropertyKeys;
	TArray<class FString>                         PropertyValues;
};
static_assert(alignof(FNiagaraCompileHashVisitorDebugInfo) == 0x000008, "Wrong alignment on FNiagaraCompileHashVisitorDebugInfo");
static_assert(sizeof(FNiagaraCompileHashVisitorDebugInfo) == 0x000030, "Wrong size on FNiagaraCompileHashVisitorDebugInfo");
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0x000000, "Member 'FNiagaraCompileHashVisitorDebugInfo::Object' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 0x000010, "Member 'FNiagaraCompileHashVisitorDebugInfo::PropertyKeys' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 0x000020, "Member 'FNiagaraCompileHashVisitorDebugInfo::PropertyValues' has a wrong offset!");

struct FNiagaraDataChannelReference final
{
public:
	class FName                                   ChannelName;
};
static_assert(alignof(FNiagaraDataChannelReference) == 0x000004, "Wrong alignment on FNiagaraDataChannelReference");
static_assert(sizeof(FNiagaraDataChannelReference) == 0x000004, "Wrong size on FNiagaraDataChannelReference");
static_assert(offsetof(FNiagaraDataChannelReference, ChannelName) == 0x000000, "Member 'FNiagaraDataChannelReference::ChannelName' has a wrong offset!");

struct FNDIDataChannelFunctionInfo final
{
public:
	class FName                                   FunctionName;
	uint8                                         Pad_4[0x4];
	TArray<struct FNiagaraVariableBase>           Inputs;
	TArray<struct FNiagaraVariableBase>           Outputs;
};
static_assert(alignof(FNDIDataChannelFunctionInfo) == 0x000008, "Wrong alignment on FNDIDataChannelFunctionInfo");
static_assert(sizeof(FNDIDataChannelFunctionInfo) == 0x000028, "Wrong size on FNDIDataChannelFunctionInfo");
static_assert(offsetof(FNDIDataChannelFunctionInfo, FunctionName) == 0x000000, "Member 'FNDIDataChannelFunctionInfo::FunctionName' has a wrong offset!");
static_assert(offsetof(FNDIDataChannelFunctionInfo, Inputs) == 0x000008, "Member 'FNDIDataChannelFunctionInfo::Inputs' has a wrong offset!");
static_assert(offsetof(FNDIDataChannelFunctionInfo, Outputs) == 0x000018, "Member 'FNDIDataChannelFunctionInfo::Outputs' has a wrong offset!");

struct FNDIDataChannel_GPUScriptParameterAccessInfo final
{
public:
	TArray<struct FNiagaraVariableBase>           SortedParameters;
};
static_assert(alignof(FNDIDataChannel_GPUScriptParameterAccessInfo) == 0x000008, "Wrong alignment on FNDIDataChannel_GPUScriptParameterAccessInfo");
static_assert(sizeof(FNDIDataChannel_GPUScriptParameterAccessInfo) == 0x000010, "Wrong size on FNDIDataChannel_GPUScriptParameterAccessInfo");
static_assert(offsetof(FNDIDataChannel_GPUScriptParameterAccessInfo, SortedParameters) == 0x000000, "Member 'FNDIDataChannel_GPUScriptParameterAccessInfo::SortedParameters' has a wrong offset!");

struct FNDIDataChannelCompiledData
{
public:
	TArray<struct FNDIDataChannelFunctionInfo>    FunctionInfo;
	TMap<struct FNiagaraCompileHash, struct FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;
	uint32                                        TotalParams;
	bool                                          bUsedByCPU;
	bool                                          bUsedByGPU;
	uint8                                         Pad_66[0x2];
};
static_assert(alignof(FNDIDataChannelCompiledData) == 0x000008, "Wrong alignment on FNDIDataChannelCompiledData");
static_assert(sizeof(FNDIDataChannelCompiledData) == 0x000068, "Wrong size on FNDIDataChannelCompiledData");
static_assert(offsetof(FNDIDataChannelCompiledData, FunctionInfo) == 0x000000, "Member 'FNDIDataChannelCompiledData::FunctionInfo' has a wrong offset!");
static_assert(offsetof(FNDIDataChannelCompiledData, GPUScriptParameterInfos) == 0x000010, "Member 'FNDIDataChannelCompiledData::GPUScriptParameterInfos' has a wrong offset!");
static_assert(offsetof(FNDIDataChannelCompiledData, TotalParams) == 0x000060, "Member 'FNDIDataChannelCompiledData::TotalParams' has a wrong offset!");
static_assert(offsetof(FNDIDataChannelCompiledData, bUsedByCPU) == 0x000064, "Member 'FNDIDataChannelCompiledData::bUsedByCPU' has a wrong offset!");
static_assert(offsetof(FNDIDataChannelCompiledData, bUsedByGPU) == 0x000065, "Member 'FNDIDataChannelCompiledData::bUsedByGPU' has a wrong offset!");

struct FNiagaraTypeLayoutInfo final
{
public:
	TArray<uint32>                                FloatComponentByteOffsets;
	TArray<uint32>                                FloatComponentRegisterOffsets;
	TArray<uint32>                                Int32ComponentByteOffsets;
	TArray<uint32>                                Int32ComponentRegisterOffsets;
	TArray<uint32>                                HalfComponentByteOffsets;
	TArray<uint32>                                HalfComponentRegisterOffsets;
};
static_assert(alignof(FNiagaraTypeLayoutInfo) == 0x000008, "Wrong alignment on FNiagaraTypeLayoutInfo");
static_assert(sizeof(FNiagaraTypeLayoutInfo) == 0x000060, "Wrong size on FNiagaraTypeLayoutInfo");
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets) == 0x000000, "Member 'FNiagaraTypeLayoutInfo::FloatComponentByteOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets) == 0x000010, "Member 'FNiagaraTypeLayoutInfo::FloatComponentRegisterOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets) == 0x000020, "Member 'FNiagaraTypeLayoutInfo::Int32ComponentByteOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets) == 0x000030, "Member 'FNiagaraTypeLayoutInfo::Int32ComponentRegisterOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets) == 0x000040, "Member 'FNiagaraTypeLayoutInfo::HalfComponentByteOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets) == 0x000050, "Member 'FNiagaraTypeLayoutInfo::HalfComponentRegisterOffsets' has a wrong offset!");

struct FNiagaraVariableLayoutInfo final
{
public:
	uint32                                        FloatComponentStart;
	uint32                                        Int32ComponentStart;
	uint32                                        HalfComponentStart;
	uint8                                         Pad_C[0x4];
	struct FNiagaraTypeLayoutInfo                 LayoutInfo;
};
static_assert(alignof(FNiagaraVariableLayoutInfo) == 0x000008, "Wrong alignment on FNiagaraVariableLayoutInfo");
static_assert(sizeof(FNiagaraVariableLayoutInfo) == 0x000070, "Wrong size on FNiagaraVariableLayoutInfo");
static_assert(offsetof(FNiagaraVariableLayoutInfo, FloatComponentStart) == 0x000000, "Member 'FNiagaraVariableLayoutInfo::FloatComponentStart' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableLayoutInfo, Int32ComponentStart) == 0x000004, "Member 'FNiagaraVariableLayoutInfo::Int32ComponentStart' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableLayoutInfo, HalfComponentStart) == 0x000008, "Member 'FNiagaraVariableLayoutInfo::HalfComponentStart' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 0x000010, "Member 'FNiagaraVariableLayoutInfo::LayoutInfo' has a wrong offset!");

struct FNiagaraDataSetCompiledData final
{
public:
	TArray<struct FNiagaraVariable>               Variables;
	TArray<struct FNiagaraVariableLayoutInfo>     VariableLayouts;
	struct FNiagaraDataSetID                      ID;
	uint32                                        TotalFloatComponents;
	uint32                                        TotalInt32Components;
	uint32                                        TotalHalfComponents;
	uint8                                         bRequiresPersistentIDs : 1;
	uint8                                         Pad_35[0x3];
	ENiagaraSimTarget                             SimTarget;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FNiagaraDataSetCompiledData) == 0x000008, "Wrong alignment on FNiagaraDataSetCompiledData");
static_assert(sizeof(FNiagaraDataSetCompiledData) == 0x000040, "Wrong size on FNiagaraDataSetCompiledData");
static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0x000000, "Member 'FNiagaraDataSetCompiledData::Variables' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 0x000010, "Member 'FNiagaraDataSetCompiledData::VariableLayouts' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 0x000020, "Member 'FNiagaraDataSetCompiledData::ID' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetCompiledData, TotalFloatComponents) == 0x000028, "Member 'FNiagaraDataSetCompiledData::TotalFloatComponents' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetCompiledData, TotalInt32Components) == 0x00002C, "Member 'FNiagaraDataSetCompiledData::TotalInt32Components' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetCompiledData, TotalHalfComponents) == 0x000030, "Member 'FNiagaraDataSetCompiledData::TotalHalfComponents' has a wrong offset!");
static_assert(offsetof(FNiagaraDataSetCompiledData, SimTarget) == 0x000038, "Member 'FNiagaraDataSetCompiledData::SimTarget' has a wrong offset!");

struct FNDIDataChannelWriteCompiledData final : public FNDIDataChannelCompiledData
{
public:
	struct FNiagaraDataSetCompiledData            DataLayout;
};
static_assert(alignof(FNDIDataChannelWriteCompiledData) == 0x000008, "Wrong alignment on FNDIDataChannelWriteCompiledData");
static_assert(sizeof(FNDIDataChannelWriteCompiledData) == 0x0000A8, "Wrong size on FNDIDataChannelWriteCompiledData");
static_assert(offsetof(FNDIDataChannelWriteCompiledData, DataLayout) == 0x000068, "Member 'FNDIDataChannelWriteCompiledData::DataLayout' has a wrong offset!");

struct FNiagaraScalabilityState final
{
public:
	float                                         Significance;
	float                                         LastVisibleTime;
	uint8                                         Pad_8[0x2];
	uint8                                         bCulled : 1;
	uint8                                         bPreviousCulled : 1;
	uint8                                         bCulledByDistance : 1;
	uint8                                         bCulledByInstanceCount : 1;
	uint8                                         bCulledByVisibility : 1;
	uint8                                         bCulledByGlobalBudget : 1;
	uint8                                         Pad_B[0x1];
};
static_assert(alignof(FNiagaraScalabilityState) == 0x000004, "Wrong alignment on FNiagaraScalabilityState");
static_assert(sizeof(FNiagaraScalabilityState) == 0x00000C, "Wrong size on FNiagaraScalabilityState");
static_assert(offsetof(FNiagaraScalabilityState, Significance) == 0x000000, "Member 'FNiagaraScalabilityState::Significance' has a wrong offset!");
static_assert(offsetof(FNiagaraScalabilityState, LastVisibleTime) == 0x000004, "Member 'FNiagaraScalabilityState::LastVisibleTime' has a wrong offset!");

struct FNiagaraStackSection final
{
public:
	class FName                                   SectionIdentifier;
	uint8                                         Pad_4[0x4];
	class FText                                   SectionDisplayName;
	TArray<class FText>                           Categories;
	bool                                          bEnabled;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FNiagaraStackSection) == 0x000008, "Wrong alignment on FNiagaraStackSection");
static_assert(sizeof(FNiagaraStackSection) == 0x000038, "Wrong size on FNiagaraStackSection");
static_assert(offsetof(FNiagaraStackSection, SectionIdentifier) == 0x000000, "Member 'FNiagaraStackSection::SectionIdentifier' has a wrong offset!");
static_assert(offsetof(FNiagaraStackSection, SectionDisplayName) == 0x000008, "Member 'FNiagaraStackSection::SectionDisplayName' has a wrong offset!");
static_assert(offsetof(FNiagaraStackSection, Categories) == 0x000020, "Member 'FNiagaraStackSection::Categories' has a wrong offset!");
static_assert(offsetof(FNiagaraStackSection, bEnabled) == 0x000030, "Member 'FNiagaraStackSection::bEnabled' has a wrong offset!");

struct FNDIStaticMeshSectionFilter final
{
public:
	TArray<int32>                                 AllowedMaterialSlots;
};
static_assert(alignof(FNDIStaticMeshSectionFilter) == 0x000008, "Wrong alignment on FNDIStaticMeshSectionFilter");
static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x000010, "Wrong size on FNDIStaticMeshSectionFilter");
static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0x000000, "Member 'FNDIStaticMeshSectionFilter::AllowedMaterialSlots' has a wrong offset!");

struct FNiagaraUObjectPropertyReaderRemap final
{
public:
	class FName                                   GraphName;
	class FName                                   RemapName;
};
static_assert(alignof(FNiagaraUObjectPropertyReaderRemap) == 0x000004, "Wrong alignment on FNiagaraUObjectPropertyReaderRemap");
static_assert(sizeof(FNiagaraUObjectPropertyReaderRemap) == 0x000008, "Wrong size on FNiagaraUObjectPropertyReaderRemap");
static_assert(offsetof(FNiagaraUObjectPropertyReaderRemap, GraphName) == 0x000000, "Member 'FNiagaraUObjectPropertyReaderRemap::GraphName' has a wrong offset!");
static_assert(offsetof(FNiagaraUObjectPropertyReaderRemap, RemapName) == 0x000004, "Member 'FNiagaraUObjectPropertyReaderRemap::RemapName' has a wrong offset!");

struct FMovieSceneNiagaraSystemTrackTemplate final : public FMovieSceneEvalTemplate
{
};
static_assert(alignof(FMovieSceneNiagaraSystemTrackTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraSystemTrackTemplate");
static_assert(sizeof(FMovieSceneNiagaraSystemTrackTemplate) == 0x000020, "Wrong size on FMovieSceneNiagaraSystemTrackTemplate");

struct FMovieSceneNiagaraSystemTrackImplementation final : public FMovieSceneTrackImplementation
{
public:
	struct FFrameNumber                           SpawnSectionStartFrame;
	struct FFrameNumber                           SpawnSectionEndFrame;
	ENiagaraSystemSpawnSectionStartBehavior       SpawnSectionStartBehavior;
	ENiagaraSystemSpawnSectionEvaluateBehavior    SpawnSectionEvaluateBehavior;
	ENiagaraSystemSpawnSectionEndBehavior         SpawnSectionEndBehavior;
	ENiagaraAgeUpdateMode                         AgeUpdateMode;
	bool                                          bAllowScalability;
	uint8                                         Pad_26[0x2];
};
static_assert(alignof(FMovieSceneNiagaraSystemTrackImplementation) == 0x000008, "Wrong alignment on FMovieSceneNiagaraSystemTrackImplementation");
static_assert(sizeof(FMovieSceneNiagaraSystemTrackImplementation) == 0x000028, "Wrong size on FMovieSceneNiagaraSystemTrackImplementation");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame) == 0x000010, "Member 'FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionStartFrame' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame) == 0x000014, "Member 'FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionEndFrame' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior) == 0x000018, "Member 'FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionStartBehavior' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior) == 0x00001C, "Member 'FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionEvaluateBehavior' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior) == 0x000020, "Member 'FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionEndBehavior' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode) == 0x000024, "Member 'FMovieSceneNiagaraSystemTrackImplementation::AgeUpdateMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, bAllowScalability) == 0x000025, "Member 'FMovieSceneNiagaraSystemTrackImplementation::bAllowScalability' has a wrong offset!");

struct FMovieSceneNiagaraBoolParameterSectionTemplate final : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneBoolChannel                 BoolChannel;
};
static_assert(alignof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraBoolParameterSectionTemplate");
static_assert(sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x000138, "Wrong size on FMovieSceneNiagaraBoolParameterSectionTemplate");
static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 0x000038, "Member 'FMovieSceneNiagaraBoolParameterSectionTemplate::BoolChannel' has a wrong offset!");

struct FMovieSceneNiagaraColorParameterSectionTemplate final : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel                RedChannel;
	struct FMovieSceneFloatChannel                GreenChannel;
	struct FMovieSceneFloatChannel                BlueChannel;
	struct FMovieSceneFloatChannel                AlphaChannel;
};
static_assert(alignof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraColorParameterSectionTemplate");
static_assert(sizeof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x000478, "Wrong size on FMovieSceneNiagaraColorParameterSectionTemplate");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 0x000038, "Member 'FMovieSceneNiagaraColorParameterSectionTemplate::RedChannel' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 0x000148, "Member 'FMovieSceneNiagaraColorParameterSectionTemplate::GreenChannel' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 0x000258, "Member 'FMovieSceneNiagaraColorParameterSectionTemplate::BlueChannel' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 0x000368, "Member 'FMovieSceneNiagaraColorParameterSectionTemplate::AlphaChannel' has a wrong offset!");

struct FMovieSceneNiagaraIntegerParameterSectionTemplate final : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneIntegerChannel              IntegerChannel;
};
static_assert(alignof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraIntegerParameterSectionTemplate");
static_assert(sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x000138, "Wrong size on FMovieSceneNiagaraIntegerParameterSectionTemplate");
static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 0x000038, "Member 'FMovieSceneNiagaraIntegerParameterSectionTemplate::IntegerChannel' has a wrong offset!");

struct FMovieSceneNiagaraVectorParameterSectionTemplate final : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel                VectorChannels[0x4];
	int32                                         ChannelsUsed;
	uint8                                         Pad_47C[0x4];
};
static_assert(alignof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneNiagaraVectorParameterSectionTemplate");
static_assert(sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x000480, "Wrong size on FMovieSceneNiagaraVectorParameterSectionTemplate");
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 0x000038, "Member 'FMovieSceneNiagaraVectorParameterSectionTemplate::VectorChannels' has a wrong offset!");
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, ChannelsUsed) == 0x000478, "Member 'FMovieSceneNiagaraVectorParameterSectionTemplate::ChannelsUsed' has a wrong offset!");

struct alignas(0x08) FEmitterCompiledScriptPair final
{
public:
	uint8                                         Pad_0[0xA0];
};
static_assert(alignof(FEmitterCompiledScriptPair) == 0x000008, "Wrong alignment on FEmitterCompiledScriptPair");
static_assert(sizeof(FEmitterCompiledScriptPair) == 0x0000A0, "Wrong size on FEmitterCompiledScriptPair");

struct FNiagaraBakerTextureSource final
{
public:
	class FString                                 DisplayString;
	class FName                                   SourceName;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FNiagaraBakerTextureSource) == 0x000008, "Wrong alignment on FNiagaraBakerTextureSource");
static_assert(sizeof(FNiagaraBakerTextureSource) == 0x000018, "Wrong size on FNiagaraBakerTextureSource");
static_assert(offsetof(FNiagaraBakerTextureSource, DisplayString) == 0x000000, "Member 'FNiagaraBakerTextureSource::DisplayString' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerTextureSource, SourceName) == 0x000010, "Member 'FNiagaraBakerTextureSource::SourceName' has a wrong offset!");

struct FNiagaraBakerCameraSettings final
{
public:
	ENiagaraBakerViewMode                         ViewMode;
	uint8                                         Pad_4[0x4];
	struct FVector                                ViewportLocation;
	struct FRotator                               ViewportRotation;
	float                                         OrbitDistance;
	float                                         FOV;
	float                                         OrthoWidth;
	bool                                          bUseAspectRatio;
	uint8                                         Pad_45[0x3];
	float                                         AspectRatio;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FNiagaraBakerCameraSettings) == 0x000008, "Wrong alignment on FNiagaraBakerCameraSettings");
static_assert(sizeof(FNiagaraBakerCameraSettings) == 0x000050, "Wrong size on FNiagaraBakerCameraSettings");
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewMode) == 0x000000, "Member 'FNiagaraBakerCameraSettings::ViewMode' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewportLocation) == 0x000008, "Member 'FNiagaraBakerCameraSettings::ViewportLocation' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewportRotation) == 0x000020, "Member 'FNiagaraBakerCameraSettings::ViewportRotation' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, OrbitDistance) == 0x000038, "Member 'FNiagaraBakerCameraSettings::OrbitDistance' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, FOV) == 0x00003C, "Member 'FNiagaraBakerCameraSettings::FOV' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, OrthoWidth) == 0x000040, "Member 'FNiagaraBakerCameraSettings::OrthoWidth' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, bUseAspectRatio) == 0x000044, "Member 'FNiagaraBakerCameraSettings::bUseAspectRatio' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerCameraSettings, AspectRatio) == 0x000048, "Member 'FNiagaraBakerCameraSettings::AspectRatio' has a wrong offset!");

struct FNiagaraBakerTextureSettings final
{
public:
	class FName                                   OutputName;
	uint8                                         Pad_4[0x4];
	struct FNiagaraBakerTextureSource             SourceBinding;
	uint8                                         bUseFrameSize : 1;
	uint8                                         Pad_21[0x3];
	struct FIntPoint                              FrameSize;
	struct FIntPoint                              TextureSize;
	uint8                                         Pad_34[0x4];
	class UTexture2D*                             GeneratedTexture;
};
static_assert(alignof(FNiagaraBakerTextureSettings) == 0x000008, "Wrong alignment on FNiagaraBakerTextureSettings");
static_assert(sizeof(FNiagaraBakerTextureSettings) == 0x000040, "Wrong size on FNiagaraBakerTextureSettings");
static_assert(offsetof(FNiagaraBakerTextureSettings, OutputName) == 0x000000, "Member 'FNiagaraBakerTextureSettings::OutputName' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerTextureSettings, SourceBinding) == 0x000008, "Member 'FNiagaraBakerTextureSettings::SourceBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerTextureSettings, FrameSize) == 0x000024, "Member 'FNiagaraBakerTextureSettings::FrameSize' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerTextureSettings, TextureSize) == 0x00002C, "Member 'FNiagaraBakerTextureSettings::TextureSize' has a wrong offset!");
static_assert(offsetof(FNiagaraBakerTextureSettings, GeneratedTexture) == 0x000038, "Member 'FNiagaraBakerTextureSettings::GeneratedTexture' has a wrong offset!");

struct FNCPoolElement final
{
public:
	class UNiagaraComponent*                      Component;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FNCPoolElement) == 0x000008, "Wrong alignment on FNCPoolElement");
static_assert(sizeof(FNCPoolElement) == 0x000010, "Wrong size on FNCPoolElement");
static_assert(offsetof(FNCPoolElement, Component) == 0x000000, "Member 'FNCPoolElement::Component' has a wrong offset!");

struct FNCPool final
{
public:
	TArray<struct FNCPoolElement>                 FreeElements;
};
static_assert(alignof(FNCPool) == 0x000008, "Wrong alignment on FNCPool");
static_assert(sizeof(FNCPool) == 0x000010, "Wrong size on FNCPool");
static_assert(offsetof(FNCPool, FreeElements) == 0x000000, "Member 'FNCPool::FreeElements' has a wrong offset!");

struct FNiagaraComponentPropertyBinding final
{
public:
	struct FNiagaraVariableAttributeBinding       AttributeBinding;
	class FName                                   PropertyName;
	uint8                                         Pad_44[0x4];
	struct FNiagaraTypeDefinition                 PropertyType;
	class FName                                   MetadataSetterName;
	uint8                                         Pad_5C[0x4];
	TMap<class FString, class FString>            PropertySetterParameterDefaults;
};
static_assert(alignof(FNiagaraComponentPropertyBinding) == 0x000008, "Wrong alignment on FNiagaraComponentPropertyBinding");
static_assert(sizeof(FNiagaraComponentPropertyBinding) == 0x0000B0, "Wrong size on FNiagaraComponentPropertyBinding");
static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0x000000, "Member 'FNiagaraComponentPropertyBinding::AttributeBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 0x000040, "Member 'FNiagaraComponentPropertyBinding::PropertyName' has a wrong offset!");
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 0x000048, "Member 'FNiagaraComponentPropertyBinding::PropertyType' has a wrong offset!");
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 0x000058, "Member 'FNiagaraComponentPropertyBinding::MetadataSetterName' has a wrong offset!");
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertySetterParameterDefaults) == 0x000060, "Member 'FNiagaraComponentPropertyBinding::PropertySetterParameterDefaults' has a wrong offset!");

struct alignas(0x04) FNiagaraCulledComponentInfo final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FNiagaraCulledComponentInfo) == 0x000004, "Wrong alignment on FNiagaraCulledComponentInfo");
static_assert(sizeof(FNiagaraCulledComponentInfo) == 0x000008, "Wrong size on FNiagaraCulledComponentInfo");

struct FNiagaraStructConversionStep final
{
public:
	int32                                         LWCBytes;
	int32                                         LWCOffset;
	int32                                         SimulationBytes;
	int32                                         SimulationOffset;
	ENiagaraStructConversionType                  ConversionType;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(FNiagaraStructConversionStep) == 0x000004, "Wrong alignment on FNiagaraStructConversionStep");
static_assert(sizeof(FNiagaraStructConversionStep) == 0x000014, "Wrong size on FNiagaraStructConversionStep");
static_assert(offsetof(FNiagaraStructConversionStep, LWCBytes) == 0x000000, "Member 'FNiagaraStructConversionStep::LWCBytes' has a wrong offset!");
static_assert(offsetof(FNiagaraStructConversionStep, LWCOffset) == 0x000004, "Member 'FNiagaraStructConversionStep::LWCOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraStructConversionStep, SimulationBytes) == 0x000008, "Member 'FNiagaraStructConversionStep::SimulationBytes' has a wrong offset!");
static_assert(offsetof(FNiagaraStructConversionStep, SimulationOffset) == 0x00000C, "Member 'FNiagaraStructConversionStep::SimulationOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraStructConversionStep, ConversionType) == 0x000010, "Member 'FNiagaraStructConversionStep::ConversionType' has a wrong offset!");

struct FNiagaraLwcStructConverter final
{
public:
	int32                                         LWCSize;
	int32                                         SWCSize;
	TArray<struct FNiagaraStructConversionStep>   ConversionSteps;
};
static_assert(alignof(FNiagaraLwcStructConverter) == 0x000008, "Wrong alignment on FNiagaraLwcStructConverter");
static_assert(sizeof(FNiagaraLwcStructConverter) == 0x000018, "Wrong size on FNiagaraLwcStructConverter");
static_assert(offsetof(FNiagaraLwcStructConverter, LWCSize) == 0x000000, "Member 'FNiagaraLwcStructConverter::LWCSize' has a wrong offset!");
static_assert(offsetof(FNiagaraLwcStructConverter, SWCSize) == 0x000004, "Member 'FNiagaraLwcStructConverter::SWCSize' has a wrong offset!");
static_assert(offsetof(FNiagaraLwcStructConverter, ConversionSteps) == 0x000008, "Member 'FNiagaraLwcStructConverter::ConversionSteps' has a wrong offset!");

struct FNiagaraDataChannelGameDataLayout final
{
public:
	TMap<struct FNiagaraVariableBase, int32>      VariableIndices;
	TArray<struct FNiagaraLwcStructConverter>     LwcConverters;
};
static_assert(alignof(FNiagaraDataChannelGameDataLayout) == 0x000008, "Wrong alignment on FNiagaraDataChannelGameDataLayout");
static_assert(sizeof(FNiagaraDataChannelGameDataLayout) == 0x000060, "Wrong size on FNiagaraDataChannelGameDataLayout");
static_assert(offsetof(FNiagaraDataChannelGameDataLayout, VariableIndices) == 0x000000, "Member 'FNiagaraDataChannelGameDataLayout::VariableIndices' has a wrong offset!");
static_assert(offsetof(FNiagaraDataChannelGameDataLayout, LwcConverters) == 0x000050, "Member 'FNiagaraDataChannelGameDataLayout::LwcConverters' has a wrong offset!");

struct FNiagaraDataInterfaceEmitterBinding final
{
public:
	ENiagaraDataInterfaceEmitterBindingMode       BindingMode;
	class FName                                   EmitterName;
};
static_assert(alignof(FNiagaraDataInterfaceEmitterBinding) == 0x000004, "Wrong alignment on FNiagaraDataInterfaceEmitterBinding");
static_assert(sizeof(FNiagaraDataInterfaceEmitterBinding) == 0x000008, "Wrong size on FNiagaraDataInterfaceEmitterBinding");
static_assert(offsetof(FNiagaraDataInterfaceEmitterBinding, BindingMode) == 0x000000, "Member 'FNiagaraDataInterfaceEmitterBinding::BindingMode' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceEmitterBinding, EmitterName) == 0x000004, "Member 'FNiagaraDataInterfaceEmitterBinding::EmitterName' has a wrong offset!");

struct FBasicParticleData final
{
public:
	struct FVector                                Position;
	float                                         Size;
	uint8                                         Pad_1C[0x4];
	struct FVector                                Velocity;
};
static_assert(alignof(FBasicParticleData) == 0x000008, "Wrong alignment on FBasicParticleData");
static_assert(sizeof(FBasicParticleData) == 0x000038, "Wrong size on FBasicParticleData");
static_assert(offsetof(FBasicParticleData, Position) == 0x000000, "Member 'FBasicParticleData::Position' has a wrong offset!");
static_assert(offsetof(FBasicParticleData, Size) == 0x000018, "Member 'FBasicParticleData::Size' has a wrong offset!");
static_assert(offsetof(FBasicParticleData, Velocity) == 0x000020, "Member 'FBasicParticleData::Velocity' has a wrong offset!");

struct FMeshTriCoordinate final
{
public:
	int32                                         Tri;
	struct FVector3f                              BaryCoord;
};
static_assert(alignof(FMeshTriCoordinate) == 0x000004, "Wrong alignment on FMeshTriCoordinate");
static_assert(sizeof(FMeshTriCoordinate) == 0x000010, "Wrong size on FMeshTriCoordinate");
static_assert(offsetof(FMeshTriCoordinate, Tri) == 0x000000, "Member 'FMeshTriCoordinate::Tri' has a wrong offset!");
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 0x000004, "Member 'FMeshTriCoordinate::BaryCoord' has a wrong offset!");

struct FNiagaraDataInterfaceSplineLUT final
{
public:
	TArray<struct FVector>                        Positions;
	TArray<struct FVector>                        Scales;
	TArray<struct FQuat>                          Rotations;
	float                                         SplineLength;
	float                                         SplineDistanceStep;
	float                                         InvSplineDistanceStep;
	int32                                         MaxIndex;
};
static_assert(alignof(FNiagaraDataInterfaceSplineLUT) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceSplineLUT");
static_assert(sizeof(FNiagaraDataInterfaceSplineLUT) == 0x000040, "Wrong size on FNiagaraDataInterfaceSplineLUT");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Positions) == 0x000000, "Member 'FNiagaraDataInterfaceSplineLUT::Positions' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Scales) == 0x000010, "Member 'FNiagaraDataInterfaceSplineLUT::Scales' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Rotations) == 0x000020, "Member 'FNiagaraDataInterfaceSplineLUT::Rotations' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, SplineLength) == 0x000030, "Member 'FNiagaraDataInterfaceSplineLUT::SplineLength' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, SplineDistanceStep) == 0x000034, "Member 'FNiagaraDataInterfaceSplineLUT::SplineDistanceStep' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, InvSplineDistanceStep) == 0x000038, "Member 'FNiagaraDataInterfaceSplineLUT::InvSplineDistanceStep' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, MaxIndex) == 0x00003C, "Member 'FNiagaraDataInterfaceSplineLUT::MaxIndex' has a wrong offset!");

struct FNiagaraOutlinerTimingData final
{
public:
	float                                         GameThread;
	float                                         RenderThread;
};
static_assert(alignof(FNiagaraOutlinerTimingData) == 0x000004, "Wrong alignment on FNiagaraOutlinerTimingData");
static_assert(sizeof(FNiagaraOutlinerTimingData) == 0x000008, "Wrong size on FNiagaraOutlinerTimingData");
static_assert(offsetof(FNiagaraOutlinerTimingData, GameThread) == 0x000000, "Member 'FNiagaraOutlinerTimingData::GameThread' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerTimingData, RenderThread) == 0x000004, "Member 'FNiagaraOutlinerTimingData::RenderThread' has a wrong offset!");

struct FNiagaraOutlinerEmitterInstanceData final
{
public:
	class FString                                 EmitterName;
	ENiagaraSimTarget                             SimTarget;
	uint8                                         Pad_11[0x3];
	ENiagaraExecutionState                        ExecState;
	int32                                         NumParticles;
	uint8                                         bRequiresPersistentIDs : 1;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FNiagaraOutlinerEmitterInstanceData) == 0x000008, "Wrong alignment on FNiagaraOutlinerEmitterInstanceData");
static_assert(sizeof(FNiagaraOutlinerEmitterInstanceData) == 0x000020, "Wrong size on FNiagaraOutlinerEmitterInstanceData");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, EmitterName) == 0x000000, "Member 'FNiagaraOutlinerEmitterInstanceData::EmitterName' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, SimTarget) == 0x000010, "Member 'FNiagaraOutlinerEmitterInstanceData::SimTarget' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, ExecState) == 0x000014, "Member 'FNiagaraOutlinerEmitterInstanceData::ExecState' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, NumParticles) == 0x000018, "Member 'FNiagaraOutlinerEmitterInstanceData::NumParticles' has a wrong offset!");

struct FNiagaraOutlinerSystemInstanceData final
{
public:
	class FString                                 ComponentName;
	struct FVector3f                              LWCTile;
	uint8                                         Pad_1C[0x4];
	TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;
	ENiagaraExecutionState                        ActualExecutionState;
	ENiagaraExecutionState                        RequestedExecutionState;
	struct FNiagaraScalabilityState               ScalabilityState;
	uint8                                         bPendingKill : 1;
	uint8                                         bUsingCullProxy : 1;
	uint8                                         Pad_45[0x3];
	ENCPoolMethod                                 PoolMethod;
	uint8                                         Pad_49[0x3];
	struct FNiagaraOutlinerTimingData             AverageTime;
	struct FNiagaraOutlinerTimingData             MaxTime;
	ETickingGroup                                 TickGroup;
	ENiagaraGpuComputeTickStage                   GpuTickStage;
	uint8                                         Pad_5E[0x2];
	uint8                                         bIsSolo : 1;
	uint8                                         bRequiresDistanceFieldData : 1;
	uint8                                         bRequiresDepthBuffer : 1;
	uint8                                         bRequiresEarlyViewData : 1;
	uint8                                         bRequiresViewUniformBuffer : 1;
	uint8                                         bRequiresRayTracingScene : 1;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FNiagaraOutlinerSystemInstanceData) == 0x000008, "Wrong alignment on FNiagaraOutlinerSystemInstanceData");
static_assert(sizeof(FNiagaraOutlinerSystemInstanceData) == 0x000068, "Wrong size on FNiagaraOutlinerSystemInstanceData");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ComponentName) == 0x000000, "Member 'FNiagaraOutlinerSystemInstanceData::ComponentName' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, LWCTile) == 0x000010, "Member 'FNiagaraOutlinerSystemInstanceData::LWCTile' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, Emitters) == 0x000020, "Member 'FNiagaraOutlinerSystemInstanceData::Emitters' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ActualExecutionState) == 0x000030, "Member 'FNiagaraOutlinerSystemInstanceData::ActualExecutionState' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState) == 0x000034, "Member 'FNiagaraOutlinerSystemInstanceData::RequestedExecutionState' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ScalabilityState) == 0x000038, "Member 'FNiagaraOutlinerSystemInstanceData::ScalabilityState' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, PoolMethod) == 0x000048, "Member 'FNiagaraOutlinerSystemInstanceData::PoolMethod' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, AverageTime) == 0x00004C, "Member 'FNiagaraOutlinerSystemInstanceData::AverageTime' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, MaxTime) == 0x000054, "Member 'FNiagaraOutlinerSystemInstanceData::MaxTime' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, TickGroup) == 0x00005C, "Member 'FNiagaraOutlinerSystemInstanceData::TickGroup' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, GpuTickStage) == 0x00005D, "Member 'FNiagaraOutlinerSystemInstanceData::GpuTickStage' has a wrong offset!");

struct FNiagaraOutlinerSystemData final
{
public:
	TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;
	struct FNiagaraOutlinerTimingData             AveragePerFrameTime;
	struct FNiagaraOutlinerTimingData             MaxPerFrameTime;
	struct FNiagaraOutlinerTimingData             AveragePerInstanceTime;
	struct FNiagaraOutlinerTimingData             MaxPerInstanceTime;
};
static_assert(alignof(FNiagaraOutlinerSystemData) == 0x000008, "Wrong alignment on FNiagaraOutlinerSystemData");
static_assert(sizeof(FNiagaraOutlinerSystemData) == 0x000030, "Wrong size on FNiagaraOutlinerSystemData");
static_assert(offsetof(FNiagaraOutlinerSystemData, SystemInstances) == 0x000000, "Member 'FNiagaraOutlinerSystemData::SystemInstances' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerFrameTime) == 0x000010, "Member 'FNiagaraOutlinerSystemData::AveragePerFrameTime' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerFrameTime) == 0x000018, "Member 'FNiagaraOutlinerSystemData::MaxPerFrameTime' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerInstanceTime) == 0x000020, "Member 'FNiagaraOutlinerSystemData::AveragePerInstanceTime' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerInstanceTime) == 0x000028, "Member 'FNiagaraOutlinerSystemData::MaxPerInstanceTime' has a wrong offset!");

struct FNiagaraOutlinerWorldData final
{
public:
	TMap<class FString, struct FNiagaraOutlinerSystemData> Systems;
	bool                                          bHasBegunPlay;
	uint8                                         WorldType;
	uint8                                         NetMode;
	uint8                                         Pad_53[0x1];
	struct FNiagaraOutlinerTimingData             AveragePerFrameTime;
	struct FNiagaraOutlinerTimingData             MaxPerFrameTime;
	uint8                                         Pad_64[0x4];
};
static_assert(alignof(FNiagaraOutlinerWorldData) == 0x000008, "Wrong alignment on FNiagaraOutlinerWorldData");
static_assert(sizeof(FNiagaraOutlinerWorldData) == 0x000068, "Wrong size on FNiagaraOutlinerWorldData");
static_assert(offsetof(FNiagaraOutlinerWorldData, Systems) == 0x000000, "Member 'FNiagaraOutlinerWorldData::Systems' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerWorldData, bHasBegunPlay) == 0x000050, "Member 'FNiagaraOutlinerWorldData::bHasBegunPlay' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerWorldData, WorldType) == 0x000051, "Member 'FNiagaraOutlinerWorldData::WorldType' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerWorldData, NetMode) == 0x000052, "Member 'FNiagaraOutlinerWorldData::NetMode' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerWorldData, AveragePerFrameTime) == 0x000054, "Member 'FNiagaraOutlinerWorldData::AveragePerFrameTime' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerWorldData, MaxPerFrameTime) == 0x00005C, "Member 'FNiagaraOutlinerWorldData::MaxPerFrameTime' has a wrong offset!");

struct FNiagaraOutlinerData final
{
public:
	TMap<class FString, struct FNiagaraOutlinerWorldData> WorldData;
};
static_assert(alignof(FNiagaraOutlinerData) == 0x000008, "Wrong alignment on FNiagaraOutlinerData");
static_assert(sizeof(FNiagaraOutlinerData) == 0x000050, "Wrong size on FNiagaraOutlinerData");
static_assert(offsetof(FNiagaraOutlinerData, WorldData) == 0x000000, "Member 'FNiagaraOutlinerData::WorldData' has a wrong offset!");

struct FNiagaraDebuggerRequestConnection final
{
public:
	struct FGuid                                  SessionId;
	struct FGuid                                  InstanceID;
};
static_assert(alignof(FNiagaraDebuggerRequestConnection) == 0x000004, "Wrong alignment on FNiagaraDebuggerRequestConnection");
static_assert(sizeof(FNiagaraDebuggerRequestConnection) == 0x000020, "Wrong size on FNiagaraDebuggerRequestConnection");
static_assert(offsetof(FNiagaraDebuggerRequestConnection, SessionId) == 0x000000, "Member 'FNiagaraDebuggerRequestConnection::SessionId' has a wrong offset!");
static_assert(offsetof(FNiagaraDebuggerRequestConnection, InstanceID) == 0x000010, "Member 'FNiagaraDebuggerRequestConnection::InstanceID' has a wrong offset!");

struct FNiagaraDebuggerAcceptConnection final
{
public:
	struct FGuid                                  SessionId;
	struct FGuid                                  InstanceID;
};
static_assert(alignof(FNiagaraDebuggerAcceptConnection) == 0x000004, "Wrong alignment on FNiagaraDebuggerAcceptConnection");
static_assert(sizeof(FNiagaraDebuggerAcceptConnection) == 0x000020, "Wrong size on FNiagaraDebuggerAcceptConnection");
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, SessionId) == 0x000000, "Member 'FNiagaraDebuggerAcceptConnection::SessionId' has a wrong offset!");
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, InstanceID) == 0x000010, "Member 'FNiagaraDebuggerAcceptConnection::InstanceID' has a wrong offset!");

struct FNiagaraDebuggerConnectionClosed final
{
public:
	struct FGuid                                  SessionId;
	struct FGuid                                  InstanceID;
};
static_assert(alignof(FNiagaraDebuggerConnectionClosed) == 0x000004, "Wrong alignment on FNiagaraDebuggerConnectionClosed");
static_assert(sizeof(FNiagaraDebuggerConnectionClosed) == 0x000020, "Wrong size on FNiagaraDebuggerConnectionClosed");
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, SessionId) == 0x000000, "Member 'FNiagaraDebuggerConnectionClosed::SessionId' has a wrong offset!");
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, InstanceID) == 0x000010, "Member 'FNiagaraDebuggerConnectionClosed::InstanceID' has a wrong offset!");

struct FNiagaraDebuggerExecuteConsoleCommand final
{
public:
	class FString                                 Command;
	bool                                          bRequiresWorld;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FNiagaraDebuggerExecuteConsoleCommand) == 0x000008, "Wrong alignment on FNiagaraDebuggerExecuteConsoleCommand");
static_assert(sizeof(FNiagaraDebuggerExecuteConsoleCommand) == 0x000018, "Wrong size on FNiagaraDebuggerExecuteConsoleCommand");
static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, Command) == 0x000000, "Member 'FNiagaraDebuggerExecuteConsoleCommand::Command' has a wrong offset!");
static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, bRequiresWorld) == 0x000010, "Member 'FNiagaraDebuggerExecuteConsoleCommand::bRequiresWorld' has a wrong offset!");

struct FNiagaraDebuggerOutlinerUpdate final
{
public:
	struct FNiagaraOutlinerData                   OutlinerData;
};
static_assert(alignof(FNiagaraDebuggerOutlinerUpdate) == 0x000008, "Wrong alignment on FNiagaraDebuggerOutlinerUpdate");
static_assert(sizeof(FNiagaraDebuggerOutlinerUpdate) == 0x000050, "Wrong size on FNiagaraDebuggerOutlinerUpdate");
static_assert(offsetof(FNiagaraDebuggerOutlinerUpdate, OutlinerData) == 0x000000, "Member 'FNiagaraDebuggerOutlinerUpdate::OutlinerData' has a wrong offset!");

struct FNiagaraDebugHudTextOptions final
{
public:
	ENiagaraDebugHudFont                          Font;
	ENiagaraDebugHudHAlign                        HorizontalAlignment;
	ENiagaraDebugHudVAlign                        VerticalAlignment;
	uint8                                         Pad_6[0x2];
	struct FVector2D                              ScreenOffset;
};
static_assert(alignof(FNiagaraDebugHudTextOptions) == 0x000008, "Wrong alignment on FNiagaraDebugHudTextOptions");
static_assert(sizeof(FNiagaraDebugHudTextOptions) == 0x000018, "Wrong size on FNiagaraDebugHudTextOptions");
static_assert(offsetof(FNiagaraDebugHudTextOptions, Font) == 0x000000, "Member 'FNiagaraDebugHudTextOptions::Font' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHudTextOptions, HorizontalAlignment) == 0x000004, "Member 'FNiagaraDebugHudTextOptions::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHudTextOptions, VerticalAlignment) == 0x000005, "Member 'FNiagaraDebugHudTextOptions::VerticalAlignment' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHudTextOptions, ScreenOffset) == 0x000008, "Member 'FNiagaraDebugHudTextOptions::ScreenOffset' has a wrong offset!");

struct FNiagaraDebugHUDVariable final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x7];
	class FString                                 Name;
};
static_assert(alignof(FNiagaraDebugHUDVariable) == 0x000008, "Wrong alignment on FNiagaraDebugHUDVariable");
static_assert(sizeof(FNiagaraDebugHUDVariable) == 0x000018, "Wrong size on FNiagaraDebugHUDVariable");
static_assert(offsetof(FNiagaraDebugHUDVariable, bEnabled) == 0x000000, "Member 'FNiagaraDebugHUDVariable::bEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDVariable, Name) == 0x000008, "Member 'FNiagaraDebugHUDVariable::Name' has a wrong offset!");

struct FNiagaraDebugHUDSettingsData final
{
public:
	bool                                          bHudEnabled;
	bool                                          bHudRenderingEnabled;
	bool                                          bValidateSystemSimulationDataBuffers;
	bool                                          bValidateParticleDataBuffers;
	bool                                          bOverviewEnabled;
	uint8                                         Pad_5[0x3];
	ENiagaraDebugHUDOverviewMode                  OverviewMode;
	ENiagaraDebugHudFont                          OverviewFont;
	struct FVector2D                              OverviewLocation;
	bool                                          bShowRegisteredComponents;
	bool                                          bOverviewShowFilteredSystemOnly;
	uint8                                         Pad_22[0x6];
	class FString                                 ActorFilter;
	bool                                          bComponentFilterEnabled;
	uint8                                         Pad_39[0x7];
	class FString                                 ComponentFilter;
	bool                                          bSystemFilterEnabled;
	uint8                                         Pad_51[0x7];
	class FString                                 SystemFilter;
	bool                                          bEmitterFilterEnabled;
	uint8                                         Pad_69[0x7];
	class FString                                 EmitterFilter;
	bool                                          bActorFilterEnabled;
	uint8                                         Pad_81[0x3];
	ENiagaraDebugHudVerbosity                     SystemDebugVerbosity;
	ENiagaraDebugHudVerbosity                     SystemEmitterVerbosity;
	ENiagaraDebugHudVerbosity                     DataInterfaceVerbosity;
	bool                                          bSystemShowBounds;
	uint8                                         Pad_91[0x3];
	float                                         SystemBoundsSolidBoxAlpha;
	bool                                          bSystemShowActiveOnlyInWorld;
	bool                                          bShowSystemVariables;
	uint8                                         Pad_9A[0x6];
	TArray<struct FNiagaraDebugHUDVariable>       SystemVariables;
	struct FNiagaraDebugHudTextOptions            SystemTextOptions;
	bool                                          bShowParticleVariables;
	bool                                          bEnableGpuParticleReadback;
	bool                                          bShowParticleIndex;
	uint8                                         Pad_CB[0x5];
	TArray<struct FNiagaraDebugHUDVariable>       ParticlesVariables;
	struct FNiagaraDebugHudTextOptions            ParticleTextOptions;
	bool                                          bShowParticlesVariablesWithSystem;
	bool                                          bShowParticleVariablesVertical;
	bool                                          bUseMaxParticlesToDisplay;
	bool                                          bUseParticleDisplayClip;
	uint8                                         Pad_FC[0x4];
	struct FVector2D                              ParticleDisplayClip;
	bool                                          bUseParticleDisplayCenterRadius;
	uint8                                         Pad_111[0x3];
	float                                         ParticleDisplayCenterRadius;
	int32                                         MaxParticlesToDisplay;
	int32                                         PerfReportFrames;
	ENiagaraDebugHUDPerfSampleMode                PerfSampleMode;
	ENiagaraDebugHUDPerfGraphMode                 PerfGraphMode;
	int32                                         PerfHistoryFrames;
	float                                         PerfGraphTimeRange;
	struct FVector2D                              PerfGraphSize;
	struct FLinearColor                           PerfGraphAxisColor;
	bool                                          bEnableSmoothing;
	uint8                                         Pad_151[0x3];
	int32                                         SmoothingWidth;
	struct FLinearColor                           DefaultBackgroundColor;
	struct FLinearColor                           OverviewHeadingColor;
	struct FLinearColor                           OverviewDetailColor;
	struct FLinearColor                           OverviewDetailHighlightColor;
	struct FLinearColor                           InWorldErrorTextColor;
	struct FLinearColor                           InWorldTextColor;
	struct FLinearColor                           MessageInfoTextColor;
	struct FLinearColor                           MessageWarningTextColor;
	struct FLinearColor                           MessageErrorTextColor;
	float                                         SystemColorTableOpacity;
	uint32                                        SystemColorSeed;
	struct FVector                                SystemColorHSVMin;
	struct FVector                                SystemColorHSVMax;
	ENiagaraDebugPlaybackMode                     PlaybackMode;
	bool                                          bPlaybackRateEnabled;
	uint8                                         Pad_222[0x2];
	float                                         PlaybackRate;
	bool                                          bLoopTimeEnabled;
	uint8                                         Pad_229[0x3];
	float                                         LoopTime;
	bool                                          bShowGlobalBudgetInfo;
	uint8                                         Pad_231[0x7];
};
static_assert(alignof(FNiagaraDebugHUDSettingsData) == 0x000008, "Wrong alignment on FNiagaraDebugHUDSettingsData");
static_assert(sizeof(FNiagaraDebugHUDSettingsData) == 0x000238, "Wrong size on FNiagaraDebugHUDSettingsData");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bHudEnabled) == 0x000000, "Member 'FNiagaraDebugHUDSettingsData::bHudEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bHudRenderingEnabled) == 0x000001, "Member 'FNiagaraDebugHUDSettingsData::bHudRenderingEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bValidateSystemSimulationDataBuffers) == 0x000002, "Member 'FNiagaraDebugHUDSettingsData::bValidateSystemSimulationDataBuffers' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bValidateParticleDataBuffers) == 0x000003, "Member 'FNiagaraDebugHUDSettingsData::bValidateParticleDataBuffers' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bOverviewEnabled) == 0x000004, "Member 'FNiagaraDebugHUDSettingsData::bOverviewEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewMode) == 0x000008, "Member 'FNiagaraDebugHUDSettingsData::OverviewMode' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewFont) == 0x00000C, "Member 'FNiagaraDebugHUDSettingsData::OverviewFont' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewLocation) == 0x000010, "Member 'FNiagaraDebugHUDSettingsData::OverviewLocation' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowRegisteredComponents) == 0x000020, "Member 'FNiagaraDebugHUDSettingsData::bShowRegisteredComponents' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bOverviewShowFilteredSystemOnly) == 0x000021, "Member 'FNiagaraDebugHUDSettingsData::bOverviewShowFilteredSystemOnly' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ActorFilter) == 0x000028, "Member 'FNiagaraDebugHUDSettingsData::ActorFilter' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bComponentFilterEnabled) == 0x000038, "Member 'FNiagaraDebugHUDSettingsData::bComponentFilterEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ComponentFilter) == 0x000040, "Member 'FNiagaraDebugHUDSettingsData::ComponentFilter' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bSystemFilterEnabled) == 0x000050, "Member 'FNiagaraDebugHUDSettingsData::bSystemFilterEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemFilter) == 0x000058, "Member 'FNiagaraDebugHUDSettingsData::SystemFilter' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bEmitterFilterEnabled) == 0x000068, "Member 'FNiagaraDebugHUDSettingsData::bEmitterFilterEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, EmitterFilter) == 0x000070, "Member 'FNiagaraDebugHUDSettingsData::EmitterFilter' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bActorFilterEnabled) == 0x000080, "Member 'FNiagaraDebugHUDSettingsData::bActorFilterEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity) == 0x000084, "Member 'FNiagaraDebugHUDSettingsData::SystemDebugVerbosity' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity) == 0x000088, "Member 'FNiagaraDebugHUDSettingsData::SystemEmitterVerbosity' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DataInterfaceVerbosity) == 0x00008C, "Member 'FNiagaraDebugHUDSettingsData::DataInterfaceVerbosity' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bSystemShowBounds) == 0x000090, "Member 'FNiagaraDebugHUDSettingsData::bSystemShowBounds' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemBoundsSolidBoxAlpha) == 0x000094, "Member 'FNiagaraDebugHUDSettingsData::SystemBoundsSolidBoxAlpha' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bSystemShowActiveOnlyInWorld) == 0x000098, "Member 'FNiagaraDebugHUDSettingsData::bSystemShowActiveOnlyInWorld' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowSystemVariables) == 0x000099, "Member 'FNiagaraDebugHUDSettingsData::bShowSystemVariables' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemVariables) == 0x0000A0, "Member 'FNiagaraDebugHUDSettingsData::SystemVariables' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemTextOptions) == 0x0000B0, "Member 'FNiagaraDebugHUDSettingsData::SystemTextOptions' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticleVariables) == 0x0000C8, "Member 'FNiagaraDebugHUDSettingsData::bShowParticleVariables' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bEnableGpuParticleReadback) == 0x0000C9, "Member 'FNiagaraDebugHUDSettingsData::bEnableGpuParticleReadback' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticleIndex) == 0x0000CA, "Member 'FNiagaraDebugHUDSettingsData::bShowParticleIndex' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticlesVariables) == 0x0000D0, "Member 'FNiagaraDebugHUDSettingsData::ParticlesVariables' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleTextOptions) == 0x0000E0, "Member 'FNiagaraDebugHUDSettingsData::ParticleTextOptions' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticlesVariablesWithSystem) == 0x0000F8, "Member 'FNiagaraDebugHUDSettingsData::bShowParticlesVariablesWithSystem' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticleVariablesVertical) == 0x0000F9, "Member 'FNiagaraDebugHUDSettingsData::bShowParticleVariablesVertical' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUseMaxParticlesToDisplay) == 0x0000FA, "Member 'FNiagaraDebugHUDSettingsData::bUseMaxParticlesToDisplay' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUseParticleDisplayClip) == 0x0000FB, "Member 'FNiagaraDebugHUDSettingsData::bUseParticleDisplayClip' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleDisplayClip) == 0x000100, "Member 'FNiagaraDebugHUDSettingsData::ParticleDisplayClip' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUseParticleDisplayCenterRadius) == 0x000110, "Member 'FNiagaraDebugHUDSettingsData::bUseParticleDisplayCenterRadius' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleDisplayCenterRadius) == 0x000114, "Member 'FNiagaraDebugHUDSettingsData::ParticleDisplayCenterRadius' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MaxParticlesToDisplay) == 0x000118, "Member 'FNiagaraDebugHUDSettingsData::MaxParticlesToDisplay' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfReportFrames) == 0x00011C, "Member 'FNiagaraDebugHUDSettingsData::PerfReportFrames' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfSampleMode) == 0x000120, "Member 'FNiagaraDebugHUDSettingsData::PerfSampleMode' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphMode) == 0x000124, "Member 'FNiagaraDebugHUDSettingsData::PerfGraphMode' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfHistoryFrames) == 0x000128, "Member 'FNiagaraDebugHUDSettingsData::PerfHistoryFrames' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphTimeRange) == 0x00012C, "Member 'FNiagaraDebugHUDSettingsData::PerfGraphTimeRange' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphSize) == 0x000130, "Member 'FNiagaraDebugHUDSettingsData::PerfGraphSize' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphAxisColor) == 0x000140, "Member 'FNiagaraDebugHUDSettingsData::PerfGraphAxisColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bEnableSmoothing) == 0x000150, "Member 'FNiagaraDebugHUDSettingsData::bEnableSmoothing' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SmoothingWidth) == 0x000154, "Member 'FNiagaraDebugHUDSettingsData::SmoothingWidth' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DefaultBackgroundColor) == 0x000158, "Member 'FNiagaraDebugHUDSettingsData::DefaultBackgroundColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewHeadingColor) == 0x000168, "Member 'FNiagaraDebugHUDSettingsData::OverviewHeadingColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewDetailColor) == 0x000178, "Member 'FNiagaraDebugHUDSettingsData::OverviewDetailColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewDetailHighlightColor) == 0x000188, "Member 'FNiagaraDebugHUDSettingsData::OverviewDetailHighlightColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, InWorldErrorTextColor) == 0x000198, "Member 'FNiagaraDebugHUDSettingsData::InWorldErrorTextColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, InWorldTextColor) == 0x0001A8, "Member 'FNiagaraDebugHUDSettingsData::InWorldTextColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageInfoTextColor) == 0x0001B8, "Member 'FNiagaraDebugHUDSettingsData::MessageInfoTextColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageWarningTextColor) == 0x0001C8, "Member 'FNiagaraDebugHUDSettingsData::MessageWarningTextColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageErrorTextColor) == 0x0001D8, "Member 'FNiagaraDebugHUDSettingsData::MessageErrorTextColor' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorTableOpacity) == 0x0001E8, "Member 'FNiagaraDebugHUDSettingsData::SystemColorTableOpacity' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorSeed) == 0x0001EC, "Member 'FNiagaraDebugHUDSettingsData::SystemColorSeed' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorHSVMin) == 0x0001F0, "Member 'FNiagaraDebugHUDSettingsData::SystemColorHSVMin' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorHSVMax) == 0x000208, "Member 'FNiagaraDebugHUDSettingsData::SystemColorHSVMax' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackMode) == 0x000220, "Member 'FNiagaraDebugHUDSettingsData::PlaybackMode' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bPlaybackRateEnabled) == 0x000221, "Member 'FNiagaraDebugHUDSettingsData::bPlaybackRateEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackRate) == 0x000224, "Member 'FNiagaraDebugHUDSettingsData::PlaybackRate' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bLoopTimeEnabled) == 0x000228, "Member 'FNiagaraDebugHUDSettingsData::bLoopTimeEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, LoopTime) == 0x00022C, "Member 'FNiagaraDebugHUDSettingsData::LoopTime' has a wrong offset!");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowGlobalBudgetInfo) == 0x000230, "Member 'FNiagaraDebugHUDSettingsData::bShowGlobalBudgetInfo' has a wrong offset!");

struct FNiagaraRequestSimpleClientInfoMessage final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FNiagaraRequestSimpleClientInfoMessage) == 0x000001, "Wrong alignment on FNiagaraRequestSimpleClientInfoMessage");
static_assert(sizeof(FNiagaraRequestSimpleClientInfoMessage) == 0x000001, "Wrong size on FNiagaraRequestSimpleClientInfoMessage");

struct FNiagaraOutlinerCaptureSettings final
{
public:
	bool                                          bTriggerCapture;
	uint8                                         Pad_1[0x3];
	uint32                                        CaptureDelayFrames;
	bool                                          bGatherPerfData;
	uint8                                         Pad_9[0x3];
	uint32                                        SimCacheCaptureFrames;
};
static_assert(alignof(FNiagaraOutlinerCaptureSettings) == 0x000004, "Wrong alignment on FNiagaraOutlinerCaptureSettings");
static_assert(sizeof(FNiagaraOutlinerCaptureSettings) == 0x000010, "Wrong size on FNiagaraOutlinerCaptureSettings");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, bTriggerCapture) == 0x000000, "Member 'FNiagaraOutlinerCaptureSettings::bTriggerCapture' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, CaptureDelayFrames) == 0x000004, "Member 'FNiagaraOutlinerCaptureSettings::CaptureDelayFrames' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, bGatherPerfData) == 0x000008, "Member 'FNiagaraOutlinerCaptureSettings::bGatherPerfData' has a wrong offset!");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, SimCacheCaptureFrames) == 0x00000C, "Member 'FNiagaraOutlinerCaptureSettings::SimCacheCaptureFrames' has a wrong offset!");

struct FNiagaraSimpleClientInfo final
{
public:
	TArray<class FString>                         Systems;
	TArray<class FString>                         Actors;
	TArray<class FString>                         Components;
	TArray<class FString>                         Emitters;
};
static_assert(alignof(FNiagaraSimpleClientInfo) == 0x000008, "Wrong alignment on FNiagaraSimpleClientInfo");
static_assert(sizeof(FNiagaraSimpleClientInfo) == 0x000040, "Wrong size on FNiagaraSimpleClientInfo");
static_assert(offsetof(FNiagaraSimpleClientInfo, Systems) == 0x000000, "Member 'FNiagaraSimpleClientInfo::Systems' has a wrong offset!");
static_assert(offsetof(FNiagaraSimpleClientInfo, Actors) == 0x000010, "Member 'FNiagaraSimpleClientInfo::Actors' has a wrong offset!");
static_assert(offsetof(FNiagaraSimpleClientInfo, Components) == 0x000020, "Member 'FNiagaraSimpleClientInfo::Components' has a wrong offset!");
static_assert(offsetof(FNiagaraSimpleClientInfo, Emitters) == 0x000030, "Member 'FNiagaraSimpleClientInfo::Emitters' has a wrong offset!");

struct FNiagaraSystemSimCacheCaptureRequest final
{
public:
	class FName                                   ComponentName;
	uint32                                        CaptureDelayFrames;
	uint32                                        CaptureFrames;
};
static_assert(alignof(FNiagaraSystemSimCacheCaptureRequest) == 0x000004, "Wrong alignment on FNiagaraSystemSimCacheCaptureRequest");
static_assert(sizeof(FNiagaraSystemSimCacheCaptureRequest) == 0x00000C, "Wrong size on FNiagaraSystemSimCacheCaptureRequest");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, ComponentName) == 0x000000, "Member 'FNiagaraSystemSimCacheCaptureRequest::ComponentName' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, CaptureDelayFrames) == 0x000004, "Member 'FNiagaraSystemSimCacheCaptureRequest::CaptureDelayFrames' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, CaptureFrames) == 0x000008, "Member 'FNiagaraSystemSimCacheCaptureRequest::CaptureFrames' has a wrong offset!");

struct FNiagaraSystemSimCacheCaptureReply final
{
public:
	class FName                                   ComponentName;
	uint8                                         Pad_4[0x4];
	TArray<uint8>                                 SimCacheData;
};
static_assert(alignof(FNiagaraSystemSimCacheCaptureReply) == 0x000008, "Wrong alignment on FNiagaraSystemSimCacheCaptureReply");
static_assert(sizeof(FNiagaraSystemSimCacheCaptureReply) == 0x000018, "Wrong size on FNiagaraSystemSimCacheCaptureReply");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureReply, ComponentName) == 0x000000, "Member 'FNiagaraSystemSimCacheCaptureReply::ComponentName' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureReply, SimCacheData) == 0x000008, "Member 'FNiagaraSystemSimCacheCaptureReply::SimCacheData' has a wrong offset!");

struct FNiagaraGraphViewSettings final
{
public:
	struct FVector2D                              Location;
	float                                         Zoom;
	bool                                          bIsValid;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FNiagaraGraphViewSettings) == 0x000008, "Wrong alignment on FNiagaraGraphViewSettings");
static_assert(sizeof(FNiagaraGraphViewSettings) == 0x000018, "Wrong size on FNiagaraGraphViewSettings");
static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0x000000, "Member 'FNiagaraGraphViewSettings::Location' has a wrong offset!");
static_assert(offsetof(FNiagaraGraphViewSettings, Zoom) == 0x000010, "Member 'FNiagaraGraphViewSettings::Zoom' has a wrong offset!");
static_assert(offsetof(FNiagaraGraphViewSettings, bIsValid) == 0x000014, "Member 'FNiagaraGraphViewSettings::bIsValid' has a wrong offset!");

struct FNiagaraLinearRamp final
{
public:
	float                                         StartX;
	float                                         StartY;
	float                                         EndX;
	float                                         EndY;
};
static_assert(alignof(FNiagaraLinearRamp) == 0x000004, "Wrong alignment on FNiagaraLinearRamp");
static_assert(sizeof(FNiagaraLinearRamp) == 0x000010, "Wrong size on FNiagaraLinearRamp");
static_assert(offsetof(FNiagaraLinearRamp, StartX) == 0x000000, "Member 'FNiagaraLinearRamp::StartX' has a wrong offset!");
static_assert(offsetof(FNiagaraLinearRamp, StartY) == 0x000004, "Member 'FNiagaraLinearRamp::StartY' has a wrong offset!");
static_assert(offsetof(FNiagaraLinearRamp, EndX) == 0x000008, "Member 'FNiagaraLinearRamp::EndX' has a wrong offset!");
static_assert(offsetof(FNiagaraLinearRamp, EndY) == 0x00000C, "Member 'FNiagaraLinearRamp::EndY' has a wrong offset!");

struct FNiagaraGlobalBudgetScaling final
{
public:
	uint8                                         bCullByGlobalBudget : 1;
	uint8                                         bScaleMaxDistanceByGlobalBudgetUse : 1;
	uint8                                         bScaleMaxInstanceCountByGlobalBudgetUse : 1;
	uint8                                         bScaleSystemInstanceCountByGlobalBudgetUse : 1;
	uint8                                         Pad_1[0x3];
	float                                         MaxGlobalBudgetUsage;
	struct FNiagaraLinearRamp                     MaxDistanceScaleByGlobalBudgetUse;
	struct FNiagaraLinearRamp                     MaxInstanceCountScaleByGlobalBudgetUse;
	struct FNiagaraLinearRamp                     MaxSystemInstanceCountScaleByGlobalBudgetUse;
};
static_assert(alignof(FNiagaraGlobalBudgetScaling) == 0x000004, "Wrong alignment on FNiagaraGlobalBudgetScaling");
static_assert(sizeof(FNiagaraGlobalBudgetScaling) == 0x000038, "Wrong size on FNiagaraGlobalBudgetScaling");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxGlobalBudgetUsage) == 0x000004, "Member 'FNiagaraGlobalBudgetScaling::MaxGlobalBudgetUsage' has a wrong offset!");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxDistanceScaleByGlobalBudgetUse) == 0x000008, "Member 'FNiagaraGlobalBudgetScaling::MaxDistanceScaleByGlobalBudgetUse' has a wrong offset!");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxInstanceCountScaleByGlobalBudgetUse) == 0x000018, "Member 'FNiagaraGlobalBudgetScaling::MaxInstanceCountScaleByGlobalBudgetUse' has a wrong offset!");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxSystemInstanceCountScaleByGlobalBudgetUse) == 0x000028, "Member 'FNiagaraGlobalBudgetScaling::MaxSystemInstanceCountScaleByGlobalBudgetUse' has a wrong offset!");

struct FNiagaraSystemVisibilityCullingSettings final
{
public:
	uint8                                         bCullWhenNotRendered : 1;
	uint8                                         bCullByViewFrustum : 1;
	uint8                                         bAllowPreCullingByViewFrustum : 1;
	uint8                                         Pad_1[0x3];
	float                                         MaxTimeOutsideViewFrustum;
	float                                         MaxTimeWithoutRender;
};
static_assert(alignof(FNiagaraSystemVisibilityCullingSettings) == 0x000004, "Wrong alignment on FNiagaraSystemVisibilityCullingSettings");
static_assert(sizeof(FNiagaraSystemVisibilityCullingSettings) == 0x00000C, "Wrong size on FNiagaraSystemVisibilityCullingSettings");
static_assert(offsetof(FNiagaraSystemVisibilityCullingSettings, MaxTimeOutsideViewFrustum) == 0x000004, "Member 'FNiagaraSystemVisibilityCullingSettings::MaxTimeOutsideViewFrustum' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemVisibilityCullingSettings, MaxTimeWithoutRender) == 0x000008, "Member 'FNiagaraSystemVisibilityCullingSettings::MaxTimeWithoutRender' has a wrong offset!");

struct FNiagaraDeviceProfileStateEntry final
{
public:
	class FName                                   ProfileName;
	uint32                                        QualityLevelMask;
	uint32                                        SetQualityLevelMask;
};
static_assert(alignof(FNiagaraDeviceProfileStateEntry) == 0x000004, "Wrong alignment on FNiagaraDeviceProfileStateEntry");
static_assert(sizeof(FNiagaraDeviceProfileStateEntry) == 0x00000C, "Wrong size on FNiagaraDeviceProfileStateEntry");
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0x000000, "Member 'FNiagaraDeviceProfileStateEntry::ProfileName' has a wrong offset!");
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, QualityLevelMask) == 0x000004, "Member 'FNiagaraDeviceProfileStateEntry::QualityLevelMask' has a wrong offset!");
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, SetQualityLevelMask) == 0x000008, "Member 'FNiagaraDeviceProfileStateEntry::SetQualityLevelMask' has a wrong offset!");

struct alignas(0x08) FNiagaraPlatformSetCVarCondition final
{
public:
	class FName                                   CVarName;
	ENiagaraCVarConditionResponse                 PassResponse;
	ENiagaraCVarConditionResponse                 FailResponse;
	bool                                          Value;
	uint8                                         Pad_7[0x1];
	int32                                         MinInt;
	int32                                         MaxInt;
	float                                         MinFloat;
	float                                         MaxFloat;
	uint8                                         bUseMinInt : 1;
	uint8                                         bUseMaxInt : 1;
	uint8                                         bUseMinFloat : 1;
	uint8                                         bUseMaxFloat : 1;
	uint8                                         Pad_19[0x17];
};
static_assert(alignof(FNiagaraPlatformSetCVarCondition) == 0x000008, "Wrong alignment on FNiagaraPlatformSetCVarCondition");
static_assert(sizeof(FNiagaraPlatformSetCVarCondition) == 0x000030, "Wrong size on FNiagaraPlatformSetCVarCondition");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0x000000, "Member 'FNiagaraPlatformSetCVarCondition::CVarName' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, PassResponse) == 0x000004, "Member 'FNiagaraPlatformSetCVarCondition::PassResponse' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, FailResponse) == 0x000005, "Member 'FNiagaraPlatformSetCVarCondition::FailResponse' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, Value) == 0x000006, "Member 'FNiagaraPlatformSetCVarCondition::Value' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MinInt) == 0x000008, "Member 'FNiagaraPlatformSetCVarCondition::MinInt' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MaxInt) == 0x00000C, "Member 'FNiagaraPlatformSetCVarCondition::MaxInt' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MinFloat) == 0x000010, "Member 'FNiagaraPlatformSetCVarCondition::MinFloat' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MaxFloat) == 0x000014, "Member 'FNiagaraPlatformSetCVarCondition::MaxFloat' has a wrong offset!");

struct FNiagaraPlatformSet final
{
public:
	int32                                         QualityLevelMask;
	uint8                                         Pad_4[0x4];
	TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
	TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FNiagaraPlatformSet) == 0x000008, "Wrong alignment on FNiagaraPlatformSet");
static_assert(sizeof(FNiagaraPlatformSet) == 0x000030, "Wrong size on FNiagaraPlatformSet");
static_assert(offsetof(FNiagaraPlatformSet, QualityLevelMask) == 0x000000, "Member 'FNiagaraPlatformSet::QualityLevelMask' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0x000008, "Member 'FNiagaraPlatformSet::DeviceProfileStates' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 0x000018, "Member 'FNiagaraPlatformSet::CVarConditions' has a wrong offset!");

struct FNiagaraSystemScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                    Platforms;
	uint8                                         bCullByDistance : 1;
	uint8                                         bCullMaxInstanceCount : 1;
	uint8                                         bCullPerSystemMaxInstanceCount : 1;
	uint8                                         Pad_31[0x3];
	float                                         MaxDistance;
	uint8                                         bCullByMaxTimeWithoutRender : 1;
	uint8                                         Pad_39[0x3];
	int32                                         MaxInstances;
	int32                                         MaxSystemInstances;
	float                                         MaxTimeWithoutRender;
	ENiagaraCullProxyMode                         CullProxyMode;
	int32                                         MaxSystemProxies;
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling;
	struct FNiagaraGlobalBudgetScaling            BudgetScaling;
	uint8                                         Pad_94[0x4];
};
static_assert(alignof(FNiagaraSystemScalabilitySettings) == 0x000008, "Wrong alignment on FNiagaraSystemScalabilitySettings");
static_assert(sizeof(FNiagaraSystemScalabilitySettings) == 0x000098, "Wrong size on FNiagaraSystemScalabilitySettings");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0x000000, "Member 'FNiagaraSystemScalabilitySettings::Platforms' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxDistance) == 0x000034, "Member 'FNiagaraSystemScalabilitySettings::MaxDistance' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxInstances) == 0x00003C, "Member 'FNiagaraSystemScalabilitySettings::MaxInstances' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxSystemInstances) == 0x000040, "Member 'FNiagaraSystemScalabilitySettings::MaxSystemInstances' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxTimeWithoutRender) == 0x000044, "Member 'FNiagaraSystemScalabilitySettings::MaxTimeWithoutRender' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, CullProxyMode) == 0x000048, "Member 'FNiagaraSystemScalabilitySettings::CullProxyMode' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxSystemProxies) == 0x00004C, "Member 'FNiagaraSystemScalabilitySettings::MaxSystemProxies' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, VisibilityCulling) == 0x000050, "Member 'FNiagaraSystemScalabilitySettings::VisibilityCulling' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, BudgetScaling) == 0x00005C, "Member 'FNiagaraSystemScalabilitySettings::BudgetScaling' has a wrong offset!");

struct FNiagaraSystemScalabilitySettingsArray final
{
public:
	TArray<struct FNiagaraSystemScalabilitySettings> Settings;
};
static_assert(alignof(FNiagaraSystemScalabilitySettingsArray) == 0x000008, "Wrong alignment on FNiagaraSystemScalabilitySettingsArray");
static_assert(sizeof(FNiagaraSystemScalabilitySettingsArray) == 0x000010, "Wrong size on FNiagaraSystemScalabilitySettingsArray");
static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0x000000, "Member 'FNiagaraSystemScalabilitySettingsArray::Settings' has a wrong offset!");

struct FNiagaraSystemScalabilityOverride final : public FNiagaraSystemScalabilitySettings
{
public:
	uint8                                         bOverrideDistanceSettings : 1;
	uint8                                         bOverrideInstanceCountSettings : 1;
	uint8                                         bOverridePerSystemInstanceCountSettings : 1;
	uint8                                         bOverrideVisibilitySettings : 1;
	uint8                                         bOverrideGlobalBudgetScalingSettings : 1;
	uint8                                         bOverrideCullProxySettings : 1;
	uint8                                         Pad_99[0x7];
};
static_assert(alignof(FNiagaraSystemScalabilityOverride) == 0x000008, "Wrong alignment on FNiagaraSystemScalabilityOverride");
static_assert(sizeof(FNiagaraSystemScalabilityOverride) == 0x0000A0, "Wrong size on FNiagaraSystemScalabilityOverride");

struct FNiagaraEmitterScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                    Platforms;
	uint8                                         bScaleSpawnCount : 1;
	uint8                                         Pad_31[0x3];
	float                                         SpawnCountScale;
};
static_assert(alignof(FNiagaraEmitterScalabilitySettings) == 0x000008, "Wrong alignment on FNiagaraEmitterScalabilitySettings");
static_assert(sizeof(FNiagaraEmitterScalabilitySettings) == 0x000038, "Wrong size on FNiagaraEmitterScalabilitySettings");
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0x000000, "Member 'FNiagaraEmitterScalabilitySettings::Platforms' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, SpawnCountScale) == 0x000034, "Member 'FNiagaraEmitterScalabilitySettings::SpawnCountScale' has a wrong offset!");

struct FNiagaraEmitterScalabilitySettingsArray final
{
public:
	TArray<struct FNiagaraEmitterScalabilitySettings> Settings;
};
static_assert(alignof(FNiagaraEmitterScalabilitySettingsArray) == 0x000008, "Wrong alignment on FNiagaraEmitterScalabilitySettingsArray");
static_assert(sizeof(FNiagaraEmitterScalabilitySettingsArray) == 0x000010, "Wrong size on FNiagaraEmitterScalabilitySettingsArray");
static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0x000000, "Member 'FNiagaraEmitterScalabilitySettingsArray::Settings' has a wrong offset!");

struct FNiagaraEmitterScalabilityOverride final : public FNiagaraEmitterScalabilitySettings
{
public:
	uint8                                         bOverrideSpawnCountScale : 1;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FNiagaraEmitterScalabilityOverride) == 0x000008, "Wrong alignment on FNiagaraEmitterScalabilityOverride");
static_assert(sizeof(FNiagaraEmitterScalabilityOverride) == 0x000040, "Wrong size on FNiagaraEmitterScalabilityOverride");

struct FNiagaraEmitterScalabilityOverrides final
{
public:
	TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;
};
static_assert(alignof(FNiagaraEmitterScalabilityOverrides) == 0x000008, "Wrong alignment on FNiagaraEmitterScalabilityOverrides");
static_assert(sizeof(FNiagaraEmitterScalabilityOverrides) == 0x000010, "Wrong size on FNiagaraEmitterScalabilityOverrides");
static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0x000000, "Member 'FNiagaraEmitterScalabilityOverrides::Overrides' has a wrong offset!");

struct FNiagaraEventReceiverProperties final
{
public:
	class FName                                   Name;
	class FName                                   SourceEventGenerator;
	class FName                                   SourceEmitter;
};
static_assert(alignof(FNiagaraEventReceiverProperties) == 0x000004, "Wrong alignment on FNiagaraEventReceiverProperties");
static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x00000C, "Wrong size on FNiagaraEventReceiverProperties");
static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0x000000, "Member 'FNiagaraEventReceiverProperties::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 0x000004, "Member 'FNiagaraEventReceiverProperties::SourceEventGenerator' has a wrong offset!");
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 0x000008, "Member 'FNiagaraEventReceiverProperties::SourceEmitter' has a wrong offset!");

struct FNiagaraEventGeneratorProperties final
{
public:
	int32                                         MaxEventsPerFrame;
	class FName                                   ID;
	struct FNiagaraDataSetCompiledData            DataSetCompiledData;
};
static_assert(alignof(FNiagaraEventGeneratorProperties) == 0x000008, "Wrong alignment on FNiagaraEventGeneratorProperties");
static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x000048, "Wrong size on FNiagaraEventGeneratorProperties");
static_assert(offsetof(FNiagaraEventGeneratorProperties, MaxEventsPerFrame) == 0x000000, "Member 'FNiagaraEventGeneratorProperties::MaxEventsPerFrame' has a wrong offset!");
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 0x000004, "Member 'FNiagaraEventGeneratorProperties::ID' has a wrong offset!");
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 0x000008, "Member 'FNiagaraEventGeneratorProperties::DataSetCompiledData' has a wrong offset!");

struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                         Script;
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;
};
static_assert(alignof(FNiagaraEmitterScriptProperties) == 0x000008, "Wrong alignment on FNiagaraEmitterScriptProperties");
static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x000028, "Wrong size on FNiagaraEmitterScriptProperties");
static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0x000000, "Member 'FNiagaraEmitterScriptProperties::Script' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 0x000008, "Member 'FNiagaraEmitterScriptProperties::EventReceivers' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 0x000018, "Member 'FNiagaraEmitterScriptProperties::EventGenerators' has a wrong offset!");

struct FNiagaraEventScriptProperties final : public FNiagaraEmitterScriptProperties
{
public:
	EScriptExecutionMode                          ExecutionMode;
	uint8                                         Pad_29[0x3];
	uint32                                        SpawnNumber;
	uint32                                        MaxEventsPerFrame;
	struct FGuid                                  SourceEmitterID;
	class FName                                   SourceEventName;
	bool                                          bRandomSpawnNumber;
	uint8                                         Pad_49[0x3];
	uint32                                        MinSpawnNumber;
	bool                                          UpdateAttributeInitialValues;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FNiagaraEventScriptProperties) == 0x000008, "Wrong alignment on FNiagaraEventScriptProperties");
static_assert(sizeof(FNiagaraEventScriptProperties) == 0x000058, "Wrong size on FNiagaraEventScriptProperties");
static_assert(offsetof(FNiagaraEventScriptProperties, ExecutionMode) == 0x000028, "Member 'FNiagaraEventScriptProperties::ExecutionMode' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, SpawnNumber) == 0x00002C, "Member 'FNiagaraEventScriptProperties::SpawnNumber' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, MaxEventsPerFrame) == 0x000030, "Member 'FNiagaraEventScriptProperties::MaxEventsPerFrame' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 0x000034, "Member 'FNiagaraEventScriptProperties::SourceEmitterID' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 0x000044, "Member 'FNiagaraEventScriptProperties::SourceEventName' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, bRandomSpawnNumber) == 0x000048, "Member 'FNiagaraEventScriptProperties::bRandomSpawnNumber' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, MinSpawnNumber) == 0x00004C, "Member 'FNiagaraEventScriptProperties::MinSpawnNumber' has a wrong offset!");
static_assert(offsetof(FNiagaraEventScriptProperties, UpdateAttributeInitialValues) == 0x000050, "Member 'FNiagaraEventScriptProperties::UpdateAttributeInitialValues' has a wrong offset!");

struct FNiagaraDetailsLevelScaleOverrides final
{
public:
	float                                         Low;
	float                                         Medium;
	float                                         High;
	float                                         Epic;
	float                                         Cine;
};
static_assert(alignof(FNiagaraDetailsLevelScaleOverrides) == 0x000004, "Wrong alignment on FNiagaraDetailsLevelScaleOverrides");
static_assert(sizeof(FNiagaraDetailsLevelScaleOverrides) == 0x000014, "Wrong size on FNiagaraDetailsLevelScaleOverrides");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Low) == 0x000000, "Member 'FNiagaraDetailsLevelScaleOverrides::Low' has a wrong offset!");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Medium) == 0x000004, "Member 'FNiagaraDetailsLevelScaleOverrides::Medium' has a wrong offset!");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, High) == 0x000008, "Member 'FNiagaraDetailsLevelScaleOverrides::High' has a wrong offset!");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Epic) == 0x00000C, "Member 'FNiagaraDetailsLevelScaleOverrides::Epic' has a wrong offset!");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Cine) == 0x000010, "Member 'FNiagaraDetailsLevelScaleOverrides::Cine' has a wrong offset!");

struct FNiagaraAssetVersion final
{
public:
	int32                                         MajorVersion;
	int32                                         MinorVersion;
	struct FGuid                                  VersionGuid;
	bool                                          bIsVisibleInVersionSelector;
	uint8                                         Pad_19[0x3];
};
static_assert(alignof(FNiagaraAssetVersion) == 0x000004, "Wrong alignment on FNiagaraAssetVersion");
static_assert(sizeof(FNiagaraAssetVersion) == 0x00001C, "Wrong size on FNiagaraAssetVersion");
static_assert(offsetof(FNiagaraAssetVersion, MajorVersion) == 0x000000, "Member 'FNiagaraAssetVersion::MajorVersion' has a wrong offset!");
static_assert(offsetof(FNiagaraAssetVersion, MinorVersion) == 0x000004, "Member 'FNiagaraAssetVersion::MinorVersion' has a wrong offset!");
static_assert(offsetof(FNiagaraAssetVersion, VersionGuid) == 0x000008, "Member 'FNiagaraAssetVersion::VersionGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraAssetVersion, bIsVisibleInVersionSelector) == 0x000018, "Member 'FNiagaraAssetVersion::bIsVisibleInVersionSelector' has a wrong offset!");

struct FNiagaraVariableWithOffset final : public FNiagaraVariableBase
{
public:
	int32                                         Offset;
	uint8                                         Pad_C[0x4];
	struct FNiagaraLwcStructConverter             StructConverter;
};
static_assert(alignof(FNiagaraVariableWithOffset) == 0x000008, "Wrong alignment on FNiagaraVariableWithOffset");
static_assert(sizeof(FNiagaraVariableWithOffset) == 0x000028, "Wrong size on FNiagaraVariableWithOffset");
static_assert(offsetof(FNiagaraVariableWithOffset, Offset) == 0x000008, "Member 'FNiagaraVariableWithOffset::Offset' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableWithOffset, StructConverter) == 0x000010, "Member 'FNiagaraVariableWithOffset::StructConverter' has a wrong offset!");

struct FNiagaraPositionSource final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	struct FVector                                Value;
};
static_assert(alignof(FNiagaraPositionSource) == 0x000008, "Wrong alignment on FNiagaraPositionSource");
static_assert(sizeof(FNiagaraPositionSource) == 0x000020, "Wrong size on FNiagaraPositionSource");
static_assert(offsetof(FNiagaraPositionSource, Name) == 0x000000, "Member 'FNiagaraPositionSource::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraPositionSource, Value) == 0x000008, "Member 'FNiagaraPositionSource::Value' has a wrong offset!");

struct FNiagaraParameterStore
{
public:
	uint8                                         Pad_0[0x8];
	TWeakObjectPtr<class UObject>                 Owner;
	TArray<struct FNiagaraVariableWithOffset>     SortedParameterOffsets;
	TArray<uint8>                                 ParameterData;
	TArray<class UNiagaraDataInterface*>          DataInterfaces;
	TArray<class UObject*>                        UObjects;
	TArray<struct FNiagaraPositionSource>         OriginalPositionData;
	uint8                                         Pad_60[0x28];
};
static_assert(alignof(FNiagaraParameterStore) == 0x000008, "Wrong alignment on FNiagaraParameterStore");
static_assert(sizeof(FNiagaraParameterStore) == 0x000088, "Wrong size on FNiagaraParameterStore");
static_assert(offsetof(FNiagaraParameterStore, Owner) == 0x000008, "Member 'FNiagaraParameterStore::Owner' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 0x000010, "Member 'FNiagaraParameterStore::SortedParameterOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 0x000020, "Member 'FNiagaraParameterStore::ParameterData' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 0x000030, "Member 'FNiagaraParameterStore::DataInterfaces' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 0x000040, "Member 'FNiagaraParameterStore::UObjects' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterStore, OriginalPositionData) == 0x000050, "Member 'FNiagaraParameterStore::OriginalPositionData' has a wrong offset!");

struct FVersionedNiagaraEmitterData final
{
public:
	struct FNiagaraAssetVersion                   Version;
	bool                                          bDeprecated;
	uint8                                         Pad_1D[0x3];
	class FText                                   DeprecationMessage;
	bool                                          bLocalSpace;
	bool                                          bDeterminism;
	uint8                                         Pad_3A[0x2];
	int32                                         RandomSeed;
	uint8                                         bInterpolatedSpawning : 1;
	uint8                                         Pad_41[0x3];
	ENiagaraSimTarget                             SimTarget;
	ENiagaraEmitterCalculateBoundMode             CalculateBoundsMode;
	uint8                                         Pad_46[0x2];
	struct FBox                                   FixedBounds;
	uint8                                         bRequiresPersistentIDs : 1;
	uint8                                         bCombineEventSpawn : 1;
	uint8                                         Pad_81[0x7];
	TArray<struct FNiagaraEventScriptProperties>  EventHandlerScriptProps;
	struct FNiagaraPlatformSet                    Platforms;
	struct FNiagaraEmitterScalabilityOverrides    ScalabilityOverrides;
	uint8                                         bLimitDeltaTime : 1;
	uint8                                         Pad_D9[0x3];
	int32                                         MaxGPUParticlesSpawnPerFrame;
	float                                         MaxDeltaTimePerTick;
	EParticleAllocationMode                       AllocationMode;
	uint8                                         Pad_E5[0x3];
	int32                                         PreAllocationCount;
	uint8                                         Pad_EC[0x4];
	struct FNiagaraEmitterScriptProperties        UpdateScriptProps;
	struct FNiagaraEmitterScriptProperties        SpawnScriptProps;
	struct FNiagaraParameterStore                 RendererBindings;
	TArray<class UNiagaraRendererProperties*>     RendererProperties;
	TArray<class UNiagaraSimulationStageBase*>    SimulationStages;
	class UNiagaraScript*                         GPUComputeScript;
	TArray<class FName>                           SharedEventGeneratorIds;
	struct FNiagaraEmitterScalabilitySettings     CurrentScalabilitySettings;
	uint8                                         Pad_238[0xB0];
};
static_assert(alignof(FVersionedNiagaraEmitterData) == 0x000008, "Wrong alignment on FVersionedNiagaraEmitterData");
static_assert(sizeof(FVersionedNiagaraEmitterData) == 0x0002E8, "Wrong size on FVersionedNiagaraEmitterData");
static_assert(offsetof(FVersionedNiagaraEmitterData, Version) == 0x000000, "Member 'FVersionedNiagaraEmitterData::Version' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, bDeprecated) == 0x00001C, "Member 'FVersionedNiagaraEmitterData::bDeprecated' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, DeprecationMessage) == 0x000020, "Member 'FVersionedNiagaraEmitterData::DeprecationMessage' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, bLocalSpace) == 0x000038, "Member 'FVersionedNiagaraEmitterData::bLocalSpace' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, bDeterminism) == 0x000039, "Member 'FVersionedNiagaraEmitterData::bDeterminism' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, RandomSeed) == 0x00003C, "Member 'FVersionedNiagaraEmitterData::RandomSeed' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, SimTarget) == 0x000044, "Member 'FVersionedNiagaraEmitterData::SimTarget' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, CalculateBoundsMode) == 0x000045, "Member 'FVersionedNiagaraEmitterData::CalculateBoundsMode' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, FixedBounds) == 0x000048, "Member 'FVersionedNiagaraEmitterData::FixedBounds' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, EventHandlerScriptProps) == 0x000088, "Member 'FVersionedNiagaraEmitterData::EventHandlerScriptProps' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, Platforms) == 0x000098, "Member 'FVersionedNiagaraEmitterData::Platforms' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, ScalabilityOverrides) == 0x0000C8, "Member 'FVersionedNiagaraEmitterData::ScalabilityOverrides' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, MaxGPUParticlesSpawnPerFrame) == 0x0000DC, "Member 'FVersionedNiagaraEmitterData::MaxGPUParticlesSpawnPerFrame' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, MaxDeltaTimePerTick) == 0x0000E0, "Member 'FVersionedNiagaraEmitterData::MaxDeltaTimePerTick' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, AllocationMode) == 0x0000E4, "Member 'FVersionedNiagaraEmitterData::AllocationMode' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, PreAllocationCount) == 0x0000E8, "Member 'FVersionedNiagaraEmitterData::PreAllocationCount' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, UpdateScriptProps) == 0x0000F0, "Member 'FVersionedNiagaraEmitterData::UpdateScriptProps' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, SpawnScriptProps) == 0x000118, "Member 'FVersionedNiagaraEmitterData::SpawnScriptProps' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererBindings) == 0x000140, "Member 'FVersionedNiagaraEmitterData::RendererBindings' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererProperties) == 0x0001C8, "Member 'FVersionedNiagaraEmitterData::RendererProperties' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, SimulationStages) == 0x0001D8, "Member 'FVersionedNiagaraEmitterData::SimulationStages' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, GPUComputeScript) == 0x0001E8, "Member 'FVersionedNiagaraEmitterData::GPUComputeScript' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, SharedEventGeneratorIds) == 0x0001F0, "Member 'FVersionedNiagaraEmitterData::SharedEventGeneratorIds' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitterData, CurrentScalabilitySettings) == 0x000200, "Member 'FVersionedNiagaraEmitterData::CurrentScalabilitySettings' has a wrong offset!");

struct FVersionedNiagaraEmitter final
{
public:
	class UNiagaraEmitter*                        Emitter;
	struct FGuid                                  Version;
};
static_assert(alignof(FVersionedNiagaraEmitter) == 0x000008, "Wrong alignment on FVersionedNiagaraEmitter");
static_assert(sizeof(FVersionedNiagaraEmitter) == 0x000018, "Wrong size on FVersionedNiagaraEmitter");
static_assert(offsetof(FVersionedNiagaraEmitter, Emitter) == 0x000000, "Member 'FVersionedNiagaraEmitter::Emitter' has a wrong offset!");
static_assert(offsetof(FVersionedNiagaraEmitter, Version) == 0x000008, "Member 'FVersionedNiagaraEmitter::Version' has a wrong offset!");

struct FNiagaraEmitterHandle final
{
public:
	struct FGuid                                  ID;
	class FName                                   IdName;
	bool                                          bIsEnabled;
	uint8                                         Pad_15[0x3];
	class FName                                   Name;
	uint8                                         Pad_1C[0x4];
	class UNiagaraEmitter*                        Instance;
	struct FVersionedNiagaraEmitter               VersionedInstance;
};
static_assert(alignof(FNiagaraEmitterHandle) == 0x000008, "Wrong alignment on FNiagaraEmitterHandle");
static_assert(sizeof(FNiagaraEmitterHandle) == 0x000040, "Wrong size on FNiagaraEmitterHandle");
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 0x000000, "Member 'FNiagaraEmitterHandle::ID' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 0x000010, "Member 'FNiagaraEmitterHandle::IdName' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterHandle, bIsEnabled) == 0x000014, "Member 'FNiagaraEmitterHandle::bIsEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0x000018, "Member 'FNiagaraEmitterHandle::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterHandle, Instance) == 0x000020, "Member 'FNiagaraEmitterHandle::Instance' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterHandle, VersionedInstance) == 0x000028, "Member 'FNiagaraEmitterHandle::VersionedInstance' has a wrong offset!");

struct FNiagaraCollisionEventPayload final
{
public:
	struct FVector                                CollisionPos;
	struct FVector                                CollisionNormal;
	struct FVector                                CollisionVelocity;
	int32                                         ParticleIndex;
	int32                                         PhysicalMaterialIndex;
};
static_assert(alignof(FNiagaraCollisionEventPayload) == 0x000008, "Wrong alignment on FNiagaraCollisionEventPayload");
static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x000050, "Wrong size on FNiagaraCollisionEventPayload");
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0x000000, "Member 'FNiagaraCollisionEventPayload::CollisionPos' has a wrong offset!");
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 0x000018, "Member 'FNiagaraCollisionEventPayload::CollisionNormal' has a wrong offset!");
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 0x000030, "Member 'FNiagaraCollisionEventPayload::CollisionVelocity' has a wrong offset!");
static_assert(offsetof(FNiagaraCollisionEventPayload, ParticleIndex) == 0x000048, "Member 'FNiagaraCollisionEventPayload::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FNiagaraCollisionEventPayload, PhysicalMaterialIndex) == 0x00004C, "Member 'FNiagaraCollisionEventPayload::PhysicalMaterialIndex' has a wrong offset!");

struct FNiagaraMeshMaterialOverride final
{
public:
	class UMaterialInterface*                     ExplicitMat;
	struct FNiagaraUserParameterBinding           UserParamBinding;
};
static_assert(alignof(FNiagaraMeshMaterialOverride) == 0x000008, "Wrong alignment on FNiagaraMeshMaterialOverride");
static_assert(sizeof(FNiagaraMeshMaterialOverride) == 0x000020, "Wrong size on FNiagaraMeshMaterialOverride");
static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0x000000, "Member 'FNiagaraMeshMaterialOverride::ExplicitMat' has a wrong offset!");
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 0x000008, "Member 'FNiagaraMeshMaterialOverride::UserParamBinding' has a wrong offset!");

struct FNiagaraMeshRendererMeshProperties final
{
public:
	class UStaticMesh*                            Mesh;
	struct FNiagaraUserParameterBinding           UserParamBinding;
	struct FVector                                Scale;
	struct FRotator                               Rotation;
	struct FVector                                PivotOffset;
	ENiagaraMeshPivotOffsetSpace                  PivotOffsetSpace;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(FNiagaraMeshRendererMeshProperties) == 0x000008, "Wrong alignment on FNiagaraMeshRendererMeshProperties");
static_assert(sizeof(FNiagaraMeshRendererMeshProperties) == 0x000070, "Wrong size on FNiagaraMeshRendererMeshProperties");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Mesh) == 0x000000, "Member 'FNiagaraMeshRendererMeshProperties::Mesh' has a wrong offset!");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, UserParamBinding) == 0x000008, "Member 'FNiagaraMeshRendererMeshProperties::UserParamBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Scale) == 0x000020, "Member 'FNiagaraMeshRendererMeshProperties::Scale' has a wrong offset!");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Rotation) == 0x000038, "Member 'FNiagaraMeshRendererMeshProperties::Rotation' has a wrong offset!");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffset) == 0x000050, "Member 'FNiagaraMeshRendererMeshProperties::PivotOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace) == 0x000068, "Member 'FNiagaraMeshRendererMeshProperties::PivotOffsetSpace' has a wrong offset!");

struct FParameterDefinitionsSubscription final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FParameterDefinitionsSubscription) == 0x000001, "Wrong alignment on FParameterDefinitionsSubscription");
static_assert(sizeof(FParameterDefinitionsSubscription) == 0x000001, "Wrong size on FParameterDefinitionsSubscription");

struct FNiagaraParameters final
{
public:
	TArray<struct FNiagaraVariable>               Parameters;
};
static_assert(alignof(FNiagaraParameters) == 0x000008, "Wrong alignment on FNiagaraParameters");
static_assert(sizeof(FNiagaraParameters) == 0x000010, "Wrong size on FNiagaraParameters");
static_assert(offsetof(FNiagaraParameters, Parameters) == 0x000000, "Member 'FNiagaraParameters::Parameters' has a wrong offset!");

struct FNiagaraBoundParameter final
{
public:
	struct FNiagaraVariable                       Parameter;
	int32                                         SrcOffset;
	int32                                         DestOffset;
};
static_assert(alignof(FNiagaraBoundParameter) == 0x000008, "Wrong alignment on FNiagaraBoundParameter");
static_assert(sizeof(FNiagaraBoundParameter) == 0x000020, "Wrong size on FNiagaraBoundParameter");
static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0x000000, "Member 'FNiagaraBoundParameter::Parameter' has a wrong offset!");
static_assert(offsetof(FNiagaraBoundParameter, SrcOffset) == 0x000018, "Member 'FNiagaraBoundParameter::SrcOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraBoundParameter, DestOffset) == 0x00001C, "Member 'FNiagaraBoundParameter::DestOffset' has a wrong offset!");

struct FNiagaraPerfBaselineStats final
{
public:
	float                                         PerInstanceAvg_GT;
	float                                         PerInstanceAvg_RT;
	float                                         PerInstanceMax_GT;
	float                                         PerInstanceMax_RT;
};
static_assert(alignof(FNiagaraPerfBaselineStats) == 0x000004, "Wrong alignment on FNiagaraPerfBaselineStats");
static_assert(sizeof(FNiagaraPerfBaselineStats) == 0x000010, "Wrong size on FNiagaraPerfBaselineStats");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceAvg_GT) == 0x000000, "Member 'FNiagaraPerfBaselineStats::PerInstanceAvg_GT' has a wrong offset!");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceAvg_RT) == 0x000004, "Member 'FNiagaraPerfBaselineStats::PerInstanceAvg_RT' has a wrong offset!");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceMax_GT) == 0x000008, "Member 'FNiagaraPerfBaselineStats::PerInstanceMax_GT' has a wrong offset!");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceMax_RT) == 0x00000C, "Member 'FNiagaraPerfBaselineStats::PerInstanceMax_RT' has a wrong offset!");

struct FNiagaraPlatformSetConflictEntry final
{
public:
	class FName                                   ProfileName;
	int32                                         QualityLevelMask;
};
static_assert(alignof(FNiagaraPlatformSetConflictEntry) == 0x000004, "Wrong alignment on FNiagaraPlatformSetConflictEntry");
static_assert(sizeof(FNiagaraPlatformSetConflictEntry) == 0x000008, "Wrong size on FNiagaraPlatformSetConflictEntry");
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0x000000, "Member 'FNiagaraPlatformSetConflictEntry::ProfileName' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, QualityLevelMask) == 0x000004, "Member 'FNiagaraPlatformSetConflictEntry::QualityLevelMask' has a wrong offset!");

struct FNiagaraPlatformSetConflictInfo final
{
public:
	int32                                         SetAIndex;
	int32                                         SetBIndex;
	TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;
};
static_assert(alignof(FNiagaraPlatformSetConflictInfo) == 0x000008, "Wrong alignment on FNiagaraPlatformSetConflictInfo");
static_assert(sizeof(FNiagaraPlatformSetConflictInfo) == 0x000018, "Wrong size on FNiagaraPlatformSetConflictInfo");
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, SetAIndex) == 0x000000, "Member 'FNiagaraPlatformSetConflictInfo::SetAIndex' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, SetBIndex) == 0x000004, "Member 'FNiagaraPlatformSetConflictInfo::SetBIndex' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 0x000008, "Member 'FNiagaraPlatformSetConflictInfo::Conflicts' has a wrong offset!");

struct FNiagaraPlatformSetRedirect final
{
public:
	TArray<class FName>                           ProfileNames;
	ENiagaraDeviceProfileRedirectMode             Mode;
	uint8                                         Pad_11[0x3];
	class FName                                   RedirectProfileName;
	struct FNiagaraPlatformSetCVarCondition       CVarConditionEnabled;
	struct FNiagaraPlatformSetCVarCondition       CVarConditionDisabled;
};
static_assert(alignof(FNiagaraPlatformSetRedirect) == 0x000008, "Wrong alignment on FNiagaraPlatformSetRedirect");
static_assert(sizeof(FNiagaraPlatformSetRedirect) == 0x000078, "Wrong size on FNiagaraPlatformSetRedirect");
static_assert(offsetof(FNiagaraPlatformSetRedirect, ProfileNames) == 0x000000, "Member 'FNiagaraPlatformSetRedirect::ProfileNames' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetRedirect, Mode) == 0x000010, "Member 'FNiagaraPlatformSetRedirect::Mode' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetRedirect, RedirectProfileName) == 0x000014, "Member 'FNiagaraPlatformSetRedirect::RedirectProfileName' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetRedirect, CVarConditionEnabled) == 0x000018, "Member 'FNiagaraPlatformSetRedirect::CVarConditionEnabled' has a wrong offset!");
static_assert(offsetof(FNiagaraPlatformSetRedirect, CVarConditionDisabled) == 0x000048, "Member 'FNiagaraPlatformSetRedirect::CVarConditionDisabled' has a wrong offset!");

struct FNiagaraRendererMaterialScalarParameter final
{
public:
	class FName                                   MaterialParameterName;
	float                                         Value;
};
static_assert(alignof(FNiagaraRendererMaterialScalarParameter) == 0x000004, "Wrong alignment on FNiagaraRendererMaterialScalarParameter");
static_assert(sizeof(FNiagaraRendererMaterialScalarParameter) == 0x000008, "Wrong size on FNiagaraRendererMaterialScalarParameter");
static_assert(offsetof(FNiagaraRendererMaterialScalarParameter, MaterialParameterName) == 0x000000, "Member 'FNiagaraRendererMaterialScalarParameter::MaterialParameterName' has a wrong offset!");
static_assert(offsetof(FNiagaraRendererMaterialScalarParameter, Value) == 0x000004, "Member 'FNiagaraRendererMaterialScalarParameter::Value' has a wrong offset!");

struct FNiagaraRendererMaterialVectorParameter final
{
public:
	class FName                                   MaterialParameterName;
	struct FLinearColor                           Value;
};
static_assert(alignof(FNiagaraRendererMaterialVectorParameter) == 0x000004, "Wrong alignment on FNiagaraRendererMaterialVectorParameter");
static_assert(sizeof(FNiagaraRendererMaterialVectorParameter) == 0x000014, "Wrong size on FNiagaraRendererMaterialVectorParameter");
static_assert(offsetof(FNiagaraRendererMaterialVectorParameter, MaterialParameterName) == 0x000000, "Member 'FNiagaraRendererMaterialVectorParameter::MaterialParameterName' has a wrong offset!");
static_assert(offsetof(FNiagaraRendererMaterialVectorParameter, Value) == 0x000004, "Member 'FNiagaraRendererMaterialVectorParameter::Value' has a wrong offset!");

struct FNiagaraRendererMaterialTextureParameter final
{
public:
	class FName                                   MaterialParameterName;
	uint8                                         Pad_4[0x4];
	class UTexture*                               Texture;
};
static_assert(alignof(FNiagaraRendererMaterialTextureParameter) == 0x000008, "Wrong alignment on FNiagaraRendererMaterialTextureParameter");
static_assert(sizeof(FNiagaraRendererMaterialTextureParameter) == 0x000010, "Wrong size on FNiagaraRendererMaterialTextureParameter");
static_assert(offsetof(FNiagaraRendererMaterialTextureParameter, MaterialParameterName) == 0x000000, "Member 'FNiagaraRendererMaterialTextureParameter::MaterialParameterName' has a wrong offset!");
static_assert(offsetof(FNiagaraRendererMaterialTextureParameter, Texture) == 0x000008, "Member 'FNiagaraRendererMaterialTextureParameter::Texture' has a wrong offset!");

struct FNiagaraRendererMaterialParameters final
{
public:
	TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings;
	TArray<struct FNiagaraRendererMaterialScalarParameter> ScalarParameters;
	TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters;
	TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters;
};
static_assert(alignof(FNiagaraRendererMaterialParameters) == 0x000008, "Wrong alignment on FNiagaraRendererMaterialParameters");
static_assert(sizeof(FNiagaraRendererMaterialParameters) == 0x000040, "Wrong size on FNiagaraRendererMaterialParameters");
static_assert(offsetof(FNiagaraRendererMaterialParameters, AttributeBindings) == 0x000000, "Member 'FNiagaraRendererMaterialParameters::AttributeBindings' has a wrong offset!");
static_assert(offsetof(FNiagaraRendererMaterialParameters, ScalarParameters) == 0x000010, "Member 'FNiagaraRendererMaterialParameters::ScalarParameters' has a wrong offset!");
static_assert(offsetof(FNiagaraRendererMaterialParameters, VectorParameters) == 0x000020, "Member 'FNiagaraRendererMaterialParameters::VectorParameters' has a wrong offset!");
static_assert(offsetof(FNiagaraRendererMaterialParameters, TextureParameters) == 0x000030, "Member 'FNiagaraRendererMaterialParameters::TextureParameters' has a wrong offset!");

struct FNiagaraRibbonShapeCustomVertex final
{
public:
	struct FVector2f                              Position;
	struct FVector2f                              Normal;
	float                                         TextureV;
};
static_assert(alignof(FNiagaraRibbonShapeCustomVertex) == 0x000004, "Wrong alignment on FNiagaraRibbonShapeCustomVertex");
static_assert(sizeof(FNiagaraRibbonShapeCustomVertex) == 0x000014, "Wrong size on FNiagaraRibbonShapeCustomVertex");
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Position) == 0x000000, "Member 'FNiagaraRibbonShapeCustomVertex::Position' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Normal) == 0x000008, "Member 'FNiagaraRibbonShapeCustomVertex::Normal' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, TextureV) == 0x000010, "Member 'FNiagaraRibbonShapeCustomVertex::TextureV' has a wrong offset!");

struct FNiagaraRibbonUVSettings final
{
public:
	ENiagaraRibbonUVDistributionMode              DistributionMode;
	ENiagaraRibbonUVEdgeMode                      LeadingEdgeMode;
	ENiagaraRibbonUVEdgeMode                      TrailingEdgeMode;
	float                                         TilingLength;
	struct FVector2D                              Offset;
	struct FVector2D                              Scale;
	bool                                          bEnablePerParticleUOverride;
	bool                                          bEnablePerParticleVRangeOverride;
	uint8                                         Pad_32[0x6];
};
static_assert(alignof(FNiagaraRibbonUVSettings) == 0x000008, "Wrong alignment on FNiagaraRibbonUVSettings");
static_assert(sizeof(FNiagaraRibbonUVSettings) == 0x000038, "Wrong size on FNiagaraRibbonUVSettings");
static_assert(offsetof(FNiagaraRibbonUVSettings, DistributionMode) == 0x000000, "Member 'FNiagaraRibbonUVSettings::DistributionMode' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, LeadingEdgeMode) == 0x000004, "Member 'FNiagaraRibbonUVSettings::LeadingEdgeMode' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, TrailingEdgeMode) == 0x000008, "Member 'FNiagaraRibbonUVSettings::TrailingEdgeMode' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, TilingLength) == 0x00000C, "Member 'FNiagaraRibbonUVSettings::TilingLength' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 0x000010, "Member 'FNiagaraRibbonUVSettings::Offset' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 0x000020, "Member 'FNiagaraRibbonUVSettings::Scale' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, bEnablePerParticleUOverride) == 0x000030, "Member 'FNiagaraRibbonUVSettings::bEnablePerParticleUOverride' has a wrong offset!");
static_assert(offsetof(FNiagaraRibbonUVSettings, bEnablePerParticleVRangeOverride) == 0x000031, "Member 'FNiagaraRibbonUVSettings::bEnablePerParticleVRangeOverride' has a wrong offset!");

struct FNiagaraScalabilityManager final
{
public:
	class UNiagaraEffectType*                     EffectType;
	TArray<class UNiagaraComponent*>              ManagedComponents;
	uint8                                         Pad_18[0xC0];
};
static_assert(alignof(FNiagaraScalabilityManager) == 0x000008, "Wrong alignment on FNiagaraScalabilityManager");
static_assert(sizeof(FNiagaraScalabilityManager) == 0x0000D8, "Wrong size on FNiagaraScalabilityManager");
static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 0x000000, "Member 'FNiagaraScalabilityManager::EffectType' has a wrong offset!");
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 0x000008, "Member 'FNiagaraScalabilityManager::ManagedComponents' has a wrong offset!");

struct FNiagaraModuleDependency final
{
public:
	class FName                                   ID;
	ENiagaraModuleDependencyType                  Type;
	ENiagaraModuleDependencyScriptConstraint      ScriptConstraint;
	uint8                                         Pad_6[0x2];
	class FString                                 RequiredVersion;
	int32                                         OnlyEvaluateInScriptUsage;
	uint8                                         Pad_1C[0x4];
	class FText                                   Description;
	uint8                                         Pad_38[0x28];
};
static_assert(alignof(FNiagaraModuleDependency) == 0x000008, "Wrong alignment on FNiagaraModuleDependency");
static_assert(sizeof(FNiagaraModuleDependency) == 0x000060, "Wrong size on FNiagaraModuleDependency");
static_assert(offsetof(FNiagaraModuleDependency, ID) == 0x000000, "Member 'FNiagaraModuleDependency::ID' has a wrong offset!");
static_assert(offsetof(FNiagaraModuleDependency, Type) == 0x000004, "Member 'FNiagaraModuleDependency::Type' has a wrong offset!");
static_assert(offsetof(FNiagaraModuleDependency, ScriptConstraint) == 0x000005, "Member 'FNiagaraModuleDependency::ScriptConstraint' has a wrong offset!");
static_assert(offsetof(FNiagaraModuleDependency, RequiredVersion) == 0x000008, "Member 'FNiagaraModuleDependency::RequiredVersion' has a wrong offset!");
static_assert(offsetof(FNiagaraModuleDependency, OnlyEvaluateInScriptUsage) == 0x000018, "Member 'FNiagaraModuleDependency::OnlyEvaluateInScriptUsage' has a wrong offset!");
static_assert(offsetof(FNiagaraModuleDependency, Description) == 0x000020, "Member 'FNiagaraModuleDependency::Description' has a wrong offset!");

struct FNiagaraCompilerTag final
{
public:
	struct FNiagaraVariable                       Variable;
	class FString                                 StringValue;
};
static_assert(alignof(FNiagaraCompilerTag) == 0x000008, "Wrong alignment on FNiagaraCompilerTag");
static_assert(sizeof(FNiagaraCompilerTag) == 0x000028, "Wrong size on FNiagaraCompilerTag");
static_assert(offsetof(FNiagaraCompilerTag, Variable) == 0x000000, "Member 'FNiagaraCompilerTag::Variable' has a wrong offset!");
static_assert(offsetof(FNiagaraCompilerTag, StringValue) == 0x000018, "Member 'FNiagaraCompilerTag::StringValue' has a wrong offset!");

struct FNiagaraVMExecutableDataId final
{
public:
	struct FGuid                                  CompilerVersionID;
	ENiagaraScriptUsage                           ScriptUsageType;
	uint8                                         Pad_11[0x3];
	struct FGuid                                  ScriptUsageTypeID;
	uint8                                         bUsesRapidIterationParams : 1;
	uint8                                         bDisableDebugSwitches : 1;
	uint8                                         bInterpolatedSpawn : 1;
	uint8                                         bRequiresPersistentIDs : 1;
	uint8                                         Pad_25[0x3];
	struct FGuid                                  BaseScriptID;
	struct FNiagaraCompileHash                    BaseScriptCompileHash;
	struct FGuid                                  ScriptVersionID;
};
static_assert(alignof(FNiagaraVMExecutableDataId) == 0x000008, "Wrong alignment on FNiagaraVMExecutableDataId");
static_assert(sizeof(FNiagaraVMExecutableDataId) == 0x000058, "Wrong size on FNiagaraVMExecutableDataId");
static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0x000000, "Member 'FNiagaraVMExecutableDataId::CompilerVersionID' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageType) == 0x000010, "Member 'FNiagaraVMExecutableDataId::ScriptUsageType' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageTypeID) == 0x000014, "Member 'FNiagaraVMExecutableDataId::ScriptUsageTypeID' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptID) == 0x000028, "Member 'FNiagaraVMExecutableDataId::BaseScriptID' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 0x000038, "Member 'FNiagaraVMExecutableDataId::BaseScriptCompileHash' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptVersionID) == 0x000048, "Member 'FNiagaraVMExecutableDataId::ScriptVersionID' has a wrong offset!");

struct FNiagaraVMExecutableByteCode final
{
public:
	TArray<uint8>                                 Data;
	int32                                         UncompressedSize;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FNiagaraVMExecutableByteCode) == 0x000008, "Wrong alignment on FNiagaraVMExecutableByteCode");
static_assert(sizeof(FNiagaraVMExecutableByteCode) == 0x000018, "Wrong size on FNiagaraVMExecutableByteCode");
static_assert(offsetof(FNiagaraVMExecutableByteCode, Data) == 0x000000, "Member 'FNiagaraVMExecutableByteCode::Data' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableByteCode, UncompressedSize) == 0x000010, "Member 'FNiagaraVMExecutableByteCode::UncompressedSize' has a wrong offset!");

struct FNiagaraVMExecutableData final
{
public:
	struct FNiagaraVMExecutableByteCode           ByteCode;
	struct FNiagaraVMExecutableByteCode           OptimizedByteCode;
	uint8                                         Pad_30[0x38];
	int32                                         NumTempRegisters;
	int32                                         NumUserPtrs;
	TArray<struct FNiagaraCompilerTag>            CompileTags;
	TArray<uint8>                                 ScriptLiterals;
	TArray<struct FNiagaraVariable>               Attributes;
	struct FNiagaraScriptDataUsageInfo            DataUsage;
	uint8                                         Pad_A1[0x7];
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
	uint8                                         Pad_C8[0x10];
	TArray<struct FNiagaraDataSetID>              ReadDataSets;
	TArray<struct FNiagaraDataSetProperties>      WriteDataSets;
	TArray<struct FNiagaraStatScope>              StatScopes;
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;
	ENiagaraScriptCompileStatus                   LastCompileStatus;
	uint8                                         Pad_161[0x7];
	TArray<struct FSimulationStageMetaData>       SimulationStageMetaData;
	TArray<uint8>                                 ExperimentalContextData;
	uint8                                         bReadsSignificanceIndex : 1;
	uint8                                         bNeedsGPUContextInit : 1;
	uint8                                         Pad_189[0x7];
};
static_assert(alignof(FNiagaraVMExecutableData) == 0x000008, "Wrong alignment on FNiagaraVMExecutableData");
static_assert(sizeof(FNiagaraVMExecutableData) == 0x000190, "Wrong size on FNiagaraVMExecutableData");
static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0x000000, "Member 'FNiagaraVMExecutableData::ByteCode' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, OptimizedByteCode) == 0x000018, "Member 'FNiagaraVMExecutableData::OptimizedByteCode' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, NumTempRegisters) == 0x000068, "Member 'FNiagaraVMExecutableData::NumTempRegisters' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, NumUserPtrs) == 0x00006C, "Member 'FNiagaraVMExecutableData::NumUserPtrs' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, CompileTags) == 0x000070, "Member 'FNiagaraVMExecutableData::CompileTags' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 0x000080, "Member 'FNiagaraVMExecutableData::ScriptLiterals' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 0x000090, "Member 'FNiagaraVMExecutableData::Attributes' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 0x0000A0, "Member 'FNiagaraVMExecutableData::DataUsage' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, DataInterfaceInfo) == 0x0000A8, "Member 'FNiagaraVMExecutableData::DataInterfaceInfo' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 0x0000B8, "Member 'FNiagaraVMExecutableData::CalledVMExternalFunctions' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 0x0000D8, "Member 'FNiagaraVMExecutableData::ReadDataSets' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 0x0000E8, "Member 'FNiagaraVMExecutableData::WriteDataSets' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 0x0000F8, "Member 'FNiagaraVMExecutableData::StatScopes' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, ShaderScriptParametersMetadata) == 0x000108, "Member 'FNiagaraVMExecutableData::ShaderScriptParametersMetadata' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, LastCompileStatus) == 0x000160, "Member 'FNiagaraVMExecutableData::LastCompileStatus' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 0x000168, "Member 'FNiagaraVMExecutableData::SimulationStageMetaData' has a wrong offset!");
static_assert(offsetof(FNiagaraVMExecutableData, ExperimentalContextData) == 0x000178, "Member 'FNiagaraVMExecutableData::ExperimentalContextData' has a wrong offset!");

struct FVersionedNiagaraScriptData final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FVersionedNiagaraScriptData) == 0x000001, "Wrong alignment on FVersionedNiagaraScriptData");
static_assert(sizeof(FVersionedNiagaraScriptData) == 0x000001, "Wrong size on FVersionedNiagaraScriptData");

struct FNiagaraScriptExecutionPaddingInfo final
{
public:
	uint16                                        SrcOffset;
	uint16                                        DestOffset;
	uint16                                        SrcSize;
	uint16                                        DestSize;
};
static_assert(alignof(FNiagaraScriptExecutionPaddingInfo) == 0x000002, "Wrong alignment on FNiagaraScriptExecutionPaddingInfo");
static_assert(sizeof(FNiagaraScriptExecutionPaddingInfo) == 0x000008, "Wrong size on FNiagaraScriptExecutionPaddingInfo");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, SrcOffset) == 0x000000, "Member 'FNiagaraScriptExecutionPaddingInfo::SrcOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, DestOffset) == 0x000002, "Member 'FNiagaraScriptExecutionPaddingInfo::DestOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, SrcSize) == 0x000004, "Member 'FNiagaraScriptExecutionPaddingInfo::SrcSize' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, DestSize) == 0x000006, "Member 'FNiagaraScriptExecutionPaddingInfo::DestSize' has a wrong offset!");

struct FNiagaraScriptExecutionParameterStore final : public FNiagaraParameterStore
{
public:
	int32                                         ParameterSize;
	uint32                                        PaddedParameterSize;
	TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
	uint8                                         bInitialized : 1;
	uint8                                         Pad_A1[0x7];
};
static_assert(alignof(FNiagaraScriptExecutionParameterStore) == 0x000008, "Wrong alignment on FNiagaraScriptExecutionParameterStore");
static_assert(sizeof(FNiagaraScriptExecutionParameterStore) == 0x0000A8, "Wrong size on FNiagaraScriptExecutionParameterStore");
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, ParameterSize) == 0x000088, "Member 'FNiagaraScriptExecutionParameterStore::ParameterSize' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddedParameterSize) == 0x00008C, "Member 'FNiagaraScriptExecutionParameterStore::PaddedParameterSize' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddingInfo) == 0x000090, "Member 'FNiagaraScriptExecutionParameterStore::PaddingInfo' has a wrong offset!");

struct FNiagaraScriptInstanceParameterStore final : public FNiagaraParameterStore
{
public:
	uint8                                         Pad_88[0x10];
};
static_assert(alignof(FNiagaraScriptInstanceParameterStore) == 0x000008, "Wrong alignment on FNiagaraScriptInstanceParameterStore");
static_assert(sizeof(FNiagaraScriptInstanceParameterStore) == 0x000098, "Wrong size on FNiagaraScriptInstanceParameterStore");

struct FNiagaraScriptHighlight final
{
public:
	struct FLinearColor                           Color;
	class FText                                   DisplayName;
};
static_assert(alignof(FNiagaraScriptHighlight) == 0x000008, "Wrong alignment on FNiagaraScriptHighlight");
static_assert(sizeof(FNiagaraScriptHighlight) == 0x000028, "Wrong size on FNiagaraScriptHighlight");
static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0x000000, "Member 'FNiagaraScriptHighlight::Color' has a wrong offset!");
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 0x000010, "Member 'FNiagaraScriptHighlight::DisplayName' has a wrong offset!");

struct FNiagaraSimCacheDataBuffers final
{
public:
	uint32                                        NumInstances;
	uint8                                         Pad_4[0x4];
	TArray<uint8>                                 FloatData;
	TArray<uint8>                                 HalfData;
	TArray<uint8>                                 Int32Data;
	TArray<int32>                                 IDToIndexTable;
	uint32                                        IDAcquireTag;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FNiagaraSimCacheDataBuffers) == 0x000008, "Wrong alignment on FNiagaraSimCacheDataBuffers");
static_assert(sizeof(FNiagaraSimCacheDataBuffers) == 0x000050, "Wrong size on FNiagaraSimCacheDataBuffers");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, NumInstances) == 0x000000, "Member 'FNiagaraSimCacheDataBuffers::NumInstances' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, FloatData) == 0x000008, "Member 'FNiagaraSimCacheDataBuffers::FloatData' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, HalfData) == 0x000018, "Member 'FNiagaraSimCacheDataBuffers::HalfData' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, Int32Data) == 0x000028, "Member 'FNiagaraSimCacheDataBuffers::Int32Data' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, IDToIndexTable) == 0x000038, "Member 'FNiagaraSimCacheDataBuffers::IDToIndexTable' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, IDAcquireTag) == 0x000048, "Member 'FNiagaraSimCacheDataBuffers::IDAcquireTag' has a wrong offset!");

struct FNiagaraSimCacheEmitterFrame final
{
public:
	struct FBox                                   LocalBounds;
	int32                                         TotalSpawnedParticles;
	uint8                                         Pad_3C[0x4];
	struct FNiagaraSimCacheDataBuffers            ParticleDataBuffers;
};
static_assert(alignof(FNiagaraSimCacheEmitterFrame) == 0x000008, "Wrong alignment on FNiagaraSimCacheEmitterFrame");
static_assert(sizeof(FNiagaraSimCacheEmitterFrame) == 0x000090, "Wrong size on FNiagaraSimCacheEmitterFrame");
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, LocalBounds) == 0x000000, "Member 'FNiagaraSimCacheEmitterFrame::LocalBounds' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, TotalSpawnedParticles) == 0x000038, "Member 'FNiagaraSimCacheEmitterFrame::TotalSpawnedParticles' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, ParticleDataBuffers) == 0x000040, "Member 'FNiagaraSimCacheEmitterFrame::ParticleDataBuffers' has a wrong offset!");

struct FNiagaraSimCacheSystemFrame final
{
public:
	struct FBox                                   LocalBounds;
	struct FNiagaraSimCacheDataBuffers            SystemDataBuffers;
};
static_assert(alignof(FNiagaraSimCacheSystemFrame) == 0x000008, "Wrong alignment on FNiagaraSimCacheSystemFrame");
static_assert(sizeof(FNiagaraSimCacheSystemFrame) == 0x000088, "Wrong size on FNiagaraSimCacheSystemFrame");
static_assert(offsetof(FNiagaraSimCacheSystemFrame, LocalBounds) == 0x000000, "Member 'FNiagaraSimCacheSystemFrame::LocalBounds' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheSystemFrame, SystemDataBuffers) == 0x000038, "Member 'FNiagaraSimCacheSystemFrame::SystemDataBuffers' has a wrong offset!");

struct FNiagaraSimCacheFrame final
{
public:
	struct FTransform                             LocalToWorld;
	struct FVector3f                              LWCTile;
	uint8                                         Pad_6C[0x4];
	struct FNiagaraSimCacheSystemFrame            SystemData;
	TArray<struct FNiagaraSimCacheEmitterFrame>   EmitterData;
	uint8                                         Pad_108[0x8];
};
static_assert(alignof(FNiagaraSimCacheFrame) == 0x000010, "Wrong alignment on FNiagaraSimCacheFrame");
static_assert(sizeof(FNiagaraSimCacheFrame) == 0x000110, "Wrong size on FNiagaraSimCacheFrame");
static_assert(offsetof(FNiagaraSimCacheFrame, LocalToWorld) == 0x000000, "Member 'FNiagaraSimCacheFrame::LocalToWorld' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheFrame, LWCTile) == 0x000060, "Member 'FNiagaraSimCacheFrame::LWCTile' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheFrame, SystemData) == 0x000070, "Member 'FNiagaraSimCacheFrame::SystemData' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheFrame, EmitterData) == 0x0000F8, "Member 'FNiagaraSimCacheFrame::EmitterData' has a wrong offset!");

struct FNiagaraSimCacheVariable final
{
public:
	struct FNiagaraVariableBase                   Variable;
	uint16                                        FloatOffset;
	uint16                                        FloatCount;
	uint16                                        HalfOffset;
	uint16                                        HalfCount;
	uint16                                        Int32Offset;
	uint16                                        Int32Count;
};
static_assert(alignof(FNiagaraSimCacheVariable) == 0x000004, "Wrong alignment on FNiagaraSimCacheVariable");
static_assert(sizeof(FNiagaraSimCacheVariable) == 0x000014, "Wrong size on FNiagaraSimCacheVariable");
static_assert(offsetof(FNiagaraSimCacheVariable, Variable) == 0x000000, "Member 'FNiagaraSimCacheVariable::Variable' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheVariable, FloatOffset) == 0x000008, "Member 'FNiagaraSimCacheVariable::FloatOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheVariable, FloatCount) == 0x00000A, "Member 'FNiagaraSimCacheVariable::FloatCount' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheVariable, HalfOffset) == 0x00000C, "Member 'FNiagaraSimCacheVariable::HalfOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheVariable, HalfCount) == 0x00000E, "Member 'FNiagaraSimCacheVariable::HalfCount' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheVariable, Int32Offset) == 0x000010, "Member 'FNiagaraSimCacheVariable::Int32Offset' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheVariable, Int32Count) == 0x000012, "Member 'FNiagaraSimCacheVariable::Int32Count' has a wrong offset!");

struct FNiagaraSimCacheDataBuffersLayout final
{
public:
	class FName                                   LayoutName;
	ENiagaraSimTarget                             SimTarget;
	uint8                                         Pad_5[0x3];
	TArray<struct FNiagaraSimCacheVariable>       Variables;
	uint16                                        FloatCount;
	uint16                                        HalfCount;
	uint16                                        Int32Count;
	bool                                          bLocalSpace;
	uint8                                         Pad_1F[0x1];
	TArray<class FName>                           RebaseVariableNames;
	uint8                                         Pad_30[0x30];
};
static_assert(alignof(FNiagaraSimCacheDataBuffersLayout) == 0x000008, "Wrong alignment on FNiagaraSimCacheDataBuffersLayout");
static_assert(sizeof(FNiagaraSimCacheDataBuffersLayout) == 0x000060, "Wrong size on FNiagaraSimCacheDataBuffersLayout");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, LayoutName) == 0x000000, "Member 'FNiagaraSimCacheDataBuffersLayout::LayoutName' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, SimTarget) == 0x000004, "Member 'FNiagaraSimCacheDataBuffersLayout::SimTarget' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, Variables) == 0x000008, "Member 'FNiagaraSimCacheDataBuffersLayout::Variables' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, FloatCount) == 0x000018, "Member 'FNiagaraSimCacheDataBuffersLayout::FloatCount' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, HalfCount) == 0x00001A, "Member 'FNiagaraSimCacheDataBuffersLayout::HalfCount' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, Int32Count) == 0x00001C, "Member 'FNiagaraSimCacheDataBuffersLayout::Int32Count' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, bLocalSpace) == 0x00001E, "Member 'FNiagaraSimCacheDataBuffersLayout::bLocalSpace' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, RebaseVariableNames) == 0x000020, "Member 'FNiagaraSimCacheDataBuffersLayout::RebaseVariableNames' has a wrong offset!");

struct FNiagaraSimCacheLayout final
{
public:
	struct FNiagaraSimCacheDataBuffersLayout      SystemLayout;
	TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;
};
static_assert(alignof(FNiagaraSimCacheLayout) == 0x000008, "Wrong alignment on FNiagaraSimCacheLayout");
static_assert(sizeof(FNiagaraSimCacheLayout) == 0x000070, "Wrong size on FNiagaraSimCacheLayout");
static_assert(offsetof(FNiagaraSimCacheLayout, SystemLayout) == 0x000000, "Member 'FNiagaraSimCacheLayout::SystemLayout' has a wrong offset!");
static_assert(offsetof(FNiagaraSimCacheLayout, EmitterLayouts) == 0x000060, "Member 'FNiagaraSimCacheLayout::EmitterLayouts' has a wrong offset!");

struct FNiagaraEmitterCompiledData final
{
public:
	TArray<class FName>                           SpawnAttributes;
	struct FNiagaraVariable                       EmitterSpawnIntervalVar;
	struct FNiagaraVariable                       EmitterInterpSpawnStartDTVar;
	struct FNiagaraVariable                       EmitterSpawnGroupVar;
	struct FNiagaraVariable                       EmitterAgeVar;
	struct FNiagaraVariable                       EmitterRandomSeedVar;
	struct FNiagaraVariable                       EmitterInstanceSeedVar;
	struct FNiagaraVariable                       EmitterTotalSpawnedParticlesVar;
	struct FNiagaraDataSetCompiledData            DataSetCompiledData;
};
static_assert(alignof(FNiagaraEmitterCompiledData) == 0x000008, "Wrong alignment on FNiagaraEmitterCompiledData");
static_assert(sizeof(FNiagaraEmitterCompiledData) == 0x0000F8, "Wrong size on FNiagaraEmitterCompiledData");
static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0x000000, "Member 'FNiagaraEmitterCompiledData::SpawnAttributes' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 0x000010, "Member 'FNiagaraEmitterCompiledData::EmitterSpawnIntervalVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 0x000028, "Member 'FNiagaraEmitterCompiledData::EmitterInterpSpawnStartDTVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 0x000040, "Member 'FNiagaraEmitterCompiledData::EmitterSpawnGroupVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 0x000058, "Member 'FNiagaraEmitterCompiledData::EmitterAgeVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 0x000070, "Member 'FNiagaraEmitterCompiledData::EmitterRandomSeedVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 0x000088, "Member 'FNiagaraEmitterCompiledData::EmitterInstanceSeedVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 0x0000A0, "Member 'FNiagaraEmitterCompiledData::EmitterTotalSpawnedParticlesVar' has a wrong offset!");
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 0x0000B8, "Member 'FNiagaraEmitterCompiledData::DataSetCompiledData' has a wrong offset!");

struct FNiagaraParameterDataSetBinding final
{
public:
	int32                                         ParameterOffset;
	int32                                         DataSetComponentOffset;
};
static_assert(alignof(FNiagaraParameterDataSetBinding) == 0x000004, "Wrong alignment on FNiagaraParameterDataSetBinding");
static_assert(sizeof(FNiagaraParameterDataSetBinding) == 0x000008, "Wrong size on FNiagaraParameterDataSetBinding");
static_assert(offsetof(FNiagaraParameterDataSetBinding, ParameterOffset) == 0x000000, "Member 'FNiagaraParameterDataSetBinding::ParameterOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterDataSetBinding, DataSetComponentOffset) == 0x000004, "Member 'FNiagaraParameterDataSetBinding::DataSetComponentOffset' has a wrong offset!");

struct FNiagaraParameterDataSetBindingCollection final
{
public:
	TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;
	TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;
};
static_assert(alignof(FNiagaraParameterDataSetBindingCollection) == 0x000008, "Wrong alignment on FNiagaraParameterDataSetBindingCollection");
static_assert(sizeof(FNiagaraParameterDataSetBindingCollection) == 0x000020, "Wrong size on FNiagaraParameterDataSetBindingCollection");
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0x000000, "Member 'FNiagaraParameterDataSetBindingCollection::FloatOffsets' has a wrong offset!");
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 0x000010, "Member 'FNiagaraParameterDataSetBindingCollection::Int32Offsets' has a wrong offset!");

struct FNiagaraSystemCompiledData final
{
public:
	struct FNiagaraParameterStore                 InstanceParamStore;
	struct FNiagaraDataSetCompiledData            DataSetCompiledData;
	struct FNiagaraDataSetCompiledData            SpawnInstanceParamsDataSetCompiledData;
	struct FNiagaraDataSetCompiledData            UpdateInstanceParamsDataSetCompiledData;
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;
};
static_assert(alignof(FNiagaraSystemCompiledData) == 0x000008, "Wrong alignment on FNiagaraSystemCompiledData");
static_assert(sizeof(FNiagaraSystemCompiledData) == 0x000228, "Wrong size on FNiagaraSystemCompiledData");
static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0x000000, "Member 'FNiagaraSystemCompiledData::InstanceParamStore' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 0x000088, "Member 'FNiagaraSystemCompiledData::DataSetCompiledData' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 0x0000C8, "Member 'FNiagaraSystemCompiledData::SpawnInstanceParamsDataSetCompiledData' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 0x000108, "Member 'FNiagaraSystemCompiledData::UpdateInstanceParamsDataSetCompiledData' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 0x000148, "Member 'FNiagaraSystemCompiledData::SpawnInstanceGlobalBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 0x000168, "Member 'FNiagaraSystemCompiledData::SpawnInstanceSystemBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 0x000188, "Member 'FNiagaraSystemCompiledData::SpawnInstanceOwnerBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 0x0001A8, "Member 'FNiagaraSystemCompiledData::SpawnInstanceEmitterBindings' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 0x0001B8, "Member 'FNiagaraSystemCompiledData::UpdateInstanceGlobalBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 0x0001D8, "Member 'FNiagaraSystemCompiledData::UpdateInstanceSystemBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 0x0001F8, "Member 'FNiagaraSystemCompiledData::UpdateInstanceOwnerBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 0x000218, "Member 'FNiagaraSystemCompiledData::UpdateInstanceEmitterBindings' has a wrong offset!");

struct FNiagaraSystemCompileRequest final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<class UObject*>                        RootObjects;
};
static_assert(alignof(FNiagaraSystemCompileRequest) == 0x000008, "Wrong alignment on FNiagaraSystemCompileRequest");
static_assert(sizeof(FNiagaraSystemCompileRequest) == 0x000018, "Wrong size on FNiagaraSystemCompileRequest");
static_assert(offsetof(FNiagaraSystemCompileRequest, RootObjects) == 0x000008, "Member 'FNiagaraSystemCompileRequest::RootObjects' has a wrong offset!");

struct FNiagaraSystemScalabilityOverrides final
{
public:
	TArray<struct FNiagaraSystemScalabilityOverride> Overrides;
};
static_assert(alignof(FNiagaraSystemScalabilityOverrides) == 0x000008, "Wrong alignment on FNiagaraSystemScalabilityOverrides");
static_assert(sizeof(FNiagaraSystemScalabilityOverrides) == 0x000010, "Wrong size on FNiagaraSystemScalabilityOverrides");
static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0x000000, "Member 'FNiagaraSystemScalabilityOverrides::Overrides' has a wrong offset!");

struct FNiagaraWildcard final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FNiagaraWildcard) == 0x000001, "Wrong alignment on FNiagaraWildcard");
static_assert(sizeof(FNiagaraWildcard) == 0x000001, "Wrong size on FNiagaraWildcard");

struct FNiagaraFloat final
{
public:
	float                                         Value;
};
static_assert(alignof(FNiagaraFloat) == 0x000004, "Wrong alignment on FNiagaraFloat");
static_assert(sizeof(FNiagaraFloat) == 0x000004, "Wrong size on FNiagaraFloat");
static_assert(offsetof(FNiagaraFloat, Value) == 0x000000, "Member 'FNiagaraFloat::Value' has a wrong offset!");

struct FNiagaraInt32 final
{
public:
	int32                                         Value;
};
static_assert(alignof(FNiagaraInt32) == 0x000004, "Wrong alignment on FNiagaraInt32");
static_assert(sizeof(FNiagaraInt32) == 0x000004, "Wrong size on FNiagaraInt32");
static_assert(offsetof(FNiagaraInt32, Value) == 0x000000, "Member 'FNiagaraInt32::Value' has a wrong offset!");

struct FNiagaraBool final
{
public:
	int32                                         Value;
};
static_assert(alignof(FNiagaraBool) == 0x000004, "Wrong alignment on FNiagaraBool");
static_assert(sizeof(FNiagaraBool) == 0x000004, "Wrong size on FNiagaraBool");
static_assert(offsetof(FNiagaraBool, Value) == 0x000000, "Member 'FNiagaraBool::Value' has a wrong offset!");

struct FNiagaraPosition final : public FVector3f
{
};
static_assert(alignof(FNiagaraPosition) == 0x000004, "Wrong alignment on FNiagaraPosition");
static_assert(sizeof(FNiagaraPosition) == 0x00000C, "Wrong size on FNiagaraPosition");

struct FNiagaraHalf final
{
public:
	uint16                                        Value;
};
static_assert(alignof(FNiagaraHalf) == 0x000002, "Wrong alignment on FNiagaraHalf");
static_assert(sizeof(FNiagaraHalf) == 0x000002, "Wrong size on FNiagaraHalf");
static_assert(offsetof(FNiagaraHalf, Value) == 0x000000, "Member 'FNiagaraHalf::Value' has a wrong offset!");

struct FNiagaraHalfVector2 final
{
public:
	uint16                                        X;
	uint16                                        Y;
};
static_assert(alignof(FNiagaraHalfVector2) == 0x000002, "Wrong alignment on FNiagaraHalfVector2");
static_assert(sizeof(FNiagaraHalfVector2) == 0x000004, "Wrong size on FNiagaraHalfVector2");
static_assert(offsetof(FNiagaraHalfVector2, X) == 0x000000, "Member 'FNiagaraHalfVector2::X' has a wrong offset!");
static_assert(offsetof(FNiagaraHalfVector2, Y) == 0x000002, "Member 'FNiagaraHalfVector2::Y' has a wrong offset!");

struct FNiagaraHalfVector3 final
{
public:
	uint16                                        X;
	uint16                                        Y;
	uint16                                        Z;
};
static_assert(alignof(FNiagaraHalfVector3) == 0x000002, "Wrong alignment on FNiagaraHalfVector3");
static_assert(sizeof(FNiagaraHalfVector3) == 0x000006, "Wrong size on FNiagaraHalfVector3");
static_assert(offsetof(FNiagaraHalfVector3, X) == 0x000000, "Member 'FNiagaraHalfVector3::X' has a wrong offset!");
static_assert(offsetof(FNiagaraHalfVector3, Y) == 0x000002, "Member 'FNiagaraHalfVector3::Y' has a wrong offset!");
static_assert(offsetof(FNiagaraHalfVector3, Z) == 0x000004, "Member 'FNiagaraHalfVector3::Z' has a wrong offset!");

struct FNiagaraHalfVector4 final
{
public:
	uint16                                        X;
	uint16                                        Y;
	uint16                                        Z;
	uint16                                        W;
};
static_assert(alignof(FNiagaraHalfVector4) == 0x000002, "Wrong alignment on FNiagaraHalfVector4");
static_assert(sizeof(FNiagaraHalfVector4) == 0x000008, "Wrong size on FNiagaraHalfVector4");
static_assert(offsetof(FNiagaraHalfVector4, X) == 0x000000, "Member 'FNiagaraHalfVector4::X' has a wrong offset!");
static_assert(offsetof(FNiagaraHalfVector4, Y) == 0x000002, "Member 'FNiagaraHalfVector4::Y' has a wrong offset!");
static_assert(offsetof(FNiagaraHalfVector4, Z) == 0x000004, "Member 'FNiagaraHalfVector4::Z' has a wrong offset!");
static_assert(offsetof(FNiagaraHalfVector4, W) == 0x000006, "Member 'FNiagaraHalfVector4::W' has a wrong offset!");

struct FNiagaraNumeric final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FNiagaraNumeric) == 0x000001, "Wrong alignment on FNiagaraNumeric");
static_assert(sizeof(FNiagaraNumeric) == 0x000001, "Wrong size on FNiagaraNumeric");

struct FNiagaraDouble final
{
public:
	double                                        Value;
};
static_assert(alignof(FNiagaraDouble) == 0x000008, "Wrong alignment on FNiagaraDouble");
static_assert(sizeof(FNiagaraDouble) == 0x000008, "Wrong size on FNiagaraDouble");
static_assert(offsetof(FNiagaraDouble, Value) == 0x000000, "Member 'FNiagaraDouble::Value' has a wrong offset!");

struct FNiagaraParameterMap final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FNiagaraParameterMap) == 0x000001, "Wrong alignment on FNiagaraParameterMap");
static_assert(sizeof(FNiagaraParameterMap) == 0x000001, "Wrong size on FNiagaraParameterMap");

struct FNiagaraMatrix final
{
public:
	struct FVector4f                              Row0;
	struct FVector4f                              Row1;
	struct FVector4f                              Row2;
	struct FVector4f                              Row3;
};
static_assert(alignof(FNiagaraMatrix) == 0x000010, "Wrong alignment on FNiagaraMatrix");
static_assert(sizeof(FNiagaraMatrix) == 0x000040, "Wrong size on FNiagaraMatrix");
static_assert(offsetof(FNiagaraMatrix, Row0) == 0x000000, "Member 'FNiagaraMatrix::Row0' has a wrong offset!");
static_assert(offsetof(FNiagaraMatrix, Row1) == 0x000010, "Member 'FNiagaraMatrix::Row1' has a wrong offset!");
static_assert(offsetof(FNiagaraMatrix, Row2) == 0x000020, "Member 'FNiagaraMatrix::Row2' has a wrong offset!");
static_assert(offsetof(FNiagaraMatrix, Row3) == 0x000030, "Member 'FNiagaraMatrix::Row3' has a wrong offset!");

struct FNiagaraSpawnInfo final
{
public:
	int32                                         Count;
	float                                         InterpStartDt;
	float                                         IntervalDt;
	int32                                         SpawnGroup;
};
static_assert(alignof(FNiagaraSpawnInfo) == 0x000004, "Wrong alignment on FNiagaraSpawnInfo");
static_assert(sizeof(FNiagaraSpawnInfo) == 0x000010, "Wrong size on FNiagaraSpawnInfo");
static_assert(offsetof(FNiagaraSpawnInfo, Count) == 0x000000, "Member 'FNiagaraSpawnInfo::Count' has a wrong offset!");
static_assert(offsetof(FNiagaraSpawnInfo, InterpStartDt) == 0x000004, "Member 'FNiagaraSpawnInfo::InterpStartDt' has a wrong offset!");
static_assert(offsetof(FNiagaraSpawnInfo, IntervalDt) == 0x000008, "Member 'FNiagaraSpawnInfo::IntervalDt' has a wrong offset!");
static_assert(offsetof(FNiagaraSpawnInfo, SpawnGroup) == 0x00000C, "Member 'FNiagaraSpawnInfo::SpawnGroup' has a wrong offset!");

struct FNiagaraID final
{
public:
	int32                                         Index;
	int32                                         AcquireTag;
};
static_assert(alignof(FNiagaraID) == 0x000004, "Wrong alignment on FNiagaraID");
static_assert(sizeof(FNiagaraID) == 0x000008, "Wrong size on FNiagaraID");
static_assert(offsetof(FNiagaraID, Index) == 0x000000, "Member 'FNiagaraID::Index' has a wrong offset!");
static_assert(offsetof(FNiagaraID, AcquireTag) == 0x000004, "Member 'FNiagaraID::AcquireTag' has a wrong offset!");

struct FNiagaraRandInfo final
{
public:
	int32                                         Seed1;
	int32                                         Seed2;
	int32                                         Seed3;
};
static_assert(alignof(FNiagaraRandInfo) == 0x000004, "Wrong alignment on FNiagaraRandInfo");
static_assert(sizeof(FNiagaraRandInfo) == 0x00000C, "Wrong size on FNiagaraRandInfo");
static_assert(offsetof(FNiagaraRandInfo, Seed1) == 0x000000, "Member 'FNiagaraRandInfo::Seed1' has a wrong offset!");
static_assert(offsetof(FNiagaraRandInfo, Seed2) == 0x000004, "Member 'FNiagaraRandInfo::Seed2' has a wrong offset!");
static_assert(offsetof(FNiagaraRandInfo, Seed3) == 0x000008, "Member 'FNiagaraRandInfo::Seed3' has a wrong offset!");

struct FNiagaraInputConditionMetadata final
{
public:
	class FName                                   InputName;
	uint8                                         Pad_4[0x4];
	TArray<class FString>                         TargetValues;
};
static_assert(alignof(FNiagaraInputConditionMetadata) == 0x000008, "Wrong alignment on FNiagaraInputConditionMetadata");
static_assert(sizeof(FNiagaraInputConditionMetadata) == 0x000018, "Wrong size on FNiagaraInputConditionMetadata");
static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0x000000, "Member 'FNiagaraInputConditionMetadata::InputName' has a wrong offset!");
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 0x000008, "Member 'FNiagaraInputConditionMetadata::TargetValues' has a wrong offset!");

struct FNiagaraEnumParameterMetaData final
{
public:
	class FName                                   OverrideName;
	uint8                                         Pad_4[0x4];
	class UTexture2D*                             IconOverride;
	bool                                          bUseColorOverride;
	uint8                                         Pad_11[0x3];
	struct FLinearColor                           ColorOverride;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FNiagaraEnumParameterMetaData) == 0x000008, "Wrong alignment on FNiagaraEnumParameterMetaData");
static_assert(sizeof(FNiagaraEnumParameterMetaData) == 0x000028, "Wrong size on FNiagaraEnumParameterMetaData");
static_assert(offsetof(FNiagaraEnumParameterMetaData, OverrideName) == 0x000000, "Member 'FNiagaraEnumParameterMetaData::OverrideName' has a wrong offset!");
static_assert(offsetof(FNiagaraEnumParameterMetaData, IconOverride) == 0x000008, "Member 'FNiagaraEnumParameterMetaData::IconOverride' has a wrong offset!");
static_assert(offsetof(FNiagaraEnumParameterMetaData, bUseColorOverride) == 0x000010, "Member 'FNiagaraEnumParameterMetaData::bUseColorOverride' has a wrong offset!");
static_assert(offsetof(FNiagaraEnumParameterMetaData, ColorOverride) == 0x000014, "Member 'FNiagaraEnumParameterMetaData::ColorOverride' has a wrong offset!");

struct FNiagaraBoolParameterMetaData final
{
public:
	ENiagaraBoolDisplayMode                       DisplayMode;
	uint8                                         Pad_1[0x3];
	class FName                                   OverrideNameTrue;
	class FName                                   OverrideNameFalse;
	uint8                                         Pad_C[0x4];
	class UTexture2D*                             IconOverrideTrue;
	class UTexture2D*                             IconOverrideFalse;
};
static_assert(alignof(FNiagaraBoolParameterMetaData) == 0x000008, "Wrong alignment on FNiagaraBoolParameterMetaData");
static_assert(sizeof(FNiagaraBoolParameterMetaData) == 0x000020, "Wrong size on FNiagaraBoolParameterMetaData");
static_assert(offsetof(FNiagaraBoolParameterMetaData, DisplayMode) == 0x000000, "Member 'FNiagaraBoolParameterMetaData::DisplayMode' has a wrong offset!");
static_assert(offsetof(FNiagaraBoolParameterMetaData, OverrideNameTrue) == 0x000004, "Member 'FNiagaraBoolParameterMetaData::OverrideNameTrue' has a wrong offset!");
static_assert(offsetof(FNiagaraBoolParameterMetaData, OverrideNameFalse) == 0x000008, "Member 'FNiagaraBoolParameterMetaData::OverrideNameFalse' has a wrong offset!");
static_assert(offsetof(FNiagaraBoolParameterMetaData, IconOverrideTrue) == 0x000010, "Member 'FNiagaraBoolParameterMetaData::IconOverrideTrue' has a wrong offset!");
static_assert(offsetof(FNiagaraBoolParameterMetaData, IconOverrideFalse) == 0x000018, "Member 'FNiagaraBoolParameterMetaData::IconOverrideFalse' has a wrong offset!");

struct FNiagaraVariableMetaData final
{
public:
	class FText                                   Description;
	class FText                                   CategoryName;
	bool                                          bAdvancedDisplay;
	bool                                          bDisplayInOverviewStack;
	uint8                                         Pad_32[0x2];
	int32                                         InlineParameterSortPriority;
	bool                                          bOverrideColor;
	uint8                                         Pad_39[0x3];
	struct FLinearColor                           InlineParameterColorOverride;
	uint8                                         Pad_4C[0x4];
	TArray<struct FNiagaraEnumParameterMetaData>  InlineParameterEnumOverrides;
	bool                                          bEnableBoolOverride;
	uint8                                         Pad_61[0x7];
	struct FNiagaraBoolParameterMetaData          InlineParameterBoolOverride;
	int32                                         EditorSortPriority;
	bool                                          bInlineEditConditionToggle;
	uint8                                         Pad_8D[0x3];
	struct FNiagaraInputConditionMetadata         EditCondition;
	struct FNiagaraInputConditionMetadata         VisibleCondition;
	TMap<class FName, class FString>              PropertyMetaData;
	class FName                                   ParentAttribute;
	uint8                                         Pad_114[0x4];
	TArray<class FName>                           AlternateAliases;
	struct FGuid                                  VariableGuid;
	bool                                          bIsStaticSwitch;
	uint8                                         Pad_139[0x3];
	int32                                         StaticSwitchDefaultValue;
};
static_assert(alignof(FNiagaraVariableMetaData) == 0x000008, "Wrong alignment on FNiagaraVariableMetaData");
static_assert(sizeof(FNiagaraVariableMetaData) == 0x000140, "Wrong size on FNiagaraVariableMetaData");
static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0x000000, "Member 'FNiagaraVariableMetaData::Description' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 0x000018, "Member 'FNiagaraVariableMetaData::CategoryName' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, bAdvancedDisplay) == 0x000030, "Member 'FNiagaraVariableMetaData::bAdvancedDisplay' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, bDisplayInOverviewStack) == 0x000031, "Member 'FNiagaraVariableMetaData::bDisplayInOverviewStack' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterSortPriority) == 0x000034, "Member 'FNiagaraVariableMetaData::InlineParameterSortPriority' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, bOverrideColor) == 0x000038, "Member 'FNiagaraVariableMetaData::bOverrideColor' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterColorOverride) == 0x00003C, "Member 'FNiagaraVariableMetaData::InlineParameterColorOverride' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterEnumOverrides) == 0x000050, "Member 'FNiagaraVariableMetaData::InlineParameterEnumOverrides' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, bEnableBoolOverride) == 0x000060, "Member 'FNiagaraVariableMetaData::bEnableBoolOverride' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterBoolOverride) == 0x000068, "Member 'FNiagaraVariableMetaData::InlineParameterBoolOverride' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, EditorSortPriority) == 0x000088, "Member 'FNiagaraVariableMetaData::EditorSortPriority' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, bInlineEditConditionToggle) == 0x00008C, "Member 'FNiagaraVariableMetaData::bInlineEditConditionToggle' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 0x000090, "Member 'FNiagaraVariableMetaData::EditCondition' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 0x0000A8, "Member 'FNiagaraVariableMetaData::VisibleCondition' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, PropertyMetaData) == 0x0000C0, "Member 'FNiagaraVariableMetaData::PropertyMetaData' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 0x000110, "Member 'FNiagaraVariableMetaData::ParentAttribute' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, AlternateAliases) == 0x000118, "Member 'FNiagaraVariableMetaData::AlternateAliases' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, VariableGuid) == 0x000128, "Member 'FNiagaraVariableMetaData::VariableGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, bIsStaticSwitch) == 0x000138, "Member 'FNiagaraVariableMetaData::bIsStaticSwitch' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableMetaData, StaticSwitchDefaultValue) == 0x00013C, "Member 'FNiagaraVariableMetaData::StaticSwitchDefaultValue' has a wrong offset!");

struct FNiagaraUserRedirectionParameterStore final : public FNiagaraParameterStore
{
public:
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;
};
static_assert(alignof(FNiagaraUserRedirectionParameterStore) == 0x000008, "Wrong alignment on FNiagaraUserRedirectionParameterStore");
static_assert(sizeof(FNiagaraUserRedirectionParameterStore) == 0x0000D8, "Wrong size on FNiagaraUserRedirectionParameterStore");
static_assert(offsetof(FNiagaraUserRedirectionParameterStore, UserParameterRedirects) == 0x000088, "Member 'FNiagaraUserRedirectionParameterStore::UserParameterRedirects' has a wrong offset!");

struct FNiagaraVariant final
{
public:
	class UObject*                                Object;
	class UNiagaraDataInterface*                  DataInterface;
	TArray<uint8>                                 Bytes;
	ENiagaraVariantMode                           CurrentMode;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FNiagaraVariant) == 0x000008, "Wrong alignment on FNiagaraVariant");
static_assert(sizeof(FNiagaraVariant) == 0x000028, "Wrong size on FNiagaraVariant");
static_assert(offsetof(FNiagaraVariant, Object) == 0x000000, "Member 'FNiagaraVariant::Object' has a wrong offset!");
static_assert(offsetof(FNiagaraVariant, DataInterface) == 0x000008, "Member 'FNiagaraVariant::DataInterface' has a wrong offset!");
static_assert(offsetof(FNiagaraVariant, Bytes) == 0x000010, "Member 'FNiagaraVariant::Bytes' has a wrong offset!");
static_assert(offsetof(FNiagaraVariant, CurrentMode) == 0x000020, "Member 'FNiagaraVariant::CurrentMode' has a wrong offset!");

struct FNiagaraWorldManagerTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FNiagaraWorldManagerTickFunction) == 0x000008, "Wrong alignment on FNiagaraWorldManagerTickFunction");
static_assert(sizeof(FNiagaraWorldManagerTickFunction) == 0x000030, "Wrong size on FNiagaraWorldManagerTickFunction");

}
