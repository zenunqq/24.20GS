#pragma once

#include "Basic.hpp"

namespace SDK
{

class alignas(0x08) UObject
{
public:
	static inline class TUObjectArrayWrapper      GObjects;

	void**                                        VTable;
	EObjectFlags                                  Flags;
	int32                                         Index;
	class UClass*                                 Class;
	class FName                                   Name;
	uint8                                         Pad_1C[0x4];
	class UObject*                                Outer;

public:
	static class UObject* FindObjectFastImpl(const char* Name, EClassCastFlags RequiredType = EClassCastFlags::None);
	static class UObject* FindObjectImpl(const char* FullName, EClassCastFlags RequiredType = EClassCastFlags::None);

	UEAllocatedString GetFullName() const;
	UEAllocatedString GetName() const;
	bool HasTypeFlag(EClassCastFlags TypeFlags) const;
	bool IsA(EClassCastFlags TypeFlags) const;
	bool IsA(class UClass* TypeClass) const;

	template <typename _Ut>
	__forceinline bool IsA() const
	{
		return IsA(_Ut::StaticClass());
	}

	template <typename _Nt>
	__forceinline _Nt* Cast(UClass* _Cl) const
	{
		if (this)
			return IsA(_Cl) ? (_Nt*)this : nullptr;

		return nullptr;
	}

	template <typename _Nt>
	__forceinline _Nt* Cast() const
	{
		return Cast<_Nt>(_Nt::StaticClass());
	}
	bool IsDefaultObject() const;

	void ExecuteUbergraph(int32 EntryPoint);

public:
	static class UClass* FindClass(const char *ClassFullName)
	{
		return FindObject<class UClass>(ClassFullName, EClassCastFlags::Class);
	}
	static class UClass* FindClassFast(const char *ClassName)
	{
		return FindObjectFast<class UClass>(ClassName, EClassCastFlags::Class);
	}

	template<typename UEType = UObject>
	static UEType* FindObject(const char *Name, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		return static_cast<UEType*>(FindObjectImpl(Name, RequiredType));
	}
	template<typename UEType = UObject>
	static UEType* FindObjectFast(const char *Name, EClassCastFlags RequiredType = EClassCastFlags::None)
	{
		return static_cast<UEType*>(FindObjectFastImpl(Name, RequiredType));
	}

	void ProcessEvent(class UFunction* Function, void* Parms) const
	{
		InSDKUtils::CallGameFunction(InSDKUtils::GetVirtualFunction<void(*)(const UObject*, class UFunction*, void*)>(this, Offsets::ProcessEventIdx), this, Function, Parms);
	}

	void AddToRoot() const
	{
		auto Item = GObjects->GetItemByIndex(Index);

		if (Item)
		{
			Item->Flags |= 1 << 30;
		}
	}
};
static_assert(alignof(UObject) == 0x000008, "Wrong alignment on UObject");
static_assert(sizeof(UObject) == 0x000028, "Wrong size on UObject");
static_assert(offsetof(UObject, VTable) == 0x000000, "Member 'UObject::VTable' has a wrong offset!");
static_assert(offsetof(UObject, Flags) == 0x000008, "Member 'UObject::Flags' has a wrong offset!");
static_assert(offsetof(UObject, Index) == 0x00000C, "Member 'UObject::Index' has a wrong offset!");
static_assert(offsetof(UObject, Class) == 0x000010, "Member 'UObject::Class' has a wrong offset!");
static_assert(offsetof(UObject, Name) == 0x000018, "Member 'UObject::Name' has a wrong offset!");
static_assert(offsetof(UObject, Outer) == 0x000020, "Member 'UObject::Outer' has a wrong offset!");

class UField : public UObject
{
public:
	class UField*                                 Next;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Field">();
	}
	static class UField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UField>();
	}
};
static_assert(alignof(UField) == 0x000008, "Wrong alignment on UField");
static_assert(sizeof(UField) == 0x000030, "Wrong size on UField");
static_assert(offsetof(UField, Next) == 0x000028, "Member 'UField::Next' has a wrong offset!");

class UGCObjectReferencer final : public UObject
{
public:
	uint8                                         Pad_28[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GCObjectReferencer">();
	}
	static class UGCObjectReferencer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCObjectReferencer>();
	}
};
static_assert(alignof(UGCObjectReferencer) == 0x000008, "Wrong alignment on UGCObjectReferencer");
static_assert(sizeof(UGCObjectReferencer) == 0x000040, "Wrong size on UGCObjectReferencer");

