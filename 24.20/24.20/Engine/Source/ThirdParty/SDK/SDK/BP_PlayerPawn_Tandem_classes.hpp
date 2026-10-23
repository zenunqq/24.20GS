#pragma once

#include "Basic.hpp"

#include "Struct_NPC_HealthInfo_structs.hpp"
#include "BP_PlayerPawn_NonParticipant_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class ABP_PlayerPawn_Tandem_C final : public ABP_PlayerPawn_NonParticipant_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerPawn_Tandem_C;
	class UFortWidgetComponent*                   NPCStatusWidget;
	bool                                          IsConverted;
	uint8                                         Leader_Team;
	uint8                                         Pad_6282[0x6];
	struct FStruct_NPC_HealthInfo                 HealthInfo;
	bool                                          NPCStatusWidgetHealthBarDisabled;
	uint8                                         Pad_62A9[0x7];
	struct FScalableFloat                         ShowHealth;
	double                                        NPCHealthBarHideTimeAfterDeath;
	double                                        NPCMaxDistanceFromDamageINstigatorToDrawHealthBar;
	bool                                          IsHealthCheatEnabled;

public:
	void EnableHiredTandemHealthBar();
	void ExecuteUbergraph_BP_PlayerPawn_Tandem(int32 EntryPoint);
	void HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void HandlePawnUnconverted(class AFortPawn* UnconvertedPawn);
	void NPCSetupHealthBarOnDeath();
	void NPCTandemDisableHealthBar();
	void NPCTandemEnableHealthBars();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnRep_HealthInfo();
	void PawnHealthChanged();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void StartHealthBar();
	void StartUpdatingHealthWidget();
	void StopUpdatingHealthWidget();
	void UpdateConvertIndicator();
	void UpdatePawnHealthHUD();
	void WidgetVisibilityChanged(bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerPawn_Tandem_C">();
	}
	static class ABP_PlayerPawn_Tandem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerPawn_Tandem_C>();
	}
};
static_assert(alignof(ABP_PlayerPawn_Tandem_C) == 0x000010, "Wrong alignment on ABP_PlayerPawn_Tandem_C");
static_assert(sizeof(ABP_PlayerPawn_Tandem_C) == 0x0062F0, "Wrong size on ABP_PlayerPawn_Tandem_C");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, UberGraphFrame_BP_PlayerPawn_Tandem_C) == 0x006270, "Member 'ABP_PlayerPawn_Tandem_C::UberGraphFrame_BP_PlayerPawn_Tandem_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, NPCStatusWidget) == 0x006278, "Member 'ABP_PlayerPawn_Tandem_C::NPCStatusWidget' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, IsConverted) == 0x006280, "Member 'ABP_PlayerPawn_Tandem_C::IsConverted' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, Leader_Team) == 0x006281, "Member 'ABP_PlayerPawn_Tandem_C::Leader_Team' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, HealthInfo) == 0x006288, "Member 'ABP_PlayerPawn_Tandem_C::HealthInfo' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, NPCStatusWidgetHealthBarDisabled) == 0x0062A8, "Member 'ABP_PlayerPawn_Tandem_C::NPCStatusWidgetHealthBarDisabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, ShowHealth) == 0x0062B0, "Member 'ABP_PlayerPawn_Tandem_C::ShowHealth' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, NPCHealthBarHideTimeAfterDeath) == 0x0062D8, "Member 'ABP_PlayerPawn_Tandem_C::NPCHealthBarHideTimeAfterDeath' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, NPCMaxDistanceFromDamageINstigatorToDrawHealthBar) == 0x0062E0, "Member 'ABP_PlayerPawn_Tandem_C::NPCMaxDistanceFromDamageINstigatorToDrawHealthBar' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Tandem_C, IsHealthCheatEnabled) == 0x0062E8, "Member 'ABP_PlayerPawn_Tandem_C::IsHealthCheatEnabled' has a wrong offset!");

}
