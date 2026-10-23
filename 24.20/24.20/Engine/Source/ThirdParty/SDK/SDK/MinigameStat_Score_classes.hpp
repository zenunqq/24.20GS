#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMinigameStat_Score_C final : public UFortMinigameStatFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameStat_Score_C">();
	}
	static class UMinigameStat_Score_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinigameStat_Score_C>();
	}
};
static_assert(alignof(UMinigameStat_Score_C) == 0x000008, "Wrong alignment on UMinigameStat_Score_C");
static_assert(sizeof(UMinigameStat_Score_C) == 0x0001A0, "Wrong size on UMinigameStat_Score_C");

}
