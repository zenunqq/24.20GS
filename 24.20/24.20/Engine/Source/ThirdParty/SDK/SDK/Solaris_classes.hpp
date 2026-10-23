#pragma once

#include "Basic.hpp"

#include "VerseNative_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Solaris_structs.hpp"

namespace SDK
{

class UVerseStruct final : public UScriptStruct
{
public:
	uint32                                        VerseClassFlags;
	uint8                                         Pad_C4[0x4];
	class UFunction*                              InitFunction;
	TSubclassOf<class UObject>                    ModuleClass;
	struct FGuid                                  Guid;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseStruct">();
	}
	static class UVerseStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseStruct>();
	}
};
static_assert(alignof(UVerseStruct) == 0x000008, "Wrong alignment on UVerseStruct");
static_assert(sizeof(UVerseStruct) == 0x0000E8, "Wrong size on UVerseStruct");
static_assert(offsetof(UVerseStruct, VerseClassFlags) == 0x0000C0, "Member 'UVerseStruct::VerseClassFlags' has a wrong offset!");
static_assert(offsetof(UVerseStruct, InitFunction) == 0x0000C8, "Member 'UVerseStruct::InitFunction' has a wrong offset!");
static_assert(offsetof(UVerseStruct, ModuleClass) == 0x0000D0, "Member 'UVerseStruct::ModuleClass' has a wrong offset!");
static_assert(offsetof(UVerseStruct, Guid) == 0x0000D8, "Member 'UVerseStruct::Guid' has a wrong offset!");

class UVerseDigest final : public UObject
{
public:
	TArray<uint8>                                 DigestCode;
	class FString                                 ProjectName;
	EVerseDigestVariant                           Variant;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseDigest">();
	}
	static class UVerseDigest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseDigest>();
	}
};
static_assert(alignof(UVerseDigest) == 0x000008, "Wrong alignment on UVerseDigest");
static_assert(sizeof(UVerseDigest) == 0x000050, "Wrong size on UVerseDigest");
static_assert(offsetof(UVerseDigest, DigestCode) == 0x000028, "Member 'UVerseDigest::DigestCode' has a wrong offset!");
static_assert(offsetof(UVerseDigest, ProjectName) == 0x000038, "Member 'UVerseDigest::ProjectName' has a wrong offset!");
static_assert(offsetof(UVerseDigest, Variant) == 0x000048, "Member 'UVerseDigest::Variant' has a wrong offset!");

class UVerseEnum final : public UEnum
{
public:
	EVerseEnumFlags                               VerseEnumFlags;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseEnum">();
	}
	static class UVerseEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseEnum>();
	}
};
static_assert(alignof(UVerseEnum) == 0x000008, "Wrong alignment on UVerseEnum");
static_assert(sizeof(UVerseEnum) == 0x000070, "Wrong size on UVerseEnum");
static_assert(offsetof(UVerseEnum, VerseEnumFlags) == 0x000068, "Member 'UVerseEnum::VerseEnumFlags' has a wrong offset!");

class USolarisArrayLibrary final : public UObject
{
public:
	static int64 Add(const TArray<struct FGenericElementType>& Array, const struct FGenericElementType& new_item);
	static void Call(const TArray<struct FGenericElementType>& Array, int64 Index_0);
	static TArray<struct FGenericElementType> Concat(const TArray<struct FGenericElementType>& LHS, const TArray<struct FGenericElementType>& RHS);
	static TArray<struct FGenericElementType> ConcatEquals(TArray<struct FGenericElementType>* LHS, const TArray<struct FGenericElementType>& RHS);
	static void Empty(const TArray<struct FGenericElementType>& Array);
	static int64 Length(const TArray<struct FGenericElementType>& Array);
	static void Move(const TArray<struct FGenericElementType>& Target, const TArray<struct FGenericElementType>& Source);
	static void RefCall(const TArray<struct FGenericElementType>& Array, int64 Index_0);
	static void UnsafeCall(const TArray<struct FGenericElementType>& Array, int64 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisArrayLibrary">();
	}
	static class USolarisArrayLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisArrayLibrary>();
	}
};
static_assert(alignof(USolarisArrayLibrary) == 0x000008, "Wrong alignment on USolarisArrayLibrary");
static_assert(sizeof(USolarisArrayLibrary) == 0x000028, "Wrong size on USolarisArrayLibrary");

