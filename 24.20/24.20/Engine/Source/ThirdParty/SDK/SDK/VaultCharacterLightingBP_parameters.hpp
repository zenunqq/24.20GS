#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong alignment on VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail");
static_assert(sizeof(VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong size on VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail");
static_assert(offsetof(VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail, Visibility) == 0x000000, "Member 'VaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail::Visibility' has a wrong offset!");

struct VaultCharacterLightingBP_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(VaultCharacterLightingBP_C_SwitchPCLighting) == 0x000001, "Wrong alignment on VaultCharacterLightingBP_C_SwitchPCLighting");
static_assert(sizeof(VaultCharacterLightingBP_C_SwitchPCLighting) == 0x000001, "Wrong size on VaultCharacterLightingBP_C_SwitchPCLighting");
static_assert(offsetof(VaultCharacterLightingBP_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'VaultCharacterLightingBP_C_SwitchPCLighting::Visibility' has a wrong offset!");

struct VaultCharacterLightingBP_C_SwitchMobileLighting final
{
public:
	bool                                          Visibilty;
};
static_assert(alignof(VaultCharacterLightingBP_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on VaultCharacterLightingBP_C_SwitchMobileLighting");
static_assert(sizeof(VaultCharacterLightingBP_C_SwitchMobileLighting) == 0x000001, "Wrong size on VaultCharacterLightingBP_C_SwitchMobileLighting");
static_assert(offsetof(VaultCharacterLightingBP_C_SwitchMobileLighting, Visibilty) == 0x000000, "Member 'VaultCharacterLightingBP_C_SwitchMobileLighting::Visibilty' has a wrong offset!");

struct VaultCharacterLightingBP_C_LightControl final
{
public:
	bool                                          NewParam;
};
static_assert(alignof(VaultCharacterLightingBP_C_LightControl) == 0x000001, "Wrong alignment on VaultCharacterLightingBP_C_LightControl");
static_assert(sizeof(VaultCharacterLightingBP_C_LightControl) == 0x000001, "Wrong size on VaultCharacterLightingBP_C_LightControl");
static_assert(offsetof(VaultCharacterLightingBP_C_LightControl, NewParam) == 0x000000, "Member 'VaultCharacterLightingBP_C_LightControl::NewParam' has a wrong offset!");

struct VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	uint8                                         Pad_6[0x2];
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_1;
	int32                                         CallFunc_GetShadowQuality_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          K2Node_CustomEvent_NewParam;
	uint8                                         Pad_27[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsErebus_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_IsErebus_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_4;
};
static_assert(alignof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP) == 0x000008, "Wrong alignment on VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP");
static_assert(sizeof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP) == 0x000038, "Wrong size on VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, EntryPoint) == 0x000000, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_IsErebus_ReturnValue) == 0x000004, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_IsMobilePlatform_ReturnValue) == 0x000005, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_IsMobilePlatform_ReturnValue_1) == 0x000014, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_IsMobilePlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000015, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_BooleanOR_ReturnValue) == 0x000016, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_BooleanOR_ReturnValue_1) == 0x000017, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_GetGameUserSettings_ReturnValue_1) == 0x000018, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_GetGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_GetShadowQuality_ReturnValue_1) == 0x000020, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_GetShadowQuality_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000024, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_BooleanOR_ReturnValue_2) == 0x000025, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, K2Node_CustomEvent_NewParam) == 0x000026, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_IsErebus_ReturnValue_1) == 0x000034, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_IsErebus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_BooleanOR_ReturnValue_3) == 0x000035, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_IsErebus_ReturnValue_2) == 0x000036, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_IsErebus_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_BooleanOR_ReturnValue_4) == 0x000037, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");

}
