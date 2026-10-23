#pragma once

#include "Basic.hpp"

#include "JsonUtilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FProfileUpdateSingle
{
public:
	int64                                         ProfileRevision;
	class FString                                 ProfileId;
	int64                                         ProfileChangesBaseRevision;
	TArray<struct FJsonObjectWrapper>             ProfileChanges;
	struct FDateTime                              LockExpiration;
	TArray<struct FJsonObjectWrapper>             Notifications;
	int32                                         ProfileCommandRevision;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FProfileUpdateSingle) == 0x000008, "Wrong alignment on FProfileUpdateSingle");
static_assert(sizeof(FProfileUpdateSingle) == 0x000050, "Wrong size on FProfileUpdateSingle");
static_assert(offsetof(FProfileUpdateSingle, ProfileRevision) == 0x000000, "Member 'FProfileUpdateSingle::ProfileRevision' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileId) == 0x000008, "Member 'FProfileUpdateSingle::ProfileId' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileChangesBaseRevision) == 0x000018, "Member 'FProfileUpdateSingle::ProfileChangesBaseRevision' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileChanges) == 0x000020, "Member 'FProfileUpdateSingle::ProfileChanges' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, LockExpiration) == 0x000030, "Member 'FProfileUpdateSingle::LockExpiration' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, Notifications) == 0x000038, "Member 'FProfileUpdateSingle::Notifications' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileCommandRevision) == 0x000048, "Member 'FProfileUpdateSingle::ProfileCommandRevision' has a wrong offset!");

struct FProfileUpdateNotification final
{
public:
	TArray<struct FJsonObjectWrapper>             Changes;
	struct FDateTime                              LockExpiration;
	int32                                         CommandRevision;
	uint8                                         Pad_1C[0x4];
	int64                                         Revision;
};
static_assert(alignof(FProfileUpdateNotification) == 0x000008, "Wrong alignment on FProfileUpdateNotification");
static_assert(sizeof(FProfileUpdateNotification) == 0x000028, "Wrong size on FProfileUpdateNotification");
static_assert(offsetof(FProfileUpdateNotification, Changes) == 0x000000, "Member 'FProfileUpdateNotification::Changes' has a wrong offset!");
static_assert(offsetof(FProfileUpdateNotification, LockExpiration) == 0x000010, "Member 'FProfileUpdateNotification::LockExpiration' has a wrong offset!");
static_assert(offsetof(FProfileUpdateNotification, CommandRevision) == 0x000018, "Member 'FProfileUpdateNotification::CommandRevision' has a wrong offset!");
static_assert(offsetof(FProfileUpdateNotification, Revision) == 0x000020, "Member 'FProfileUpdateNotification::Revision' has a wrong offset!");

struct FMcpChangeAttributesRequest final
{
public:
	class FString                                 ItemId;
	struct FJsonObjectWrapper                     Attributes;
};
static_assert(alignof(FMcpChangeAttributesRequest) == 0x000008, "Wrong alignment on FMcpChangeAttributesRequest");
static_assert(sizeof(FMcpChangeAttributesRequest) == 0x000030, "Wrong size on FMcpChangeAttributesRequest");
static_assert(offsetof(FMcpChangeAttributesRequest, ItemId) == 0x000000, "Member 'FMcpChangeAttributesRequest::ItemId' has a wrong offset!");
static_assert(offsetof(FMcpChangeAttributesRequest, Attributes) == 0x000010, "Member 'FMcpChangeAttributesRequest::Attributes' has a wrong offset!");

struct alignas(0x10) FBaseUrlContext
{
public:
	uint8                                         Pad_0[0x80];
};
static_assert(alignof(FBaseUrlContext) == 0x000010, "Wrong alignment on FBaseUrlContext");
static_assert(sizeof(FBaseUrlContext) == 0x000080, "Wrong size on FBaseUrlContext");

