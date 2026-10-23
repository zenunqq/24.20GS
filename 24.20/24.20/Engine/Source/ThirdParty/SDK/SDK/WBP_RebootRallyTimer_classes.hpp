#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_RebootRallyTimer_C final : public URebootRallyTimerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Timer;
	class UCommonTextBlock*                       Text_Timer;

public:
	void UpdateRemainingTime();
	void ExecuteUbergraph_WBP_RebootRallyTimer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RebootRallyTimer_C">();
	}
	static class UWBP_RebootRallyTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RebootRallyTimer_C>();
	}
};
static_assert(alignof(UWBP_RebootRallyTimer_C) == 0x000008, "Wrong alignment on UWBP_RebootRallyTimer_C");
static_assert(sizeof(UWBP_RebootRallyTimer_C) == 0x0002C0, "Wrong size on UWBP_RebootRallyTimer_C");
static_assert(offsetof(UWBP_RebootRallyTimer_C, UberGraphFrame) == 0x0002A8, "Member 'UWBP_RebootRallyTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyTimer_C, Image_Timer) == 0x0002B0, "Member 'UWBP_RebootRallyTimer_C::Image_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyTimer_C, Text_Timer) == 0x0002B8, "Member 'UWBP_RebootRallyTimer_C::Text_Timer' has a wrong offset!");

}
