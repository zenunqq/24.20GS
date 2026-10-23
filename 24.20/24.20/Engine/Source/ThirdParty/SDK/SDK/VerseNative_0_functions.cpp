#pragma once

#include "Basic.hpp"

#include "VerseNative_0_classes.hpp"
#include "VerseNative_0_parameters.hpp"

namespace SDK
{

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable");

	Params::Concurrency__L_2fVerse_2eorg_2fConcurrency_N_Rawaitable Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Nany_R");

	Params::Concurrency__L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nany_R");

	Params::Concurrency__L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UConcurrency::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UConcurrency_task::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UConcurrency_task::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UConcurrency_task::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled");

	Params::Concurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConcurrency_task* UConcurrency_task::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_task", "Await");

	Params::Concurrency_task_Await Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

int64 Utask_Concurrency_awaitable_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_Concurrency_awaitable$Await", "Update");

	Params::task_Concurrency_awaitable_Await_Update Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UConcurrency_task* UConcurrency_awaitable::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_awaitable", "Await");

	Params::Concurrency_awaitable_Await Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

int64 Utask_Concurrency_task_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_Concurrency_task$Await", "Update");

	Params::task_Concurrency_task_Await_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConcurrency_mind::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_mind", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UConcurrency_mind::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_mind", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UConcurrency_mind::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_mind", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UConcurrency_mind::_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_mind", "_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll");

	Params::Concurrency_mind__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 UConcurrency_mind::_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive(const struct VerseNative_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Concurrency_mind", "_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive");

	Params::Concurrency_mind__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNative::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Native", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

}
