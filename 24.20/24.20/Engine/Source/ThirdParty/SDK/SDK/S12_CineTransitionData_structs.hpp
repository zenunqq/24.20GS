#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FS12_CineTransitionData final
{
public:
	class USoundBase*                             Asset_5_259C55D44FF93843FB335A809DA62A60;
	float                                         Offset_8_666511AB4581BEDE8FBD39BD6B910118;
};
static_assert(alignof(FS12_CineTransitionData) == 0x000008, "Wrong alignment on FS12_CineTransitionData");
static_assert(sizeof(FS12_CineTransitionData) == 0x000010, "Wrong size on FS12_CineTransitionData");
static_assert(offsetof(FS12_CineTransitionData, Asset_5_259C55D44FF93843FB335A809DA62A60) == 0x000000, "Member 'FS12_CineTransitionData::Asset_5_259C55D44FF93843FB335A809DA62A60' has a wrong offset!");
static_assert(offsetof(FS12_CineTransitionData, Offset_8_666511AB4581BEDE8FBD39BD6B910118) == 0x000008, "Member 'FS12_CineTransitionData::Offset_8_666511AB4581BEDE8FBD39BD6B910118' has a wrong offset!");

}
