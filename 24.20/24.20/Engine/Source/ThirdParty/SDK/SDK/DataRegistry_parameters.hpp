#pragma once

#include "Basic.hpp"

#include "DataRegistry_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct DataRegistrySubsystem_AcquireItemBP final
{
public:
	struct FDataRegistryId                        ItemId;
	TDelegate<void(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, EDataRegistryAcquireStatus Status)> AcquireCallback;
	bool                                          ReturnValue;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(DataRegistrySubsystem_AcquireItemBP) == 0x000004, "Wrong alignment on DataRegistrySubsystem_AcquireItemBP");
static_assert(sizeof(DataRegistrySubsystem_AcquireItemBP) == 0x000018, "Wrong size on DataRegistrySubsystem_AcquireItemBP");
static_assert(offsetof(DataRegistrySubsystem_AcquireItemBP, ItemId) == 0x000000, "Member 'DataRegistrySubsystem_AcquireItemBP::ItemId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_AcquireItemBP, AcquireCallback) == 0x000008, "Member 'DataRegistrySubsystem_AcquireItemBP::AcquireCallback' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_AcquireItemBP, ReturnValue) == 0x000014, "Member 'DataRegistrySubsystem_AcquireItemBP::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_Conv_DataRegistryIdToString final
{
public:
	struct FDataRegistryId                        DataRegistryId;
	class FString                                 ReturnValue;
};
static_assert(alignof(DataRegistrySubsystem_Conv_DataRegistryIdToString) == 0x000008, "Wrong alignment on DataRegistrySubsystem_Conv_DataRegistryIdToString");
static_assert(sizeof(DataRegistrySubsystem_Conv_DataRegistryIdToString) == 0x000018, "Wrong size on DataRegistrySubsystem_Conv_DataRegistryIdToString");
static_assert(offsetof(DataRegistrySubsystem_Conv_DataRegistryIdToString, DataRegistryId) == 0x000000, "Member 'DataRegistrySubsystem_Conv_DataRegistryIdToString::DataRegistryId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_Conv_DataRegistryIdToString, ReturnValue) == 0x000008, "Member 'DataRegistrySubsystem_Conv_DataRegistryIdToString::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_Conv_DataRegistryTypeToString final
{
public:
	struct FDataRegistryType                      DataRegistryType;
	uint8                                         Pad_4[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(DataRegistrySubsystem_Conv_DataRegistryTypeToString) == 0x000008, "Wrong alignment on DataRegistrySubsystem_Conv_DataRegistryTypeToString");
static_assert(sizeof(DataRegistrySubsystem_Conv_DataRegistryTypeToString) == 0x000018, "Wrong size on DataRegistrySubsystem_Conv_DataRegistryTypeToString");
static_assert(offsetof(DataRegistrySubsystem_Conv_DataRegistryTypeToString, DataRegistryType) == 0x000000, "Member 'DataRegistrySubsystem_Conv_DataRegistryTypeToString::DataRegistryType' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_Conv_DataRegistryTypeToString, ReturnValue) == 0x000008, "Member 'DataRegistrySubsystem_Conv_DataRegistryTypeToString::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_EqualEqual_DataRegistryId final
{
public:
	struct FDataRegistryId                        A;
	struct FDataRegistryId                        B;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(DataRegistrySubsystem_EqualEqual_DataRegistryId) == 0x000004, "Wrong alignment on DataRegistrySubsystem_EqualEqual_DataRegistryId");
static_assert(sizeof(DataRegistrySubsystem_EqualEqual_DataRegistryId) == 0x000014, "Wrong size on DataRegistrySubsystem_EqualEqual_DataRegistryId");
static_assert(offsetof(DataRegistrySubsystem_EqualEqual_DataRegistryId, A) == 0x000000, "Member 'DataRegistrySubsystem_EqualEqual_DataRegistryId::A' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EqualEqual_DataRegistryId, B) == 0x000008, "Member 'DataRegistrySubsystem_EqualEqual_DataRegistryId::B' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EqualEqual_DataRegistryId, ReturnValue) == 0x000010, "Member 'DataRegistrySubsystem_EqualEqual_DataRegistryId::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_EqualEqual_DataRegistryType final
{
public:
	struct FDataRegistryType                      A;
	struct FDataRegistryType                      B;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(DataRegistrySubsystem_EqualEqual_DataRegistryType) == 0x000004, "Wrong alignment on DataRegistrySubsystem_EqualEqual_DataRegistryType");
static_assert(sizeof(DataRegistrySubsystem_EqualEqual_DataRegistryType) == 0x00000C, "Wrong size on DataRegistrySubsystem_EqualEqual_DataRegistryType");
static_assert(offsetof(DataRegistrySubsystem_EqualEqual_DataRegistryType, A) == 0x000000, "Member 'DataRegistrySubsystem_EqualEqual_DataRegistryType::A' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EqualEqual_DataRegistryType, B) == 0x000004, "Member 'DataRegistrySubsystem_EqualEqual_DataRegistryType::B' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EqualEqual_DataRegistryType, ReturnValue) == 0x000008, "Member 'DataRegistrySubsystem_EqualEqual_DataRegistryType::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_EvaluateDataRegistryCurve final
{
public:
	struct FDataRegistryId                        ItemId;
	float                                         InputValue;
	float                                         DefaultValue;
	EDataRegistrySubsystemGetItemResult           outResult;
	uint8                                         Pad_11[0x3];
	float                                         OutValue;
};
static_assert(alignof(DataRegistrySubsystem_EvaluateDataRegistryCurve) == 0x000004, "Wrong alignment on DataRegistrySubsystem_EvaluateDataRegistryCurve");
static_assert(sizeof(DataRegistrySubsystem_EvaluateDataRegistryCurve) == 0x000018, "Wrong size on DataRegistrySubsystem_EvaluateDataRegistryCurve");
static_assert(offsetof(DataRegistrySubsystem_EvaluateDataRegistryCurve, ItemId) == 0x000000, "Member 'DataRegistrySubsystem_EvaluateDataRegistryCurve::ItemId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EvaluateDataRegistryCurve, InputValue) == 0x000008, "Member 'DataRegistrySubsystem_EvaluateDataRegistryCurve::InputValue' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EvaluateDataRegistryCurve, DefaultValue) == 0x00000C, "Member 'DataRegistrySubsystem_EvaluateDataRegistryCurve::DefaultValue' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EvaluateDataRegistryCurve, outResult) == 0x000010, "Member 'DataRegistrySubsystem_EvaluateDataRegistryCurve::outResult' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_EvaluateDataRegistryCurve, OutValue) == 0x000014, "Member 'DataRegistrySubsystem_EvaluateDataRegistryCurve::OutValue' has a wrong offset!");

struct DataRegistrySubsystem_FindCachedItemBP final
{
public:
	struct FDataRegistryId                        ItemId;
	EDataRegistrySubsystemGetItemResult           outResult;
	uint8                                         Pad_9[0x7];
	struct FTableRowBase                          OutItem;
};
static_assert(alignof(DataRegistrySubsystem_FindCachedItemBP) == 0x000008, "Wrong alignment on DataRegistrySubsystem_FindCachedItemBP");
static_assert(sizeof(DataRegistrySubsystem_FindCachedItemBP) == 0x000018, "Wrong size on DataRegistrySubsystem_FindCachedItemBP");
static_assert(offsetof(DataRegistrySubsystem_FindCachedItemBP, ItemId) == 0x000000, "Member 'DataRegistrySubsystem_FindCachedItemBP::ItemId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_FindCachedItemBP, outResult) == 0x000008, "Member 'DataRegistrySubsystem_FindCachedItemBP::outResult' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_FindCachedItemBP, OutItem) == 0x000010, "Member 'DataRegistrySubsystem_FindCachedItemBP::OutItem' has a wrong offset!");

