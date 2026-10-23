#pragma once

#include "Basic.hpp"

namespace SDK
{

struct VerseAssets::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseAssets::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseAssets::Ftuple_L_R");
static_assert(sizeof(VerseAssets::Ftuple_L_R) == 0x000001, "Wrong size on VerseAssets::Ftuple_L_R");
static_assert(offsetof(VerseAssets::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseAssets::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct VerseAssets::Ftuple_Lasset_M_Kchar_R final
{
public:
	class UClass*                                 __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseAssets::Ftuple_Lasset_M_Kchar_R) == 0x000008, "Wrong alignment on VerseAssets::Ftuple_Lasset_M_Kchar_R");
static_assert(sizeof(VerseAssets::Ftuple_Lasset_M_Kchar_R) == 0x000018, "Wrong size on VerseAssets::Ftuple_Lasset_M_Kchar_R");
static_assert(offsetof(VerseAssets::Ftuple_Lasset_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseAssets::Ftuple_Lasset_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseAssets::Ftuple_Lasset_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseAssets::Ftuple_Lasset_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
