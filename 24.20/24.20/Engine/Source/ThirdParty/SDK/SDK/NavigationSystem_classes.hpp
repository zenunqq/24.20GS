#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "NavigationSystem_structs.hpp"

namespace SDK
{

class UCrowdManagerBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrowdManagerBase">();
	}
	static class UCrowdManagerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrowdManagerBase>();
	}
};
static_assert(alignof(UCrowdManagerBase) == 0x000008, "Wrong alignment on UCrowdManagerBase");
static_assert(sizeof(UCrowdManagerBase) == 0x000028, "Wrong size on UCrowdManagerBase");

class ANavigationGraphNode final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationGraphNode">();
	}
	static class ANavigationGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavigationGraphNode>();
	}
};
static_assert(alignof(ANavigationGraphNode) == 0x000008, "Wrong alignment on ANavigationGraphNode");
static_assert(sizeof(ANavigationGraphNode) == 0x000288, "Wrong size on ANavigationGraphNode");

class UNavigationGraphNodeComponent final : public USceneComponent
{
public:
	struct FNavGraphNode                          Node;
	class UNavigationGraphNodeComponent*          NextNodeComponent;
	class UNavigationGraphNodeComponent*          PrevNodeComponent;
	uint8                                         Pad_2C8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationGraphNodeComponent">();
	}
	static class UNavigationGraphNodeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationGraphNodeComponent>();
	}
};
static_assert(alignof(UNavigationGraphNodeComponent) == 0x000010, "Wrong alignment on UNavigationGraphNodeComponent");
static_assert(sizeof(UNavigationGraphNodeComponent) == 0x0002D0, "Wrong size on UNavigationGraphNodeComponent");
static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 0x0002A0, "Member 'UNavigationGraphNodeComponent::Node' has a wrong offset!");
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 0x0002B8, "Member 'UNavigationGraphNodeComponent::NextNodeComponent' has a wrong offset!");
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 0x0002C0, "Member 'UNavigationGraphNodeComponent::PrevNodeComponent' has a wrong offset!");

class INavigationPathGenerator final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationPathGenerator">();
	}
	static class INavigationPathGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavigationPathGenerator>();
	}
};
static_assert(alignof(INavigationPathGenerator) == 0x000008, "Wrong alignment on INavigationPathGenerator");
static_assert(sizeof(INavigationPathGenerator) == 0x000028, "Wrong size on INavigationPathGenerator");

class INavLinkCustomInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkCustomInterface">();
	}
	static class INavLinkCustomInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavLinkCustomInterface>();
	}
};
static_assert(alignof(INavLinkCustomInterface) == 0x000008, "Wrong alignment on INavLinkCustomInterface");
static_assert(sizeof(INavLinkCustomInterface) == 0x000028, "Wrong size on INavLinkCustomInterface");

class INavLinkHostInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkHostInterface">();
	}
	static class INavLinkHostInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavLinkHostInterface>();
	}
};
static_assert(alignof(INavLinkHostInterface) == 0x000008, "Wrong alignment on INavLinkHostInterface");
static_assert(sizeof(INavLinkHostInterface) == 0x000028, "Wrong size on INavLinkHostInterface");

class UNavLinkTrivial final : public UNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkTrivial">();
	}
	static class UNavLinkTrivial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLinkTrivial>();
	}
};
static_assert(alignof(UNavLinkTrivial) == 0x000008, "Wrong alignment on UNavLinkTrivial");
static_assert(sizeof(UNavLinkTrivial) == 0x000050, "Wrong size on UNavLinkTrivial");

class INavNodeInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavNodeInterface">();
	}
	static class INavNodeInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavNodeInterface>();
	}
};
static_assert(alignof(INavNodeInterface) == 0x000008, "Wrong alignment on INavNodeInterface");
static_assert(sizeof(INavNodeInterface) == 0x000028, "Wrong size on INavNodeInterface");

class ANavigationData : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	class UPrimitiveComponent*                    RenderingComp;
	struct FNavDataConfig                         NavDataConfig;
	uint8                                         bEnableDrawing : 1;
	uint8                                         bForceRebuildOnLoad : 1;
	uint8                                         bAutoDestroyWhenNoNavigation : 1;
	uint8                                         bCanBeMainNavData : 1;
	uint8                                         bCanSpawnOnRebuild : 1;
	uint8                                         bRebuildAtRuntime : 1;
	uint8                                         Pad_319[0x3];
	ERuntimeGenerationType                        RuntimeGeneration;
	uint8                                         Pad_31D[0x3];
	float                                         ObservedPathsTickInterval;
	uint32                                        DataVersion;
	uint8                                         Pad_328[0x108];
	TArray<struct FSupportedAreaData>             SupportedAreas;
	uint8                                         Pad_440[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationData">();
	}
	static class ANavigationData* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavigationData>();
	}
};
static_assert(alignof(ANavigationData) == 0x000008, "Wrong alignment on ANavigationData");
static_assert(sizeof(ANavigationData) == 0x000498, "Wrong size on ANavigationData");
static_assert(offsetof(ANavigationData, RenderingComp) == 0x000290, "Member 'ANavigationData::RenderingComp' has a wrong offset!");
static_assert(offsetof(ANavigationData, NavDataConfig) == 0x000298, "Member 'ANavigationData::NavDataConfig' has a wrong offset!");
static_assert(offsetof(ANavigationData, RuntimeGeneration) == 0x00031C, "Member 'ANavigationData::RuntimeGeneration' has a wrong offset!");
static_assert(offsetof(ANavigationData, ObservedPathsTickInterval) == 0x000320, "Member 'ANavigationData::ObservedPathsTickInterval' has a wrong offset!");
static_assert(offsetof(ANavigationData, DataVersion) == 0x000324, "Member 'ANavigationData::DataVersion' has a wrong offset!");
static_assert(offsetof(ANavigationData, SupportedAreas) == 0x000430, "Member 'ANavigationData::SupportedAreas' has a wrong offset!");

