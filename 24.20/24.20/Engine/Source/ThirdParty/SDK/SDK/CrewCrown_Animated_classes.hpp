#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UCrewCrown_Animated_C final : public UUserWidget
{
public:
	class UImage*                                 Image_107;
	class UImage*                                 Image_108;
	class UImage*                                 Image_109;
	class UImage*                                 Image_Crown;
	class UImage*                                 Image_LowerGlow;
	class UImage*                                 Image_UpperGlow;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewCrown_Animated_C">();
	}
	static class UCrewCrown_Animated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewCrown_Animated_C>();
	}
};
static_assert(alignof(UCrewCrown_Animated_C) == 0x000008, "Wrong alignment on UCrewCrown_Animated_C");
static_assert(sizeof(UCrewCrown_Animated_C) == 0x000298, "Wrong size on UCrewCrown_Animated_C");
static_assert(offsetof(UCrewCrown_Animated_C, Image_107) == 0x000268, "Member 'UCrewCrown_Animated_C::Image_107' has a wrong offset!");
static_assert(offsetof(UCrewCrown_Animated_C, Image_108) == 0x000270, "Member 'UCrewCrown_Animated_C::Image_108' has a wrong offset!");
static_assert(offsetof(UCrewCrown_Animated_C, Image_109) == 0x000278, "Member 'UCrewCrown_Animated_C::Image_109' has a wrong offset!");
static_assert(offsetof(UCrewCrown_Animated_C, Image_Crown) == 0x000280, "Member 'UCrewCrown_Animated_C::Image_Crown' has a wrong offset!");
static_assert(offsetof(UCrewCrown_Animated_C, Image_LowerGlow) == 0x000288, "Member 'UCrewCrown_Animated_C::Image_LowerGlow' has a wrong offset!");
static_assert(offsetof(UCrewCrown_Animated_C, Image_UpperGlow) == 0x000290, "Member 'UCrewCrown_Animated_C::Image_UpperGlow' has a wrong offset!");

}
