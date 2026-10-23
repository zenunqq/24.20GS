#pragma once

#include "Basic.hpp"

#include "Constraints_classes.hpp"
#include "Constraints_parameters.hpp"

namespace SDK
{

bool UConstraintsScriptingLibrary::AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, const bool bMaintainOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConstraintsScriptingLibrary", "AddConstraint");

	Params::ConstraintsScriptingLibrary_AddConstraint Parms{};

	Parms.InWorld = InWorld;
	Parms.InParentHandle = InParentHandle;
	Parms.InChildHandle = InChildHandle;
	Parms.InConstraint = InConstraint;
	Parms.bMaintainOffset = bMaintainOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTickableTransformConstraint* UConstraintsScriptingLibrary::CreateFromType(class UWorld* InWorld, const ETransformConstraintType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConstraintsScriptingLibrary", "CreateFromType");

	Params::ConstraintsScriptingLibrary_CreateFromType Parms{};

	Parms.InWorld = InWorld;
	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTransformableComponentHandle* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const class FName& InSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConstraintsScriptingLibrary", "CreateTransformableComponentHandle");

	Params::ConstraintsScriptingLibrary_CreateTransformableComponentHandle Parms{};

	Parms.InWorld = InWorld;
	Parms.InSceneComponent = InSceneComponent;
	Parms.InSocketName = InSocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConstraintsManager* UConstraintsScriptingLibrary::GetManager(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConstraintsScriptingLibrary", "GetManager");

	Params::ConstraintsScriptingLibrary_GetManager Parms{};

	Parms.InWorld = InWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UConstraintsScriptingLibrary::RemoveConstraint(class UWorld* InWorld, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConstraintsScriptingLibrary", "RemoveConstraint");

	Params::ConstraintsScriptingLibrary_RemoveConstraint Parms{};

	Parms.InWorld = InWorld;
	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
