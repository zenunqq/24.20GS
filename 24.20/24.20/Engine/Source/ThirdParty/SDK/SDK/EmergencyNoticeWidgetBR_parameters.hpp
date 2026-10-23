#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EmergencyNoticeWidgetBR_C_ShowNotice final
{
public:
	class FText                                   Title;
	class FText                                   Body;
};
static_assert(alignof(EmergencyNoticeWidgetBR_C_ShowNotice) == 0x000008, "Wrong alignment on EmergencyNoticeWidgetBR_C_ShowNotice");
static_assert(sizeof(EmergencyNoticeWidgetBR_C_ShowNotice) == 0x000030, "Wrong size on EmergencyNoticeWidgetBR_C_ShowNotice");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_ShowNotice, Title) == 0x000000, "Member 'EmergencyNoticeWidgetBR_C_ShowNotice::Title' has a wrong offset!");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_ShowNotice, Body) == 0x000018, "Member 'EmergencyNoticeWidgetBR_C_ShowNotice::Body' has a wrong offset!");

struct EmergencyNoticeWidgetBR_C_Show_Notice final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(EmergencyNoticeWidgetBR_C_Show_Notice) == 0x000008, "Wrong alignment on EmergencyNoticeWidgetBR_C_Show_Notice");
static_assert(sizeof(EmergencyNoticeWidgetBR_C_Show_Notice) == 0x000008, "Wrong size on EmergencyNoticeWidgetBR_C_Show_Notice");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_Show_Notice, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'EmergencyNoticeWidgetBR_C_Show_Notice::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_Title;
	class FText                                   K2Node_Event_Body;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
};
static_assert(alignof(EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR) == 0x000008, "Wrong alignment on EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR");
static_assert(sizeof(EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR) == 0x000050, "Wrong size on EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR, EntryPoint) == 0x000000, "Member 'EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR::EntryPoint' has a wrong offset!");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR, K2Node_Event_Title) == 0x000008, "Member 'EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR::K2Node_Event_Title' has a wrong offset!");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR, K2Node_Event_Body) == 0x000020, "Member 'EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR::K2Node_Event_Body' has a wrong offset!");
static_assert(offsetof(EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR, CallFunc_TextToUpper_ReturnValue) == 0x000038, "Member 'EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

}
