#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UQualityLevelSelectTimer_C final : public UFortHUDQualityLevelSelectTimer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	double                                        TextScaleUnderOneSecond;
	double                                        TextScaleOverOneSecond;

public:
	void UpdateTextScale(double TimeRemaining);
	void OnTimeRemainingChanged(const float TimeRemaining);
	void OnProgressStarted(const float Duration);
	void OnProgressEnded();
	void OnInitialized();
	void ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QualityLevelSelectTimer_C">();
	}
	static class UQualityLevelSelectTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQualityLevelSelectTimer_C>();
	}
};
static_assert(alignof(UQualityLevelSelectTimer_C) == 0x000008, "Wrong alignment on UQualityLevelSelectTimer_C");
static_assert(sizeof(UQualityLevelSelectTimer_C) == 0x0002E8, "Wrong size on UQualityLevelSelectTimer_C");
static_assert(offsetof(UQualityLevelSelectTimer_C, UberGraphFrame) == 0x0002D0, "Member 'UQualityLevelSelectTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectTimer_C, TextScaleUnderOneSecond) == 0x0002D8, "Member 'UQualityLevelSelectTimer_C::TextScaleUnderOneSecond' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectTimer_C, TextScaleOverOneSecond) == 0x0002E0, "Member 'UQualityLevelSelectTimer_C::TextScaleOverOneSecond' has a wrong offset!");

}
