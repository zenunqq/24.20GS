#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FLogSubmitOptions final
{
public:
	class FString                                 EventName;
	bool                                          bSubmitLogs;
	bool                                          bSubmitLogsInOptionState;
	uint8                                         Pad_12[0x2];
	int32                                         LogTailKb;
	float                                         LogSubmitChance;
	uint8                                         Pad_1C[0x4];
	TArray<class FString>                         DoNotUploadReasons;
};
static_assert(alignof(FLogSubmitOptions) == 0x000008, "Wrong alignment on FLogSubmitOptions");
static_assert(sizeof(FLogSubmitOptions) == 0x000030, "Wrong size on FLogSubmitOptions");
static_assert(offsetof(FLogSubmitOptions, EventName) == 0x000000, "Member 'FLogSubmitOptions::EventName' has a wrong offset!");
static_assert(offsetof(FLogSubmitOptions, bSubmitLogs) == 0x000010, "Member 'FLogSubmitOptions::bSubmitLogs' has a wrong offset!");
static_assert(offsetof(FLogSubmitOptions, bSubmitLogsInOptionState) == 0x000011, "Member 'FLogSubmitOptions::bSubmitLogsInOptionState' has a wrong offset!");
static_assert(offsetof(FLogSubmitOptions, LogTailKb) == 0x000014, "Member 'FLogSubmitOptions::LogTailKb' has a wrong offset!");
static_assert(offsetof(FLogSubmitOptions, LogSubmitChance) == 0x000018, "Member 'FLogSubmitOptions::LogSubmitChance' has a wrong offset!");
static_assert(offsetof(FLogSubmitOptions, DoNotUploadReasons) == 0x000020, "Member 'FLogSubmitOptions::DoNotUploadReasons' has a wrong offset!");

}
