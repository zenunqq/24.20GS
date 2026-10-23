#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup final
{
public:
	int32                                         EntryPoint;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	ECommonInputType                              K2Node_Event_NewInputType;
	uint8                                         Pad_2A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup) == 0x000008, "Wrong alignment on VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup");
static_assert(sizeof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup) == 0x000040, "Wrong size on VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, EntryPoint) == 0x000000, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, Temp_byte_Variable) == 0x000004, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, K2Node_Event_IsDesignTime) == 0x000028, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, K2Node_Event_NewInputType) == 0x000029, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::K2Node_Event_NewInputType' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup, K2Node_Select_Default) == 0x000038, "Member 'VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup::K2Node_Select_Default' has a wrong offset!");

struct VoiceChannelChangePopup_C_OnInputModeChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(VoiceChannelChangePopup_C_OnInputModeChanged) == 0x000001, "Wrong alignment on VoiceChannelChangePopup_C_OnInputModeChanged");
static_assert(sizeof(VoiceChannelChangePopup_C_OnInputModeChanged) == 0x000001, "Wrong size on VoiceChannelChangePopup_C_OnInputModeChanged");
static_assert(offsetof(VoiceChannelChangePopup_C_OnInputModeChanged, NewInputType) == 0x000000, "Member 'VoiceChannelChangePopup_C_OnInputModeChanged::NewInputType' has a wrong offset!");

struct VoiceChannelChangePopup_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(VoiceChannelChangePopup_C_PreConstruct) == 0x000001, "Wrong alignment on VoiceChannelChangePopup_C_PreConstruct");
static_assert(sizeof(VoiceChannelChangePopup_C_PreConstruct) == 0x000001, "Wrong size on VoiceChannelChangePopup_C_PreConstruct");
static_assert(offsetof(VoiceChannelChangePopup_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'VoiceChannelChangePopup_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
