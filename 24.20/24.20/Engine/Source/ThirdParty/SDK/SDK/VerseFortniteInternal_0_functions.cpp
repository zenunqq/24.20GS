#pragma once

#include "Basic.hpp"

#include "VerseFortniteInternal_0_classes.hpp"
#include "VerseFortniteInternal_0_parameters.hpp"

namespace SDK
{

void UGame_fort_playspace_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_playspace_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_playspace_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_playspace_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_playspace_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_playspace_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UConcurrency_task* UGame_fort_playspace_component::__WaitForPlayerEliminated(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_playspace_component", "__WaitForPlayerEliminated");

	Params::Game_fort_playspace_component___WaitForPlayerEliminated Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

TArray<class UEntityComponent*> UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Ntype_Lany_M_20component_R_R(const struct Ftuple_Lcomponent_Mcomponent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Ntype_Lany_M_20component_R_R");

	Params::Game_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Ntype_Lany_M_20component_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R");

	Params::Game_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R(const struct Ftuple_Lplayer__component_Mplayer__start__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R");

	Params::Game_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R(const struct Ftuple_Lcomponent_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R");

	Params::Game_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_VerseFortniteHacks::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_VerseFortniteHacks", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_item_definition::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_item_definition", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_item_definition::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_item_definition", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_item_definition::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_item_definition", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_PlayerTravel::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTravel", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R");

	Params::Game_Player_PlayerTravel__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerTravel::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerTravel", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_player_eliminated_result::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_player_eliminated_result", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_player_eliminated_result::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_player_eliminated_result", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_player_eliminated_result::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_player_eliminated_result", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_ability_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_ability_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_ability_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R(const struct Ftuple_Lgameplay__effect__asset_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R");

	Params::Game_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Nany_R");

	Params::Game_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Nany_R");

	Params::Game_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbilityAndActivateOnce_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbilityAndActivateOnce_L_Nany_R");

	Params::Game_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbilityAndActivateOnce_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbilityAndActivateOnceWithTarget_L_Nany_M_Nability__component_R(const struct VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbilityAndActivateOnceWithTarget_L_Nany_M_Nability__component_R");

	Params::Game_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbilityAndActivateOnceWithTarget_L_Nany_M_Nability__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Nany_R");

	Params::Game_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Abilities_AbilityComponent::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R(class UObject* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Abilities_AbilityComponent", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R");

	Params::Game_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Abilities_AbilityComponent::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Abilities_AbilityComponent", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R");

	Params::Game_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Abilities_AbilityComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_AbilityComponent", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_stat_container::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_stat_container", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_stat_container::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_stat_container", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_stat_container::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_stat_container", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

int64 UGame_stat_container::_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_stat_container", "_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R");

	Params::Game_stat_container__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_stat_container::_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R(const struct VerseFortniteInternal_0::Ftuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_stat_container", "_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R");

	Params::Game_stat_container__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_stat_container::_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R(const struct VerseFortniteInternal_0::Ftuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_stat_container", "_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R");

	Params::Game_stat_container__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Abilities_gameplay_ability_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_gameplay_ability_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_gameplay_ability_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UClass* UGame_Abilities_gameplay_ability_asset::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability__asset_N_RGetAbilityType(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability__asset_N_RGetAbilityType");

	Params::Game_Abilities_gameplay_ability_asset__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability__asset_N_RGetAbilityType Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Abilities_gameplay_effect_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_gameplay_effect_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Abilities_gameplay_effect_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_building_settings_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_building_settings_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_building_settings_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R(EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R");

	Params::Game_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R(EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R");

	Params::Game_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R(EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R");

	Params::Game_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R(EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R");

	Params::Game_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R(EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R");

	Params::Game_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_fortnite_building_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fortnite_building_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_fortnite_building_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

uint8 UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged");

	Params::Game_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced");

	Params::Game_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R");

	Params::Game_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R");

	Params::Game_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt");

	Params::Game_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Item_item_type::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_item_type", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Item_item_type::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_item_type", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Item_item_type::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_item_type", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Item_player_pickup_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Item_player_pickup_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Item_player_pickup_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R(const struct Ftuple_Litem__type_Mint_Mplayer__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R");

	Params::Game_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R(class UGame_Item_item_type* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R");

	Params::Game_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGame_Item_item_type* UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType");

	Params::Game_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R");

	Params::Game_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R(const struct Ftuple_Lvector3_M_Qplayer__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R");

	Params::Game_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UGame_Player_PlayerStatus::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R(const struct Ftuple_Lplayer__component_Mplayer__status__type_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerStatus", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R");

	Params::Game_Player_PlayerStatus__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerStatus::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerStatus", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UGame_Item_PlayerPickupComponent::_L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R(const struct Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Item_PlayerPickupComponent", "_L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R");

	Params::Game_Item_PlayerPickupComponent__L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Item_PlayerPickupComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Item_PlayerPickupComponent", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R(const struct Ftuple_Lplayer__team_Mplayer__team_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FColors_color UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class USimulation_player*> UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R(const struct Ftuple_Lplayer_Mplayer__team_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R(const struct Ftuple_Lplayer_Mplayer__team_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R");

	Params::Game_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerTeam::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Movement_projectile_movement_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Movement_projectile_movement_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Movement_projectile_movement_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R");

	Params::Game_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R");

	Params::Game_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R");

	Params::Game_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R");

	Params::Game_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R");

	Params::Game_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R");

	Params::Game_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGame_Player_player_team UGame_Player::Game_Player_player_team_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player", "Game_Player_player_team$Factory");

	Params::Game_Player_Game_Player_player_team_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGame_Player::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_fort_player_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_fort_player_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_fort_player_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FVerseStringProperty_ UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID");

	Params::Game_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R");

	Params::Game_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R");

	Params::Game_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R");

	Params::Game_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_player_start_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_player_start_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_player_start_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_player_start_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_player_start_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_player_start_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_player_start_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R(const TArray<FVerseStringProperty_>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_player_start_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R");

	Params::Game_Player_player_start_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSpatialMath_vector3 UGame_Player_player_start_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_player_start_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition");

	Params::Game_Player_player_start_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerAttributes::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R(const struct Ftuple_Lplayer_MPlayerAttribute_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerAttributes", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R");

	Params::Game_Player_PlayerAttributes__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

double UGame_Player_PlayerAttributes::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R(const struct Ftuple_Lplayer_MPlayerAttribute_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerAttributes", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R");

	Params::Game_Player_PlayerAttributes__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerAttributes::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R(const struct Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerAttributes", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R");

	Params::Game_Player_PlayerAttributes__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerAttributes::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerAttributes", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R");

	Params::Game_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R(const struct Ftuple_Lplayer_M_Kchar_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R");

	Params::Game_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R(const struct Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R");

	Params::Game_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R(const struct Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R");

	Params::Game_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerInventory::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerInventory", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UGame_Player_PlayerInvulnerable::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerInvulnerable", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R");

	Params::Game_Player_PlayerInvulnerable__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerInvulnerable::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R(const struct Ftuple_Lplayer_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerInvulnerable", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R");

	Params::Game_Player_PlayerInvulnerable__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerInvulnerable::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerInvulnerable", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<class USimulation_player*> UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R");

	Params::Game_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R");

	Params::Game_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R");

	Params::Game_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R");

	Params::Game_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R(const struct Ftuple_Lplayer_Mplayer_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R");

	Params::Game_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerSpectator::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<class UGame_Player_player_start_component*> UGame_Player_PlayerStartComponent::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R(const struct Ftuple_Lcomponent_M_K_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerStartComponent", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R");

	Params::Game_Player_PlayerStartComponent__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_Player_PlayerStartComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerStartComponent", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_PlayerStasis::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerStasis", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R");

	Params::Game_Player_PlayerStasis__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerStasis::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R(const struct Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerStasis", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R");

	Params::Game_Player_PlayerStasis__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerStasis::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerStasis", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R");

	Params::Game_Player_PlayerStasis__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerStasis::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerStasis", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_Player_PlayerVisibility::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R(const struct Ftuple_Lplayer_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game_Player_PlayerVisibility", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R");

	Params::Game_Player_PlayerVisibility__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_Player_PlayerVisibility::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_Player_PlayerVisibility", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_match_stats::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_match_stats::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_match_stats::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

int64 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R(const struct Ftuple_Lplayer_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R(const struct Ftuple_Lplayer__team_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R(const struct VerseFortniteInternal_0::Ftuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct Ftuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(const struct Ftuple_Lplayer__team_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R(const struct VerseFortniteInternal_0::Ftuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct Ftuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(const struct Ftuple_Lplayer__team_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R");

	Params::Game_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_player_stat_values::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_player_stat_values", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_player_stat_values::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_player_stat_values", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_player_stat_values::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_player_stat_values", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_StormController_storm_controller_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_StormController_storm_controller_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_StormController_storm_controller_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin");

	Params::Game_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend");

	Params::Game_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists");

	Params::Game_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause");

	Params::Game_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset");

	Params::Game_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases(const struct VerseFortniteInternal_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases");

	Params::Game_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

void UGame_StormController_storm_phase::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_phase", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_StormController_storm_phase::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_phase", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_StormController_storm_phase::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_StormController_storm_phase", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_team_stat_values::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_team_stat_values", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_team_stat_values::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_team_stat_values", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_team_stat_values::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_team_stat_values", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

int64 UGame_team_stat_values::_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R(const struct Ftuple_Lplayer_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_team_stat_values", "_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R");

	Params::Game_team_stat_values__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UGame_team_stat_values::_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct Ftuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_team_stat_values", "_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::Game_team_stat_values__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGame_team_stat_values::_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct Ftuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_team_stat_values", "_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::Game_team_stat_values__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 Utask_Game_fort_playspace_component___WaitForPlayerEliminated::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_Game_fort_playspace_component$__WaitForPlayerEliminated", "Update");

	Params::task_Game_fort_playspace_component___WaitForPlayerEliminated_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
