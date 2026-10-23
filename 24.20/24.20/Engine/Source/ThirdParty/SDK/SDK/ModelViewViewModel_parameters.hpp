#pragma once

#include "Basic.hpp"

#include "ModelViewViewModel_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct MVVMViewModelContextResolver_K2_CreateInstance final
{
public:
	const class UClass*                           ExpectedType;
	const class UUserWidget*                      UserWidget;
	TScriptInterface<class INotifyFieldValueChanged> ReturnValue;
};
static_assert(alignof(MVVMViewModelContextResolver_K2_CreateInstance) == 0x000008, "Wrong alignment on MVVMViewModelContextResolver_K2_CreateInstance");
static_assert(sizeof(MVVMViewModelContextResolver_K2_CreateInstance) == 0x000020, "Wrong size on MVVMViewModelContextResolver_K2_CreateInstance");
static_assert(offsetof(MVVMViewModelContextResolver_K2_CreateInstance, ExpectedType) == 0x000000, "Member 'MVVMViewModelContextResolver_K2_CreateInstance::ExpectedType' has a wrong offset!");
static_assert(offsetof(MVVMViewModelContextResolver_K2_CreateInstance, UserWidget) == 0x000008, "Member 'MVVMViewModelContextResolver_K2_CreateInstance::UserWidget' has a wrong offset!");
static_assert(offsetof(MVVMViewModelContextResolver_K2_CreateInstance, ReturnValue) == 0x000010, "Member 'MVVMViewModelContextResolver_K2_CreateInstance::ReturnValue' has a wrong offset!");

struct MVVMGameSubsystem_GetViewModelCollection final
{
public:
	class UMVVMViewModelCollectionObject*         ReturnValue;
};
static_assert(alignof(MVVMGameSubsystem_GetViewModelCollection) == 0x000008, "Wrong alignment on MVVMGameSubsystem_GetViewModelCollection");
static_assert(sizeof(MVVMGameSubsystem_GetViewModelCollection) == 0x000008, "Wrong size on MVVMGameSubsystem_GetViewModelCollection");
static_assert(offsetof(MVVMGameSubsystem_GetViewModelCollection, ReturnValue) == 0x000000, "Member 'MVVMGameSubsystem_GetViewModelCollection::ReturnValue' has a wrong offset!");

struct MVVMSubsystem_DoesWidgetTreeContainedWidget final
{
public:
	const class UWidgetTree*                      WidgetTree;
	const class UWidget*                          ViewWidget;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MVVMSubsystem_DoesWidgetTreeContainedWidget) == 0x000008, "Wrong alignment on MVVMSubsystem_DoesWidgetTreeContainedWidget");
static_assert(sizeof(MVVMSubsystem_DoesWidgetTreeContainedWidget) == 0x000018, "Wrong size on MVVMSubsystem_DoesWidgetTreeContainedWidget");
static_assert(offsetof(MVVMSubsystem_DoesWidgetTreeContainedWidget, WidgetTree) == 0x000000, "Member 'MVVMSubsystem_DoesWidgetTreeContainedWidget::WidgetTree' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_DoesWidgetTreeContainedWidget, ViewWidget) == 0x000008, "Member 'MVVMSubsystem_DoesWidgetTreeContainedWidget::ViewWidget' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_DoesWidgetTreeContainedWidget, ReturnValue) == 0x000010, "Member 'MVVMSubsystem_DoesWidgetTreeContainedWidget::ReturnValue' has a wrong offset!");

struct MVVMSubsystem_GetGlobalViewModelCollection final
{
public:
	class UMVVMViewModelCollectionObject*         ReturnValue;
};
static_assert(alignof(MVVMSubsystem_GetGlobalViewModelCollection) == 0x000008, "Wrong alignment on MVVMSubsystem_GetGlobalViewModelCollection");
static_assert(sizeof(MVVMSubsystem_GetGlobalViewModelCollection) == 0x000008, "Wrong size on MVVMSubsystem_GetGlobalViewModelCollection");
static_assert(offsetof(MVVMSubsystem_GetGlobalViewModelCollection, ReturnValue) == 0x000000, "Member 'MVVMSubsystem_GetGlobalViewModelCollection::ReturnValue' has a wrong offset!");

