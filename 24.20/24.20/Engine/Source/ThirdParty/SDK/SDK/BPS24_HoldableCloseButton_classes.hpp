#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBPS24_HoldableCloseButton_C final : public UFortHoldableButton
{
public:
	uint8                                         Pad_1478[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       HoldCompleted;
	class UWidgetAnimation*                       HoldProgress;
	class UImage*                                 Image_Background;
	class UImage*                                 Image_GamepadProgress;
	class UOverlay*                               Overlay_Input;
	class UProgressBar*                           ProgressBar_50;
	class USizeBox*                               SizeBox_Height;
	class USizeBox*                               SizeBox_KBM;
	class UCommonTextBlock*                       TextButton_Text;
	class FText                                   In_Text;
	double                                        In_Min_Desired_Width;
	double                                        In_Min_Desired_Height;
	TMulticastInlineDelegate<void()>              Hold_Completed;

public:
	void BP_OnHoldCompleted();
	void BP_OnHoldDecreased(const float HoldPercentage);
	void BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHoldIncreased(const float HoldPercentage);
	void BP_OnHoldReset();
	void BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHovered();
	void BP_OnPressed();
	void BP_OnUnhovered();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BPS24_HoldableCloseButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Update_style(bool Using_Gamepad);
	void UpdateTextAndStyle(ECommonInputType Input_Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_HoldableCloseButton_C">();
	}
	static class UBPS24_HoldableCloseButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_HoldableCloseButton_C>();
	}
};
static_assert(alignof(UBPS24_HoldableCloseButton_C) == 0x000010, "Wrong alignment on UBPS24_HoldableCloseButton_C");
static_assert(sizeof(UBPS24_HoldableCloseButton_C) == 0x001510, "Wrong size on UBPS24_HoldableCloseButton_C");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, UberGraphFrame) == 0x001480, "Member 'UBPS24_HoldableCloseButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, Hover) == 0x001488, "Member 'UBPS24_HoldableCloseButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, HoldCompleted) == 0x001490, "Member 'UBPS24_HoldableCloseButton_C::HoldCompleted' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, HoldProgress) == 0x001498, "Member 'UBPS24_HoldableCloseButton_C::HoldProgress' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, Image_Background) == 0x0014A0, "Member 'UBPS24_HoldableCloseButton_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, Image_GamepadProgress) == 0x0014A8, "Member 'UBPS24_HoldableCloseButton_C::Image_GamepadProgress' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, Overlay_Input) == 0x0014B0, "Member 'UBPS24_HoldableCloseButton_C::Overlay_Input' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, ProgressBar_50) == 0x0014B8, "Member 'UBPS24_HoldableCloseButton_C::ProgressBar_50' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, SizeBox_Height) == 0x0014C0, "Member 'UBPS24_HoldableCloseButton_C::SizeBox_Height' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, SizeBox_KBM) == 0x0014C8, "Member 'UBPS24_HoldableCloseButton_C::SizeBox_KBM' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, TextButton_Text) == 0x0014D0, "Member 'UBPS24_HoldableCloseButton_C::TextButton_Text' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, In_Text) == 0x0014D8, "Member 'UBPS24_HoldableCloseButton_C::In_Text' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, In_Min_Desired_Width) == 0x0014F0, "Member 'UBPS24_HoldableCloseButton_C::In_Min_Desired_Width' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, In_Min_Desired_Height) == 0x0014F8, "Member 'UBPS24_HoldableCloseButton_C::In_Min_Desired_Height' has a wrong offset!");
static_assert(offsetof(UBPS24_HoldableCloseButton_C, Hold_Completed) == 0x001500, "Member 'UBPS24_HoldableCloseButton_C::Hold_Completed' has a wrong offset!");

}
