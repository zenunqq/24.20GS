#pragma once

#include "Basic.hpp"

#include "MTXOffer_SpecialBanner_classes.hpp"
#include "MTXOffer_SpecialBanner_parameters.hpp"

namespace SDK
{

void UMTXOffer_SpecialBanner_C::SetupSpecialOfferBanner(bool bHasSale, const class FText& SaleText, const class FString& BannerOverrideTag, bool bHasBattlePassStars_0, int32 iNumOfBattlePassStars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXOffer_SpecialBanner_C", "SetupSpecialOfferBanner");

	Params::MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner Parms{};

	Parms.bHasSale = bHasSale;
	Parms.SaleText = std::move(SaleText);
	Parms.BannerOverrideTag = std::move(BannerOverrideTag);
	Parms.bHasBattlePassStars_0 = bHasBattlePassStars_0;
	Parms.iNumOfBattlePassStars = iNumOfBattlePassStars;

	UObject::ProcessEvent(Func, &Parms);
}

void UMTXOffer_SpecialBanner_C::ExecuteUbergraph_MTXOffer_SpecialBanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXOffer_SpecialBanner_C", "ExecuteUbergraph_MTXOffer_SpecialBanner");

	Params::MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