struct MVVMSubsystem_K2_GetAvailableBinding final
{
public:
	const class UClass*                           Class_0;
	struct FMVVMBindingName                       BindingName;
	uint8                                         Pad_C[0x4];
	const class UClass*                           Accessor;
	struct FMVVMAvailableBinding                  ReturnValue;
};
static_assert(alignof(MVVMSubsystem_K2_GetAvailableBinding) == 0x000008, "Wrong alignment on MVVMSubsystem_K2_GetAvailableBinding");
static_assert(sizeof(MVVMSubsystem_K2_GetAvailableBinding) == 0x000020, "Wrong size on MVVMSubsystem_K2_GetAvailableBinding");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBinding, Class_0) == 0x000000, "Member 'MVVMSubsystem_K2_GetAvailableBinding::Class_0' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBinding, BindingName) == 0x000008, "Member 'MVVMSubsystem_K2_GetAvailableBinding::BindingName' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBinding, Accessor) == 0x000010, "Member 'MVVMSubsystem_K2_GetAvailableBinding::Accessor' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBinding, ReturnValue) == 0x000018, "Member 'MVVMSubsystem_K2_GetAvailableBinding::ReturnValue' has a wrong offset!");

struct MVVMSubsystem_K2_GetAvailableBindings final
{
public:
	const class UClass*                           Class_0;
	const class UClass*                           Accessor;
	TArray<struct FMVVMAvailableBinding>          ReturnValue;
};
static_assert(alignof(MVVMSubsystem_K2_GetAvailableBindings) == 0x000008, "Wrong alignment on MVVMSubsystem_K2_GetAvailableBindings");
static_assert(sizeof(MVVMSubsystem_K2_GetAvailableBindings) == 0x000020, "Wrong size on MVVMSubsystem_K2_GetAvailableBindings");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBindings, Class_0) == 0x000000, "Member 'MVVMSubsystem_K2_GetAvailableBindings::Class_0' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBindings, Accessor) == 0x000008, "Member 'MVVMSubsystem_K2_GetAvailableBindings::Accessor' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_K2_GetAvailableBindings, ReturnValue) == 0x000010, "Member 'MVVMSubsystem_K2_GetAvailableBindings::ReturnValue' has a wrong offset!");

