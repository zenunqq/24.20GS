#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPOIBannerToastSocialAvatar final : public UFortHUDElementWidget
{
public:
	class UFortSocialAvatarIcon*                  Icon_SocialAvatar;

public:
	void SetSocialAvatar(const class AFortPlayerState* PlayerState);
	void SetSocialAvatarTexture(TSoftObjectPtr<class UTexture2D> AvatarTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"POIBannerToastSocialAvatar">();
	}
	static class UPOIBannerToastSocialAvatar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPOIBannerToastSocialAvatar>();
	}
};
static_assert(alignof(UPOIBannerToastSocialAvatar) == 0x000008, "Wrong alignment on UPOIBannerToastSocialAvatar");
static_assert(sizeof(UPOIBannerToastSocialAvatar) == 0x0002D8, "Wrong size on UPOIBannerToastSocialAvatar");
static_assert(offsetof(UPOIBannerToastSocialAvatar, Icon_SocialAvatar) == 0x0002D0, "Member 'UPOIBannerToastSocialAvatar::Icon_SocialAvatar' has a wrong offset!");

class UPOIBannerToastWidgetBase final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x40];
	struct FFortPrioritizedWidgetData             PrioritizationData;
	uint8                                         Pad_312[0x6];

public:
	void K2_OnBecomeActive();
	void K2_OnBecomeInactive();
	void OnStompedByOtherWidget();
	void OnStompFailed();

	const class FText GetLocationTextFromTag(const struct FGameplayTag& LocationTag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"POIBannerToastWidgetBase">();
	}
	static class UPOIBannerToastWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPOIBannerToastWidgetBase>();
	}
};
static_assert(alignof(UPOIBannerToastWidgetBase) == 0x000008, "Wrong alignment on UPOIBannerToastWidgetBase");
static_assert(sizeof(UPOIBannerToastWidgetBase) == 0x000318, "Wrong size on UPOIBannerToastWidgetBase");
static_assert(offsetof(UPOIBannerToastWidgetBase, PrioritizationData) == 0x000310, "Member 'UPOIBannerToastWidgetBase::PrioritizationData' has a wrong offset!");

}
