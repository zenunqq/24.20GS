#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "Chooser_structs.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

class UChooserParameterBool_ContextProperty final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class FName>                           PropertyBindingChain;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterBool_ContextProperty">();
	}
	static class UChooserParameterBool_ContextProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserParameterBool_ContextProperty>();
	}
};
static_assert(alignof(UChooserParameterBool_ContextProperty) == 0x000008, "Wrong alignment on UChooserParameterBool_ContextProperty");
static_assert(sizeof(UChooserParameterBool_ContextProperty) == 0x000040, "Wrong size on UChooserParameterBool_ContextProperty");
static_assert(offsetof(UChooserParameterBool_ContextProperty, PropertyBindingChain) == 0x000030, "Member 'UChooserParameterBool_ContextProperty::PropertyBindingChain' has a wrong offset!");

class UChooserColumnBool final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TScriptInterface<class IChooserParameterBool> InputValue;
	TArray<bool>                                  RowValues;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserColumnBool">();
	}
	static class UChooserColumnBool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserColumnBool>();
	}
};
static_assert(alignof(UChooserColumnBool) == 0x000008, "Wrong alignment on UChooserColumnBool");
static_assert(sizeof(UChooserColumnBool) == 0x000050, "Wrong size on UChooserColumnBool");
static_assert(offsetof(UChooserColumnBool, InputValue) == 0x000030, "Member 'UChooserColumnBool::InputValue' has a wrong offset!");
static_assert(offsetof(UChooserColumnBool, RowValues) == 0x000040, "Member 'UChooserColumnBool::RowValues' has a wrong offset!");

class UChooserFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UObject* EvaluateChooser(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass);
	static TArray<class UObject*> EvaluateChooserMulti(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserFunctionLibrary">();
	}
	static class UChooserFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserFunctionLibrary>();
	}
};
static_assert(alignof(UChooserFunctionLibrary) == 0x000008, "Wrong alignment on UChooserFunctionLibrary");
static_assert(sizeof(UChooserFunctionLibrary) == 0x000028, "Wrong size on UChooserFunctionLibrary");

class IHasContextClass final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HasContextClass">();
	}
	static class IHasContextClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<IHasContextClass>();
	}
};
static_assert(alignof(IHasContextClass) == 0x000008, "Wrong alignment on IHasContextClass");
static_assert(sizeof(IHasContextClass) == 0x000028, "Wrong size on IHasContextClass");

class UChooserParameterEnum_ContextProperty final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class FName>                           PropertyBindingChain;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterEnum_ContextProperty">();
	}
	static class UChooserParameterEnum_ContextProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserParameterEnum_ContextProperty>();
	}
};
static_assert(alignof(UChooserParameterEnum_ContextProperty) == 0x000008, "Wrong alignment on UChooserParameterEnum_ContextProperty");
static_assert(sizeof(UChooserParameterEnum_ContextProperty) == 0x000040, "Wrong size on UChooserParameterEnum_ContextProperty");
static_assert(offsetof(UChooserParameterEnum_ContextProperty, PropertyBindingChain) == 0x000030, "Member 'UChooserParameterEnum_ContextProperty::PropertyBindingChain' has a wrong offset!");

class UChooserColumnEnum final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TScriptInterface<class IChooserParameterEnum> InputValue;
	TArray<struct FChooserEnumRowData>            RowValues;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserColumnEnum">();
	}
	static class UChooserColumnEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserColumnEnum>();
	}
};
static_assert(alignof(UChooserColumnEnum) == 0x000008, "Wrong alignment on UChooserColumnEnum");
static_assert(sizeof(UChooserColumnEnum) == 0x000050, "Wrong size on UChooserColumnEnum");
static_assert(offsetof(UChooserColumnEnum, InputValue) == 0x000030, "Member 'UChooserColumnEnum::InputValue' has a wrong offset!");
static_assert(offsetof(UChooserColumnEnum, RowValues) == 0x000040, "Member 'UChooserColumnEnum::RowValues' has a wrong offset!");

class UChooserParameterFloat_ContextProperty final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class FName>                           PropertyBindingChain;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterFloat_ContextProperty">();
	}
	static class UChooserParameterFloat_ContextProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserParameterFloat_ContextProperty>();
	}
};
static_assert(alignof(UChooserParameterFloat_ContextProperty) == 0x000008, "Wrong alignment on UChooserParameterFloat_ContextProperty");
static_assert(sizeof(UChooserParameterFloat_ContextProperty) == 0x000040, "Wrong size on UChooserParameterFloat_ContextProperty");
static_assert(offsetof(UChooserParameterFloat_ContextProperty, PropertyBindingChain) == 0x000030, "Member 'UChooserParameterFloat_ContextProperty::PropertyBindingChain' has a wrong offset!");

