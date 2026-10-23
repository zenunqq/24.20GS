#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "XpEverywhereUI_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UXpEverywhereAccoladesWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x60];
	struct FFortPrioritizedWidgetData             PrioritizationData;
	uint8                                         Pad_332[0xE];

public:
	void CloseWidget();
	void OnEventAdded();
	void OnStompedByOtherWidget();
	void OpenWidget(const class UFortAccoladeItemDefinition* AccoladeDef, const int32 XpValue, const class FText& DisplayName, const TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, const class FText& SimulatedName, const class FText& SimulatedText, const EFortSimulatedXPSize SimulatedXpSize);

	bool HasMoreXPEvents() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereAccoladesWidget">();
	}
	static class UXpEverywhereAccoladesWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereAccoladesWidget>();
	}
};
static_assert(alignof(UXpEverywhereAccoladesWidget) == 0x000008, "Wrong alignment on UXpEverywhereAccoladesWidget");
static_assert(sizeof(UXpEverywhereAccoladesWidget) == 0x000340, "Wrong size on UXpEverywhereAccoladesWidget");
static_assert(offsetof(UXpEverywhereAccoladesWidget, PrioritizationData) == 0x000330, "Member 'UXpEverywhereAccoladesWidget::PrioritizationData' has a wrong offset!");

class UXpEverywhereBar final : public UCommonActivatableWidget
{
public:
	bool                                          bXpBarAlwaysActive;
	uint8                                         Pad_3A9[0x7];
	class UFortSocialAvatarIcon*                  SocialAvatarIcon;
	uint8                                         Pad_3B8[0xD0];

public:
	void DoneUpdatingXpBar();
	void OnXpBarInitialized(int32 CurrentXP, int32 CurrentLevel, int32 CurrentRemainingRestXP);
	void OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP);

	int32 GetTotalXpRequiredForLevel(const int32 InLevel) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereBar">();
	}
	static class UXpEverywhereBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereBar>();
	}
};
static_assert(alignof(UXpEverywhereBar) == 0x000008, "Wrong alignment on UXpEverywhereBar");
static_assert(sizeof(UXpEverywhereBar) == 0x000488, "Wrong size on UXpEverywhereBar");
static_assert(offsetof(UXpEverywhereBar, bXpBarAlwaysActive) == 0x0003A8, "Member 'UXpEverywhereBar::bXpBarAlwaysActive' has a wrong offset!");
static_assert(offsetof(UXpEverywhereBar, SocialAvatarIcon) == 0x0003B0, "Member 'UXpEverywhereBar::SocialAvatarIcon' has a wrong offset!");

class UXpEverywhereLevelUpWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];

public:
	void DoneLevelingUp();
	void OnShowWidget(const int32 NewLevel);

	void DisplayLevelUpRewards() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereLevelUpWidget">();
	}
	static class UXpEverywhereLevelUpWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereLevelUpWidget>();
	}
};
static_assert(alignof(UXpEverywhereLevelUpWidget) == 0x000008, "Wrong alignment on UXpEverywhereLevelUpWidget");
static_assert(sizeof(UXpEverywhereLevelUpWidget) == 0x0003B0, "Wrong size on UXpEverywhereLevelUpWidget");

class UXpEverywhereReticleWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x18];

public:
	void ForwardEvents();
	void HandleProfileUpdated();
	void UpdateRestXP(int32 RestXpRemaining);
	void UpdateXPAmount(int32 NewAmount, class USoundCue* Cue, const EFortSimulatedXPSize SimulatedXpSize);
	void UpdateXPSource(const class FText& NewSourceText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereReticleWidget">();
	}
	static class UXpEverywhereReticleWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereReticleWidget>();
	}
};
static_assert(alignof(UXpEverywhereReticleWidget) == 0x000008, "Wrong alignment on UXpEverywhereReticleWidget");
static_assert(sizeof(UXpEverywhereReticleWidget) == 0x0002E8, "Wrong size on UXpEverywhereReticleWidget");

class UXpEverywhereRewardWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x48];
	TSubclassOf<class UFortNotificationEntry>     DefaultEntryClass;
	bool                                          bHasPrioritizedWidgetFocus;
	uint8                                         Pad_321[0x7];
	class UFortNotificationEntry*                 ActiveWidget;
	TArray<class UFortNotificationEntry*>         WidgetQueue;
	class UVerticalBox*                           NotificationUpdatesBox;
	TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData;
	struct FFortPrioritizedWidgetData             PrioritizationData;
	uint8                                         Pad_35A[0x6];

public:
	void HandleNotificationUpdateFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereRewardWidget">();
	}
	static class UXpEverywhereRewardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereRewardWidget>();
	}
};
static_assert(alignof(UXpEverywhereRewardWidget) == 0x000008, "Wrong alignment on UXpEverywhereRewardWidget");
static_assert(sizeof(UXpEverywhereRewardWidget) == 0x000360, "Wrong size on UXpEverywhereRewardWidget");
static_assert(offsetof(UXpEverywhereRewardWidget, DefaultEntryClass) == 0x000318, "Member 'UXpEverywhereRewardWidget::DefaultEntryClass' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, bHasPrioritizedWidgetFocus) == 0x000320, "Member 'UXpEverywhereRewardWidget::bHasPrioritizedWidgetFocus' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, ActiveWidget) == 0x000328, "Member 'UXpEverywhereRewardWidget::ActiveWidget' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, WidgetQueue) == 0x000330, "Member 'UXpEverywhereRewardWidget::WidgetQueue' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, NotificationUpdatesBox) == 0x000340, "Member 'UXpEverywhereRewardWidget::NotificationUpdatesBox' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, NotificationClassPoolData) == 0x000348, "Member 'UXpEverywhereRewardWidget::NotificationClassPoolData' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, PrioritizationData) == 0x000358, "Member 'UXpEverywhereRewardWidget::PrioritizationData' has a wrong offset!");

class UXpEverywhereUIComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x90];
	struct FGameplayTagContainer                  XpEverywhereHiddenElementTags;
	uint8                                         Pad_150[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereUIComponent">();
	}
	static class UXpEverywhereUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereUIComponent>();
	}
};
static_assert(alignof(UXpEverywhereUIComponent) == 0x000008, "Wrong alignment on UXpEverywhereUIComponent");
static_assert(sizeof(UXpEverywhereUIComponent) == 0x000160, "Wrong size on UXpEverywhereUIComponent");
static_assert(offsetof(UXpEverywhereUIComponent, XpEverywhereHiddenElementTags) == 0x000130, "Member 'UXpEverywhereUIComponent::XpEverywhereHiddenElementTags' has a wrong offset!");

}