struct FDedicatedServerUrlContext final : public FBaseUrlContext
{
};
static_assert(alignof(FDedicatedServerUrlContext) == 0x000010, "Wrong alignment on FDedicatedServerUrlContext");
static_assert(sizeof(FDedicatedServerUrlContext) == 0x000080, "Wrong size on FDedicatedServerUrlContext");

struct FProfileUpdate final : public FProfileUpdateSingle
{
public:
	int32                                         ResponseVersion;
	uint8                                         Pad_54[0x4];
	struct FDateTime                              ServerTime;
	TArray<struct FProfileUpdateSingle>           MultiUpdate;
};
static_assert(alignof(FProfileUpdate) == 0x000008, "Wrong alignment on FProfileUpdate");
static_assert(sizeof(FProfileUpdate) == 0x000070, "Wrong size on FProfileUpdate");
static_assert(offsetof(FProfileUpdate, ResponseVersion) == 0x000050, "Member 'FProfileUpdate::ResponseVersion' has a wrong offset!");
static_assert(offsetof(FProfileUpdate, ServerTime) == 0x000058, "Member 'FProfileUpdate::ServerTime' has a wrong offset!");
static_assert(offsetof(FProfileUpdate, MultiUpdate) == 0x000060, "Member 'FProfileUpdate::MultiUpdate' has a wrong offset!");

struct FMcpLootEntry
{
public:
	class FString                                 ItemType;
	class FString                                 ItemGuid;
	int32                                         Quantity;
	uint8                                         Pad_24[0x4];
	struct FJsonObjectWrapper                     Attributes;
	class FString                                 ItemProfile;
};
static_assert(alignof(FMcpLootEntry) == 0x000008, "Wrong alignment on FMcpLootEntry");
static_assert(sizeof(FMcpLootEntry) == 0x000058, "Wrong size on FMcpLootEntry");
static_assert(offsetof(FMcpLootEntry, ItemType) == 0x000000, "Member 'FMcpLootEntry::ItemType' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, ItemGuid) == 0x000010, "Member 'FMcpLootEntry::ItemGuid' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, Quantity) == 0x000020, "Member 'FMcpLootEntry::Quantity' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, Attributes) == 0x000028, "Member 'FMcpLootEntry::Attributes' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, ItemProfile) == 0x000048, "Member 'FMcpLootEntry::ItemProfile' has a wrong offset!");

struct FMcpLootResult final
{
public:
	class FString                                 TierGroupName;
	TArray<struct FMcpLootEntry>                  Items;
};
static_assert(alignof(FMcpLootResult) == 0x000008, "Wrong alignment on FMcpLootResult");
static_assert(sizeof(FMcpLootResult) == 0x000020, "Wrong size on FMcpLootResult");
static_assert(offsetof(FMcpLootResult, TierGroupName) == 0x000000, "Member 'FMcpLootResult::TierGroupName' has a wrong offset!");
static_assert(offsetof(FMcpLootResult, Items) == 0x000010, "Member 'FMcpLootResult::Items' has a wrong offset!");

struct FClientUrlContext final : public FBaseUrlContext
{
};
static_assert(alignof(FClientUrlContext) == 0x000010, "Wrong alignment on FClientUrlContext");
static_assert(sizeof(FClientUrlContext) == 0x000080, "Wrong size on FClientUrlContext");

struct FProfileEntry final
{
public:
	class FString                                 ProfileId;
	class UMcpProfile*                            ProfileObject;
	bool                                          bWaitingForRefreshAllProfilesResponse;
	bool                                          bForwardUpdatesToClient;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FProfileEntry) == 0x000008, "Wrong alignment on FProfileEntry");
