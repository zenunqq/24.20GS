#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

class FortQuestManager
{
public:
	static void QueueStatEvent(UFortQuestManager* QuestManager, EFortQuestObjectiveStatEvent EventType, const UObject* TargetObject, FGameplayTagContainer* TargetTags, FGameplayTagContainer* SourceTags, FGameplayTagContainer* ContextTags, FFortQuestObjectiveStatTableRow* ObjectiveStat, FName ObjectiveBackendName, int Count);

	InitHooks;
};
