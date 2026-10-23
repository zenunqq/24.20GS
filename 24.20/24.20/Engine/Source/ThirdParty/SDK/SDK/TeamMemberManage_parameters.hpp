#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature final
{
public:
	class FName                                   IconId;
	class FName                                   ColorId;
};
static_assert(alignof(TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature) == 0x000004, "Wrong alignment on TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature");
static_assert(sizeof(TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature) == 0x000008, "Wrong size on TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature");
static_assert(offsetof(TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature, IconId) == 0x000000, "Member 'TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature::IconId' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature, ColorId) == 0x000004, "Member 'TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature::ColorId' has a wrong offset!");

struct TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature final
{
public:
	class UWidget*                                ActiveWidget;
	int32                                         ActiveWidgetIndex;
};
static_assert(alignof(TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature) == 0x000008, "Wrong alignment on TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature");
static_assert(sizeof(TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature) == 0x000010, "Wrong size on TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature");
static_assert(offsetof(TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature, ActiveWidget) == 0x000000, "Member 'TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature::ActiveWidget' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature, ActiveWidgetIndex) == 0x000008, "Member 'TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature::ActiveWidgetIndex' has a wrong offset!");

struct TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x7];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          K2Node_Event_bIsParticipating;
	uint8                                         Pad_49[0x7];
	class FText                                   K2Node_Select_Default;
	class FName                                   K2Node_ComponentBoundEvent_IconId;
	class FName                                   K2Node_ComponentBoundEvent_ColorId;
	class UWidget*                                K2Node_ComponentBoundEvent_ActiveWidget;
	int32                                         K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_7D[0x3];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage) == 0x000008, "Wrong alignment on TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage");
static_assert(sizeof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage) == 0x000090, "Wrong size on TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, EntryPoint) == 0x000000, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, Temp_bool_Variable) == 0x000010, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, Temp_text_Variable) == 0x000018, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, Temp_text_Variable_1) == 0x000030, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_Event_bIsParticipating) == 0x000048, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_Event_bIsParticipating' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_Select_Default) == 0x000050, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_ComponentBoundEvent_IconId) == 0x000068, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_ComponentBoundEvent_IconId' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_ComponentBoundEvent_ColorId) == 0x00006C, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_ComponentBoundEvent_ColorId' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_ComponentBoundEvent_ActiveWidget) == 0x000070, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_ComponentBoundEvent_ActiveWidget' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_ComponentBoundEvent_ActiveWidgetIndex) == 0x000078, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_ComponentBoundEvent_ActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00007C, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000080, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct TeamMemberManage_C_OnParticipationChanged final
{
public:
	bool                                          bIsParticipating;
};
static_assert(alignof(TeamMemberManage_C_OnParticipationChanged) == 0x000001, "Wrong alignment on TeamMemberManage_C_OnParticipationChanged");
static_assert(sizeof(TeamMemberManage_C_OnParticipationChanged) == 0x000001, "Wrong size on TeamMemberManage_C_OnParticipationChanged");
static_assert(offsetof(TeamMemberManage_C_OnParticipationChanged, bIsParticipating) == 0x000000, "Member 'TeamMemberManage_C_OnParticipationChanged::bIsParticipating' has a wrong offset!");

}