class AAbstractNavData final : public ANavigationData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AbstractNavData">();
	}
	static class AAbstractNavData* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAbstractNavData>();
	}
};
static_assert(alignof(AAbstractNavData) == 0x000008, "Wrong alignment on AAbstractNavData");
static_assert(sizeof(AAbstractNavData) == 0x000498, "Wrong size on AAbstractNavData");

class UNavArea : public UNavAreaBase
{
public:
	float                                         DefaultCost;
	float                                         FixedAreaEnteringCost;
	struct FColor                                 DrawColor;
	struct FNavAgentSelector                      SupportedAgents;
	uint8                                         bSupportsAgent0 : 1;
	uint8                                         bSupportsAgent1 : 1;
	uint8                                         bSupportsAgent2 : 1;
	uint8                                         bSupportsAgent3 : 1;
	uint8                                         bSupportsAgent4 : 1;
	uint8                                         bSupportsAgent5 : 1;
	uint8                                         bSupportsAgent6 : 1;
	uint8                                         bSupportsAgent7 : 1;
	uint8                                         bSupportsAgent8 : 1;
	uint8                                         bSupportsAgent9 : 1;
	uint8                                         bSupportsAgent10 : 1;
	uint8                                         bSupportsAgent11 : 1;
	uint8                                         bSupportsAgent12 : 1;
	uint8                                         bSupportsAgent13 : 1;
	uint8                                         bSupportsAgent14 : 1;
	uint8                                         bSupportsAgent15 : 1;
	uint8                                         Pad_42[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavArea">();
	}
	static class UNavArea* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea>();
	}
};
static_assert(alignof(UNavArea) == 0x000008, "Wrong alignment on UNavArea");
static_assert(sizeof(UNavArea) == 0x000048, "Wrong size on UNavArea");
static_assert(offsetof(UNavArea, DefaultCost) == 0x000030, "Member 'UNavArea::DefaultCost' has a wrong offset!");
static_assert(offsetof(UNavArea, FixedAreaEnteringCost) == 0x000034, "Member 'UNavArea::FixedAreaEnteringCost' has a wrong offset!");
static_assert(offsetof(UNavArea, DrawColor) == 0x000038, "Member 'UNavArea::DrawColor' has a wrong offset!");
static_assert(offsetof(UNavArea, SupportedAgents) == 0x00003C, "Member 'UNavArea::SupportedAgents' has a wrong offset!");

class UNavAreaMeta : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavAreaMeta">();
	}
	static class UNavAreaMeta* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavAreaMeta>();
	}
};
static_assert(alignof(UNavAreaMeta) == 0x000008, "Wrong alignment on UNavAreaMeta");
static_assert(sizeof(UNavAreaMeta) == 0x000048, "Wrong size on UNavAreaMeta");

class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	TSubclassOf<class UNavArea>                   Agent0Area;
	TSubclassOf<class UNavArea>                   Agent1Area;
	TSubclassOf<class UNavArea>                   Agent2Area;
	TSubclassOf<class UNavArea>                   Agent3Area;
	TSubclassOf<class UNavArea>                   Agent4Area;
	TSubclassOf<class UNavArea>                   Agent5Area;
	TSubclassOf<class UNavArea>                   Agent6Area;
	TSubclassOf<class UNavArea>                   Agent7Area;
	TSubclassOf<class UNavArea>                   Agent8Area;
	TSubclassOf<class UNavArea>                   Agent9Area;
	TSubclassOf<class UNavArea>                   Agent10Area;
	TSubclassOf<class UNavArea>                   Agent11Area;
	TSubclassOf<class UNavArea>                   Agent12Area;
	TSubclassOf<class UNavArea>                   Agent13Area;
	TSubclassOf<class UNavArea>                   Agent14Area;
	TSubclassOf<class UNavArea>                   Agent15Area;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavAreaMeta_SwitchByAgent">();
	}
	static class UNavAreaMeta_SwitchByAgent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavAreaMeta_SwitchByAgent>();
	}
};
static_assert(alignof(UNavAreaMeta_SwitchByAgent) == 0x000008, "Wrong alignment on UNavAreaMeta_SwitchByAgent");
static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0x0000C8, "Wrong size on UNavAreaMeta_SwitchByAgent");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 0x000048, "Member 'UNavAreaMeta_SwitchByAgent::Agent0Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 0x000050, "Member 'UNavAreaMeta_SwitchByAgent::Agent1Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 0x000058, "Member 'UNavAreaMeta_SwitchByAgent::Agent2Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 0x000060, "Member 'UNavAreaMeta_SwitchByAgent::Agent3Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 0x000068, "Member 'UNavAreaMeta_SwitchByAgent::Agent4Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 0x000070, "Member 'UNavAreaMeta_SwitchByAgent::Agent5Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 0x000078, "Member 'UNavAreaMeta_SwitchByAgent::Agent6Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 0x000080, "Member 'UNavAreaMeta_SwitchByAgent::Agent7Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 0x000088, "Member 'UNavAreaMeta_SwitchByAgent::Agent8Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 0x000090, "Member 'UNavAreaMeta_SwitchByAgent::Agent9Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 0x000098, "Member 'UNavAreaMeta_SwitchByAgent::Agent10Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 0x0000A0, "Member 'UNavAreaMeta_SwitchByAgent::Agent11Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 0x0000A8, "Member 'UNavAreaMeta_SwitchByAgent::Agent12Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 0x0000B0, "Member 'UNavAreaMeta_SwitchByAgent::Agent13Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 0x0000B8, "Member 'UNavAreaMeta_SwitchByAgent::Agent14Area' has a wrong offset!");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 0x0000C0, "Member 'UNavAreaMeta_SwitchByAgent::Agent15Area' has a wrong offset!");

