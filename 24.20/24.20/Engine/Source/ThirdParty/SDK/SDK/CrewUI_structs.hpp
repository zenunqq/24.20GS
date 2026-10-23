#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

enum class EBattlePassCrewContentState : uint8
{
	BattlePass                               = 0,
	Crew                                     = 1,
	CrewSubscribed                           = 2,
	EBattlePassCrewContentState_MAX          = 3,
};

enum class EFortProgressiveContentInterfaceCloseReason : uint8
{
	Normal                                   = 0,
	SubscriptionPurchased                    = 1,
	EFortProgressiveContentInterfaceCloseReason_MAX = 2,
};

enum class EFortProgressiveContentType : uint8
{
	ProgressiveTableOfContentsScreen         = 0,
	ProgressiveItemScreen                    = 1,
	EFortProgressiveContentType_MAX          = 2,
};

enum class EBattlePassPurchaseButtonCurrencyType : uint8
{
	None                                     = 0,
	Mtx                                      = 1,
	RealMoney                                = 2,
	EBattlePassPurchaseButtonCurrencyType_MAX = 3,
};

enum class EBattlePassPurchaseState : uint8
{
	Purchase                                 = 0,
	Confirm                                  = 1,
	EBattlePassPurchaseState_MAX             = 2,
};

enum class ECrewPurchaseButtonState : uint8
{
	None                                     = 0,
	Purchase                                 = 1,
	Rejoin                                   = 2,
	ECrewPurchaseButtonState_MAX             = 3,
};

struct FCrewSubscriptionContentTabData final
{
public:
	class FText                                   TabName;
	ESubscriptionContentTab                       TabType;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FCrewSubscriptionContentTabData) == 0x000008, "Wrong alignment on FCrewSubscriptionContentTabData");
static_assert(sizeof(FCrewSubscriptionContentTabData) == 0x000020, "Wrong size on FCrewSubscriptionContentTabData");
static_assert(offsetof(FCrewSubscriptionContentTabData, TabName) == 0x000000, "Member 'FCrewSubscriptionContentTabData::TabName' has a wrong offset!");
static_assert(offsetof(FCrewSubscriptionContentTabData, TabType) == 0x000018, "Member 'FCrewSubscriptionContentTabData::TabType' has a wrong offset!");

struct FFortProgressiveVariant final
{
public:
	TArray<struct FCosmeticVariantInfo>           DefaultVariantPreviewOverrides;
	TSoftObjectPtr<class UMaterialInterface>      TileMaterial;
	bool                                          bHidden;
	bool                                          bAllowPreviewStyles;
	uint8                                         Pad_3A[0x6];
	TSoftObjectPtr<class UFortVariantTokenType>   VariantToken;
};
static_assert(alignof(FFortProgressiveVariant) == 0x000008, "Wrong alignment on FFortProgressiveVariant");
static_assert(sizeof(FFortProgressiveVariant) == 0x000068, "Wrong size on FFortProgressiveVariant");
static_assert(offsetof(FFortProgressiveVariant, DefaultVariantPreviewOverrides) == 0x000000, "Member 'FFortProgressiveVariant::DefaultVariantPreviewOverrides' has a wrong offset!");
static_assert(offsetof(FFortProgressiveVariant, TileMaterial) == 0x000010, "Member 'FFortProgressiveVariant::TileMaterial' has a wrong offset!");
static_assert(offsetof(FFortProgressiveVariant, bHidden) == 0x000038, "Member 'FFortProgressiveVariant::bHidden' has a wrong offset!");
static_assert(offsetof(FFortProgressiveVariant, bAllowPreviewStyles) == 0x000039, "Member 'FFortProgressiveVariant::bAllowPreviewStyles' has a wrong offset!");
static_assert(offsetof(FFortProgressiveVariant, VariantToken) == 0x000040, "Member 'FFortProgressiveVariant::VariantToken' has a wrong offset!");

