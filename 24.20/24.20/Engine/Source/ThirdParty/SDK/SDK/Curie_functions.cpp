#pragma once

#include "Basic.hpp"

#include "Curie_classes.hpp"
#include "Curie_parameters.hpp"

namespace SDK
{

void ICurieInterface::OnCurieContainerAcquired_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieContainerAcquired_BP");

	Params::CurieInterface_OnCurieContainerAcquired_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieContainerReleased_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieContainerReleased_BP");

	Params::CurieInterface_OnCurieContainerReleased_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieContainerReparented_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieContainerReparented_BP");

	Params::CurieInterface_OnCurieContainerReparented_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementAttached_BP");

	Params::CurieInterface_OnCurieElementAttached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementDetached_BP");

	Params::CurieInterface_OnCurieElementDetached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementInteract_BP");

	Params::CurieInterface_OnCurieElementInteract_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);
	Parms.InteractParamsHandle = std::move(InteractParamsHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementInteractBegun_BP");

	Params::CurieInterface_OnCurieElementInteractBegun_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);
	Parms.InteractParamsHandle = std::move(InteractParamsHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementInteractEnded_BP");

	Params::CurieInterface_OnCurieElementInteractEnded_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);
	Parms.InteractParamsHandle = std::move(InteractParamsHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieStateAttached_BP");

	Params::CurieInterface_OnCurieStateAttached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.StateTag = std::move(StateTag);

	UObject::ProcessEvent(Func, &Parms);
}

void ICurieInterface::OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieInterface", "OnCurieStateDetached_BP");

	Params::CurieInterface_OnCurieStateDetached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.StateTag = std::move(StateTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UCurieManager::BindDelegateForCurieElementAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementAttached");

	Params::CurieManager_BindDelegateForCurieElementAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementBeginInteract");

	Params::CurieManager_BindDelegateForCurieElementBeginInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::BindDelegateForCurieElementDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementDetached");

	Params::CurieManager_BindDelegateForCurieElementDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementEndInteract");

	Params::CurieManager_BindDelegateForCurieElementEndInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::BindDelegateForCurieElementInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementInteract");

	Params::CurieManager_BindDelegateForCurieElementInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::BindDelegateForCurieStateAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateAttached");

	Params::CurieManager_BindDelegateForCurieStateAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::BindDelegateForCurieStateDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateDetached");

	Params::CurieManager_BindDelegateForCurieStateDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::HandleContainerOwnerDestroyed(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "HandleContainerOwnerDestroyed");

	Params::CurieManager_HandleContainerOwnerDestroyed Parms{};

	Parms.OwnerActor = OwnerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementAttached");

	Params::CurieManager_UnbindDelegateForCurieElementAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementBeginInteract");

	Params::CurieManager_UnbindDelegateForCurieElementBeginInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementDetached");

	Params::CurieManager_UnbindDelegateForCurieElementDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementEndInteract");

	Params::CurieManager_UnbindDelegateForCurieElementEndInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementInteract");

	Params::CurieManager_UnbindDelegateForCurieElementInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateAttached");

	Params::CurieManager_UnbindDelegateForCurieStateAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCurieManager::UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateDetached");

	Params::CurieManager_UnbindDelegateForCurieStateDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
