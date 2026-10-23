#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_UIKit_Block_Base_classes.hpp"

namespace SDK
{

class UWBP_UIKit_ButtonBackground_CTA_C final : public UWBP_UIKit_Block_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_Outline_Glow;
	class UWidgetAnimation*                       Anim_Outline;
	class UWidgetAnimation*                       Anim_Disabled_Transition;
	class UWidgetAnimation*                       Anim_Pressed_Transition;
	class UWidgetAnimation*                       Anim_Focused_Transition;
	class UImage*                                 Backing;
	class UImage*                                 FocusOutline;
	class UImage*                                 FocusOutline_Glow;
	class UImage*                                 Glow;
	class UOverlay*                               Root;
	class UMaterialInstance*                      BackgroundMaterial;
	bool                                          AdditiveBorder;
	uint8                                         Pad_309[0x7];
	class UMaterialInstanceDynamic*               BackgroundDynamicMaterial;

public:
	void ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBackgroundMaterial(class UMaterialInstance*& Brush);
	void SetBorderMaterial(class UMaterialInstance* Border_Material, bool IsAdditive);
	void SetDisabled();
	void SetEnabled();
	void TransitionDisabled(class UWidgetAnimation* AnimTransition);
	void TransitionEnabled(class UWidgetAnimation* AnimTransition);
	void TransitionFocused(class UWidgetAnimation* AnimTransition);
	void TransitionPressed(class UWidgetAnimation* AnimTransition);
	void TransitionReleased(class UWidgetAnimation* AnimTransition);
	void TransitionUnfocused(class UWidgetAnimation* AnimTransition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_ButtonBackground_CTA_C">();
	}
	static class UWBP_UIKit_ButtonBackground_CTA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_ButtonBackground_CTA_C>();
	}
};
static_assert(alignof(UWBP_UIKit_ButtonBackground_CTA_C) == 0x000008, "Wrong alignment on UWBP_UIKit_ButtonBackground_CTA_C");
static_assert(sizeof(UWBP_UIKit_ButtonBackground_CTA_C) == 0x000318, "Wrong size on UWBP_UIKit_ButtonBackground_CTA_C");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, UberGraphFrame) == 0x0002A8, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Anim_Outline_Glow) == 0x0002B0, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Anim_Outline_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Anim_Outline) == 0x0002B8, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Anim_Outline' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Anim_Disabled_Transition) == 0x0002C0, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Anim_Disabled_Transition' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Anim_Pressed_Transition) == 0x0002C8, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Anim_Pressed_Transition' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Anim_Focused_Transition) == 0x0002D0, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Anim_Focused_Transition' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Backing) == 0x0002D8, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Backing' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, FocusOutline) == 0x0002E0, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::FocusOutline' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, FocusOutline_Glow) == 0x0002E8, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::FocusOutline_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Glow) == 0x0002F0, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Glow' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, Root) == 0x0002F8, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::Root' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, BackgroundMaterial) == 0x000300, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::BackgroundMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, AdditiveBorder) == 0x000308, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::AdditiveBorder' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonBackground_CTA_C, BackgroundDynamicMaterial) == 0x000310, "Member 'UWBP_UIKit_ButtonBackground_CTA_C::BackgroundDynamicMaterial' has a wrong offset!");

}
