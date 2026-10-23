#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified final
{
public:
	int32                                         DefaultOptionIndex;
};
static_assert(alignof(SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified) == 0x000004, "Wrong alignment on SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified");
static_assert(sizeof(SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified) == 0x000004, "Wrong size on SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified");
static_assert(offsetof(SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified, DefaultOptionIndex) == 0x000000, "Member 'SettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified::DefaultOptionIndex' has a wrong offset!");

struct SettingsRotator_Narrow_C_BP_OnOptionSelected final
{
public:
	int32                                         Index_0;
};
static_assert(alignof(SettingsRotator_Narrow_C_BP_OnOptionSelected) == 0x000004, "Wrong alignment on SettingsRotator_Narrow_C_BP_OnOptionSelected");
static_assert(sizeof(SettingsRotator_Narrow_C_BP_OnOptionSelected) == 0x000004, "Wrong size on SettingsRotator_Narrow_C_BP_OnOptionSelected");
static_assert(offsetof(SettingsRotator_Narrow_C_BP_OnOptionSelected, Index_0) == 0x000000, "Member 'SettingsRotator_Narrow_C_BP_OnOptionSelected::Index_0' has a wrong offset!");

struct SettingsRotator_Narrow_C_BP_OnOptionsPopulated final
{
public:
	int32                                         Count;
};
static_assert(alignof(SettingsRotator_Narrow_C_BP_OnOptionsPopulated) == 0x000004, "Wrong alignment on SettingsRotator_Narrow_C_BP_OnOptionsPopulated");
static_assert(sizeof(SettingsRotator_Narrow_C_BP_OnOptionsPopulated) == 0x000004, "Wrong size on SettingsRotator_Narrow_C_BP_OnOptionsPopulated");
static_assert(offsetof(SettingsRotator_Narrow_C_BP_OnOptionsPopulated, Count) == 0x000000, "Member 'SettingsRotator_Narrow_C_BP_OnOptionsPopulated::Count' has a wrong offset!");

struct SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_Event_Count;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	int32                                         K2Node_Event_Index;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	int32                                         K2Node_Event_DefaultOptionIndex;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;
	uint8                                         Pad_2C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow) == 0x000008, "Wrong alignment on SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow");
static_assert(sizeof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow) == 0x000048, "Wrong size on SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, EntryPoint) == 0x000000, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, K2Node_Event_Count) == 0x000004, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, K2Node_Event_Index) == 0x000014, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::K2Node_Event_Index' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000018, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, K2Node_Event_DefaultOptionIndex) == 0x00001C, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::K2Node_Event_DefaultOptionIndex' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000020, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000028, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000030, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'SettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
