#pragma once

#include "Basic.hpp"

#include "ItemUIFunctionLibrary_classes.hpp"
#include "ItemUIFunctionLibrary_parameters.hpp"

namespace SDK
{

void UItemUIFunctionLibrary_C::Convert_Tier_To_Integer(EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ItemUIFunctionLibrary_C", "Convert Tier To Integer");

	Params::ItemUIFunctionLibrary_C_Convert_Tier_To_Integer Parms{};

	Parms.Tier = Tier;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Numeric_Tier != nullptr)
		*Numeric_Tier = Parms.Numeric_Tier;
}

void UItemUIFunctionLibrary_C::IsNullItem(class UObject* ItemObject, class UObject* __WorldContext, bool* Is_Null_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ItemUIFunctionLibrary_C", "IsNullItem");

	Params::ItemUIFunctionLibrary_C_IsNullItem Parms{};

	Parms.ItemObject = ItemObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Is_Null_Item != nullptr)
		*Is_Null_Item = Parms.Is_Null_Item;
}

void UItemUIFunctionLibrary_C::ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ItemUIFunctionLibrary_C", "ParseLevelRequiredFromString");

	Params::ItemUIFunctionLibrary_C_ParseLevelRequiredFromString Parms{};

	Parms.InString = std::move(InString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutInt != nullptr)
		*OutInt = Parms.OutInt;
}

void UItemUIFunctionLibrary_C::Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ItemUIFunctionLibrary_C", "Truncate Integer Value");

	Params::ItemUIFunctionLibrary_C_Truncate_Integer_Value Parms{};

	Parms.Value = Value;
	Parms.Min_Fractional_Digits = Min_Fractional_Digits;
	Parms.Max_Fractional_Digits = Max_Fractional_Digits;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Formatted_Value != nullptr)
		*Formatted_Value = std::move(Parms.Formatted_Value);
}

}
