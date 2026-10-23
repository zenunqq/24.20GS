#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTournamentModal_C final : public UFortTournamentModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_BG;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_TournamentModal(int32 EntryPoint);
	void OnTournamentSet(const struct FLinearColor& LeftColor, const struct FLinearColor& RightColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentModal_C">();
	}
	static class UTournamentModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentModal_C>();
	}
};
static_assert(alignof(UTournamentModal_C) == 0x000008, "Wrong alignment on UTournamentModal_C");
static_assert(sizeof(UTournamentModal_C) == 0x000538, "Wrong size on UTournamentModal_C");
static_assert(offsetof(UTournamentModal_C, UberGraphFrame) == 0x000520, "Member 'UTournamentModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentModal_C, Intro) == 0x000528, "Member 'UTournamentModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UTournamentModal_C, Image_BG) == 0x000530, "Member 'UTournamentModal_C::Image_BG' has a wrong offset!");

}
