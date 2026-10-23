#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthena_ProgressModal_C final : public UAthenaProgressModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_66;
	class UImage*                                 Image_Separator_Down;
	class UImage*                                 Image_Separator_Up;
	class ULightbox_C*                            Lightbox;
	class UImage*                                 ProgressSpinner;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Athena_ProgressModal(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ProgressModal_C">();
	}
	static class UAthena_ProgressModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ProgressModal_C>();
	}
};
static_assert(alignof(UAthena_ProgressModal_C) == 0x000008, "Wrong alignment on UAthena_ProgressModal_C");
static_assert(sizeof(UAthena_ProgressModal_C) == 0x0003F0, "Wrong size on UAthena_ProgressModal_C");
static_assert(offsetof(UAthena_ProgressModal_C, UberGraphFrame) == 0x0003B8, "Member 'UAthena_ProgressModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_ProgressModal_C, Intro) == 0x0003C0, "Member 'UAthena_ProgressModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthena_ProgressModal_C, Image_66) == 0x0003C8, "Member 'UAthena_ProgressModal_C::Image_66' has a wrong offset!");
static_assert(offsetof(UAthena_ProgressModal_C, Image_Separator_Down) == 0x0003D0, "Member 'UAthena_ProgressModal_C::Image_Separator_Down' has a wrong offset!");
static_assert(offsetof(UAthena_ProgressModal_C, Image_Separator_Up) == 0x0003D8, "Member 'UAthena_ProgressModal_C::Image_Separator_Up' has a wrong offset!");
static_assert(offsetof(UAthena_ProgressModal_C, Lightbox) == 0x0003E0, "Member 'UAthena_ProgressModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthena_ProgressModal_C, ProgressSpinner) == 0x0003E8, "Member 'UAthena_ProgressModal_C::ProgressSpinner' has a wrong offset!");

}
