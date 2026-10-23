#pragma once

#include "Basic.hpp"

#include "TypedElementRuntime_classes.hpp"
#include "TypedElementRuntime_parameters.hpp"

namespace SDK
{

bool UTypedElementSelectionSetLibrary::DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementSelectionSetLibrary", "DeselectElementsFromList");

	Params::TypedElementSelectionSetLibrary_DeselectElementsFromList Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = std::move(ElementList);
	Parms.SelectionOptions = std::move(SelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedElementList");

	Params::TypedElementSelectionSetLibrary_GetNormalizedElementList Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = std::move(ElementList);
	Parms.NormalizationOptions = std::move(NormalizationOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedSelection");

	Params::TypedElementSelectionSetLibrary_GetNormalizedSelection Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.NormalizationOptions = std::move(NormalizationOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSetLibrary::SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementSelectionSetLibrary", "SelectElementsFromList");

	Params::TypedElementSelectionSetLibrary_SelectElementsFromList Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = std::move(ElementList);
	Parms.SelectionOptions = std::move(SelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSetLibrary::SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementSelectionSetLibrary", "SetSelectionFromList");

	Params::TypedElementSelectionSetLibrary_SetSelectionFromList Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = std::move(ElementList);
	Parms.SelectionOptions = std::move(SelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "ClearSelection");

	Params::TypedElementSelectionSet_ClearSelection Parms{};

	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElement");

	Params::TypedElementSelectionSet_DeselectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::DeselectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElements");

	Params::TypedElementSelectionSet_DeselectElements Parms{};

	Parms.InElementHandles = std::move(InElementHandles);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTypedElementSelectionSet::RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "RestoreSelectionState");

	Params::TypedElementSelectionSet_RestoreSelectionState Parms{};

	Parms.InSelectionState = std::move(InSelectionState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UTypedElementSelectionSet::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElement");

	Params::TypedElementSelectionSet_SelectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::SelectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElements");

	Params::TypedElementSelectionSet_SelectElements Parms{};

	Parms.InElementHandles = std::move(InElementHandles);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::SetSelection(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "SetSelection");

	Params::TypedElementSelectionSet_SetSelection Parms{};

	Parms.InElementHandles = std::move(InElementHandles);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "AllowSelectionModifiers");

	Params::TypedElementSelectionSet_AllowSelectionModifiers Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanDeselectElement");

	Params::TypedElementSelectionSet_CanDeselectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanSelectElement");

	Params::TypedElementSelectionSet_CanSelectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTypedElementSelectionSet::CountSelectedElements(const TSubclassOf<class IInterface> InBaseInterfaceType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedElements");

	Params::TypedElementSelectionSet_CountSelectedElements Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTypedElementSelectionSet::CountSelectedObjects(const class UClass* InRequiredClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedObjects");

	Params::TypedElementSelectionSet_CountSelectedObjects Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UTypedElementSelectionSet::GetBottomSelectedObject(const class UClass* InRequiredClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetBottomSelectedObject");

	Params::TypedElementSelectionSet_GetBottomSelectedObject Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetCurrentSelectionState");

	Params::TypedElementSelectionSet_GetCurrentSelectionState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTypedElementSelectionSet::GetNumSelectedElements() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetNumSelectedElements");

	Params::TypedElementSelectionSet_GetNumSelectedElements Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UObject*> UTypedElementSelectionSet::GetSelectedObjects(const class UClass* InRequiredClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectedObjects");

	Params::TypedElementSelectionSet_GetSelectedObjects Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const ETypedElementSelectionMethod InSelectionMethod) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectionElement");

	Params::TypedElementSelectionSet_GetSelectionElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionMethod = InSelectionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UTypedElementSelectionSet::GetTopSelectedObject(const class UClass* InRequiredClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetTopSelectedObject");

	Params::TypedElementSelectionSet_GetTopSelectedObject Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::HasSelectedElements(const TSubclassOf<class IInterface> InBaseInterfaceType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedElements");

	Params::TypedElementSelectionSet_HasSelectedElements Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::HasSelectedObjects(const class UClass* InRequiredClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedObjects");

	Params::TypedElementSelectionSet_HasSelectedObjects Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementSelectionSet::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "IsElementSelected");

	Params::TypedElementSelectionSet_IsElementSelected Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(const TSubclassOf<class IInterface> InBaseInterfaceType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionSet", "K2_GetSelectedElementHandles");

	Params::TypedElementSelectionSet_K2_GetSelectedElementHandles Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FAssetData> ITypedElementAssetDataInterface::GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAllReferencedAssetDatas");

	Params::TypedElementAssetDataInterface_GetAllReferencedAssetDatas Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAssetData ITypedElementAssetDataInterface::GetAssetData(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAssetData");

	Params::TypedElementAssetDataInterface_GetAssetData Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ITypedElementHierarchyInterface::GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, const bool bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetChildElements");

	Params::TypedElementHierarchyInterface_GetChildElements Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.bAllowCreate = bAllowCreate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutElementHandles != nullptr)
		*OutElementHandles = std::move(Parms.OutElementHandles);
}

struct FScriptTypedElementHandle ITypedElementHierarchyInterface::GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, const bool bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetParentElement");

	Params::TypedElementHierarchyInterface_GetParentElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.bAllowCreate = bAllowCreate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* ITypedElementObjectInterface::GetObject(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObject");

	Params::TypedElementObjectInterface_GetObject Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UClass* ITypedElementObjectInterface::GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObjectClass");

	Params::TypedElementObjectInterface_GetObjectClass Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITypedElementSelectionInterface::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "AllowSelectionModifiers");

	Params::TypedElementSelectionInterface_AllowSelectionModifiers Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionSet = std::move(InSelectionSet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITypedElementSelectionInterface::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanDeselectElement");

	Params::TypedElementSelectionInterface_CanDeselectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITypedElementSelectionInterface::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanSelectElement");

	Params::TypedElementSelectionInterface_CanSelectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITypedElementSelectionInterface::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "DeselectElement");

	Params::TypedElementSelectionInterface_DeselectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionSet = std::move(InSelectionSet);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FScriptTypedElementHandle ITypedElementSelectionInterface::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, const ETypedElementSelectionMethod InSelectionMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "GetSelectionElement");

	Params::TypedElementSelectionInterface_GetSelectionElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InCurrentSelection = std::move(InCurrentSelection);
	Parms.InSelectionMethod = InSelectionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITypedElementSelectionInterface::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "IsElementSelected");

	Params::TypedElementSelectionInterface_IsElementSelected Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionSet = std::move(InSelectionSet);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITypedElementSelectionInterface::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementSelectionInterface", "SelectElement");

	Params::TypedElementSelectionInterface_SelectElement Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InSelectionSet = std::move(InSelectionSet);
	Parms.InSelectionOptions = std::move(InSelectionOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
