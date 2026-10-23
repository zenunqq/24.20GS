#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KoalaUI_classes.hpp"
#include "CommonInput_structs.hpp"

namespace SDK
{

class USidebarPanelKoala_C final : public UFortSidebarPanelKoala
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UVerticalBox*                           PanelWidget_KoalaElements;
	class UCommonRichTextBlock*                   RichText_Description_SignIn;
	class UFortRichTextBlockKeybind*              RichText_Description_Use;
	class UCommonVisibilitySwitcher*              Switcher_Description;
	class UCommonRichTextBlock*                   Text_BasicKoalaDescription;
	class FText                                   UsageDescText_KBM;
	class FText                                   UsageDescText_Gamepad;

public:
	void Construct();
	void ExecuteUbergraph_SidebarPanelKoala(int32 EntryPoint);
	void OnConnectionChanged(bool bConnected);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void UpdateUsageDescription(ECommonInputType Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelKoala_C">();
	}
	static class USidebarPanelKoala_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelKoala_C>();
	}
};
static_assert(alignof(USidebarPanelKoala_C) == 0x000008, "Wrong alignment on USidebarPanelKoala_C");
static_assert(sizeof(USidebarPanelKoala_C) == 0x000440, "Wrong size on USidebarPanelKoala_C");
static_assert(offsetof(USidebarPanelKoala_C, UberGraphFrame) == 0x0003E0, "Member 'USidebarPanelKoala_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, PanelWidget_KoalaElements) == 0x0003E8, "Member 'USidebarPanelKoala_C::PanelWidget_KoalaElements' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, RichText_Description_SignIn) == 0x0003F0, "Member 'USidebarPanelKoala_C::RichText_Description_SignIn' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, RichText_Description_Use) == 0x0003F8, "Member 'USidebarPanelKoala_C::RichText_Description_Use' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, Switcher_Description) == 0x000400, "Member 'USidebarPanelKoala_C::Switcher_Description' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, Text_BasicKoalaDescription) == 0x000408, "Member 'USidebarPanelKoala_C::Text_BasicKoalaDescription' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, UsageDescText_KBM) == 0x000410, "Member 'USidebarPanelKoala_C::UsageDescText_KBM' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, UsageDescText_Gamepad) == 0x000428, "Member 'USidebarPanelKoala_C::UsageDescText_Gamepad' has a wrong offset!");

}
