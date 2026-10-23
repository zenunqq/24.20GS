#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FCollectionInfo final
{
public:
	class FString                                 Name;
	TArray<class FString>                         Includes;
	TArray<class FString>                         Excludes;
	float                                         BudgetMB;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FCollectionInfo) == 0x000008, "Wrong alignment on FCollectionInfo");
static_assert(sizeof(FCollectionInfo) == 0x000038, "Wrong size on FCollectionInfo");
static_assert(offsetof(FCollectionInfo, Name) == 0x000000, "Member 'FCollectionInfo::Name' has a wrong offset!");
static_assert(offsetof(FCollectionInfo, Includes) == 0x000010, "Member 'FCollectionInfo::Includes' has a wrong offset!");
static_assert(offsetof(FCollectionInfo, Excludes) == 0x000020, "Member 'FCollectionInfo::Excludes' has a wrong offset!");
static_assert(offsetof(FCollectionInfo, BudgetMB) == 0x000030, "Member 'FCollectionInfo::BudgetMB' has a wrong offset!");

}
