#pragma once

#include "Basic.hpp"

#include "AnimationSharing_classes.hpp"
#include "AnimationSharing_parameters.hpp"

namespace SDK
{

class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimationSharingStateProcessor", "GetAnimationStateEnum");

	Params::AnimationSharingStateProcessor_GetAnimationStateEnum Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAnimationSharingStateProcessor::ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimationSharingStateProcessor", "ProcessActorState");

	Params::AnimationSharingStateProcessor_ProcessActorState Parms{};

	Parms.InActor = InActor;
	Parms.CurrentState = CurrentState;
	Parms.OnDemandState = OnDemandState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutState != nullptr)
		*OutState = Parms.OutState;

	if (bShouldProcess != nullptr)
		*bShouldProcess = Parms.bShouldProcess;
}

void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimSharingStateInstance", "GetInstancedActors");

	Params::AnimSharingStateInstance_GetInstancedActors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Actors != nullptr)
		*Actors = std::move(Parms.Actors);
}

bool UAnimationSharingManager::AnimationSharingEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationSharingManager", "AnimationSharingEnabled");

	Params::AnimationSharingManager_AnimationSharingEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, const class UAnimationSharingSetup* Setup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationSharingManager", "CreateAnimationSharingManager");

	Params::AnimationSharingManager_CreateAnimationSharingManager Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Setup = Setup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationSharingManager", "GetAnimationSharingManager");

	Params::AnimationSharingManager_GetAnimationSharingManager Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, const class USkeleton* SharingSkeleton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimationSharingManager", "RegisterActorWithSkeletonBP");

	Params::AnimationSharingManager_RegisterActorWithSkeletonBP Parms{};

	Parms.InActor = InActor;
	Parms.SharingSkeleton = SharingSkeleton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
