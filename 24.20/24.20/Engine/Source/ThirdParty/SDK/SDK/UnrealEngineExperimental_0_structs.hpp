#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EDiagnostics_log_level : uint8
{
	Debug                                    = 0,
	Verbose                                  = 1,
	Normal                                   = 2,
	Warning                                  = 3,
	Error                                    = 4,
	Diagnostics_log_MAX                      = 5,
};

struct alignas(0x08) UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) == 0x000018, "Wrong size on UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
