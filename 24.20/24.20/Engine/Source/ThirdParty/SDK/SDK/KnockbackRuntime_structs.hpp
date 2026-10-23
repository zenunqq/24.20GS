#pragma once

#include "Basic.hpp"

#include "NetCore_structs.hpp"

namespace SDK
{

struct FKnockbackMutatorData final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class APawn*                                  Pawn;
	float                                         KnockbackMultiplier;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FKnockbackMutatorData) == 0x000008, "Wrong alignment on FKnockbackMutatorData");
static_assert(sizeof(FKnockbackMutatorData) == 0x000020, "Wrong size on FKnockbackMutatorData");
static_assert(offsetof(FKnockbackMutatorData, Pawn) == 0x000010, "Member 'FKnockbackMutatorData::Pawn' has a wrong offset!");
static_assert(offsetof(FKnockbackMutatorData, KnockbackMultiplier) == 0x000018, "Member 'FKnockbackMutatorData::KnockbackMultiplier' has a wrong offset!");

struct FKnockbackMutatorDataArray final : public FFastArraySerializer
{
public:
	TArray<struct FKnockbackMutatorData>          Entries;
	uint8                                         Pad_118[0x8];
};
static_assert(alignof(FKnockbackMutatorDataArray) == 0x000008, "Wrong alignment on FKnockbackMutatorDataArray");
static_assert(sizeof(FKnockbackMutatorDataArray) == 0x000120, "Wrong size on FKnockbackMutatorDataArray");
static_assert(offsetof(FKnockbackMutatorDataArray, Entries) == 0x000108, "Member 'FKnockbackMutatorDataArray::Entries' has a wrong offset!");

}