class UNavArea_Default final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavArea_Default">();
	}
	static class UNavArea_Default* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_Default>();
	}
};
static_assert(alignof(UNavArea_Default) == 0x000008, "Wrong alignment on UNavArea_Default");
static_assert(sizeof(UNavArea_Default) == 0x000048, "Wrong size on UNavArea_Default");

class UNavArea_LowHeight final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavArea_LowHeight">();
	}
	static class UNavArea_LowHeight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_LowHeight>();
	}
};
static_assert(alignof(UNavArea_LowHeight) == 0x000008, "Wrong alignment on UNavArea_LowHeight");
static_assert(sizeof(UNavArea_LowHeight) == 0x000048, "Wrong size on UNavArea_LowHeight");

class UNavArea_Null final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavArea_Null">();
	}
	static class UNavArea_Null* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_Null>();
	}
};
static_assert(alignof(UNavArea_Null) == 0x000008, "Wrong alignment on UNavArea_Null");
static_assert(sizeof(UNavArea_Null) == 0x000048, "Wrong size on UNavArea_Null");

class UNavArea_Obstacle final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavArea_Obstacle">();
	}
	static class UNavArea_Obstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_Obstacle>();
	}
};
static_assert(alignof(UNavArea_Obstacle) == 0x000008, "Wrong alignment on UNavArea_Obstacle");
static_assert(sizeof(UNavArea_Obstacle) == 0x000048, "Wrong size on UNavArea_Obstacle");

class UNavCollision final : public UNavCollisionBase
{
public:
	uint8                                         Pad_70[0x10];
	TArray<struct FNavCollisionCylinder>          CylinderCollision;
	TArray<struct FNavCollisionBox>               BoxCollision;
	TSubclassOf<class UNavArea>                   AreaClass;
	uint8                                         bGatherConvexGeometry : 1;
	uint8                                         bCreateOnClient : 1;
	uint8                                         Pad_A9[0x27];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavCollision">();
	}
	static class UNavCollision* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavCollision>();
	}
};
static_assert(alignof(UNavCollision) == 0x000008, "Wrong alignment on UNavCollision");
static_assert(sizeof(UNavCollision) == 0x0000D0, "Wrong size on UNavCollision");
static_assert(offsetof(UNavCollision, CylinderCollision) == 0x000080, "Member 'UNavCollision::CylinderCollision' has a wrong offset!");
static_assert(offsetof(UNavCollision, BoxCollision) == 0x000090, "Member 'UNavCollision::BoxCollision' has a wrong offset!");
static_assert(offsetof(UNavCollision, AreaClass) == 0x0000A0, "Member 'UNavCollision::AreaClass' has a wrong offset!");

class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>          Areas;
	struct FNavigationFilterFlags                 IncludeFlags;
	struct FNavigationFilterFlags                 ExcludeFlags;
	uint8                                         Pad_40[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationQueryFilter">();
	}
	static class UNavigationQueryFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationQueryFilter>();
	}
};
static_assert(alignof(UNavigationQueryFilter) == 0x000008, "Wrong alignment on UNavigationQueryFilter");
static_assert(sizeof(UNavigationQueryFilter) == 0x000048, "Wrong size on UNavigationQueryFilter");
static_assert(offsetof(UNavigationQueryFilter, Areas) == 0x000028, "Member 'UNavigationQueryFilter::Areas' has a wrong offset!");
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 0x000038, "Member 'UNavigationQueryFilter::IncludeFlags' has a wrong offset!");
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 0x00003C, "Member 'UNavigationQueryFilter::ExcludeFlags' has a wrong offset!");

class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RecastFilter_UseDefaultArea">();
	}
	static class URecastFilter_UseDefaultArea* GetDefaultObj()
	{
		return GetDefaultObjImpl<URecastFilter_UseDefaultArea>();
	}
};
static_assert(alignof(URecastFilter_UseDefaultArea) == 0x000008, "Wrong alignment on URecastFilter_UseDefaultArea");
static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x000048, "Wrong size on URecastFilter_UseDefaultArea");

class ANavigationGraph final : public ANavigationData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationGraph">();
	}
	static class ANavigationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavigationGraph>();
	}
};
static_assert(alignof(ANavigationGraph) == 0x000008, "Wrong alignment on ANavigationGraph");
static_assert(sizeof(ANavigationGraph) == 0x000498, "Wrong size on ANavigationGraph");

class UNavigationInvokerComponent final : public UActorComponent
{
public:
	float                                         TileGenerationRadius;
	float                                         TileRemovalRadius;
	struct FNavAgentSelector                      SupportedAgents;
	uint8                                         Pad_AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationInvokerComponent">();
	}
	static class UNavigationInvokerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationInvokerComponent>();
	}
};
static_assert(alignof(UNavigationInvokerComponent) == 0x000008, "Wrong alignment on UNavigationInvokerComponent");
static_assert(sizeof(UNavigationInvokerComponent) == 0x0000B0, "Wrong size on UNavigationInvokerComponent");
static_assert(offsetof(UNavigationInvokerComponent, TileGenerationRadius) == 0x0000A0, "Member 'UNavigationInvokerComponent::TileGenerationRadius' has a wrong offset!");
static_assert(offsetof(UNavigationInvokerComponent, TileRemovalRadius) == 0x0000A4, "Member 'UNavigationInvokerComponent::TileRemovalRadius' has a wrong offset!");
static_assert(offsetof(UNavigationInvokerComponent, SupportedAgents) == 0x0000A8, "Member 'UNavigationInvokerComponent::SupportedAgents' has a wrong offset!");

