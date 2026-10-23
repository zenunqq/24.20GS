#pragma once

#include "Basic.hpp"

#include "SidewaysCodeRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ModularGameplay_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "PlayspaceSystem_classes.hpp"

namespace SDK
{

class USidewaysCheatManager final : public UChildCheatManager
{
public:
	void SetSidewaysState(ESidewaysState SidewaysState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysCheatManager">();
	}
	static class USidewaysCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidewaysCheatManager>();
	}
};
static_assert(alignof(USidewaysCheatManager) == 0x000008, "Wrong alignment on USidewaysCheatManager");
static_assert(sizeof(USidewaysCheatManager) == 0x000028, "Wrong size on USidewaysCheatManager");

class UFortControllerComponent_Sideways final : public UFortControllerComponent
{
public:
	struct FTimerHandle                           UpdateClosestSidewaysHandle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_Sideways">();
	}
	static class UFortControllerComponent_Sideways* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_Sideways>();
	}
};
static_assert(alignof(UFortControllerComponent_Sideways) == 0x000008, "Wrong alignment on UFortControllerComponent_Sideways");
static_assert(sizeof(UFortControllerComponent_Sideways) == 0x0000B0, "Wrong size on UFortControllerComponent_Sideways");
static_assert(offsetof(UFortControllerComponent_Sideways, UpdateClosestSidewaysHandle) == 0x0000A8, "Member 'UFortControllerComponent_Sideways::UpdateClosestSidewaysHandle' has a wrong offset!");

class UPlayspaceComponent_SidewaysDimension final : public UFortPlayspaceComponent
{
public:
	uint8                                         Pad_F8[0x48];
	class UAthenaAIServiceLoot*                   CachedAIServiceLoot;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_SidewaysDimension">();
	}
	static class UPlayspaceComponent_SidewaysDimension* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_SidewaysDimension>();
	}
};
static_assert(alignof(UPlayspaceComponent_SidewaysDimension) == 0x000008, "Wrong alignment on UPlayspaceComponent_SidewaysDimension");
static_assert(sizeof(UPlayspaceComponent_SidewaysDimension) == 0x000148, "Wrong size on UPlayspaceComponent_SidewaysDimension");
static_assert(offsetof(UPlayspaceComponent_SidewaysDimension, CachedAIServiceLoot) == 0x000140, "Member 'UPlayspaceComponent_SidewaysDimension::CachedAIServiceLoot' has a wrong offset!");

class UPlayspaceComponent_SidewaysEncounter final : public UFortPlayspaceComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_SidewaysEncounter">();
	}
	static class UPlayspaceComponent_SidewaysEncounter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_SidewaysEncounter>();
	}
};
static_assert(alignof(UPlayspaceComponent_SidewaysEncounter) == 0x000008, "Wrong alignment on UPlayspaceComponent_SidewaysEncounter");
static_assert(sizeof(UPlayspaceComponent_SidewaysEncounter) == 0x0000F8, "Wrong size on UPlayspaceComponent_SidewaysEncounter");

class USidewaysStateComponent : public UGameFrameworkComponent
{
public:
	ESidewaysState                                SidewaysState;
	uint8                                         Pad_A1[0x7];
	class ASidewaysPlayspace*                     SidewaysPlayspace;
	TMulticastInlineDelegate<void(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* SidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState)> OnSidewaysStateChangedDelegate;
	uint8                                         Pad_C0[0x8];

public:
	void HandleSidewaysStateChanged(class ASidewaysPlayspace* NewSidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState);
	void OnRep_SidewaysPlayspace(class ASidewaysPlayspace* NewSidewaysPlayspace);
	void OnRep_SidewaysState(ESidewaysState LastSidewaysState);
	void SetSidewaysState(ESidewaysState NewState, class ASidewaysPlayspace* NewSidewaysPlayspace);

	ESidewaysState GetSidewaysState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysStateComponent">();
	}
	static class USidewaysStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidewaysStateComponent>();
	}
};
static_assert(alignof(USidewaysStateComponent) == 0x000008, "Wrong alignment on USidewaysStateComponent");
static_assert(sizeof(USidewaysStateComponent) == 0x0000C8, "Wrong size on USidewaysStateComponent");
static_assert(offsetof(USidewaysStateComponent, SidewaysState) == 0x0000A0, "Member 'USidewaysStateComponent::SidewaysState' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent, SidewaysPlayspace) == 0x0000A8, "Member 'USidewaysStateComponent::SidewaysPlayspace' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent, OnSidewaysStateChangedDelegate) == 0x0000B0, "Member 'USidewaysStateComponent::OnSidewaysStateChangedDelegate' has a wrong offset!");

