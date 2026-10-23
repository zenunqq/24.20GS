#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK
{

struct FPlaylistOptionScriptValue final : public FPlaylistOptionValue
{
public:
	TSubclassOf<class UVerseCreativeDevice>       Value;
};
static_assert(alignof(FPlaylistOptionScriptValue) == 0x000008, "Wrong alignment on FPlaylistOptionScriptValue");
static_assert(sizeof(FPlaylistOptionScriptValue) == 0x0000B0, "Wrong size on FPlaylistOptionScriptValue");
static_assert(offsetof(FPlaylistOptionScriptValue, Value) == 0x0000A8, "Member 'FPlaylistOptionScriptValue::Value' has a wrong offset!");

struct FVerseDeviceFunctionPayload final
{
public:
	class AController*                            Instigator;
};
static_assert(alignof(FVerseDeviceFunctionPayload) == 0x000008, "Wrong alignment on FVerseDeviceFunctionPayload");
static_assert(sizeof(FVerseDeviceFunctionPayload) == 0x000008, "Wrong size on FVerseDeviceFunctionPayload");
static_assert(offsetof(FVerseDeviceFunctionPayload, Instigator) == 0x000000, "Member 'FVerseDeviceFunctionPayload::Instigator' has a wrong offset!");

}
