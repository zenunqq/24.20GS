#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EVerseExperimental_day_of_week : uint8
{
	Monday                                   = 0,
	Tuesday                                  = 1,
	Wednesday                                = 2,
	Thursday                                 = 3,
	Friday                                   = 4,
	Saturday                                 = 5,
	Sunday                                   = 6,
	VerseExperimental_day_of_MAX             = 7,
};

enum class EVerseExperimental_month_of_year : uint8
{
	January                                  = 0,
	February                                 = 1,
	March                                    = 2,
	April                                    = 3,
	May                                      = 4,
	June                                     = 5,
	July                                     = 6,
	August                                   = 7,
	September                                = 8,
	October                                  = 9,
	November                                 = 10,
	December                                 = 11,
	VerseExperimental_month_of_MAX           = 12,
};

struct VerseExperimental::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseExperimental::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseExperimental::Ftuple_L_R");
static_assert(sizeof(VerseExperimental::Ftuple_L_R) == 0x000001, "Wrong size on VerseExperimental::Ftuple_L_R");
static_assert(offsetof(VerseExperimental::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseExperimental::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct FVerseExperimental_date_time final
{
public:
	int64                                         __verse_0xD9F5FBDB_Ticks;
};
static_assert(alignof(FVerseExperimental_date_time) == 0x000008, "Wrong alignment on FVerseExperimental_date_time");
static_assert(sizeof(FVerseExperimental_date_time) == 0x000008, "Wrong size on FVerseExperimental_date_time");
static_assert(offsetof(FVerseExperimental_date_time, __verse_0xD9F5FBDB_Ticks) == 0x000000, "Member 'FVerseExperimental_date_time::__verse_0xD9F5FBDB_Ticks' has a wrong offset!");

struct Ftuple_Ldate__time_Mdate__time_R final
{
public:
	struct FVerseExperimental_date_time           __verse_0x18E3F084_Elem0;
	struct FVerseExperimental_date_time           __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ldate__time_Mdate__time_R) == 0x000008, "Wrong alignment on Ftuple_Ldate__time_Mdate__time_R");
static_assert(sizeof(Ftuple_Ldate__time_Mdate__time_R) == 0x000010, "Wrong size on Ftuple_Ldate__time_Mdate__time_R");
static_assert(offsetof(Ftuple_Ldate__time_Mdate__time_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ldate__time_Mdate__time_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ldate__time_Mdate__time_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ldate__time_Mdate__time_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct FVerseExperimental_time_span final
{
public:
	int64                                         __verse_0xD9F5FBDB_Ticks;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FVerseExperimental_time_span) == 0x000008, "Wrong alignment on FVerseExperimental_time_span");
static_assert(sizeof(FVerseExperimental_time_span) == 0x000010, "Wrong size on FVerseExperimental_time_span");
static_assert(offsetof(FVerseExperimental_time_span, __verse_0xD9F5FBDB_Ticks) == 0x000000, "Member 'FVerseExperimental_time_span::__verse_0xD9F5FBDB_Ticks' has a wrong offset!");

struct Ftuple_Ldate__time_Mtime__span_R final
{
public:
	struct FVerseExperimental_date_time           __verse_0x18E3F084_Elem0;
	struct FVerseExperimental_time_span           __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ldate__time_Mtime__span_R) == 0x000008, "Wrong alignment on Ftuple_Ldate__time_Mtime__span_R");
static_assert(sizeof(Ftuple_Ldate__time_Mtime__span_R) == 0x000018, "Wrong size on Ftuple_Ldate__time_Mtime__span_R");
static_assert(offsetof(Ftuple_Ldate__time_Mtime__span_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ldate__time_Mtime__span_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ldate__time_Mtime__span_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ldate__time_Mtime__span_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_Mtime__span_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct FVerseExperimental_time_span           __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfloat_Mtime__span_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mtime__span_R");
static_assert(sizeof(Ftuple_Lfloat_Mtime__span_R) == 0x000018, "Wrong size on Ftuple_Lfloat_Mtime__span_R");
static_assert(offsetof(Ftuple_Lfloat_Mtime__span_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mtime__span_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mtime__span_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_Mtime__span_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
	int64                                         __verse_0xF64C4596_Elem3;
	int64                                         __verse_0x4F74920B_Elem4;
	int64                                         __verse_0x2A132EB3_Elem5;
	int64                                         __verse_0xC4BC9BA1_Elem6;
};
static_assert(alignof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R");
static_assert(sizeof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R) == 0x000038, "Wrong size on Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0xF64C4596_Elem3) == 0x000018, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0x4F74920B_Elem4) == 0x000020, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0x4F74920B_Elem4' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0x2A132EB3_Elem5) == 0x000028, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0x2A132EB3_Elem5' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R, __verse_0xC4BC9BA1_Elem6) == 0x000030, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R::__verse_0xC4BC9BA1_Elem6' has a wrong offset!");

struct Ftuple_Lint_Mint_Mint_Mint_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
	int64                                         __verse_0xF64C4596_Elem3;
	int64                                         __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_Lint_Mint_Mint_Mint_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lint_Mint_Mint_Mint_Mint_R");
static_assert(sizeof(Ftuple_Lint_Mint_Mint_Mint_Mint_R) == 0x000028, "Wrong size on Ftuple_Lint_Mint_Mint_Mint_Mint_R");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_R, __verse_0xF64C4596_Elem3) == 0x000018, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_Mint_Mint_R, __verse_0x4F74920B_Elem4) == 0x000020, "Member 'Ftuple_Lint_Mint_Mint_Mint_Mint_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct VerseExperimental::Ftuple_Lint_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseExperimental::Ftuple_Lint_Mint_R) == 0x000008, "Wrong alignment on VerseExperimental::Ftuple_Lint_Mint_R");
static_assert(sizeof(VerseExperimental::Ftuple_Lint_Mint_R) == 0x000010, "Wrong size on VerseExperimental::Ftuple_Lint_Mint_R");
static_assert(offsetof(VerseExperimental::Ftuple_Lint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseExperimental::Ftuple_Lint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseExperimental::Ftuple_Lint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseExperimental::Ftuple_Lint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Ltime__span_Mfloat_R final
{
public:
	struct FVerseExperimental_time_span           __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltime__span_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Ltime__span_Mfloat_R");
static_assert(sizeof(Ftuple_Ltime__span_Mfloat_R) == 0x000018, "Wrong size on Ftuple_Ltime__span_Mfloat_R");
static_assert(offsetof(Ftuple_Ltime__span_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltime__span_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltime__span_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Ltime__span_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Ltime__span_Mtime__span_R final
{
public:
	struct FVerseExperimental_time_span           __verse_0x18E3F084_Elem0;
	struct FVerseExperimental_time_span           __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltime__span_Mtime__span_R) == 0x000008, "Wrong alignment on Ftuple_Ltime__span_Mtime__span_R");
static_assert(sizeof(Ftuple_Ltime__span_Mtime__span_R) == 0x000020, "Wrong size on Ftuple_Ltime__span_Mtime__span_R");
static_assert(offsetof(Ftuple_Ltime__span_Mtime__span_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltime__span_Mtime__span_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltime__span_Mtime__span_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Ltime__span_Mtime__span_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct FVerseExperimental_date_parts final
{
public:
	int64                                         __verse_0xC55E1F94_Year;
	int64                                         __verse_0x1B283C2C_Month;
	int64                                         __verse_0xD305C642_Day;
};
static_assert(alignof(FVerseExperimental_date_parts) == 0x000008, "Wrong alignment on FVerseExperimental_date_parts");
static_assert(sizeof(FVerseExperimental_date_parts) == 0x000018, "Wrong size on FVerseExperimental_date_parts");
static_assert(offsetof(FVerseExperimental_date_parts, __verse_0xC55E1F94_Year) == 0x000000, "Member 'FVerseExperimental_date_parts::__verse_0xC55E1F94_Year' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_date_parts, __verse_0x1B283C2C_Month) == 0x000008, "Member 'FVerseExperimental_date_parts::__verse_0x1B283C2C_Month' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_date_parts, __verse_0xD305C642_Day) == 0x000010, "Member 'FVerseExperimental_date_parts::__verse_0xD305C642_Day' has a wrong offset!");

struct FVerseExperimental_time_of_day_parts final
{
public:
	int64                                         __verse_0xEF684B3B_Hours;
	int64                                         __verse_0x2D42EE39_Minutes;
	int64                                         __verse_0xA650E91F_Seconds;
	int64                                         __verse_0x59EF8267_Milliseconds;
	int64                                         __verse_0x40AEA2F6_Microseconds;
	int64                                         __verse_0x0E58C5A9_Nanoseconds;
};
static_assert(alignof(FVerseExperimental_time_of_day_parts) == 0x000008, "Wrong alignment on FVerseExperimental_time_of_day_parts");
static_assert(sizeof(FVerseExperimental_time_of_day_parts) == 0x000030, "Wrong size on FVerseExperimental_time_of_day_parts");
static_assert(offsetof(FVerseExperimental_time_of_day_parts, __verse_0xEF684B3B_Hours) == 0x000000, "Member 'FVerseExperimental_time_of_day_parts::__verse_0xEF684B3B_Hours' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_time_of_day_parts, __verse_0x2D42EE39_Minutes) == 0x000008, "Member 'FVerseExperimental_time_of_day_parts::__verse_0x2D42EE39_Minutes' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_time_of_day_parts, __verse_0xA650E91F_Seconds) == 0x000010, "Member 'FVerseExperimental_time_of_day_parts::__verse_0xA650E91F_Seconds' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_time_of_day_parts, __verse_0x59EF8267_Milliseconds) == 0x000018, "Member 'FVerseExperimental_time_of_day_parts::__verse_0x59EF8267_Milliseconds' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_time_of_day_parts, __verse_0x40AEA2F6_Microseconds) == 0x000020, "Member 'FVerseExperimental_time_of_day_parts::__verse_0x40AEA2F6_Microseconds' has a wrong offset!");
static_assert(offsetof(FVerseExperimental_time_of_day_parts, __verse_0x0E58C5A9_Nanoseconds) == 0x000028, "Member 'FVerseExperimental_time_of_day_parts::__verse_0x0E58C5A9_Nanoseconds' has a wrong offset!");

}
