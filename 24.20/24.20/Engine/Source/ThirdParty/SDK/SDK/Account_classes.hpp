#pragma once

#include "Basic.hpp"

#include "Account_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UExternalAccountProvider final : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig>  Services;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ExternalAccountProvider">();
	}
	static class UExternalAccountProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExternalAccountProvider>();
	}
};
static_assert(alignof(UExternalAccountProvider) == 0x000008, "Wrong alignment on UExternalAccountProvider");
static_assert(sizeof(UExternalAccountProvider) == 0x000038, "Wrong size on UExternalAccountProvider");
static_assert(offsetof(UExternalAccountProvider, Services) == 0x000028, "Member 'UExternalAccountProvider::Services' has a wrong offset!");

class UOnlineAccountCommon : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class FString                                 AvailabilityServiceGameName;
	bool                                          bRequireLightswitchAtStartup;
	uint8                                         Pad_49[0x7];
	class FString                                 EulaKey;
	TArray<class FString>                         EulaKeys;
	TMap<class FString, class FString>            EulaKeyMapping;
	bool                                          bEnableWaitingRoom;
	uint8                                         Pad_C1[0x7];
	TArray<struct FWebEnvUrl>                     WebCreateEpicAccountUrl;
	bool                                          bAllowLocalLogout;
	uint8                                         Pad_D9[0x3F];
	float                                         DefaultLoginStepTimeout;
	uint8                                         Pad_11C[0x4];
	TMap<class FName, float>                      CustomLoginStepTimeouts;
	bool                                          bEnableDevLoginStepTimeouts;
	uint8                                         Pad_171[0x67];
	class FString                                 RedeemAccessUrl;
	class FString                                 RequestFreeAccessUrl;
	class FString                                 RealGameAccessUrl;
	float                                         SkipRedeemOfflinePurchasesChance;
	bool                                          bUseFreeAccessInsteadOfGameAccess;
	bool                                          bShouldGrantFreeAccess;
	uint8                                         Pad_20E[0x1];
	bool                                          bAllowHomeSharingAccess;
	bool                                          bRequireUGCPrivilege;
	uint8                                         Pad_211[0x22F];
	float                                         AccessGrantDelaySeconds;
	uint8                                         Pad_444[0x4];
	class UWaitingRoomState*                      WaitingRoomState;
	uint8                                         Pad_450[0x360];
	bool                                          bAutoCreateHeadlessAccount;
	uint8                                         Pad_7B1[0xD7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineAccountCommon">();
	}
	static class UOnlineAccountCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineAccountCommon>();
	}
};
static_assert(alignof(UOnlineAccountCommon) == 0x000008, "Wrong alignment on UOnlineAccountCommon");
static_assert(sizeof(UOnlineAccountCommon) == 0x000888, "Wrong size on UOnlineAccountCommon");
static_assert(offsetof(UOnlineAccountCommon, AvailabilityServiceGameName) == 0x000038, "Member 'UOnlineAccountCommon::AvailabilityServiceGameName' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bRequireLightswitchAtStartup) == 0x000048, "Member 'UOnlineAccountCommon::bRequireLightswitchAtStartup' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, EulaKey) == 0x000050, "Member 'UOnlineAccountCommon::EulaKey' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, EulaKeys) == 0x000060, "Member 'UOnlineAccountCommon::EulaKeys' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, EulaKeyMapping) == 0x000070, "Member 'UOnlineAccountCommon::EulaKeyMapping' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bEnableWaitingRoom) == 0x0000C0, "Member 'UOnlineAccountCommon::bEnableWaitingRoom' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, WebCreateEpicAccountUrl) == 0x0000C8, "Member 'UOnlineAccountCommon::WebCreateEpicAccountUrl' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bAllowLocalLogout) == 0x0000D8, "Member 'UOnlineAccountCommon::bAllowLocalLogout' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, DefaultLoginStepTimeout) == 0x000118, "Member 'UOnlineAccountCommon::DefaultLoginStepTimeout' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, CustomLoginStepTimeouts) == 0x000120, "Member 'UOnlineAccountCommon::CustomLoginStepTimeouts' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bEnableDevLoginStepTimeouts) == 0x000170, "Member 'UOnlineAccountCommon::bEnableDevLoginStepTimeouts' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, RedeemAccessUrl) == 0x0001D8, "Member 'UOnlineAccountCommon::RedeemAccessUrl' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, RequestFreeAccessUrl) == 0x0001E8, "Member 'UOnlineAccountCommon::RequestFreeAccessUrl' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, RealGameAccessUrl) == 0x0001F8, "Member 'UOnlineAccountCommon::RealGameAccessUrl' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, SkipRedeemOfflinePurchasesChance) == 0x000208, "Member 'UOnlineAccountCommon::SkipRedeemOfflinePurchasesChance' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bUseFreeAccessInsteadOfGameAccess) == 0x00020C, "Member 'UOnlineAccountCommon::bUseFreeAccessInsteadOfGameAccess' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bShouldGrantFreeAccess) == 0x00020D, "Member 'UOnlineAccountCommon::bShouldGrantFreeAccess' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bAllowHomeSharingAccess) == 0x00020F, "Member 'UOnlineAccountCommon::bAllowHomeSharingAccess' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bRequireUGCPrivilege) == 0x000210, "Member 'UOnlineAccountCommon::bRequireUGCPrivilege' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, AccessGrantDelaySeconds) == 0x000440, "Member 'UOnlineAccountCommon::AccessGrantDelaySeconds' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, WaitingRoomState) == 0x000448, "Member 'UOnlineAccountCommon::WaitingRoomState' has a wrong offset!");
static_assert(offsetof(UOnlineAccountCommon, bAutoCreateHeadlessAccount) == 0x0007B0, "Member 'UOnlineAccountCommon::bAutoCreateHeadlessAccount' has a wrong offset!");

class UWaitingRoomState final : public UObject
{
public:
	uint8                                         Pad_28[0x34];
	int32                                         GracePeriodMins;
	uint8                                         Pad_60[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaitingRoomState">();
	}
	static class UWaitingRoomState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaitingRoomState>();
	}
};
static_assert(alignof(UWaitingRoomState) == 0x000008, "Wrong alignment on UWaitingRoomState");
static_assert(sizeof(UWaitingRoomState) == 0x000088, "Wrong size on UWaitingRoomState");
static_assert(offsetof(UWaitingRoomState, GracePeriodMins) == 0x00005C, "Member 'UWaitingRoomState::GracePeriodMins' has a wrong offset!");

}
