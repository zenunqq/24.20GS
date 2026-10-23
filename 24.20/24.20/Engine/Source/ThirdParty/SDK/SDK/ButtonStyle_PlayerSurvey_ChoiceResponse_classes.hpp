#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_PlayerSurvey_ChoiceResponse_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-PlayerSurvey-ChoiceResponse_C">();
	}
	static class UButtonStyle_PlayerSurvey_ChoiceResponse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_PlayerSurvey_ChoiceResponse_C>();
	}
};
static_assert(alignof(UButtonStyle_PlayerSurvey_ChoiceResponse_C) == 0x000010, "Wrong alignment on UButtonStyle_PlayerSurvey_ChoiceResponse_C");
static_assert(sizeof(UButtonStyle_PlayerSurvey_ChoiceResponse_C) == 0x000730, "Wrong size on UButtonStyle_PlayerSurvey_ChoiceResponse_C");

}
