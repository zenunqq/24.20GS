#pragma once

#include "Basic.hpp"

namespace SDK
{

struct VerseSimulation_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseSimulation_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseSimulation_0::Ftuple_L_R");
static_assert(sizeof(VerseSimulation_0::Ftuple_L_R) == 0x000001, "Wrong size on VerseSimulation_0::Ftuple_L_R");
static_assert(offsetof(VerseSimulation_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseSimulation_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct VerseSimulation_0::Ftuple_Lint_Many_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	class UClass*                                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseSimulation_0::Ftuple_Lint_Many_R) == 0x000008, "Wrong alignment on VerseSimulation_0::Ftuple_Lint_Many_R");
static_assert(sizeof(VerseSimulation_0::Ftuple_Lint_Many_R) == 0x000010, "Wrong size on VerseSimulation_0::Ftuple_Lint_Many_R");
static_assert(offsetof(VerseSimulation_0::Ftuple_Lint_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseSimulation_0::Ftuple_Lint_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseSimulation_0::Ftuple_Lint_Many_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseSimulation_0::Ftuple_Lint_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer__component_Many_R final
{
public:
	class USimulation_player_component*           __verse_0x18E3F084_Elem0;
	class UClass*                                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer__component_Many_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__component_Many_R");
static_assert(sizeof(Ftuple_Lplayer__component_Many_R) == 0x000010, "Wrong size on Ftuple_Lplayer__component_Many_R");
static_assert(offsetof(Ftuple_Lplayer__component_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__component_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_Many_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__component_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
