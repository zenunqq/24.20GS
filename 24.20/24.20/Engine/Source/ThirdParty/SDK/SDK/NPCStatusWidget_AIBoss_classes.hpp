#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UNPCStatusWidget_AIBoss_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Background;
	class UNPCStatusWidgetBar_C*                  Bar_Health;
	class UNPCStatusWidgetBar_C*                  Bar_Shield;
	class USizeBox*                               SizeBox_Health;
	struct FTimerHandle                           VisibiltyTimer;
	TMulticastInlineDelegate<void(bool bVisible)> VisibilityChanged;
	double                                        StatusWidgetVisibleDuration;
	double                                        CurrentHealthPercent;
	double                                        CurrentShieldPercent;
	double                                        Max_Health;
	double                                        PipAmount;
	double                                        MinimumPipAmount;
	int32                                         NumHealthPips;
	uint8                                         Pad_2DC[0x4];
	double                                        MaxShield;
	int32                                         NumShieldPips;

public:
	void ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration_0);
	void Construct();
	void EventHideStatus();
	void EventUpdateStatus(double Health, double Shield, double MaxHealth, double MaxShield_0, bool ShowShield);
	void ExecuteUbergraph_NPCStatusWidget_AIBoss(int32 EntryPoint);
	void SetMaxHealth(double MaxHealth);
	void SetMaxShield(double MaxShield_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCStatusWidget_AIBoss_C">();
	}
	static class UNPCStatusWidget_AIBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPCStatusWidget_AIBoss_C>();
	}
};
static_assert(alignof(UNPCStatusWidget_AIBoss_C) == 0x000008, "Wrong alignment on UNPCStatusWidget_AIBoss_C");
static_assert(sizeof(UNPCStatusWidget_AIBoss_C) == 0x0002F0, "Wrong size on UNPCStatusWidget_AIBoss_C");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, UberGraphFrame) == 0x000268, "Member 'UNPCStatusWidget_AIBoss_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, Background) == 0x000270, "Member 'UNPCStatusWidget_AIBoss_C::Background' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, Bar_Health) == 0x000278, "Member 'UNPCStatusWidget_AIBoss_C::Bar_Health' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, Bar_Shield) == 0x000280, "Member 'UNPCStatusWidget_AIBoss_C::Bar_Shield' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, SizeBox_Health) == 0x000288, "Member 'UNPCStatusWidget_AIBoss_C::SizeBox_Health' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, VisibiltyTimer) == 0x000290, "Member 'UNPCStatusWidget_AIBoss_C::VisibiltyTimer' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, VisibilityChanged) == 0x000298, "Member 'UNPCStatusWidget_AIBoss_C::VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, StatusWidgetVisibleDuration) == 0x0002A8, "Member 'UNPCStatusWidget_AIBoss_C::StatusWidgetVisibleDuration' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, CurrentHealthPercent) == 0x0002B0, "Member 'UNPCStatusWidget_AIBoss_C::CurrentHealthPercent' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, CurrentShieldPercent) == 0x0002B8, "Member 'UNPCStatusWidget_AIBoss_C::CurrentShieldPercent' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, Max_Health) == 0x0002C0, "Member 'UNPCStatusWidget_AIBoss_C::Max_Health' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, PipAmount) == 0x0002C8, "Member 'UNPCStatusWidget_AIBoss_C::PipAmount' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, MinimumPipAmount) == 0x0002D0, "Member 'UNPCStatusWidget_AIBoss_C::MinimumPipAmount' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, NumHealthPips) == 0x0002D8, "Member 'UNPCStatusWidget_AIBoss_C::NumHealthPips' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, MaxShield) == 0x0002E0, "Member 'UNPCStatusWidget_AIBoss_C::MaxShield' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_AIBoss_C, NumShieldPips) == 0x0002E8, "Member 'UNPCStatusWidget_AIBoss_C::NumShieldPips' has a wrong offset!");

}
