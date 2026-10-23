#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ULockerBuiltInEmoteWidget_C final : public UFortLockerBuiltInEmoteWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       WarningPulse;
	class UWidgetSwitcher*                        IconSwitcher;
	class UImage*                                 LockedFill;
	class UOverlay*                               LockedOvr;

public:
	void ExecuteUbergraph_LockerBuiltInEmoteWidget(int32 EntryPoint);
	void OnUpdateAccessRestrictionWarning(bool bShouldShow, EAthenaLockerInfoRestrictionWarning WarningType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockerBuiltInEmoteWidget_C">();
	}
	static class ULockerBuiltInEmoteWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockerBuiltInEmoteWidget_C>();
	}
};
static_assert(alignof(ULockerBuiltInEmoteWidget_C) == 0x000010, "Wrong alignment on ULockerBuiltInEmoteWidget_C");
static_assert(sizeof(ULockerBuiltInEmoteWidget_C) == 0x001470, "Wrong size on ULockerBuiltInEmoteWidget_C");
static_assert(offsetof(ULockerBuiltInEmoteWidget_C, UberGraphFrame) == 0x001440, "Member 'ULockerBuiltInEmoteWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULockerBuiltInEmoteWidget_C, WarningPulse) == 0x001448, "Member 'ULockerBuiltInEmoteWidget_C::WarningPulse' has a wrong offset!");
static_assert(offsetof(ULockerBuiltInEmoteWidget_C, IconSwitcher) == 0x001450, "Member 'ULockerBuiltInEmoteWidget_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(ULockerBuiltInEmoteWidget_C, LockedFill) == 0x001458, "Member 'ULockerBuiltInEmoteWidget_C::LockedFill' has a wrong offset!");
static_assert(offsetof(ULockerBuiltInEmoteWidget_C, LockedOvr) == 0x001460, "Member 'ULockerBuiltInEmoteWidget_C::LockedOvr' has a wrong offset!");

}
