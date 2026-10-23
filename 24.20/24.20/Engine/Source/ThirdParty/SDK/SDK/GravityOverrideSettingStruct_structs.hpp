#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FGravityOverrideSettingStruct final
{
public:
	struct FVector                                WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD;
	struct FVector                                WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8;
	struct FVector                                WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B;
	struct FVector                                GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E;
	class FName                                   JointName_27_C74F3B2245EA319DE82A629FF3C17CCA;
};
static_assert(alignof(FGravityOverrideSettingStruct) == 0x000008, "Wrong alignment on FGravityOverrideSettingStruct");
static_assert(sizeof(FGravityOverrideSettingStruct) == 0x000068, "Wrong size on FGravityOverrideSettingStruct");
static_assert(offsetof(FGravityOverrideSettingStruct, WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD) == 0x000000, "Member 'FGravityOverrideSettingStruct::WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD' has a wrong offset!");
static_assert(offsetof(FGravityOverrideSettingStruct, WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8) == 0x000018, "Member 'FGravityOverrideSettingStruct::WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8' has a wrong offset!");
static_assert(offsetof(FGravityOverrideSettingStruct, WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B) == 0x000030, "Member 'FGravityOverrideSettingStruct::WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B' has a wrong offset!");
static_assert(offsetof(FGravityOverrideSettingStruct, GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E) == 0x000048, "Member 'FGravityOverrideSettingStruct::GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E' has a wrong offset!");
static_assert(offsetof(FGravityOverrideSettingStruct, JointName_27_C74F3B2245EA319DE82A629FF3C17CCA) == 0x000060, "Member 'FGravityOverrideSettingStruct::JointName_27_C74F3B2245EA319DE82A629FF3C17CCA' has a wrong offset!");

}
