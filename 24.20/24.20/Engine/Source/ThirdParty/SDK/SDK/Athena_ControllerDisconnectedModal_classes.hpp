#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthena_ControllerDisconnectedModal_C final : public UAthenaControllerDisconnectedModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonActionWidget*                    CommonActionWidget_164;
	class UImage*                                 Image_66;
	class UImage*                                 Image_Separator_Down;
	class UImage*                                 Image_Separator_Up;
	class ULightbox_C*                            Lightbox;
	class UImage*                                 ProgressSpinner;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Athena_ControllerDisconnectedModal(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ControllerDisconnectedModal_C">();
	}
	static class UAthena_ControllerDisconnectedModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ControllerDisconnectedModal_C>();
	}
};
static_assert(alignof(UAthena_ControllerDisconnectedModal_C) == 0x000008, "Wrong alignment on UAthena_ControllerDisconnectedModal_C");
static_assert(sizeof(UAthena_ControllerDisconnectedModal_C) == 0x000400, "Wrong size on UAthena_ControllerDisconnectedModal_C");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, UberGraphFrame) == 0x0003C0, "Member 'UAthena_ControllerDisconnectedModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, Intro) == 0x0003C8, "Member 'UAthena_ControllerDisconnectedModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, CommonActionWidget_164) == 0x0003D0, "Member 'UAthena_ControllerDisconnectedModal_C::CommonActionWidget_164' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, Image_66) == 0x0003D8, "Member 'UAthena_ControllerDisconnectedModal_C::Image_66' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, Image_Separator_Down) == 0x0003E0, "Member 'UAthena_ControllerDisconnectedModal_C::Image_Separator_Down' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, Image_Separator_Up) == 0x0003E8, "Member 'UAthena_ControllerDisconnectedModal_C::Image_Separator_Up' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, Lightbox) == 0x0003F0, "Member 'UAthena_ControllerDisconnectedModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthena_ControllerDisconnectedModal_C, ProgressSpinner) == 0x0003F8, "Member 'UAthena_ControllerDisconnectedModal_C::ProgressSpinner' has a wrong offset!");

}
