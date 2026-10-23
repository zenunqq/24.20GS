#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FFortVariantSprayCustomizerChannelOptions final
{
public:
	struct FRotator                               RotationOffset;
};
static_assert(alignof(FFortVariantSprayCustomizerChannelOptions) == 0x000008, "Wrong alignment on FFortVariantSprayCustomizerChannelOptions");
static_assert(sizeof(FFortVariantSprayCustomizerChannelOptions) == 0x000018, "Wrong size on FFortVariantSprayCustomizerChannelOptions");
static_assert(offsetof(FFortVariantSprayCustomizerChannelOptions, RotationOffset) == 0x000000, "Member 'FFortVariantSprayCustomizerChannelOptions::RotationOffset' has a wrong offset!");

struct FFortVariantSprayCustomizerCosmeticOptions final
{
public:
	TArray<TSoftObjectPtr<class UFortItemDefinition>> ItemShopPreviewStyles;
	TMap<struct FGameplayTag, struct FFortVariantSprayCustomizerChannelOptions> ChannelOptions;
};
static_assert(alignof(FFortVariantSprayCustomizerCosmeticOptions) == 0x000008, "Wrong alignment on FFortVariantSprayCustomizerCosmeticOptions");
static_assert(sizeof(FFortVariantSprayCustomizerCosmeticOptions) == 0x000060, "Wrong size on FFortVariantSprayCustomizerCosmeticOptions");
static_assert(offsetof(FFortVariantSprayCustomizerCosmeticOptions, ItemShopPreviewStyles) == 0x000000, "Member 'FFortVariantSprayCustomizerCosmeticOptions::ItemShopPreviewStyles' has a wrong offset!");
static_assert(offsetof(FFortVariantSprayCustomizerCosmeticOptions, ChannelOptions) == 0x000010, "Member 'FFortVariantSprayCustomizerCosmeticOptions::ChannelOptions' has a wrong offset!");

struct FFortVariantRedirectorTileLoadedEmoteToRandomize final
{
public:
	class UFortItemDefinition*                    LoadedEmote;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FFortVariantRedirectorTileLoadedEmoteToRandomize) == 0x000008, "Wrong alignment on FFortVariantRedirectorTileLoadedEmoteToRandomize");
static_assert(sizeof(FFortVariantRedirectorTileLoadedEmoteToRandomize) == 0x000010, "Wrong size on FFortVariantRedirectorTileLoadedEmoteToRandomize");
static_assert(offsetof(FFortVariantRedirectorTileLoadedEmoteToRandomize, LoadedEmote) == 0x000000, "Member 'FFortVariantRedirectorTileLoadedEmoteToRandomize::LoadedEmote' has a wrong offset!");

}
