#pragma once

#include "Basic.hpp"

#include "ModelViewViewModel_classes.hpp"
#include "ModelViewViewModel_parameters.hpp"

namespace SDK
{

TScriptInterface<class INotifyFieldValueChanged> UMVVMViewModelContextResolver::K2_CreateInstance(const class UClass* ExpectedType, const class UUserWidget* UserWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelContextResolver", "K2_CreateInstance");

	Params::MVVMViewModelContextResolver_K2_CreateInstance Parms{};

	Parms.ExpectedType = ExpectedType;
	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UMVVMViewModelCollectionObject* UMVVMGameSubsystem::GetViewModelCollection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMGameSubsystem", "GetViewModelCollection");

	Params::MVVMGameSubsystem_GetViewModelCollection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMVVMSubsystem::DoesWidgetTreeContainedWidget(const class UWidgetTree* WidgetTree, const class UWidget* ViewWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "DoesWidgetTreeContainedWidget");

	Params::MVVMSubsystem_DoesWidgetTreeContainedWidget Parms{};

	Parms.WidgetTree = WidgetTree;
	Parms.ViewWidget = ViewWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "GetGlobalViewModelCollection");

	Params::MVVMSubsystem_GetGlobalViewModelCollection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMVVMAvailableBinding UMVVMSubsystem::K2_GetAvailableBinding(const class UClass* Class_0, const struct FMVVMBindingName& BindingName, const class UClass* Accessor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBinding");

	Params::MVVMSubsystem_K2_GetAvailableBinding Parms{};

	Parms.Class_0 = Class_0;
	Parms.BindingName = std::move(BindingName);
	Parms.Accessor = Accessor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMVVMAvailableBinding> UMVVMSubsystem::K2_GetAvailableBindings(const class UClass* Class_0, const class UClass* Accessor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBindings");

	Params::MVVMSubsystem_K2_GetAvailableBindings Parms{};

	Parms.Class_0 = Class_0;
	Parms.Accessor = Accessor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMVVMView* UMVVMSubsystem::K2_GetViewFromUserWidget(const class UUserWidget* UserWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetViewFromUserWidget");

	Params::MVVMSubsystem_K2_GetViewFromUserWidget Parms{};

	Parms.UserWidget = UserWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_AddFieldValueChangedDelegate");

	Params::MVVMViewModelBase_K2_AddFieldValueChangedDelegate Parms{};

	Parms.FieldId = std::move(FieldId);
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_BroadcastFieldValueChanged");

	Params::MVVMViewModelBase_K2_BroadcastFieldValueChanged Parms{};

	Parms.FieldId = std::move(FieldId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_RemoveFieldValueChangedDelegate");

	Params::MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate Parms{};

	Parms.FieldId = std::move(FieldId);
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMVVMViewModelBase::K2_SetPropertyValue(const int32& OldValue, const int32& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_SetPropertyValue");

	Params::MVVMViewModelBase_K2_SetPropertyValue Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMVVMViewModelCollectionObject::AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "AddViewModelInstance");

	Params::MVVMViewModelCollectionObject_AddViewModelInstance Parms{};

	Parms.Context = std::move(Context);
	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveAllViewModelInstance");

	Params::MVVMViewModelCollectionObject_RemoveAllViewModelInstance Parms{};

	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMVVMViewModelCollectionObject::RemoveViewModel(const struct FMVVMViewModelContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveViewModel");

	Params::MVVMViewModelCollectionObject_RemoveViewModel Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindFirstViewModelInstanceOfType(const TSubclassOf<class UMVVMViewModelBase>& ViewModelClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindFirstViewModelInstanceOfType");

	Params::MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType Parms{};

	Parms.ViewModelClass = ViewModelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(const struct FMVVMViewModelContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindViewModelInstance");

	Params::MVVMViewModelCollectionObject_FindViewModelInstance Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMVVMView::SetViewModel(class FName ViewModelName, TScriptInterface<class INotifyFieldValueChanged> ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "SetViewModel");

	Params::MVVMView_SetViewModel Parms{};

	Parms.ViewModelName = ViewModelName;
	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TScriptInterface<class INotifyFieldValueChanged> UMVVMView::GetViewModel(class FName ViewModelName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "GetViewModel");

	Params::MVVMView_GetViewModel Parms{};

	Parms.ViewModelName = ViewModelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