class UChooserColumnFloatRange final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TScriptInterface<class IChooserParameterFloat> InputValue;
	TArray<struct FChooserFloatRangeRowData>      RowValues;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserColumnFloatRange">();
	}
	static class UChooserColumnFloatRange* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserColumnFloatRange>();
	}
};
static_assert(alignof(UChooserColumnFloatRange) == 0x000008, "Wrong alignment on UChooserColumnFloatRange");
static_assert(sizeof(UChooserColumnFloatRange) == 0x000050, "Wrong size on UChooserColumnFloatRange");
static_assert(offsetof(UChooserColumnFloatRange, InputValue) == 0x000030, "Member 'UChooserColumnFloatRange::InputValue' has a wrong offset!");
static_assert(offsetof(UChooserColumnFloatRange, RowValues) == 0x000040, "Member 'UChooserColumnFloatRange::RowValues' has a wrong offset!");

class UChooserParameterGameplayTag_ContextProperty final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class FName>                           PropertyBindingChain;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterGameplayTag_ContextProperty">();
	}
	static class UChooserParameterGameplayTag_ContextProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserParameterGameplayTag_ContextProperty>();
	}
};
static_assert(alignof(UChooserParameterGameplayTag_ContextProperty) == 0x000008, "Wrong alignment on UChooserParameterGameplayTag_ContextProperty");
static_assert(sizeof(UChooserParameterGameplayTag_ContextProperty) == 0x000040, "Wrong size on UChooserParameterGameplayTag_ContextProperty");
static_assert(offsetof(UChooserParameterGameplayTag_ContextProperty, PropertyBindingChain) == 0x000030, "Member 'UChooserParameterGameplayTag_ContextProperty::PropertyBindingChain' has a wrong offset!");

class UChooserColumnGameplayTag final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TScriptInterface<class IChooserParameterGameplayTag> InputValue;
	EGameplayContainerMatchType                   TagMatchType;
	uint8                                         Pad_41[0x7];
	TArray<struct FGameplayTagContainer>          RowValues;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserColumnGameplayTag">();
	}
	static class UChooserColumnGameplayTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserColumnGameplayTag>();
	}
};
static_assert(alignof(UChooserColumnGameplayTag) == 0x000008, "Wrong alignment on UChooserColumnGameplayTag");
static_assert(sizeof(UChooserColumnGameplayTag) == 0x000058, "Wrong size on UChooserColumnGameplayTag");
static_assert(offsetof(UChooserColumnGameplayTag, InputValue) == 0x000030, "Member 'UChooserColumnGameplayTag::InputValue' has a wrong offset!");
static_assert(offsetof(UChooserColumnGameplayTag, TagMatchType) == 0x000040, "Member 'UChooserColumnGameplayTag::TagMatchType' has a wrong offset!");
static_assert(offsetof(UChooserColumnGameplayTag, RowValues) == 0x000048, "Member 'UChooserColumnGameplayTag::RowValues' has a wrong offset!");

class IChooserColumn final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserColumn">();
	}
	static class IChooserColumn* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChooserColumn>();
	}
};
static_assert(alignof(IChooserColumn) == 0x000008, "Wrong alignment on IChooserColumn");
static_assert(sizeof(IChooserColumn) == 0x000028, "Wrong size on IChooserColumn");

class IChooserParameterBool final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterBool">();
	}
	static class IChooserParameterBool* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChooserParameterBool>();
	}
};
static_assert(alignof(IChooserParameterBool) == 0x000008, "Wrong alignment on IChooserParameterBool");
static_assert(sizeof(IChooserParameterBool) == 0x000028, "Wrong size on IChooserParameterBool");

class IChooserParameterEnum final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterEnum">();
	}
	static class IChooserParameterEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChooserParameterEnum>();
	}
};
static_assert(alignof(IChooserParameterEnum) == 0x000008, "Wrong alignment on IChooserParameterEnum");
static_assert(sizeof(IChooserParameterEnum) == 0x000028, "Wrong size on IChooserParameterEnum");

