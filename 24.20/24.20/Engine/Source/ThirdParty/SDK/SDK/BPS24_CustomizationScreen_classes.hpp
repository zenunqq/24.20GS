#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassS24UI_classes.hpp"

namespace SDK
{

class UBPS24_CustomizationScreen_C final : public UFortBattlePassCustomSkinPageS24
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_BPS24_CustomizationScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_CustomizationScreen_C">();
	}
	static class UBPS24_CustomizationScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_CustomizationScreen_C>();
	}
};
static_assert(alignof(UBPS24_CustomizationScreen_C) == 0x000008, "Wrong alignment on UBPS24_CustomizationScreen_C");
static_assert(sizeof(UBPS24_CustomizationScreen_C) == 0x000588, "Wrong size on UBPS24_CustomizationScreen_C");
static_assert(offsetof(UBPS24_CustomizationScreen_C, UberGraphFrame) == 0x000578, "Member 'UBPS24_CustomizationScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationScreen_C, Intro) == 0x000580, "Member 'UBPS24_CustomizationScreen_C::Intro' has a wrong offset!");

}
