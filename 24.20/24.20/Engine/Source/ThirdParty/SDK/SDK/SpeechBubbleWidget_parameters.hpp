#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_Event_InitObject;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class FText                                   CallFunc_GetCurrentSentenceSpeechText_ReturnValue;
};
static_assert(alignof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget) == 0x000008, "Wrong alignment on SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget");
static_assert(sizeof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget) == 0x000038, "Wrong size on SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget");
static_assert(offsetof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget, EntryPoint) == 0x000000, "Member 'SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget, K2Node_Event_InitObject) == 0x000008, "Member 'SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget::K2Node_Event_InitObject' has a wrong offset!");
static_assert(offsetof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget, CallFunc_GetCurrentSentenceSpeechText_ReturnValue) == 0x000020, "Member 'SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget::CallFunc_GetCurrentSentenceSpeechText_ReturnValue' has a wrong offset!");

struct SpeechBubbleWidget_C_InitFromObject final
{
public:
	class UObject*                                InitObject;
};
static_assert(alignof(SpeechBubbleWidget_C_InitFromObject) == 0x000008, "Wrong alignment on SpeechBubbleWidget_C_InitFromObject");
static_assert(sizeof(SpeechBubbleWidget_C_InitFromObject) == 0x000008, "Wrong size on SpeechBubbleWidget_C_InitFromObject");
static_assert(offsetof(SpeechBubbleWidget_C_InitFromObject, InitObject) == 0x000000, "Member 'SpeechBubbleWidget_C_InitFromObject::InitObject' has a wrong offset!");

}