class UNavigationPath final : public UObject
{
public:
	TMulticastInlineDelegate<void(class UNavigationPath* AffectedPath, ENavPathEvent PathEvent)> PathUpdatedNotifier;
	TArray<struct FVector>                        PathPoints;
	ENavigationOptionFlag                         RecalculateOnInvalidation;
	uint8                                         Pad_49[0x3F];

public:
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
	void EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation);

	class FString GetDebugString() const;
	float GetPathCost() const;
	float GetPathLength() const;
	bool IsPartial() const;
	bool IsStringPulled() const;
	bool IsValid() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationPath">();
	}
	static class UNavigationPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationPath>();
	}
};
static_assert(alignof(UNavigationPath) == 0x000008, "Wrong alignment on UNavigationPath");
static_assert(sizeof(UNavigationPath) == 0x000088, "Wrong size on UNavigationPath");
static_assert(offsetof(UNavigationPath, PathUpdatedNotifier) == 0x000028, "Member 'UNavigationPath::PathUpdatedNotifier' has a wrong offset!");
static_assert(offsetof(UNavigationPath, PathPoints) == 0x000038, "Member 'UNavigationPath::PathPoints' has a wrong offset!");
static_assert(offsetof(UNavigationPath, RecalculateOnInvalidation) == 0x000048, "Member 'UNavigationPath::RecalculateOnInvalidation' has a wrong offset!");

class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                        MainNavData;
	class ANavigationData*                        AbstractNavData;
	class FName                                   DefaultAgentName;
	uint8                                         Pad_3C[0x4];
	TSoftClassPtr<class UClass>                   CrowdManagerClass;
	uint8                                         bAutoCreateNavigationData : 1;
	uint8                                         bSpawnNavDataInNavBoundsLevel : 1;
	uint8                                         bAllowClientSideNavigation : 1;
	uint8                                         bShouldDiscardSubLevelNavData : 1;
	uint8                                         bTickWhilePaused : 1;
	uint8                                         bSupportRebuilding : 1;
	uint8                                         bInitialBuildingLocked : 1;
	uint8                                         BitPad_68_7 : 1;
	uint8                                         bSkipAgentHeightCheckWhenPickingNavData : 1;
	uint8                                         Pad_6A[0x2];
	int32                                         GeometryExportVertexCountWarningThreshold;
	uint8                                         bGenerateNavigationOnlyAroundNavigationInvokers : 1;
	uint8                                         Pad_71[0x3];
	float                                         ActiveTilesUpdateInterval;
	ENavDataGatheringModeConfig                   DataGatheringMode;
	uint8                                         Pad_79[0x3];
	float                                         DirtyAreaWarningSizeThreshold;
	float                                         GatheringNavModifiersWarningLimitTime;
	uint8                                         Pad_84[0x4];
	TArray<struct FNavDataConfig>                 SupportedAgents;
	struct FNavAgentSelector                      SupportedAgentsMask;
	uint8                                         Pad_9C[0x4];
	struct FBox                                   BuildBounds;
	TArray<class ANavigationData*>                NavDataSet;
	TArray<class ANavigationData*>                NavDataRegistrationQueue;
	uint8                                         Pad_F8[0x10];
	TMulticastInlineDelegate<void(class ANavigationData* NavData)> OnNavDataRegisteredEvent;
	TMulticastInlineDelegate<void(class ANavigationData* NavData)> OnNavigationGenerationFinishedDelegate;
	uint8                                         Pad_128[0xDC];
	EFNavigationSystemRunMode                     OperationMode;
	uint8                                         Pad_205[0x1323];

public:
	static class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
	static ENavigationQueryResult GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static ENavigationQueryResult GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
	static bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	static bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	static bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent);
	static bool NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class AController* Querier);

	bool K2_ReplaceAreaInOctreeData(const class UObject* Object, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
	void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
	void UnregisterNavigationInvoker(class AActor* Invoker);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationSystemV1">();
	}
	static class UNavigationSystemV1* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationSystemV1>();
	}
};
static_assert(alignof(UNavigationSystemV1) == 0x000008, "Wrong alignment on UNavigationSystemV1");
static_assert(sizeof(UNavigationSystemV1) == 0x001528, "Wrong size on UNavigationSystemV1");
static_assert(offsetof(UNavigationSystemV1, MainNavData) == 0x000028, "Member 'UNavigationSystemV1::MainNavData' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 0x000030, "Member 'UNavigationSystemV1::AbstractNavData' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 0x000038, "Member 'UNavigationSystemV1::DefaultAgentName' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, CrowdManagerClass) == 0x000040, "Member 'UNavigationSystemV1::CrowdManagerClass' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, GeometryExportVertexCountWarningThreshold) == 0x00006C, "Member 'UNavigationSystemV1::GeometryExportVertexCountWarningThreshold' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, ActiveTilesUpdateInterval) == 0x000074, "Member 'UNavigationSystemV1::ActiveTilesUpdateInterval' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, DataGatheringMode) == 0x000078, "Member 'UNavigationSystemV1::DataGatheringMode' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, DirtyAreaWarningSizeThreshold) == 0x00007C, "Member 'UNavigationSystemV1::DirtyAreaWarningSizeThreshold' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, GatheringNavModifiersWarningLimitTime) == 0x000080, "Member 'UNavigationSystemV1::GatheringNavModifiersWarningLimitTime' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 0x000088, "Member 'UNavigationSystemV1::SupportedAgents' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 0x000098, "Member 'UNavigationSystemV1::SupportedAgentsMask' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, BuildBounds) == 0x0000A0, "Member 'UNavigationSystemV1::BuildBounds' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 0x0000D8, "Member 'UNavigationSystemV1::NavDataSet' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 0x0000E8, "Member 'UNavigationSystemV1::NavDataRegistrationQueue' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, OnNavDataRegisteredEvent) == 0x000108, "Member 'UNavigationSystemV1::OnNavDataRegisteredEvent' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, OnNavigationGenerationFinishedDelegate) == 0x000118, "Member 'UNavigationSystemV1::OnNavigationGenerationFinishedDelegate' has a wrong offset!");
static_assert(offsetof(UNavigationSystemV1, OperationMode) == 0x000204, "Member 'UNavigationSystemV1::OperationMode' has a wrong offset!");

