#pragma once

#include "Basic.hpp"

#include "SoundCueTemplates_classes.hpp"
#include "FortSoundCueTemplates_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UFortSoundCueTemplateBase : public USoundCueTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSoundCueTemplateBase">();
	}
	static class UFortSoundCueTemplateBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSoundCueTemplateBase>();
	}
};
static_assert(alignof(UFortSoundCueTemplateBase) == 0x000008, "Wrong alignment on UFortSoundCueTemplateBase");
static_assert(sizeof(UFortSoundCueTemplateBase) == 0x000560, "Wrong size on UFortSoundCueTemplateBase");

class UEmoteBase : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EmoteBase">();
	}
	static class UEmoteBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteBase>();
	}
};
static_assert(alignof(UEmoteBase) == 0x000008, "Wrong alignment on UEmoteBase");
static_assert(sizeof(UEmoteBase) == 0x000560, "Wrong size on UEmoteBase");

class UEmoteFoley final : public UEmoteBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EmoteFoley">();
	}
	static class UEmoteFoley* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteFoley>();
	}
};
static_assert(alignof(UEmoteFoley) == 0x000008, "Wrong alignment on UEmoteFoley");
static_assert(sizeof(UEmoteFoley) == 0x000560, "Wrong size on UEmoteFoley");

class UFortSoundCueTemplateDefaults : public UDataAsset
{
public:
	class USoundClass*                            SoundClass;
	class USoundAttenuation*                      Attenuation;
	class USoundConcurrency*                      Concurrency;
	float                                         VolumeMultiplier;
	float                                         PitchMultiplier;
	TArray<struct FFortSubmixPair>                SubmixSends;
	class USoundWave*                             LicensedTrackAlternative;
	class USoundSubmixBase*                       LicensedSubmix;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSoundCueTemplateDefaults">();
	}
	static class UFortSoundCueTemplateDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSoundCueTemplateDefaults>();
	}
};
static_assert(alignof(UFortSoundCueTemplateDefaults) == 0x000008, "Wrong alignment on UFortSoundCueTemplateDefaults");
static_assert(sizeof(UFortSoundCueTemplateDefaults) == 0x000070, "Wrong size on UFortSoundCueTemplateDefaults");
static_assert(offsetof(UFortSoundCueTemplateDefaults, SoundClass) == 0x000030, "Member 'UFortSoundCueTemplateDefaults::SoundClass' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, Attenuation) == 0x000038, "Member 'UFortSoundCueTemplateDefaults::Attenuation' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, Concurrency) == 0x000040, "Member 'UFortSoundCueTemplateDefaults::Concurrency' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, VolumeMultiplier) == 0x000048, "Member 'UFortSoundCueTemplateDefaults::VolumeMultiplier' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, PitchMultiplier) == 0x00004C, "Member 'UFortSoundCueTemplateDefaults::PitchMultiplier' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, SubmixSends) == 0x000050, "Member 'UFortSoundCueTemplateDefaults::SubmixSends' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, LicensedTrackAlternative) == 0x000060, "Member 'UFortSoundCueTemplateDefaults::LicensedTrackAlternative' has a wrong offset!");
static_assert(offsetof(UFortSoundCueTemplateDefaults, LicensedSubmix) == 0x000068, "Member 'UFortSoundCueTemplateDefaults::LicensedSubmix' has a wrong offset!");

class UPhysicsImpactSCTDefaults final : public UFortSoundCueTemplateDefaults
{
public:
	class FName                                   ImpactTypeParameterName;
	class FName                                   StrengthParameterName;
	struct FPhysicsImpactData                     Light;
	struct FPhysicsImpactData                     Medium;
	struct FPhysicsImpactData                     Heavy;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsImpactSCTDefaults">();
	}
	static class UPhysicsImpactSCTDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsImpactSCTDefaults>();
	}
};
static_assert(alignof(UPhysicsImpactSCTDefaults) == 0x000008, "Wrong alignment on UPhysicsImpactSCTDefaults");
static_assert(sizeof(UPhysicsImpactSCTDefaults) == 0x000180, "Wrong size on UPhysicsImpactSCTDefaults");
static_assert(offsetof(UPhysicsImpactSCTDefaults, ImpactTypeParameterName) == 0x000070, "Member 'UPhysicsImpactSCTDefaults::ImpactTypeParameterName' has a wrong offset!");
static_assert(offsetof(UPhysicsImpactSCTDefaults, StrengthParameterName) == 0x000074, "Member 'UPhysicsImpactSCTDefaults::StrengthParameterName' has a wrong offset!");
static_assert(offsetof(UPhysicsImpactSCTDefaults, Light) == 0x000078, "Member 'UPhysicsImpactSCTDefaults::Light' has a wrong offset!");
static_assert(offsetof(UPhysicsImpactSCTDefaults, Medium) == 0x0000D0, "Member 'UPhysicsImpactSCTDefaults::Medium' has a wrong offset!");
static_assert(offsetof(UPhysicsImpactSCTDefaults, Heavy) == 0x000128, "Member 'UPhysicsImpactSCTDefaults::Heavy' has a wrong offset!");

