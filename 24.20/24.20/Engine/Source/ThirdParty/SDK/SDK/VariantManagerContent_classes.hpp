#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VariantManagerContent_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ULevelVariantSets final : public UObject
{
public:
	TSubclassOf<class UObject>                    DirectorClass;
	TArray<class UVariantSet*>                    VariantSets;
	uint8                                         Pad_40[0x50];

public:
	int32 GetNumVariantSets();
	class UVariantSet* GetVariantSet(int32 VariantSetIndex);
	class UVariantSet* GetVariantSetByName(const class FString& VariantSetName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelVariantSets">();
	}
	static class ULevelVariantSets* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelVariantSets>();
	}
};
static_assert(alignof(ULevelVariantSets) == 0x000008, "Wrong alignment on ULevelVariantSets");
static_assert(sizeof(ULevelVariantSets) == 0x000090, "Wrong size on ULevelVariantSets");
static_assert(offsetof(ULevelVariantSets, DirectorClass) == 0x000028, "Member 'ULevelVariantSets::DirectorClass' has a wrong offset!");
static_assert(offsetof(ULevelVariantSets, VariantSets) == 0x000030, "Member 'ULevelVariantSets::VariantSets' has a wrong offset!");

class ALevelVariantSetsActor final : public AActor
{
public:
	struct FSoftObjectPath                        LevelVariantSets;
	TMap<TSubclassOf<class UObject>, class ULevelVariantSetsFunctionDirector*> DirectorInstances;

public:
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
	bool SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelVariantSetsActor">();
	}
	static class ALevelVariantSetsActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelVariantSetsActor>();
	}
};
static_assert(alignof(ALevelVariantSetsActor) == 0x000008, "Wrong alignment on ALevelVariantSetsActor");
static_assert(sizeof(ALevelVariantSetsActor) == 0x0002F0, "Wrong size on ALevelVariantSetsActor");
static_assert(offsetof(ALevelVariantSetsActor, LevelVariantSets) == 0x000288, "Member 'ALevelVariantSetsActor::LevelVariantSets' has a wrong offset!");
static_assert(offsetof(ALevelVariantSetsActor, DirectorInstances) == 0x0002A0, "Member 'ALevelVariantSetsActor::DirectorInstances' has a wrong offset!");

class ULevelVariantSetsFunctionDirector final : public UObject
{
public:
	uint8                                         Pad_28[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelVariantSetsFunctionDirector">();
	}
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelVariantSetsFunctionDirector>();
	}
};
static_assert(alignof(ULevelVariantSetsFunctionDirector) == 0x000008, "Wrong alignment on ULevelVariantSetsFunctionDirector");
static_assert(sizeof(ULevelVariantSetsFunctionDirector) == 0x000040, "Wrong size on ULevelVariantSetsFunctionDirector");

class UPropertyValue : public UObject
{
public:
	uint8                                         Pad_28[0x60];
	TArray<TFieldPath<class FProperty>>           Properties;
	TArray<int32>                                 PropertyIndices;
	TArray<struct FCapturedPropSegment>           CapturedPropSegments;
	class FString                                 FullDisplayString;
	class FName                                   PropertySetterName;
	uint8                                         Pad_CC[0x4];
	TMap<class FString, class FString>            PropertySetterParameterDefaults;
	bool                                          bHasRecordedData;
	uint8                                         Pad_121[0x7];
	TSubclassOf<class UObject>                    LeafPropertyClass;
	uint8                                         Pad_130[0x8];
	TArray<uint8>                                 ValueBytes;
	EPropertyValueCategory                        PropCategory;
	uint8                                         Pad_149[0x6F];

public:
	class FString GetFullDisplayString() const;
	class FText GetPropertyTooltip() const;
	bool HasRecordedData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValue">();
	}
	static class UPropertyValue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValue>();
	}
};
static_assert(alignof(UPropertyValue) == 0x000008, "Wrong alignment on UPropertyValue");
static_assert(sizeof(UPropertyValue) == 0x0001B8, "Wrong size on UPropertyValue");
static_assert(offsetof(UPropertyValue, Properties) == 0x000088, "Member 'UPropertyValue::Properties' has a wrong offset!");
static_assert(offsetof(UPropertyValue, PropertyIndices) == 0x000098, "Member 'UPropertyValue::PropertyIndices' has a wrong offset!");
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 0x0000A8, "Member 'UPropertyValue::CapturedPropSegments' has a wrong offset!");
static_assert(offsetof(UPropertyValue, FullDisplayString) == 0x0000B8, "Member 'UPropertyValue::FullDisplayString' has a wrong offset!");
static_assert(offsetof(UPropertyValue, PropertySetterName) == 0x0000C8, "Member 'UPropertyValue::PropertySetterName' has a wrong offset!");
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 0x0000D0, "Member 'UPropertyValue::PropertySetterParameterDefaults' has a wrong offset!");
static_assert(offsetof(UPropertyValue, bHasRecordedData) == 0x000120, "Member 'UPropertyValue::bHasRecordedData' has a wrong offset!");
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 0x000128, "Member 'UPropertyValue::LeafPropertyClass' has a wrong offset!");
static_assert(offsetof(UPropertyValue, ValueBytes) == 0x000138, "Member 'UPropertyValue::ValueBytes' has a wrong offset!");
static_assert(offsetof(UPropertyValue, PropCategory) == 0x000148, "Member 'UPropertyValue::PropCategory' has a wrong offset!");

