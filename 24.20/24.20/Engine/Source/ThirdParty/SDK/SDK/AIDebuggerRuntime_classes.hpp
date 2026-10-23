#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_classes.hpp"
#include "AIDebuggerRuntime_structs.hpp"

namespace SDK
{

class UAIDebuggerCheatManager final : public UChildCheatManager
{
public:
	void EnableNavMeshVisualizer(const bool bEnable);
	void NextNavMesh();
	void StartAIDebugger(const class FString& AIDebuggerSoftClassPath);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIDebuggerCheatManager">();
	}
	static class UAIDebuggerCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDebuggerCheatManager>();
	}
};
static_assert(alignof(UAIDebuggerCheatManager) == 0x000008, "Wrong alignment on UAIDebuggerCheatManager");
static_assert(sizeof(UAIDebuggerCheatManager) == 0x000028, "Wrong size on UAIDebuggerCheatManager");

class UAIDebuggerRendererComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_568[0x98];
	class UMaterial*                              NavMeshMaterial;
	float                                         NavLinkLineThickness;
	float                                         NavLinkMaxDrawDistance;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIDebuggerRendererComponent">();
	}
	static class UAIDebuggerRendererComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDebuggerRendererComponent>();
	}
};
static_assert(alignof(UAIDebuggerRendererComponent) == 0x000010, "Wrong alignment on UAIDebuggerRendererComponent");
static_assert(sizeof(UAIDebuggerRendererComponent) == 0x000610, "Wrong size on UAIDebuggerRendererComponent");
static_assert(offsetof(UAIDebuggerRendererComponent, NavMeshMaterial) == 0x000600, "Member 'UAIDebuggerRendererComponent::NavMeshMaterial' has a wrong offset!");
static_assert(offsetof(UAIDebuggerRendererComponent, NavLinkLineThickness) == 0x000608, "Member 'UAIDebuggerRendererComponent::NavLinkLineThickness' has a wrong offset!");
static_assert(offsetof(UAIDebuggerRendererComponent, NavLinkMaxDrawDistance) == 0x00060C, "Member 'UAIDebuggerRendererComponent::NavLinkMaxDrawDistance' has a wrong offset!");

class UFortControllerComponent_AIDebugger final : public UFortControllerComponent
{
public:
	class APlayerController*                      OwnerPC;
	TSubclassOf<class UAIDebuggerRendererComponent> NavMeshRendererComponentClass;
	uint8                                         DefaultEnabledVisualizers;
	uint8                                         Pad_B9[0x3];
	int32                                         DefaultNavDataIndexToDisplay;
	uint8                                         EnabledVisualizers;
	uint8                                         NumNavMeshes;
	uint8                                         Pad_C2[0x1E];

public:
	void OnPlayerExitedIsland(const struct FEventMessageTag& Channel, const struct FPlayerExitSpatialActorContext& PlayerExitSpatialActorContext);
	void OnRep_EnabledVisualizers();
	void SetVisualizationEnable(const EAIDebuggerVisualization VisualizationType, const bool bEnable);
	void VisualizeNavMeshID(const int32 NavMeshID);
	void VisualizeNextNavMesh();

	class UAIDebuggerRendererComponent* GetOrCreateRenderer() const;
	bool IsVisualizationEnabled(const EAIDebuggerVisualization VisualizationType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_AIDebugger">();
	}
	static class UFortControllerComponent_AIDebugger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_AIDebugger>();
	}
};
static_assert(alignof(UFortControllerComponent_AIDebugger) == 0x000008, "Wrong alignment on UFortControllerComponent_AIDebugger");
static_assert(sizeof(UFortControllerComponent_AIDebugger) == 0x0000E0, "Wrong size on UFortControllerComponent_AIDebugger");
static_assert(offsetof(UFortControllerComponent_AIDebugger, OwnerPC) == 0x0000A8, "Member 'UFortControllerComponent_AIDebugger::OwnerPC' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AIDebugger, NavMeshRendererComponentClass) == 0x0000B0, "Member 'UFortControllerComponent_AIDebugger::NavMeshRendererComponentClass' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AIDebugger, DefaultEnabledVisualizers) == 0x0000B8, "Member 'UFortControllerComponent_AIDebugger::DefaultEnabledVisualizers' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AIDebugger, DefaultNavDataIndexToDisplay) == 0x0000BC, "Member 'UFortControllerComponent_AIDebugger::DefaultNavDataIndexToDisplay' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AIDebugger, EnabledVisualizers) == 0x0000C0, "Member 'UFortControllerComponent_AIDebugger::EnabledVisualizers' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AIDebugger, NumNavMeshes) == 0x0000C1, "Member 'UFortControllerComponent_AIDebugger::NumNavMeshes' has a wrong offset!");

}
