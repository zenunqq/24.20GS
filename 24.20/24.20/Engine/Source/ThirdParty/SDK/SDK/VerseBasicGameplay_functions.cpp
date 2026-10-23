#pragma once

#include "Basic.hpp"

#include "VerseBasicGameplay_classes.hpp"
#include "VerseBasicGameplay_parameters.hpp"

namespace SDK
{

int64 Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents", "Update");

	Params::task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseBasicGameplay_PlayerManager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseBasicGameplay_PlayerManager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R");

	Params::VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UVerseBasicGameplay_PlayerManager::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

int64 UVerseBasicGameplay_PlayerManager_basic_player_manager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(const struct VerseBasicGameplay::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount");

	Params::VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

TArray<class USimulation_player*> UVerseBasicGameplay_PlayerManager_basic_player_manager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(const struct VerseBasicGameplay::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers");

	Params::VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UConcurrency_task* UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::BeginWaitingForEvents(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseBasicGameplay::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "BeginWaitingForEvents");

	Params::VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
