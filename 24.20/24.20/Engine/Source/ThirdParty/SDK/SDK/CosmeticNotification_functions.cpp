#pragma once

#include "Basic.hpp"

#include "CosmeticNotification_classes.hpp"
#include "CosmeticNotification_parameters.hpp"

namespace SDK
{

void UCosmeticNotification_C::UpdateQuestRewardVisuals(const class UFortItemDefinition* RewardItem, EFortRarity QuestRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "UpdateQuestRewardVisuals");

	Params::CosmeticNotification_C_UpdateQuestRewardVisuals Parms{};

	Parms.RewardItem = RewardItem;
	Parms.QuestRarity = QuestRarity;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticNotification_C::UpdateLevelUpVisuals(const class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "UpdateLevelUpVisuals");

	Params::CosmeticNotification_C_UpdateLevelUpVisuals Parms{};

	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticNotification_C::StartNotificationOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "StartNotificationOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticNotification_C::StartNotificationIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "StartNotificationIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticNotification_C::SetStyle_QuestCosmetic(EFortRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "SetStyle_QuestCosmetic");

	Params::CosmeticNotification_C_SetStyle_QuestCosmetic Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticNotification_C::SetStyle_LevelUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "SetStyle_LevelUp");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "PreConstruct");

	Params::CosmeticNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticNotification_C::OnOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "OnOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticNotification_C::OnIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "OnIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticNotification_C::ExecuteUbergraph_CosmeticNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "ExecuteUbergraph_CosmeticNotification");

	Params::CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
