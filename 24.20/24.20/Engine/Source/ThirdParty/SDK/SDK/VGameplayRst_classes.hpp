#pragma once

#include "Basic.hpp"

#include "VGameplayRst_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "EntityActor_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAudioComponentBase : public UEntityActorComponent
{
public:
	class UVerseAssetPtr*                         SoundAsset;
	struct FActiveSoundInfo                       ActiveSoundInfo;

public:
	void OnRep_ActiveSoundInfo();
	void OnRep_SoundAsset();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioComponentBase">();
	}
	static class UAudioComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioComponentBase>();
	}
};
static_assert(alignof(UAudioComponentBase) == 0x000008, "Wrong alignment on UAudioComponentBase");
static_assert(sizeof(UAudioComponentBase) == 0x0000A0, "Wrong size on UAudioComponentBase");
static_assert(offsetof(UAudioComponentBase, SoundAsset) == 0x000090, "Member 'UAudioComponentBase::SoundAsset' has a wrong offset!");
static_assert(offsetof(UAudioComponentBase, ActiveSoundInfo) == 0x000098, "Member 'UAudioComponentBase::ActiveSoundInfo' has a wrong offset!");

class UControllerStateComponent final : public UControllerComponent
{
public:
	TArray<class FString>                         ActiveStates;
	uint8                                         Pad_B0[0x20];

public:
	void OnRep_ActiveStates();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControllerStateComponent">();
	}
	static class UControllerStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerStateComponent>();
	}
};
static_assert(alignof(UControllerStateComponent) == 0x000008, "Wrong alignment on UControllerStateComponent");
static_assert(sizeof(UControllerStateComponent) == 0x0000D0, "Wrong size on UControllerStateComponent");
static_assert(offsetof(UControllerStateComponent, ActiveStates) == 0x0000A0, "Member 'UControllerStateComponent::ActiveStates' has a wrong offset!");

class UDatastoreComponentBase : public UEntityActorPlayerComponent
{
public:
	struct FDatastoreState                        ReplicatedDatastoreState;
	uint8                                         Pad_210[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DatastoreComponentBase">();
	}
	static class UDatastoreComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDatastoreComponentBase>();
	}
};
static_assert(alignof(UDatastoreComponentBase) == 0x000008, "Wrong alignment on UDatastoreComponentBase");
static_assert(sizeof(UDatastoreComponentBase) == 0x000228, "Wrong size on UDatastoreComponentBase");
static_assert(offsetof(UDatastoreComponentBase, ReplicatedDatastoreState) == 0x0000E8, "Member 'UDatastoreComponentBase::ReplicatedDatastoreState' has a wrong offset!");

class UVerseLevelStreamingPlayerControllerRpcComponent final : public UActorComponent
{
public:
	void TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);
	void TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseLevelStreamingPlayerControllerRpcComponent">();
	}
	static class UVerseLevelStreamingPlayerControllerRpcComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseLevelStreamingPlayerControllerRpcComponent>();
	}
};
static_assert(alignof(UVerseLevelStreamingPlayerControllerRpcComponent) == 0x000008, "Wrong alignment on UVerseLevelStreamingPlayerControllerRpcComponent");
static_assert(sizeof(UVerseLevelStreamingPlayerControllerRpcComponent) == 0x0000A0, "Wrong size on UVerseLevelStreamingPlayerControllerRpcComponent");

class UVerseLevelStreamingComponentBase : public UEntityActorComponent
{
public:
	struct FVerseLevelStreamingLevelIdentifier    NewLevel;
	struct FVerseLevelStreamingLevelStatus        LevelStatus;
	uint8                                         Pad_E0[0x58];

public:
	void OnLevelShown_Client();
	void OnLevelShown_Server();
	void OnLevelUnloaded_Client();
	void OnLevelUnloaded_Server();
	void OnRep_NewLevel();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseLevelStreamingComponentBase">();
	}
	static class UVerseLevelStreamingComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseLevelStreamingComponentBase>();
	}
};
static_assert(alignof(UVerseLevelStreamingComponentBase) == 0x000008, "Wrong alignment on UVerseLevelStreamingComponentBase");
static_assert(sizeof(UVerseLevelStreamingComponentBase) == 0x000138, "Wrong size on UVerseLevelStreamingComponentBase");
static_assert(offsetof(UVerseLevelStreamingComponentBase, NewLevel) == 0x000090, "Member 'UVerseLevelStreamingComponentBase::NewLevel' has a wrong offset!");
static_assert(offsetof(UVerseLevelStreamingComponentBase, LevelStatus) == 0x0000B8, "Member 'UVerseLevelStreamingComponentBase::LevelStatus' has a wrong offset!");

class UPointLightComponentBase : public UEntityActorComponent
{
public:
	class UVerseLightPropertiesBase*              ReplicatedLightProperties;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PointLightComponentBase">();
	}
	static class UPointLightComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPointLightComponentBase>();
	}
};
static_assert(alignof(UPointLightComponentBase) == 0x000008, "Wrong alignment on UPointLightComponentBase");
static_assert(sizeof(UPointLightComponentBase) == 0x000098, "Wrong size on UPointLightComponentBase");
static_assert(offsetof(UPointLightComponentBase, ReplicatedLightProperties) == 0x000090, "Member 'UPointLightComponentBase::ReplicatedLightProperties' has a wrong offset!");

