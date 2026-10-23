#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownRegionButton_C final : public UFortShowdownRegionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_Bounce;
	class UWidgetAnimation*                       Anim_Pressed_Transition;
	class UWidgetAnimation*                       Anim_Hovered_Transition;
	class UWBP_UIKit_ButtonBackground_CTA_C*      Background;

public:
	void BP_OnHovered();
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_ShowdownRegionButton(int32 EntryPoint);
	void TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownRegionButton_C">();
	}
	static class UShowdownRegionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownRegionButton_C>();
	}
};
static_assert(alignof(UShowdownRegionButton_C) == 0x000010, "Wrong alignment on UShowdownRegionButton_C");
static_assert(sizeof(UShowdownRegionButton_C) == 0x0014B0, "Wrong size on UShowdownRegionButton_C");
static_assert(offsetof(UShowdownRegionButton_C, UberGraphFrame) == 0x001480, "Member 'UShowdownRegionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownRegionButton_C, Anim_Bounce) == 0x001488, "Member 'UShowdownRegionButton_C::Anim_Bounce' has a wrong offset!");
static_assert(offsetof(UShowdownRegionButton_C, Anim_Pressed_Transition) == 0x001490, "Member 'UShowdownRegionButton_C::Anim_Pressed_Transition' has a wrong offset!");
static_assert(offsetof(UShowdownRegionButton_C, Anim_Hovered_Transition) == 0x001498, "Member 'UShowdownRegionButton_C::Anim_Hovered_Transition' has a wrong offset!");
static_assert(offsetof(UShowdownRegionButton_C, Background) == 0x0014A0, "Member 'UShowdownRegionButton_C::Background' has a wrong offset!");

}