struct MVVMSubsystem_K2_GetViewFromUserWidget final
{
public:
	const class UUserWidget*                      UserWidget;
	class UMVVMView*                              ReturnValue;
};
static_assert(alignof(MVVMSubsystem_K2_GetViewFromUserWidget) == 0x000008, "Wrong alignment on MVVMSubsystem_K2_GetViewFromUserWidget");
static_assert(sizeof(MVVMSubsystem_K2_GetViewFromUserWidget) == 0x000010, "Wrong size on MVVMSubsystem_K2_GetViewFromUserWidget");
static_assert(offsetof(MVVMSubsystem_K2_GetViewFromUserWidget, UserWidget) == 0x000000, "Member 'MVVMSubsystem_K2_GetViewFromUserWidget::UserWidget' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_K2_GetViewFromUserWidget, ReturnValue) == 0x000008, "Member 'MVVMSubsystem_K2_GetViewFromUserWidget::ReturnValue' has a wrong offset!");

struct MVVMViewModelBase_K2_AddFieldValueChangedDelegate final
{
public:
	struct FFieldNotificationId                   FieldId;
	TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate;
};
static_assert(alignof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_AddFieldValueChangedDelegate");
static_assert(sizeof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate) == 0x000010, "Wrong size on MVVMViewModelBase_K2_AddFieldValueChangedDelegate");
static_assert(offsetof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate, FieldId) == 0x000000, "Member 'MVVMViewModelBase_K2_AddFieldValueChangedDelegate::FieldId' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate, Delegate) == 0x000004, "Member 'MVVMViewModelBase_K2_AddFieldValueChangedDelegate::Delegate' has a wrong offset!");

struct MVVMViewModelBase_K2_BroadcastFieldValueChanged final
{
public:
	struct FFieldNotificationId                   FieldId;
};
static_assert(alignof(MVVMViewModelBase_K2_BroadcastFieldValueChanged) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_BroadcastFieldValueChanged");
static_assert(sizeof(MVVMViewModelBase_K2_BroadcastFieldValueChanged) == 0x000004, "Wrong size on MVVMViewModelBase_K2_BroadcastFieldValueChanged");
static_assert(offsetof(MVVMViewModelBase_K2_BroadcastFieldValueChanged, FieldId) == 0x000000, "Member 'MVVMViewModelBase_K2_BroadcastFieldValueChanged::FieldId' has a wrong offset!");

struct MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate final
{
public:
	struct FFieldNotificationId                   FieldId;
	TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate;
};
static_assert(alignof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate");
static_assert(sizeof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate) == 0x000010, "Wrong size on MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate");
static_assert(offsetof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate, FieldId) == 0x000000, "Member 'MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate::FieldId' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate, Delegate) == 0x000004, "Member 'MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate::Delegate' has a wrong offset!");

struct MVVMViewModelBase_K2_SetPropertyValue final
{
public:
	int32                                         OldValue;
	int32                                         NewValue;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(MVVMViewModelBase_K2_SetPropertyValue) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_SetPropertyValue");
static_assert(sizeof(MVVMViewModelBase_K2_SetPropertyValue) == 0x00000C, "Wrong size on MVVMViewModelBase_K2_SetPropertyValue");
static_assert(offsetof(MVVMViewModelBase_K2_SetPropertyValue, OldValue) == 0x000000, "Member 'MVVMViewModelBase_K2_SetPropertyValue::OldValue' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_SetPropertyValue, NewValue) == 0x000004, "Member 'MVVMViewModelBase_K2_SetPropertyValue::NewValue' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_SetPropertyValue, ReturnValue) == 0x000008, "Member 'MVVMViewModelBase_K2_SetPropertyValue::ReturnValue' has a wrong offset!");

struct MVVMViewModelCollectionObject_AddViewModelInstance final
{
public:
	struct FMVVMViewModelContext                  Context;
	class UMVVMViewModelBase*                     ViewModel;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(MVVMViewModelCollectionObject_AddViewModelInstance) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_AddViewModelInstance");
static_assert(sizeof(MVVMViewModelCollectionObject_AddViewModelInstance) == 0x000020, "Wrong size on MVVMViewModelCollectionObject_AddViewModelInstance");
static_assert(offsetof(MVVMViewModelCollectionObject_AddViewModelInstance, Context) == 0x000000, "Member 'MVVMViewModelCollectionObject_AddViewModelInstance::Context' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_AddViewModelInstance, ViewModel) == 0x000010, "Member 'MVVMViewModelCollectionObject_AddViewModelInstance::ViewModel' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_AddViewModelInstance, ReturnValue) == 0x000018, "Member 'MVVMViewModelCollectionObject_AddViewModelInstance::ReturnValue' has a wrong offset!");

struct MVVMViewModelCollectionObject_RemoveAllViewModelInstance final
{
public:
	class UMVVMViewModelBase*                     ViewModel;
	int32                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_RemoveAllViewModelInstance");
static_assert(sizeof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance) == 0x000010, "Wrong size on MVVMViewModelCollectionObject_RemoveAllViewModelInstance");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance, ViewModel) == 0x000000, "Member 'MVVMViewModelCollectionObject_RemoveAllViewModelInstance::ViewModel' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance, ReturnValue) == 0x000008, "Member 'MVVMViewModelCollectionObject_RemoveAllViewModelInstance::ReturnValue' has a wrong offset!");

struct MVVMViewModelCollectionObject_RemoveViewModel final
{
public:
	struct FMVVMViewModelContext                  Context;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MVVMViewModelCollectionObject_RemoveViewModel) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_RemoveViewModel");
static_assert(sizeof(MVVMViewModelCollectionObject_RemoveViewModel) == 0x000018, "Wrong size on MVVMViewModelCollectionObject_RemoveViewModel");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveViewModel, Context) == 0x000000, "Member 'MVVMViewModelCollectionObject_RemoveViewModel::Context' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveViewModel, ReturnValue) == 0x000010, "Member 'MVVMViewModelCollectionObject_RemoveViewModel::ReturnValue' has a wrong offset!");

