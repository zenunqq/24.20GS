#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UOodleNetworkTrainerCommandlet final : public UCommandlet
{
public:
	bool                                          bCompressionTest;
	bool                                          bWriteV5Dictionaries;
	uint8                                         Pad_82[0x2];
	int32                                         HashTableSize;
	int32                                         DictionarySize;
	int32                                         DictionaryTrials;
	int32                                         TrialRandomness;
	int32                                         TrialGenerations;
	bool                                          bNoTrials;
	uint8                                         Pad_99[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OodleNetworkTrainerCommandlet">();
	}
	static class UOodleNetworkTrainerCommandlet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOodleNetworkTrainerCommandlet>();
	}
};
static_assert(alignof(UOodleNetworkTrainerCommandlet) == 0x000008, "Wrong alignment on UOodleNetworkTrainerCommandlet");
static_assert(sizeof(UOodleNetworkTrainerCommandlet) == 0x0000A0, "Wrong size on UOodleNetworkTrainerCommandlet");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, bCompressionTest) == 0x000080, "Member 'UOodleNetworkTrainerCommandlet::bCompressionTest' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, bWriteV5Dictionaries) == 0x000081, "Member 'UOodleNetworkTrainerCommandlet::bWriteV5Dictionaries' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, HashTableSize) == 0x000084, "Member 'UOodleNetworkTrainerCommandlet::HashTableSize' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, DictionarySize) == 0x000088, "Member 'UOodleNetworkTrainerCommandlet::DictionarySize' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, DictionaryTrials) == 0x00008C, "Member 'UOodleNetworkTrainerCommandlet::DictionaryTrials' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, TrialRandomness) == 0x000090, "Member 'UOodleNetworkTrainerCommandlet::TrialRandomness' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, TrialGenerations) == 0x000094, "Member 'UOodleNetworkTrainerCommandlet::TrialGenerations' has a wrong offset!");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, bNoTrials) == 0x000098, "Member 'UOodleNetworkTrainerCommandlet::bNoTrials' has a wrong offset!");

}
