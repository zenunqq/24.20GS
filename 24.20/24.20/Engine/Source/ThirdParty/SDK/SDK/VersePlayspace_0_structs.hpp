#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EPlayspace_PlayerType : uint8
{
	All                                      = 0,
	ActivePlayer                             = 1,
	Spectator                                = 2,
	Playspace_MAX                            = 3,
};

struct VersePlayspace_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VersePlayspace_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VersePlayspace_0::Ftuple_L_R");
static_assert(sizeof(VersePlayspace_0::Ftuple_L_R) == 0x000001, "Wrong size on VersePlayspace_0::Ftuple_L_R");
static_assert(offsetof(VersePlayspace_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VersePlayspace_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

}
