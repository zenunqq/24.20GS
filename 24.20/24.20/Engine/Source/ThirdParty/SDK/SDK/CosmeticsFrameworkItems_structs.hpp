#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FCosmeticPropertyBase
{
public:
	struct FGameplayTag                           PropertyTag;
};
static_assert(alignof(FCosmeticPropertyBase) == 0x000004, "Wrong alignment on FCosmeticPropertyBase");
static_assert(sizeof(FCosmeticPropertyBase) == 0x000004, "Wrong size on FCosmeticPropertyBase");
static_assert(offsetof(FCosmeticPropertyBase, PropertyTag) == 0x000000, "Member 'FCosmeticPropertyBase::PropertyTag' has a wrong offset!");

struct FCosmeticProperty_Vector final : public FCosmeticPropertyBase
{
public:
	uint8                                         Pad_4[0x4];
	struct FVector                                Value;
};
static_assert(alignof(FCosmeticProperty_Vector) == 0x000008, "Wrong alignment on FCosmeticProperty_Vector");
static_assert(sizeof(FCosmeticProperty_Vector) == 0x000020, "Wrong size on FCosmeticProperty_Vector");
static_assert(offsetof(FCosmeticProperty_Vector, Value) == 0x000008, "Member 'FCosmeticProperty_Vector::Value' has a wrong offset!");

}
