#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UReplaceQuestButton_C final : public UFortHoldableButton
{
public:
	uint8                                         Pad_1478[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HoldCompleted;
	class UWidgetAnimation*                       HoldProgress;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Image_material;
	class UImage*                                 Image_Progress;
	class USizeBox*                               SizeBox_0;
	class FText                                   In_Text;
	double                                        In_Width_Override;
	class UMaterialInterface*                     Material;
	ETextJustify                                  Justification;
	uint8                                         Pad_14E1[0x7];
	class UMaterialInstanceDynamic*               HoldProgressDMI;
	class FText                                   In_SubText;
	bool                                          Show_BP_icon;
	uint8                                         Pad_1509[0x3];
	int32                                         Size;
	double                                        In_Height_Override;
	class UAudioComponent*                        FillingSoundAudioComponent;
	class USoundBase*                             FillingSoundOverride;
	class USoundBase*                             FillCompleteSoundOverride;

public:
	void BP_OnClicked();
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
	void ExecuteUbergraph_ReplaceQuestButton(int32 EntryPoint);
	void FillComplete();
	void PlayFillSound();
	void PreConstruct(bool IsDesignTime);
	void StopFillSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReplaceQuestButton_C">();
	}
	static class UReplaceQuestButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplaceQuestButton_C>();
	}
};
static_assert(alignof(UReplaceQuestButton_C) == 0x000010, "Wrong alignment on UReplaceQuestButton_C");
static_assert(sizeof(UReplaceQuestButton_C) == 0x001530, "Wrong size on UReplaceQuestButton_C");
static_assert(offsetof(UReplaceQuestButton_C, UberGraphFrame) == 0x001480, "Member 'UReplaceQuestButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, HoldCompleted) == 0x001488, "Member 'UReplaceQuestButton_C::HoldCompleted' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, HoldProgress) == 0x001490, "Member 'UReplaceQuestButton_C::HoldProgress' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Hover) == 0x001498, "Member 'UReplaceQuestButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Image_material) == 0x0014A0, "Member 'UReplaceQuestButton_C::Image_material' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Image_Progress) == 0x0014A8, "Member 'UReplaceQuestButton_C::Image_Progress' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, SizeBox_0) == 0x0014B0, "Member 'UReplaceQuestButton_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, In_Text) == 0x0014B8, "Member 'UReplaceQuestButton_C::In_Text' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, In_Width_Override) == 0x0014D0, "Member 'UReplaceQuestButton_C::In_Width_Override' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Material) == 0x0014D8, "Member 'UReplaceQuestButton_C::Material' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Justification) == 0x0014E0, "Member 'UReplaceQuestButton_C::Justification' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, HoldProgressDMI) == 0x0014E8, "Member 'UReplaceQuestButton_C::HoldProgressDMI' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, In_SubText) == 0x0014F0, "Member 'UReplaceQuestButton_C::In_SubText' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Show_BP_icon) == 0x001508, "Member 'UReplaceQuestButton_C::Show_BP_icon' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, Size) == 0x00150C, "Member 'UReplaceQuestButton_C::Size' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, In_Height_Override) == 0x001510, "Member 'UReplaceQuestButton_C::In_Height_Override' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, FillingSoundAudioComponent) == 0x001518, "Member 'UReplaceQuestButton_C::FillingSoundAudioComponent' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, FillingSoundOverride) == 0x001520, "Member 'UReplaceQuestButton_C::FillingSoundOverride' has a wrong offset!");
static_assert(offsetof(UReplaceQuestButton_C, FillCompleteSoundOverride) == 0x001528, "Member 'UReplaceQuestButton_C::FillCompleteSoundOverride' has a wrong offset!");

}
