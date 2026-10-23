#pragma once

#include "Basic.hpp"

#include "AudioMotorSim_structs.hpp"

namespace SDK::Params
{

struct AudioMotorModelComponent_AddMotorAudioComponent final
{
public:
	TScriptInterface<class IAudioMotorSimOutput>  InComponent;
};
static_assert(alignof(AudioMotorModelComponent_AddMotorAudioComponent) == 0x000008, "Wrong alignment on AudioMotorModelComponent_AddMotorAudioComponent");
static_assert(sizeof(AudioMotorModelComponent_AddMotorAudioComponent) == 0x000010, "Wrong size on AudioMotorModelComponent_AddMotorAudioComponent");
static_assert(offsetof(AudioMotorModelComponent_AddMotorAudioComponent, InComponent) == 0x000000, "Member 'AudioMotorModelComponent_AddMotorAudioComponent::InComponent' has a wrong offset!");

struct AudioMotorModelComponent_AddMotorSimComponent final
{
public:
	TScriptInterface<class IAudioMotorSim>        InComponent;
	int32                                         SortOrder;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMotorModelComponent_AddMotorSimComponent) == 0x000008, "Wrong alignment on AudioMotorModelComponent_AddMotorSimComponent");
static_assert(sizeof(AudioMotorModelComponent_AddMotorSimComponent) == 0x000018, "Wrong size on AudioMotorModelComponent_AddMotorSimComponent");
static_assert(offsetof(AudioMotorModelComponent_AddMotorSimComponent, InComponent) == 0x000000, "Member 'AudioMotorModelComponent_AddMotorSimComponent::InComponent' has a wrong offset!");
static_assert(offsetof(AudioMotorModelComponent_AddMotorSimComponent, SortOrder) == 0x000010, "Member 'AudioMotorModelComponent_AddMotorSimComponent::SortOrder' has a wrong offset!");

struct AudioMotorModelComponent_RemoveMotorAudioComponent final
{
public:
	TScriptInterface<class IAudioMotorSimOutput>  InComponent;
};
static_assert(alignof(AudioMotorModelComponent_RemoveMotorAudioComponent) == 0x000008, "Wrong alignment on AudioMotorModelComponent_RemoveMotorAudioComponent");
static_assert(sizeof(AudioMotorModelComponent_RemoveMotorAudioComponent) == 0x000010, "Wrong size on AudioMotorModelComponent_RemoveMotorAudioComponent");
static_assert(offsetof(AudioMotorModelComponent_RemoveMotorAudioComponent, InComponent) == 0x000000, "Member 'AudioMotorModelComponent_RemoveMotorAudioComponent::InComponent' has a wrong offset!");

struct AudioMotorModelComponent_RemoveMotorSimComponent final
{
public:
	TScriptInterface<class IAudioMotorSim>        InComponent;
};
static_assert(alignof(AudioMotorModelComponent_RemoveMotorSimComponent) == 0x000008, "Wrong alignment on AudioMotorModelComponent_RemoveMotorSimComponent");
static_assert(sizeof(AudioMotorModelComponent_RemoveMotorSimComponent) == 0x000010, "Wrong size on AudioMotorModelComponent_RemoveMotorSimComponent");
static_assert(offsetof(AudioMotorModelComponent_RemoveMotorSimComponent, InComponent) == 0x000000, "Member 'AudioMotorModelComponent_RemoveMotorSimComponent::InComponent' has a wrong offset!");

struct AudioMotorModelComponent_Update final
{
public:
	struct FAudioMotorSimInputContext             Input;
};
static_assert(alignof(AudioMotorModelComponent_Update) == 0x000004, "Wrong alignment on AudioMotorModelComponent_Update");
static_assert(sizeof(AudioMotorModelComponent_Update) == 0x00002C, "Wrong size on AudioMotorModelComponent_Update");
static_assert(offsetof(AudioMotorModelComponent_Update, Input) == 0x000000, "Member 'AudioMotorModelComponent_Update::Input' has a wrong offset!");

struct AudioMotorModelComponent_GetCachedInputData final
{
public:
	struct FAudioMotorSimInputContext             ReturnValue;
};
static_assert(alignof(AudioMotorModelComponent_GetCachedInputData) == 0x000004, "Wrong alignment on AudioMotorModelComponent_GetCachedInputData");
static_assert(sizeof(AudioMotorModelComponent_GetCachedInputData) == 0x00002C, "Wrong size on AudioMotorModelComponent_GetCachedInputData");
static_assert(offsetof(AudioMotorModelComponent_GetCachedInputData, ReturnValue) == 0x000000, "Member 'AudioMotorModelComponent_GetCachedInputData::ReturnValue' has a wrong offset!");

struct AudioMotorModelComponent_GetGear final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(AudioMotorModelComponent_GetGear) == 0x000004, "Wrong alignment on AudioMotorModelComponent_GetGear");
static_assert(sizeof(AudioMotorModelComponent_GetGear) == 0x000004, "Wrong size on AudioMotorModelComponent_GetGear");
static_assert(offsetof(AudioMotorModelComponent_GetGear, ReturnValue) == 0x000000, "Member 'AudioMotorModelComponent_GetGear::ReturnValue' has a wrong offset!");

struct AudioMotorModelComponent_GetRpm final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(AudioMotorModelComponent_GetRpm) == 0x000004, "Wrong alignment on AudioMotorModelComponent_GetRpm");
static_assert(sizeof(AudioMotorModelComponent_GetRpm) == 0x000004, "Wrong size on AudioMotorModelComponent_GetRpm");
static_assert(offsetof(AudioMotorModelComponent_GetRpm, ReturnValue) == 0x000000, "Member 'AudioMotorModelComponent_GetRpm::ReturnValue' has a wrong offset!");

struct AudioMotorModelComponent_GetRuntimeInfo final
{
public:
	struct FAudioMotorSimRuntimeContext           ReturnValue;
};
static_assert(alignof(AudioMotorModelComponent_GetRuntimeInfo) == 0x000004, "Wrong alignment on AudioMotorModelComponent_GetRuntimeInfo");
static_assert(sizeof(AudioMotorModelComponent_GetRuntimeInfo) == 0x000014, "Wrong size on AudioMotorModelComponent_GetRuntimeInfo");
static_assert(offsetof(AudioMotorModelComponent_GetRuntimeInfo, ReturnValue) == 0x000000, "Member 'AudioMotorModelComponent_GetRuntimeInfo::ReturnValue' has a wrong offset!");

struct AudioMotorSimComponent_BP_Update final
{
public:
	struct FAudioMotorSimInputContext             Input;
	struct FAudioMotorSimRuntimeContext           RuntimeInfo;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x3];
};
static_assert(alignof(AudioMotorSimComponent_BP_Update) == 0x000004, "Wrong alignment on AudioMotorSimComponent_BP_Update");
static_assert(sizeof(AudioMotorSimComponent_BP_Update) == 0x000044, "Wrong size on AudioMotorSimComponent_BP_Update");
static_assert(offsetof(AudioMotorSimComponent_BP_Update, Input) == 0x000000, "Member 'AudioMotorSimComponent_BP_Update::Input' has a wrong offset!");
static_assert(offsetof(AudioMotorSimComponent_BP_Update, RuntimeInfo) == 0x00002C, "Member 'AudioMotorSimComponent_BP_Update::RuntimeInfo' has a wrong offset!");
static_assert(offsetof(AudioMotorSimComponent_BP_Update, ReturnValue) == 0x000040, "Member 'AudioMotorSimComponent_BP_Update::ReturnValue' has a wrong offset!");

}
