#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_HoldableButton_BuyLevel_C final : public UFortHoldableButton
{
public:
	uint8                                         Pad_1478[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HoldCompleted;
	class UWidgetAnimation*                       HoldProgress;
	class UWidgetAnimation*                       Hover;
	class UCommonTextBlock*                       Button_text;
	class UImage*                                 Image_material;
	class USizeBox*                               SizeBox_0;
	class UCommonTextBlock*                       Text_Subtitle;
	class UCommonActionWidget*                    UnbindedInputActionWidget;
	class FText                                   In_Text;
	double                                        In_Width_Override;
	class UMaterialInterface*                     Material;
	class UMaterialInstanceDynamic*               HoldProgressDMI;
	int32                                         Size;
	uint8                                         Pad_14FC[0x4];
	double                                        In_Height_Override;
	class UAudioComponent*                        FillingSoundAudioComponent;
	class USoundBase*                             FillingSoundOverride;
	class USoundBase*                             FillCompleteSoundOverride;
	class USoundBase*                             ReleaseSound;
	TMulticastInlineDelegate<void(bool IsHolding)> HoldActionProgress;
	class USoundBase*                             Press_Sound;

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
	void ExecuteUbergraph_BP_HoldableButton_BuyLevel(int32 EntryPoint);
	void FillComplete();
	void PlayFillSound();
	void PreConstruct(bool IsDesignTime);
	void StopFillSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HoldableButton_BuyLevel_C">();
	}
	static class UBP_HoldableButton_BuyLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HoldableButton_BuyLevel_C>();
	}
};
static_assert(alignof(UBP_HoldableButton_BuyLevel_C) == 0x000010, "Wrong alignment on UBP_HoldableButton_BuyLevel_C");
static_assert(sizeof(UBP_HoldableButton_BuyLevel_C) == 0x001540, "Wrong size on UBP_HoldableButton_BuyLevel_C");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, UberGraphFrame) == 0x001480, "Member 'UBP_HoldableButton_BuyLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, HoldCompleted) == 0x001488, "Member 'UBP_HoldableButton_BuyLevel_C::HoldCompleted' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, HoldProgress) == 0x001490, "Member 'UBP_HoldableButton_BuyLevel_C::HoldProgress' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Hover) == 0x001498, "Member 'UBP_HoldableButton_BuyLevel_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Button_text) == 0x0014A0, "Member 'UBP_HoldableButton_BuyLevel_C::Button_text' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Image_material) == 0x0014A8, "Member 'UBP_HoldableButton_BuyLevel_C::Image_material' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, SizeBox_0) == 0x0014B0, "Member 'UBP_HoldableButton_BuyLevel_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Text_Subtitle) == 0x0014B8, "Member 'UBP_HoldableButton_BuyLevel_C::Text_Subtitle' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, UnbindedInputActionWidget) == 0x0014C0, "Member 'UBP_HoldableButton_BuyLevel_C::UnbindedInputActionWidget' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, In_Text) == 0x0014C8, "Member 'UBP_HoldableButton_BuyLevel_C::In_Text' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, In_Width_Override) == 0x0014E0, "Member 'UBP_HoldableButton_BuyLevel_C::In_Width_Override' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Material) == 0x0014E8, "Member 'UBP_HoldableButton_BuyLevel_C::Material' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, HoldProgressDMI) == 0x0014F0, "Member 'UBP_HoldableButton_BuyLevel_C::HoldProgressDMI' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Size) == 0x0014F8, "Member 'UBP_HoldableButton_BuyLevel_C::Size' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, In_Height_Override) == 0x001500, "Member 'UBP_HoldableButton_BuyLevel_C::In_Height_Override' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, FillingSoundAudioComponent) == 0x001508, "Member 'UBP_HoldableButton_BuyLevel_C::FillingSoundAudioComponent' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, FillingSoundOverride) == 0x001510, "Member 'UBP_HoldableButton_BuyLevel_C::FillingSoundOverride' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, FillCompleteSoundOverride) == 0x001518, "Member 'UBP_HoldableButton_BuyLevel_C::FillCompleteSoundOverride' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, ReleaseSound) == 0x001520, "Member 'UBP_HoldableButton_BuyLevel_C::ReleaseSound' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, HoldActionProgress) == 0x001528, "Member 'UBP_HoldableButton_BuyLevel_C::HoldActionProgress' has a wrong offset!");
static_assert(offsetof(UBP_HoldableButton_BuyLevel_C, Press_Sound) == 0x001538, "Member 'UBP_HoldableButton_BuyLevel_C::Press_Sound' has a wrong offset!");

}
