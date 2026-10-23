#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived final
{
public:
	TArray<class FString>                         Mnemonics;
};
static_assert(alignof(DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived) == 0x000008, "Wrong alignment on DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived");
static_assert(sizeof(DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived) == 0x000010, "Wrong size on DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived");
static_assert(offsetof(DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived, Mnemonics) == 0x000000, "Member 'DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived::Mnemonics' has a wrong offset!");

}
