#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IBPI_NonParticipant_C final : public IInterface
{
public:
	void PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_NonParticipant_C">();
	}
	static class IBPI_NonParticipant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_NonParticipant_C>();
	}
};
static_assert(alignof(IBPI_NonParticipant_C) == 0x000008, "Wrong alignment on IBPI_NonParticipant_C");
static_assert(sizeof(IBPI_NonParticipant_C) == 0x000028, "Wrong size on IBPI_NonParticipant_C");

}