static_assert(sizeof(FProfileEntry) == 0x000020, "Wrong size on FProfileEntry");
static_assert(offsetof(FProfileEntry, ProfileId) == 0x000000, "Member 'FProfileEntry::ProfileId' has a wrong offset!");
static_assert(offsetof(FProfileEntry, ProfileObject) == 0x000010, "Member 'FProfileEntry::ProfileObject' has a wrong offset!");
static_assert(offsetof(FProfileEntry, bWaitingForRefreshAllProfilesResponse) == 0x000018, "Member 'FProfileEntry::bWaitingForRefreshAllProfilesResponse' has a wrong offset!");
static_assert(offsetof(FProfileEntry, bForwardUpdatesToClient) == 0x000019, "Member 'FProfileEntry::bForwardUpdatesToClient' has a wrong offset!");

struct FMcpAddItemRequest final
{
public:
	class FString                                 ItemId;
	class FString                                 TemplateId;
	int32                                         Quantity;
	uint8                                         Pad_24[0x4];
	struct FJsonObjectWrapper                     Attributes;
};
static_assert(alignof(FMcpAddItemRequest) == 0x000008, "Wrong alignment on FMcpAddItemRequest");
static_assert(sizeof(FMcpAddItemRequest) == 0x000048, "Wrong size on FMcpAddItemRequest");
static_assert(offsetof(FMcpAddItemRequest, ItemId) == 0x000000, "Member 'FMcpAddItemRequest::ItemId' has a wrong offset!");
static_assert(offsetof(FMcpAddItemRequest, TemplateId) == 0x000010, "Member 'FMcpAddItemRequest::TemplateId' has a wrong offset!");
static_assert(offsetof(FMcpAddItemRequest, Quantity) == 0x000020, "Member 'FMcpAddItemRequest::Quantity' has a wrong offset!");
static_assert(offsetof(FMcpAddItemRequest, Attributes) == 0x000028, "Member 'FMcpAddItemRequest::Attributes' has a wrong offset!");

struct FMcpRemoveItemRequest final
{
public:
	class FString                                 ItemId;
};
static_assert(alignof(FMcpRemoveItemRequest) == 0x000008, "Wrong alignment on FMcpRemoveItemRequest");
static_assert(sizeof(FMcpRemoveItemRequest) == 0x000010, "Wrong size on FMcpRemoveItemRequest");
static_assert(offsetof(FMcpRemoveItemRequest, ItemId) == 0x000000, "Member 'FMcpRemoveItemRequest::ItemId' has a wrong offset!");

struct FMcpChangeQuantityRequest final
{
public:
	class FString                                 ItemId;
	int32                                         DeltaQuantity;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FMcpChangeQuantityRequest) == 0x000008, "Wrong alignment on FMcpChangeQuantityRequest");
static_assert(sizeof(FMcpChangeQuantityRequest) == 0x000018, "Wrong size on FMcpChangeQuantityRequest");
static_assert(offsetof(FMcpChangeQuantityRequest, ItemId) == 0x000000, "Member 'FMcpChangeQuantityRequest::ItemId' has a wrong offset!");
static_assert(offsetof(FMcpChangeQuantityRequest, DeltaQuantity) == 0x000010, "Member 'FMcpChangeQuantityRequest::DeltaQuantity' has a wrong offset!");

struct FMcpProfileChangeRequest final
{
public:
	int32                                         BaseCommandRevision;
	uint8                                         Pad_4[0x4];
	TArray<struct FMcpAddItemRequest>             AddRequests;
	TArray<struct FMcpRemoveItemRequest>          RemoveRequests;
	TArray<struct FMcpChangeQuantityRequest>      ChangeQuantityRequests;
	TArray<struct FMcpChangeAttributesRequest>    ChangeAttributesRequests;
	TArray<struct FJsonObjectWrapper>             ChangeStatRequests;
};
static_assert(alignof(FMcpProfileChangeRequest) == 0x000008, "Wrong alignment on FMcpProfileChangeRequest");
static_assert(sizeof(FMcpProfileChangeRequest) == 0x000058, "Wrong size on FMcpProfileChangeRequest");
static_assert(offsetof(FMcpProfileChangeRequest, BaseCommandRevision) == 0x000000, "Member 'FMcpProfileChangeRequest::BaseCommandRevision' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, AddRequests) == 0x000008, "Member 'FMcpProfileChangeRequest::AddRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, RemoveRequests) == 0x000018, "Member 'FMcpProfileChangeRequest::RemoveRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeQuantityRequests) == 0x000028, "Member 'FMcpProfileChangeRequest::ChangeQuantityRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeAttributesRequests) == 0x000038, "Member 'FMcpProfileChangeRequest::ChangeAttributesRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeStatRequests) == 0x000048, "Member 'FMcpProfileChangeRequest::ChangeStatRequests' has a wrong offset!");

