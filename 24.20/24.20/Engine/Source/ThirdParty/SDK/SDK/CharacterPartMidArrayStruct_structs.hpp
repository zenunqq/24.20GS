#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK
{

struct FCharacterPartMidArrayStruct final
{
public:
	EFortCustomPartType                           PartType_5_EBDFFF5740627902CC51DD966B8EE419;
	uint8                                         Pad_1[0x7];
	TArray<class UMaterialInstanceDynamic*>       MID_7_A0D19AC74319389A5DF2019166F976F0;
};
static_assert(alignof(FCharacterPartMidArrayStruct) == 0x000008, "Wrong alignment on FCharacterPartMidArrayStruct");
static_assert(sizeof(FCharacterPartMidArrayStruct) == 0x000018, "Wrong size on FCharacterPartMidArrayStruct");
static_assert(offsetof(FCharacterPartMidArrayStruct, PartType_5_EBDFFF5740627902CC51DD966B8EE419) == 0x000000, "Member 'FCharacterPartMidArrayStruct::PartType_5_EBDFFF5740627902CC51DD966B8EE419' has a wrong offset!");
static_assert(offsetof(FCharacterPartMidArrayStruct, MID_7_A0D19AC74319389A5DF2019166F976F0) == 0x000008, "Member 'FCharacterPartMidArrayStruct::MID_7_A0D19AC74319389A5DF2019166F976F0' has a wrong offset!");

}
