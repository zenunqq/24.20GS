#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_RewardsProgressWheel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       CommonTextBlock;
	class UCommonTextBlock*                       CommonTextBlock_75;
	class UImage*                                 CompletedIcon;
	class UImage*                                 Image_Icon;
	class UImage*                                 Image_Progress;
	class USpacer*                                Spacer_158;
	class UTexture2D*                             Icon_Texture;
	struct FVector2D                              IconSize;
	struct FVector2D                              IconShear;
	class UMaterialInterface*                     ProgressWheel;
	class FText                                   ProgressText;
	struct FSlateColor                            WheelProgressTextColor;
	struct FSlateColor                            WheelProgressTextCompletedColor;
	double                                        IconToTextSpacing;

public:
	void Construct();
	void ExecuteUbergraph_WBP_RewardsProgressWheel(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateDescriptionText(const class FText& InText);
	void UpdateNumberText(const class FText& InText);
	void UpdateProgress(class FName ParameterName, float Value);
	void UpdateProgressGrayedOut(bool GrayOut, class FName ParameterName, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RewardsProgressWheel_C">();
	}
	static class UWBP_RewardsProgressWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RewardsProgressWheel_C>();
	}
};
static_assert(alignof(UWBP_RewardsProgressWheel_C) == 0x000008, "Wrong alignment on UWBP_RewardsProgressWheel_C");
static_assert(sizeof(UWBP_RewardsProgressWheel_C) == 0x000318, "Wrong size on UWBP_RewardsProgressWheel_C");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, UberGraphFrame) == 0x000268, "Member 'UWBP_RewardsProgressWheel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, CommonTextBlock) == 0x000270, "Member 'UWBP_RewardsProgressWheel_C::CommonTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, CommonTextBlock_75) == 0x000278, "Member 'UWBP_RewardsProgressWheel_C::CommonTextBlock_75' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, CompletedIcon) == 0x000280, "Member 'UWBP_RewardsProgressWheel_C::CompletedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, Image_Icon) == 0x000288, "Member 'UWBP_RewardsProgressWheel_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, Image_Progress) == 0x000290, "Member 'UWBP_RewardsProgressWheel_C::Image_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, Spacer_158) == 0x000298, "Member 'UWBP_RewardsProgressWheel_C::Spacer_158' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, Icon_Texture) == 0x0002A0, "Member 'UWBP_RewardsProgressWheel_C::Icon_Texture' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, IconSize) == 0x0002A8, "Member 'UWBP_RewardsProgressWheel_C::IconSize' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, IconShear) == 0x0002B8, "Member 'UWBP_RewardsProgressWheel_C::IconShear' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, ProgressWheel) == 0x0002C8, "Member 'UWBP_RewardsProgressWheel_C::ProgressWheel' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, ProgressText) == 0x0002D0, "Member 'UWBP_RewardsProgressWheel_C::ProgressText' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, WheelProgressTextColor) == 0x0002E8, "Member 'UWBP_RewardsProgressWheel_C::WheelProgressTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, WheelProgressTextCompletedColor) == 0x0002FC, "Member 'UWBP_RewardsProgressWheel_C::WheelProgressTextCompletedColor' has a wrong offset!");
static_assert(offsetof(UWBP_RewardsProgressWheel_C, IconToTextSpacing) == 0x000310, "Member 'UWBP_RewardsProgressWheel_C::IconToTextSpacing' has a wrong offset!");

}
