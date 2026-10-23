#pragma once

#include "Basic.hpp"

#include "CosmeticsFrameworkItems_classes.hpp"
#include "CosmeticsFrameworkItems_parameters.hpp"

namespace SDK
{

bool UCosmeticDataComponent::BP_AddOrOverrideProperty(const struct FGameplayTag& SlotTag, const struct FCosmeticPropertyBase& Property)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticDataComponent", "BP_AddOrOverrideProperty");

	Params::CosmeticDataComponent_BP_AddOrOverrideProperty Parms{};

	Parms.SlotTag = std::move(SlotTag);
	Parms.Property = std::move(Property);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCosmeticDataComponent::BP_FindProperty(const struct FGameplayTag& SlotTag, const struct FGameplayTag& PropertyTag, struct FCosmeticPropertyBase* OutProperty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticDataComponent", "BP_FindProperty");

	Params::CosmeticDataComponent_BP_FindProperty Parms{};

	Parms.SlotTag = std::move(SlotTag);
	Parms.PropertyTag = std::move(PropertyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutProperty != nullptr)
		*OutProperty = std::move(Parms.OutProperty);

	return Parms.ReturnValue;
}

void UCosmeticDataComponent::ResetProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticDataComponent", "ResetProperties");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
