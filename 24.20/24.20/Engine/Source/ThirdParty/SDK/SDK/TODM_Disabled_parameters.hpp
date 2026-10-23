#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_CustomEvent_Enable;
	uint8                                         Pad_5[0x3];
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          K2Node_SwitchInteger_CmpSuccess;
};
static_assert(alignof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled) == 0x000008, "Wrong alignment on TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled");
static_assert(sizeof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled) == 0x000020, "Wrong size on TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, EntryPoint) == 0x000000, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::EntryPoint' has a wrong offset!");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, K2Node_CustomEvent_Enable) == 0x000004, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000018, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled, K2Node_SwitchInteger_CmpSuccess) == 0x00001C, "Member 'TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

struct TODM_Disabled_C_DisableLightAndFog final
{
public:
	bool                                          Enable;
};
static_assert(alignof(TODM_Disabled_C_DisableLightAndFog) == 0x000001, "Wrong alignment on TODM_Disabled_C_DisableLightAndFog");
static_assert(sizeof(TODM_Disabled_C_DisableLightAndFog) == 0x000001, "Wrong size on TODM_Disabled_C_DisableLightAndFog");
static_assert(offsetof(TODM_Disabled_C_DisableLightAndFog, Enable) == 0x000000, "Member 'TODM_Disabled_C_DisableLightAndFog::Enable' has a wrong offset!");

}
