#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventPlayerStatProfileSelector_C final : public UFortEventPlayerStatProfileSelector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UIconTextButton_C*                      CloseMainPanel;
	class UCommonBorder*                          CommonBorder_0;
	class UImage*                                 Image_Background;
	class USafeZone*                              SafeZone_0;
	class UWidgetSwitcher*                        Switcher_Content;
	class UCommonTextBlock*                       Text_WindowTitle;

public:
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_EventPlayerStatProfileSelector(int32 EntryPoint);
	void Set_Up_Profile_Selector_Style(const struct FFortTournamentDisplayInfo& Tournament_Display_Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventPlayerStatProfileSelector_C">();
	}
	static class UEventPlayerStatProfileSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventPlayerStatProfileSelector_C>();
	}
};
static_assert(alignof(UEventPlayerStatProfileSelector_C) == 0x000008, "Wrong alignment on UEventPlayerStatProfileSelector_C");
static_assert(sizeof(UEventPlayerStatProfileSelector_C) == 0x000570, "Wrong size on UEventPlayerStatProfileSelector_C");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, UberGraphFrame) == 0x000530, "Member 'UEventPlayerStatProfileSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, Intro) == 0x000538, "Member 'UEventPlayerStatProfileSelector_C::Intro' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, CloseMainPanel) == 0x000540, "Member 'UEventPlayerStatProfileSelector_C::CloseMainPanel' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, CommonBorder_0) == 0x000548, "Member 'UEventPlayerStatProfileSelector_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, Image_Background) == 0x000550, "Member 'UEventPlayerStatProfileSelector_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, SafeZone_0) == 0x000558, "Member 'UEventPlayerStatProfileSelector_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, Switcher_Content) == 0x000560, "Member 'UEventPlayerStatProfileSelector_C::Switcher_Content' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelector_C, Text_WindowTitle) == 0x000568, "Member 'UEventPlayerStatProfileSelector_C::Text_WindowTitle' has a wrong offset!");

}
