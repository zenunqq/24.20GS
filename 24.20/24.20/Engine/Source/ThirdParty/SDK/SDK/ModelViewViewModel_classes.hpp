#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "ModelViewViewModel_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UMVVMViewModelContextResolver final : public UObject
{
public:
	TScriptInterface<class INotifyFieldValueChanged> K2_CreateInstance(const class UClass* ExpectedType, const class UUserWidget* UserWidget) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelContextResolver">();
	}
	static class UMVVMViewModelContextResolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelContextResolver>();
	}
};
static_assert(alignof(UMVVMViewModelContextResolver) == 0x000008, "Wrong alignment on UMVVMViewModelContextResolver");
static_assert(sizeof(UMVVMViewModelContextResolver) == 0x000028, "Wrong size on UMVVMViewModelContextResolver");

class UMVVMGameSubsystem final : public UGameInstanceSubsystem
{
public:
	class UMVVMViewModelCollectionObject*         ViewModelCollection;

public:
	class UMVVMViewModelCollectionObject* GetViewModelCollection() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMGameSubsystem">();
	}
	static class UMVVMGameSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMGameSubsystem>();
	}
};
static_assert(alignof(UMVVMGameSubsystem) == 0x000008, "Wrong alignment on UMVVMGameSubsystem");
static_assert(sizeof(UMVVMGameSubsystem) == 0x000038, "Wrong size on UMVVMGameSubsystem");
static_assert(offsetof(UMVVMGameSubsystem, ViewModelCollection) == 0x000030, "Member 'UMVVMGameSubsystem::ViewModelCollection' has a wrong offset!");

class UMVVMSubsystem final : public UEngineSubsystem
{
public:
	bool DoesWidgetTreeContainedWidget(const class UWidgetTree* WidgetTree, const class UWidget* ViewWidget) const;
	class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection() const;
	struct FMVVMAvailableBinding K2_GetAvailableBinding(const class UClass* Class_0, const struct FMVVMBindingName& BindingName, const class UClass* Accessor) const;
	TArray<struct FMVVMAvailableBinding> K2_GetAvailableBindings(const class UClass* Class_0, const class UClass* Accessor) const;
	class UMVVMView* K2_GetViewFromUserWidget(const class UUserWidget* UserWidget) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMSubsystem">();
	}
	static class UMVVMSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMSubsystem>();
	}
};
static_assert(alignof(UMVVMSubsystem) == 0x000008, "Wrong alignment on UMVVMSubsystem");
static_assert(sizeof(UMVVMSubsystem) == 0x000030, "Wrong size on UMVVMSubsystem");

class UMVVMViewModelBase : public UObject
{
public:
	uint8                                         Pad_28[0x40];

public:
	void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
	void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate);
	bool K2_SetPropertyValue(const int32& OldValue, const int32& NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelBase">();
	}
	static class UMVVMViewModelBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelBase>();
	}
};
static_assert(alignof(UMVVMViewModelBase) == 0x000008, "Wrong alignment on UMVVMViewModelBase");
static_assert(sizeof(UMVVMViewModelBase) == 0x000068, "Wrong size on UMVVMViewModelBase");

class UMVVMViewModelCollectionObject final : public UObject
{
public:
	struct FMVVMViewModelCollection               ViewModelCollection;

public:
	bool AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel);
	int32 RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);
	bool RemoveViewModel(const struct FMVVMViewModelContext& Context);

	class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(const TSubclassOf<class UMVVMViewModelBase>& ViewModelClass) const;
	class UMVVMViewModelBase* FindViewModelInstance(const struct FMVVMViewModelContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelCollectionObject">();
	}
	static class UMVVMViewModelCollectionObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelCollectionObject>();
	}
};
static_assert(alignof(UMVVMViewModelCollectionObject) == 0x000008, "Wrong alignment on UMVVMViewModelCollectionObject");
static_assert(sizeof(UMVVMViewModelCollectionObject) == 0x000050, "Wrong size on UMVVMViewModelCollectionObject");
static_assert(offsetof(UMVVMViewModelCollectionObject, ViewModelCollection) == 0x000028, "Member 'UMVVMViewModelCollectionObject::ViewModelCollection' has a wrong offset!");

