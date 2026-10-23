#pragma once

#include "Basic.hpp"

#include "AssetTags_classes.hpp"
#include "AssetTags_parameters.hpp"

namespace SDK
{

bool UAssetTagsSubsystem::CollectionExists(const class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "CollectionExists");

	Params::AssetTagsSubsystem_CollectionExists Parms{};

	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(const class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetAssetsInCollection");

	Params::AssetTagsSubsystem_GetAssetsInCollection Parms{};

	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UAssetTagsSubsystem::GetCollections()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollections");

	Params::AssetTagsSubsystem_GetCollections Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(const class FName AssetPathName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAsset");

	Params::AssetTagsSubsystem_GetCollectionsContainingAsset Parms{};

	Parms.AssetPathName = AssetPathName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetData");

	Params::AssetTagsSubsystem_GetCollectionsContainingAssetData Parms{};

	Parms.AssetData = std::move(AssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(const class UObject* AssetPtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetPtr");

	Params::AssetTagsSubsystem_GetCollectionsContainingAssetPtr Parms{};

	Parms.AssetPtr = AssetPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UAssetTagsSubsystem::K2_GetCollectionsContainingAsset(const struct FSoftObjectPath& AssetPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetTagsSubsystem", "K2_GetCollectionsContainingAsset");

	Params::AssetTagsSubsystem_K2_GetCollectionsContainingAsset Parms{};

	Parms.AssetPath = std::move(AssetPath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