class UEmoteMusic final : public UEmoteBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EmoteMusic">();
	}
	static class UEmoteMusic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteMusic>();
	}
};
static_assert(alignof(UEmoteMusic) == 0x000008, "Wrong alignment on UEmoteMusic");
static_assert(sizeof(UEmoteMusic) == 0x000560, "Wrong size on UEmoteMusic");

class UEmoteMusic3P final : public UEmoteBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EmoteMusic3P">();
	}
	static class UEmoteMusic3P* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteMusic3P>();
	}
};
static_assert(alignof(UEmoteMusic3P) == 0x000008, "Wrong alignment on UEmoteMusic3P");
static_assert(sizeof(UEmoteMusic3P) == 0x000560, "Wrong size on UEmoteMusic3P");

class UPlayerFoleyBase : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerFoleyBase">();
	}
	static class UPlayerFoleyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerFoleyBase>();
	}
};
static_assert(alignof(UPlayerFoleyBase) == 0x000008, "Wrong alignment on UPlayerFoleyBase");
static_assert(sizeof(UPlayerFoleyBase) == 0x000560, "Wrong size on UPlayerFoleyBase");

class UMusicPack final : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicPack">();
	}
	static class UMusicPack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicPack>();
	}
};
static_assert(alignof(UMusicPack) == 0x000008, "Wrong alignment on UMusicPack");
static_assert(sizeof(UMusicPack) == 0x000560, "Wrong size on UMusicPack");

class UPlayerFoley : public UPlayerFoleyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerFoley">();
	}
	static class UPlayerFoley* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerFoley>();
	}
};
static_assert(alignof(UPlayerFoley) == 0x000008, "Wrong alignment on UPlayerFoley");
static_assert(sizeof(UPlayerFoley) == 0x000560, "Wrong size on UPlayerFoley");

class UPickaxeBase : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PickaxeBase">();
	}
	static class UPickaxeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeBase>();
	}
};
static_assert(alignof(UPickaxeBase) == 0x000008, "Wrong alignment on UPickaxeBase");
static_assert(sizeof(UPickaxeBase) == 0x000560, "Wrong size on UPickaxeBase");

class UPickaxeSwing final : public UPickaxeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PickaxeSwing">();
	}
	static class UPickaxeSwing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeSwing>();
	}
};
static_assert(alignof(UPickaxeSwing) == 0x000008, "Wrong alignment on UPickaxeSwing");
static_assert(sizeof(UPickaxeSwing) == 0x000560, "Wrong size on UPickaxeSwing");

class UFootstepFoley final : public UPlayerFoley
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FootstepFoley">();
	}
	static class UFootstepFoley* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFootstepFoley>();
	}
};
static_assert(alignof(UFootstepFoley) == 0x000008, "Wrong alignment on UFootstepFoley");
static_assert(sizeof(UFootstepFoley) == 0x000560, "Wrong size on UFootstepFoley");

class UFortSoundCueTemplateDefaultSettings final : public UDataAsset
{
public:
	TMap<TSubclassOf<class UFortSoundCueTemplateBase>, class UFortSoundCueTemplateDefaults*> TemplateDefaults;

public:
	class UFortSoundCueTemplateDefaults* GetSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSoundCueTemplateDefaultSettings">();
	}
	static class UFortSoundCueTemplateDefaultSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSoundCueTemplateDefaultSettings>();
	}
};
static_assert(alignof(UFortSoundCueTemplateDefaultSettings) == 0x000008, "Wrong alignment on UFortSoundCueTemplateDefaultSettings");
static_assert(sizeof(UFortSoundCueTemplateDefaultSettings) == 0x000080, "Wrong size on UFortSoundCueTemplateDefaultSettings");
static_assert(offsetof(UFortSoundCueTemplateDefaultSettings, TemplateDefaults) == 0x000030, "Member 'UFortSoundCueTemplateDefaultSettings::TemplateDefaults' has a wrong offset!");

class UFortSoundCueTemplateSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UFortSoundCueTemplateDefaultSettings> DefaultTemplateSettings;

public:
	class UFortSoundCueTemplateDefaults* GetDefaultSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSoundCueTemplateSettings">();
	}
	static class UFortSoundCueTemplateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSoundCueTemplateSettings>();
	}
};
static_assert(alignof(UFortSoundCueTemplateSettings) == 0x000008, "Wrong alignment on UFortSoundCueTemplateSettings");
static_assert(sizeof(UFortSoundCueTemplateSettings) == 0x000058, "Wrong size on UFortSoundCueTemplateSettings");
static_assert(offsetof(UFortSoundCueTemplateSettings, DefaultTemplateSettings) == 0x000030, "Member 'UFortSoundCueTemplateSettings::DefaultTemplateSettings' has a wrong offset!");

class UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSoundCueTemplateSimple">();
	}
	static class UFortSoundCueTemplateSimple* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSoundCueTemplateSimple>();
	}
};
static_assert(alignof(UFortSoundCueTemplateSimple) == 0x000008, "Wrong alignment on UFortSoundCueTemplateSimple");
static_assert(sizeof(UFortSoundCueTemplateSimple) == 0x000560, "Wrong size on UFortSoundCueTemplateSimple");

class UGliderThrustSCTDefaults final : public UFortSoundCueTemplateDefaults
{
public:
	struct FGliderThrustData                      Forward;
	struct FGliderThrustData                      Sideways;
	struct FGliderThrustData                      Backwards;
	struct FGliderThrustData                      AnyDirection;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GliderThrustSCTDefaults">();
	}
	static class UGliderThrustSCTDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderThrustSCTDefaults>();
	}
};
static_assert(alignof(UGliderThrustSCTDefaults) == 0x000008, "Wrong alignment on UGliderThrustSCTDefaults");
static_assert(sizeof(UGliderThrustSCTDefaults) == 0x0001D0, "Wrong size on UGliderThrustSCTDefaults");
static_assert(offsetof(UGliderThrustSCTDefaults, Forward) == 0x000070, "Member 'UGliderThrustSCTDefaults::Forward' has a wrong offset!");
static_assert(offsetof(UGliderThrustSCTDefaults, Sideways) == 0x0000C8, "Member 'UGliderThrustSCTDefaults::Sideways' has a wrong offset!");
static_assert(offsetof(UGliderThrustSCTDefaults, Backwards) == 0x000120, "Member 'UGliderThrustSCTDefaults::Backwards' has a wrong offset!");
static_assert(offsetof(UGliderThrustSCTDefaults, AnyDirection) == 0x000178, "Member 'UGliderThrustSCTDefaults::AnyDirection' has a wrong offset!");

class UGliderThrustLoop final : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GliderThrustLoop">();
	}
	static class UGliderThrustLoop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderThrustLoop>();
	}
};
static_assert(alignof(UGliderThrustLoop) == 0x000008, "Wrong alignment on UGliderThrustLoop");
static_assert(sizeof(UGliderThrustLoop) == 0x000560, "Wrong size on UGliderThrustLoop");

class UGliderThrustStart final : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GliderThrustStart">();
	}
	static class UGliderThrustStart* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderThrustStart>();
	}
};
static_assert(alignof(UGliderThrustStart) == 0x000008, "Wrong alignment on UGliderThrustStart");
static_assert(sizeof(UGliderThrustStart) == 0x000560, "Wrong size on UGliderThrustStart");

class UGliderOpen final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GliderOpen">();
	}
	static class UGliderOpen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderOpen>();
	}
};
static_assert(alignof(UGliderOpen) == 0x000008, "Wrong alignment on UGliderOpen");
static_assert(sizeof(UGliderOpen) == 0x000560, "Wrong size on UGliderOpen");

class UGliderClose final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GliderClose">();
	}
	static class UGliderClose* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGliderClose>();
	}
};
static_assert(alignof(UGliderClose) == 0x000008, "Wrong alignment on UGliderClose");
static_assert(sizeof(UGliderClose) == 0x000560, "Wrong size on UGliderClose");

