#pragma once

#include "Basic.hpp"

#include "PictureInPictureDescriptors_structs.hpp"
#include "Engine_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UPictureInPicturePartnerDataAsset final : public UPrimaryDataAsset
{
public:
	class FString                                 PartnerName;
	class UImage*                                 ClientImage;
	int32                                         MediaHeight;
	int32                                         MediaWidth;
	TSubclassOf<class UCommonActivatableWidget>   MetadataOverlayClass;
	TArray<struct FPictureInPictureActionConfig>  Actions;
	struct FPIPVideoPlayerAssetConfig             AssetConfig;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPicturePartnerDataAsset">();
	}
	static class UPictureInPicturePartnerDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPicturePartnerDataAsset>();
	}
};
static_assert(alignof(UPictureInPicturePartnerDataAsset) == 0x000008, "Wrong alignment on UPictureInPicturePartnerDataAsset");
static_assert(sizeof(UPictureInPicturePartnerDataAsset) == 0x0000F0, "Wrong size on UPictureInPicturePartnerDataAsset");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, PartnerName) == 0x000030, "Member 'UPictureInPicturePartnerDataAsset::PartnerName' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, ClientImage) == 0x000040, "Member 'UPictureInPicturePartnerDataAsset::ClientImage' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, MediaHeight) == 0x000048, "Member 'UPictureInPicturePartnerDataAsset::MediaHeight' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, MediaWidth) == 0x00004C, "Member 'UPictureInPicturePartnerDataAsset::MediaWidth' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, MetadataOverlayClass) == 0x000050, "Member 'UPictureInPicturePartnerDataAsset::MetadataOverlayClass' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, Actions) == 0x000058, "Member 'UPictureInPicturePartnerDataAsset::Actions' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, AssetConfig) == 0x000068, "Member 'UPictureInPicturePartnerDataAsset::AssetConfig' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UPictureInPictureActionData : public UObject
{
public:
	class FString                                 PartnerName;
	uint8                                         Pad_38[0x8];
	struct FSlateBrush                            ActionBrush;
	class FText                                   ActionText;
	EPictureInPictureAction                       ActionType;
	uint8                                         Pad_119[0x7];
	TMulticastInlineDelegate<void()>              ActionEvent;
	TMulticastInlineDelegate<void(TMulticastInlineDelegate<void(bool bSuccess)> InCallback)> ActionFiredEvent;
	uint8                                         Pad_140[0x18];
	TMulticastInlineDelegate<void(bool bSuccess)> CallbackEvent;

public:
	void CallEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureActionData">();
	}
	static class UPictureInPictureActionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureActionData>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPictureInPictureActionData) == 0x000010, "Wrong alignment on UPictureInPictureActionData");
static_assert(sizeof(UPictureInPictureActionData) == 0x000170, "Wrong size on UPictureInPictureActionData");
static_assert(offsetof(UPictureInPictureActionData, PartnerName) == 0x000028, "Member 'UPictureInPictureActionData::PartnerName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionBrush) == 0x000040, "Member 'UPictureInPictureActionData::ActionBrush' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionText) == 0x000100, "Member 'UPictureInPictureActionData::ActionText' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionType) == 0x000118, "Member 'UPictureInPictureActionData::ActionType' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionEvent) == 0x000120, "Member 'UPictureInPictureActionData::ActionEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionFiredEvent) == 0x000130, "Member 'UPictureInPictureActionData::ActionFiredEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, CallbackEvent) == 0x000158, "Member 'UPictureInPictureActionData::CallbackEvent' has a wrong offset!");

class UPictureInPictureSourceActionData final : public UPictureInPictureActionData
{
public:
	class FString                                 SourceName;
	TMulticastInlineDelegate<void(const class FString& SourceActionSelected)> SourceActionEvent;
	uint8                                         Pad_188[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureSourceActionData">();
	}
	static class UPictureInPictureSourceActionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureSourceActionData>();
	}
};
static_assert(alignof(UPictureInPictureSourceActionData) == 0x000010, "Wrong alignment on UPictureInPictureSourceActionData");
static_assert(sizeof(UPictureInPictureSourceActionData) == 0x000190, "Wrong size on UPictureInPictureSourceActionData");
static_assert(offsetof(UPictureInPictureSourceActionData, SourceName) == 0x000168, "Member 'UPictureInPictureSourceActionData::SourceName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourceActionData, SourceActionEvent) == 0x000178, "Member 'UPictureInPictureSourceActionData::SourceActionEvent' has a wrong offset!");

class UPictureInPictureAnalyticsManager final : public UObject
{
public:
	TMap<class FString, struct FPictureInPictureAnalyticsPayload> PartnerAnalytics;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureAnalyticsManager">();
	}
	static class UPictureInPictureAnalyticsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureAnalyticsManager>();
	}
};
static_assert(alignof(UPictureInPictureAnalyticsManager) == 0x000008, "Wrong alignment on UPictureInPictureAnalyticsManager");
static_assert(sizeof(UPictureInPictureAnalyticsManager) == 0x000078, "Wrong size on UPictureInPictureAnalyticsManager");
static_assert(offsetof(UPictureInPictureAnalyticsManager, PartnerAnalytics) == 0x000028, "Member 'UPictureInPictureAnalyticsManager::PartnerAnalytics' has a wrong offset!");

}
