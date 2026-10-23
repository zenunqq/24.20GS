#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct InteriorAudioComponent_Debug_C_Update final
{
public:
	struct FInteriorAudioScanResults              ScanResults;
};
static_assert(alignof(InteriorAudioComponent_Debug_C_Update) == 0x000008, "Wrong alignment on InteriorAudioComponent_Debug_C_Update");
static_assert(sizeof(InteriorAudioComponent_Debug_C_Update) == 0x000078, "Wrong size on InteriorAudioComponent_Debug_C_Update");
static_assert(offsetof(InteriorAudioComponent_Debug_C_Update, ScanResults) == 0x000000, "Member 'InteriorAudioComponent_Debug_C_Update::ScanResults' has a wrong offset!");

}
