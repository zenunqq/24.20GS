#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaEliminationIndicator_C final : public UAthenaEliminationIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Arrow;
	class UImage*                                 Image_Diamondpulse;

public:
	void Construct();
	void ExecuteUbergraph_AthenaEliminationIndicator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEliminationIndicator_C">();
	}
	static class UAthenaEliminationIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEliminationIndicator_C>();
	}
};
static_assert(alignof(UAthenaEliminationIndicator_C) == 0x000008, "Wrong alignment on UAthenaEliminationIndicator_C");
static_assert(sizeof(UAthenaEliminationIndicator_C) == 0x000638, "Wrong size on UAthenaEliminationIndicator_C");
static_assert(offsetof(UAthenaEliminationIndicator_C, UberGraphFrame) == 0x000610, "Member 'UAthenaEliminationIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Outro) == 0x000618, "Member 'UAthenaEliminationIndicator_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Intro) == 0x000620, "Member 'UAthenaEliminationIndicator_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Arrow) == 0x000628, "Member 'UAthenaEliminationIndicator_C::Arrow' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Image_Diamondpulse) == 0x000630, "Member 'UAthenaEliminationIndicator_C::Image_Diamondpulse' has a wrong offset!");

}