class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	uint8                                         bStrictlyStatic : 1;
	uint8                                         bCreateOnClient : 1;
	uint8                                         bAutoSpawnMissingNavData : 1;
	uint8                                         bSpawnNavDataInNavBoundsLevel : 1;
	uint8                                         Pad_51[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationSystemModuleConfig">();
	}
	static class UNavigationSystemModuleConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationSystemModuleConfig>();
	}
};
static_assert(alignof(UNavigationSystemModuleConfig) == 0x000008, "Wrong alignment on UNavigationSystemModuleConfig");
static_assert(sizeof(UNavigationSystemModuleConfig) == 0x000058, "Wrong size on UNavigationSystemModuleConfig");

class ANavigationTestingActor final : public AActor
{
public:
	uint8                                         Pad_288[0x10];
	class UCapsuleComponent*                      CapsuleComponent;
	class UNavigationInvokerComponent*            InvokerComponent;
	uint8                                         bActAsNavigationInvoker : 1;
	uint8                                         Pad_2A9[0x7];
	struct FNavAgentProperties                    NavAgentProps;
	struct FVector                                QueryingExtent;
	class ANavigationData*                        MyNavData;
	struct FVector                                ProjectedLocation;
	uint8                                         bProjectedLocationValid : 1;
	uint8                                         bSearchStart : 1;
	uint8                                         Pad_319[0x3];
	float                                         CostLimitFactor;
	float                                         MinimumCostLimit;
	uint8                                         bBacktracking : 1;
	uint8                                         bUseHierarchicalPathfinding : 1;
	uint8                                         bGatherDetailedInfo : 1;
	uint8                                         bRequireNavigableEndLocation : 1;
	uint8                                         bDrawDistanceToWall : 1;
	uint8                                         bShowNodePool : 1;
	uint8                                         bShowBestPath : 1;
	uint8                                         bShowDiffWithPreviousStep : 1;
	uint8                                         bShouldBeVisibleInGame : 1;
	uint8                                         Pad_326[0x2];
	ENavCostDisplay                               CostDisplayMode;
	uint8                                         Pad_329[0x7];
	struct FVector2D                              TextCanvasOffset;
	uint8                                         bPathExist : 1;
	uint8                                         bPathIsPartial : 1;
	uint8                                         bPathSearchOutOfNodes : 1;
	uint8                                         Pad_341[0x3];
	float                                         PathfindingTime;
	float                                         PathCost;
	int32                                         PathfindingSteps;
	class ANavigationTestingActor*                OtherActor;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	int32                                         ShowStepIndex;
	float                                         OffsetFromCornersDistance;
	uint8                                         Pad_368[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavigationTestingActor">();
	}
	static class ANavigationTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavigationTestingActor>();
	}
};
static_assert(alignof(ANavigationTestingActor) == 0x000008, "Wrong alignment on ANavigationTestingActor");
static_assert(sizeof(ANavigationTestingActor) == 0x0003A0, "Wrong size on ANavigationTestingActor");
static_assert(offsetof(ANavigationTestingActor, CapsuleComponent) == 0x000298, "Member 'ANavigationTestingActor::CapsuleComponent' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, InvokerComponent) == 0x0002A0, "Member 'ANavigationTestingActor::InvokerComponent' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, NavAgentProps) == 0x0002B0, "Member 'ANavigationTestingActor::NavAgentProps' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, QueryingExtent) == 0x0002E0, "Member 'ANavigationTestingActor::QueryingExtent' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, MyNavData) == 0x0002F8, "Member 'ANavigationTestingActor::MyNavData' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, ProjectedLocation) == 0x000300, "Member 'ANavigationTestingActor::ProjectedLocation' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, CostLimitFactor) == 0x00031C, "Member 'ANavigationTestingActor::CostLimitFactor' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, MinimumCostLimit) == 0x000320, "Member 'ANavigationTestingActor::MinimumCostLimit' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, CostDisplayMode) == 0x000328, "Member 'ANavigationTestingActor::CostDisplayMode' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, TextCanvasOffset) == 0x000330, "Member 'ANavigationTestingActor::TextCanvasOffset' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, PathfindingTime) == 0x000344, "Member 'ANavigationTestingActor::PathfindingTime' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, PathCost) == 0x000348, "Member 'ANavigationTestingActor::PathCost' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, PathfindingSteps) == 0x00034C, "Member 'ANavigationTestingActor::PathfindingSteps' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, OtherActor) == 0x000350, "Member 'ANavigationTestingActor::OtherActor' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, FilterClass) == 0x000358, "Member 'ANavigationTestingActor::FilterClass' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, ShowStepIndex) == 0x000360, "Member 'ANavigationTestingActor::ShowStepIndex' has a wrong offset!");
static_assert(offsetof(ANavigationTestingActor, OffsetFromCornersDistance) == 0x000364, "Member 'ANavigationTestingActor::OffsetFromCornersDistance' has a wrong offset!");

class UNavLinkComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_568[0x8];
	TArray<struct FNavigationLink>                Links;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkComponent">();
	}
	static class UNavLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLinkComponent>();
	}
};
static_assert(alignof(UNavLinkComponent) == 0x000010, "Wrong alignment on UNavLinkComponent");
static_assert(sizeof(UNavLinkComponent) == 0x000580, "Wrong size on UNavLinkComponent");
static_assert(offsetof(UNavLinkComponent, Links) == 0x000570, "Member 'UNavLinkComponent::Links' has a wrong offset!");

class UNavRelevantComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x40];
	uint8                                         bAttachToOwnersRoot : 1;
	uint8                                         Pad_E1[0x7];
	class UObject*                                CachedNavParent;

