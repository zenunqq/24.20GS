#pragma once

#include "Basic.hpp"

#include "Solaris_classes.hpp"
#include "Solaris_parameters.hpp"

namespace SDK
{

int64 USolarisArrayLibrary::Add(const TArray<struct FGenericElementType>& Array, const struct FGenericElementType& new_item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "Add");

	Params::SolarisArrayLibrary_Add Parms{};

	Parms.Array = std::move(Array);
	Parms.new_item = std::move(new_item);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisArrayLibrary::Call(const TArray<struct FGenericElementType>& Array, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "Call");

	Params::SolarisArrayLibrary_Call Parms{};

	Parms.Array = std::move(Array);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<struct FGenericElementType> USolarisArrayLibrary::Concat(const TArray<struct FGenericElementType>& LHS, const TArray<struct FGenericElementType>& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "Concat");

	Params::SolarisArrayLibrary_Concat Parms{};

	Parms.LHS = std::move(LHS);
	Parms.RHS = std::move(RHS);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FGenericElementType> USolarisArrayLibrary::ConcatEquals(TArray<struct FGenericElementType>* LHS, const TArray<struct FGenericElementType>& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "ConcatEquals");

	Params::SolarisArrayLibrary_ConcatEquals Parms{};

	Parms.RHS = std::move(RHS);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = std::move(Parms.LHS);

	return Parms.ReturnValue;
}

