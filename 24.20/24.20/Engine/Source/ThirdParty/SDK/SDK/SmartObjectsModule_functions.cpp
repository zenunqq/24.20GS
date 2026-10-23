#pragma once

#include "Basic.hpp"

#include "SmartObjectsModule_classes.hpp"
#include "SmartObjectsModule_parameters.hpp"

namespace SDK
{

bool USmartObjectBlueprintFunctionLibrary::AddMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddMultipleSmartObjects");

	Params::SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects Parms{};

	Parms.SmartObjectActors = std::move(SmartObjectActors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::AddOrRemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors, const bool bAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddOrRemoveMultipleSmartObjects");

	Params::SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects Parms{};

	Parms.SmartObjectActors = std::move(SmartObjectActors);
	Parms.bAdd = bAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::AddOrRemoveSmartObject(class AActor* SmartObject, const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddOrRemoveSmartObject");

	Params::SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject Parms{};

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::AddSmartObject(class AActor* SmartObjectActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "AddSmartObject");

	Params::SmartObjectBlueprintFunctionLibrary_AddSmartObject Parms{};

	Parms.SmartObjectActor = SmartObjectActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSmartObjectClaimHandle USmartObjectBlueprintFunctionLibrary::GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetBlackboardValueAsSOClaimHandle");

	Params::SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSmartObjectClaimHandle USmartObjectBlueprintFunctionLibrary::GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetValueAsSOClaimHandle");

	Params::SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle Parms{};

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "IsValidSmartObjectClaimHandle");

	Params::SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::RemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "RemoveMultipleSmartObjects");

	Params::SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects Parms{};

