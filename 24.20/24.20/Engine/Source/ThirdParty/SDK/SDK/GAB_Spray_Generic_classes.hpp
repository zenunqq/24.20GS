#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_Emote_Generic_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UGAB_Spray_Generic_C final : public UGAB_Emote_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_Spray_Generic_C;
	double                                        DecalSize;
	class UAthenaSprayItemDefinition*             MySpray;
	double                                        DecalTraceDistance;
	TSoftObjectPtr<class UAnimMontage>            DefaultSprayMontage_M;
	TSoftObjectPtr<class UAnimMontage>            DefaultSprayMontage_F;

public:
	void ExecuteUbergraph_GAB_Spray_Generic(int32 EntryPoint);
	TSoftObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, EFortCustomBodyType BodyType, EFortCustomGender Gender);
	void OnMontageStartedPlaying();
	void TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Spray_Generic_C">();
	}
	static class UGAB_Spray_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Spray_Generic_C>();
	}
};
static_assert(alignof(UGAB_Spray_Generic_C) == 0x000008, "Wrong alignment on UGAB_Spray_Generic_C");
static_assert(sizeof(UGAB_Spray_Generic_C) == 0x000BF8, "Wrong size on UGAB_Spray_Generic_C");
static_assert(offsetof(UGAB_Spray_Generic_C, UberGraphFrame_GAB_Spray_Generic_C) == 0x000B88, "Member 'UGAB_Spray_Generic_C::UberGraphFrame_GAB_Spray_Generic_C' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DecalSize) == 0x000B90, "Member 'UGAB_Spray_Generic_C::DecalSize' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, MySpray) == 0x000B98, "Member 'UGAB_Spray_Generic_C::MySpray' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DecalTraceDistance) == 0x000BA0, "Member 'UGAB_Spray_Generic_C::DecalTraceDistance' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DefaultSprayMontage_M) == 0x000BA8, "Member 'UGAB_Spray_Generic_C::DefaultSprayMontage_M' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DefaultSprayMontage_F) == 0x000BD0, "Member 'UGAB_Spray_Generic_C::DefaultSprayMontage_F' has a wrong offset!");

}