struct FFortProgressiveStageOverrideDisplayData final
{
public:
	TArray<struct FCosmeticVariantInfo>           DefaultVariantPreviewOverrides;
	class FText                                   DisplayName;
	TSoftObjectPtr<class UMaterialInterface>      TileMaterial;
	bool                                          bAllowPreviewStyles;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FFortProgressiveStageOverrideDisplayData) == 0x000008, "Wrong alignment on FFortProgressiveStageOverrideDisplayData");
static_assert(sizeof(FFortProgressiveStageOverrideDisplayData) == 0x000058, "Wrong size on FFortProgressiveStageOverrideDisplayData");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, DefaultVariantPreviewOverrides) == 0x000000, "Member 'FFortProgressiveStageOverrideDisplayData::DefaultVariantPreviewOverrides' has a wrong offset!");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, DisplayName) == 0x000010, "Member 'FFortProgressiveStageOverrideDisplayData::DisplayName' has a wrong offset!");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, TileMaterial) == 0x000028, "Member 'FFortProgressiveStageOverrideDisplayData::TileMaterial' has a wrong offset!");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, bAllowPreviewStyles) == 0x000050, "Member 'FFortProgressiveStageOverrideDisplayData::bAllowPreviewStyles' has a wrong offset!");

struct FFortProgressiveUIStage final
{
public:
	TArray<struct FFortProgressiveVariant>        Variants;
	bool                                          bUseOverrideDisplayData;
	uint8                                         Pad_11[0x7];
	struct FFortProgressiveStageOverrideDisplayData OverrideDisplayData;
};
static_assert(alignof(FFortProgressiveUIStage) == 0x000008, "Wrong alignment on FFortProgressiveUIStage");
static_assert(sizeof(FFortProgressiveUIStage) == 0x000070, "Wrong size on FFortProgressiveUIStage");
static_assert(offsetof(FFortProgressiveUIStage, Variants) == 0x000000, "Member 'FFortProgressiveUIStage::Variants' has a wrong offset!");
static_assert(offsetof(FFortProgressiveUIStage, bUseOverrideDisplayData) == 0x000010, "Member 'FFortProgressiveUIStage::bUseOverrideDisplayData' has a wrong offset!");
static_assert(offsetof(FFortProgressiveUIStage, OverrideDisplayData) == 0x000018, "Member 'FFortProgressiveUIStage::OverrideDisplayData' has a wrong offset!");

struct FFortProgressiveSet final
{
public:
	class FString                                 FulfillmentId;
	class FText                                   SetName;
	TSoftObjectPtr<class UMaterialInterface>      TileMaterial;
	TArray<struct FFortProgressiveUIStage>        Stages;
};
static_assert(alignof(FFortProgressiveSet) == 0x000008, "Wrong alignment on FFortProgressiveSet");
static_assert(sizeof(FFortProgressiveSet) == 0x000060, "Wrong size on FFortProgressiveSet");
static_assert(offsetof(FFortProgressiveSet, FulfillmentId) == 0x000000, "Member 'FFortProgressiveSet::FulfillmentId' has a wrong offset!");
static_assert(offsetof(FFortProgressiveSet, SetName) == 0x000010, "Member 'FFortProgressiveSet::SetName' has a wrong offset!");
static_assert(offsetof(FFortProgressiveSet, TileMaterial) == 0x000028, "Member 'FFortProgressiveSet::TileMaterial' has a wrong offset!");
static_assert(offsetof(FFortProgressiveSet, Stages) == 0x000050, "Member 'FFortProgressiveSet::Stages' has a wrong offset!");

struct FFortProgressiveSetVariantData final
{
public:
	class UFortVariantTokenType*                  VariantToken;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FFortProgressiveSetVariantData) == 0x000008, "Wrong alignment on FFortProgressiveSetVariantData");
static_assert(sizeof(FFortProgressiveSetVariantData) == 0x000018, "Wrong size on FFortProgressiveSetVariantData");
static_assert(offsetof(FFortProgressiveSetVariantData, VariantToken) == 0x000000, "Member 'FFortProgressiveSetVariantData::VariantToken' has a wrong offset!");

}
