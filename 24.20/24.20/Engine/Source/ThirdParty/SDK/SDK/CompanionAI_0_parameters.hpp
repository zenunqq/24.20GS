#pragma once

#include "Basic.hpp"

#include "FortniteAI_structs.hpp"

namespace SDK::Params
{

struct PingComponentBase_HandleOnNPCConvertedEvent final
{
public:
	class AFortPawn*                              InstigatorPawn;
	class AFortPawn*                              ConvertedPawn;
};
static_assert(alignof(PingComponentBase_HandleOnNPCConvertedEvent) == 0x000008, "Wrong alignment on PingComponentBase_HandleOnNPCConvertedEvent");
static_assert(sizeof(PingComponentBase_HandleOnNPCConvertedEvent) == 0x000010, "Wrong size on PingComponentBase_HandleOnNPCConvertedEvent");
static_assert(offsetof(PingComponentBase_HandleOnNPCConvertedEvent, InstigatorPawn) == 0x000000, "Member 'PingComponentBase_HandleOnNPCConvertedEvent::InstigatorPawn' has a wrong offset!");
static_assert(offsetof(PingComponentBase_HandleOnNPCConvertedEvent, ConvertedPawn) == 0x000008, "Member 'PingComponentBase_HandleOnNPCConvertedEvent::ConvertedPawn' has a wrong offset!");

struct PingComponentBase_HandleOnNPCUnconvertedEvent final
{
public:
	class AFortPawn*                              UnconvertedFortPawn;
	EUnconvertReason                              UnconvertReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(PingComponentBase_HandleOnNPCUnconvertedEvent) == 0x000008, "Wrong alignment on PingComponentBase_HandleOnNPCUnconvertedEvent");
static_assert(sizeof(PingComponentBase_HandleOnNPCUnconvertedEvent) == 0x000010, "Wrong size on PingComponentBase_HandleOnNPCUnconvertedEvent");
static_assert(offsetof(PingComponentBase_HandleOnNPCUnconvertedEvent, UnconvertedFortPawn) == 0x000000, "Member 'PingComponentBase_HandleOnNPCUnconvertedEvent::UnconvertedFortPawn' has a wrong offset!");
static_assert(offsetof(PingComponentBase_HandleOnNPCUnconvertedEvent, UnconvertReason) == 0x000008, "Member 'PingComponentBase_HandleOnNPCUnconvertedEvent::UnconvertReason' has a wrong offset!");

}