class UPropertyValueTransform final : public UPropertyValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValueTransform">();
	}
	static class UPropertyValueTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValueTransform>();
	}
};
static_assert(alignof(UPropertyValueTransform) == 0x000008, "Wrong alignment on UPropertyValueTransform");
static_assert(sizeof(UPropertyValueTransform) == 0x0001B8, "Wrong size on UPropertyValueTransform");

class UPropertyValueVisibility final : public UPropertyValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValueVisibility">();
	}
	static class UPropertyValueVisibility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValueVisibility>();
	}
};
static_assert(alignof(UPropertyValueVisibility) == 0x000008, "Wrong alignment on UPropertyValueVisibility");
static_assert(sizeof(UPropertyValueVisibility) == 0x0001B8, "Wrong size on UPropertyValueVisibility");

class UPropertyValueColor final : public UPropertyValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValueColor">();
	}
	static class UPropertyValueColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValueColor>();
	}
};
static_assert(alignof(UPropertyValueColor) == 0x000008, "Wrong alignment on UPropertyValueColor");
static_assert(sizeof(UPropertyValueColor) == 0x0001B8, "Wrong size on UPropertyValueColor");

class UPropertyValueMaterial final : public UPropertyValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValueMaterial">();
	}
	static class UPropertyValueMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValueMaterial>();
	}
};
static_assert(alignof(UPropertyValueMaterial) == 0x000008, "Wrong alignment on UPropertyValueMaterial");
static_assert(sizeof(UPropertyValueMaterial) == 0x0001B8, "Wrong size on UPropertyValueMaterial");

class UPropertyValueOption final : public UPropertyValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValueOption">();
	}
	static class UPropertyValueOption* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValueOption>();
	}
};
static_assert(alignof(UPropertyValueOption) == 0x000008, "Wrong alignment on UPropertyValueOption");
static_assert(sizeof(UPropertyValueOption) == 0x0001B8, "Wrong size on UPropertyValueOption");

class UPropertyValueSoftObject final : public UPropertyValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyValueSoftObject">();
	}
	static class UPropertyValueSoftObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyValueSoftObject>();
	}
};
static_assert(alignof(UPropertyValueSoftObject) == 0x000008, "Wrong alignment on UPropertyValueSoftObject");
static_assert(sizeof(UPropertyValueSoftObject) == 0x0001B8, "Wrong size on UPropertyValueSoftObject");

class ASwitchActor final : public AActor
{
public:
	uint8                                         Pad_288[0x18];
	class USceneComponent*                        SceneComponent;
	int32                                         LastSelectedOption;
	uint8                                         Pad_2AC[0x4];

public:
	void SelectOption(int32 OptionIndex);

	TArray<class AActor*> GetOptions() const;
	int32 GetSelectedOption() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SwitchActor">();
	}
	static class ASwitchActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASwitchActor>();
	}
};
static_assert(alignof(ASwitchActor) == 0x000008, "Wrong alignment on ASwitchActor");
static_assert(sizeof(ASwitchActor) == 0x0002B0, "Wrong size on ASwitchActor");
static_assert(offsetof(ASwitchActor, SceneComponent) == 0x0002A0, "Member 'ASwitchActor::SceneComponent' has a wrong offset!");
static_assert(offsetof(ASwitchActor, LastSelectedOption) == 0x0002A8, "Member 'ASwitchActor::LastSelectedOption' has a wrong offset!");

