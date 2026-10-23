#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USplashScreenWidget_C final : public UFortSplashScreenWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWBP_UIKit_Button_Loud_C*               Button_PressToStart;
	class UCommonLazyImage*                       I_Fortnite;
	class FText                                   GamepadText;
	class FText                                   MouseText;
	class FText                                   MobileText;

public:
	void OnInputMethodChanged(ECommonInputType InputType);
	void ExecuteUbergraph_SplashScreenWidget(int32 EntryPoint);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SplashScreenWidget_C">();
	}
	static class USplashScreenWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USplashScreenWidget_C>();
	}
};
static_assert(alignof(USplashScreenWidget_C) == 0x000008, "Wrong alignment on USplashScreenWidget_C");
static_assert(sizeof(USplashScreenWidget_C) == 0x000550, "Wrong size on USplashScreenWidget_C");
static_assert(offsetof(USplashScreenWidget_C, UberGraphFrame) == 0x0004F0, "Member 'USplashScreenWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USplashScreenWidget_C, Button_PressToStart) == 0x0004F8, "Member 'USplashScreenWidget_C::Button_PressToStart' has a wrong offset!");
static_assert(offsetof(USplashScreenWidget_C, I_Fortnite) == 0x000500, "Member 'USplashScreenWidget_C::I_Fortnite' has a wrong offset!");
static_assert(offsetof(USplashScreenWidget_C, GamepadText) == 0x000508, "Member 'USplashScreenWidget_C::GamepadText' has a wrong offset!");
static_assert(offsetof(USplashScreenWidget_C, MouseText) == 0x000520, "Member 'USplashScreenWidget_C::MouseText' has a wrong offset!");
static_assert(offsetof(USplashScreenWidget_C, MobileText) == 0x000538, "Member 'USplashScreenWidget_C::MobileText' has a wrong offset!");

}