class UPhysicsStateSCTDefaults final : public UFortSoundCueTemplateDefaults
{
public:
	class FName                                   SpeedParameterName;
	uint8                                         Pad_74[0x4];
	struct FPhysicsStateData                      Rolling;
	struct FPhysicsStateData                      Sliding;
	struct FPhysicsStateData                      Flying;
	struct FPhysicsStateData                      Floating;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsStateSCTDefaults">();
	}
	static class UPhysicsStateSCTDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsStateSCTDefaults>();
	}
};
static_assert(alignof(UPhysicsStateSCTDefaults) == 0x000008, "Wrong alignment on UPhysicsStateSCTDefaults");
static_assert(sizeof(UPhysicsStateSCTDefaults) == 0x0002B8, "Wrong size on UPhysicsStateSCTDefaults");
static_assert(offsetof(UPhysicsStateSCTDefaults, SpeedParameterName) == 0x000070, "Member 'UPhysicsStateSCTDefaults::SpeedParameterName' has a wrong offset!");
static_assert(offsetof(UPhysicsStateSCTDefaults, Rolling) == 0x000078, "Member 'UPhysicsStateSCTDefaults::Rolling' has a wrong offset!");
static_assert(offsetof(UPhysicsStateSCTDefaults, Sliding) == 0x000108, "Member 'UPhysicsStateSCTDefaults::Sliding' has a wrong offset!");
static_assert(offsetof(UPhysicsStateSCTDefaults, Flying) == 0x000198, "Member 'UPhysicsStateSCTDefaults::Flying' has a wrong offset!");
static_assert(offsetof(UPhysicsStateSCTDefaults, Floating) == 0x000228, "Member 'UPhysicsStateSCTDefaults::Floating' has a wrong offset!");

class UPhysicsStateLoop final : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsStateLoop">();
	}
	static class UPhysicsStateLoop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsStateLoop>();
	}
};
static_assert(alignof(UPhysicsStateLoop) == 0x000008, "Wrong alignment on UPhysicsStateLoop");
static_assert(sizeof(UPhysicsStateLoop) == 0x000560, "Wrong size on UPhysicsStateLoop");

class UPhysicsImpact final : public UFortSoundCueTemplateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsImpact">();
	}
	static class UPhysicsImpact* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsImpact>();
	}
};
static_assert(alignof(UPhysicsImpact) == 0x000008, "Wrong alignment on UPhysicsImpact");
static_assert(sizeof(UPhysicsImpact) == 0x000560, "Wrong size on UPhysicsImpact");

class UPickaxeSCTDefaults final : public UFortSoundCueTemplateDefaults
{
public:
	class USoundAttenuation*                      CloseAttenuation;
	class USoundAttenuation*                      DistantAttenuation;
	TArray<class USoundWave*>                     DistantVariations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PickaxeSCTDefaults">();
	}
	static class UPickaxeSCTDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeSCTDefaults>();
	}
};
static_assert(alignof(UPickaxeSCTDefaults) == 0x000008, "Wrong alignment on UPickaxeSCTDefaults");
static_assert(sizeof(UPickaxeSCTDefaults) == 0x000090, "Wrong size on UPickaxeSCTDefaults");
static_assert(offsetof(UPickaxeSCTDefaults, CloseAttenuation) == 0x000070, "Member 'UPickaxeSCTDefaults::CloseAttenuation' has a wrong offset!");
static_assert(offsetof(UPickaxeSCTDefaults, DistantAttenuation) == 0x000078, "Member 'UPickaxeSCTDefaults::DistantAttenuation' has a wrong offset!");
static_assert(offsetof(UPickaxeSCTDefaults, DistantVariations) == 0x000080, "Member 'UPickaxeSCTDefaults::DistantVariations' has a wrong offset!");

class UPickaxeReady final : public UPickaxeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PickaxeReady">();
	}
	static class UPickaxeReady* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeReady>();
	}
};
static_assert(alignof(UPickaxeReady) == 0x000008, "Wrong alignment on UPickaxeReady");
static_assert(sizeof(UPickaxeReady) == 0x000560, "Wrong size on UPickaxeReady");

class UPickaxeImpactEnemy final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PickaxeImpactEnemy">();
	}
	static class UPickaxeImpactEnemy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxeImpactEnemy>();
	}
};
static_assert(alignof(UPickaxeImpactEnemy) == 0x000008, "Wrong alignment on UPickaxeImpactEnemy");
static_assert(sizeof(UPickaxeImpactEnemy) == 0x000560, "Wrong size on UPickaxeImpactEnemy");

