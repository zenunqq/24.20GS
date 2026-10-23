#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FWindGustLocalSettingStruct final
{
public:
	float                                         ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171;
	float                                         TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D;
	float                                         GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A;
	float                                         GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406;
	float                                         FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618;
};
static_assert(alignof(FWindGustLocalSettingStruct) == 0x000004, "Wrong alignment on FWindGustLocalSettingStruct");
static_assert(sizeof(FWindGustLocalSettingStruct) == 0x000014, "Wrong size on FWindGustLocalSettingStruct");
static_assert(offsetof(FWindGustLocalSettingStruct, ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171) == 0x000000, "Member 'FWindGustLocalSettingStruct::ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171' has a wrong offset!");
static_assert(offsetof(FWindGustLocalSettingStruct, TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D) == 0x000004, "Member 'FWindGustLocalSettingStruct::TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D' has a wrong offset!");
static_assert(offsetof(FWindGustLocalSettingStruct, GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A) == 0x000008, "Member 'FWindGustLocalSettingStruct::GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A' has a wrong offset!");
static_assert(offsetof(FWindGustLocalSettingStruct, GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406) == 0x00000C, "Member 'FWindGustLocalSettingStruct::GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406' has a wrong offset!");
static_assert(offsetof(FWindGustLocalSettingStruct, FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618) == 0x000010, "Member 'FWindGustLocalSettingStruct::FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618' has a wrong offset!");

}