class USolarisCoroutineLibrary final : public UObject
{
public:
	static void TaskCancel(class UObject* Task);
	static void TaskFree(class UObject* Task);
	static void TaskGetReturnProperty(class UObject* Task);
	static int64 TaskGetState(class UObject* Task);
	static class UObject* TaskMake(class UClass* Type, class UObject* Caller, int64 CallerResumeState, int64 CallerCancelState, class UObject* OwnerInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisCoroutineLibrary">();
	}
	static class USolarisCoroutineLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisCoroutineLibrary>();
	}
};
static_assert(alignof(USolarisCoroutineLibrary) == 0x000008, "Wrong alignment on USolarisCoroutineLibrary");
static_assert(sizeof(USolarisCoroutineLibrary) == 0x000028, "Wrong size on USolarisCoroutineLibrary");

class UGameFeature_SolarisObserver final : public UObject
{
public:
	uint8                                         Pad_28[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeature_SolarisObserver">();
	}
	static class UGameFeature_SolarisObserver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeature_SolarisObserver>();
	}
};
static_assert(alignof(UGameFeature_SolarisObserver) == 0x000008, "Wrong alignment on UGameFeature_SolarisObserver");
static_assert(sizeof(UGameFeature_SolarisObserver) == 0x000040, "Wrong size on UGameFeature_SolarisObserver");

class USolarisMapLibrary final : public UObject
{
public:
	static void Add(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key, const struct FGenericValueType& Value);
	static void Call(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	static void CompletelyAssignedRefCall(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	static TMap<struct FGenericKeyType, struct FGenericValueType> Concat(const TMap<struct FGenericKeyType, struct FGenericValueType>& LHS, const TMap<struct FGenericKeyType, struct FGenericValueType>& RHS);
	static struct FGenericKeyType GetKeyByIndex(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index_0);
	static int64 GetNextValidIndex(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 InitialIndex);
	static struct FGenericValueType GetValueByIndex(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index_0);
	static void InitMap(TMap<struct FGenericKeyType, struct FGenericValueType>* Map);
	static int64 Length(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map);
	static void Move(TMap<struct FGenericKeyType, struct FGenericValueType>* Dest, const TMap<struct FGenericKeyType, struct FGenericValueType>& Src);
	static void RefCall(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMapLibrary">();
	}
	static class USolarisMapLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMapLibrary>();
	}
};
static_assert(alignof(USolarisMapLibrary) == 0x000008, "Wrong alignment on USolarisMapLibrary");
static_assert(sizeof(USolarisMapLibrary) == 0x000028, "Wrong size on USolarisMapLibrary");

class USolarisMathLibrary_Bool final : public UObject
{
public:
	static void Query();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMathLibrary_Bool">();
	}
	static class USolarisMathLibrary_Bool* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMathLibrary_Bool>();
	}
};
static_assert(alignof(USolarisMathLibrary_Bool) == 0x000008, "Wrong alignment on USolarisMathLibrary_Bool");
static_assert(sizeof(USolarisMathLibrary_Bool) == 0x000028, "Wrong size on USolarisMathLibrary_Bool");

class USolarisMathLibrary_Int final : public UObject
{
public:
	static void abs(int64 Value);
	static void Add(int64 LHS, int64 RHS);
	static void AddEquals(int64* LHS, int64 RHS);
	static void CheckConstrainedInt(int64 min_0, int64 max_0, int64 Value);
	static void Divide(int64 LHS, int64 RHS);
	static void Greater(int64 LHS, int64 RHS);
	static void GreaterEqual(int64 LHS, int64 RHS);
	static void Less(int64 LHS, int64 RHS);
	static void LessEqual(int64 LHS, int64 RHS);
	static void Multiply(int64 LHS, int64 RHS);
	static void MultiplyEquals(int64* LHS, int64 RHS);
	static void Negate(int64 Value);
	static bool PredicateEqual(int64 LHS, int64 RHS);
	static bool PredicateGreater(int64 LHS, int64 RHS);
	static bool PredicateGreaterEqual(int64 LHS, int64 RHS);
	static bool PredicateLess(int64 LHS, int64 RHS);
	static bool PredicateLessEqual(int64 LHS, int64 RHS);
	static bool PredicateNotEqual(int64 LHS, int64 RHS);
	static void Subtract(int64 LHS, int64 RHS);
	static void SubtractEquals(int64* LHS, int64 RHS);
	static int32 UncheckedConvertI32I64(int64 RHS);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMathLibrary_Int">();
	}
	static class USolarisMathLibrary_Int* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMathLibrary_Int>();
	}
};
static_assert(alignof(USolarisMathLibrary_Int) == 0x000008, "Wrong alignment on USolarisMathLibrary_Int");
static_assert(sizeof(USolarisMathLibrary_Int) == 0x000028, "Wrong size on USolarisMathLibrary_Int");

