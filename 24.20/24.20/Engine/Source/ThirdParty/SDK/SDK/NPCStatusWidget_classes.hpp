#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UNPCStatusWidget_C final : public UNPCStatusWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNPCStatusWidgetBar_C*                  Bar_Health;
	class UNPCStatusWidgetBar_C*                  Bar_Shield;
	class UOverlay*                               Overlay_BarsPrefix;
	class UVerticalBox*                           VerticalBox_BarExtensions;
	struct FTimerHandle                           VisibiltyTimer;
	TMulticastInlineDelegate<void(bool bVisible)> VisibilityChanged;
	double                                        StatusWidgetVisibleDuration;
	double                                        CurrentHealthPercent;
	double                                        CurrentShieldPercent;
	bool                                          KeepVisibilityOn;
	uint8                                         Pad_399[0x7];
	class AFortPawn*                              FortPawn;

public:
	void BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, EUIExtensionSlot SlotType);
	void ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration_0);
	void Construct();
	void EventHideStatus();
	void EventUpdateStatus(double Health, double Shield, bool ShowShield);
	void ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint);
	void OnPawnFocused();
	void SetKeepVisibilityOn(bool KeepVisibilityOn_0);
	void TryCallEventHideByTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCStatusWidget_C">();
	}
	static class UNPCStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPCStatusWidget_C>();
	}
};
static_assert(alignof(UNPCStatusWidget_C) == 0x000008, "Wrong alignment on UNPCStatusWidget_C");
static_assert(sizeof(UNPCStatusWidget_C) == 0x0003A8, "Wrong size on UNPCStatusWidget_C");
static_assert(offsetof(UNPCStatusWidget_C, UberGraphFrame) == 0x000340, "Member 'UNPCStatusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, Bar_Health) == 0x000348, "Member 'UNPCStatusWidget_C::Bar_Health' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, Bar_Shield) == 0x000350, "Member 'UNPCStatusWidget_C::Bar_Shield' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, Overlay_BarsPrefix) == 0x000358, "Member 'UNPCStatusWidget_C::Overlay_BarsPrefix' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, VerticalBox_BarExtensions) == 0x000360, "Member 'UNPCStatusWidget_C::VerticalBox_BarExtensions' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, VisibiltyTimer) == 0x000368, "Member 'UNPCStatusWidget_C::VisibiltyTimer' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, VisibilityChanged) == 0x000370, "Member 'UNPCStatusWidget_C::VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, StatusWidgetVisibleDuration) == 0x000380, "Member 'UNPCStatusWidget_C::StatusWidgetVisibleDuration' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, CurrentHealthPercent) == 0x000388, "Member 'UNPCStatusWidget_C::CurrentHealthPercent' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, CurrentShieldPercent) == 0x000390, "Member 'UNPCStatusWidget_C::CurrentShieldPercent' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, KeepVisibilityOn) == 0x000398, "Member 'UNPCStatusWidget_C::KeepVisibilityOn' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, FortPawn) == 0x0003A0, "Member 'UNPCStatusWidget_C::FortPawn' has a wrong offset!");

}