class IChooserParameterFloat final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterFloat">();
	}
	static class IChooserParameterFloat* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChooserParameterFloat>();
	}
};
static_assert(alignof(IChooserParameterFloat) == 0x000008, "Wrong alignment on IChooserParameterFloat");
static_assert(sizeof(IChooserParameterFloat) == 0x000028, "Wrong size on IChooserParameterFloat");

class IChooserParameterGameplayTag final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterGameplayTag">();
	}
	static class IChooserParameterGameplayTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChooserParameterGameplayTag>();
	}
};
static_assert(alignof(IChooserParameterGameplayTag) == 0x000008, "Wrong alignment on IChooserParameterGameplayTag");
static_assert(sizeof(IChooserParameterGameplayTag) == 0x000028, "Wrong size on IChooserParameterGameplayTag");

class IObjectChooser final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectChooser">();
	}
	static class IObjectChooser* GetDefaultObj()
	{
		return GetDefaultObjImpl<IObjectChooser>();
	}
};
static_assert(alignof(IObjectChooser) == 0x000008, "Wrong alignment on IObjectChooser");
static_assert(sizeof(IObjectChooser) == 0x000028, "Wrong size on IObjectChooser");

class UObjectChooser_Asset final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UObject*                                Asset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectChooser_Asset">();
	}
	static class UObjectChooser_Asset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectChooser_Asset>();
	}
};
static_assert(alignof(UObjectChooser_Asset) == 0x000008, "Wrong alignment on UObjectChooser_Asset");
static_assert(sizeof(UObjectChooser_Asset) == 0x000038, "Wrong size on UObjectChooser_Asset");
static_assert(offsetof(UObjectChooser_Asset, Asset) == 0x000030, "Member 'UObjectChooser_Asset::Asset' has a wrong offset!");

class UChooserTable final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<TScriptInterface<class IObjectChooser>> Results;
	TArray<TScriptInterface<class IChooserColumn>> Columns;
	TArray<struct FInstancedStruct>               ResultsStructs;
	TArray<struct FInstancedStruct>               ColumnsStructs;
	TSubclassOf<class UObject>                    ContextObjectType;
	TSubclassOf<class UObject>                    OutputObjectType;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserTable">();
	}
	static class UChooserTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserTable>();
	}
};
static_assert(alignof(UChooserTable) == 0x000008, "Wrong alignment on UChooserTable");
static_assert(sizeof(UChooserTable) == 0x000080, "Wrong size on UChooserTable");
static_assert(offsetof(UChooserTable, Results) == 0x000030, "Member 'UChooserTable::Results' has a wrong offset!");
static_assert(offsetof(UChooserTable, Columns) == 0x000040, "Member 'UChooserTable::Columns' has a wrong offset!");
static_assert(offsetof(UChooserTable, ResultsStructs) == 0x000050, "Member 'UChooserTable::ResultsStructs' has a wrong offset!");
static_assert(offsetof(UChooserTable, ColumnsStructs) == 0x000060, "Member 'UChooserTable::ColumnsStructs' has a wrong offset!");
static_assert(offsetof(UChooserTable, ContextObjectType) == 0x000070, "Member 'UChooserTable::ContextObjectType' has a wrong offset!");
static_assert(offsetof(UChooserTable, OutputObjectType) == 0x000078, "Member 'UChooserTable::OutputObjectType' has a wrong offset!");

class UObjectChooser_EvaluateChooser final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UChooserTable*                          Chooser;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectChooser_EvaluateChooser">();
	}
	static class UObjectChooser_EvaluateChooser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectChooser_EvaluateChooser>();
	}
};
static_assert(alignof(UObjectChooser_EvaluateChooser) == 0x000008, "Wrong alignment on UObjectChooser_EvaluateChooser");
static_assert(sizeof(UObjectChooser_EvaluateChooser) == 0x000038, "Wrong size on UObjectChooser_EvaluateChooser");
static_assert(offsetof(UObjectChooser_EvaluateChooser, Chooser) == 0x000030, "Member 'UObjectChooser_EvaluateChooser::Chooser' has a wrong offset!");

class UChooserColumnMenuContext final : public UObject
{
public:
	uint8                                         Pad_28[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserColumnMenuContext">();
	}
	static class UChooserColumnMenuContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChooserColumnMenuContext>();
	}
};
static_assert(alignof(UChooserColumnMenuContext) == 0x000008, "Wrong alignment on UChooserColumnMenuContext");
static_assert(sizeof(UChooserColumnMenuContext) == 0x000040, "Wrong size on UChooserColumnMenuContext");

}
