#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UVoiceChannelChangePopup_C final : public UFortVoiceChannelChangePopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       AmbientIconPulse;
	class UHorizontalBox*                         GamepadKeybindWrapper;
	class UImage*                                 Image_Mic;
	class UHorizontalBox*                         KBKeybindWrapper;
	class UImage*                                 MicPulse;
	class UCommonWidgetSwitcherLegacy*            Switcher_KeybindWidgets;
	class UCommonRichTextBlock*                   Text_Hold;
	class FName                                   M_Param_ColorA;
	class FName                                   M_Param_ColorB;
	class FName                                   M_Param_Progress;
	struct FLinearColor                           ColorB;
	struct FLinearColor                           ColorA;
	bool                                          CollapseOnAnimationFinish;

public:
	void Construct();
	void ExecuteUbergraph_VoiceChannelChangePopup(int32 EntryPoint);
	void OnInputModeChanged(ECommonInputType NewInputType);
	void OnPlayCloseAnimation();
	void OnPlayOpenAnimation();
	void Popup_Animation_Finished();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChannelChangePopup_C">();
	}
	static class UVoiceChannelChangePopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannelChangePopup_C>();
	}
};
static_assert(alignof(UVoiceChannelChangePopup_C) == 0x000008, "Wrong alignment on UVoiceChannelChangePopup_C");
static_assert(sizeof(UVoiceChannelChangePopup_C) == 0x000420, "Wrong size on UVoiceChannelChangePopup_C");
static_assert(offsetof(UVoiceChannelChangePopup_C, UberGraphFrame) == 0x0003B0, "Member 'UVoiceChannelChangePopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, AmbientIconPulse) == 0x0003B8, "Member 'UVoiceChannelChangePopup_C::AmbientIconPulse' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, GamepadKeybindWrapper) == 0x0003C0, "Member 'UVoiceChannelChangePopup_C::GamepadKeybindWrapper' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, Image_Mic) == 0x0003C8, "Member 'UVoiceChannelChangePopup_C::Image_Mic' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, KBKeybindWrapper) == 0x0003D0, "Member 'UVoiceChannelChangePopup_C::KBKeybindWrapper' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, MicPulse) == 0x0003D8, "Member 'UVoiceChannelChangePopup_C::MicPulse' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, Switcher_KeybindWidgets) == 0x0003E0, "Member 'UVoiceChannelChangePopup_C::Switcher_KeybindWidgets' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, Text_Hold) == 0x0003E8, "Member 'UVoiceChannelChangePopup_C::Text_Hold' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, M_Param_ColorA) == 0x0003F0, "Member 'UVoiceChannelChangePopup_C::M_Param_ColorA' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, M_Param_ColorB) == 0x0003F4, "Member 'UVoiceChannelChangePopup_C::M_Param_ColorB' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, M_Param_Progress) == 0x0003F8, "Member 'UVoiceChannelChangePopup_C::M_Param_Progress' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, ColorB) == 0x0003FC, "Member 'UVoiceChannelChangePopup_C::ColorB' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, ColorA) == 0x00040C, "Member 'UVoiceChannelChangePopup_C::ColorA' has a wrong offset!");
static_assert(offsetof(UVoiceChannelChangePopup_C, CollapseOnAnimationFinish) == 0x00041C, "Member 'UVoiceChannelChangePopup_C::CollapseOnAnimationFinish' has a wrong offset!");

}
