#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ELinkCodeUserInputError : uint8
{
	InvalidMnemonicCharacter                 = 0,
	InvalidMnemonicLength                    = 1,
	InvalidVersionFormat                     = 2,
	NoError                                  = 3,
	ELinkCodeUserInputError_MAX              = 4,
};

struct FOnlineLinkId final
{
public:
	class FString                                 Mnemonic;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FOnlineLinkId) == 0x000008, "Wrong alignment on FOnlineLinkId");
static_assert(sizeof(FOnlineLinkId) == 0x000018, "Wrong size on FOnlineLinkId");
static_assert(offsetof(FOnlineLinkId, Mnemonic) == 0x000000, "Member 'FOnlineLinkId::Mnemonic' has a wrong offset!");
static_assert(offsetof(FOnlineLinkId, Version) == 0x000010, "Member 'FOnlineLinkId::Version' has a wrong offset!");

}