class USolarisMathLibrary_Rational final : public UObject
{
public:
	static void ceil(const struct FVerseRational& Val);
	static void floor(const struct FVerseRational& Val);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMathLibrary_Rational">();
	}
	static class USolarisMathLibrary_Rational* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMathLibrary_Rational>();
	}
};
static_assert(alignof(USolarisMathLibrary_Rational) == 0x000008, "Wrong alignment on USolarisMathLibrary_Rational");
static_assert(sizeof(USolarisMathLibrary_Rational) == 0x000028, "Wrong size on USolarisMathLibrary_Rational");

class USolarisMathLibrary_Float final : public UObject
{
public:
	static double abs(double Value);
	static double Add(double LHS, double RHS);
	static double AddEquals(double* LHS, double RHS);
	static void CheckConstrainedFloat(double min_0, double max_0, double Value);
	static double Divide(double LHS, double RHS);
	static double DivideEquals(double* LHS, double RHS);
	static void Greater(double LHS, double RHS);
	static void GreaterEqual(double LHS, double RHS);
	static void Less(double LHS, double RHS);
	static void LessEqual(double LHS, double RHS);
	static double Multiply(double LHS, double RHS);
	static double MultiplyEquals(double* LHS, double RHS);
	static double MultiplyFloatInt(double LHS, int64 RHS);
	static double MultiplyIntFloat(int64 LHS, double RHS);
	static double Negate(double Value);
	static double Subtract(double LHS, double RHS);
	static double SubtractEquals(double* LHS, double RHS);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMathLibrary_Float">();
	}
	static class USolarisMathLibrary_Float* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMathLibrary_Float>();
	}
};
static_assert(alignof(USolarisMathLibrary_Float) == 0x000008, "Wrong alignment on USolarisMathLibrary_Float");
static_assert(sizeof(USolarisMathLibrary_Float) == 0x000028, "Wrong size on USolarisMathLibrary_Float");

class USolarisMathLibrary_String final : public UObject
{
public:
	static void Add(const int32& String, int8 Character);
	static void Call(const int32& String, int64 Index_0);
	static int32 Concat(const int32& LHS, const int32& RHS);
	static int32 ConcatEquals(int32* LHS, const int32& RHS);
	static int64 Length(const int32& Array);
	static void Make();
	static int32 MakeLiteral();
	static void Move(const int32& Destination, const int32& Source);
	static void RefCall(const int32& String, int64 Index_0);
	static void UncheckedCall(const int32& String, int64 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMathLibrary_String">();
	}
	static class USolarisMathLibrary_String* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMathLibrary_String>();
	}
};
static_assert(alignof(USolarisMathLibrary_String) == 0x000008, "Wrong alignment on USolarisMathLibrary_String");
static_assert(sizeof(USolarisMathLibrary_String) == 0x000028, "Wrong size on USolarisMathLibrary_String");

class USolarisMathLibrary_Option final : public UObject
{
public:
	static void Make();
	static void Query();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisMathLibrary_Option">();
	}
	static class USolarisMathLibrary_Option* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisMathLibrary_Option>();
	}
};
static_assert(alignof(USolarisMathLibrary_Option) == 0x000008, "Wrong alignment on USolarisMathLibrary_Option");
static_assert(sizeof(USolarisMathLibrary_Option) == 0x000028, "Wrong size on USolarisMathLibrary_Option");

class USolarisGameSettings final : public UObject
{
public:
	TArray<class FString>                         Blacklist;
	int32                                         MaxAllowedSize;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisGameSettings">();
	}
	static class USolarisGameSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisGameSettings>();
	}
};
static_assert(alignof(USolarisGameSettings) == 0x000008, "Wrong alignment on USolarisGameSettings");
static_assert(sizeof(USolarisGameSettings) == 0x000040, "Wrong size on USolarisGameSettings");
static_assert(offsetof(USolarisGameSettings, Blacklist) == 0x000028, "Member 'USolarisGameSettings::Blacklist' has a wrong offset!");
static_assert(offsetof(USolarisGameSettings, MaxAllowedSize) == 0x000038, "Member 'USolarisGameSettings::MaxAllowedSize' has a wrong offset!");

