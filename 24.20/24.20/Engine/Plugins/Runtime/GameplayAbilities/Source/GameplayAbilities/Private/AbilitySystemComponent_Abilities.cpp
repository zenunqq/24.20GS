#include "pch.h"
#include "../Public/AbilitySystemComponent.h"

void AbilitySystemComponent::InternalServerTryActivateAbility(UFortAbilitySystemComponentAthena* Component, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData) {
    auto Spec = Component->ActivatableAbilities.Items.Search([&](FGameplayAbilitySpec& item) {
        return item.Handle.Handle == Handle.Handle;
        });
    if (!Spec)
        return Component->ClientActivateAbilityFailed(Handle, PredictionKey.Current);

    Spec->InputPressed = true;

    UGameplayAbility* InstancedAbility = nullptr;
    auto TryActivate = (bool (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey, UGameplayAbility**, void*, const FGameplayEventData*)) Sarah::Offsets::InternalTryActivateAbility;
    if (!TryActivate(Component, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
    {
        Component->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
        Spec->InputPressed = false;
    }
    Component->ActivatableAbilities.MarkItemDirty(*Spec);
}

void AbilitySystemComponent::GiveAbility(UAbilitySystemComponent* Component, TSubclassOf<UFortGameplayAbility> Ability)
{
    if (!Component || !Ability)
        return;

    FGameplayAbilitySpec Spec{};

    ((void (*)(FGameplayAbilitySpec*, UGameplayAbility*, int, int, UObject*)) (Sarah::Offsets::ImageBase + 0x8577A3C))(&Spec, (UGameplayAbility*)Ability->DefaultObject, 1, -1, nullptr);
    ((FGameplayAbilitySpecHandle * (__fastcall*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec)) (Sarah::Offsets::ImageBase + 0x858A458))(Component, &Spec.Handle, Spec);
}

void AbilitySystemComponent::GiveAbilitySet(UAbilitySystemComponent* Component, UFortAbilitySet* Set)
{
    if (Set)
    {
        for (auto& GameplayAbility : Set->GameplayAbilities)
            GiveAbility(Component, GameplayAbility);
        for (auto& GameplayEffect : Set->PassiveGameplayEffects)
            Component->BP_ApplyGameplayEffectToSelf(GameplayEffect.GameplayEffect.Get(), GameplayEffect.Level, Component->MakeEffectContext());
    }
}

void AbilitySystemComponent::Hook() {
    Utils::HookEvery<UAbilitySystemComponent>(Sarah::Offsets::InternalServerTryActivateAbilityVft, InternalServerTryActivateAbility);
}
