#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownPosterViolator_C final : public UFortTournamentPosterViolator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonBorder*                          FutureEventViolator;
	class UCommonBorder*                          InformationViolator;
	class UCommonBorder*                          LiveEventViolator;
	class ULiveViolator_C*                        LiveViolator;
	class UCommonBorder*                          NoViolator;

public:
	void OnViolatorStateRefreshed(ETournmentPosterViolatorState NewTimeState);
	void ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownPosterViolator_C">();
	}
	static class UShowdownPosterViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownPosterViolator_C>();
	}
};
static_assert(alignof(UShowdownPosterViolator_C) == 0x000008, "Wrong alignment on UShowdownPosterViolator_C");
static_assert(sizeof(UShowdownPosterViolator_C) == 0x000308, "Wrong size on UShowdownPosterViolator_C");
static_assert(offsetof(UShowdownPosterViolator_C, UberGraphFrame) == 0x0002D8, "Member 'UShowdownPosterViolator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, FutureEventViolator) == 0x0002E0, "Member 'UShowdownPosterViolator_C::FutureEventViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, InformationViolator) == 0x0002E8, "Member 'UShowdownPosterViolator_C::InformationViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, LiveEventViolator) == 0x0002F0, "Member 'UShowdownPosterViolator_C::LiveEventViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, LiveViolator) == 0x0002F8, "Member 'UShowdownPosterViolator_C::LiveViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, NoViolator) == 0x000300, "Member 'UShowdownPosterViolator_C::NoViolator' has a wrong offset!");

}