public:
	void SetNavigationRelevancy(bool bRelevant);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavRelevantComponent">();
	}
	static class UNavRelevantComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavRelevantComponent>();
	}
};
static_assert(alignof(UNavRelevantComponent) == 0x000008, "Wrong alignment on UNavRelevantComponent");
static_assert(sizeof(UNavRelevantComponent) == 0x0000F0, "Wrong size on UNavRelevantComponent");
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 0x0000E8, "Member 'UNavRelevantComponent::CachedNavParent' has a wrong offset!");

class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	uint8                                         Pad_F0[0x8];
	uint32                                        NavLinkUserId;
	uint8                                         Pad_FC[0x4];
	TSubclassOf<class UNavArea>                   EnabledAreaClass;
	TSubclassOf<class UNavArea>                   DisabledAreaClass;
	struct FNavAgentSelector                      SupportedAgents;
	uint8                                         Pad_114[0x4];
	struct FVector                                LinkRelativeStart;
	struct FVector                                LinkRelativeEnd;
	ENavLinkDirection                             LinkDirection;
	uint8                                         Pad_149[0x3];
	uint8                                         bLinkEnabled : 1;
	uint8                                         bNotifyWhenEnabled : 1;
	uint8                                         bNotifyWhenDisabled : 1;
	uint8                                         bCreateBoxObstacle : 1;
	uint8                                         Pad_14D[0x3];
	struct FVector                                ObstacleOffset;
	struct FVector                                ObstacleExtent;
	TSubclassOf<class UNavArea>                   ObstacleAreaClass;
	float                                         BroadcastRadius;
	float                                         BroadcastInterval;
	ECollisionChannel                             BroadcastChannel;
	uint8                                         Pad_191[0x3F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkCustomComponent">();
	}
	static class UNavLinkCustomComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLinkCustomComponent>();
	}
};
static_assert(alignof(UNavLinkCustomComponent) == 0x000008, "Wrong alignment on UNavLinkCustomComponent");
static_assert(sizeof(UNavLinkCustomComponent) == 0x0001D0, "Wrong size on UNavLinkCustomComponent");
static_assert(offsetof(UNavLinkCustomComponent, NavLinkUserId) == 0x0000F8, "Member 'UNavLinkCustomComponent::NavLinkUserId' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 0x000100, "Member 'UNavLinkCustomComponent::EnabledAreaClass' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 0x000108, "Member 'UNavLinkCustomComponent::DisabledAreaClass' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 0x000110, "Member 'UNavLinkCustomComponent::SupportedAgents' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 0x000118, "Member 'UNavLinkCustomComponent::LinkRelativeStart' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 0x000130, "Member 'UNavLinkCustomComponent::LinkRelativeEnd' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, LinkDirection) == 0x000148, "Member 'UNavLinkCustomComponent::LinkDirection' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 0x000150, "Member 'UNavLinkCustomComponent::ObstacleOffset' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 0x000168, "Member 'UNavLinkCustomComponent::ObstacleExtent' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 0x000180, "Member 'UNavLinkCustomComponent::ObstacleAreaClass' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, BroadcastRadius) == 0x000188, "Member 'UNavLinkCustomComponent::BroadcastRadius' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, BroadcastInterval) == 0x00018C, "Member 'UNavLinkCustomComponent::BroadcastInterval' has a wrong offset!");
static_assert(offsetof(UNavLinkCustomComponent, BroadcastChannel) == 0x000190, "Member 'UNavLinkCustomComponent::BroadcastChannel' has a wrong offset!");

class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkRenderingComponent">();
	}
	static class UNavLinkRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLinkRenderingComponent>();
	}
};
static_assert(alignof(UNavLinkRenderingComponent) == 0x000010, "Wrong alignment on UNavLinkRenderingComponent");
static_assert(sizeof(UNavLinkRenderingComponent) == 0x000570, "Wrong size on UNavLinkRenderingComponent");

class ANavMeshBoundsVolume final : public AVolume
{
public:
	struct FNavAgentSelector                      SupportedAgents;
	uint8                                         Pad_2C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavMeshBoundsVolume">();
	}
	static class ANavMeshBoundsVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavMeshBoundsVolume>();
	}
};
static_assert(alignof(ANavMeshBoundsVolume) == 0x000008, "Wrong alignment on ANavMeshBoundsVolume");
static_assert(sizeof(ANavMeshBoundsVolume) == 0x0002C8, "Wrong size on ANavMeshBoundsVolume");
static_assert(offsetof(ANavMeshBoundsVolume, SupportedAgents) == 0x0002C0, "Member 'ANavMeshBoundsVolume::SupportedAgents' has a wrong offset!");

class UNavMeshRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                         Pad_5B8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavMeshRenderingComponent">();
	}
	static class UNavMeshRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavMeshRenderingComponent>();
	}
};
static_assert(alignof(UNavMeshRenderingComponent) == 0x000010, "Wrong alignment on UNavMeshRenderingComponent");
static_assert(sizeof(UNavMeshRenderingComponent) == 0x0005D0, "Wrong size on UNavMeshRenderingComponent");

class UNavTestRenderingComponent final : public UDebugDrawComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavTestRenderingComponent">();
	}
	static class UNavTestRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavTestRenderingComponent>();
	}
};
static_assert(alignof(UNavTestRenderingComponent) == 0x000010, "Wrong alignment on UNavTestRenderingComponent");
static_assert(sizeof(UNavTestRenderingComponent) == 0x0005C0, "Wrong size on UNavTestRenderingComponent");