void USolarisArrayLibrary::Empty(const TArray<struct FGenericElementType>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "Empty");

	Params::SolarisArrayLibrary_Empty Parms{};

	Parms.Array = std::move(Array);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 USolarisArrayLibrary::Length(const TArray<struct FGenericElementType>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "Length");

	Params::SolarisArrayLibrary_Length Parms{};

	Parms.Array = std::move(Array);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisArrayLibrary::Move(const TArray<struct FGenericElementType>& Target, const TArray<struct FGenericElementType>& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "Move");

	Params::SolarisArrayLibrary_Move Parms{};

	Parms.Target = std::move(Target);
	Parms.Source = std::move(Source);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisArrayLibrary::RefCall(const TArray<struct FGenericElementType>& Array, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "RefCall");

	Params::SolarisArrayLibrary_RefCall Parms{};

	Parms.Array = std::move(Array);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisArrayLibrary::UnsafeCall(const TArray<struct FGenericElementType>& Array, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisArrayLibrary", "UnsafeCall");

	Params::SolarisArrayLibrary_UnsafeCall Parms{};

	Parms.Array = std::move(Array);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisCoroutineLibrary::TaskCancel(class UObject* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisCoroutineLibrary", "TaskCancel");

	Params::SolarisCoroutineLibrary_TaskCancel Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisCoroutineLibrary::TaskFree(class UObject* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisCoroutineLibrary", "TaskFree");

	Params::SolarisCoroutineLibrary_TaskFree Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisCoroutineLibrary::TaskGetReturnProperty(class UObject* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisCoroutineLibrary", "TaskGetReturnProperty");

	Params::SolarisCoroutineLibrary_TaskGetReturnProperty Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 USolarisCoroutineLibrary::TaskGetState(class UObject* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisCoroutineLibrary", "TaskGetState");

	Params::SolarisCoroutineLibrary_TaskGetState Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* USolarisCoroutineLibrary::TaskMake(class UClass* Type, class UObject* Caller, int64 CallerResumeState, int64 CallerCancelState, class UObject* OwnerInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisCoroutineLibrary", "TaskMake");

	Params::SolarisCoroutineLibrary_TaskMake Parms{};

	Parms.Type = Type;
	Parms.Caller = Caller;
	Parms.CallerResumeState = CallerResumeState;
	Parms.CallerCancelState = CallerCancelState;
	Parms.OwnerInstance = OwnerInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMapLibrary::Add(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key, const struct FGenericValueType& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "Add");

	Params::SolarisMapLibrary_Add Parms{};

	Parms.Map = std::move(Map);
	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMapLibrary::Call(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "Call");

	Params::SolarisMapLibrary_Call Parms{};

	Parms.Map = std::move(Map);
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMapLibrary::CompletelyAssignedRefCall(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "CompletelyAssignedRefCall");

	Params::SolarisMapLibrary_CompletelyAssignedRefCall Parms{};

	Parms.Map = std::move(Map);
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TMap<struct FGenericKeyType, struct FGenericValueType> USolarisMapLibrary::Concat(const TMap<struct FGenericKeyType, struct FGenericValueType>& LHS, const TMap<struct FGenericKeyType, struct FGenericValueType>& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "Concat");

	Params::SolarisMapLibrary_Concat Parms{};

	Parms.LHS = std::move(LHS);
	Parms.RHS = std::move(RHS);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGenericKeyType USolarisMapLibrary::GetKeyByIndex(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "GetKeyByIndex");

	Params::SolarisMapLibrary_GetKeyByIndex Parms{};

	Parms.Map = std::move(Map);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 USolarisMapLibrary::GetNextValidIndex(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 InitialIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "GetNextValidIndex");

	Params::SolarisMapLibrary_GetNextValidIndex Parms{};

	Parms.Map = std::move(Map);
	Parms.InitialIndex = InitialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGenericValueType USolarisMapLibrary::GetValueByIndex(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "GetValueByIndex");

	Params::SolarisMapLibrary_GetValueByIndex Parms{};

	Parms.Map = std::move(Map);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMapLibrary::InitMap(TMap<struct FGenericKeyType, struct FGenericValueType>* Map)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "InitMap");

	Params::SolarisMapLibrary_InitMap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Map != nullptr)
		*Map = std::move(Parms.Map);
}

int64 USolarisMapLibrary::Length(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "Length");

	Params::SolarisMapLibrary_Length Parms{};

	Parms.Map = std::move(Map);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMapLibrary::Move(TMap<struct FGenericKeyType, struct FGenericValueType>* Dest, const TMap<struct FGenericKeyType, struct FGenericValueType>& Src)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "Move");

	Params::SolarisMapLibrary_Move Parms{};

	Parms.Src = std::move(Src);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = std::move(Parms.Dest);
}

void USolarisMapLibrary::RefCall(const TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMapLibrary", "RefCall");

	Params::SolarisMapLibrary_RefCall Parms{};

	Parms.Map = std::move(Map);
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Bool::Query()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Bool", "Query");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::abs(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "abs");

	Params::SolarisMathLibrary_Int_abs Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::Add(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Add");

	Params::SolarisMathLibrary_Int_Add Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::AddEquals(int64* LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "AddEquals");

	Params::SolarisMathLibrary_Int_AddEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;
}

void USolarisMathLibrary_Int::CheckConstrainedInt(int64 min_0, int64 max_0, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "CheckConstrainedInt");

	Params::SolarisMathLibrary_Int_CheckConstrainedInt Parms{};

	Parms.min_0 = min_0;
	Parms.max_0 = max_0;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::Divide(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Divide");

	Params::SolarisMathLibrary_Int_Divide Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::Greater(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Greater");

	Params::SolarisMathLibrary_Int_Greater Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::GreaterEqual(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "GreaterEqual");

	Params::SolarisMathLibrary_Int_GreaterEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::Less(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Less");

	Params::SolarisMathLibrary_Int_Less Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::LessEqual(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "LessEqual");

	Params::SolarisMathLibrary_Int_LessEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::Multiply(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Multiply");

	Params::SolarisMathLibrary_Int_Multiply Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::MultiplyEquals(int64* LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "MultiplyEquals");

	Params::SolarisMathLibrary_Int_MultiplyEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;
}

void USolarisMathLibrary_Int::Negate(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Negate");

	Params::SolarisMathLibrary_Int_Negate Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USolarisMathLibrary_Int::PredicateEqual(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "PredicateEqual");

	Params::SolarisMathLibrary_Int_PredicateEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisMathLibrary_Int::PredicateGreater(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "PredicateGreater");

	Params::SolarisMathLibrary_Int_PredicateGreater Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisMathLibrary_Int::PredicateGreaterEqual(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "PredicateGreaterEqual");

	Params::SolarisMathLibrary_Int_PredicateGreaterEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisMathLibrary_Int::PredicateLess(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "PredicateLess");

	Params::SolarisMathLibrary_Int_PredicateLess Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisMathLibrary_Int::PredicateLessEqual(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "PredicateLessEqual");

	Params::SolarisMathLibrary_Int_PredicateLessEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisMathLibrary_Int::PredicateNotEqual(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "PredicateNotEqual");

	Params::SolarisMathLibrary_Int_PredicateNotEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_Int::Subtract(int64 LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "Subtract");

	Params::SolarisMathLibrary_Int_Subtract Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Int::SubtractEquals(int64* LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "SubtractEquals");

	Params::SolarisMathLibrary_Int_SubtractEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;
}

int32 USolarisMathLibrary_Int::UncheckedConvertI32I64(int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Int", "UncheckedConvertI32I64");

	Params::SolarisMathLibrary_Int_UncheckedConvertI32I64 Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_Rational::ceil(const struct FVerseRational& Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Rational", "ceil");

	Params::SolarisMathLibrary_Rational_ceil Parms{};

	Parms.Val = std::move(Val);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Rational::floor(const struct FVerseRational& Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Rational", "floor");

	Params::SolarisMathLibrary_Rational_floor Parms{};

	Parms.Val = std::move(Val);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

double USolarisMathLibrary_Float::abs(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "abs");

	Params::SolarisMathLibrary_Float_abs Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::Add(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Add");

	Params::SolarisMathLibrary_Float_Add Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::AddEquals(double* LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "AddEquals");

	Params::SolarisMathLibrary_Float_AddEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_Float::CheckConstrainedFloat(double min_0, double max_0, double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "CheckConstrainedFloat");

	Params::SolarisMathLibrary_Float_CheckConstrainedFloat Parms{};

	Parms.min_0 = min_0;
	Parms.max_0 = max_0;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

double USolarisMathLibrary_Float::Divide(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Divide");

	Params::SolarisMathLibrary_Float_Divide Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::DivideEquals(double* LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "DivideEquals");

	Params::SolarisMathLibrary_Float_DivideEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_Float::Greater(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Greater");

	Params::SolarisMathLibrary_Float_Greater Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Float::GreaterEqual(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "GreaterEqual");

	Params::SolarisMathLibrary_Float_GreaterEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Float::Less(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Less");

	Params::SolarisMathLibrary_Float_Less Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Float::LessEqual(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "LessEqual");

	Params::SolarisMathLibrary_Float_LessEqual Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

double USolarisMathLibrary_Float::Multiply(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Multiply");

	Params::SolarisMathLibrary_Float_Multiply Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::MultiplyEquals(double* LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "MultiplyEquals");

	Params::SolarisMathLibrary_Float_MultiplyEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::MultiplyFloatInt(double LHS, int64 RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "MultiplyFloatInt");

	Params::SolarisMathLibrary_Float_MultiplyFloatInt Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::MultiplyIntFloat(int64 LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "MultiplyIntFloat");

	Params::SolarisMathLibrary_Float_MultiplyIntFloat Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::Negate(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Negate");

	Params::SolarisMathLibrary_Float_Negate Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::Subtract(double LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "Subtract");

	Params::SolarisMathLibrary_Float_Subtract Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double USolarisMathLibrary_Float::SubtractEquals(double* LHS, double RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Float", "SubtractEquals");

	Params::SolarisMathLibrary_Float_SubtractEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_String::Add(const int32& String, int8 Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "Add");

	Params::SolarisMathLibrary_String_Add Parms{};

	Parms.String = String;
	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_String::Call(const int32& String, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "Call");

	Params::SolarisMathLibrary_String_Call Parms{};

	Parms.String = String;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 USolarisMathLibrary_String::Concat(const int32& LHS, const int32& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "Concat");

	Params::SolarisMathLibrary_String_Concat Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 USolarisMathLibrary_String::ConcatEquals(int32* LHS, const int32& RHS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "ConcatEquals");

	Params::SolarisMathLibrary_String_ConcatEquals Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;
}

int64 USolarisMathLibrary_String::Length(const int32& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "Length");

	Params::SolarisMathLibrary_String_Length Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_String::Make()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "Make");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 USolarisMathLibrary_String::MakeLiteral()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "MakeLiteral");

	Params::SolarisMathLibrary_String_MakeLiteral Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisMathLibrary_String::Move(const int32& Destination, const int32& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "Move");

	Params::SolarisMathLibrary_String_Move Parms{};

	Parms.Destination = Destination;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_String::RefCall(const int32& String, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "RefCall");

	Params::SolarisMathLibrary_String_RefCall Parms{};

	Parms.String = String;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_String::UncheckedCall(const int32& String, int64 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_String", "UncheckedCall");

	Params::SolarisMathLibrary_String_UncheckedCall Parms{};

	Parms.String = String;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Option::Make()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Option", "Make");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USolarisMathLibrary_Option::Query()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisMathLibrary_Option", "Query");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USolarisUtilLibrary::AddPropertyToSubobjectExclusionList(int64 InstancingGraph, int64 Property)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "AddPropertyToSubobjectExclusionList");

	Params::SolarisUtilLibrary_AddPropertyToSubobjectExclusionList Parms{};

	Parms.InstancingGraph = InstancingGraph;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisUtilLibrary::CallFinalFunctionWithContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "CallFinalFunctionWithContext");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USolarisUtilLibrary::CallFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "CallFunction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int64 USolarisUtilLibrary::Dereference(int64 Reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "Dereference");

	Params::SolarisUtilLibrary_Dereference Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* USolarisUtilLibrary::GetCurrentlyInstantiatedObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "GetCurrentlyInstantiatedObject");

	Params::SolarisUtilLibrary_GetCurrentlyInstantiatedObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisUtilLibrary::GetFunctionForInterfaceMethod(class UObject* Object, class FName MethodName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "GetFunctionForInterfaceMethod");

	Params::SolarisUtilLibrary_GetFunctionForInterfaceMethod Parms{};

	Parms.Object = Object;
	Parms.MethodName = MethodName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 USolarisUtilLibrary::GetOptionValue(int64 Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "GetOptionValue");

	Params::SolarisUtilLibrary_GetOptionValue Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisUtilLibrary::HasInterface(class UObject* Object, class UClass* InterfaceClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "HasInterface");

	Params::SolarisUtilLibrary_HasInterface Parms{};

	Parms.Object = Object;
	Parms.InterfaceClass = InterfaceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USolarisUtilLibrary::InstanceFunction(class UObject* Object, class FName MethodName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "InstanceFunction");

	Params::SolarisUtilLibrary_InstanceFunction Parms{};

	Parms.Object = Object;
	Parms.MethodName = MethodName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USolarisUtilLibrary::InstantiateObject(class UClass* Class_0, int64 InstancingGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "InstantiateObject");

	Params::SolarisUtilLibrary_InstantiateObject Parms{};

	Parms.Class_0 = Class_0;
	Parms.InstancingGraph = InstancingGraph;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USolarisUtilLibrary::IsNonNullObject(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "IsNonNullObject");

	Params::SolarisUtilLibrary_IsNonNullObject Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisUtilLibrary::IsOptionSet(int64 Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "IsOptionSet");

	Params::SolarisUtilLibrary_IsOptionSet Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisUtilLibrary::MakeOptionFromValue(class UObject* Property, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "MakeOptionFromValue");

	Params::SolarisUtilLibrary_MakeOptionFromValue Parms{};

	Parms.Property = Property;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 USolarisUtilLibrary::MakeUnsetOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "MakeUnsetOption");

	Params::SolarisUtilLibrary_MakeUnsetOption Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisUtilLibrary::ObjectHasNoFlags(class UObject* Object, int32 Flags_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "ObjectHasNoFlags");

	Params::SolarisUtilLibrary_ObjectHasNoFlags Parms{};

	Parms.Object = Object;
	Parms.Flags_0 = Flags_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USolarisUtilLibrary::ReferenceIsValid(int64 Reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "ReferenceIsValid");

	Params::SolarisUtilLibrary_ReferenceIsValid Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 USolarisUtilLibrary::ReplaceOptionValue(int64 ResultProperty, int64 Option, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SolarisUtilLibrary", "ReplaceOptionValue");

	Params::SolarisUtilLibrary_ReplaceOptionValue Parms{};

	Parms.ResultProperty = ResultProperty;
	Parms.Option = Option;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVerseDynamicallyTypedValueLibrary::ConvertFromDynamicallyTypedValue(int32 RuntimeType, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "ConvertFromDynamicallyTypedValue");

	Params::VerseDynamicallyTypedValueLibrary_ConvertFromDynamicallyTypedValue Parms{};

	Parms.RuntimeType = RuntimeType;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::ConvertToDynamicallyTypedValue(int32 RuntimeType, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "ConvertToDynamicallyTypedValue");

	Params::VerseDynamicallyTypedValueLibrary_ConvertToDynamicallyTypedValue Parms{};

	Parms.RuntimeType = RuntimeType;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::Equal(int32 Left, int32 Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "Equal");

	Params::VerseDynamicallyTypedValueLibrary_Equal Parms{};

	Parms.Left = Left;
	Parms.Right = Right;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeArray(int32 ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeArray");

	Params::VerseDynamicallyTypedValueLibrary_MakeRuntimeTypeArray Parms{};

	Parms.ElementType = ElementType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeChar32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeChar32");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeChar8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeChar8");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeClass");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeDynamic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeDynamic");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeEnum(class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeEnum");

	Params::VerseDynamicallyTypedValueLibrary_MakeRuntimeTypeEnum Parms{};

	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeFloat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeFloat");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeFunction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeInt64()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeInt64");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeLogic");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeMap(int32 KeyType, int32 ValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeMap");

	Params::VerseDynamicallyTypedValueLibrary_MakeRuntimeTypeMap Parms{};

	Parms.KeyType = KeyType;
	Parms.ValueType = ValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeObject");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeOption(int32 ValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeOption");

	Params::VerseDynamicallyTypedValueLibrary_MakeRuntimeTypeOption Parms{};

	Parms.ValueType = ValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeString");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeStruct(class UStruct* Struct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeStruct");

	Params::VerseDynamicallyTypedValueLibrary_MakeRuntimeTypeStruct Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::MakeRuntimeTypeTuple(const TArray<int32>& ValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "MakeRuntimeTypeTuple");

	Params::VerseDynamicallyTypedValueLibrary_MakeRuntimeTypeTuple Parms{};

	Parms.ValueType = std::move(ValueType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseDynamicallyTypedValueLibrary::NotEqual(int32 Left, int32 Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseDynamicallyTypedValueLibrary", "NotEqual");

	Params::VerseDynamicallyTypedValueLibrary_NotEqual Parms{};

	Parms.Left = Left;
	Parms.Right = Right;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