struct MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType final
{
public:
	TSubclassOf<class UMVVMViewModelBase>         ViewModelClass;
	class UMVVMViewModelBase*                     ReturnValue;
};
static_assert(alignof(MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType");
static_assert(sizeof(MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType) == 0x000010, "Wrong size on MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType");
static_assert(offsetof(MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType, ViewModelClass) == 0x000000, "Member 'MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType::ViewModelClass' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType, ReturnValue) == 0x000008, "Member 'MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType::ReturnValue' has a wrong offset!");

struct MVVMViewModelCollectionObject_FindViewModelInstance final
{
public:
	struct FMVVMViewModelContext                  Context;
	class UMVVMViewModelBase*                     ReturnValue;
};
static_assert(alignof(MVVMViewModelCollectionObject_FindViewModelInstance) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_FindViewModelInstance");
static_assert(sizeof(MVVMViewModelCollectionObject_FindViewModelInstance) == 0x000018, "Wrong size on MVVMViewModelCollectionObject_FindViewModelInstance");
static_assert(offsetof(MVVMViewModelCollectionObject_FindViewModelInstance, Context) == 0x000000, "Member 'MVVMViewModelCollectionObject_FindViewModelInstance::Context' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_FindViewModelInstance, ReturnValue) == 0x000010, "Member 'MVVMViewModelCollectionObject_FindViewModelInstance::ReturnValue' has a wrong offset!");

struct MVVMView_SetViewModel final
{
public:
	class FName                                   ViewModelName;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class INotifyFieldValueChanged> ViewModel;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(MVVMView_SetViewModel) == 0x000008, "Wrong alignment on MVVMView_SetViewModel");
static_assert(sizeof(MVVMView_SetViewModel) == 0x000020, "Wrong size on MVVMView_SetViewModel");
static_assert(offsetof(MVVMView_SetViewModel, ViewModelName) == 0x000000, "Member 'MVVMView_SetViewModel::ViewModelName' has a wrong offset!");
static_assert(offsetof(MVVMView_SetViewModel, ViewModel) == 0x000008, "Member 'MVVMView_SetViewModel::ViewModel' has a wrong offset!");
static_assert(offsetof(MVVMView_SetViewModel, ReturnValue) == 0x000018, "Member 'MVVMView_SetViewModel::ReturnValue' has a wrong offset!");

struct MVVMView_GetViewModel final
{
public:
	class FName                                   ViewModelName;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class INotifyFieldValueChanged> ReturnValue;
};
static_assert(alignof(MVVMView_GetViewModel) == 0x000008, "Wrong alignment on MVVMView_GetViewModel");
static_assert(sizeof(MVVMView_GetViewModel) == 0x000018, "Wrong size on MVVMView_GetViewModel");
static_assert(offsetof(MVVMView_GetViewModel, ViewModelName) == 0x000000, "Member 'MVVMView_GetViewModel::ViewModelName' has a wrong offset!");
static_assert(offsetof(MVVMView_GetViewModel, ReturnValue) == 0x000008, "Member 'MVVMView_GetViewModel::ReturnValue' has a wrong offset!");

}
