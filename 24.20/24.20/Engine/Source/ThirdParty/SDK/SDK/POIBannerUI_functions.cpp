#pragma once

#include "Basic.hpp"

#include "POIBannerUI_classes.hpp"
#include "POIBannerUI_parameters.hpp"

namespace SDK
{

void UPOIBannerToastSocialAvatar::SetSocialAvatar(const class AFortPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastSocialAvatar", "SetSocialAvatar");

	Params::POIBannerToastSocialAvatar_SetSocialAvatar Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPOIBannerToastSocialAvatar::SetSocialAvatarTexture(TSoftObjectPtr<class UTexture2D> AvatarTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastSocialAvatar", "SetSocialAvatarTexture");

	Params::POIBannerToastSocialAvatar_SetSocialAvatarTexture Parms{};

	Parms.AvatarTexture = AvatarTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPOIBannerToastWidgetBase::K2_OnBecomeActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "K2_OnBecomeActive");

	UObject::ProcessEvent(Func, nullptr);
}

void UPOIBannerToastWidgetBase::K2_OnBecomeInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "K2_OnBecomeInactive");

	UObject::ProcessEvent(Func, nullptr);
}

void UPOIBannerToastWidgetBase::OnStompedByOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "OnStompedByOtherWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void UPOIBannerToastWidgetBase::OnStompFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "OnStompFailed");

	UObject::ProcessEvent(Func, nullptr);
}

const class FText UPOIBannerToastWidgetBase::GetLocationTextFromTag(const struct FGameplayTag& LocationTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "GetLocationTextFromTag");

	Params::POIBannerToastWidgetBase_GetLocationTextFromTag Parms{};

	Parms.LocationTag = std::move(LocationTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
