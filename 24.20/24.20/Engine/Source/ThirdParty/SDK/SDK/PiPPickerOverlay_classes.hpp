#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPiPPickerOverlay_C final : public UFortPickerOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       SelectionSet;
	class UImage*                                 AlignmentDesignViewOnlyu;
	class UImage*                                 Backplate_Shadow;
	class UPictureInPictureClient*                PictureInPictureClient;
	class UPictureInPictureMediaController*       PiPMediaController;

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BP_OnItemChosen();
	void Construct();
	void ExecuteUbergraph_PiPPickerOverlay(int32 EntryPoint);
	void PlaySelectionAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PiPPickerOverlay_C">();
	}
	static class UPiPPickerOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiPPickerOverlay_C>();
	}
};
static_assert(alignof(UPiPPickerOverlay_C) == 0x000008, "Wrong alignment on UPiPPickerOverlay_C");
static_assert(sizeof(UPiPPickerOverlay_C) == 0x0004D0, "Wrong size on UPiPPickerOverlay_C");
static_assert(offsetof(UPiPPickerOverlay_C, UberGraphFrame) == 0x000498, "Member 'UPiPPickerOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPiPPickerOverlay_C, Intro) == 0x0004A0, "Member 'UPiPPickerOverlay_C::Intro' has a wrong offset!");
static_assert(offsetof(UPiPPickerOverlay_C, SelectionSet) == 0x0004A8, "Member 'UPiPPickerOverlay_C::SelectionSet' has a wrong offset!");
static_assert(offsetof(UPiPPickerOverlay_C, AlignmentDesignViewOnlyu) == 0x0004B0, "Member 'UPiPPickerOverlay_C::AlignmentDesignViewOnlyu' has a wrong offset!");
static_assert(offsetof(UPiPPickerOverlay_C, Backplate_Shadow) == 0x0004B8, "Member 'UPiPPickerOverlay_C::Backplate_Shadow' has a wrong offset!");
static_assert(offsetof(UPiPPickerOverlay_C, PictureInPictureClient) == 0x0004C0, "Member 'UPiPPickerOverlay_C::PictureInPictureClient' has a wrong offset!");
static_assert(offsetof(UPiPPickerOverlay_C, PiPMediaController) == 0x0004C8, "Member 'UPiPPickerOverlay_C::PiPMediaController' has a wrong offset!");

}
