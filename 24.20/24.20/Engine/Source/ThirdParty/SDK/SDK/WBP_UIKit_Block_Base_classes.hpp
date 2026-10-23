#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_UIKit_Block_Base_C : public UUserWidget
{
public:
	double                                        TimeHovering;
	double                                        TimeUnhovering;
	double                                        TimeFocusing;
	double                                        TimeUnfocusing;
	double                                        TimePressing;
	double                                        TimeReleasing;
	double                                        TimeDisabling;
	double                                        TimeEnabling;

public:
	void SetDisabled();
	void SetEnabled();
	void TransitionDisabled(class UWidgetAnimation* AnimTransition);
	void TransitionEnabled(class UWidgetAnimation* AnimTransition);
	void TransitionFocused(class UWidgetAnimation* AnimTransition);
	void TransitionHovered(class UWidgetAnimation* AnimTransition);
	void TransitionPressed(class UWidgetAnimation* AnimTransition);
	void TransitionReleased(class UWidgetAnimation* AnimTransition);
	void TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward);
	void TransitionUnfocused(class UWidgetAnimation* AnimTransition);
	void TransitionUnhovered(class UWidgetAnimation* AnimTransition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_Block_Base_C">();
	}
	static class UWBP_UIKit_Block_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_Block_Base_C>();
	}
};
static_assert(alignof(UWBP_UIKit_Block_Base_C) == 0x000008, "Wrong alignment on UWBP_UIKit_Block_Base_C");
static_assert(sizeof(UWBP_UIKit_Block_Base_C) == 0x0002A8, "Wrong size on UWBP_UIKit_Block_Base_C");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeHovering) == 0x000268, "Member 'UWBP_UIKit_Block_Base_C::TimeHovering' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeUnhovering) == 0x000270, "Member 'UWBP_UIKit_Block_Base_C::TimeUnhovering' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeFocusing) == 0x000278, "Member 'UWBP_UIKit_Block_Base_C::TimeFocusing' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeUnfocusing) == 0x000280, "Member 'UWBP_UIKit_Block_Base_C::TimeUnfocusing' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimePressing) == 0x000288, "Member 'UWBP_UIKit_Block_Base_C::TimePressing' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeReleasing) == 0x000290, "Member 'UWBP_UIKit_Block_Base_C::TimeReleasing' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeDisabling) == 0x000298, "Member 'UWBP_UIKit_Block_Base_C::TimeDisabling' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Block_Base_C, TimeEnabling) == 0x0002A0, "Member 'UWBP_UIKit_Block_Base_C::TimeEnabling' has a wrong offset!");

}
