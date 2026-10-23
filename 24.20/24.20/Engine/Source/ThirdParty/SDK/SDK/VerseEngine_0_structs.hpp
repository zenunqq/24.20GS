#pragma once

#include "Basic.hpp"

namespace SDK
{

struct VerseEngine_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseEngine_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseEngine_0::Ftuple_L_R");
static_assert(sizeof(VerseEngine_0::Ftuple_L_R) == 0x000001, "Wrong size on VerseEngine_0::Ftuple_L_R");
static_assert(offsetof(VerseEngine_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseEngine_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct VerseEngine_0::Ftuple_Lcomponent_Many_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	class UClass*                                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseEngine_0::Ftuple_Lcomponent_Many_R) == 0x000008, "Wrong alignment on VerseEngine_0::Ftuple_Lcomponent_Many_R");
static_assert(sizeof(VerseEngine_0::Ftuple_Lcomponent_Many_R) == 0x000010, "Wrong size on VerseEngine_0::Ftuple_Lcomponent_Many_R");
static_assert(offsetof(VerseEngine_0::Ftuple_Lcomponent_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseEngine_0::Ftuple_Lcomponent_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseEngine_0::Ftuple_Lcomponent_Many_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseEngine_0::Ftuple_Lcomponent_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
