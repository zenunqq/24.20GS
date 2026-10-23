#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ULoginScreen_C final : public UFortUIStateWidget_Login
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UConsoleProfileWidget_C*                ConsoleProfileWidget;
	class UImage*                                 DarkBacking;
	class UOverlay*                               KeyArt_Group;
	class UImage*                                 KeyArtBackground;
	class UImage*                                 KeyArtBackground_For_Blur;
	class USafeZone*                              SafeZone;
	class UCommonTextBlock*                       Text_Version;
	class UBuildWatermark_C*                      Widget_BuildWatermark;
	class UWidget*                                PlatformSpecificBackBorder;

public:
	void SetKeyArtVisibility(int32 NewActiveWidgetIndex);
	void ExecuteUbergraph_LoginScreen(int32 EntryPoint);
	void Construct();
	void BP_OnActivated();
	void BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginScreen_C">();
	}
	static class ULoginScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginScreen_C>();
	}
};
static_assert(alignof(ULoginScreen_C) == 0x000008, "Wrong alignment on ULoginScreen_C");
static_assert(sizeof(ULoginScreen_C) == 0x000518, "Wrong size on ULoginScreen_C");
static_assert(offsetof(ULoginScreen_C, UberGraphFrame) == 0x0004C8, "Member 'ULoginScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, ConsoleProfileWidget) == 0x0004D0, "Member 'ULoginScreen_C::ConsoleProfileWidget' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, DarkBacking) == 0x0004D8, "Member 'ULoginScreen_C::DarkBacking' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, KeyArt_Group) == 0x0004E0, "Member 'ULoginScreen_C::KeyArt_Group' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, KeyArtBackground) == 0x0004E8, "Member 'ULoginScreen_C::KeyArtBackground' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, KeyArtBackground_For_Blur) == 0x0004F0, "Member 'ULoginScreen_C::KeyArtBackground_For_Blur' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, SafeZone) == 0x0004F8, "Member 'ULoginScreen_C::SafeZone' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, Text_Version) == 0x000500, "Member 'ULoginScreen_C::Text_Version' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, Widget_BuildWatermark) == 0x000508, "Member 'ULoginScreen_C::Widget_BuildWatermark' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, PlatformSpecificBackBorder) == 0x000510, "Member 'ULoginScreen_C::PlatformSpecificBackBorder' has a wrong offset!");

}