class UTextBuffer final : public UObject
{
public:
	uint8                                         Pad_28[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextBuffer">();
	}
	static class UTextBuffer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBuffer>();
	}
};
static_assert(alignof(UTextBuffer) == 0x000008, "Wrong alignment on UTextBuffer");
static_assert(sizeof(UTextBuffer) == 0x000050, "Wrong size on UTextBuffer");

class FStructBaseChain
{
protected:
	FStructBaseChain()
		: StructBaseChainArray(nullptr)
		, NumStructBasesInChainMinusOne(-1)
	{
	}
	~FStructBaseChain()
	{
		delete[] StructBaseChainArray;
	}

	FStructBaseChain(const FStructBaseChain&) = delete;
	FStructBaseChain& operator=(const FStructBaseChain&) = delete;

	__forceinline bool IsChildOfUsingStructArray(const FStructBaseChain* Parent) const
	{
		int32 NumParentStructBasesInChainMinusOne = Parent->NumStructBasesInChainMinusOne;
		return NumParentStructBasesInChainMinusOne <= NumStructBasesInChainMinusOne && StructBaseChainArray[NumParentStructBasesInChainMinusOne] == Parent;
	}

private:
	FStructBaseChain** StructBaseChainArray;
	int32 NumStructBasesInChainMinusOne;

	friend class UStruct;
};

class UStruct : public UField, FStructBaseChain
{
public:
	class UStruct*                                Super;
	class UField*                                 Children;
	class FField*                                 ChildProperties;
	int32                                         Size;
	int32                                         MinAlignemnt;
	uint8                                         Pad_60[0x50];

public:
	bool IsSubclassOf(const UStruct* Base) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Struct">();
	}
	static class UStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStruct>();
	}
};
static_assert(alignof(UStruct) == 0x000008, "Wrong alignment on UStruct");
static_assert(sizeof(UStruct) == 0x0000B0, "Wrong size on UStruct");
static_assert(offsetof(UStruct, Super) == 0x000040, "Member 'UStruct::Super' has a wrong offset!");
static_assert(offsetof(UStruct, Children) == 0x000048, "Member 'UStruct::Children' has a wrong offset!");
static_assert(offsetof(UStruct, ChildProperties) == 0x000050, "Member 'UStruct::ChildProperties' has a wrong offset!");
static_assert(offsetof(UStruct, Size) == 0x000058, "Member 'UStruct::Size' has a wrong offset!");
static_assert(offsetof(UStruct, MinAlignemnt) == 0x00005C, "Member 'UStruct::MinAlignemnt' has a wrong offset!");

class UScriptStruct : public UStruct
{
public:
	uint8                                         Pad_B0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScriptStruct">();
	}
	static class UScriptStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScriptStruct>();
	}
};
static_assert(alignof(UScriptStruct) == 0x000008, "Wrong alignment on UScriptStruct");
static_assert(sizeof(UScriptStruct) == 0x0000C0, "Wrong size on UScriptStruct");

class UPackage final : public UObject
{
public:
	uint8                                         Pad_28[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Package">();
	}
	static class UPackage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPackage>();
	}
};
static_assert(alignof(UPackage) == 0x000008, "Wrong alignment on UPackage");
static_assert(sizeof(UPackage) == 0x000078, "Wrong size on UPackage");

class UClass : public UStruct
{
public:
	uint8                                         Pad_B0[0x28];
	enum class EClassCastFlags                    CastFlags;
	uint8                                         Pad_E0[0x30];
	class UObject*                                DefaultObject;
	uint8                                         Pad_118[0xE8];

public:
	class UFunction* GetFunction(const char *ClassName, const char *FuncName) const;
	class UFunction* FindFunction(const char* FuncName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Class">();
	}
	static class UClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClass>();
	}
};
static_assert(alignof(UClass) == 0x000008, "Wrong alignment on UClass");
static_assert(sizeof(UClass) == 0x000200, "Wrong size on UClass");
static_assert(offsetof(UClass, CastFlags) == 0x0000D8, "Member 'UClass::CastFlags' has a wrong offset!");
static_assert(offsetof(UClass, DefaultObject) == 0x000110, "Member 'UClass::DefaultObject' has a wrong offset!");

class UFunction : public UStruct
{
public:
	using FNativeFuncPtr = void (*)(void* Context, void* TheStack, void* Result);

