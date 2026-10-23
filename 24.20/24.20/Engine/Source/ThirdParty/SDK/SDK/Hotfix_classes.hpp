#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Hotfix_structs.hpp"

namespace SDK
{

class UOnlineHotfixManager : public UObject
{
public:
	uint8                                         Pad_28[0x200];
	class FString                                 OSSName;
	class FString                                 HotfixManagerClassName;
	class FString                                 DebugPrefix;
	TArray<class UObject*>                        AssetsHotfixedFromIniFiles;

public:
	void StartHotfixProcess();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineHotfixManager">();
	}
	static class UOnlineHotfixManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineHotfixManager>();
	}
};
static_assert(alignof(UOnlineHotfixManager) == 0x000008, "Wrong alignment on UOnlineHotfixManager");
static_assert(sizeof(UOnlineHotfixManager) == 0x000268, "Wrong size on UOnlineHotfixManager");
static_assert(offsetof(UOnlineHotfixManager, OSSName) == 0x000228, "Member 'UOnlineHotfixManager::OSSName' has a wrong offset!");
static_assert(offsetof(UOnlineHotfixManager, HotfixManagerClassName) == 0x000238, "Member 'UOnlineHotfixManager::HotfixManagerClassName' has a wrong offset!");
static_assert(offsetof(UOnlineHotfixManager, DebugPrefix) == 0x000248, "Member 'UOnlineHotfixManager::DebugPrefix' has a wrong offset!");
static_assert(offsetof(UOnlineHotfixManager, AssetsHotfixedFromIniFiles) == 0x000258, "Member 'UOnlineHotfixManager::AssetsHotfixedFromIniFiles' has a wrong offset!");

class UUpdateManager : public UObject
{
public:
	uint8                                         Pad_28[0x60];
	float                                         UpdateCheckStartDelay;
	float                                         UpdateCheckCachedResponseDelay;
	float                                         HotfixCheckCompleteDelay;
	float                                         UpdateCheckCompleteDelay;
	float                                         HotfixAvailabilityCheckCompleteDelay;
	float                                         UpdateCheckAvailabilityCompleteDelay;
	uint8                                         Pad_A0[0x4];
	int32                                         AppSuspendedUpdateCheckTimeSeconds;
	uint8                                         Pad_A8[0x8];
	bool                                          bPlatformEnvironmentDetected;
	bool                                          bInitialUpdateFinished;
	bool                                          bCheckHotfixAvailabilityOnly;
	EUpdateState                                  CurrentUpdateState;
	int32                                         WorstNumFilesPendingLoadViewed;
	uint8                                         Pad_B8[0x4];
	EHotfixResult                                 LastHotfixResult;
	uint8                                         Pad_BD[0x23];
	struct FDateTime                              LastUpdateCheck[0x2];
	EUpdateCompletionStatus                       LastCompletionResult[0x2];
	uint8                                         Pad_F2[0x26];
	class UEnum*                                  UpdateStateEnum;
	class UEnum*                                  UpdateCompletionEnum;
	struct FUpdateContextDefinition               UpdateContextDefinitionUnknown;
	TArray<struct FUpdateContextDefinition>       UpdateContextDefinitions;
	uint8                                         Pad_1A0[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UpdateManager">();
	}
	static class UUpdateManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpdateManager>();
	}
};
static_assert(alignof(UUpdateManager) == 0x000008, "Wrong alignment on UUpdateManager");
static_assert(sizeof(UUpdateManager) == 0x0001F8, "Wrong size on UUpdateManager");
static_assert(offsetof(UUpdateManager, UpdateCheckStartDelay) == 0x000088, "Member 'UUpdateManager::UpdateCheckStartDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCheckCachedResponseDelay) == 0x00008C, "Member 'UUpdateManager::UpdateCheckCachedResponseDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, HotfixCheckCompleteDelay) == 0x000090, "Member 'UUpdateManager::HotfixCheckCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCheckCompleteDelay) == 0x000094, "Member 'UUpdateManager::UpdateCheckCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, HotfixAvailabilityCheckCompleteDelay) == 0x000098, "Member 'UUpdateManager::HotfixAvailabilityCheckCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCheckAvailabilityCompleteDelay) == 0x00009C, "Member 'UUpdateManager::UpdateCheckAvailabilityCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, AppSuspendedUpdateCheckTimeSeconds) == 0x0000A4, "Member 'UUpdateManager::AppSuspendedUpdateCheckTimeSeconds' has a wrong offset!");
static_assert(offsetof(UUpdateManager, bPlatformEnvironmentDetected) == 0x0000B0, "Member 'UUpdateManager::bPlatformEnvironmentDetected' has a wrong offset!");
static_assert(offsetof(UUpdateManager, bInitialUpdateFinished) == 0x0000B1, "Member 'UUpdateManager::bInitialUpdateFinished' has a wrong offset!");
static_assert(offsetof(UUpdateManager, bCheckHotfixAvailabilityOnly) == 0x0000B2, "Member 'UUpdateManager::bCheckHotfixAvailabilityOnly' has a wrong offset!");
static_assert(offsetof(UUpdateManager, CurrentUpdateState) == 0x0000B3, "Member 'UUpdateManager::CurrentUpdateState' has a wrong offset!");
static_assert(offsetof(UUpdateManager, WorstNumFilesPendingLoadViewed) == 0x0000B4, "Member 'UUpdateManager::WorstNumFilesPendingLoadViewed' has a wrong offset!");
static_assert(offsetof(UUpdateManager, LastHotfixResult) == 0x0000BC, "Member 'UUpdateManager::LastHotfixResult' has a wrong offset!");
static_assert(offsetof(UUpdateManager, LastUpdateCheck) == 0x0000E0, "Member 'UUpdateManager::LastUpdateCheck' has a wrong offset!");
static_assert(offsetof(UUpdateManager, LastCompletionResult) == 0x0000F0, "Member 'UUpdateManager::LastCompletionResult' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateStateEnum) == 0x000118, "Member 'UUpdateManager::UpdateStateEnum' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCompletionEnum) == 0x000120, "Member 'UUpdateManager::UpdateCompletionEnum' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateContextDefinitionUnknown) == 0x000128, "Member 'UUpdateManager::UpdateContextDefinitionUnknown' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateContextDefinitions) == 0x000190, "Member 'UUpdateManager::UpdateContextDefinitions' has a wrong offset!");

}
