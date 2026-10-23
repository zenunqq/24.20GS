#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGAB_GenericDeath_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAnimMontage*                           DeathMontage;
	class FName                                   DeathMontageSectionName;
	uint8                                         Pad_B3C[0x4];
	struct FVector                                DeathHitDirection;
	struct FHitResult                             DeathHitResult;
	struct FGameplayTagContainer                  DamageTags;
	struct FGameplayTagContainer                  SpawnDroneTags;
	class UAnimMontage*                           Front;
	class UAnimMontage*                           Left;
	class UAnimMontage*                           Right;
	class UAnimMontage*                           Back;
	class UAnimMontage*                           Head_Front;
	class UAnimMontage*                           Head_Left;
	class UAnimMontage*                           Head_Right;
	class UAnimMontage*                           Head_Back;
	int32                                         FrontSectionNameCount;
	int32                                         LeftSectionNameCount;
	int32                                         RightSectionNameCount;
	int32                                         BackSectionNameCount;
	int32                                         Head_FrontSectionNameCount;
	int32                                         Head_LeftSectionNameCount;
	int32                                         Head_RightSectionNameCount;
	int32                                         Head_BackSectionNameCount;
	class FName                                   FrontMontageSectionPrefix;
	class FName                                   BackMontageSectionPrefix;
	class FName                                   LeftMontageSectionPrefix;
	class FName                                   RightMontageSectionPrefix;
	class FName                                   HeadFrontMontageSectionPrefix;
	class FName                                   HeadBackMontageSectionPrefix;
	class FName                                   HeadLeftMontageSectionPrefix;
	class FName                                   HeadRightMontageSectionPrefix;
	struct FGameplayTag                           TeleportOutCue;

public:
	void ExecuteUbergraph_GAB_GenericDeath(int32 EntryPoint);
	void GetRandomSectionName(int32 MaxNumberOfSections, class FName OriginalSectionName, class FName* SectionName);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void PickDeathMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericDeath_C">();
	}
	static class UGAB_GenericDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericDeath_C>();
	}
};
static_assert(alignof(UGAB_GenericDeath_C) == 0x000008, "Wrong alignment on UGAB_GenericDeath_C");
static_assert(sizeof(UGAB_GenericDeath_C) == 0x000D00, "Wrong size on UGAB_GenericDeath_C");
static_assert(offsetof(UGAB_GenericDeath_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_GenericDeath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathMontage) == 0x000B30, "Member 'UGAB_GenericDeath_C::DeathMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathMontageSectionName) == 0x000B38, "Member 'UGAB_GenericDeath_C::DeathMontageSectionName' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathHitDirection) == 0x000B40, "Member 'UGAB_GenericDeath_C::DeathHitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathHitResult) == 0x000B58, "Member 'UGAB_GenericDeath_C::DeathHitResult' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DamageTags) == 0x000C38, "Member 'UGAB_GenericDeath_C::DamageTags' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, SpawnDroneTags) == 0x000C58, "Member 'UGAB_GenericDeath_C::SpawnDroneTags' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Front) == 0x000C78, "Member 'UGAB_GenericDeath_C::Front' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Left) == 0x000C80, "Member 'UGAB_GenericDeath_C::Left' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Right) == 0x000C88, "Member 'UGAB_GenericDeath_C::Right' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Back) == 0x000C90, "Member 'UGAB_GenericDeath_C::Back' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Front) == 0x000C98, "Member 'UGAB_GenericDeath_C::Head_Front' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Left) == 0x000CA0, "Member 'UGAB_GenericDeath_C::Head_Left' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Right) == 0x000CA8, "Member 'UGAB_GenericDeath_C::Head_Right' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Back) == 0x000CB0, "Member 'UGAB_GenericDeath_C::Head_Back' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, FrontSectionNameCount) == 0x000CB8, "Member 'UGAB_GenericDeath_C::FrontSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, LeftSectionNameCount) == 0x000CBC, "Member 'UGAB_GenericDeath_C::LeftSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, RightSectionNameCount) == 0x000CC0, "Member 'UGAB_GenericDeath_C::RightSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, BackSectionNameCount) == 0x000CC4, "Member 'UGAB_GenericDeath_C::BackSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_FrontSectionNameCount) == 0x000CC8, "Member 'UGAB_GenericDeath_C::Head_FrontSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_LeftSectionNameCount) == 0x000CCC, "Member 'UGAB_GenericDeath_C::Head_LeftSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_RightSectionNameCount) == 0x000CD0, "Member 'UGAB_GenericDeath_C::Head_RightSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_BackSectionNameCount) == 0x000CD4, "Member 'UGAB_GenericDeath_C::Head_BackSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, FrontMontageSectionPrefix) == 0x000CD8, "Member 'UGAB_GenericDeath_C::FrontMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, BackMontageSectionPrefix) == 0x000CDC, "Member 'UGAB_GenericDeath_C::BackMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, LeftMontageSectionPrefix) == 0x000CE0, "Member 'UGAB_GenericDeath_C::LeftMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, RightMontageSectionPrefix) == 0x000CE4, "Member 'UGAB_GenericDeath_C::RightMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadFrontMontageSectionPrefix) == 0x000CE8, "Member 'UGAB_GenericDeath_C::HeadFrontMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadBackMontageSectionPrefix) == 0x000CEC, "Member 'UGAB_GenericDeath_C::HeadBackMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadLeftMontageSectionPrefix) == 0x000CF0, "Member 'UGAB_GenericDeath_C::HeadLeftMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadRightMontageSectionPrefix) == 0x000CF4, "Member 'UGAB_GenericDeath_C::HeadRightMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, TeleportOutCue) == 0x000CF8, "Member 'UGAB_GenericDeath_C::TeleportOutCue' has a wrong offset!");

}
