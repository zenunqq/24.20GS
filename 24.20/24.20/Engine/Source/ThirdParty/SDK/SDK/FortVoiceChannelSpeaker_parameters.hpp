#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct FortVoiceChannelSpeaker_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(FortVoiceChannelSpeaker_C_PreConstruct) == 0x000001, "Wrong alignment on FortVoiceChannelSpeaker_C_PreConstruct");
static_assert(sizeof(FortVoiceChannelSpeaker_C_PreConstruct) == 0x000001, "Wrong size on FortVoiceChannelSpeaker_C_PreConstruct");
static_assert(offsetof(FortVoiceChannelSpeaker_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FortVoiceChannelSpeaker_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct FortVoiceChannelSpeaker_C_OnStyleAssigned final
{
public:
	EChannelSpeakerStyle                          NewStyle;
};
static_assert(alignof(FortVoiceChannelSpeaker_C_OnStyleAssigned) == 0x000001, "Wrong alignment on FortVoiceChannelSpeaker_C_OnStyleAssigned");
static_assert(sizeof(FortVoiceChannelSpeaker_C_OnStyleAssigned) == 0x000001, "Wrong size on FortVoiceChannelSpeaker_C_OnStyleAssigned");
static_assert(offsetof(FortVoiceChannelSpeaker_C_OnStyleAssigned, NewStyle) == 0x000000, "Member 'FortVoiceChannelSpeaker_C_OnStyleAssigned::NewStyle' has a wrong offset!");

struct FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged final
{
public:
	bool                                          bIsNowTalking;
};
static_assert(alignof(FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged) == 0x000001, "Wrong alignment on FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged");
static_assert(sizeof(FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged) == 0x000001, "Wrong size on FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged");
static_assert(offsetof(FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged, bIsNowTalking) == 0x000000, "Member 'FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged::bIsNowTalking' has a wrong offset!");

struct FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker final
{
public:
	int32                                         EntryPoint;
	EChannelSpeakerStyle                          K2Node_Event_NewStyle;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          K2Node_Event_bIsNowTalking;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_14[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker) == 0x000008, "Wrong alignment on FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker");
static_assert(sizeof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker) == 0x000020, "Wrong size on FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, EntryPoint) == 0x000000, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, K2Node_Event_NewStyle) == 0x000004, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::K2Node_Event_NewStyle' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, K2Node_Event_IsDesignTime) == 0x000011, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, K2Node_Event_bIsNowTalking) == 0x000012, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::K2Node_Event_bIsNowTalking' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000013, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
