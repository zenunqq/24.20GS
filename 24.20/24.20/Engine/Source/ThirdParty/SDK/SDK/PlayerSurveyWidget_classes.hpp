#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPlayerSurveyWidget_C final : public UFortPlayerSurveyWidgetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyWidget_C">();
	}
	static class UPlayerSurveyWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyWidget_C>();
	}
};
static_assert(alignof(UPlayerSurveyWidget_C) == 0x000008, "Wrong alignment on UPlayerSurveyWidget_C");
static_assert(sizeof(UPlayerSurveyWidget_C) == 0x0005B0, "Wrong size on UPlayerSurveyWidget_C");

}
