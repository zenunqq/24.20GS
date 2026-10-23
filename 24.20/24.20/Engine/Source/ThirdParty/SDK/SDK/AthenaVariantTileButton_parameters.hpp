#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AthenaVariantTileButton_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(AthenaVariantTileButton_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on AthenaVariantTileButton_C_OnListItemObjectSet");
static_assert(sizeof(AthenaVariantTileButton_C_OnListItemObjectSet) == 0x000008, "Wrong size on AthenaVariantTileButton_C_OnListItemObjectSet");
static_assert(offsetof(AthenaVariantTileButton_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'AthenaVariantTileButton_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

struct AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	class UObject*                                K2Node_Event_ListItemObject;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_49[0x7];
	struct FVector2D                              K2Node_Select_Default;
};
static_assert(alignof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton) == 0x000008, "Wrong alignment on AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton");
static_assert(sizeof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton) == 0x000060, "Wrong size on AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, EntryPoint) == 0x000000, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, Temp_bool_Variable) == 0x000004, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, Temp_struct_Variable) == 0x000008, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, Temp_struct_Variable_1) == 0x000018, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, K2Node_Event_ListItemObject) == 0x000028, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, CallFunc_IsVisible_ReturnValue) == 0x000038, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, CallFunc_IsMobileGame_ReturnValue) == 0x000048, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton, K2Node_Select_Default) == 0x000050, "Member 'AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton::K2Node_Select_Default' has a wrong offset!");

}
