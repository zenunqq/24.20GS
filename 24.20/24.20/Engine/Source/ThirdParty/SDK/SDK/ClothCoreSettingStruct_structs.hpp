#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FClothCoreSettingStruct final
{
public:
	struct FVector2D                              EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171;
	struct FVector2D                              BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094;
	struct FVector2D                              AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510;
	struct FVector2D                              TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2;
	float                                         CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7;
	float                                         FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F;
	float                                         SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392;
	float                                         DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101;
	float                                         LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5;
	uint8                                         Pad_54[0x4];
	struct FVector2D                              AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423;
	struct FVector2D                              AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8;
	int32                                         NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A;
	int32                                         NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261;
};
static_assert(alignof(FClothCoreSettingStruct) == 0x000008, "Wrong alignment on FClothCoreSettingStruct");
static_assert(sizeof(FClothCoreSettingStruct) == 0x000080, "Wrong size on FClothCoreSettingStruct");
static_assert(offsetof(FClothCoreSettingStruct, EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171) == 0x000000, "Member 'FClothCoreSettingStruct::EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094) == 0x000010, "Member 'FClothCoreSettingStruct::BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510) == 0x000020, "Member 'FClothCoreSettingStruct::AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2) == 0x000030, "Member 'FClothCoreSettingStruct::TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7) == 0x000040, "Member 'FClothCoreSettingStruct::CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F) == 0x000044, "Member 'FClothCoreSettingStruct::FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392) == 0x000048, "Member 'FClothCoreSettingStruct::SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101) == 0x00004C, "Member 'FClothCoreSettingStruct::DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5) == 0x000050, "Member 'FClothCoreSettingStruct::LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423) == 0x000058, "Member 'FClothCoreSettingStruct::AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8) == 0x000068, "Member 'FClothCoreSettingStruct::AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A) == 0x000078, "Member 'FClothCoreSettingStruct::NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A' has a wrong offset!");
static_assert(offsetof(FClothCoreSettingStruct, NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261) == 0x00007C, "Member 'FClothCoreSettingStruct::NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261' has a wrong offset!");

}
