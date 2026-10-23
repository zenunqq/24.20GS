#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UContentOnDemand_C final : public UFortContentOnDemand
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       Outro;
	class UImage*                                 Check;
	class UCommonTextBlock*                       Text_Downloaded;
	class UCommonTextBlock*                       Text_Downloading;
	int32                                         LastNotifiedNumDownload;
	int32                                         LastDisplayedNumDownload;

public:
	void OnUpdatedState(int32 NumActiveDownloads, int32 NumErrors);
	void ExecuteUbergraph_ContentOnDemand(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContentOnDemand_C">();
	}
	static class UContentOnDemand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContentOnDemand_C>();
	}
};
static_assert(alignof(UContentOnDemand_C) == 0x000008, "Wrong alignment on UContentOnDemand_C");
static_assert(sizeof(UContentOnDemand_C) == 0x000398, "Wrong size on UContentOnDemand_C");
static_assert(offsetof(UContentOnDemand_C, UberGraphFrame) == 0x000360, "Member 'UContentOnDemand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, Intro) == 0x000368, "Member 'UContentOnDemand_C::Intro' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, Outro) == 0x000370, "Member 'UContentOnDemand_C::Outro' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, Check) == 0x000378, "Member 'UContentOnDemand_C::Check' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, Text_Downloaded) == 0x000380, "Member 'UContentOnDemand_C::Text_Downloaded' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, Text_Downloading) == 0x000388, "Member 'UContentOnDemand_C::Text_Downloading' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, LastNotifiedNumDownload) == 0x000390, "Member 'UContentOnDemand_C::LastNotifiedNumDownload' has a wrong offset!");
static_assert(offsetof(UContentOnDemand_C, LastDisplayedNumDownload) == 0x000394, "Member 'UContentOnDemand_C::LastDisplayedNumDownload' has a wrong offset!");

}
