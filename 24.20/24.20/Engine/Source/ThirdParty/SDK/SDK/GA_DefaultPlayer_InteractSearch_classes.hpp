#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_DefaultPlayer_InteractSearch_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FGameplayTag                           RefillGasTankTag;
	uint8                                         Pad_B3C[0x4];
	struct FFortGameplayAbilityMontageInfo        RefillGasTankMontage;
	struct FGameplayTag                           CatchFireflyTag;
	uint8                                         Pad_B9C[0x4];
	struct FFortGameplayAbilityMontageInfo        FireflyCatchMontage;
	struct FFortGameplayAbilityMontageInfo        RefillVehicleFuelMontage;
	struct FGameplayTag                           GasCanRefillVehicleTag;
	uint8                                         Pad_C54[0x4];
	struct FFortGameplayAbilityMontageInfo        DBNOMontageInfo;
	struct FGameplayTag                           Tag_UseOverrideSearchMontage;
	uint8                                         Pad_CB4[0x4];
	struct FFortGameplayAbilityMontageInfo        OverrideSearchMontageInfo;

public:
	void Cancelled_3E01853F4E8362C959E7B4B82217702E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_64A40E14483311B0BA6F95B516CA6468(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6A38D93A428260E68695388965BFA176(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_72217B3542CE776DEDDBB3A7B5D6D343(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3E01853F4E8362C959E7B4B82217702E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_5EB1B64344DD00ABFE41E2857DC3FB38(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_64A40E14483311B0BA6F95B516CA6468(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6A38D93A428260E68695388965BFA176(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_72217B3542CE776DEDDBB3A7B5D6D343(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EndInteractSearch();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void StartInteractSearch();
	void Triggered_3E01853F4E8362C959E7B4B82217702E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_5EB1B64344DD00ABFE41E2857DC3FB38(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_64A40E14483311B0BA6F95B516CA6468(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6A38D93A428260E68695388965BFA176(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_72217B3542CE776DEDDBB3A7B5D6D343(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_InteractSearch_C">();
	}
	static class UGA_DefaultPlayer_InteractSearch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_InteractSearch_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_InteractSearch_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_InteractSearch_C");
static_assert(sizeof(UGA_DefaultPlayer_InteractSearch_C) == 0x000D10, "Wrong size on UGA_DefaultPlayer_InteractSearch_C");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, UberGraphFrame) == 0x000B28, "Member 'UGA_DefaultPlayer_InteractSearch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, PlayerPawn) == 0x000B30, "Member 'UGA_DefaultPlayer_InteractSearch_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, RefillGasTankTag) == 0x000B38, "Member 'UGA_DefaultPlayer_InteractSearch_C::RefillGasTankTag' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, RefillGasTankMontage) == 0x000B40, "Member 'UGA_DefaultPlayer_InteractSearch_C::RefillGasTankMontage' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, CatchFireflyTag) == 0x000B98, "Member 'UGA_DefaultPlayer_InteractSearch_C::CatchFireflyTag' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, FireflyCatchMontage) == 0x000BA0, "Member 'UGA_DefaultPlayer_InteractSearch_C::FireflyCatchMontage' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, RefillVehicleFuelMontage) == 0x000BF8, "Member 'UGA_DefaultPlayer_InteractSearch_C::RefillVehicleFuelMontage' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, GasCanRefillVehicleTag) == 0x000C50, "Member 'UGA_DefaultPlayer_InteractSearch_C::GasCanRefillVehicleTag' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, DBNOMontageInfo) == 0x000C58, "Member 'UGA_DefaultPlayer_InteractSearch_C::DBNOMontageInfo' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, Tag_UseOverrideSearchMontage) == 0x000CB0, "Member 'UGA_DefaultPlayer_InteractSearch_C::Tag_UseOverrideSearchMontage' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, OverrideSearchMontageInfo) == 0x000CB8, "Member 'UGA_DefaultPlayer_InteractSearch_C::OverrideSearchMontageInfo' has a wrong offset!");

}
