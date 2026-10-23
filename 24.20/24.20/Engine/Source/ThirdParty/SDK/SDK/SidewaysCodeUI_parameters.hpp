#pragma once

#include "Basic.hpp"

#include "SidewaysCodeRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct SidewaysWidgetBase_ConfigureUIFromPlayspace final
{
public:
	class ASidewaysPlayspace*                     Playspace;
};
static_assert(alignof(SidewaysWidgetBase_ConfigureUIFromPlayspace) == 0x000008, "Wrong alignment on SidewaysWidgetBase_ConfigureUIFromPlayspace");
static_assert(sizeof(SidewaysWidgetBase_ConfigureUIFromPlayspace) == 0x000008, "Wrong size on SidewaysWidgetBase_ConfigureUIFromPlayspace");
static_assert(offsetof(SidewaysWidgetBase_ConfigureUIFromPlayspace, Playspace) == 0x000000, "Member 'SidewaysWidgetBase_ConfigureUIFromPlayspace::Playspace' has a wrong offset!");

struct SidewaysWidgetBase_HandleFortPawnChanged final
{
public:
	class AFortPawn*                              PossessedPawn;
};
static_assert(alignof(SidewaysWidgetBase_HandleFortPawnChanged) == 0x000008, "Wrong alignment on SidewaysWidgetBase_HandleFortPawnChanged");
static_assert(sizeof(SidewaysWidgetBase_HandleFortPawnChanged) == 0x000008, "Wrong size on SidewaysWidgetBase_HandleFortPawnChanged");
static_assert(offsetof(SidewaysWidgetBase_HandleFortPawnChanged, PossessedPawn) == 0x000000, "Member 'SidewaysWidgetBase_HandleFortPawnChanged::PossessedPawn' has a wrong offset!");

struct SidewaysWidgetBase_OnEnterSideways final
{
public:
	class ASidewaysPlayspace*                     Playspace;
};
static_assert(alignof(SidewaysWidgetBase_OnEnterSideways) == 0x000008, "Wrong alignment on SidewaysWidgetBase_OnEnterSideways");
static_assert(sizeof(SidewaysWidgetBase_OnEnterSideways) == 0x000008, "Wrong size on SidewaysWidgetBase_OnEnterSideways");
static_assert(offsetof(SidewaysWidgetBase_OnEnterSideways, Playspace) == 0x000000, "Member 'SidewaysWidgetBase_OnEnterSideways::Playspace' has a wrong offset!");

struct SidewaysWidgetBase_OnParamUpdated final
{
public:
	struct FGameplayTag                           UpdatedParam;
};
static_assert(alignof(SidewaysWidgetBase_OnParamUpdated) == 0x000004, "Wrong alignment on SidewaysWidgetBase_OnParamUpdated");
static_assert(sizeof(SidewaysWidgetBase_OnParamUpdated) == 0x000004, "Wrong size on SidewaysWidgetBase_OnParamUpdated");
static_assert(offsetof(SidewaysWidgetBase_OnParamUpdated, UpdatedParam) == 0x000000, "Member 'SidewaysWidgetBase_OnParamUpdated::UpdatedParam' has a wrong offset!");

struct SidewaysWidgetBase_OnSidewaysStateChanged final
{
public:
	class USidewaysStateComponent*                SidewaysStateComponent;
	class ASidewaysPlayspace*                     NewPlayspace;
	ESidewaysState                                OldState;
	ESidewaysState                                NewState;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(SidewaysWidgetBase_OnSidewaysStateChanged) == 0x000008, "Wrong alignment on SidewaysWidgetBase_OnSidewaysStateChanged");
static_assert(sizeof(SidewaysWidgetBase_OnSidewaysStateChanged) == 0x000018, "Wrong size on SidewaysWidgetBase_OnSidewaysStateChanged");
static_assert(offsetof(SidewaysWidgetBase_OnSidewaysStateChanged, SidewaysStateComponent) == 0x000000, "Member 'SidewaysWidgetBase_OnSidewaysStateChanged::SidewaysStateComponent' has a wrong offset!");
static_assert(offsetof(SidewaysWidgetBase_OnSidewaysStateChanged, NewPlayspace) == 0x000008, "Member 'SidewaysWidgetBase_OnSidewaysStateChanged::NewPlayspace' has a wrong offset!");
static_assert(offsetof(SidewaysWidgetBase_OnSidewaysStateChanged, OldState) == 0x000010, "Member 'SidewaysWidgetBase_OnSidewaysStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(SidewaysWidgetBase_OnSidewaysStateChanged, NewState) == 0x000011, "Member 'SidewaysWidgetBase_OnSidewaysStateChanged::NewState' has a wrong offset!");

struct SidewaysWidgetBase_IsValidPlayspace final
{
public:
	class ASidewaysPlayspace*                     Playspace;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SidewaysWidgetBase_IsValidPlayspace) == 0x000008, "Wrong alignment on SidewaysWidgetBase_IsValidPlayspace");
static_assert(sizeof(SidewaysWidgetBase_IsValidPlayspace) == 0x000010, "Wrong size on SidewaysWidgetBase_IsValidPlayspace");
static_assert(offsetof(SidewaysWidgetBase_IsValidPlayspace, Playspace) == 0x000000, "Member 'SidewaysWidgetBase_IsValidPlayspace::Playspace' has a wrong offset!");
static_assert(offsetof(SidewaysWidgetBase_IsValidPlayspace, ReturnValue) == 0x000008, "Member 'SidewaysWidgetBase_IsValidPlayspace::ReturnValue' has a wrong offset!");

}
