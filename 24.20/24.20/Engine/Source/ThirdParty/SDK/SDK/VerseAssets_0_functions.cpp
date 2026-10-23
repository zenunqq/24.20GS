#pragma once

#include "Basic.hpp"

#include "VerseAssets_0_classes.hpp"

namespace SDK
{

void UVerseAssetPtr::OnRep_AssetPathName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAssetPtr", "OnRep_AssetPathName");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
