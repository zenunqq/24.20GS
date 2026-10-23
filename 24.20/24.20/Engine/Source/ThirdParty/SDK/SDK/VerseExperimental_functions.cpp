#pragma once

#include "Basic.hpp"

#include "VerseExperimental_classes.hpp"
#include "VerseExperimental_parameters.hpp"

namespace SDK
{

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct Ftuple_Lint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax(const struct VerseExperimental::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin(const struct VerseExperimental::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R(const struct VerseExperimental::Ftuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_parts UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EVerseExperimental_day_of_week UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EVerseExperimental_month_of_year UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_of_day_parts UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R(const struct Ftuple_Lfloat_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FVerseStringProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FVerseStringProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow(const struct VerseExperimental::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

uint8 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R");

	Params::VerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_parts UVerseExperimental::VerseExperimental_date_parts_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "VerseExperimental_date_parts$Factory");

	Params::VerseExperimental_VerseExperimental_date_parts_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_date_time UVerseExperimental::VerseExperimental_date_time_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "VerseExperimental_date_time$Factory");

	Params::VerseExperimental_VerseExperimental_date_time_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_of_day_parts UVerseExperimental::VerseExperimental_time_of_day_parts_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "VerseExperimental_time_of_day_parts$Factory");

	Params::VerseExperimental_VerseExperimental_time_of_day_parts_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseExperimental_time_span UVerseExperimental::VerseExperimental_time_span_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseExperimental", "VerseExperimental_time_span$Factory");

	Params::VerseExperimental_VerseExperimental_time_span_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UVerseExperimental::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseExperimental", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseExperimental_date_time_ticks::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseExperimental_date_time_ticks", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

}
