#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class AVaultWeaponPlacementHelper_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   CUBE;
	class UParticleSystemComponent*               PS_NoPlayer_Sparkle;
	class UParticleSystemComponent*               PS_NoPlayer_Swirl02;
	class UParticleSystemComponent*               PS_NoPlayer_Swirl01;
	class UStaticMeshComponent*                   CharacterPlacement;
	class USceneComponent*                        Root;
	class UStaticMesh*                            Mesh;
	TMulticastInlineDelegate<void()>              NewEventDispatcher_0;

public:
	void ReceiveBeginPlay();
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void Initialize();
	void GetFrontendAnimInstance();
	void ItemRez();
	void ExecuteUbergraph_VaultWeaponPlacementHelper(int32 EntryPoint);
	void InitializeContextEvents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultWeaponPlacementHelper_C">();
	}
	static class AVaultWeaponPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultWeaponPlacementHelper_C>();
	}
};
static_assert(alignof(AVaultWeaponPlacementHelper_C) == 0x000008, "Wrong alignment on AVaultWeaponPlacementHelper_C");
static_assert(sizeof(AVaultWeaponPlacementHelper_C) == 0x0002D8, "Wrong size on AVaultWeaponPlacementHelper_C");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, UberGraphFrame) == 0x000288, "Member 'AVaultWeaponPlacementHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, CUBE) == 0x000290, "Member 'AVaultWeaponPlacementHelper_C::CUBE' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PS_NoPlayer_Sparkle) == 0x000298, "Member 'AVaultWeaponPlacementHelper_C::PS_NoPlayer_Sparkle' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PS_NoPlayer_Swirl02) == 0x0002A0, "Member 'AVaultWeaponPlacementHelper_C::PS_NoPlayer_Swirl02' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PS_NoPlayer_Swirl01) == 0x0002A8, "Member 'AVaultWeaponPlacementHelper_C::PS_NoPlayer_Swirl01' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, CharacterPlacement) == 0x0002B0, "Member 'AVaultWeaponPlacementHelper_C::CharacterPlacement' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, Root) == 0x0002B8, "Member 'AVaultWeaponPlacementHelper_C::Root' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, Mesh) == 0x0002C0, "Member 'AVaultWeaponPlacementHelper_C::Mesh' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, NewEventDispatcher_0) == 0x0002C8, "Member 'AVaultWeaponPlacementHelper_C::NewEventDispatcher_0' has a wrong offset!");

}
