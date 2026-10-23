#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AB_InteriorAudioManager_C*              K2Node_DynamicCast_AsB_Interior_Audio_Manager;
	bool                                          K2Node_DynamicCast_bSuccess;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
};
static_assert(alignof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent) == 0x000008, "Wrong alignment on InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent");
static_assert(sizeof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent) == 0x000020, "Wrong size on InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent");
static_assert(offsetof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent, EntryPoint) == 0x000000, "Member 'InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent, K2Node_DynamicCast_AsB_Interior_Audio_Manager) == 0x000010, "Member 'InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent::K2Node_DynamicCast_AsB_Interior_Audio_Manager' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent, K2Node_Event_EndPlayReason) == 0x000019, "Member 'InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent::K2Node_Event_EndPlayReason' has a wrong offset!");

struct InteriorAudioComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(InteriorAudioComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on InteriorAudioComponent_C_ReceiveEndPlay");
static_assert(sizeof(InteriorAudioComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on InteriorAudioComponent_C_ReceiveEndPlay");
static_assert(offsetof(InteriorAudioComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'InteriorAudioComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct InteriorAudioComponent_C_Update final
{
public:
	struct FInteriorAudioScanResults              ScanResults;
};
static_assert(alignof(InteriorAudioComponent_C_Update) == 0x000008, "Wrong alignment on InteriorAudioComponent_C_Update");
static_assert(sizeof(InteriorAudioComponent_C_Update) == 0x000078, "Wrong size on InteriorAudioComponent_C_Update");
static_assert(offsetof(InteriorAudioComponent_C_Update, ScanResults) == 0x000000, "Member 'InteriorAudioComponent_C_Update::ScanResults' has a wrong offset!");

}