class ARecastNavMesh : public ANavigationData
{
public:
	uint8                                         bDrawTriangleEdges : 1;
	uint8                                         bDrawPolyEdges : 1;
	uint8                                         bDrawFilledPolys : 1;
	uint8                                         bDrawNavMeshEdges : 1;
	uint8                                         bDrawTileBounds : 1;
	uint8                                         bDrawPathCollidingGeometry : 1;
	uint8                                         bDrawTileLabels : 1;
	uint8                                         bDrawTileBuildTimes : 1;
	uint8                                         bDrawTileBuildTimesHeatMap : 1;
	uint8                                         bDrawPolygonLabels : 1;
	uint8                                         bDrawDefaultPolygonCost : 1;
	uint8                                         bDrawPolygonFlags : 1;
	uint8                                         bDrawLabelsOnPathNodes : 1;
	uint8                                         bDrawNavLinks : 1;
	uint8                                         bDrawFailedNavLinks : 1;
	uint8                                         bDrawClusters : 1;
	uint8                                         bDrawOctree : 1;
	uint8                                         bDrawOctreeDetails : 1;
	uint8                                         bDrawMarkedForbiddenPolys : 1;
	uint8                                         bDistinctlyDrawTilesBeingBuilt : 1;
	uint8                                         Pad_49B[0x1];
	float                                         DrawOffset;
	struct FRecastNavMeshTileGenerationDebug      TileGenerationDebug;
	uint8                                         bFixedTilePoolSize : 1;
	uint8                                         Pad_4BD[0x3];
	int32                                         TilePoolSize;
	float                                         TileSizeUU;
	float                                         CellSize;
	float                                         CellHeight;
	struct FNavMeshResolutionParam                NavMeshResolutionParams[0x3];
	float                                         AgentRadius;
	float                                         AgentHeight;
	float                                         AgentMaxSlope;
	float                                         AgentMaxStepHeight;
	float                                         MinRegionArea;
	float                                         MergeRegionSize;
	float                                         MaxSimplificationError;
	int32                                         MaxSimultaneousTileGenerationJobsCount;
	int32                                         TileNumberHardLimit;
	int32                                         PolyRefTileBits;
	int32                                         PolyRefNavPolyBits;
	int32                                         PolyRefSaltBits;
	struct FVector                                NavMeshOriginOffset;
	float                                         DefaultDrawDistance;
	float                                         DefaultMaxSearchNodes;
	float                                         DefaultMaxHierarchicalSearchNodes;
	ERecastPartitioning                           RegionPartitioning;
	ERecastPartitioning                           LayerPartitioning;
	uint8                                         Pad_53E[0x2];
	int32                                         RegionChunkSplits;
	int32                                         LayerChunkSplits;
	uint8                                         bSortNavigationAreasByCost : 1;
	uint8                                         bIsWorldPartitioned : 1;
	uint8                                         bPerformVoxelFiltering : 1;
	uint8                                         bMarkLowHeightAreas : 1;
	uint8                                         bUseExtraTopCellWhenMarkingAreas : 1;
	uint8                                         bFilterLowSpanSequences : 1;
	uint8                                         bFilterLowSpanFromTileCache : 1;
	uint8                                         bDoFullyAsyncNavDataGathering : 1;
	uint8                                         bUseBetterOffsetsFromCorners : 1;
	uint8                                         bStoreEmptyTileLayers : 1;
	uint8                                         bUseVirtualFilters : 1;
	uint8                                         bUseVirtualGeometryFilteringAndDirtying : 1;
	uint8                                         bAllowNavLinkAsPathEnd : 1;
	uint8                                         Pad_54A[0x2];
	int32                                         TimeSliceFilterLedgeSpansMaxYProcess;
	double                                        TimeSliceLongDurationDebug;
	uint8                                         bUseVoxelCache : 1;
	uint8                                         Pad_559[0x3];
	float                                         TileSetUpdateInterval;
	float                                         HeuristicScale;
	float                                         VerticalDeviationFromGroundCompensation;
	uint8                                         Pad_568[0x30];

public:
	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea, bool ReplaceLinks);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RecastNavMesh">();
	}
	static class ARecastNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARecastNavMesh>();
	}
};
static_assert(alignof(ARecastNavMesh) == 0x000008, "Wrong alignment on ARecastNavMesh");
static_assert(sizeof(ARecastNavMesh) == 0x000598, "Wrong size on ARecastNavMesh");
static_assert(offsetof(ARecastNavMesh, DrawOffset) == 0x00049C, "Member 'ARecastNavMesh::DrawOffset' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TileGenerationDebug) == 0x0004A0, "Member 'ARecastNavMesh::TileGenerationDebug' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TilePoolSize) == 0x0004C0, "Member 'ARecastNavMesh::TilePoolSize' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TileSizeUU) == 0x0004C4, "Member 'ARecastNavMesh::TileSizeUU' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, CellSize) == 0x0004C8, "Member 'ARecastNavMesh::CellSize' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, CellHeight) == 0x0004CC, "Member 'ARecastNavMesh::CellHeight' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, NavMeshResolutionParams) == 0x0004D0, "Member 'ARecastNavMesh::NavMeshResolutionParams' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, AgentRadius) == 0x0004E8, "Member 'ARecastNavMesh::AgentRadius' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, AgentHeight) == 0x0004EC, "Member 'ARecastNavMesh::AgentHeight' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, AgentMaxSlope) == 0x0004F0, "Member 'ARecastNavMesh::AgentMaxSlope' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, AgentMaxStepHeight) == 0x0004F4, "Member 'ARecastNavMesh::AgentMaxStepHeight' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, MinRegionArea) == 0x0004F8, "Member 'ARecastNavMesh::MinRegionArea' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, MergeRegionSize) == 0x0004FC, "Member 'ARecastNavMesh::MergeRegionSize' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, MaxSimplificationError) == 0x000500, "Member 'ARecastNavMesh::MaxSimplificationError' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, MaxSimultaneousTileGenerationJobsCount) == 0x000504, "Member 'ARecastNavMesh::MaxSimultaneousTileGenerationJobsCount' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TileNumberHardLimit) == 0x000508, "Member 'ARecastNavMesh::TileNumberHardLimit' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, PolyRefTileBits) == 0x00050C, "Member 'ARecastNavMesh::PolyRefTileBits' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, PolyRefNavPolyBits) == 0x000510, "Member 'ARecastNavMesh::PolyRefNavPolyBits' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, PolyRefSaltBits) == 0x000514, "Member 'ARecastNavMesh::PolyRefSaltBits' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, NavMeshOriginOffset) == 0x000518, "Member 'ARecastNavMesh::NavMeshOriginOffset' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, DefaultDrawDistance) == 0x000530, "Member 'ARecastNavMesh::DefaultDrawDistance' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, DefaultMaxSearchNodes) == 0x000534, "Member 'ARecastNavMesh::DefaultMaxSearchNodes' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, DefaultMaxHierarchicalSearchNodes) == 0x000538, "Member 'ARecastNavMesh::DefaultMaxHierarchicalSearchNodes' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, RegionPartitioning) == 0x00053C, "Member 'ARecastNavMesh::RegionPartitioning' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, LayerPartitioning) == 0x00053D, "Member 'ARecastNavMesh::LayerPartitioning' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, RegionChunkSplits) == 0x000540, "Member 'ARecastNavMesh::RegionChunkSplits' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, LayerChunkSplits) == 0x000544, "Member 'ARecastNavMesh::LayerChunkSplits' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TimeSliceFilterLedgeSpansMaxYProcess) == 0x00054C, "Member 'ARecastNavMesh::TimeSliceFilterLedgeSpansMaxYProcess' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TimeSliceLongDurationDebug) == 0x000550, "Member 'ARecastNavMesh::TimeSliceLongDurationDebug' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, TileSetUpdateInterval) == 0x00055C, "Member 'ARecastNavMesh::TileSetUpdateInterval' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, HeuristicScale) == 0x000560, "Member 'ARecastNavMesh::HeuristicScale' has a wrong offset!");
static_assert(offsetof(ARecastNavMesh, VerticalDeviationFromGroundCompensation) == 0x000564, "Member 'ARecastNavMesh::VerticalDeviationFromGroundCompensation' has a wrong offset!");

