#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UCrewBenefitsAnim_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_arcs;
	class UImage*                                 Image_Arcs2;
	class UImage*                                 Image_Arcs3;
	class UImage*                                 Image_Arcs4;
	class UImage*                                 Image_BG_Crown;
	class UImage*                                 Image_BGPattern;
	class UImage*                                 Image_Blackout;
	class UImage*                                 Image_Cross;
	class UImage*                                 Image_FireAdd;
	class UImage*                                 Image_FireSolid;
	class UImage*                                 Image_Glow;
	class UImage*                                 Image_HazardGlow;
	class UImage*                                 Image_Lightning1;
	class UImage*                                 Image_Lightning1_1;

public:
	void EventPlayIntro();
	void ExecuteUbergraph_CrewBenefitsAnim(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewBenefitsAnim_C">();
	}
	static class UCrewBenefitsAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewBenefitsAnim_C>();
	}
};
static_assert(alignof(UCrewBenefitsAnim_C) == 0x000008, "Wrong alignment on UCrewBenefitsAnim_C");
static_assert(sizeof(UCrewBenefitsAnim_C) == 0x000428, "Wrong size on UCrewBenefitsAnim_C");
static_assert(offsetof(UCrewBenefitsAnim_C, UberGraphFrame) == 0x0003A8, "Member 'UCrewBenefitsAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Intro) == 0x0003B0, "Member 'UCrewBenefitsAnim_C::Intro' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_arcs) == 0x0003B8, "Member 'UCrewBenefitsAnim_C::Image_arcs' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Arcs2) == 0x0003C0, "Member 'UCrewBenefitsAnim_C::Image_Arcs2' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Arcs3) == 0x0003C8, "Member 'UCrewBenefitsAnim_C::Image_Arcs3' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Arcs4) == 0x0003D0, "Member 'UCrewBenefitsAnim_C::Image_Arcs4' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_BG_Crown) == 0x0003D8, "Member 'UCrewBenefitsAnim_C::Image_BG_Crown' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_BGPattern) == 0x0003E0, "Member 'UCrewBenefitsAnim_C::Image_BGPattern' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Blackout) == 0x0003E8, "Member 'UCrewBenefitsAnim_C::Image_Blackout' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Cross) == 0x0003F0, "Member 'UCrewBenefitsAnim_C::Image_Cross' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_FireAdd) == 0x0003F8, "Member 'UCrewBenefitsAnim_C::Image_FireAdd' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_FireSolid) == 0x000400, "Member 'UCrewBenefitsAnim_C::Image_FireSolid' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Glow) == 0x000408, "Member 'UCrewBenefitsAnim_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_HazardGlow) == 0x000410, "Member 'UCrewBenefitsAnim_C::Image_HazardGlow' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Lightning1) == 0x000418, "Member 'UCrewBenefitsAnim_C::Image_Lightning1' has a wrong offset!");
static_assert(offsetof(UCrewBenefitsAnim_C, Image_Lightning1_1) == 0x000420, "Member 'UCrewBenefitsAnim_C::Image_Lightning1_1' has a wrong offset!");

}
