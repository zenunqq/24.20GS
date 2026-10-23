#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct XpEverywhereAccoladesWidget_OpenWidget final
{
public:
	const class UFortAccoladeItemDefinition*      AccoladeDef;
	int32                                         XpValue;
	uint8                                         Pad_C[0x4];
	class FText                                   DisplayName;
	TSoftObjectPtr<class UTexture2D>              AccoladeLargePreviewImageOverride;
	class FText                                   SimulatedName;
	class FText                                   SimulatedText;
	EFortSimulatedXPSize                          SimulatedXpSize;
	uint8                                         Pad_81[0x7];
};
static_assert(alignof(XpEverywhereAccoladesWidget_OpenWidget) == 0x000008, "Wrong alignment on XpEverywhereAccoladesWidget_OpenWidget");
static_assert(sizeof(XpEverywhereAccoladesWidget_OpenWidget) == 0x000088, "Wrong size on XpEverywhereAccoladesWidget_OpenWidget");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, AccoladeDef) == 0x000000, "Member 'XpEverywhereAccoladesWidget_OpenWidget::AccoladeDef' has a wrong offset!");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, XpValue) == 0x000008, "Member 'XpEverywhereAccoladesWidget_OpenWidget::XpValue' has a wrong offset!");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, DisplayName) == 0x000010, "Member 'XpEverywhereAccoladesWidget_OpenWidget::DisplayName' has a wrong offset!");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, AccoladeLargePreviewImageOverride) == 0x000028, "Member 'XpEverywhereAccoladesWidget_OpenWidget::AccoladeLargePreviewImageOverride' has a wrong offset!");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, SimulatedName) == 0x000050, "Member 'XpEverywhereAccoladesWidget_OpenWidget::SimulatedName' has a wrong offset!");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, SimulatedText) == 0x000068, "Member 'XpEverywhereAccoladesWidget_OpenWidget::SimulatedText' has a wrong offset!");
static_assert(offsetof(XpEverywhereAccoladesWidget_OpenWidget, SimulatedXpSize) == 0x000080, "Member 'XpEverywhereAccoladesWidget_OpenWidget::SimulatedXpSize' has a wrong offset!");

struct XpEverywhereAccoladesWidget_HasMoreXPEvents final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(XpEverywhereAccoladesWidget_HasMoreXPEvents) == 0x000001, "Wrong alignment on XpEverywhereAccoladesWidget_HasMoreXPEvents");
static_assert(sizeof(XpEverywhereAccoladesWidget_HasMoreXPEvents) == 0x000001, "Wrong size on XpEverywhereAccoladesWidget_HasMoreXPEvents");
static_assert(offsetof(XpEverywhereAccoladesWidget_HasMoreXPEvents, ReturnValue) == 0x000000, "Member 'XpEverywhereAccoladesWidget_HasMoreXPEvents::ReturnValue' has a wrong offset!");

struct XpEverywhereBar_OnXpBarInitialized final
{
public:
	int32                                         CurrentXP;
	int32                                         CurrentLevel;
	int32                                         CurrentRemainingRestXP;
};
static_assert(alignof(XpEverywhereBar_OnXpBarInitialized) == 0x000004, "Wrong alignment on XpEverywhereBar_OnXpBarInitialized");
static_assert(sizeof(XpEverywhereBar_OnXpBarInitialized) == 0x00000C, "Wrong size on XpEverywhereBar_OnXpBarInitialized");
static_assert(offsetof(XpEverywhereBar_OnXpBarInitialized, CurrentXP) == 0x000000, "Member 'XpEverywhereBar_OnXpBarInitialized::CurrentXP' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_OnXpBarInitialized, CurrentLevel) == 0x000004, "Member 'XpEverywhereBar_OnXpBarInitialized::CurrentLevel' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_OnXpBarInitialized, CurrentRemainingRestXP) == 0x000008, "Member 'XpEverywhereBar_OnXpBarInitialized::CurrentRemainingRestXP' has a wrong offset!");

struct XpEverywhereBar_OnXpBarUpdated final
{
public:
	int32                                         ShownXP;
	int32                                         ShownLevel;
	int32                                         NewDesiredXP;
	int32                                         NewDesiredLevel;
	int32                                         NewRemainingRestXP;
};
static_assert(alignof(XpEverywhereBar_OnXpBarUpdated) == 0x000004, "Wrong alignment on XpEverywhereBar_OnXpBarUpdated");
static_assert(sizeof(XpEverywhereBar_OnXpBarUpdated) == 0x000014, "Wrong size on XpEverywhereBar_OnXpBarUpdated");
static_assert(offsetof(XpEverywhereBar_OnXpBarUpdated, ShownXP) == 0x000000, "Member 'XpEverywhereBar_OnXpBarUpdated::ShownXP' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_OnXpBarUpdated, ShownLevel) == 0x000004, "Member 'XpEverywhereBar_OnXpBarUpdated::ShownLevel' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_OnXpBarUpdated, NewDesiredXP) == 0x000008, "Member 'XpEverywhereBar_OnXpBarUpdated::NewDesiredXP' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_OnXpBarUpdated, NewDesiredLevel) == 0x00000C, "Member 'XpEverywhereBar_OnXpBarUpdated::NewDesiredLevel' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_OnXpBarUpdated, NewRemainingRestXP) == 0x000010, "Member 'XpEverywhereBar_OnXpBarUpdated::NewRemainingRestXP' has a wrong offset!");