class USpotLightComponentBase : public UEntityActorComponent
{
public:
	class UVerseLightPropertiesBase*              ReplicatedLightProperties;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpotLightComponentBase">();
	}
	static class USpotLightComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpotLightComponentBase>();
	}
};
static_assert(alignof(USpotLightComponentBase) == 0x000008, "Wrong alignment on USpotLightComponentBase");
static_assert(sizeof(USpotLightComponentBase) == 0x000098, "Wrong size on USpotLightComponentBase");
static_assert(offsetof(USpotLightComponentBase, ReplicatedLightProperties) == 0x000090, "Member 'USpotLightComponentBase::ReplicatedLightProperties' has a wrong offset!");

class UVerseLightPropertiesBase : public UObject
{
public:
	float                                         Intensity;
	struct FLinearColor                           LightColor;
	uint8                                         Pad_3C[0x4];
	class ULightComponentBase*                    LightComponent;

public:
	void OnRep_Intensity();
	void OnRep_LightColor();
	void OnRep_LightComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseLightPropertiesBase">();
	}
	static class UVerseLightPropertiesBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseLightPropertiesBase>();
	}
};
static_assert(alignof(UVerseLightPropertiesBase) == 0x000008, "Wrong alignment on UVerseLightPropertiesBase");
static_assert(sizeof(UVerseLightPropertiesBase) == 0x000048, "Wrong size on UVerseLightPropertiesBase");
static_assert(offsetof(UVerseLightPropertiesBase, Intensity) == 0x000028, "Member 'UVerseLightPropertiesBase::Intensity' has a wrong offset!");
static_assert(offsetof(UVerseLightPropertiesBase, LightColor) == 0x00002C, "Member 'UVerseLightPropertiesBase::LightColor' has a wrong offset!");
static_assert(offsetof(UVerseLightPropertiesBase, LightComponent) == 0x000040, "Member 'UVerseLightPropertiesBase::LightComponent' has a wrong offset!");

class UVerseLocalLightProperties : public UVerseLightPropertiesBase
{
public:
	float                                         AttenuationRadius;
	uint8                                         Pad_4C[0x4];

public:
	void OnRep_AttenuationRadius();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseLocalLightProperties">();
	}
	static class UVerseLocalLightProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseLocalLightProperties>();
	}
};
static_assert(alignof(UVerseLocalLightProperties) == 0x000008, "Wrong alignment on UVerseLocalLightProperties");
static_assert(sizeof(UVerseLocalLightProperties) == 0x000050, "Wrong size on UVerseLocalLightProperties");
static_assert(offsetof(UVerseLocalLightProperties, AttenuationRadius) == 0x000048, "Member 'UVerseLocalLightProperties::AttenuationRadius' has a wrong offset!");

class UVersePointLightProperties : public UVerseLocalLightProperties
{
public:
	float                                         SourceRadius;
	float                                         SourceLength;

public:
	void OnRep_SourceLength();
	void OnRep_SourceRadius();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VersePointLightProperties">();
	}
	static class UVersePointLightProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVersePointLightProperties>();
	}
};
static_assert(alignof(UVersePointLightProperties) == 0x000008, "Wrong alignment on UVersePointLightProperties");
static_assert(sizeof(UVersePointLightProperties) == 0x000058, "Wrong size on UVersePointLightProperties");
static_assert(offsetof(UVersePointLightProperties, SourceRadius) == 0x000050, "Member 'UVersePointLightProperties::SourceRadius' has a wrong offset!");
static_assert(offsetof(UVersePointLightProperties, SourceLength) == 0x000054, "Member 'UVersePointLightProperties::SourceLength' has a wrong offset!");

class UVerseSpotLightProperties final : public UVersePointLightProperties
{
public:
	float                                         InnerConeAngle;
	float                                         OuterConeAngle;

public:
	void OnRep_InnerConeAngle();
	void OnRep_OuterConeAngle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseSpotLightProperties">();
	}
	static class UVerseSpotLightProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseSpotLightProperties>();
	}
};
static_assert(alignof(UVerseSpotLightProperties) == 0x000008, "Wrong alignment on UVerseSpotLightProperties");
static_assert(sizeof(UVerseSpotLightProperties) == 0x000060, "Wrong size on UVerseSpotLightProperties");
static_assert(offsetof(UVerseSpotLightProperties, InnerConeAngle) == 0x000058, "Member 'UVerseSpotLightProperties::InnerConeAngle' has a wrong offset!");
static_assert(offsetof(UVerseSpotLightProperties, OuterConeAngle) == 0x00005C, "Member 'UVerseSpotLightProperties::OuterConeAngle' has a wrong offset!");

class UParticleSystemComponentBase : public UEntityActorComponent
{
public:
	class UVerseAssetPtr*                         ParticleSystemAsset;
	bool                                          bActive;
	uint8                                         Pad_99[0x7];

public:
	void OnRep_bActive();
	void OnRep_ParticleSystemAsset();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ParticleSystemComponentBase">();
	}
	static class UParticleSystemComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleSystemComponentBase>();
	}
};
static_assert(alignof(UParticleSystemComponentBase) == 0x000008, "Wrong alignment on UParticleSystemComponentBase");
static_assert(sizeof(UParticleSystemComponentBase) == 0x0000A0, "Wrong size on UParticleSystemComponentBase");
static_assert(offsetof(UParticleSystemComponentBase, ParticleSystemAsset) == 0x000090, "Member 'UParticleSystemComponentBase::ParticleSystemAsset' has a wrong offset!");
static_assert(offsetof(UParticleSystemComponentBase, bActive) == 0x000098, "Member 'UParticleSystemComponentBase::bActive' has a wrong offset!");

}