class URecastNavMeshDataChunk final : public UNavigationDataChunk
{
public:
	uint8                                         Pad_30[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RecastNavMeshDataChunk">();
	}
	static class URecastNavMeshDataChunk* GetDefaultObj()
	{
		return GetDefaultObjImpl<URecastNavMeshDataChunk>();
	}
};
static_assert(alignof(URecastNavMeshDataChunk) == 0x000008, "Wrong alignment on URecastNavMeshDataChunk");
static_assert(sizeof(URecastNavMeshDataChunk) == 0x000040, "Wrong size on URecastNavMeshDataChunk");

class alignas(0x10) UNavModifierComponent : public UNavRelevantComponent
{
public:
	TSubclassOf<class UNavArea>                   AreaClass;
	struct FVector                                FailsafeExtent;
	uint8                                         bIncludeAgentHeight : 1;
	uint8                                         Pad_111[0x7F];

public:
	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavModifierComponent">();
	}
	static class UNavModifierComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavModifierComponent>();
	}
};
static_assert(alignof(UNavModifierComponent) == 0x000010, "Wrong alignment on UNavModifierComponent");
static_assert(sizeof(UNavModifierComponent) == 0x000190, "Wrong size on UNavModifierComponent");
static_assert(offsetof(UNavModifierComponent, AreaClass) == 0x0000F0, "Member 'UNavModifierComponent::AreaClass' has a wrong offset!");
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 0x0000F8, "Member 'UNavModifierComponent::FailsafeExtent' has a wrong offset!");

class ANavModifierVolume : public AVolume
{
public:
	uint8                                         Pad_2C0[0x8];
	TSubclassOf<class UNavArea>                   AreaClass;
	bool                                          bMaskFillCollisionUnderneathForNavmesh;
	ENavigationDataResolution                     NavMeshResolution;
	uint8                                         Pad_2D2[0x6];

public:
	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavModifierVolume">();
	}
	static class ANavModifierVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavModifierVolume>();
	}
};
static_assert(alignof(ANavModifierVolume) == 0x000008, "Wrong alignment on ANavModifierVolume");
static_assert(sizeof(ANavModifierVolume) == 0x0002D8, "Wrong size on ANavModifierVolume");
static_assert(offsetof(ANavModifierVolume, AreaClass) == 0x0002C8, "Member 'ANavModifierVolume::AreaClass' has a wrong offset!");
static_assert(offsetof(ANavModifierVolume, bMaskFillCollisionUnderneathForNavmesh) == 0x0002D0, "Member 'ANavModifierVolume::bMaskFillCollisionUnderneathForNavmesh' has a wrong offset!");
static_assert(offsetof(ANavModifierVolume, NavMeshResolution) == 0x0002D1, "Member 'ANavModifierVolume::NavMeshResolution' has a wrong offset!");

class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                NavigationSystemConfig;
	ENavSystemOverridePolicy                      OverridePolicy;
	uint8                                         bLoadOnClient : 1;
	uint8                                         Pad_292[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavSystemConfigOverride">();
	}
	static class ANavSystemConfigOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavSystemConfigOverride>();
	}
};
static_assert(alignof(ANavSystemConfigOverride) == 0x000008, "Wrong alignment on ANavSystemConfigOverride");
static_assert(sizeof(ANavSystemConfigOverride) == 0x000298, "Wrong size on ANavSystemConfigOverride");
static_assert(offsetof(ANavSystemConfigOverride, NavigationSystemConfig) == 0x000288, "Member 'ANavSystemConfigOverride::NavigationSystemConfig' has a wrong offset!");
static_assert(offsetof(ANavSystemConfigOverride, OverridePolicy) == 0x000290, "Member 'ANavSystemConfigOverride::OverridePolicy' has a wrong offset!");

}
