#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UBP_SurfaceTypeSoundComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	EPhysicalSurface                              SurfaceType;
	uint8                                         Pad_A9[0x7];
	TMap<EPhysicalSurface, class USoundBase*>     SoundMap;
	struct FVector                                Location;
	bool                                          IsSurfaceTypeSet;

public:
	void ActuallyPlaySound();
	void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint);
	void PlaySound(const struct FVector& Location_0);
	void SetSurfaceType(EPhysicalSurface SurfaceType_0, class AActor* Actor);
	void Test_Delay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SurfaceTypeSoundComponent_C">();
	}
	static class UBP_SurfaceTypeSoundComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SurfaceTypeSoundComponent_C>();
	}
};
static_assert(alignof(UBP_SurfaceTypeSoundComponent_C) == 0x000008, "Wrong alignment on UBP_SurfaceTypeSoundComponent_C");
static_assert(sizeof(UBP_SurfaceTypeSoundComponent_C) == 0x000120, "Wrong size on UBP_SurfaceTypeSoundComponent_C");
static_assert(offsetof(UBP_SurfaceTypeSoundComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_SurfaceTypeSoundComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SurfaceTypeSoundComponent_C, SurfaceType) == 0x0000A8, "Member 'UBP_SurfaceTypeSoundComponent_C::SurfaceType' has a wrong offset!");
static_assert(offsetof(UBP_SurfaceTypeSoundComponent_C, SoundMap) == 0x0000B0, "Member 'UBP_SurfaceTypeSoundComponent_C::SoundMap' has a wrong offset!");
static_assert(offsetof(UBP_SurfaceTypeSoundComponent_C, Location) == 0x000100, "Member 'UBP_SurfaceTypeSoundComponent_C::Location' has a wrong offset!");
static_assert(offsetof(UBP_SurfaceTypeSoundComponent_C, IsSurfaceTypeSet) == 0x000118, "Member 'UBP_SurfaceTypeSoundComponent_C::IsSurfaceTypeSet' has a wrong offset!");

}