struct FPublicUrlContext final : public FBaseUrlContext
{
};
static_assert(alignof(FPublicUrlContext) == 0x000010, "Wrong alignment on FPublicUrlContext");
static_assert(sizeof(FPublicUrlContext) == 0x000080, "Wrong size on FPublicUrlContext");

struct FAccountIdAndProfileResponse final
{
public:
	class FString                                 AccountId;
	struct FProfileUpdate                         Response;
};
static_assert(alignof(FAccountIdAndProfileResponse) == 0x000008, "Wrong alignment on FAccountIdAndProfileResponse");
static_assert(sizeof(FAccountIdAndProfileResponse) == 0x000080, "Wrong size on FAccountIdAndProfileResponse");
static_assert(offsetof(FAccountIdAndProfileResponse, AccountId) == 0x000000, "Member 'FAccountIdAndProfileResponse::AccountId' has a wrong offset!");
static_assert(offsetof(FAccountIdAndProfileResponse, Response) == 0x000010, "Member 'FAccountIdAndProfileResponse::Response' has a wrong offset!");

struct FProfileGroupEntry final
{
public:
	uint8                                         Pad_0[0x20];
	class UMcpProfileGroup*                       ProfileGroup;
};
static_assert(alignof(FProfileGroupEntry) == 0x000008, "Wrong alignment on FProfileGroupEntry");
static_assert(sizeof(FProfileGroupEntry) == 0x000028, "Wrong size on FProfileGroupEntry");
static_assert(offsetof(FProfileGroupEntry, ProfileGroup) == 0x000020, "Member 'FProfileGroupEntry::ProfileGroup' has a wrong offset!");

struct FMcpItemIdAndQuantity final : public FMcpLootEntry
{
};
static_assert(alignof(FMcpItemIdAndQuantity) == 0x000008, "Wrong alignment on FMcpItemIdAndQuantity");
static_assert(sizeof(FMcpItemIdAndQuantity) == 0x000058, "Wrong size on FMcpItemIdAndQuantity");

struct FGiftBoxInfo final
{
public:
	struct FDateTime                              GiftedOn;
	class FString                                 FromAccountId;
	TArray<struct FMcpLootEntry>                  LootList;
	struct FJsonObjectWrapper                     Params;
};
static_assert(alignof(FGiftBoxInfo) == 0x000008, "Wrong alignment on FGiftBoxInfo");
static_assert(sizeof(FGiftBoxInfo) == 0x000048, "Wrong size on FGiftBoxInfo");
static_assert(offsetof(FGiftBoxInfo, GiftedOn) == 0x000000, "Member 'FGiftBoxInfo::GiftedOn' has a wrong offset!");
static_assert(offsetof(FGiftBoxInfo, FromAccountId) == 0x000008, "Member 'FGiftBoxInfo::FromAccountId' has a wrong offset!");
static_assert(offsetof(FGiftBoxInfo, LootList) == 0x000018, "Member 'FGiftBoxInfo::LootList' has a wrong offset!");
static_assert(offsetof(FGiftBoxInfo, Params) == 0x000028, "Member 'FGiftBoxInfo::Params' has a wrong offset!");

}
