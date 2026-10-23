#pragma once

#include "Basic.hpp"

#include "GameplayBehaviorsModule_classes.hpp"
#include "GameplayBehaviorsModule_parameters.hpp"

namespace SDK
{

void UGameplayBehavior::K2_AbortBehavior(class AActor* Avatar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_AbortBehavior");

	Params::GameplayBehavior_K2_AbortBehavior Parms{};

	Parms.Avatar = Avatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayBehavior::K2_EndBehavior(class AActor* Avatar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_EndBehavior");

	Params::GameplayBehavior_K2_EndBehavior Parms{};

	Parms.Avatar = Avatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayBehavior::K2_OnFinished(class AActor* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnFinished");

	Params::GameplayBehavior_K2_OnFinished Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayBehavior::K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedCharacter");

	Params::GameplayBehavior_K2_OnFinishedCharacter Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayBehavior::K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedPawn");

	Params::GameplayBehavior_K2_OnFinishedPawn Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayBehavior::K2_OnTriggered(class AActor* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggered");

	Params::GameplayBehavior_K2_OnTriggered Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayBehavior::K2_OnTriggeredCharacter(class ACharacter* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredCharacter");

	Params::GameplayBehavior_K2_OnTriggeredCharacter Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayBehavior::K2_OnTriggeredPawn(class APawn* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredPawn");

	Params::GameplayBehavior_K2_OnTriggeredPawn Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayBehavior::K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_TriggerBehavior");

	Params::GameplayBehavior_K2_TriggerBehavior Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UGameplayBehavior::K2_GetNextActorIndexInSequence(int32 CurrentIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior", "K2_GetNextActorIndexInSequence");

	Params::GameplayBehavior_K2_GetNextActorIndexInSequence Parms{};

	Parms.CurrentIndex = CurrentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayBehaviorsBlueprintFunctionLibrary::AddGameplayTagFilterToBlackboardKeySelector(struct FBlackboardKeySelector* InSelector, class UObject* Owner, class FName PropertyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "AddGameplayTagFilterToBlackboardKeySelector");

	Params::GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector Parms{};

	Parms.Owner = Owner;
	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InSelector != nullptr)
		*InSelector = std::move(Parms.InSelector);
}

struct FGameplayTagContainer UGameplayBehaviorsBlueprintFunctionLibrary::GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "GetBlackboardValueAsGameplayTag");

	Params::GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTagContainer UGameplayBehaviorsBlueprintFunctionLibrary::GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, const class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "GetBlackboardValueAsGameplayTagFromBlackboardComp");

	Params::GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp Parms{};

	Parms.BlackboardComp = BlackboardComp;
	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayBehaviorsBlueprintFunctionLibrary::SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FGameplayTagContainer& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "SetBlackboardValueAsGameplayTag");

	Params::GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, const class FName& KeyName, const struct FGameplayTagContainer& GameplayTagValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "SetValueAsGameplayTagForBlackboardComp");

	Params::GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp Parms{};

	Parms.BlackboardComp = BlackboardComp;
	Parms.KeyName = KeyName;
	Parms.GameplayTagValue = std::move(GameplayTagValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayBehavior_AnimationBased::OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayBehavior_AnimationBased", "OnMontageFinished");

	Params::GameplayBehavior_AnimationBased_OnMontageFinished Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.InAvatar = InAvatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
