#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWBP_Augments_InteractionIndicator_C final : public UFortInteractContextInfoWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       AnimIntro;
	class UImage*                                 Icon_BackingPanel_UnlockedFX;
	class UImage*                                 Icon_Border_Unlocked;
	class UImage*                                 Icon_Border_UnlockedGlow;
	class UImage*                                 Image_AugmentIcon;
	class UCommonTextBlock*                       Text_AugmentCategory;
	class UCommonTextBlock*                       Text_AugmentDescription;
	class UCommonTextBlock*                       Text_AugmentName;
	class UWBP_Augments_InteractionIndicatorInfo_C* WBP_Augments_InteractionIndicatorInfo;
	class USpacer*                                WidthConrol;
	class FText                                   InteractText;

public:
	void ExecuteUbergraph_WBP_Augments_InteractionIndicator(int32 EntryPoint);
	void GetInteractText(class FText* InteractText_0, bool* Result);
	bool GetShowErrorsUsingDefaultWidget();
	void OnContextInfoUpdated(const class UFortInteractContextInfo* ContextInfo);
	void OnLoaded_2E66591C48A272F0C04BFB94B42C632F(class UObject* Loaded);
	void SetAugmentIcon(TSoftObjectPtr<class UObject> Asset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augments_InteractionIndicator_C">();
	}
	static class UWBP_Augments_InteractionIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augments_InteractionIndicator_C>();
	}
};
static_assert(alignof(UWBP_Augments_InteractionIndicator_C) == 0x000008, "Wrong alignment on UWBP_Augments_InteractionIndicator_C");
static_assert(sizeof(UWBP_Augments_InteractionIndicator_C) == 0x0002D8, "Wrong size on UWBP_Augments_InteractionIndicator_C");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, UberGraphFrame) == 0x000268, "Member 'UWBP_Augments_InteractionIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, AnimIntro) == 0x000270, "Member 'UWBP_Augments_InteractionIndicator_C::AnimIntro' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Icon_BackingPanel_UnlockedFX) == 0x000278, "Member 'UWBP_Augments_InteractionIndicator_C::Icon_BackingPanel_UnlockedFX' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Icon_Border_Unlocked) == 0x000280, "Member 'UWBP_Augments_InteractionIndicator_C::Icon_Border_Unlocked' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Icon_Border_UnlockedGlow) == 0x000288, "Member 'UWBP_Augments_InteractionIndicator_C::Icon_Border_UnlockedGlow' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Image_AugmentIcon) == 0x000290, "Member 'UWBP_Augments_InteractionIndicator_C::Image_AugmentIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Text_AugmentCategory) == 0x000298, "Member 'UWBP_Augments_InteractionIndicator_C::Text_AugmentCategory' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Text_AugmentDescription) == 0x0002A0, "Member 'UWBP_Augments_InteractionIndicator_C::Text_AugmentDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, Text_AugmentName) == 0x0002A8, "Member 'UWBP_Augments_InteractionIndicator_C::Text_AugmentName' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, WBP_Augments_InteractionIndicatorInfo) == 0x0002B0, "Member 'UWBP_Augments_InteractionIndicator_C::WBP_Augments_InteractionIndicatorInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, WidthConrol) == 0x0002B8, "Member 'UWBP_Augments_InteractionIndicator_C::WidthConrol' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicator_C, InteractText) == 0x0002C0, "Member 'UWBP_Augments_InteractionIndicator_C::InteractText' has a wrong offset!");

}