struct XpEverywhereBar_GetTotalXpRequiredForLevel final
{
public:
	int32                                         InLevel;
	int32                                         ReturnValue;
};
static_assert(alignof(XpEverywhereBar_GetTotalXpRequiredForLevel) == 0x000004, "Wrong alignment on XpEverywhereBar_GetTotalXpRequiredForLevel");
static_assert(sizeof(XpEverywhereBar_GetTotalXpRequiredForLevel) == 0x000008, "Wrong size on XpEverywhereBar_GetTotalXpRequiredForLevel");
static_assert(offsetof(XpEverywhereBar_GetTotalXpRequiredForLevel, InLevel) == 0x000000, "Member 'XpEverywhereBar_GetTotalXpRequiredForLevel::InLevel' has a wrong offset!");
static_assert(offsetof(XpEverywhereBar_GetTotalXpRequiredForLevel, ReturnValue) == 0x000004, "Member 'XpEverywhereBar_GetTotalXpRequiredForLevel::ReturnValue' has a wrong offset!");

struct XpEverywhereLevelUpWidget_OnShowWidget final
{
public:
	int32                                         NewLevel;
};
static_assert(alignof(XpEverywhereLevelUpWidget_OnShowWidget) == 0x000004, "Wrong alignment on XpEverywhereLevelUpWidget_OnShowWidget");
static_assert(sizeof(XpEverywhereLevelUpWidget_OnShowWidget) == 0x000004, "Wrong size on XpEverywhereLevelUpWidget_OnShowWidget");
static_assert(offsetof(XpEverywhereLevelUpWidget_OnShowWidget, NewLevel) == 0x000000, "Member 'XpEverywhereLevelUpWidget_OnShowWidget::NewLevel' has a wrong offset!");

struct XpEverywhereReticleWidget_UpdateRestXP final
{
public:
	int32                                         RestXpRemaining;
};
static_assert(alignof(XpEverywhereReticleWidget_UpdateRestXP) == 0x000004, "Wrong alignment on XpEverywhereReticleWidget_UpdateRestXP");
static_assert(sizeof(XpEverywhereReticleWidget_UpdateRestXP) == 0x000004, "Wrong size on XpEverywhereReticleWidget_UpdateRestXP");
static_assert(offsetof(XpEverywhereReticleWidget_UpdateRestXP, RestXpRemaining) == 0x000000, "Member 'XpEverywhereReticleWidget_UpdateRestXP::RestXpRemaining' has a wrong offset!");

struct XpEverywhereReticleWidget_UpdateXPAmount final
{
public:
	int32                                         NewAmount;
	uint8                                         Pad_4[0x4];
	class USoundCue*                              Cue;
	EFortSimulatedXPSize                          SimulatedXpSize;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(XpEverywhereReticleWidget_UpdateXPAmount) == 0x000008, "Wrong alignment on XpEverywhereReticleWidget_UpdateXPAmount");
static_assert(sizeof(XpEverywhereReticleWidget_UpdateXPAmount) == 0x000018, "Wrong size on XpEverywhereReticleWidget_UpdateXPAmount");
static_assert(offsetof(XpEverywhereReticleWidget_UpdateXPAmount, NewAmount) == 0x000000, "Member 'XpEverywhereReticleWidget_UpdateXPAmount::NewAmount' has a wrong offset!");
static_assert(offsetof(XpEverywhereReticleWidget_UpdateXPAmount, Cue) == 0x000008, "Member 'XpEverywhereReticleWidget_UpdateXPAmount::Cue' has a wrong offset!");
static_assert(offsetof(XpEverywhereReticleWidget_UpdateXPAmount, SimulatedXpSize) == 0x000010, "Member 'XpEverywhereReticleWidget_UpdateXPAmount::SimulatedXpSize' has a wrong offset!");

struct XpEverywhereReticleWidget_UpdateXPSource final
{
public:
	class FText                                   NewSourceText;
};
static_assert(alignof(XpEverywhereReticleWidget_UpdateXPSource) == 0x000008, "Wrong alignment on XpEverywhereReticleWidget_UpdateXPSource");
static_assert(sizeof(XpEverywhereReticleWidget_UpdateXPSource) == 0x000018, "Wrong size on XpEverywhereReticleWidget_UpdateXPSource");
static_assert(offsetof(XpEverywhereReticleWidget_UpdateXPSource, NewSourceText) == 0x000000, "Member 'XpEverywhereReticleWidget_UpdateXPSource::NewSourceText' has a wrong offset!");

}