	uint32                                        FunctionFlags;
	uint8                                         Pad_B8[0x20];
	FNativeFuncPtr                                ExecFunction;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Function">();
	}
	static class UFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFunction>();
	}
};
static_assert(alignof(UFunction) == 0x000008, "Wrong alignment on UFunction");
static_assert(sizeof(UFunction) == 0x0000E0, "Wrong size on UFunction");
static_assert(offsetof(UFunction, FunctionFlags) == 0x0000B0, "Member 'UFunction::FunctionFlags' has a wrong offset!");
static_assert(offsetof(UFunction, ExecFunction) == 0x0000D8, "Member 'UFunction::ExecFunction' has a wrong offset!");

class UDelegateFunction : public UFunction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DelegateFunction">();
	}
	static class UDelegateFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDelegateFunction>();
	}
};
static_assert(alignof(UDelegateFunction) == 0x000008, "Wrong alignment on UDelegateFunction");
static_assert(sizeof(UDelegateFunction) == 0x0000E0, "Wrong size on UDelegateFunction");

class USparseDelegateFunction final : public UDelegateFunction
{
public:
	uint8                                         Pad_E0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SparseDelegateFunction">();
	}
	static class USparseDelegateFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<USparseDelegateFunction>();
	}
};
static_assert(alignof(USparseDelegateFunction) == 0x000008, "Wrong alignment on USparseDelegateFunction");
static_assert(sizeof(USparseDelegateFunction) == 0x0000E8, "Wrong size on USparseDelegateFunction");

class UDynamicClass final : public UClass
{
public:
	uint8                                         Pad_200[0x80];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicClass">();
	}
	static class UDynamicClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicClass>();
	}
};
static_assert(alignof(UDynamicClass) == 0x000008, "Wrong alignment on UDynamicClass");
static_assert(sizeof(UDynamicClass) == 0x000280, "Wrong size on UDynamicClass");

class UPackageMap : public UObject
{
public:
	uint8                                         Pad_28[0xB8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PackageMap">();
	}
	static class UPackageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPackageMap>();
	}
};
static_assert(alignof(UPackageMap) == 0x000008, "Wrong alignment on UPackageMap");
static_assert(sizeof(UPackageMap) == 0x0000E0, "Wrong size on UPackageMap");

class UEnum : public UField
{
public:
	uint8                                         Pad_30[0x10];
	class TArray<class TPair<class FName, int64>> Names;
	uint8                                         Pad_50[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Enum">();
	}
	static class UEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnum>();
	}
};
static_assert(alignof(UEnum) == 0x000008, "Wrong alignment on UEnum");
static_assert(sizeof(UEnum) == 0x000068, "Wrong size on UEnum");
static_assert(offsetof(UEnum, Names) == 0x000040, "Member 'UEnum::Names' has a wrong offset!");

class IInterface : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Interface">();
	}
	static class IInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterface>();
	}
};
static_assert(alignof(IInterface) == 0x000008, "Wrong alignment on IInterface");
static_assert(sizeof(IInterface) == 0x000028, "Wrong size on IInterface");

class ULinkerPlaceholderClass final : public UClass
{
public:
	uint8                                         Pad_200[0x1C0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkerPlaceholderClass">();
	}
	static class ULinkerPlaceholderClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkerPlaceholderClass>();
	}
};
static_assert(alignof(ULinkerPlaceholderClass) == 0x000008, "Wrong alignment on ULinkerPlaceholderClass");
static_assert(sizeof(ULinkerPlaceholderClass) == 0x0003C0, "Wrong size on ULinkerPlaceholderClass");

class ULinkerPlaceholderExportObject final : public UObject
{
public:
	uint8                                         Pad_28[0xD0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkerPlaceholderExportObject">();
	}
	static class ULinkerPlaceholderExportObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkerPlaceholderExportObject>();
	}
};
static_assert(alignof(ULinkerPlaceholderExportObject) == 0x000008, "Wrong alignment on ULinkerPlaceholderExportObject");
static_assert(sizeof(ULinkerPlaceholderExportObject) == 0x0000F8, "Wrong size on ULinkerPlaceholderExportObject");

class ULinkerPlaceholderFunction final : public UFunction
{
public:
	uint8                                         Pad_E0[0x1C0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkerPlaceholderFunction">();
	}
	static class ULinkerPlaceholderFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkerPlaceholderFunction>();
	}
};
static_assert(alignof(ULinkerPlaceholderFunction) == 0x000008, "Wrong alignment on ULinkerPlaceholderFunction");
static_assert(sizeof(ULinkerPlaceholderFunction) == 0x0002A0, "Wrong size on ULinkerPlaceholderFunction");