	Parms.SmartObjectActors = std::move(SmartObjectActors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::RemoveSmartObject(class AActor* SmartObjectActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "RemoveSmartObject");

	Params::SmartObjectBlueprintFunctionLibrary_RemoveSmartObject Parms{};

	Parms.SmartObjectActor = SmartObjectActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USmartObjectBlueprintFunctionLibrary::SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FSmartObjectClaimHandle& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetBlackboardValueAsSOClaimHandle");

	Params::SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USmartObjectBlueprintFunctionLibrary::SetMultipleSmartObjectsEnabled(const TArray<class AActor*>& SmartObjectActors, const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetMultipleSmartObjectsEnabled");

	Params::SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled Parms{};

	Parms.SmartObjectActors = std::move(SmartObjectActors);
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectBlueprintFunctionLibrary::SetSmartObjectEnabled(class AActor* SmartObjectActor, const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetSmartObjectEnabled");

	Params::SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled Parms{};

	Parms.SmartObjectActor = SmartObjectActor;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USmartObjectBlueprintFunctionLibrary::SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName, const struct FSmartObjectClaimHandle& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetValueAsSOClaimHandle");

	Params::SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle Parms{};

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USmartObjectComponent::ReceiveOnEvent(const struct FSmartObjectEventData& EventData, const class AActor* Interactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectComponent", "ReceiveOnEvent");

	Params::SmartObjectComponent_ReceiveOnEvent Parms{};

	Parms.EventData = std::move(EventData);
	Parms.Interactor = Interactor;

	UObject::ProcessEvent(Func, &Parms);
}

void USmartObjectSubsystem::AddTagToInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "AddTagToInstance");

	Params::SmartObjectSubsystem_AddTagToInstance Parms{};

	Parms.Handle = std::move(Handle);
	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USmartObjectSubsystem::AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "AddTagToSlot");

	Params::SmartObjectSubsystem_AddTagToSlot Parms{};

	Parms.SlotHandle = std::move(SlotHandle);
	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSmartObjectClaimHandle USmartObjectSubsystem::Claim(const struct FSmartObjectRequestResult& RequestResult, const class AActor* UserActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "Claim");

	Params::SmartObjectSubsystem_Claim Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class USmartObjectBehaviorDefinition* USmartObjectSubsystem::GetBehaviorDefinition(const struct FSmartObjectClaimHandle& ClaimHandle, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetBehaviorDefinition");

	Params::SmartObjectSubsystem_GetBehaviorDefinition Parms{};

	Parms.ClaimHandle = std::move(ClaimHandle);
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class USmartObjectBehaviorDefinition* USmartObjectSubsystem::GetBehaviorDefinitionByRequestResult(const struct FSmartObjectRequestResult& RequestResult, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetBehaviorDefinitionByRequestResult");

	Params::SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::Release(const struct FSmartObjectClaimHandle& ClaimHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "Release");

	Params::SmartObjectSubsystem_Release Parms{};

	Parms.ClaimHandle = std::move(ClaimHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USmartObjectSubsystem::RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "RemoveTagFromInstance");

	Params::SmartObjectSubsystem_RemoveTagFromInstance Parms{};

	Parms.Handle = std::move(Handle);
	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USmartObjectSubsystem::RemoveTagFromSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "RemoveTagFromSlot");

	Params::SmartObjectSubsystem_RemoveTagFromSlot Parms{};

	Parms.SlotHandle = std::move(SlotHandle);
	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::SetEnabled(const struct FSmartObjectHandle& Handle, const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "SetEnabled");

	Params::SmartObjectSubsystem_SetEnabled Parms{};

	Parms.Handle = std::move(Handle);
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::SetSlotEnabled(const struct FSmartObjectSlotHandle& SlotHandle, const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "SetSlotEnabled");

	Params::SmartObjectSubsystem_SetSlotEnabled Parms{};

	Parms.SlotHandle = std::move(SlotHandle);
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class USmartObjectBehaviorDefinition* USmartObjectSubsystem::Use(const struct FSmartObjectClaimHandle& ClaimHandle, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "Use");

	Params::SmartObjectSubsystem_Use Parms{};

	Parms.ClaimHandle = std::move(ClaimHandle);
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSmartObjectRequestResult USmartObjectSubsystem::FindSmartObject(const struct FSmartObjectRequest& Request, const class AActor* UserActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObject");

	Params::SmartObjectSubsystem_FindSmartObject Parms{};

	Parms.Request = std::move(Request);
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::FindSmartObjects(const struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObjects");

	Params::SmartObjectSubsystem_FindSmartObjects Parms{};

	Parms.Request = std::move(Request);
	Parms.UserActor = UserActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutResults != nullptr)
		*OutResults = std::move(Parms.OutResults);

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer USmartObjectSubsystem::GetInstanceTags(const struct FSmartObjectHandle& Handle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetInstanceTags");

	Params::SmartObjectSubsystem_GetInstanceTags Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::GetSlotLocation(const struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotLocation");

	Params::SmartObjectSubsystem_GetSlotLocation Parms{};

	Parms.ClaimHandle = std::move(ClaimHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSlotLocation != nullptr)
		*OutSlotLocation = std::move(Parms.OutSlotLocation);

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer USmartObjectSubsystem::GetSlotTags(const struct FSmartObjectSlotHandle& SlotHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTags");

	Params::SmartObjectSubsystem_GetSlotTags Parms{};

	Parms.SlotHandle = std::move(SlotHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::GetSlotTransform(const struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransform");

	Params::SmartObjectSubsystem_GetSlotTransform Parms{};

	Parms.ClaimHandle = std::move(ClaimHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSlotTransform != nullptr)
		*OutSlotTransform = std::move(Parms.OutSlotTransform);

	return Parms.ReturnValue;
}

bool USmartObjectSubsystem::GetSlotTransformFromRequestResult(const struct FSmartObjectRequestResult& RequestResult, struct FTransform* OutSlotTransform) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransformFromRequestResult");

	Params::SmartObjectSubsystem_GetSlotTransformFromRequestResult Parms{};

	Parms.RequestResult = std::move(RequestResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSlotTransform != nullptr)
		*OutSlotTransform = std::move(Parms.OutSlotTransform);

	return Parms.ReturnValue;
}

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponent(const struct FSmartObjectClaimHandle& ClaimHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponent");

	Params::SmartObjectSubsystem_GetSmartObjectComponent Parms{};

	Parms.ClaimHandle = std::move(ClaimHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponentByRequestResult(const struct FSmartObjectRequestResult& Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponentByRequestResult");

	Params::SmartObjectSubsystem_GetSmartObjectComponentByRequestResult Parms{};

	Parms.Result = std::move(Result);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ASmartObjectTestingActor::ResetTests()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectTestingActor", "ResetTests");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ASmartObjectTestingActor::RunTests()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartObjectTestingActor", "RunTests");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
