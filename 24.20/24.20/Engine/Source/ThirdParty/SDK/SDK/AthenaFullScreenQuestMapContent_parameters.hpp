#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent final
{
public:
	int32                                         EntryPoint;
	float                                         Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	EWidgetClipping                               Temp_byte_Variable;
	EWidgetClipping                               Temp_byte_Variable_1;
	bool                                          K2Node_Event_bShowing;
	uint8                                         Pad_C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	float                                         Temp_real_Variable_1;
	uint8                                         Pad_44[0x4];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	EWidgetClipping                               K2Node_Select_Default;
	uint8                                         Pad_53[0x1];
	float                                         K2Node_Select_Default_1;
	struct FMargin                                K2Node_MakeStruct_Margin;
};
static_assert(alignof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent) == 0x000008, "Wrong alignment on AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent");
static_assert(sizeof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent) == 0x000068, "Wrong size on AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, EntryPoint) == 0x000000, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, Temp_real_Variable) == 0x000004, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, Temp_bool_Variable) == 0x000008, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, Temp_byte_Variable) == 0x000009, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, Temp_byte_Variable_1) == 0x00000A, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, K2Node_Event_bShowing) == 0x00000B, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::K2Node_Event_bShowing' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000030, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000038, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, Temp_real_Variable_1) == 0x000040, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000048, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, CallFunc_IsMobileGame_ReturnValue) == 0x000050, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, Temp_bool_Variable_1) == 0x000051, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, K2Node_Select_Default) == 0x000052, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, K2Node_Select_Default_1) == 0x000054, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent, K2Node_MakeStruct_Margin) == 0x000058, "Member 'AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent::K2Node_MakeStruct_Margin' has a wrong offset!");

struct AthenaFullScreenQuestMapContent_C_SetEnabled final
{
public:
	bool                                          Enabled;
};
static_assert(alignof(AthenaFullScreenQuestMapContent_C_SetEnabled) == 0x000001, "Wrong alignment on AthenaFullScreenQuestMapContent_C_SetEnabled");
static_assert(sizeof(AthenaFullScreenQuestMapContent_C_SetEnabled) == 0x000001, "Wrong size on AthenaFullScreenQuestMapContent_C_SetEnabled");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_SetEnabled, Enabled) == 0x000000, "Member 'AthenaFullScreenQuestMapContent_C_SetEnabled::Enabled' has a wrong offset!");

struct AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer final
{
public:
	bool                                          bShowing;
};
static_assert(alignof(AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer) == 0x000001, "Wrong alignment on AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer");
static_assert(sizeof(AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer) == 0x000001, "Wrong size on AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer");
static_assert(offsetof(AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer, bShowing) == 0x000000, "Member 'AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer::bShowing' has a wrong offset!");

}
