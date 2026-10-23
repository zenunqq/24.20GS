#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct VaultWorld_C_OnUpdateDisplay final
{
public:
	bool                                          bShowFloor;
	bool                                          bShowEffects;
};
static_assert(alignof(VaultWorld_C_OnUpdateDisplay) == 0x000001, "Wrong alignment on VaultWorld_C_OnUpdateDisplay");
static_assert(sizeof(VaultWorld_C_OnUpdateDisplay) == 0x000002, "Wrong size on VaultWorld_C_OnUpdateDisplay");
static_assert(offsetof(VaultWorld_C_OnUpdateDisplay, bShowFloor) == 0x000000, "Member 'VaultWorld_C_OnUpdateDisplay::bShowFloor' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_OnUpdateDisplay, bShowEffects) == 0x000001, "Member 'VaultWorld_C_OnUpdateDisplay::bShowEffects' has a wrong offset!");

struct VaultWorld_C_GetVaultRotator final
{
public:
	class AVaultRotator_C*                        VaultRotator;
	class AVaultRotator_C*                        K2Node_DynamicCast_AsVault_Rotator;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(VaultWorld_C_GetVaultRotator) == 0x000008, "Wrong alignment on VaultWorld_C_GetVaultRotator");
static_assert(sizeof(VaultWorld_C_GetVaultRotator) == 0x000018, "Wrong size on VaultWorld_C_GetVaultRotator");
static_assert(offsetof(VaultWorld_C_GetVaultRotator, VaultRotator) == 0x000000, "Member 'VaultWorld_C_GetVaultRotator::VaultRotator' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_GetVaultRotator, K2Node_DynamicCast_AsVault_Rotator) == 0x000008, "Member 'VaultWorld_C_GetVaultRotator::K2Node_DynamicCast_AsVault_Rotator' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_GetVaultRotator, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'VaultWorld_C_GetVaultRotator::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct VaultWorld_C_OnTransitionItemDetails final
{
public:
	bool                                          bShowItemDetails;
};
static_assert(alignof(VaultWorld_C_OnTransitionItemDetails) == 0x000001, "Wrong alignment on VaultWorld_C_OnTransitionItemDetails");
static_assert(sizeof(VaultWorld_C_OnTransitionItemDetails) == 0x000001, "Wrong size on VaultWorld_C_OnTransitionItemDetails");
static_assert(offsetof(VaultWorld_C_OnTransitionItemDetails, bShowItemDetails) == 0x000000, "Member 'VaultWorld_C_OnTransitionItemDetails::bShowItemDetails' has a wrong offset!");

struct VaultWorld_C_ExecuteUbergraph_VaultWorld final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	const class UTexture2D*                       K2Node_Event_LoadedBackgroundTexture;
	struct FVaultWorldBackgroundData              K2Node_Event_BackgroundInfo;
	bool                                          K2Node_Event_bPlayForward;
	EBackgroundIntensityLevel                     K2Node_Event_IntensityTransition;
	uint8                                         Pad_82[0x6];
	class AFortStaticMeshActor*                   K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_Event_bShowFloor;
	bool                                          K2Node_Event_bShowEffects;
	bool                                          K2Node_Event_bShowItemDetails;
};
static_assert(alignof(VaultWorld_C_ExecuteUbergraph_VaultWorld) == 0x000008, "Wrong alignment on VaultWorld_C_ExecuteUbergraph_VaultWorld");
static_assert(sizeof(VaultWorld_C_ExecuteUbergraph_VaultWorld) == 0x000098, "Wrong size on VaultWorld_C_ExecuteUbergraph_VaultWorld");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, EntryPoint) == 0x000000, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000010, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_LoadedBackgroundTexture) == 0x000018, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_LoadedBackgroundTexture' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_BackgroundInfo) == 0x000020, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_BackgroundInfo' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_bPlayForward) == 0x000080, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_bPlayForward' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_IntensityTransition) == 0x000081, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_IntensityTransition' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_DynamicCast_AsFort_Static_Mesh_Actor) == 0x000088, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_DynamicCast_AsFort_Static_Mesh_Actor' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_bShowFloor) == 0x000091, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_bShowFloor' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_bShowEffects) == 0x000092, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_bShowEffects' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_ExecuteUbergraph_VaultWorld, K2Node_Event_bShowItemDetails) == 0x000093, "Member 'VaultWorld_C_ExecuteUbergraph_VaultWorld::K2Node_Event_bShowItemDetails' has a wrong offset!");

struct VaultWorld_C_OnTransitionBackground final
{
public:
	bool                                          bPlayForward;
	EBackgroundIntensityLevel                     IntensityTransition;
};
static_assert(alignof(VaultWorld_C_OnTransitionBackground) == 0x000001, "Wrong alignment on VaultWorld_C_OnTransitionBackground");
static_assert(sizeof(VaultWorld_C_OnTransitionBackground) == 0x000002, "Wrong size on VaultWorld_C_OnTransitionBackground");
static_assert(offsetof(VaultWorld_C_OnTransitionBackground, bPlayForward) == 0x000000, "Member 'VaultWorld_C_OnTransitionBackground::bPlayForward' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_OnTransitionBackground, IntensityTransition) == 0x000001, "Member 'VaultWorld_C_OnTransitionBackground::IntensityTransition' has a wrong offset!");

struct VaultWorld_C_OnSetupBackground final
{
public:
	const class UTexture2D*                       LoadedBackgroundTexture;
	struct FVaultWorldBackgroundData              BackgroundInfo;
};
static_assert(alignof(VaultWorld_C_OnSetupBackground) == 0x000008, "Wrong alignment on VaultWorld_C_OnSetupBackground");
static_assert(sizeof(VaultWorld_C_OnSetupBackground) == 0x000068, "Wrong size on VaultWorld_C_OnSetupBackground");
static_assert(offsetof(VaultWorld_C_OnSetupBackground, LoadedBackgroundTexture) == 0x000000, "Member 'VaultWorld_C_OnSetupBackground::LoadedBackgroundTexture' has a wrong offset!");
static_assert(offsetof(VaultWorld_C_OnSetupBackground, BackgroundInfo) == 0x000008, "Member 'VaultWorld_C_OnSetupBackground::BackgroundInfo' has a wrong offset!");

}
