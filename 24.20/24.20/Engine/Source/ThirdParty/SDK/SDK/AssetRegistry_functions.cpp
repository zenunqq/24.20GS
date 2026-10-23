#pragma once

#include "Basic.hpp"

#include "AssetRegistry_classes.hpp"
#include "AssetRegistry_parameters.hpp"

namespace SDK
{

struct FAssetData UAssetRegistryHelpers::CreateAssetData(const class UObject* InAsset, bool bAllowBlueprintClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "CreateAssetData");

	Params::AssetRegistryHelpers_CreateAssetData Parms{};

	Parms.InAsset = InAsset;
	Parms.bAllowBlueprintClass = bAllowBlueprintClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UClass* UAssetRegistryHelpers::FindAssetNativeClass(const struct FAssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "FindAssetNativeClass");

	Params::AssetRegistryHelpers_FindAssetNativeClass Parms{};

	Parms.AssetData = std::move(AssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetAsset");

	Params::AssetRegistryHelpers_GetAsset Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TScriptInterface<class IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");

	Params::AssetRegistryHelpers_GetAssetRegistry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAssetRegistryHelpers::GetBlueprintAssets(const struct FARFilter& InFilter, TArray<struct FAssetData>* OutAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetBlueprintAssets");

	Params::AssetRegistryHelpers_GetBlueprintAssets Parms{};

	Parms.InFilter = std::move(InFilter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);
}

class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetClass");

	Params::AssetRegistryHelpers_GetClass Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetExportTextName");

	Params::AssetRegistryHelpers_GetExportTextName Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetFullName");

	Params::AssetRegistryHelpers_GetFullName Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const class FName& InTagName, class FString* OutTagValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "GetTagValue");

	Params::AssetRegistryHelpers_GetTagValue Parms{};

	Parms.InAssetData = std::move(InAssetData);
	Parms.InTagName = InTagName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTagValue != nullptr)
		*OutTagValue = std::move(Parms.OutTagValue);

	return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");

	Params::AssetRegistryHelpers_IsAssetLoaded Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsRedirector");

	Params::AssetRegistryHelpers_IsRedirector Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsUAsset");

	Params::AssetRegistryHelpers_IsUAsset Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "IsValid");

	Params::AssetRegistryHelpers_IsValid Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");

	Params::AssetRegistryHelpers_SetFilterTagsAndValues Parms{};

	Parms.InFilter = std::move(InFilter);
	Parms.InTagsAndValues = std::move(InTagsAndValues);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");

	Params::AssetRegistryHelpers_ToSoftObjectPath Parms{};

	Parms.InAssetData = std::move(InAssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IAssetRegistry::PrioritizeSearchPath(const class FString& PathToPrioritize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "PrioritizeSearchPath");

	Params::AssetRegistry_PrioritizeSearchPath Parms{};

	Parms.PathToPrioritize = std::move(PathToPrioritize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAssetRegistry::ScanFilesSynchronous(const TArray<class FString>& InFilePaths, bool bForceRescan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "ScanFilesSynchronous");

	Params::AssetRegistry_ScanFilesSynchronous Parms{};

	Parms.InFilePaths = std::move(InFilePaths);
	Parms.bForceRescan = bForceRescan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAssetRegistry::ScanModifiedAssetFiles(const TArray<class FString>& InFilePaths)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "ScanModifiedAssetFiles");

	Params::AssetRegistry_ScanModifiedAssetFiles Parms{};

	Parms.InFilePaths = std::move(InFilePaths);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAssetRegistry::ScanPathsSynchronous(const TArray<class FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "ScanPathsSynchronous");

	Params::AssetRegistry_ScanPathsSynchronous Parms{};

	Parms.InPaths = std::move(InPaths);
	Parms.bForceRescan = bForceRescan;
	Parms.bIgnoreDenyListScanFilters = bIgnoreDenyListScanFilters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "SearchAllAssets");

	Params::AssetRegistry_SearchAllAssets Parms{};

	Parms.bSynchronousSearch = bSynchronousSearch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAssetRegistry::WaitForCompletion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "WaitForCompletion");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IAssetRegistry::WaitForPackage(const class FString& PackageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "WaitForPackage");

	Params::AssetRegistry_WaitForPackage Parms{};

	Parms.PackageName = std::move(PackageName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool IAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAllAssets");

	Params::AssetRegistry_GetAllAssets Parms{};

	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}

void IAssetRegistry::GetAllCachedPaths(TArray<class FString>* OutPathList) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAllCachedPaths");

	Params::AssetRegistry_GetAllCachedPaths Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPathList != nullptr)
		*OutPathList = std::move(Parms.OutPathList);
}

