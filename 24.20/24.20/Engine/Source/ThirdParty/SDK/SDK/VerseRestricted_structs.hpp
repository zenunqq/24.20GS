#pragma once

#include "Basic.hpp"

namespace SDK
{

struct VerseRestricted::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseRestricted::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseRestricted::Ftuple_L_R");
static_assert(sizeof(VerseRestricted::Ftuple_L_R) == 0x000001, "Wrong size on VerseRestricted::Ftuple_L_R");
static_assert(offsetof(VerseRestricted::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseRestricted::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

}