class USidewaysStateComponent_Player final : public USidewaysStateComponent
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;
	class FName                                   SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2];
	class FName                                   SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2];
	float                                         ExtraCorruptionRadius;
	float                                         MinRadiusToHaveAnyCorruption;
	float                                         MaxRadiusForScalingExtraCorruptionRadius;
	float                                         UpdateFrequency;
	uint8                                         Pad_110[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysStateComponent_Player">();
	}
	static class USidewaysStateComponent_Player* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidewaysStateComponent_Player>();
	}
};
static_assert(alignof(USidewaysStateComponent_Player) == 0x000008, "Wrong alignment on USidewaysStateComponent_Player");
static_assert(sizeof(USidewaysStateComponent_Player) == 0x000118, "Wrong size on USidewaysStateComponent_Player");
static_assert(offsetof(USidewaysStateComponent_Player, SidewaysMaterialParameterCollection) == 0x0000C8, "Member 'USidewaysStateComponent_Player::SidewaysMaterialParameterCollection' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent_Player, SidewaysBubbleLocationParameterNamesForLocalPlayers) == 0x0000F0, "Member 'USidewaysStateComponent_Player::SidewaysBubbleLocationParameterNamesForLocalPlayers' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent_Player, SidewaysBubbleRadiusParameterNamesForLocalPlayers) == 0x0000F8, "Member 'USidewaysStateComponent_Player::SidewaysBubbleRadiusParameterNamesForLocalPlayers' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent_Player, ExtraCorruptionRadius) == 0x000100, "Member 'USidewaysStateComponent_Player::ExtraCorruptionRadius' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent_Player, MinRadiusToHaveAnyCorruption) == 0x000104, "Member 'USidewaysStateComponent_Player::MinRadiusToHaveAnyCorruption' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent_Player, MaxRadiusForScalingExtraCorruptionRadius) == 0x000108, "Member 'USidewaysStateComponent_Player::MaxRadiusForScalingExtraCorruptionRadius' has a wrong offset!");
static_assert(offsetof(USidewaysStateComponent_Player, UpdateFrequency) == 0x00010C, "Member 'USidewaysStateComponent_Player::UpdateFrequency' has a wrong offset!");

class USidewaysFeatureAction_HoldGlobalData final : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;
	class FName                                   SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2];
	class FName                                   SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysFeatureAction_HoldGlobalData">();
	}
	static class USidewaysFeatureAction_HoldGlobalData* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidewaysFeatureAction_HoldGlobalData>();
	}
};
static_assert(alignof(USidewaysFeatureAction_HoldGlobalData) == 0x000008, "Wrong alignment on USidewaysFeatureAction_HoldGlobalData");
static_assert(sizeof(USidewaysFeatureAction_HoldGlobalData) == 0x000060, "Wrong size on USidewaysFeatureAction_HoldGlobalData");
static_assert(offsetof(USidewaysFeatureAction_HoldGlobalData, SidewaysMaterialParameterCollection) == 0x000028, "Member 'USidewaysFeatureAction_HoldGlobalData::SidewaysMaterialParameterCollection' has a wrong offset!");
static_assert(offsetof(USidewaysFeatureAction_HoldGlobalData, SidewaysBubbleLocationParameterNamesForLocalPlayers) == 0x000050, "Member 'USidewaysFeatureAction_HoldGlobalData::SidewaysBubbleLocationParameterNamesForLocalPlayers' has a wrong offset!");
static_assert(offsetof(USidewaysFeatureAction_HoldGlobalData, SidewaysBubbleRadiusParameterNamesForLocalPlayers) == 0x000058, "Member 'USidewaysFeatureAction_HoldGlobalData::SidewaysBubbleRadiusParameterNamesForLocalPlayers' has a wrong offset!");

class USidewaysLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class USidewaysStateComponent* GetSidewaysStateComponent(const class AActor* Owner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysLibrary">();
	}
	static class USidewaysLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidewaysLibrary>();
	}
};
static_assert(alignof(USidewaysLibrary) == 0x000008, "Wrong alignment on USidewaysLibrary");
static_assert(sizeof(USidewaysLibrary) == 0x000028, "Wrong size on USidewaysLibrary");

class ASidewaysPlayspace final : public AFortPlayspace
{
public:
	void NotifySizeChanged();
	void RefreshActorsInSideways();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysPlayspace">();
	}
	static class ASidewaysPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASidewaysPlayspace>();
	}
};
static_assert(alignof(ASidewaysPlayspace) == 0x000008, "Wrong alignment on ASidewaysPlayspace");
static_assert(sizeof(ASidewaysPlayspace) == 0x000670, "Wrong size on ASidewaysPlayspace");

class ASidewaysVolume final : public AGameplayVolume
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidewaysVolume">();
	}
	static class ASidewaysVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASidewaysVolume>();
	}
};
static_assert(alignof(ASidewaysVolume) == 0x000008, "Wrong alignment on ASidewaysVolume");
static_assert(sizeof(ASidewaysVolume) == 0x000318, "Wrong size on ASidewaysVolume");

}
