#pragma once

#include "Basic.hpp"

#include "TargetingSystem_classes.hpp"
#include "TargetingSystem_parameters.hpp"

namespace SDK
{

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, const TArray<class AActor*>& InTargets, bool bAllowAsync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_PerformTargeting", "PerformFilteringRequest");

	Params::AbilityTask_PerformTargeting_PerformFilteringRequest Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetingPreset = TargetingPreset;
	Parms.InTargets = std::move(InTargets);
	Parms.bAllowAsync = bAllowAsync;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_PerformTargeting", "PerformTargetingRequest");

	Params::AbilityTask_PerformTargeting_PerformTargetingRequest Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.InTargetingPreset = InTargetingPreset;
	Parms.bAllowAsync = bAllowAsync;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformFilteringRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset_0, bool bUseAsyncTargeting_0, const TArray<class AActor*>& InTargets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_PerformTargeting", "PerformFilteringRequest");

	Params::AsyncAction_PerformTargeting_PerformFilteringRequest Parms{};

	Parms.SourceActor = SourceActor;
	Parms.TargetingPreset_0 = TargetingPreset_0;
	Parms.bUseAsyncTargeting_0 = bUseAsyncTargeting_0;
	Parms.InTargets = std::move(InTargets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformTargetingRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset_0, bool bUseAsyncTargeting_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_PerformTargeting", "PerformTargetingRequest");

	Params::AsyncAction_PerformTargeting_PerformTargetingRequest Parms{};

	Parms.SourceActor = SourceActor;
	Parms.TargetingPreset_0 = TargetingPreset_0;
	Parms.bUseAsyncTargeting_0 = bUseAsyncTargeting_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UTargetingSelectionTask_AOE::GetSourceLocation(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceLocation");

	Params::TargetingSelectionTask_AOE_GetSourceLocation Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UTargetingSelectionTask_AOE::GetSourceOffset(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceOffset");

	Params::TargetingSelectionTask_AOE_GetSourceOffset Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTargetingSelectionTask_Trace::GetAdditionalActorsToIgnore(const struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* OutAdditionalActorsToIgnore) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetAdditionalActorsToIgnore");

	Params::TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAdditionalActorsToIgnore != nullptr)
		*OutAdditionalActorsToIgnore = std::move(Parms.OutAdditionalActorsToIgnore);
}

struct FVector UTargetingSelectionTask_Trace::GetSourceLocation(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceLocation");

	Params::TargetingSelectionTask_Trace_GetSourceLocation Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UTargetingSelectionTask_Trace::GetSourceOffset(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceOffset");

	Params::TargetingSelectionTask_Trace_GetSourceOffset Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTargetingSelectionTask_Trace::GetSweptTraceRadius(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSweptTraceRadius");

	Params::TargetingSelectionTask_Trace_GetSweptTraceRadius Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UTargetingSelectionTask_Trace::GetTraceDirection(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceDirection");

	Params::TargetingSelectionTask_Trace_GetTraceDirection Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTargetingSelectionTask_Trace::GetTraceLength(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceLength");

	Params::TargetingSelectionTask_Trace_GetTraceLength Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTargetingSubsystem::GetTargetingResults(const struct FTargetingRequestHandle& TargetingHandle, TArray<struct FHitResult>* OutTargets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TargetingSubsystem", "GetTargetingResults");

	Params::TargetingSubsystem_GetTargetingResults Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTargets != nullptr)
		*OutTargets = std::move(Parms.OutTargets);
}

void UTargetingSubsystem::GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TargetingSubsystem", "GetTargetingResultsActors");

	Params::TargetingSubsystem_GetTargetingResultsActors Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Targets != nullptr)
		*Targets = std::move(Parms.Targets);
}

struct FTargetingSourceContext UTargetingSubsystem::GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TargetingSubsystem", "GetTargetingSourceContext");

	Params::TargetingSubsystem_GetTargetingSourceContext Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTargetingSubsystem::RemoveAsyncTargetingRequestWithHandle(struct FTargetingRequestHandle* TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSubsystem", "RemoveAsyncTargetingRequestWithHandle");

	Params::TargetingSubsystem_RemoveAsyncTargetingRequestWithHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TargetingHandle != nullptr)
		*TargetingHandle = std::move(Parms.TargetingHandle);
}

struct FTargetingRequestHandle UTargetingSubsystem::StartAsyncTargetingRequest(const class UTargetingPreset* TargetingPreset, const struct FTargetingSourceContext& InSourceContext, TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSubsystem", "StartAsyncTargetingRequest");

	Params::TargetingSubsystem_StartAsyncTargetingRequest Parms{};

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = std::move(InSourceContext);
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTargetingSubsystem::ExecuteTargetingRequest(const class UTargetingPreset* TargetingPreset, const struct FTargetingSourceContext& InSourceContext, TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSubsystem", "ExecuteTargetingRequest");

	Params::TargetingSubsystem_ExecuteTargetingRequest Parms{};

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = std::move(InSourceContext);
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
