#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USquad_C final : public UFortTeamSquadDetailedEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                DarkenBorder;
	class UWidgetSwitcher*                        EntryLockSwitcher;
	class UImage*                                 SquadLogo;
	class UImage*                                 SquadRibbon;

public:
	void ExecuteUbergraph_Squad(int32 EntryPoint);
	void OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E(class UObject* Loaded);
	void OnLoaded_68F5F01141304474DB5D18BD77CD085C(class UObject* Loaded);
	void OnSquadAssigned(const struct FAthenaTeamDisplayInfo& SquadStyle);
	void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Squad_C">();
	}
	static class USquad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquad_C>();
	}
};
static_assert(alignof(USquad_C) == 0x000008, "Wrong alignment on USquad_C");
static_assert(sizeof(USquad_C) == 0x000318, "Wrong size on USquad_C");
static_assert(offsetof(USquad_C, UberGraphFrame) == 0x0002F0, "Member 'USquad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquad_C, DarkenBorder) == 0x0002F8, "Member 'USquad_C::DarkenBorder' has a wrong offset!");
static_assert(offsetof(USquad_C, EntryLockSwitcher) == 0x000300, "Member 'USquad_C::EntryLockSwitcher' has a wrong offset!");
static_assert(offsetof(USquad_C, SquadLogo) == 0x000308, "Member 'USquad_C::SquadLogo' has a wrong offset!");
static_assert(offsetof(USquad_C, SquadRibbon) == 0x000310, "Member 'USquad_C::SquadRibbon' has a wrong offset!");

}