bool IAssetRegistry::GetAncestorClassNames(const struct FTopLevelAssetPath& ClassPathName, TArray<struct FTopLevelAssetPath>* OutAncestorClassNames) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAncestorClassNames");

	Params::AssetRegistry_GetAncestorClassNames Parms{};

	Parms.ClassPathName = std::move(ClassPathName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAncestorClassNames != nullptr)
		*OutAncestorClassNames = std::move(Parms.OutAncestorClassNames);

	return Parms.ReturnValue;
}

struct FAssetData IAssetRegistry::GetAssetByObjectPath(const class FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetByObjectPath");

	Params::AssetRegistry_GetAssetByObjectPath Parms{};

	Parms.ObjectPath = ObjectPath;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData, bool bSkipARFilteredAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssets");

	Params::AssetRegistry_GetAssets Parms{};

	Parms.Filter = std::move(Filter);
	Parms.bSkipARFilteredAssets = bSkipARFilteredAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssetsByClass(const struct FTopLevelAssetPath& ClassPathName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByClass");

	Params::AssetRegistry_GetAssetsByClass Parms{};

	Parms.ClassPathName = std::move(ClassPathName);
	Parms.bSearchSubClasses = bSearchSubClasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssetsByPackageName(class FName PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPackageName");

	Params::AssetRegistry_GetAssetsByPackageName Parms{};

	Parms.PackageName = PackageName;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.bSkipARFilteredAssets = bSkipARFilteredAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssetsByPath(class FName PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPath");

	Params::AssetRegistry_GetAssetsByPath Parms{};

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}

bool IAssetRegistry::GetAssetsByPaths(const TArray<class FName>& PackagePaths, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPaths");

	Params::AssetRegistry_GetAssetsByPaths Parms{};

	Parms.PackagePaths = std::move(PackagePaths);
	Parms.bRecursive = bRecursive;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetData != nullptr)
		*OutAssetData = std::move(Parms.OutAssetData);

	return Parms.ReturnValue;
}

void IAssetRegistry::GetDerivedClassNames(const TArray<struct FTopLevelAssetPath>& ClassNames, const TSet<struct FTopLevelAssetPath>& ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetDerivedClassNames");

	Params::AssetRegistry_GetDerivedClassNames Parms{};

	Parms.ClassNames = std::move(ClassNames);
	Parms.ExcludedClassNames = std::move(ExcludedClassNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDerivedClassNames != nullptr)
		*OutDerivedClassNames = std::move(Parms.OutDerivedClassNames);
}

void IAssetRegistry::GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "GetSubPaths");

	Params::AssetRegistry_GetSubPaths Parms{};

	Parms.InBasePath = std::move(InBasePath);
	Parms.bInRecurse = bInRecurse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPathList != nullptr)
		*OutPathList = std::move(Parms.OutPathList);
}

bool IAssetRegistry::HasAssets(const class FName PackagePath, const bool bRecursive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "HasAssets");

	Params::AssetRegistry_HasAssets Parms{};

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IAssetRegistry::IsLoadingAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "IsLoadingAssets");

	Params::AssetRegistry_IsLoadingAssets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IAssetRegistry::IsSearchAllAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAllAssets");

	Params::AssetRegistry_IsSearchAllAssets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IAssetRegistry::IsSearchAsync() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAsync");

	Params::AssetRegistry_IsSearchAsync Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAssetData IAssetRegistry::K2_GetAssetByObjectPath(const struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "K2_GetAssetByObjectPath");

	Params::AssetRegistry_K2_GetAssetByObjectPath Parms{};

	Parms.ObjectPath = std::move(ObjectPath);
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IAssetRegistry::K2_GetDependencies(class FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "K2_GetDependencies");

	Params::AssetRegistry_K2_GetDependencies Parms{};

	Parms.PackageName = PackageName;
	Parms.DependencyOptions = std::move(DependencyOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDependencies != nullptr)
		*OutDependencies = std::move(Parms.OutDependencies);

	return Parms.ReturnValue;
}

bool IAssetRegistry::K2_GetReferencers(class FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "K2_GetReferencers");

	Params::AssetRegistry_K2_GetReferencers Parms{};

	Parms.PackageName = PackageName;
	Parms.ReferenceOptions = std::move(ReferenceOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutReferencers != nullptr)
		*OutReferencers = std::move(Parms.OutReferencers);

	return Parms.ReturnValue;
}

void IAssetRegistry::RunAssetsThroughFilter(TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "RunAssetsThroughFilter");

	Params::AssetRegistry_RunAssetsThroughFilter Parms{};

	Parms.AssetDataList = std::move(AssetDataList);
	Parms.Filter = std::move(Filter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	AssetDataList = std::move(Parms.AssetDataList);
}

void IAssetRegistry::UseFilterToExcludeAssets(TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetRegistry", "UseFilterToExcludeAssets");

	Params::AssetRegistry_UseFilterToExcludeAssets Parms{};

	Parms.AssetDataList = std::move(AssetDataList);
	Parms.Filter = std::move(Filter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	AssetDataList = std::move(Parms.AssetDataList);
}

}