class UMetaData final : public UObject
{
public:
	uint8                                         Pad_28[0xA0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaData">();
	}
	static class UMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaData>();
	}
};
static_assert(alignof(UMetaData) == 0x000008, "Wrong alignment on UMetaData");
static_assert(sizeof(UMetaData) == 0x0000C8, "Wrong size on UMetaData");

class UObjectRedirector final : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectRedirector">();
	}
	static class UObjectRedirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectRedirector>();
	}
};
static_assert(alignof(UObjectRedirector) == 0x000008, "Wrong alignment on UObjectRedirector");
static_assert(sizeof(UObjectRedirector) == 0x000030, "Wrong size on UObjectRedirector");

class UProperty : public UField
{
public:
	uint8                                         Pad_30[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Property">();
	}
	static class UProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProperty>();
	}
};
static_assert(alignof(UProperty) == 0x000008, "Wrong alignment on UProperty");
static_assert(sizeof(UProperty) == 0x000070, "Wrong size on UProperty");

class UEnumProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnumProperty">();
	}
	static class UEnumProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnumProperty>();
	}
};
static_assert(alignof(UEnumProperty) == 0x000008, "Wrong alignment on UEnumProperty");
static_assert(sizeof(UEnumProperty) == 0x000080, "Wrong size on UEnumProperty");

class UArrayProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArrayProperty">();
	}
	static class UArrayProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArrayProperty>();
	}
};
static_assert(alignof(UArrayProperty) == 0x000008, "Wrong alignment on UArrayProperty");
static_assert(sizeof(UArrayProperty) == 0x000078, "Wrong size on UArrayProperty");

class UObjectPropertyBase : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectPropertyBase">();
	}
	static class UObjectPropertyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectPropertyBase>();
	}
};
static_assert(alignof(UObjectPropertyBase) == 0x000008, "Wrong alignment on UObjectPropertyBase");
static_assert(sizeof(UObjectPropertyBase) == 0x000078, "Wrong size on UObjectPropertyBase");

class UBoolProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoolProperty">();
	}
	static class UBoolProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoolProperty>();
	}
};
static_assert(alignof(UBoolProperty) == 0x000008, "Wrong alignment on UBoolProperty");
static_assert(sizeof(UBoolProperty) == 0x000078, "Wrong size on UBoolProperty");

class UNumericProperty : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NumericProperty">();
	}
	static class UNumericProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNumericProperty>();
	}
};
static_assert(alignof(UNumericProperty) == 0x000008, "Wrong alignment on UNumericProperty");
static_assert(sizeof(UNumericProperty) == 0x000070, "Wrong size on UNumericProperty");

class UByteProperty final : public UNumericProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ByteProperty">();
	}
	static class UByteProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UByteProperty>();
	}
};
static_assert(alignof(UByteProperty) == 0x000008, "Wrong alignment on UByteProperty");
static_assert(sizeof(UByteProperty) == 0x000078, "Wrong size on UByteProperty");

class UObjectProperty : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectProperty">();
	}
	static class UObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectProperty>();
	}
};
static_assert(alignof(UObjectProperty) == 0x000008, "Wrong alignment on UObjectProperty");
static_assert(sizeof(UObjectProperty) == 0x000078, "Wrong size on UObjectProperty");

class UClassProperty final : public UObjectProperty
{
public:
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassProperty">();
	}
	static class UClassProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassProperty>();
	}
};
static_assert(alignof(UClassProperty) == 0x000008, "Wrong alignment on UClassProperty");
static_assert(sizeof(UClassProperty) == 0x000080, "Wrong size on UClassProperty");

class UDelegateProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DelegateProperty">();
	}
	static class UDelegateProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDelegateProperty>();
	}
};
static_assert(alignof(UDelegateProperty) == 0x000008, "Wrong alignment on UDelegateProperty");
static_assert(sizeof(UDelegateProperty) == 0x000078, "Wrong size on UDelegateProperty");

class UDoubleProperty final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DoubleProperty">();
	}
	static class UDoubleProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoubleProperty>();
	}
};
static_assert(alignof(UDoubleProperty) == 0x000008, "Wrong alignment on UDoubleProperty");
static_assert(sizeof(UDoubleProperty) == 0x000070, "Wrong size on UDoubleProperty");

