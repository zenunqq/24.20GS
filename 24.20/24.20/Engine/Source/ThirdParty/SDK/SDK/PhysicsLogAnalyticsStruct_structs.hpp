#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FPhysicsLogAnalyticsStruct final
{
public:
	class FString                                 InstanceName_29_E13A3CF84B9151E7004D9B8C51FD00B9;
	class FString                                 FelledBy_2_076924F44337FDE90F8B5C9C7645CDF2;
	struct FVector                                FelledAtLocation_7_87D469DB42BC3085780226AC3B154AD1;
	float                                         FelledAtMatchTime_17_701A35DB42F8DA247CDC50AC58CCCD4E;
	uint8                                         Pad_3C[0x4];
	struct FVector                                DestroyedAtLocation_33_93747681485FCEB2F9D50B8F2C9BA72B;
	float                                         DestroyedAtMatchTime_31_1DCF4002426A45C86050D4B13C85632F;
	float                                         DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0;
	float                                         DamageToStructures_22_636FABDE409E1A51BAF808863B05D213;
	float                                         DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C;
	float                                         DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D;
};
static_assert(alignof(FPhysicsLogAnalyticsStruct) == 0x000008, "Wrong alignment on FPhysicsLogAnalyticsStruct");
static_assert(sizeof(FPhysicsLogAnalyticsStruct) == 0x000070, "Wrong size on FPhysicsLogAnalyticsStruct");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, InstanceName_29_E13A3CF84B9151E7004D9B8C51FD00B9) == 0x000000, "Member 'FPhysicsLogAnalyticsStruct::InstanceName_29_E13A3CF84B9151E7004D9B8C51FD00B9' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, FelledBy_2_076924F44337FDE90F8B5C9C7645CDF2) == 0x000010, "Member 'FPhysicsLogAnalyticsStruct::FelledBy_2_076924F44337FDE90F8B5C9C7645CDF2' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, FelledAtLocation_7_87D469DB42BC3085780226AC3B154AD1) == 0x000020, "Member 'FPhysicsLogAnalyticsStruct::FelledAtLocation_7_87D469DB42BC3085780226AC3B154AD1' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, FelledAtMatchTime_17_701A35DB42F8DA247CDC50AC58CCCD4E) == 0x000038, "Member 'FPhysicsLogAnalyticsStruct::FelledAtMatchTime_17_701A35DB42F8DA247CDC50AC58CCCD4E' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, DestroyedAtLocation_33_93747681485FCEB2F9D50B8F2C9BA72B) == 0x000040, "Member 'FPhysicsLogAnalyticsStruct::DestroyedAtLocation_33_93747681485FCEB2F9D50B8F2C9BA72B' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, DestroyedAtMatchTime_31_1DCF4002426A45C86050D4B13C85632F) == 0x000058, "Member 'FPhysicsLogAnalyticsStruct::DestroyedAtMatchTime_31_1DCF4002426A45C86050D4B13C85632F' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0) == 0x00005C, "Member 'FPhysicsLogAnalyticsStruct::DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, DamageToStructures_22_636FABDE409E1A51BAF808863B05D213) == 0x000060, "Member 'FPhysicsLogAnalyticsStruct::DamageToStructures_22_636FABDE409E1A51BAF808863B05D213' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C) == 0x000064, "Member 'FPhysicsLogAnalyticsStruct::DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C' has a wrong offset!");
static_assert(offsetof(FPhysicsLogAnalyticsStruct, DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D) == 0x000068, "Member 'FPhysicsLogAnalyticsStruct::DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D' has a wrong offset!");

}