class UVariant final : public UObject
{
public:
	TArray<struct FVariantDependency>             Dependencies;
	class FText                                   DisplayText;
	uint8                                         Pad_50[0x18];
	TArray<class UVariantObjectBinding*>          ObjectBindings;
	class UTexture2D*                             Thumbnail;

public:
	int32 AddDependency(struct FVariantDependency* Dependency);
	void DeleteDependency(int32 Index_0);
	class AActor* GetActor(int32 ActorIndex);
	struct FVariantDependency GetDependency(int32 Index_0);
	TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
	int32 GetNumActors();
	int32 GetNumDependencies();
	class UVariantSet* GetParent();
	class UTexture2D* GetThumbnail();
	bool IsActive();
	void SetDependency(int32 Index_0, struct FVariantDependency* Dependency);
	void SetDisplayText(const class FText& NewDisplayText);
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SwitchOn();

	class FText GetDisplayText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Variant">();
	}
	static class UVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVariant>();
	}
};
static_assert(alignof(UVariant) == 0x000008, "Wrong alignment on UVariant");
static_assert(sizeof(UVariant) == 0x000080, "Wrong size on UVariant");
static_assert(offsetof(UVariant, Dependencies) == 0x000028, "Member 'UVariant::Dependencies' has a wrong offset!");
static_assert(offsetof(UVariant, DisplayText) == 0x000038, "Member 'UVariant::DisplayText' has a wrong offset!");
static_assert(offsetof(UVariant, ObjectBindings) == 0x000068, "Member 'UVariant::ObjectBindings' has a wrong offset!");
static_assert(offsetof(UVariant, Thumbnail) == 0x000078, "Member 'UVariant::Thumbnail' has a wrong offset!");

class UVariantObjectBinding final : public UObject
{
public:
	class FString                                 CachedActorLabel;
	struct FSoftObjectPath                        ObjectPtr;
	TLazyObjectPtr<class UObject>                 LazyObjectPtr;
	uint8                                         Pad_6C[0x4];
	TArray<class UPropertyValue*>                 CapturedProperties;
	TArray<struct FFunctionCaller>                FunctionCallers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VariantObjectBinding">();
	}
	static class UVariantObjectBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVariantObjectBinding>();
	}
};
static_assert(alignof(UVariantObjectBinding) == 0x000008, "Wrong alignment on UVariantObjectBinding");
static_assert(sizeof(UVariantObjectBinding) == 0x000090, "Wrong size on UVariantObjectBinding");
static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 0x000028, "Member 'UVariantObjectBinding::CachedActorLabel' has a wrong offset!");
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 0x000038, "Member 'UVariantObjectBinding::ObjectPtr' has a wrong offset!");
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 0x000050, "Member 'UVariantObjectBinding::LazyObjectPtr' has a wrong offset!");
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 0x000070, "Member 'UVariantObjectBinding::CapturedProperties' has a wrong offset!");
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 0x000080, "Member 'UVariantObjectBinding::FunctionCallers' has a wrong offset!");

class UVariantSet final : public UObject
{
public:
	class FText                                   DisplayText;
	uint8                                         Pad_40[0x18];
	bool                                          bExpanded;
	uint8                                         Pad_59[0x7];
	TArray<class UVariant*>                       Variants;
	class UTexture2D*                             Thumbnail;

public:
	class ULevelVariantSets* GetParent();
	class UTexture2D* GetThumbnail();
	class UVariant* GetVariant(int32 VariantIndex);
	class UVariant* GetVariantByName(const class FString& VariantName);
	void SetDisplayText(const class FText& NewDisplayText);
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);

	class FText GetDisplayText() const;
	int32 GetNumVariants() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VariantSet">();
	}
	static class UVariantSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVariantSet>();
	}
};
static_assert(alignof(UVariantSet) == 0x000008, "Wrong alignment on UVariantSet");
static_assert(sizeof(UVariantSet) == 0x000078, "Wrong size on UVariantSet");
static_assert(offsetof(UVariantSet, DisplayText) == 0x000028, "Member 'UVariantSet::DisplayText' has a wrong offset!");
static_assert(offsetof(UVariantSet, bExpanded) == 0x000058, "Member 'UVariantSet::bExpanded' has a wrong offset!");
static_assert(offsetof(UVariantSet, Variants) == 0x000060, "Member 'UVariantSet::Variants' has a wrong offset!");
static_assert(offsetof(UVariantSet, Thumbnail) == 0x000070, "Member 'UVariantSet::Thumbnail' has a wrong offset!");

}
