#pragma once

#include "Basic.hpp"

#include "SidewaysCodeRuntime_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidewaysWidgetBase final : public UFortHUDElementWidget
{
public:
	class AFortPlayspaceReplicatedState*          ReplicatedState;
	ESidewaysState                                CurrentSidewaysState;
	uint8                                         Pad_2D9[0x7];

public:
	void ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace);
	void HandleFortPawnChanged(class AFortPawn* PossessedPawn);
	void InitializeVariables();
	void OnEnterSideways(class ASidewaysPlayspace* Playspace);
	void OnExitSideways();
	void OnParamUpdated(const struct FGameplayTag& UpdatedParam);
	void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState);

	bool IsValidPlayspace(class ASidewaysPlayspace* Playspace) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysWidgetBase">();
	}
	static class USidewaysWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidewaysWidgetBase>();
	}
};
static_assert(alignof(USidewaysWidgetBase) == 0x000008, "Wrong alignment on USidewaysWidgetBase");
static_assert(sizeof(USidewaysWidgetBase) == 0x0002E0, "Wrong size on USidewaysWidgetBase");
static_assert(offsetof(USidewaysWidgetBase, ReplicatedState) == 0x0002D0, "Member 'USidewaysWidgetBase::ReplicatedState' has a wrong offset!");
static_assert(offsetof(USidewaysWidgetBase, CurrentSidewaysState) == 0x0002D8, "Member 'USidewaysWidgetBase::CurrentSidewaysState' has a wrong offset!");

}
