#pragma once

#include "Basic.hpp"

#include "PropertyPath_structs.hpp"

namespace SDK::Params
{

struct PropertyPathTestObject_SetFloat final
{
public:
	float                                         InFloat;
};
static_assert(alignof(PropertyPathTestObject_SetFloat) == 0x000004, "Wrong alignment on PropertyPathTestObject_SetFloat");
static_assert(sizeof(PropertyPathTestObject_SetFloat) == 0x000004, "Wrong size on PropertyPathTestObject_SetFloat");
static_assert(offsetof(PropertyPathTestObject_SetFloat, InFloat) == 0x000000, "Member 'PropertyPathTestObject_SetFloat::InFloat' has a wrong offset!");

struct PropertyPathTestObject_SetStruct final
{
public:
	struct FPropertyPathTestStruct                InStruct;
};
static_assert(alignof(PropertyPathTestObject_SetStruct) == 0x000008, "Wrong alignment on PropertyPathTestObject_SetStruct");
static_assert(sizeof(PropertyPathTestObject_SetStruct) == 0x000050, "Wrong size on PropertyPathTestObject_SetStruct");
static_assert(offsetof(PropertyPathTestObject_SetStruct, InStruct) == 0x000000, "Member 'PropertyPathTestObject_SetStruct::InStruct' has a wrong offset!");

struct PropertyPathTestObject_SetStructConstRef final
{
public:
	struct FPropertyPathTestStruct                InStruct;
};
static_assert(alignof(PropertyPathTestObject_SetStructConstRef) == 0x000008, "Wrong alignment on PropertyPathTestObject_SetStructConstRef");
static_assert(sizeof(PropertyPathTestObject_SetStructConstRef) == 0x000050, "Wrong size on PropertyPathTestObject_SetStructConstRef");
static_assert(offsetof(PropertyPathTestObject_SetStructConstRef, InStruct) == 0x000000, "Member 'PropertyPathTestObject_SetStructConstRef::InStruct' has a wrong offset!");

struct PropertyPathTestObject_SetStructRef final
{
public:
	struct FPropertyPathTestStruct                InStruct;
};
static_assert(alignof(PropertyPathTestObject_SetStructRef) == 0x000008, "Wrong alignment on PropertyPathTestObject_SetStructRef");
static_assert(sizeof(PropertyPathTestObject_SetStructRef) == 0x000050, "Wrong size on PropertyPathTestObject_SetStructRef");
static_assert(offsetof(PropertyPathTestObject_SetStructRef, InStruct) == 0x000000, "Member 'PropertyPathTestObject_SetStructRef::InStruct' has a wrong offset!");

struct PropertyPathTestObject_GetFloat final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(PropertyPathTestObject_GetFloat) == 0x000004, "Wrong alignment on PropertyPathTestObject_GetFloat");
static_assert(sizeof(PropertyPathTestObject_GetFloat) == 0x000004, "Wrong size on PropertyPathTestObject_GetFloat");
static_assert(offsetof(PropertyPathTestObject_GetFloat, ReturnValue) == 0x000000, "Member 'PropertyPathTestObject_GetFloat::ReturnValue' has a wrong offset!");

struct PropertyPathTestObject_GetStruct final
{
public:
	struct FPropertyPathTestStruct                ReturnValue;
};
static_assert(alignof(PropertyPathTestObject_GetStruct) == 0x000008, "Wrong alignment on PropertyPathTestObject_GetStruct");
static_assert(sizeof(PropertyPathTestObject_GetStruct) == 0x000050, "Wrong size on PropertyPathTestObject_GetStruct");
static_assert(offsetof(PropertyPathTestObject_GetStruct, ReturnValue) == 0x000000, "Member 'PropertyPathTestObject_GetStruct::ReturnValue' has a wrong offset!");

struct PropertyPathTestObject_GetStructConstRef final
{
public:
	struct FPropertyPathTestStruct                ReturnValue;
};
static_assert(alignof(PropertyPathTestObject_GetStructConstRef) == 0x000008, "Wrong alignment on PropertyPathTestObject_GetStructConstRef");
static_assert(sizeof(PropertyPathTestObject_GetStructConstRef) == 0x000050, "Wrong size on PropertyPathTestObject_GetStructConstRef");
static_assert(offsetof(PropertyPathTestObject_GetStructConstRef, ReturnValue) == 0x000000, "Member 'PropertyPathTestObject_GetStructConstRef::ReturnValue' has a wrong offset!");

struct PropertyPathTestObject_GetStructRef final
{
public:
	struct FPropertyPathTestStruct                ReturnValue;
};
static_assert(alignof(PropertyPathTestObject_GetStructRef) == 0x000008, "Wrong alignment on PropertyPathTestObject_GetStructRef");
static_assert(sizeof(PropertyPathTestObject_GetStructRef) == 0x000050, "Wrong size on PropertyPathTestObject_GetStructRef");
static_assert(offsetof(PropertyPathTestObject_GetStructRef, ReturnValue) == 0x000000, "Member 'PropertyPathTestObject_GetStructRef::ReturnValue' has a wrong offset!");

}
