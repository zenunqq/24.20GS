#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class AFundingManager final : public AActor
{
public:
	void BroadcaseUpdatedFundsMessage(const struct FItemFundingUpdatedFundingData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FundingManager">();
	}
	static class AFundingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFundingManager>();
	}
};
static_assert(alignof(AFundingManager) == 0x000008, "Wrong alignment on AFundingManager");
static_assert(sizeof(AFundingManager) == 0x000288, "Wrong size on AFundingManager");

}
