#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	TSoftObjectPtr<class UObject>                 K2Node_CustomEvent_Asset;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo");
static_assert(sizeof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo) == 0x000068, "Wrong size on WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, EntryPoint) == 0x000000, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, Temp_object_Variable) == 0x000010, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, K2Node_CustomEvent_Asset) == 0x000028, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::K2Node_CustomEvent_Asset' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000050, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9");
static_assert(sizeof(WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9) == 0x000008, "Wrong size on WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9, Loaded) == 0x000000, "Member 'WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9::Loaded' has a wrong offset!");

struct WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon final
{
public:
	TSoftObjectPtr<class UObject>                 Asset;
};
static_assert(alignof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon");
static_assert(sizeof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon) == 0x000028, "Wrong size on WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon, Asset) == 0x000000, "Member 'WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon::Asset' has a wrong offset!");

struct WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo final
{
public:
	class UFortPlayerAugmentItemDefinition*       InAugmentItemDefinition;
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetHUDEffectImage_ReturnValue;
};
static_assert(alignof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo");
static_assert(sizeof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo) == 0x000030, "Wrong size on WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo, InAugmentItemDefinition) == 0x000000, "Member 'WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo::InAugmentItemDefinition' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo, CallFunc_GetHUDEffectImage_ReturnValue) == 0x000008, "Member 'WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo::CallFunc_GetHUDEffectImage_ReturnValue' has a wrong offset!");

}