struct DataRegistrySubsystem_GetCachedItemBP final
{
public:
	struct FDataRegistryId                        ItemId;
	struct FTableRowBase                          OutItem;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(DataRegistrySubsystem_GetCachedItemBP) == 0x000008, "Wrong alignment on DataRegistrySubsystem_GetCachedItemBP");
static_assert(sizeof(DataRegistrySubsystem_GetCachedItemBP) == 0x000018, "Wrong size on DataRegistrySubsystem_GetCachedItemBP");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemBP, ItemId) == 0x000000, "Member 'DataRegistrySubsystem_GetCachedItemBP::ItemId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemBP, OutItem) == 0x000008, "Member 'DataRegistrySubsystem_GetCachedItemBP::OutItem' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemBP, ReturnValue) == 0x000010, "Member 'DataRegistrySubsystem_GetCachedItemBP::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_GetCachedItemFromLookupBP final
{
public:
	struct FDataRegistryId                        ItemId;
	struct FDataRegistryLookup                    ResolvedLookup;
	struct FTableRowBase                          OutItem;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(DataRegistrySubsystem_GetCachedItemFromLookupBP) == 0x000008, "Wrong alignment on DataRegistrySubsystem_GetCachedItemFromLookupBP");
static_assert(sizeof(DataRegistrySubsystem_GetCachedItemFromLookupBP) == 0x000030, "Wrong size on DataRegistrySubsystem_GetCachedItemFromLookupBP");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemFromLookupBP, ItemId) == 0x000000, "Member 'DataRegistrySubsystem_GetCachedItemFromLookupBP::ItemId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemFromLookupBP, ResolvedLookup) == 0x000008, "Member 'DataRegistrySubsystem_GetCachedItemFromLookupBP::ResolvedLookup' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemFromLookupBP, OutItem) == 0x000020, "Member 'DataRegistrySubsystem_GetCachedItemFromLookupBP::OutItem' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_GetCachedItemFromLookupBP, ReturnValue) == 0x000028, "Member 'DataRegistrySubsystem_GetCachedItemFromLookupBP::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_IsValidDataRegistryId final
{
public:
	struct FDataRegistryId                        DataRegistryId;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(DataRegistrySubsystem_IsValidDataRegistryId) == 0x000004, "Wrong alignment on DataRegistrySubsystem_IsValidDataRegistryId");
