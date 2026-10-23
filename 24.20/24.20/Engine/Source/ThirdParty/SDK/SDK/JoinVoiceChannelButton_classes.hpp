#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UJoinVoiceChannelButton_C final : public UFortJoinVoiceChannelButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinVoiceChannelButton_C">();
	}
	static class UJoinVoiceChannelButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinVoiceChannelButton_C>();
	}
};
static_assert(alignof(UJoinVoiceChannelButton_C) == 0x000010, "Wrong alignment on UJoinVoiceChannelButton_C");
static_assert(sizeof(UJoinVoiceChannelButton_C) == 0x001440, "Wrong size on UJoinVoiceChannelButton_C");
static_assert(offsetof(UJoinVoiceChannelButton_C, UberGraphFrame) == 0x001430, "Member 'UJoinVoiceChannelButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinVoiceChannelButton_C, OnHover) == 0x001438, "Member 'UJoinVoiceChannelButton_C::OnHover' has a wrong offset!");

}
