#pragma once

#include "Basic.hpp"

#include "VerseGameplayTags_classes.hpp"
#include "VerseGameplayTags_parameters.hpp"

namespace SDK
{

void IVerseGameplayTagAssetInterface::GetOwnedGameplayTags(struct FVerseGameplayTagContainer* TagContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::VerseGameplayTagAssetInterface_GetOwnedGameplayTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TagContainer != nullptr)
		*TagContainer = std::move(Parms.TagContainer);
}

bool IVerseGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FVerseGameplayTagContainer& TagContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags Parms{};

	Parms.TagContainer = std::move(TagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IVerseGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FVerseGameplayTagContainer& TagContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags Parms{};

	Parms.TagContainer = std::move(TagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IVerseGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FVerseGameplayTag& TagToCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::VerseGameplayTagAssetInterface_HasMatchingGameplayTag Parms{};

	Parms.TagToCheck = std::move(TagToCheck);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
