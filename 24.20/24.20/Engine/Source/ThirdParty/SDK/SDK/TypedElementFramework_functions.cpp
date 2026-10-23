#pragma once

#include "Basic.hpp"

#include "TypedElementFramework_classes.hpp"
#include "TypedElementFramework_parameters.hpp"

namespace SDK
{

bool UTypedElementHandleLibrary::Equal(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementHandleLibrary", "Equal");

	Params::TypedElementHandleLibrary_Equal Parms{};

	Parms.LHS = std::move(LHS);
	Parms.RHS = std::move(RHS);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementHandleLibrary::IsSet(const struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementHandleLibrary", "IsSet");

	Params::TypedElementHandleLibrary_IsSet Parms{};

	Parms.ElementHandle = std::move(ElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementHandleLibrary::NotEqual(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementHandleLibrary", "NotEqual");

	Params::TypedElementHandleLibrary_NotEqual Parms{};

	Parms.LHS = std::move(LHS);
	Parms.RHS = std::move(RHS);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTypedElementHandleLibrary::Release(struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementHandleLibrary", "Release");

	Params::TypedElementHandleLibrary_Release Parms{};

	Parms.ElementHandle = std::move(ElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	ElementHandle = std::move(Parms.ElementHandle);
}

bool UTypedElementListLibrary::Add(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Add");

	Params::TypedElementListLibrary_Add Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementHandle = std::move(ElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTypedElementListLibrary::Append(const struct FScriptTypedElementListProxy& ElementList, const TArray<struct FScriptTypedElementHandle>& ElementHandles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Append");

	Params::TypedElementListLibrary_Append Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementHandles = std::move(ElementHandles);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTypedElementListLibrary::AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "AppendList");

	Params::TypedElementListLibrary_AppendList Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.OtherElementList = std::move(OtherElementList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FScriptTypedElementListProxy UTypedElementListLibrary::Clone(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Clone");

	Params::TypedElementListLibrary_Clone Parms{};

	Parms.ElementList = std::move(ElementList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementListLibrary::Contains(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Contains");

	Params::TypedElementListLibrary_Contains Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementHandle = std::move(ElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTypedElementListLibrary::CountElements(const struct FScriptTypedElementListProxy& ElementList, const TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "CountElements");

	Params::TypedElementListLibrary_CountElements Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTypedElementListLibrary::CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const class FName ElementTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "CountElementsOfType");

	Params::TypedElementListLibrary_CountElementsOfType Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementTypeName = ElementTypeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FScriptTypedElementListProxy UTypedElementListLibrary::CreateScriptElementList(class UTypedElementRegistry* Registry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "CreateScriptElementList");

	Params::TypedElementListLibrary_CreateScriptElementList Parms{};

	Parms.Registry = Registry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTypedElementListLibrary::Empty(const struct FScriptTypedElementListProxy& ElementList, const int32 Slack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Empty");

	Params::TypedElementListLibrary_Empty Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.Slack = Slack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FScriptTypedElementHandle UTypedElementListLibrary::GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, const int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "GetElementHandleAt");

	Params::TypedElementListLibrary_GetElementHandleAt Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FScriptTypedElementHandle> UTypedElementListLibrary::GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, const TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "GetElementHandles");

	Params::TypedElementListLibrary_GetElementHandles Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UTypedElementListLibrary::GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, const TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "GetElementInterface");

	Params::TypedElementListLibrary_GetElementInterface Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementHandle = std::move(ElementHandle);
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementListLibrary::HasElements(const struct FScriptTypedElementListProxy& ElementList, const TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "HasElements");

	Params::TypedElementListLibrary_HasElements Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementListLibrary::HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const class FName ElementTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "HasElementsOfType");

	Params::TypedElementListLibrary_HasElementsOfType Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementTypeName = ElementTypeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementListLibrary::IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, const int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "IsValidIndex");

	Params::TypedElementListLibrary_IsValidIndex Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTypedElementListLibrary::Num(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Num");

	Params::TypedElementListLibrary_Num Parms{};

	Parms.ElementList = std::move(ElementList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTypedElementListLibrary::Remove(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Remove");

	Params::TypedElementListLibrary_Remove Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.ElementHandle = std::move(ElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTypedElementListLibrary::Reserve(const struct FScriptTypedElementListProxy& ElementList, const int32 Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Reserve");

	Params::TypedElementListLibrary_Reserve Parms{};

	Parms.ElementList = std::move(ElementList);
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTypedElementListLibrary::Reset(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Reset");

	Params::TypedElementListLibrary_Reset Parms{};

	Parms.ElementList = std::move(ElementList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTypedElementListLibrary::Shrink(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementListLibrary", "Shrink");

	Params::TypedElementListLibrary_Shrink Parms{};

	Parms.ElementList = std::move(ElementList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UTypedElementRegistry* UTypedElementRegistry::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TypedElementRegistry", "GetInstance");

	Params::TypedElementRegistry_GetInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UTypedElementRegistry::GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, const TSubclassOf<class IInterface> InBaseInterfaceType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TypedElementRegistry", "GetElementInterface");

	Params::TypedElementRegistry_GetElementInterface Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText ITestTypedElementInterfaceA::GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "GetDisplayName");

	Params::TestTypedElementInterfaceA_GetDisplayName Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITestTypedElementInterfaceA::SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, const class FText& InNewName, bool bNotify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "SetDisplayName");

	Params::TestTypedElementInterfaceA_SetDisplayName Parms{};

	Parms.InElementHandle = std::move(InElementHandle);
	Parms.InNewName = std::move(InNewName);
	Parms.bNotify = bNotify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITestTypedElementInterfaceB::MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TestTypedElementInterfaceB", "MarkAsTested");

	Params::TestTypedElementInterfaceB_MarkAsTested Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ITestTypedElementInterfaceC::GetIsTested(const struct FScriptTypedElementHandle& InElementHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TestTypedElementInterfaceC", "GetIsTested");

	Params::TestTypedElementInterfaceC_GetIsTested Parms{};

	Parms.InElementHandle = std::move(InElementHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
