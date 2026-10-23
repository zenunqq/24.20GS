#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UGuidedTutorial_FakeLoadingScreen_C final : public UGuidedTutorialLoadingScreen
{
public:
	class UImage*                                 BaseColor;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuidedTutorial_FakeLoadingScreen_C">();
	}
	static class UGuidedTutorial_FakeLoadingScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuidedTutorial_FakeLoadingScreen_C>();
	}
};
static_assert(alignof(UGuidedTutorial_FakeLoadingScreen_C) == 0x000008, "Wrong alignment on UGuidedTutorial_FakeLoadingScreen_C");
static_assert(sizeof(UGuidedTutorial_FakeLoadingScreen_C) == 0x000518, "Wrong size on UGuidedTutorial_FakeLoadingScreen_C");
static_assert(offsetof(UGuidedTutorial_FakeLoadingScreen_C, BaseColor) == 0x000510, "Member 'UGuidedTutorial_FakeLoadingScreen_C::BaseColor' has a wrong offset!");

}