class UFloatProperty final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FloatProperty">();
	}
	static class UFloatProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloatProperty>();
	}
};
static_assert(alignof(UFloatProperty) == 0x000008, "Wrong alignment on UFloatProperty");
static_assert(sizeof(UFloatProperty) == 0x000070, "Wrong size on UFloatProperty");

class UIntProperty final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IntProperty">();
	}
	static class UIntProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntProperty>();
	}
};
static_assert(alignof(UIntProperty) == 0x000008, "Wrong alignment on UIntProperty");
static_assert(sizeof(UIntProperty) == 0x000070, "Wrong size on UIntProperty");

class UInt8Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Int8Property">();
	}
	static class UInt8Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInt8Property>();
	}
};
static_assert(alignof(UInt8Property) == 0x000008, "Wrong alignment on UInt8Property");
static_assert(sizeof(UInt8Property) == 0x000070, "Wrong size on UInt8Property");

class UInt16Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Int16Property">();
	}
	static class UInt16Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInt16Property>();
	}
};
static_assert(alignof(UInt16Property) == 0x000008, "Wrong alignment on UInt16Property");
static_assert(sizeof(UInt16Property) == 0x000070, "Wrong size on UInt16Property");

class UInt64Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Int64Property">();
	}
	static class UInt64Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInt64Property>();
	}
};
static_assert(alignof(UInt64Property) == 0x000008, "Wrong alignment on UInt64Property");
static_assert(sizeof(UInt64Property) == 0x000070, "Wrong size on UInt64Property");

class UInterfaceProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterfaceProperty">();
	}
	static class UInterfaceProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterfaceProperty>();
	}
};
static_assert(alignof(UInterfaceProperty) == 0x000008, "Wrong alignment on UInterfaceProperty");
static_assert(sizeof(UInterfaceProperty) == 0x000078, "Wrong size on UInterfaceProperty");

class ULazyObjectProperty final : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LazyObjectProperty">();
	}
	static class ULazyObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULazyObjectProperty>();
	}
};
static_assert(alignof(ULazyObjectProperty) == 0x000008, "Wrong alignment on ULazyObjectProperty");
static_assert(sizeof(ULazyObjectProperty) == 0x000078, "Wrong size on ULazyObjectProperty");

class UMapProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MapProperty">();
	}
	static class UMapProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapProperty>();
	}
};
static_assert(alignof(UMapProperty) == 0x000008, "Wrong alignment on UMapProperty");
static_assert(sizeof(UMapProperty) == 0x000098, "Wrong size on UMapProperty");

class UMulticastDelegateProperty : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MulticastDelegateProperty">();
	}
	static class UMulticastDelegateProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulticastDelegateProperty>();
	}
};
static_assert(alignof(UMulticastDelegateProperty) == 0x000008, "Wrong alignment on UMulticastDelegateProperty");
static_assert(sizeof(UMulticastDelegateProperty) == 0x000078, "Wrong size on UMulticastDelegateProperty");

class UMulticastInlineDelegateProperty final : public UMulticastDelegateProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MulticastInlineDelegateProperty">();
	}
	static class UMulticastInlineDelegateProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulticastInlineDelegateProperty>();
	}
};
static_assert(alignof(UMulticastInlineDelegateProperty) == 0x000008, "Wrong alignment on UMulticastInlineDelegateProperty");
static_assert(sizeof(UMulticastInlineDelegateProperty) == 0x000078, "Wrong size on UMulticastInlineDelegateProperty");

class UMulticastSparseDelegateProperty final : public UMulticastDelegateProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MulticastSparseDelegateProperty">();
	}
	static class UMulticastSparseDelegateProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulticastSparseDelegateProperty>();
	}
};
static_assert(alignof(UMulticastSparseDelegateProperty) == 0x000008, "Wrong alignment on UMulticastSparseDelegateProperty");
static_assert(sizeof(UMulticastSparseDelegateProperty) == 0x000078, "Wrong size on UMulticastSparseDelegateProperty");

class UNameProperty final : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NameProperty">();
	}
	static class UNameProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNameProperty>();
	}
};
static_assert(alignof(UNameProperty) == 0x000008, "Wrong alignment on UNameProperty");
static_assert(sizeof(UNameProperty) == 0x000070, "Wrong size on UNameProperty");

class USetProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SetProperty">();
	}
	static class USetProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetProperty>();
	}
};
static_assert(alignof(USetProperty) == 0x000008, "Wrong alignment on USetProperty");
static_assert(sizeof(USetProperty) == 0x000090, "Wrong size on USetProperty");

