#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMatchmakingSuggestionWidget_C final : public UFortMatchmakingSuggestionWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchmakingSuggestionWidget_C">();
	}
	static class UMatchmakingSuggestionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchmakingSuggestionWidget_C>();
	}
};
static_assert(alignof(UMatchmakingSuggestionWidget_C) == 0x000008, "Wrong alignment on UMatchmakingSuggestionWidget_C");
static_assert(sizeof(UMatchmakingSuggestionWidget_C) == 0x0002B0, "Wrong size on UMatchmakingSuggestionWidget_C");

}