static_assert(sizeof(DataRegistrySubsystem_IsValidDataRegistryId) == 0x00000C, "Wrong size on DataRegistrySubsystem_IsValidDataRegistryId");
static_assert(offsetof(DataRegistrySubsystem_IsValidDataRegistryId, DataRegistryId) == 0x000000, "Member 'DataRegistrySubsystem_IsValidDataRegistryId::DataRegistryId' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_IsValidDataRegistryId, ReturnValue) == 0x000008, "Member 'DataRegistrySubsystem_IsValidDataRegistryId::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_IsValidDataRegistryType final
{
public:
	struct FDataRegistryType                      DataRegistryType;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(DataRegistrySubsystem_IsValidDataRegistryType) == 0x000004, "Wrong alignment on DataRegistrySubsystem_IsValidDataRegistryType");
static_assert(sizeof(DataRegistrySubsystem_IsValidDataRegistryType) == 0x000008, "Wrong size on DataRegistrySubsystem_IsValidDataRegistryType");
static_assert(offsetof(DataRegistrySubsystem_IsValidDataRegistryType, DataRegistryType) == 0x000000, "Member 'DataRegistrySubsystem_IsValidDataRegistryType::DataRegistryType' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_IsValidDataRegistryType, ReturnValue) == 0x000004, "Member 'DataRegistrySubsystem_IsValidDataRegistryType::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_NotEqual_DataRegistryId final
{
public:
	struct FDataRegistryId                        A;
	struct FDataRegistryId                        B;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(DataRegistrySubsystem_NotEqual_DataRegistryId) == 0x000004, "Wrong alignment on DataRegistrySubsystem_NotEqual_DataRegistryId");
static_assert(sizeof(DataRegistrySubsystem_NotEqual_DataRegistryId) == 0x000014, "Wrong size on DataRegistrySubsystem_NotEqual_DataRegistryId");
static_assert(offsetof(DataRegistrySubsystem_NotEqual_DataRegistryId, A) == 0x000000, "Member 'DataRegistrySubsystem_NotEqual_DataRegistryId::A' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_NotEqual_DataRegistryId, B) == 0x000008, "Member 'DataRegistrySubsystem_NotEqual_DataRegistryId::B' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_NotEqual_DataRegistryId, ReturnValue) == 0x000010, "Member 'DataRegistrySubsystem_NotEqual_DataRegistryId::ReturnValue' has a wrong offset!");

struct DataRegistrySubsystem_NotEqual_DataRegistryType final
{
public:
	struct FDataRegistryType                      A;
	struct FDataRegistryType                      B;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(DataRegistrySubsystem_NotEqual_DataRegistryType) == 0x000004, "Wrong alignment on DataRegistrySubsystem_NotEqual_DataRegistryType");
static_assert(sizeof(DataRegistrySubsystem_NotEqual_DataRegistryType) == 0x00000C, "Wrong size on DataRegistrySubsystem_NotEqual_DataRegistryType");
static_assert(offsetof(DataRegistrySubsystem_NotEqual_DataRegistryType, A) == 0x000000, "Member 'DataRegistrySubsystem_NotEqual_DataRegistryType::A' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_NotEqual_DataRegistryType, B) == 0x000004, "Member 'DataRegistrySubsystem_NotEqual_DataRegistryType::B' has a wrong offset!");
static_assert(offsetof(DataRegistrySubsystem_NotEqual_DataRegistryType, ReturnValue) == 0x000008, "Member 'DataRegistrySubsystem_NotEqual_DataRegistryType::ReturnValue' has a wrong offset!");

}
