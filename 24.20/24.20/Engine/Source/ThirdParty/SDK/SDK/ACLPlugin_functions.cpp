#pragma once

#include "Basic.hpp"

#include "ACLPlugin_classes.hpp"
#include "ACLPlugin_parameters.hpp"

namespace SDK
{

EACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationCompressionLibraryDatabase", "GetVisualFidelity");

	Params::AnimationCompressionLibraryDatabase_GetVisualFidelity Parms{};

	Parms.DatabaseAsset = DatabaseAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAnimationCompressionLibraryDatabase::SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult* Result, EACLVisualFidelity VisualFidelity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationCompressionLibraryDatabase", "SetVisualFidelity");

	Params::AnimationCompressionLibraryDatabase_SetVisualFidelity Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);
	Parms.DatabaseAsset = DatabaseAsset;
	Parms.VisualFidelity = VisualFidelity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
