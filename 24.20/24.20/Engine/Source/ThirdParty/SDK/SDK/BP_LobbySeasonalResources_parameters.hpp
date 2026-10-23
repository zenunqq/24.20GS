#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortBattlePassContext*                 CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x7];
	class FText                                   CallFunc_GetCurrentSeasonNumberAsText_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_31[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_99[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
	bool                                          K2Node_Event_bShouldShowMoreInfo;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources) == 0x000008, "Wrong alignment on BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources");
static_assert(sizeof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources) == 0x0000D0, "Wrong size on BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, EntryPoint) == 0x000000, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, Temp_bool_Variable) == 0x000010, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, CallFunc_GetCurrentSeasonNumberAsText_ReturnValue) == 0x000018, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::CallFunc_GetCurrentSeasonNumberAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, Temp_byte_Variable) == 0x000030, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, K2Node_MakeArray_Array) == 0x000088, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, Temp_byte_Variable_1) == 0x000098, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, K2Node_ComponentBoundEvent_Button_1) == 0x0000B8, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, K2Node_ComponentBoundEvent_Button) == 0x0000C0, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, K2Node_Event_bShouldShowMoreInfo) == 0x0000C8, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::K2Node_Event_bShouldShowMoreInfo' has a wrong offset!");
static_assert(offsetof(BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources, K2Node_Select_Default) == 0x0000C9, "Member 'BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources::K2Node_Select_Default' has a wrong offset!");

struct BP_LobbySeasonalResources_C_OnShowMoreInfo final
{
public:
	bool                                          bShouldShowMoreInfo;
};
static_assert(alignof(BP_LobbySeasonalResources_C_OnShowMoreInfo) == 0x000001, "Wrong alignment on BP_LobbySeasonalResources_C_OnShowMoreInfo");
static_assert(sizeof(BP_LobbySeasonalResources_C_OnShowMoreInfo) == 0x000001, "Wrong size on BP_LobbySeasonalResources_C_OnShowMoreInfo");
static_assert(offsetof(BP_LobbySeasonalResources_C_OnShowMoreInfo, bShouldShowMoreInfo) == 0x000000, "Member 'BP_LobbySeasonalResources_C_OnShowMoreInfo::bShouldShowMoreInfo' has a wrong offset!");

}