class USolarisUtilLibrary final : public UObject
{
public:
	static void AddPropertyToSubobjectExclusionList(int64 InstancingGraph, int64 Property);
	static void CallFinalFunctionWithContext();
	static void CallFunction();
	static int64 Dereference(int64 Reference);
	static class UObject* GetCurrentlyInstantiatedObject();
	static void GetFunctionForInterfaceMethod(class UObject* Object, class FName MethodName);
	static int64 GetOptionValue(int64 Option);
	static bool HasInterface(class UObject* Object, class UClass* InterfaceClass);
	static void InstanceFunction(class UObject* Object, class FName MethodName);
	static void InstantiateObject(class UClass* Class_0, int64 InstancingGraph);
	static bool IsNonNullObject(class UObject* Object);
	static bool IsOptionSet(int64 Option);
	static bool MakeOptionFromValue(class UObject* Property, int64 Value);
	static int64 MakeUnsetOption();
	static bool ObjectHasNoFlags(class UObject* Object, int32 Flags_0);
	static bool ReferenceIsValid(int64 Reference);
	static int64 ReplaceOptionValue(int64 ResultProperty, int64 Option, int64 Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolarisUtilLibrary">();
	}
	static class USolarisUtilLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolarisUtilLibrary>();
	}
};
static_assert(alignof(USolarisUtilLibrary) == 0x000008, "Wrong alignment on USolarisUtilLibrary");
static_assert(sizeof(USolarisUtilLibrary) == 0x000028, "Wrong size on USolarisUtilLibrary");

class alignas(0x10) UVerseClass final : public UVerseClassBase
{
public:
	uint32                                        SolClassFlags;
	uint8                                         Pad_204[0x4];
	TArray<TSubclassOf<class UObject>>            TaskClasses;
	TSet<TSubclassOf<class UObject>>              InterfaceClasses;
	TMap<class FName, TFieldPath<class FProperty>> InterfaceMethodFunctionProperties;
	class UFunction*                              InitInstanceFunction;
	uint8                                         Pad_2C0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass">();
	}
	static class UVerseClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseClass>();
	}
};
static_assert(alignof(UVerseClass) == 0x000010, "Wrong alignment on UVerseClass");
static_assert(sizeof(UVerseClass) == 0x0002D0, "Wrong size on UVerseClass");
static_assert(offsetof(UVerseClass, SolClassFlags) == 0x000200, "Member 'UVerseClass::SolClassFlags' has a wrong offset!");
static_assert(offsetof(UVerseClass, TaskClasses) == 0x000208, "Member 'UVerseClass::TaskClasses' has a wrong offset!");
static_assert(offsetof(UVerseClass, InterfaceClasses) == 0x000218, "Member 'UVerseClass::InterfaceClasses' has a wrong offset!");
static_assert(offsetof(UVerseClass, InterfaceMethodFunctionProperties) == 0x000268, "Member 'UVerseClass::InterfaceMethodFunctionProperties' has a wrong offset!");
static_assert(offsetof(UVerseClass, InitInstanceFunction) == 0x0002B8, "Member 'UVerseClass::InitInstanceFunction' has a wrong offset!");

class UVerseDebugData final : public UObject
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseDebugData">();
	}
	static class UVerseDebugData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseDebugData>();
	}
};
static_assert(alignof(UVerseDebugData) == 0x000008, "Wrong alignment on UVerseDebugData");
static_assert(sizeof(UVerseDebugData) == 0x000038, "Wrong size on UVerseDebugData");

class UVerseDynamicallyTypedValueLibrary final : public UObject
{
public:
	static void ConvertFromDynamicallyTypedValue(int32 RuntimeType, int32 Value);
	static void ConvertToDynamicallyTypedValue(int32 RuntimeType, int32 Value);
	static void Equal(int32 Left, int32 Right);
	static void MakeRuntimeTypeArray(int32 ElementType);
	static void MakeRuntimeTypeChar32();
	static void MakeRuntimeTypeChar8();
	static void MakeRuntimeTypeClass();
	static void MakeRuntimeTypeDynamic();
	static void MakeRuntimeTypeEnum(class FName Name_0);
	static void MakeRuntimeTypeFloat();
	static void MakeRuntimeTypeFunction();
	static void MakeRuntimeTypeInt64();
	static void MakeRuntimeTypeLogic();
	static void MakeRuntimeTypeMap(int32 KeyType, int32 ValueType);
	static void MakeRuntimeTypeObject();
	static void MakeRuntimeTypeOption(int32 ValueType);
	static void MakeRuntimeTypeString();
	static void MakeRuntimeTypeStruct(class UStruct* Struct);
	static void MakeRuntimeTypeTuple(const TArray<int32>& ValueType);
	static void NotEqual(int32 Left, int32 Right);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseDynamicallyTypedValueLibrary">();
	}
	static class UVerseDynamicallyTypedValueLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseDynamicallyTypedValueLibrary>();
	}
};
static_assert(alignof(UVerseDynamicallyTypedValueLibrary) == 0x000008, "Wrong alignment on UVerseDynamicallyTypedValueLibrary");
static_assert(sizeof(UVerseDynamicallyTypedValueLibrary) == 0x000028, "Wrong size on UVerseDynamicallyTypedValueLibrary");

}
