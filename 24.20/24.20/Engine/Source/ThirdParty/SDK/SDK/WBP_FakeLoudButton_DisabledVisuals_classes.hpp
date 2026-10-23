#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_FakeLoudButton_DisabledVisuals_C final : public UUserWidget
{
public:
	class UImage*                                 Backing;
	class UGridPanel*                             Button;
	class UVerticalBox*                           VerticalBox_Text;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FakeLoudButton_DisabledVisuals_C">();
	}
	static class UWBP_FakeLoudButton_DisabledVisuals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FakeLoudButton_DisabledVisuals_C>();
	}
};
static_assert(alignof(UWBP_FakeLoudButton_DisabledVisuals_C) == 0x000008, "Wrong alignment on UWBP_FakeLoudButton_DisabledVisuals_C");
static_assert(sizeof(UWBP_FakeLoudButton_DisabledVisuals_C) == 0x000280, "Wrong size on UWBP_FakeLoudButton_DisabledVisuals_C");
static_assert(offsetof(UWBP_FakeLoudButton_DisabledVisuals_C, Backing) == 0x000268, "Member 'UWBP_FakeLoudButton_DisabledVisuals_C::Backing' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoudButton_DisabledVisuals_C, Button) == 0x000270, "Member 'UWBP_FakeLoudButton_DisabledVisuals_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoudButton_DisabledVisuals_C, VerticalBox_Text) == 0x000278, "Member 'UWBP_FakeLoudButton_DisabledVisuals_C::VerticalBox_Text' has a wrong offset!");

}
