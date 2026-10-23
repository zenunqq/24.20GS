#pragma once

#include "Basic.hpp"

#include "PropertyPath_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UPropertyPathTestObject final : public UObject
{
public:
	bool                                          Bool;
	EPropertyPathTestEnum                         EnumOne;
	EPropertyPathTestEnum                         EnumTwo;
	EPropertyPathTestEnum                         EnumThree;
	EPropertyPathTestEnum                         EnumFour;
	uint8                                         Pad_2D[0x3];
	int32                                         Integer;
	uint8                                         Pad_34[0x4];
	class FString                                 String;
	float                                         float_0;
	uint8                                         Pad_4C[0x4];
	struct FPropertyPathTestStruct                Struct;
	struct FPropertyPathTestStruct                StructRef;
	struct FPropertyPathTestStruct                StructConstRef;
	class UPropertyPathTestObject*                InnerObject;
	uint8                                         Pad_148[0x8];

public:
	void SetFloat(float InFloat);
	void SetStruct(const struct FPropertyPathTestStruct& InStruct);
	void SetStructConstRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStructRef(const struct FPropertyPathTestStruct& InStruct);

	float GetFloat() const;
	struct FPropertyPathTestStruct GetStruct() const;
	const struct FPropertyPathTestStruct GetStructConstRef() const;
	struct FPropertyPathTestStruct GetStructRef() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyPathTestObject">();
	}
	static class UPropertyPathTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyPathTestObject>();
	}
};
static_assert(alignof(UPropertyPathTestObject) == 0x000008, "Wrong alignment on UPropertyPathTestObject");
static_assert(sizeof(UPropertyPathTestObject) == 0x000150, "Wrong size on UPropertyPathTestObject");
static_assert(offsetof(UPropertyPathTestObject, Bool) == 0x000028, "Member 'UPropertyPathTestObject::Bool' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumOne) == 0x000029, "Member 'UPropertyPathTestObject::EnumOne' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumTwo) == 0x00002A, "Member 'UPropertyPathTestObject::EnumTwo' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumThree) == 0x00002B, "Member 'UPropertyPathTestObject::EnumThree' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumFour) == 0x00002C, "Member 'UPropertyPathTestObject::EnumFour' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, Integer) == 0x000030, "Member 'UPropertyPathTestObject::Integer' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, String) == 0x000038, "Member 'UPropertyPathTestObject::String' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, float_0) == 0x000048, "Member 'UPropertyPathTestObject::float_0' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, Struct) == 0x000050, "Member 'UPropertyPathTestObject::Struct' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, StructRef) == 0x0000A0, "Member 'UPropertyPathTestObject::StructRef' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, StructConstRef) == 0x0000F0, "Member 'UPropertyPathTestObject::StructConstRef' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, InnerObject) == 0x000140, "Member 'UPropertyPathTestObject::InnerObject' has a wrong offset!");

}
