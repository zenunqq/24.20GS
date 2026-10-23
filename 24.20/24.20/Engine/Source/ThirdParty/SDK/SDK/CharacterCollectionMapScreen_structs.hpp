#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FNPCServiceData final
{
public:
	class FText                                   Name;
	TSoftObjectPtr<class UObject>                 Icon;
};
static_assert(alignof(FNPCServiceData) == 0x000008, "Wrong alignment on FNPCServiceData");
static_assert(sizeof(FNPCServiceData) == 0x000040, "Wrong size on FNPCServiceData");
static_assert(offsetof(FNPCServiceData, Name) == 0x000000, "Member 'FNPCServiceData::Name' has a wrong offset!");
static_assert(offsetof(FNPCServiceData, Icon) == 0x000018, "Member 'FNPCServiceData::Icon' has a wrong offset!");

struct FNPCServiceWidgetData final
{
public:
	struct FNPCServiceData                        ServiceData;
	class UFortResourceItemDefinition*            CostResource;
	int32                                         CostAmount;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FNPCServiceWidgetData) == 0x000008, "Wrong alignment on FNPCServiceWidgetData");
static_assert(sizeof(FNPCServiceWidgetData) == 0x000050, "Wrong size on FNPCServiceWidgetData");
static_assert(offsetof(FNPCServiceWidgetData, ServiceData) == 0x000000, "Member 'FNPCServiceWidgetData::ServiceData' has a wrong offset!");
static_assert(offsetof(FNPCServiceWidgetData, CostResource) == 0x000040, "Member 'FNPCServiceWidgetData::CostResource' has a wrong offset!");
static_assert(offsetof(FNPCServiceWidgetData, CostAmount) == 0x000048, "Member 'FNPCServiceWidgetData::CostAmount' has a wrong offset!");

struct FNPCServiceDataRow final : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  ServiceTags;
	class FName                                   PricingKey;
	uint8                                         Pad_2C[0x4];
	struct FNPCServiceData                        ServiceData;
};
static_assert(alignof(FNPCServiceDataRow) == 0x000008, "Wrong alignment on FNPCServiceDataRow");
static_assert(sizeof(FNPCServiceDataRow) == 0x000070, "Wrong size on FNPCServiceDataRow");
static_assert(offsetof(FNPCServiceDataRow, ServiceTags) == 0x000008, "Member 'FNPCServiceDataRow::ServiceTags' has a wrong offset!");
static_assert(offsetof(FNPCServiceDataRow, PricingKey) == 0x000028, "Member 'FNPCServiceDataRow::PricingKey' has a wrong offset!");
static_assert(offsetof(FNPCServiceDataRow, ServiceData) == 0x000030, "Member 'FNPCServiceDataRow::ServiceData' has a wrong offset!");

struct FNPCSpecializationDataRow final : public FTableRowBase
{
public:
	class FName                                   PricingKey;
	uint8                                         Pad_C[0x4];
	struct FNPCServiceData                        ServiceData;
};
static_assert(alignof(FNPCSpecializationDataRow) == 0x000008, "Wrong alignment on FNPCSpecializationDataRow");
static_assert(sizeof(FNPCSpecializationDataRow) == 0x000050, "Wrong size on FNPCSpecializationDataRow");
static_assert(offsetof(FNPCSpecializationDataRow, PricingKey) == 0x000008, "Member 'FNPCSpecializationDataRow::PricingKey' has a wrong offset!");
static_assert(offsetof(FNPCSpecializationDataRow, ServiceData) == 0x000010, "Member 'FNPCSpecializationDataRow::ServiceData' has a wrong offset!");

struct FCollectionScreenServiceData final
{
public:
	class UDataTable*                             ServiceDataTable;
	class UDataTable*                             SpecializationDataTable;
	struct FGameplayTag                           SeasonDataTableServicesTag;
	struct FGameplayTag                           SeasonDataTableSalesTag;
	struct FGameplayTag                           NpcPricingKeyRemapsTag;
	uint8                                         Pad_1C[0x4];
	class UCurveTable*                            ItemCostTable;
	class UCurveTable*                            ServiceCostTable;
	struct FGameplayTagContainer                  AllowedServiceTagsForIcon;
	struct FGameplayTag                           SpecializationTagRoot;
	uint8                                         Pad_54[0x4];
	class FText                                   ItemNameAndCountFmt;
};
static_assert(alignof(FCollectionScreenServiceData) == 0x000008, "Wrong alignment on FCollectionScreenServiceData");
static_assert(sizeof(FCollectionScreenServiceData) == 0x000070, "Wrong size on FCollectionScreenServiceData");
static_assert(offsetof(FCollectionScreenServiceData, ServiceDataTable) == 0x000000, "Member 'FCollectionScreenServiceData::ServiceDataTable' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, SpecializationDataTable) == 0x000008, "Member 'FCollectionScreenServiceData::SpecializationDataTable' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, SeasonDataTableServicesTag) == 0x000010, "Member 'FCollectionScreenServiceData::SeasonDataTableServicesTag' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, SeasonDataTableSalesTag) == 0x000014, "Member 'FCollectionScreenServiceData::SeasonDataTableSalesTag' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, NpcPricingKeyRemapsTag) == 0x000018, "Member 'FCollectionScreenServiceData::NpcPricingKeyRemapsTag' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, ItemCostTable) == 0x000020, "Member 'FCollectionScreenServiceData::ItemCostTable' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, ServiceCostTable) == 0x000028, "Member 'FCollectionScreenServiceData::ServiceCostTable' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, AllowedServiceTagsForIcon) == 0x000030, "Member 'FCollectionScreenServiceData::AllowedServiceTagsForIcon' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, SpecializationTagRoot) == 0x000050, "Member 'FCollectionScreenServiceData::SpecializationTagRoot' has a wrong offset!");
static_assert(offsetof(FCollectionScreenServiceData, ItemNameAndCountFmt) == 0x000058, "Member 'FCollectionScreenServiceData::ItemNameAndCountFmt' has a wrong offset!");

}
