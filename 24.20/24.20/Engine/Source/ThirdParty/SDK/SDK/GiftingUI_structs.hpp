#pragma once

#include "Basic.hpp"

#include "GameSubCatalog_structs.hpp"

namespace SDK
{

enum class EGiftingPresentationMode : uint8
{
	ConfirmPurchase                          = 0,
	WrapOptions                              = 1,
	GiftingProcess                           = 2,
	GiftingError                             = 3,
	GiftConfirmed                            = 4,
	None                                     = 5,
	EGiftingPresentationMode_MAX             = 6,
};

enum class EGiftingPricePresentationMode : uint8
{
	MtxCurrency                              = 0,
	RealMoney                                = 1,
	Hidden                                   = 2,
	EGiftingPricePresentationMode_MAX        = 3,
};

enum class EFilterType : uint8
{
	All                                      = 0,
	Party                                    = 1,
	EFilterType_MAX                          = 2,
};

enum class EGiftingScreenPresentationMode : uint8
{
	ItemList                                 = 0,
	NoContent                                = 1,
	EGiftingScreenPresentationMode_MAX       = 2,
};

enum class ERecipientPresentationMode : uint8
{
	Loading                                  = 0,
	GiftPrice                                = 1,
	AlreadyOwned                             = 2,
	Unavailable                              = 3,
	ERecipientPresentationMode_MAX           = 4,
};

struct FFortGiftingRecipientState final
{
public:
	struct FCatalogItemPrice                      Price;
	TArray<struct FItemQuantity>                  Items;
	uint8                                         Pad_60[0x28];
};
static_assert(alignof(FFortGiftingRecipientState) == 0x000008, "Wrong alignment on FFortGiftingRecipientState");
static_assert(sizeof(FFortGiftingRecipientState) == 0x000088, "Wrong size on FFortGiftingRecipientState");
static_assert(offsetof(FFortGiftingRecipientState, Price) == 0x000000, "Member 'FFortGiftingRecipientState::Price' has a wrong offset!");
static_assert(offsetof(FFortGiftingRecipientState, Items) == 0x000050, "Member 'FFortGiftingRecipientState::Items' has a wrong offset!");

}
