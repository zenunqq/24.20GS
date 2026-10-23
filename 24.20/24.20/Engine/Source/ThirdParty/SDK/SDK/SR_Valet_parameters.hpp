#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SrirachaRanch_structs.hpp"

namespace SDK::Params
{

struct SR_Valet_C_ExecuteUbergraph_SR_Valet final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue_1;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_21[0x7];
	class UStreamingRadioPlayerComponent*         K2Node_CustomEvent_Component_1;
	struct FAthenaRadioStation                    K2Node_CustomEvent_AffectedSource_1;
	class UStreamingRadioPlayerComponent*         K2Node_CustomEvent_Component;
	struct FAthenaRadioStation                    K2Node_CustomEvent_AffectedSource;
	TDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_C1[0x7];
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
};
static_assert(alignof(SR_Valet_C_ExecuteUbergraph_SR_Valet) == 0x000008, "Wrong alignment on SR_Valet_C_ExecuteUbergraph_SR_Valet");
static_assert(sizeof(SR_Valet_C_ExecuteUbergraph_SR_Valet) == 0x0000D8, "Wrong size on SR_Valet_C_ExecuteUbergraph_SR_Valet");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, EntryPoint) == 0x000000, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000018, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_Event_EndPlayReason) == 0x000020, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_CustomEvent_Component_1) == 0x000028, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_CustomEvent_Component_1' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_CustomEvent_AffectedSource_1) == 0x000030, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_CustomEvent_AffectedSource_1' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_CustomEvent_Component) == 0x000068, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_CustomEvent_Component' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_CustomEvent_AffectedSource) == 0x000070, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_CustomEvent_AffectedSource' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B4, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x0000C8, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_ExecuteUbergraph_SR_Valet, CallFunc_GetGameInstanceSubsystem_ReturnValue_2) == 0x0000D0, "Member 'SR_Valet_C_ExecuteUbergraph_SR_Valet::CallFunc_GetGameInstanceSubsystem_ReturnValue_2' has a wrong offset!");

struct SR_Valet_C_On_Source_Played final
{
public:
	class UStreamingRadioPlayerComponent*         Component;
	struct FAthenaRadioStation                    AffectedSource;
};
static_assert(alignof(SR_Valet_C_On_Source_Played) == 0x000008, "Wrong alignment on SR_Valet_C_On_Source_Played");
static_assert(sizeof(SR_Valet_C_On_Source_Played) == 0x000040, "Wrong size on SR_Valet_C_On_Source_Played");
static_assert(offsetof(SR_Valet_C_On_Source_Played, Component) == 0x000000, "Member 'SR_Valet_C_On_Source_Played::Component' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_On_Source_Played, AffectedSource) == 0x000008, "Member 'SR_Valet_C_On_Source_Played::AffectedSource' has a wrong offset!");

struct SR_Valet_C_On_Source_Stopped final
{
public:
	class UStreamingRadioPlayerComponent*         Component;
	struct FAthenaRadioStation                    AffectedSource;
};
static_assert(alignof(SR_Valet_C_On_Source_Stopped) == 0x000008, "Wrong alignment on SR_Valet_C_On_Source_Stopped");
static_assert(sizeof(SR_Valet_C_On_Source_Stopped) == 0x000040, "Wrong size on SR_Valet_C_On_Source_Stopped");
static_assert(offsetof(SR_Valet_C_On_Source_Stopped, Component) == 0x000000, "Member 'SR_Valet_C_On_Source_Stopped::Component' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_On_Source_Stopped, AffectedSource) == 0x000008, "Member 'SR_Valet_C_On_Source_Stopped::AffectedSource' has a wrong offset!");

struct SR_Valet_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(SR_Valet_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on SR_Valet_C_ReceiveEndPlay");
static_assert(sizeof(SR_Valet_C_ReceiveEndPlay) == 0x000001, "Wrong size on SR_Valet_C_ReceiveEndPlay");
static_assert(offsetof(SR_Valet_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'SR_Valet_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct SR_Valet_C_CanApplyHolster final
{
public:
	class FName                                   HolsterId;
	bool                                          ReturnValue;
};
static_assert(alignof(SR_Valet_C_CanApplyHolster) == 0x000004, "Wrong alignment on SR_Valet_C_CanApplyHolster");
static_assert(sizeof(SR_Valet_C_CanApplyHolster) == 0x000008, "Wrong size on SR_Valet_C_CanApplyHolster");
static_assert(offsetof(SR_Valet_C_CanApplyHolster, HolsterId) == 0x000000, "Member 'SR_Valet_C_CanApplyHolster::HolsterId' has a wrong offset!");
static_assert(offsetof(SR_Valet_C_CanApplyHolster, ReturnValue) == 0x000004, "Member 'SR_Valet_C_CanApplyHolster::ReturnValue' has a wrong offset!");

}
