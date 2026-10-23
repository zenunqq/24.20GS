#pragma once

#include "Basic.hpp"

#include "AnalyticsBlueprintLibrary_classes.hpp"
#include "AnalyticsBlueprintLibrary_parameters.hpp"

namespace SDK
{

void UAnalyticsBlueprintLibrary::EndSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "EndSession");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::FlushEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "FlushEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class FString UAnalyticsBlueprintLibrary::GetSessionId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "GetSessionId");

	Params::AnalyticsBlueprintLibrary_GetSessionId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UAnalyticsBlueprintLibrary::GetUserId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "GetUserId");

	Params::AnalyticsBlueprintLibrary_GetUserId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "MakeEventAttribute");

	Params::AnalyticsBlueprintLibrary_MakeEventAttribute Parms{};

	Parms.AttributeName = std::move(AttributeName);
	Parms.AttributeValue = std::move(AttributeValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(const class FString& GameCurrencyType, int32 GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGiven");

	Params::AnalyticsBlueprintLibrary_RecordCurrencyGiven Parms{};

	Parms.GameCurrencyType = std::move(GameCurrencyType);
	Parms.GameCurrencyAmount = GameCurrencyAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGivenWithAttributes");

	Params::AnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes Parms{};

	Parms.GameCurrencyType = std::move(GameCurrencyType);
	Parms.GameCurrencyAmount = GameCurrencyAmount;
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyPurchase");

	Params::AnalyticsBlueprintLibrary_RecordCurrencyPurchase Parms{};

	Parms.GameCurrencyType = std::move(GameCurrencyType);
	Parms.GameCurrencyAmount = GameCurrencyAmount;
	Parms.RealCurrencyType = std::move(RealCurrencyType);
	Parms.RealMoneyCost = RealMoneyCost;
	Parms.PaymentProvider = std::move(PaymentProvider);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordError(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordError");

	Params::AnalyticsBlueprintLibrary_RecordError Parms{};

	Parms.Error = std::move(Error);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(const class FString& Error, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordErrorWithAttributes");

	Params::AnalyticsBlueprintLibrary_RecordErrorWithAttributes Parms{};

	Parms.Error = std::move(Error);
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordEvent");

	Params::AnalyticsBlueprintLibrary_RecordEvent Parms{};

	Parms.EventName = std::move(EventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttribute");

	Params::AnalyticsBlueprintLibrary_RecordEventWithAttribute Parms{};

	Parms.EventName = std::move(EventName);
	Parms.AttributeName = std::move(AttributeName);
	Parms.AttributeValue = std::move(AttributeValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(const class FString& EventName, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttributes");

	Params::AnalyticsBlueprintLibrary_RecordEventWithAttributes Parms{};

	Parms.EventName = std::move(EventName);
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordItemPurchase(const class FString& ItemId, const class FString& Currency, int32 PerItemCost, int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordItemPurchase");

	Params::AnalyticsBlueprintLibrary_RecordItemPurchase Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.Currency = std::move(Currency);
	Parms.PerItemCost = PerItemCost;
	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordProgress(const class FString& ProgressType, const class FString& ProgressName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordProgress");

	Params::AnalyticsBlueprintLibrary_RecordProgress Parms{};

	Parms.ProgressType = std::move(ProgressType);
	Parms.ProgressName = std::move(ProgressName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithAttributes");

	Params::AnalyticsBlueprintLibrary_RecordProgressWithAttributes Parms{};

	Parms.ProgressType = std::move(ProgressType);
	Parms.ProgressName = std::move(ProgressName);
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, const TArray<class FString>& ProgressNames, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithFullHierarchyAndAttributes");

	Params::AnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes Parms{};

	Parms.ProgressType = std::move(ProgressType);
	Parms.ProgressNames = std::move(ProgressNames);
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int32 GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchase");

	Params::AnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase Parms{};

	Parms.GameCurrencyType = std::move(GameCurrencyType);
	Parms.GameCurrencyAmount = GameCurrencyAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchaseWithAttributes");

	Params::AnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes Parms{};

	Parms.GameCurrencyType = std::move(GameCurrencyType);
	Parms.GameCurrencyAmount = GameCurrencyAmount;
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(const class FString& ItemId, int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchase");

	Params::AnalyticsBlueprintLibrary_RecordSimpleItemPurchase Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(const class FString& ItemId, int32 ItemQuantity, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchaseWithAttributes");

	Params::AnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes Parms{};

	Parms.ItemId = std::move(ItemId);
	Parms.ItemQuantity = ItemQuantity;
	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::SetAge(int32 Age)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "SetAge");

	Params::AnalyticsBlueprintLibrary_SetAge Parms{};

	Parms.Age = Age;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::SetBuildInfo(const class FString& BuildInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "SetBuildInfo");

	Params::AnalyticsBlueprintLibrary_SetBuildInfo Parms{};

	Parms.BuildInfo = std::move(BuildInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::SetGender(const class FString& Gender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "SetGender");

	Params::AnalyticsBlueprintLibrary_SetGender Parms{};

	Parms.Gender = std::move(Gender);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::SetLocation(const class FString& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "SetLocation");

	Params::AnalyticsBlueprintLibrary_SetLocation Parms{};

	Parms.Location = std::move(Location);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::SetSessionId(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "SetSessionId");

	Params::AnalyticsBlueprintLibrary_SetSessionId Parms{};

	Parms.SessionId = std::move(SessionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnalyticsBlueprintLibrary::SetUserId(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "SetUserId");

	Params::AnalyticsBlueprintLibrary_SetUserId Parms{};

	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAnalyticsBlueprintLibrary::StartSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "StartSession");

	Params::AnalyticsBlueprintLibrary_StartSession Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAnalyticsBlueprintLibrary::StartSessionWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnalyticsBlueprintLibrary", "StartSessionWithAttributes");

	Params::AnalyticsBlueprintLibrary_StartSessionWithAttributes Parms{};

	Parms.Attributes = std::move(Attributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