class USoftObjectProperty : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoftObjectProperty">();
	}
	static class USoftObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoftObjectProperty>();
	}
};
static_assert(alignof(USoftObjectProperty) == 0x000008, "Wrong alignment on USoftObjectProperty");
static_assert(sizeof(USoftObjectProperty) == 0x000078, "Wrong size on USoftObjectProperty");

class USoftClassProperty final : public USoftObjectProperty
{
public:
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoftClassProperty">();
	}
	static class USoftClassProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoftClassProperty>();
	}
};
static_assert(alignof(USoftClassProperty) == 0x000008, "Wrong alignment on USoftClassProperty");
static_assert(sizeof(USoftClassProperty) == 0x000080, "Wrong size on USoftClassProperty");

class UStrProperty final : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StrProperty">();
	}
	static class UStrProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStrProperty>();
	}
};
static_assert(alignof(UStrProperty) == 0x000008, "Wrong alignment on UStrProperty");
static_assert(sizeof(UStrProperty) == 0x000070, "Wrong size on UStrProperty");

class UStructProperty final : public UProperty
{
public:
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StructProperty">();
	}
	static class UStructProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStructProperty>();
	}
};
static_assert(alignof(UStructProperty) == 0x000008, "Wrong alignment on UStructProperty");
static_assert(sizeof(UStructProperty) == 0x000078, "Wrong size on UStructProperty");

class UUInt16Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UInt16Property">();
	}
	static class UUInt16Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUInt16Property>();
	}
};
static_assert(alignof(UUInt16Property) == 0x000008, "Wrong alignment on UUInt16Property");
static_assert(sizeof(UUInt16Property) == 0x000070, "Wrong size on UUInt16Property");

class UUInt32Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UInt32Property">();
	}
	static class UUInt32Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUInt32Property>();
	}
};
static_assert(alignof(UUInt32Property) == 0x000008, "Wrong alignment on UUInt32Property");
static_assert(sizeof(UUInt32Property) == 0x000070, "Wrong size on UUInt32Property");

class UUInt64Property final : public UNumericProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UInt64Property">();
	}
	static class UUInt64Property* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUInt64Property>();
	}
};
static_assert(alignof(UUInt64Property) == 0x000008, "Wrong alignment on UUInt64Property");
static_assert(sizeof(UUInt64Property) == 0x000070, "Wrong size on UUInt64Property");

class UWeakObjectProperty final : public UObjectPropertyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeakObjectProperty">();
	}
	static class UWeakObjectProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeakObjectProperty>();
	}
};
static_assert(alignof(UWeakObjectProperty) == 0x000008, "Wrong alignment on UWeakObjectProperty");
static_assert(sizeof(UWeakObjectProperty) == 0x000078, "Wrong size on UWeakObjectProperty");

class UTextProperty final : public UProperty
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextProperty">();
	}
	static class UTextProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextProperty>();
	}
};
static_assert(alignof(UTextProperty) == 0x000008, "Wrong alignment on UTextProperty");
static_assert(sizeof(UTextProperty) == 0x000070, "Wrong size on UTextProperty");

class UPropertyWrapper : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyWrapper">();
	}
	static class UPropertyWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyWrapper>();
	}
};
static_assert(alignof(UPropertyWrapper) == 0x000008, "Wrong alignment on UPropertyWrapper");
static_assert(sizeof(UPropertyWrapper) == 0x000030, "Wrong size on UPropertyWrapper");

class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MulticastDelegatePropertyWrapper">();
	}
	static class UMulticastDelegatePropertyWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulticastDelegatePropertyWrapper>();
	}
};
static_assert(alignof(UMulticastDelegatePropertyWrapper) == 0x000008, "Wrong alignment on UMulticastDelegatePropertyWrapper");
static_assert(sizeof(UMulticastDelegatePropertyWrapper) == 0x000030, "Wrong size on UMulticastDelegatePropertyWrapper");

class UMulticastInlineDelegatePropertyWrapper final : public UMulticastDelegatePropertyWrapper
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MulticastInlineDelegatePropertyWrapper">();
	}
	static class UMulticastInlineDelegatePropertyWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulticastInlineDelegatePropertyWrapper>();
	}
};
static_assert(alignof(UMulticastInlineDelegatePropertyWrapper) == 0x000008, "Wrong alignment on UMulticastInlineDelegatePropertyWrapper");
static_assert(sizeof(UMulticastInlineDelegatePropertyWrapper) == 0x000030, "Wrong size on UMulticastInlineDelegatePropertyWrapper");

}
