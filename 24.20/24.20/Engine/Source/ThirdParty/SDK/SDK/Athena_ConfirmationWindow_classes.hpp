#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthena_ConfirmationWindow_C final : public UAthenaConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_66;
	class UImage*                                 Image_Separator_Down;
	class UImage*                                 Image_Separator_Up;
	class USafeZone*                              SafeZone_145;
	class UScrollBox*                             ScrollBox_Description;

public:
	void ExecuteUbergraph_Athena_ConfirmationWindow(int32 EntryPoint);
	void OnSetButtonText(class UCommonButtonBase* Button, const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ConfirmationWindow_C">();
	}
	static class UAthena_ConfirmationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ConfirmationWindow_C>();
	}
};
static_assert(alignof(UAthena_ConfirmationWindow_C) == 0x000008, "Wrong alignment on UAthena_ConfirmationWindow_C");
static_assert(sizeof(UAthena_ConfirmationWindow_C) == 0x000460, "Wrong size on UAthena_ConfirmationWindow_C");
static_assert(offsetof(UAthena_ConfirmationWindow_C, UberGraphFrame) == 0x000428, "Member 'UAthena_ConfirmationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Intro) == 0x000430, "Member 'UAthena_ConfirmationWindow_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Image_66) == 0x000438, "Member 'UAthena_ConfirmationWindow_C::Image_66' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Image_Separator_Down) == 0x000440, "Member 'UAthena_ConfirmationWindow_C::Image_Separator_Down' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Image_Separator_Up) == 0x000448, "Member 'UAthena_ConfirmationWindow_C::Image_Separator_Up' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, SafeZone_145) == 0x000450, "Member 'UAthena_ConfirmationWindow_C::SafeZone_145' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, ScrollBox_Description) == 0x000458, "Member 'UAthena_ConfirmationWindow_C::ScrollBox_Description' has a wrong offset!");

}