class UPlayerFoleyDefaults final : public UFortSoundCueTemplateDefaults
{
public:
	class USoundClass*                            LocalPlayerSoundClass;
	class USoundClass*                            TeammateSoundClass;
	class USoundClass*                            HostileSoundClass;
	class USoundAttenuation*                      LocalPlayerAttenuation;
	class USoundAttenuation*                      AboveAttenuation;
	class USoundAttenuation*                      BelowAttenuation;
	class USoundAttenuation*                      ParallelAttenuation;
	TArray<struct FDistanceDatum>                 ElevationCrossfadeDistances;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerFoleyDefaults">();
	}
	static class UPlayerFoleyDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerFoleyDefaults>();
	}
};
static_assert(alignof(UPlayerFoleyDefaults) == 0x000008, "Wrong alignment on UPlayerFoleyDefaults");
static_assert(sizeof(UPlayerFoleyDefaults) == 0x0000B8, "Wrong size on UPlayerFoleyDefaults");
static_assert(offsetof(UPlayerFoleyDefaults, LocalPlayerSoundClass) == 0x000070, "Member 'UPlayerFoleyDefaults::LocalPlayerSoundClass' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, TeammateSoundClass) == 0x000078, "Member 'UPlayerFoleyDefaults::TeammateSoundClass' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, HostileSoundClass) == 0x000080, "Member 'UPlayerFoleyDefaults::HostileSoundClass' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, LocalPlayerAttenuation) == 0x000088, "Member 'UPlayerFoleyDefaults::LocalPlayerAttenuation' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, AboveAttenuation) == 0x000090, "Member 'UPlayerFoleyDefaults::AboveAttenuation' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, BelowAttenuation) == 0x000098, "Member 'UPlayerFoleyDefaults::BelowAttenuation' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, ParallelAttenuation) == 0x0000A0, "Member 'UPlayerFoleyDefaults::ParallelAttenuation' has a wrong offset!");
static_assert(offsetof(UPlayerFoleyDefaults, ElevationCrossfadeDistances) == 0x0000A8, "Member 'UPlayerFoleyDefaults::ElevationCrossfadeDistances' has a wrong offset!");

class UWeaponLowAmmo final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponLowAmmo">();
	}
	static class UWeaponLowAmmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponLowAmmo>();
	}
};
static_assert(alignof(UWeaponLowAmmo) == 0x000008, "Wrong alignment on UWeaponLowAmmo");
static_assert(sizeof(UWeaponLowAmmo) == 0x000560, "Wrong size on UWeaponLowAmmo");

class UWeaponOutOfAmmo final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponOutOfAmmo">();
	}
	static class UWeaponOutOfAmmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponOutOfAmmo>();
	}
};
static_assert(alignof(UWeaponOutOfAmmo) == 0x000008, "Wrong alignment on UWeaponOutOfAmmo");
static_assert(sizeof(UWeaponOutOfAmmo) == 0x000560, "Wrong size on UWeaponOutOfAmmo");

class UWeaponReloadStart final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponReloadStart">();
	}
	static class UWeaponReloadStart* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponReloadStart>();
	}
};
static_assert(alignof(UWeaponReloadStart) == 0x000008, "Wrong alignment on UWeaponReloadStart");
static_assert(sizeof(UWeaponReloadStart) == 0x000560, "Wrong size on UWeaponReloadStart");

class UWeaponReloadInsert final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponReloadInsert">();
	}
	static class UWeaponReloadInsert* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponReloadInsert>();
	}
};
static_assert(alignof(UWeaponReloadInsert) == 0x000008, "Wrong alignment on UWeaponReloadInsert");
static_assert(sizeof(UWeaponReloadInsert) == 0x000560, "Wrong size on UWeaponReloadInsert");

class UWeaponReloadEnd final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponReloadEnd">();
	}
	static class UWeaponReloadEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponReloadEnd>();
	}
};
static_assert(alignof(UWeaponReloadEnd) == 0x000008, "Wrong alignment on UWeaponReloadEnd");
static_assert(sizeof(UWeaponReloadEnd) == 0x000560, "Wrong size on UWeaponReloadEnd");

class UWeaponTargetingStart final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponTargetingStart">();
	}
	static class UWeaponTargetingStart* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponTargetingStart>();
	}
};
static_assert(alignof(UWeaponTargetingStart) == 0x000008, "Wrong alignment on UWeaponTargetingStart");
static_assert(sizeof(UWeaponTargetingStart) == 0x000560, "Wrong size on UWeaponTargetingStart");

class UWeaponTargetingEnd final : public UFortSoundCueTemplateSimple
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeaponTargetingEnd">();
	}
	static class UWeaponTargetingEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponTargetingEnd>();
	}
};
static_assert(alignof(UWeaponTargetingEnd) == 0x000008, "Wrong alignment on UWeaponTargetingEnd");
static_assert(sizeof(UWeaponTargetingEnd) == 0x000560, "Wrong size on UWeaponTargetingEnd");

}
