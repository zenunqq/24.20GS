#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FVerseGameplayStringDebugMessage final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	class FString                                 String;
};
static_assert(alignof(FVerseGameplayStringDebugMessage) == 0x000008, "Wrong alignment on FVerseGameplayStringDebugMessage");
static_assert(sizeof(FVerseGameplayStringDebugMessage) == 0x000018, "Wrong size on FVerseGameplayStringDebugMessage");
static_assert(offsetof(FVerseGameplayStringDebugMessage, Name) == 0x000000, "Member 'FVerseGameplayStringDebugMessage::Name' has a wrong offset!");
static_assert(offsetof(FVerseGameplayStringDebugMessage, String) == 0x000008, "Member 'FVerseGameplayStringDebugMessage::String' has a wrong offset!");

}
