#pragma once

#include "Basic.hpp"

#include "AIPatrolPath_classes.hpp"
#include "AIPatrolPath_parameters.hpp"

namespace SDK
{

void UAIPatrolPathComponent::GeneratePathPoints(const EFortCreativePatrolPathGroup PatrolPathGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GeneratePathPoints");

	Params::AIPatrolPathComponent_GeneratePathPoints Parms{};

	Parms.PatrolPathGroup = PatrolPathGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TSubclassOf<class UNavigationQueryFilter> UAIPatrolPathComponent::GetPatrolFilterOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolFilterOptions");

	Params::AIPatrolPathComponent_GetPatrolFilterOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAIPatrolPathComponent::OnPathExtremitiesChanged(const bool bIsStart, const bool bIsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "OnPathExtremitiesChanged");

	Params::AIPatrolPathComponent_OnPathExtremitiesChanged Parms{};

	Parms.bIsStart = bIsStart;
	Parms.bIsEnd = bIsEnd;

	UObject::ProcessEvent(Func, &Parms);
}

void UAIPatrolPathComponent::OnPatrolPathActorAssigned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "OnPatrolPathActorAssigned");

	UObject::ProcessEvent(Func, nullptr);
}

void UAIPatrolPathComponent::OnPatrolPathGroupsMerged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "OnPatrolPathGroupsMerged");

	UObject::ProcessEvent(Func, nullptr);
}

void UAIPatrolPathComponent::PatrolPathStarted(class AAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPathStarted");

	Params::AIPatrolPathComponent_PatrolPathStarted Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::PatrolPathStopped(class AAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPathStopped");

	Params::AIPatrolPathComponent_PatrolPathStopped Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPointFailedToReach");

	Params::AIPatrolPathComponent_PatrolPointFailedToReach Parms{};

	Parms.PathPoint = PathPoint;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "PatrolPointReached");

	Params::AIPatrolPathComponent_PatrolPointReached Parms{};

	Parms.PathPoint = PathPoint;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAIPatrolPathComponent::RemovePoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "RemovePoint");

	Params::AIPatrolPathComponent_RemovePoint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAIPatrolPathComponent::RenderToNextAndPreviousPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "RenderToNextAndPreviousPoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::RenderToNextPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "RenderToNextPoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::RequestRenderPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "RequestRenderPath");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::SetPatrollingMode(const EPatrollingMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetPatrollingMode");

	Params::AIPatrolPathComponent_SetPatrollingMode Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::SetPatrolPathEnabled(const bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetPatrolPathEnabled");

	Params::AIPatrolPathComponent_SetPatrolPathEnabled Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::SetPatrolPathGroup(const EFortCreativePatrolPathGroup PatrolPathGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetPatrolPathGroup");

	Params::AIPatrolPathComponent_SetPatrolPathGroup Parms{};

	Parms.PatrolPathGroup = PatrolPathGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIPatrolPathComponent::SetRenderPath(const bool bRenderPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "SetRenderPath");

	Params::AIPatrolPathComponent_SetRenderPath Parms{};

	Parms.bRenderPath = bRenderPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAIPatrolPathComponent::ShouldRenderPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "ShouldRenderPath");

	Params::AIPatrolPathComponent_ShouldRenderPath Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UAIPatrolPathComponent::SyncSharedUserOptions(class UAIPatrolPathComponent* CopyToAIPatrolPathComp, const TMap<class FString, class FString>& UserOptionValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "SyncSharedUserOptions");

	Params::AIPatrolPathComponent_SyncSharedUserOptions Parms{};

	Parms.CopyToAIPatrolPathComp = CopyToAIPatrolPathComp;
	Parms.UserOptionValues = std::move(UserOptionValues);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAIPatrolPathComponent::CanNextPointBeReached() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "CanNextPointBeReached");

	Params::AIPatrolPathComponent_CanNextPointBeReached Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UAIPatrolPathComponent*> UAIPatrolPathComponent::GetLinkedPatrolPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetLinkedPatrolPoints");

	Params::AIPatrolPathComponent_GetLinkedPatrolPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAIPatrolPathComponent::GetNextAvailablePatrolPathIndex(int32* NextAvailableIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetNextAvailablePatrolPathIndex");

	Params::AIPatrolPathComponent_GetNextAvailablePatrolPathIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NextAvailableIndex != nullptr)
		*NextAvailableIndex = Parms.NextAvailableIndex;

	return Parms.ReturnValue;
}

int32 UAIPatrolPathComponent::GetPatrolPathIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathIndex");

	Params::AIPatrolPathComponent_GetPatrolPathIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAIPatrolPathComponent* UAIPatrolPathComponent::GetPatrolPathPoint(const int32 InPatrolPathIndex, const int32 InPatrolPathPointIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathPoint");

	Params::AIPatrolPathComponent_GetPatrolPathPoint Parms{};

	Parms.InPatrolPathIndex = InPatrolPathIndex;
	Parms.InPatrolPathPointIndex = InPatrolPathPointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAIPatrolPathComponent::GetPatrolPathPointIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "GetPatrolPathPointIndex");

	Params::AIPatrolPathComponent_GetPatrolPathPointIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAIPatrolPathComponent::HasValidPatrolPath() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIPatrolPathComponent", "HasValidPatrolPath");

	Params::AIPatrolPathComponent_HasValidPatrolPath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
