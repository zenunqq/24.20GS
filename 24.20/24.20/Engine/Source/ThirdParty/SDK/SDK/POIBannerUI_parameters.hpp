#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct POIBannerToastSocialAvatar_SetSocialAvatar final
{
public:
	const class AFortPlayerState*                 PlayerState;
};
static_assert(alignof(POIBannerToastSocialAvatar_SetSocialAvatar) == 0x000008, "Wrong alignment on POIBannerToastSocialAvatar_SetSocialAvatar");
static_assert(sizeof(POIBannerToastSocialAvatar_SetSocialAvatar) == 0x000008, "Wrong size on POIBannerToastSocialAvatar_SetSocialAvatar");
static_assert(offsetof(POIBannerToastSocialAvatar_SetSocialAvatar, PlayerState) == 0x000000, "Member 'POIBannerToastSocialAvatar_SetSocialAvatar::PlayerState' has a wrong offset!");

struct POIBannerToastSocialAvatar_SetSocialAvatarTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              AvatarTexture;
};
static_assert(alignof(POIBannerToastSocialAvatar_SetSocialAvatarTexture) == 0x000008, "Wrong alignment on POIBannerToastSocialAvatar_SetSocialAvatarTexture");
static_assert(sizeof(POIBannerToastSocialAvatar_SetSocialAvatarTexture) == 0x000028, "Wrong size on POIBannerToastSocialAvatar_SetSocialAvatarTexture");
static_assert(offsetof(POIBannerToastSocialAvatar_SetSocialAvatarTexture, AvatarTexture) == 0x000000, "Member 'POIBannerToastSocialAvatar_SetSocialAvatarTexture::AvatarTexture' has a wrong offset!");

struct POIBannerToastWidgetBase_GetLocationTextFromTag final
{
public:
	struct FGameplayTag                           LocationTag;
	uint8                                         Pad_4[0x4];
	class FText                                   ReturnValue;
};
static_assert(alignof(POIBannerToastWidgetBase_GetLocationTextFromTag) == 0x000008, "Wrong alignment on POIBannerToastWidgetBase_GetLocationTextFromTag");
static_assert(sizeof(POIBannerToastWidgetBase_GetLocationTextFromTag) == 0x000020, "Wrong size on POIBannerToastWidgetBase_GetLocationTextFromTag");
static_assert(offsetof(POIBannerToastWidgetBase_GetLocationTextFromTag, LocationTag) == 0x000000, "Member 'POIBannerToastWidgetBase_GetLocationTextFromTag::LocationTag' has a wrong offset!");
static_assert(offsetof(POIBannerToastWidgetBase_GetLocationTextFromTag, ReturnValue) == 0x000008, "Member 'POIBannerToastWidgetBase_GetLocationTextFromTag::ReturnValue' has a wrong offset!");

}
