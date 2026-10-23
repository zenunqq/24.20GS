#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_IconTwoTextDesc_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Icon;
	class UImage*                                 Image_Timer;
	class UCommonTextBlock*                       Primary;
	class UCommonTextBlock*                       Secondary;
	class UCommonTextBlock*                       TimerText;
	class UTexture2D*                             Icon_Texture;
	class UMaterialInterface*                     IconMaterial;
	struct FVector2D                              IconSize;
	struct FVector2D                              IconShear;
	float                                         IconAngle;
	struct FLinearColor                           IconColor;
	uint8                                         Pad_2DC[0x4];
	class FText                                   PrimaryText;
	class FText                                   SecondaryText;
	double                                        IconToTextSpacing;
	struct FSlateColor                            SecondaryTextColor;

public:
	void ExecuteUbergraph_WBP_IconTwoTextDesc(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateMainText(const class FText& InText);
	void UpdateSecondaryText(const class FText& InText);
	void UpdateTimerText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IconTwoTextDesc_C">();
	}
	static class UWBP_IconTwoTextDesc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IconTwoTextDesc_C>();
	}
};
static_assert(alignof(UWBP_IconTwoTextDesc_C) == 0x000008, "Wrong alignment on UWBP_IconTwoTextDesc_C");
static_assert(sizeof(UWBP_IconTwoTextDesc_C) == 0x000330, "Wrong size on UWBP_IconTwoTextDesc_C");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, UberGraphFrame) == 0x000268, "Member 'UWBP_IconTwoTextDesc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, Image_Icon) == 0x000270, "Member 'UWBP_IconTwoTextDesc_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, Image_Timer) == 0x000278, "Member 'UWBP_IconTwoTextDesc_C::Image_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, Primary) == 0x000280, "Member 'UWBP_IconTwoTextDesc_C::Primary' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, Secondary) == 0x000288, "Member 'UWBP_IconTwoTextDesc_C::Secondary' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, TimerText) == 0x000290, "Member 'UWBP_IconTwoTextDesc_C::TimerText' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, Icon_Texture) == 0x000298, "Member 'UWBP_IconTwoTextDesc_C::Icon_Texture' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, IconMaterial) == 0x0002A0, "Member 'UWBP_IconTwoTextDesc_C::IconMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, IconSize) == 0x0002A8, "Member 'UWBP_IconTwoTextDesc_C::IconSize' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, IconShear) == 0x0002B8, "Member 'UWBP_IconTwoTextDesc_C::IconShear' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, IconAngle) == 0x0002C8, "Member 'UWBP_IconTwoTextDesc_C::IconAngle' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, IconColor) == 0x0002CC, "Member 'UWBP_IconTwoTextDesc_C::IconColor' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, PrimaryText) == 0x0002E0, "Member 'UWBP_IconTwoTextDesc_C::PrimaryText' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, SecondaryText) == 0x0002F8, "Member 'UWBP_IconTwoTextDesc_C::SecondaryText' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, IconToTextSpacing) == 0x000310, "Member 'UWBP_IconTwoTextDesc_C::IconToTextSpacing' has a wrong offset!");
static_assert(offsetof(UWBP_IconTwoTextDesc_C, SecondaryTextColor) == 0x000318, "Member 'UWBP_IconTwoTextDesc_C::SecondaryTextColor' has a wrong offset!");

}
