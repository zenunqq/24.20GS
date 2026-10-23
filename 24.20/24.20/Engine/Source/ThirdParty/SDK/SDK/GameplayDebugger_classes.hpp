#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "GameplayDebugger_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class AGameplayDebuggerCategoryReplicator final : public AActor
{
public:
	class APlayerController*                      OwnerPC;
	bool                                          bIsEnabled;
	uint8                                         Pad_291[0x7];
	struct FGameplayDebuggerNetPack               ReplicatedData;
	struct FGameplayDebuggerDebugActor            DebugActor;
	struct FGameplayDebuggerVisLogSync            VisLogSync;
	class UGameplayDebuggerRenderingComponent*    RenderingComp;
	uint8                                         Pad_2D8[0x68];

public:
	void ClientDataPackPacket(const struct FGameplayDebuggerDataPackRPCParams& Params_0);
	void OnRep_ReplicatedData();
	void ServerResetViewPoint();
	void ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId);
	void ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId);
	void ServerSetCategoryEnabled(int32 CategoryId, bool bEnable);
	void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);
	void ServerSetEnabled(bool bEnable);
	void ServerSetViewPoint(const struct FVector& InViewLocation, const struct FVector& InViewDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayDebuggerCategoryReplicator">();
	}
	static class AGameplayDebuggerCategoryReplicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameplayDebuggerCategoryReplicator>();
	}
};
static_assert(alignof(AGameplayDebuggerCategoryReplicator) == 0x000008, "Wrong alignment on AGameplayDebuggerCategoryReplicator");
static_assert(sizeof(AGameplayDebuggerCategoryReplicator) == 0x000340, "Wrong size on AGameplayDebuggerCategoryReplicator");
static_assert(offsetof(AGameplayDebuggerCategoryReplicator, OwnerPC) == 0x000288, "Member 'AGameplayDebuggerCategoryReplicator::OwnerPC' has a wrong offset!");
static_assert(offsetof(AGameplayDebuggerCategoryReplicator, bIsEnabled) == 0x000290, "Member 'AGameplayDebuggerCategoryReplicator::bIsEnabled' has a wrong offset!");
static_assert(offsetof(AGameplayDebuggerCategoryReplicator, ReplicatedData) == 0x000298, "Member 'AGameplayDebuggerCategoryReplicator::ReplicatedData' has a wrong offset!");
static_assert(offsetof(AGameplayDebuggerCategoryReplicator, DebugActor) == 0x0002B0, "Member 'AGameplayDebuggerCategoryReplicator::DebugActor' has a wrong offset!");
static_assert(offsetof(AGameplayDebuggerCategoryReplicator, VisLogSync) == 0x0002C0, "Member 'AGameplayDebuggerCategoryReplicator::VisLogSync' has a wrong offset!");
static_assert(offsetof(AGameplayDebuggerCategoryReplicator, RenderingComp) == 0x0002D0, "Member 'AGameplayDebuggerCategoryReplicator::RenderingComp' has a wrong offset!");

class UGameplayDebuggerConfig final : public UObject
{
public:
	struct FKey                                   ActivationKey;
	struct FKey                                   CategoryRowNextKey;
	struct FKey                                   CategoryRowPrevKey;
	struct FKey                                   CategorySlot0;
	struct FKey                                   CategorySlot1;
	struct FKey                                   CategorySlot2;
	struct FKey                                   CategorySlot3;
	struct FKey                                   CategorySlot4;
	struct FKey                                   CategorySlot5;
	struct FKey                                   CategorySlot6;
	struct FKey                                   CategorySlot7;
	struct FKey                                   CategorySlot8;
	struct FKey                                   CategorySlot9;
	float                                         DebugCanvasPaddingLeft;
	float                                         DebugCanvasPaddingRight;
	float                                         DebugCanvasPaddingTop;
	float                                         DebugCanvasPaddingBottom;
	bool                                          bDebugCanvasEnableTextShadow;
	uint8                                         Pad_171[0x7];
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;
	uint8                                         Pad_198[0xC0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayDebuggerConfig">();
	}
	static class UGameplayDebuggerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayDebuggerConfig>();
	}
};
static_assert(alignof(UGameplayDebuggerConfig) == 0x000008, "Wrong alignment on UGameplayDebuggerConfig");
static_assert(sizeof(UGameplayDebuggerConfig) == 0x000258, "Wrong size on UGameplayDebuggerConfig");
static_assert(offsetof(UGameplayDebuggerConfig, ActivationKey) == 0x000028, "Member 'UGameplayDebuggerConfig::ActivationKey' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategoryRowNextKey) == 0x000040, "Member 'UGameplayDebuggerConfig::CategoryRowNextKey' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategoryRowPrevKey) == 0x000058, "Member 'UGameplayDebuggerConfig::CategoryRowPrevKey' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot0) == 0x000070, "Member 'UGameplayDebuggerConfig::CategorySlot0' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot1) == 0x000088, "Member 'UGameplayDebuggerConfig::CategorySlot1' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot2) == 0x0000A0, "Member 'UGameplayDebuggerConfig::CategorySlot2' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot3) == 0x0000B8, "Member 'UGameplayDebuggerConfig::CategorySlot3' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot4) == 0x0000D0, "Member 'UGameplayDebuggerConfig::CategorySlot4' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot5) == 0x0000E8, "Member 'UGameplayDebuggerConfig::CategorySlot5' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot6) == 0x000100, "Member 'UGameplayDebuggerConfig::CategorySlot6' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot7) == 0x000118, "Member 'UGameplayDebuggerConfig::CategorySlot7' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot8) == 0x000130, "Member 'UGameplayDebuggerConfig::CategorySlot8' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot9) == 0x000148, "Member 'UGameplayDebuggerConfig::CategorySlot9' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingLeft) == 0x000160, "Member 'UGameplayDebuggerConfig::DebugCanvasPaddingLeft' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingRight) == 0x000164, "Member 'UGameplayDebuggerConfig::DebugCanvasPaddingRight' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingTop) == 0x000168, "Member 'UGameplayDebuggerConfig::DebugCanvasPaddingTop' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingBottom) == 0x00016C, "Member 'UGameplayDebuggerConfig::DebugCanvasPaddingBottom' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, bDebugCanvasEnableTextShadow) == 0x000170, "Member 'UGameplayDebuggerConfig::bDebugCanvasEnableTextShadow' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, Categories) == 0x000178, "Member 'UGameplayDebuggerConfig::Categories' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerConfig, Extensions) == 0x000188, "Member 'UGameplayDebuggerConfig::Extensions' has a wrong offset!");

