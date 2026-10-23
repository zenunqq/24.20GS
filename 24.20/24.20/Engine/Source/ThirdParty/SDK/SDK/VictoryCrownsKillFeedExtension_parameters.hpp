#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle final
{
public:
	const class AFortPlayerStateAthena*           KillerPlayerStateAthena;
	class FString                                 KillerStyle;
	class FString                                 ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_39[0x7];
	class UFortGameStateComponent_VictoryCrowns*  CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsCrownBearer_ReturnValue;
};
static_assert(alignof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle) == 0x000008, "Wrong alignment on VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle");
static_assert(sizeof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle) == 0x000050, "Wrong size on VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, KillerPlayerStateAthena) == 0x000000, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::KillerPlayerStateAthena' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, KillerStyle) == 0x000008, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::KillerStyle' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, ReturnValue) == 0x000018, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, CallFunc_GetGameStateAthena_ReturnValue) == 0x000030, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle, CallFunc_IsCrownBearer_ReturnValue) == 0x000049, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle::CallFunc_IsCrownBearer_ReturnValue' has a wrong offset!");

struct VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle final
{
public:
	const class AFortPlayerStateAthena*           VictimPlayerStateAthena;
	class FString                                 VictimStyle;
	class FString                                 ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_39[0x7];
	class UFortGameStateComponent_VictoryCrowns*  CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsCrownBearer_ReturnValue;
};
static_assert(alignof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle) == 0x000008, "Wrong alignment on VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle");
static_assert(sizeof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle) == 0x000050, "Wrong size on VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, VictimPlayerStateAthena) == 0x000000, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::VictimPlayerStateAthena' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, VictimStyle) == 0x000008, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::VictimStyle' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, ReturnValue) == 0x000018, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, CallFunc_GetGameStateAthena_ReturnValue) == 0x000030, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle, CallFunc_IsCrownBearer_ReturnValue) == 0x000049, "Member 'VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle::CallFunc_IsCrownBearer_ReturnValue' has a wrong offset!");

}
