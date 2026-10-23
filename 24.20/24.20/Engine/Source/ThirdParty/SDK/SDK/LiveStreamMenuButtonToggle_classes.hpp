#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ULiveStreamMenuButtonToggle_C final : public ULiveStreamMenuToggleButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Art;
	class UImage*                                 ButtonBacking;
	class UCommonTextBlock*                       ButtonText;
	class UOverlay*                               IconBox;
	class ULiveViolator_C*                        LiveViolator;
	class UImage*                                 Spikes_1;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_LiveStreamMenuButtonToggle(int32 EntryPoint);
	void RefreshButton(bool IsLiveStreamEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LiveStreamMenuButtonToggle_C">();
	}
	static class ULiveStreamMenuButtonToggle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamMenuButtonToggle_C>();
	}
};
static_assert(alignof(ULiveStreamMenuButtonToggle_C) == 0x000010, "Wrong alignment on ULiveStreamMenuButtonToggle_C");
static_assert(sizeof(ULiveStreamMenuButtonToggle_C) == 0x001480, "Wrong size on ULiveStreamMenuButtonToggle_C");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, UberGraphFrame) == 0x001440, "Member 'ULiveStreamMenuButtonToggle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, Hover) == 0x001448, "Member 'ULiveStreamMenuButtonToggle_C::Hover' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, Art) == 0x001450, "Member 'ULiveStreamMenuButtonToggle_C::Art' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, ButtonBacking) == 0x001458, "Member 'ULiveStreamMenuButtonToggle_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, ButtonText) == 0x001460, "Member 'ULiveStreamMenuButtonToggle_C::ButtonText' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, IconBox) == 0x001468, "Member 'ULiveStreamMenuButtonToggle_C::IconBox' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, LiveViolator) == 0x001470, "Member 'ULiveStreamMenuButtonToggle_C::LiveViolator' has a wrong offset!");
static_assert(offsetof(ULiveStreamMenuButtonToggle_C, Spikes_1) == 0x001478, "Member 'ULiveStreamMenuButtonToggle_C::Spikes_1' has a wrong offset!");

}