class UMVVMViewModelBlueprintGeneratedClass final : public UBlueprintGeneratedClass
{
public:
	TArray<struct FFieldNotificationId>           FieldNotifyNames;
	uint8                                         Pad_360[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelBlueprintGeneratedClass">();
	}
	static class UMVVMViewModelBlueprintGeneratedClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelBlueprintGeneratedClass>();
	}
};
static_assert(alignof(UMVVMViewModelBlueprintGeneratedClass) == 0x000010, "Wrong alignment on UMVVMViewModelBlueprintGeneratedClass");
static_assert(sizeof(UMVVMViewModelBlueprintGeneratedClass) == 0x000370, "Wrong size on UMVVMViewModelBlueprintGeneratedClass");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, FieldNotifyNames) == 0x000350, "Member 'UMVVMViewModelBlueprintGeneratedClass::FieldNotifyNames' has a wrong offset!");

class UMVVMBindingSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMBindingSubsystem">();
	}
	static class UMVVMBindingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMBindingSubsystem>();
	}
};
static_assert(alignof(UMVVMBindingSubsystem) == 0x000008, "Wrong alignment on UMVVMBindingSubsystem");
static_assert(sizeof(UMVVMBindingSubsystem) == 0x000090, "Wrong size on UMVVMBindingSubsystem");

class UMVVMView final : public UUserWidgetExtension
{
public:
	class UMVVMViewClass*                         ClassExtension;
	TArray<struct FMVVMViewSource>                Sources;
	uint8                                         Pad_40[0x20];
	bool                                          bLogBinding;
	bool                                          bConstructed;
	bool                                          bHasEveryTickBinding;
	uint8                                         Pad_63[0x5];

public:
	bool SetViewModel(class FName ViewModelName, TScriptInterface<class INotifyFieldValueChanged> ViewModel);

	TScriptInterface<class INotifyFieldValueChanged> GetViewModel(class FName ViewModelName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMView">();
	}
	static class UMVVMView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMView>();
	}
};
static_assert(alignof(UMVVMView) == 0x000008, "Wrong alignment on UMVVMView");
static_assert(sizeof(UMVVMView) == 0x000068, "Wrong size on UMVVMView");
static_assert(offsetof(UMVVMView, ClassExtension) == 0x000028, "Member 'UMVVMView::ClassExtension' has a wrong offset!");
static_assert(offsetof(UMVVMView, Sources) == 0x000030, "Member 'UMVVMView::Sources' has a wrong offset!");
static_assert(offsetof(UMVVMView, bLogBinding) == 0x000060, "Member 'UMVVMView::bLogBinding' has a wrong offset!");
static_assert(offsetof(UMVVMView, bConstructed) == 0x000061, "Member 'UMVVMView::bConstructed' has a wrong offset!");
static_assert(offsetof(UMVVMView, bHasEveryTickBinding) == 0x000062, "Member 'UMVVMView::bHasEveryTickBinding' has a wrong offset!");

class UMVVMViewClass final : public UWidgetBlueprintGeneratedClassExtension
{
public:
	TArray<struct FMVVMViewClass_SourceCreator>   SourceCreators;
	TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings;
	struct FMVVMCompiledBindingLibrary            BindingLibrary;
	uint8                                         Pad_A8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewClass">();
	}
	static class UMVVMViewClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewClass>();
	}
};
static_assert(alignof(UMVVMViewClass) == 0x000008, "Wrong alignment on UMVVMViewClass");
static_assert(sizeof(UMVVMViewClass) == 0x0000B0, "Wrong size on UMVVMViewClass");
static_assert(offsetof(UMVVMViewClass, SourceCreators) == 0x000028, "Member 'UMVVMViewClass::SourceCreators' has a wrong offset!");
static_assert(offsetof(UMVVMViewClass, CompiledBindings) == 0x000038, "Member 'UMVVMViewClass::CompiledBindings' has a wrong offset!");
static_assert(offsetof(UMVVMViewClass, BindingLibrary) == 0x000048, "Member 'UMVVMViewClass::BindingLibrary' has a wrong offset!");

}
