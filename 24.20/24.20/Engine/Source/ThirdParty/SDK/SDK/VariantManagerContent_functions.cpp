#pragma once

#include "Basic.hpp"

#include "VariantManagerContent_classes.hpp"
#include "VariantManagerContent_parameters.hpp"

namespace SDK
{

int32 ULevelVariantSets::GetNumVariantSets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSets", "GetNumVariantSets");

	Params::LevelVariantSets_GetNumVariantSets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UVariantSet* ULevelVariantSets::GetVariantSet(int32 VariantSetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSet");

	Params::LevelVariantSets_GetVariantSet Parms{};

	Parms.VariantSetIndex = VariantSetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UVariantSet* ULevelVariantSets::GetVariantSetByName(const class FString& VariantSetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSetByName");

	Params::LevelVariantSets_GetVariantSetByName Parms{};

	Parms.VariantSetName = std::move(VariantSetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSetsActor", "GetLevelVariantSets");

	Params::LevelVariantSetsActor_GetLevelVariantSets Parms{};

	Parms.bLoad = bLoad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSetsActor", "SetLevelVariantSets");

	Params::LevelVariantSetsActor_SetLevelVariantSets Parms{};

	Parms.InVariantSets = InVariantSets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByIndex");

	Params::LevelVariantSetsActor_SwitchOnVariantByIndex Parms{};

	Parms.VariantSetIndex = VariantSetIndex;
	Parms.VariantIndex = VariantIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ALevelVariantSetsActor::SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByName");

	Params::LevelVariantSetsActor_SwitchOnVariantByName Parms{};

	Parms.VariantSetName = std::move(VariantSetName);
	Parms.VariantName = std::move(VariantName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UPropertyValue::GetFullDisplayString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyValue", "GetFullDisplayString");

	Params::PropertyValue_GetFullDisplayString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UPropertyValue::GetPropertyTooltip() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyValue", "GetPropertyTooltip");

	Params::PropertyValue_GetPropertyTooltip Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPropertyValue::HasRecordedData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyValue", "HasRecordedData");

	Params::PropertyValue_HasRecordedData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ASwitchActor::SelectOption(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchActor", "SelectOption");

	Params::SwitchActor_SelectOption Parms{};

	Parms.OptionIndex = OptionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class AActor*> ASwitchActor::GetOptions() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchActor", "GetOptions");

	Params::SwitchActor_GetOptions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 ASwitchActor::GetSelectedOption() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchActor", "GetSelectedOption");

	Params::SwitchActor_GetSelectedOption Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UVariant::AddDependency(struct FVariantDependency* Dependency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "AddDependency");

	Params::Variant_AddDependency Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Dependency != nullptr)
		*Dependency = std::move(Parms.Dependency);

	return Parms.ReturnValue;
}

void UVariant::DeleteDependency(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "DeleteDependency");

	Params::Variant_DeleteDependency Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* UVariant::GetActor(int32 ActorIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetActor");

	Params::Variant_GetActor Parms{};

	Parms.ActorIndex = ActorIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVariantDependency UVariant::GetDependency(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetDependency");

	Params::Variant_GetDependency Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UVariant*> UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetDependents");

	Params::Variant_GetDependents Parms{};

	Parms.LevelVariantSets = LevelVariantSets;
	Parms.bOnlyEnabledDependencies = bOnlyEnabledDependencies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UVariant::GetNumActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetNumActors");

	Params::Variant_GetNumActors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UVariant::GetNumDependencies()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetNumDependencies");

	Params::Variant_GetNumDependencies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UVariantSet* UVariant::GetParent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetParent");

	Params::Variant_GetParent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTexture2D* UVariant::GetThumbnail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetThumbnail");

	Params::Variant_GetThumbnail Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UVariant::IsActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "IsActive");

	Params::Variant_IsActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVariant::SetDependency(int32 Index_0, struct FVariantDependency* Dependency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SetDependency");

	Params::Variant_SetDependency Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Dependency != nullptr)
		*Dependency = std::move(Parms.Dependency);
}

void UVariant::SetDisplayText(const class FText& NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SetDisplayText");

	Params::Variant_SetDisplayText Parms{};

	Parms.NewDisplayText = std::move(NewDisplayText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SetThumbnailFromCamera");

	Params::Variant_SetThumbnailFromCamera Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraTransform = std::move(CameraTransform);
	Parms.FOVDegrees = FOVDegrees;
	Parms.MinZ = MinZ;
	Parms.Gamma = Gamma;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariant::SetThumbnailFromEditorViewport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SetThumbnailFromEditorViewport");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVariant::SetThumbnailFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SetThumbnailFromFile");

	Params::Variant_SetThumbnailFromFile Parms{};

	Parms.FilePath = std::move(FilePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SetThumbnailFromTexture");

	Params::Variant_SetThumbnailFromTexture Parms{};

	Parms.NewThumbnail = NewThumbnail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariant::SwitchOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "SwitchOn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class FText UVariant::GetDisplayText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Variant", "GetDisplayText");

	Params::Variant_GetDisplayText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULevelVariantSets* UVariantSet::GetParent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "GetParent");

	Params::VariantSet_GetParent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTexture2D* UVariantSet::GetThumbnail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "GetThumbnail");

	Params::VariantSet_GetThumbnail Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UVariant* UVariantSet::GetVariant(int32 VariantIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "GetVariant");

	Params::VariantSet_GetVariant Parms{};

	Parms.VariantIndex = VariantIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UVariant* UVariantSet::GetVariantByName(const class FString& VariantName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "GetVariantByName");

	Params::VariantSet_GetVariantByName Parms{};

	Parms.VariantName = std::move(VariantName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVariantSet::SetDisplayText(const class FText& NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "SetDisplayText");

	Params::VariantSet_SetDisplayText Parms{};

	Parms.NewDisplayText = std::move(NewDisplayText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromCamera");

	Params::VariantSet_SetThumbnailFromCamera Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraTransform = std::move(CameraTransform);
	Parms.FOVDegrees = FOVDegrees;
	Parms.MinZ = MinZ;
	Parms.Gamma = Gamma;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariantSet::SetThumbnailFromEditorViewport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromEditorViewport");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVariantSet::SetThumbnailFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromFile");

	Params::VariantSet_SetThumbnailFromFile Parms{};

	Parms.FilePath = std::move(FilePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromTexture");

	Params::VariantSet_SetThumbnailFromTexture Parms{};

	Parms.NewThumbnail = NewThumbnail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UVariantSet::GetDisplayText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "GetDisplayText");

	Params::VariantSet_GetDisplayText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UVariantSet::GetNumVariants() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantSet", "GetNumVariants");

	Params::VariantSet_GetNumVariants Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
