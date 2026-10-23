#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FColors_color final
{
public:
	double                                        __verse_0x35184040_R;
	double                                        __verse_0x98BF8727_G;
	double                                        __verse_0xAA4F5910_B;
};
static_assert(alignof(FColors_color) == 0x000008, "Wrong alignment on FColors_color");
static_assert(sizeof(FColors_color) == 0x000018, "Wrong size on FColors_color");
static_assert(offsetof(FColors_color, __verse_0x35184040_R) == 0x000000, "Member 'FColors_color::__verse_0x35184040_R' has a wrong offset!");
static_assert(offsetof(FColors_color, __verse_0x98BF8727_G) == 0x000008, "Member 'FColors_color::__verse_0x98BF8727_G' has a wrong offset!");
static_assert(offsetof(FColors_color, __verse_0xAA4F5910_B) == 0x000010, "Member 'FColors_color::__verse_0xAA4F5910_B' has a wrong offset!");

struct Ftuple_L_K_Kchar_M_Kchar_R final
{
public:
	TArray<FVerseStringProperty_>                 __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_L_K_Kchar_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_L_K_Kchar_M_Kchar_R");
static_assert(sizeof(Ftuple_L_K_Kchar_M_Kchar_R) == 0x000020, "Wrong size on Ftuple_L_K_Kchar_M_Kchar_R");
static_assert(offsetof(Ftuple_L_K_Kchar_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_K_Kchar_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_K_Kchar_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_K_Kchar_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kany_M_Kany_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	TArray<FVerseDynamicProperty_>                __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_L_Kany_M_Kany_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_M_Kany_R");
static_assert(sizeof(Ftuple_L_Kany_M_Kany_R) == 0x000020, "Wrong size on Ftuple_L_Kany_M_Kany_R");
static_assert(offsetof(Ftuple_L_Kany_M_Kany_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_M_Kany_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_M_Kany_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_M_Kany_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Verse::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(Verse::Ftuple_L_R) == 0x000001, "Wrong alignment on Verse::Ftuple_L_R");
static_assert(sizeof(Verse::Ftuple_L_R) == 0x000001, "Wrong size on Verse::Ftuple_L_R");
static_assert(offsetof(Verse::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'Verse::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Many_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	FVerseDynamicProperty_                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Many_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Many_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Many_R) == 0x000028, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Many_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Many_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Many_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Many_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lint_M_Kany_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	TArray<FVerseDynamicProperty_>                __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lint_M_Kany_R) == 0x000008, "Wrong alignment on Ftuple_Lint_M_Kany_R");
static_assert(sizeof(Ftuple_Lint_M_Kany_R) == 0x000018, "Wrong size on Ftuple_Lint_M_Kany_R");
static_assert(offsetof(Ftuple_Lint_M_Kany_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_M_Kany_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_M_Kany_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_M_Kany_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Mint_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	int64                                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mint_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mint_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mint_R) == 0x000020, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mint_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mint_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct FVerse_locale final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FVerse_locale) == 0x000001, "Wrong alignment on FVerse_locale");
static_assert(sizeof(FVerse_locale) == 0x000001, "Wrong size on FVerse_locale");

struct Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	struct Ftuple_L_Kany_M_Kany_R                 __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R) == 0x000038, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct alignas(0x08) Ftuple_Lany_Many_R final
{
public:
	FVerseDynamicProperty_                        __verse_0x18E3F084_Elem0;
	FVerseDynamicProperty_                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lany_Many_R) == 0x000008, "Wrong alignment on Ftuple_Lany_Many_R");
static_assert(sizeof(Ftuple_Lany_Many_R) == 0x000020, "Wrong size on Ftuple_Lany_Many_R");
static_assert(offsetof(Ftuple_Lany_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lany_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lany_Many_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lany_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	struct Ftuple_Lany_Many_R                     __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R) == 0x000038, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	struct Ftuple_Lint_M_Kany_R                   __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R) == 0x000030, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Verse::Ftuple_Lint_Many_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	FVerseDynamicProperty_                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Verse::Ftuple_Lint_Many_R) == 0x000008, "Wrong alignment on Verse::Ftuple_Lint_Many_R");
static_assert(sizeof(Verse::Ftuple_Lint_Many_R) == 0x000018, "Wrong size on Verse::Ftuple_Lint_Many_R");
static_assert(offsetof(Verse::Ftuple_Lint_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_Lint_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lint_Many_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Verse::Ftuple_Lint_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	struct Verse::Ftuple_Lint_Many_R              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R) == 0x000030, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lint_Mcolor_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	struct FColors_color                          __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lint_Mcolor_R) == 0x000008, "Wrong alignment on Ftuple_Lint_Mcolor_R");
static_assert(sizeof(Ftuple_Lint_Mcolor_R) == 0x000020, "Wrong size on Ftuple_Lint_Mcolor_R");
static_assert(offsetof(Ftuple_Lint_Mcolor_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_Mcolor_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mcolor_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_Mcolor_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Verse::Ftuple_Lint_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Verse::Ftuple_Lint_Mint_R) == 0x000008, "Wrong alignment on Verse::Ftuple_Lint_Mint_R");
static_assert(sizeof(Verse::Ftuple_Lint_Mint_R) == 0x000010, "Wrong size on Verse::Ftuple_Lint_Mint_R");
static_assert(offsetof(Verse::Ftuple_Lint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_Lint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Verse::Ftuple_Lint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	struct Verse::Ftuple_Lint_Mint_R              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R) == 0x000028, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Ltype_7b0_7d_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltype_7b0_7d_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Ltype_7b0_7d_Mint_R");
static_assert(sizeof(Ftuple_Ltype_7b0_7d_Mint_R) == 0x000010, "Wrong size on Ftuple_Ltype_7b0_7d_Mint_R");
static_assert(offsetof(Ftuple_Ltype_7b0_7d_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltype_7b0_7d_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltype_7b0_7d_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ltype_7b0_7d_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R final
{
public:
	TArray<FVerseDynamicProperty_>                __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	struct Ftuple_Ltype_7b0_7d_Mint_R             __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R) == 0x000008, "Wrong alignment on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R");
static_assert(sizeof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R) == 0x000028, "Wrong size on Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	TMap<FVerseStringProperty_, class UObject*>   __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R) == 0x000008, "Wrong alignment on Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R");
static_assert(sizeof(Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R) == 0x000070, "Wrong size on Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Verse::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct alignas(0x08) Verse::Ftuple_L_Kchar_M_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Verse::Ftuple_L_Kchar_M_Kchar_R) == 0x000008, "Wrong alignment on Verse::Ftuple_L_Kchar_M_Kchar_R");
static_assert(sizeof(Verse::Ftuple_L_Kchar_M_Kchar_R) == 0x000020, "Wrong size on Verse::Ftuple_L_Kchar_M_Kchar_R");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_L_Kchar_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Verse::Ftuple_L_Kchar_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	TArray<struct Verse::Ftuple_L_Kchar_M_Kchar_R> __verse_0x932BF92E_Elem2;
	struct FVerse_locale                          __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R) == 0x000008, "Wrong alignment on Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R");
static_assert(sizeof(Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R) == 0x000038, "Wrong size on Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R, __verse_0xF64C4596_Elem3) == 0x000030, "Member 'Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	struct Verse::Ftuple_L_R                      __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'Verse::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct alignas(0x08) Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_19[0x7];
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R) == 0x000040, "Wrong size on Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Verse::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct alignas(0x08) Ftuple_L_Kchar_M_QWhere_Nlocale_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_L_Kchar_M_QWhere_Nlocale_R) == 0x000008, "Wrong alignment on Ftuple_L_Kchar_M_QWhere_Nlocale_R");
static_assert(sizeof(Ftuple_L_Kchar_M_QWhere_Nlocale_R) == 0x000018, "Wrong size on Ftuple_L_Kchar_M_QWhere_Nlocale_R");
static_assert(offsetof(Ftuple_L_Kchar_M_QWhere_Nlocale_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kchar_M_QWhere_Nlocale_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_QWhere_Nlocale_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kchar_M_QWhere_Nlocale_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcolor_Mcolor_R final
{
public:
	struct FColors_color                          __verse_0x18E3F084_Elem0;
	struct FColors_color                          __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lcolor_Mcolor_R) == 0x000008, "Wrong alignment on Ftuple_Lcolor_Mcolor_R");
static_assert(sizeof(Ftuple_Lcolor_Mcolor_R) == 0x000030, "Wrong size on Ftuple_Lcolor_Mcolor_R");
static_assert(offsetof(Ftuple_Lcolor_Mcolor_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcolor_Mcolor_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcolor_Mcolor_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lcolor_Mcolor_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcolor_Mfloat_R final
{
public:
	struct FColors_color                          __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lcolor_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lcolor_Mfloat_R");
static_assert(sizeof(Ftuple_Lcolor_Mfloat_R) == 0x000020, "Wrong size on Ftuple_Lcolor_Mfloat_R");
static_assert(offsetof(Ftuple_Lcolor_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcolor_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcolor_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lcolor_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcolor_Mint_R final
{
public:
	struct FColors_color                          __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lcolor_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lcolor_Mint_R");
static_assert(sizeof(Ftuple_Lcolor_Mint_R) == 0x000020, "Wrong size on Ftuple_Lcolor_Mint_R");
static_assert(offsetof(Ftuple_Lcolor_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcolor_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcolor_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lcolor_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_M_QWhere_Nlocale_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfloat_M_QWhere_Nlocale_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_M_QWhere_Nlocale_R");
static_assert(sizeof(Ftuple_Lfloat_M_QWhere_Nlocale_R) == 0x000010, "Wrong size on Ftuple_Lfloat_M_QWhere_Nlocale_R");
static_assert(offsetof(Ftuple_Lfloat_M_QWhere_Nlocale_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_M_QWhere_Nlocale_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_M_QWhere_Nlocale_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_M_QWhere_Nlocale_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_Mcolor_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct FColors_color                          __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfloat_Mcolor_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mcolor_R");
static_assert(sizeof(Ftuple_Lfloat_Mcolor_R) == 0x000020, "Wrong size on Ftuple_Lfloat_Mcolor_R");
static_assert(offsetof(Ftuple_Lfloat_Mcolor_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mcolor_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mcolor_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_Mcolor_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Verse::Ftuple_Lfloat_Mfloat_Mfloat_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Verse::Ftuple_Lfloat_Mfloat_Mfloat_R) == 0x000008, "Wrong alignment on Verse::Ftuple_Lfloat_Mfloat_Mfloat_R");
static_assert(sizeof(Verse::Ftuple_Lfloat_Mfloat_Mfloat_R) == 0x000018, "Wrong size on Verse::Ftuple_Lfloat_Mfloat_Mfloat_R");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_Lfloat_Mfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Verse::Ftuple_Lfloat_Mfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mfloat_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Verse::Ftuple_Lfloat_Mfloat_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Verse::Ftuple_Lfloat_Mfloat_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Verse::Ftuple_Lfloat_Mfloat_R) == 0x000008, "Wrong alignment on Verse::Ftuple_Lfloat_Mfloat_R");
static_assert(sizeof(Verse::Ftuple_Lfloat_Mfloat_R) == 0x000010, "Wrong size on Verse::Ftuple_Lfloat_Mfloat_R");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Verse::Ftuple_Lfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Verse::Ftuple_Lfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Verse::Ftuple_Lfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_Mtuple_L_R_Mfloat_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct Verse::Ftuple_L_R                      __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_9[0x7];
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lfloat_Mtuple_L_R_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mtuple_L_R_Mfloat_R");
static_assert(sizeof(Ftuple_Lfloat_Mtuple_L_R_Mfloat_R) == 0x000018, "Wrong size on Ftuple_Lfloat_Mtuple_L_R_Mfloat_R");
static_assert(offsetof(Ftuple_Lfloat_Mtuple_L_R_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mtuple_L_R_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mtuple_L_R_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_Mtuple_L_R_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mtuple_L_R_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lfloat_Mtuple_L_R_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lint_M_QWhere_Nlocale_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lint_M_QWhere_Nlocale_R) == 0x000008, "Wrong alignment on Ftuple_Lint_M_QWhere_Nlocale_R");
static_assert(sizeof(Ftuple_Lint_M_QWhere_Nlocale_R) == 0x000010, "Wrong size on Ftuple_Lint_M_QWhere_Nlocale_R");
static_assert(offsetof(Ftuple_Lint_M_QWhere_Nlocale_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_M_QWhere_Nlocale_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_M_QWhere_Nlocale_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_M_QWhere_Nlocale_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lint_Mint_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lint_Mint_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lint_Mint_Mint_R");
static_assert(sizeof(Ftuple_Lint_Mint_Mint_R) == 0x000018, "Wrong size on Ftuple_Lint_Mint_Mint_R");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_Mint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_Mint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mint_Mint_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lint_Mint_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

}