class UGameplayDebuggerUserSettings final : public UDeveloperSettings
{
public:
	uint8                                         bEnableGameplayDebuggerInEditor : 1;
	uint8                                         Pad_31[0x3];
	float                                         MaxViewDistance;
	float                                         MaxViewAngle;
	int32                                         FontSize;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayDebuggerUserSettings">();
	}
	static class UGameplayDebuggerUserSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayDebuggerUserSettings>();
	}
};
static_assert(alignof(UGameplayDebuggerUserSettings) == 0x000008, "Wrong alignment on UGameplayDebuggerUserSettings");
static_assert(sizeof(UGameplayDebuggerUserSettings) == 0x000040, "Wrong size on UGameplayDebuggerUserSettings");
static_assert(offsetof(UGameplayDebuggerUserSettings, MaxViewDistance) == 0x000034, "Member 'UGameplayDebuggerUserSettings::MaxViewDistance' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerUserSettings, MaxViewAngle) == 0x000038, "Member 'UGameplayDebuggerUserSettings::MaxViewAngle' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerUserSettings, FontSize) == 0x00003C, "Member 'UGameplayDebuggerUserSettings::FontSize' has a wrong offset!");

class UGameplayDebuggerLocalController final : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*    CachedReplicator;
	class AGameplayDebuggerPlayerManager*         CachedPlayerManager;
	class AActor*                                 DebugActorCandidate;
	class UFont*                                  HUDFont;
	uint8                                         Pad_48[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayDebuggerLocalController">();
	}
	static class UGameplayDebuggerLocalController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayDebuggerLocalController>();
	}
};
static_assert(alignof(UGameplayDebuggerLocalController) == 0x000008, "Wrong alignment on UGameplayDebuggerLocalController");
static_assert(sizeof(UGameplayDebuggerLocalController) == 0x000088, "Wrong size on UGameplayDebuggerLocalController");
static_assert(offsetof(UGameplayDebuggerLocalController, CachedReplicator) == 0x000028, "Member 'UGameplayDebuggerLocalController::CachedReplicator' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerLocalController, CachedPlayerManager) == 0x000030, "Member 'UGameplayDebuggerLocalController::CachedPlayerManager' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerLocalController, DebugActorCandidate) == 0x000038, "Member 'UGameplayDebuggerLocalController::DebugActorCandidate' has a wrong offset!");
static_assert(offsetof(UGameplayDebuggerLocalController, HUDFont) == 0x000040, "Member 'UGameplayDebuggerLocalController::HUDFont' has a wrong offset!");

class AGameplayDebuggerPlayerManager final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	TArray<struct FGameplayDebuggerPlayerData>    PlayerData;
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;
	uint8                                         Pad_2B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayDebuggerPlayerManager">();
	}
	static class AGameplayDebuggerPlayerManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameplayDebuggerPlayerManager>();
	}
};
static_assert(alignof(AGameplayDebuggerPlayerManager) == 0x000008, "Wrong alignment on AGameplayDebuggerPlayerManager");
static_assert(sizeof(AGameplayDebuggerPlayerManager) == 0x0002B8, "Wrong size on AGameplayDebuggerPlayerManager");
static_assert(offsetof(AGameplayDebuggerPlayerManager, PlayerData) == 0x000290, "Member 'AGameplayDebuggerPlayerManager::PlayerData' has a wrong offset!");
static_assert(offsetof(AGameplayDebuggerPlayerManager, PendingRegistrations) == 0x0002A0, "Member 'AGameplayDebuggerPlayerManager::PendingRegistrations' has a wrong offset!");

class UGameplayDebuggerRenderingComponent final : public UDebugDrawComponent
{
public:
	uint8                                         Pad_5B8[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayDebuggerRenderingComponent">();
	}
	static class UGameplayDebuggerRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayDebuggerRenderingComponent>();
	}
};
static_assert(alignof(UGameplayDebuggerRenderingComponent) == 0x000010, "Wrong alignment on UGameplayDebuggerRenderingComponent");
static_assert(sizeof(UGameplayDebuggerRenderingComponent) == 0x000620, "Wrong size on UGameplayDebuggerRenderingComponent");

}
