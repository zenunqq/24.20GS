#pragma once

#include "Basic.hpp"

#include "EpicGameplayStatsRuntime_classes.hpp"
#include "EpicGameplayStatsRuntime_parameters.hpp"

namespace SDK
{

bool UBlueprintGameplayStatsLibrary::EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlueprintGameplayStatsLibrary", "EqualEqual_GameplayStatTagGameplayStatTag");

	Params::BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBlueprintGameplayStatsLibrary::NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlueprintGameplayStatsLibrary", "NotEqual_GameplayStatTagGameplayStatTag");

	Params::BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
