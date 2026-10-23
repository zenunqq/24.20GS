#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct FundingManager_BroadcaseUpdatedFundsMessage final
{
public:
	struct FItemFundingUpdatedFundingData         Payload;
};
static_assert(alignof(FundingManager_BroadcaseUpdatedFundsMessage) == 0x000008, "Wrong alignment on FundingManager_BroadcaseUpdatedFundsMessage");
static_assert(sizeof(FundingManager_BroadcaseUpdatedFundsMessage) == 0x000010, "Wrong size on FundingManager_BroadcaseUpdatedFundsMessage");
static_assert(offsetof(FundingManager_BroadcaseUpdatedFundsMessage, Payload) == 0x000000, "Member 'FundingManager_BroadcaseUpdatedFundsMessage::Payload' has a wrong offset!");

}
