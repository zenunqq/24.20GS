#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortSocialEventRSVPWidget_C final : public UFortSocialEventRSVPWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOverlay*                               Overlay_AdditionalEvents;
	class UCommonTextBlock*                       Text_AdditionalEvents;
	class UCommonTextBlock*                       Text_EventName;
	class UCommonTextBlock*                       Text_MonthDay;
	ESlateVisibility                              In_Visibility;

public:
	void Construct();
	void ExecuteUbergraph_FortSocialEventRSVPWidget(int32 EntryPoint);
	void OnRefreshDisplay(const class FText& EventName, const class FText& Date, const class FText& AdditionalEvents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortSocialEventRSVPWidget_C">();
	}
	static class UFortSocialEventRSVPWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSocialEventRSVPWidget_C>();
	}
};
static_assert(alignof(UFortSocialEventRSVPWidget_C) == 0x000008, "Wrong alignment on UFortSocialEventRSVPWidget_C");
static_assert(sizeof(UFortSocialEventRSVPWidget_C) == 0x000298, "Wrong size on UFortSocialEventRSVPWidget_C");
static_assert(offsetof(UFortSocialEventRSVPWidget_C, UberGraphFrame) == 0x000268, "Member 'UFortSocialEventRSVPWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortSocialEventRSVPWidget_C, Overlay_AdditionalEvents) == 0x000270, "Member 'UFortSocialEventRSVPWidget_C::Overlay_AdditionalEvents' has a wrong offset!");
static_assert(offsetof(UFortSocialEventRSVPWidget_C, Text_AdditionalEvents) == 0x000278, "Member 'UFortSocialEventRSVPWidget_C::Text_AdditionalEvents' has a wrong offset!");
static_assert(offsetof(UFortSocialEventRSVPWidget_C, Text_EventName) == 0x000280, "Member 'UFortSocialEventRSVPWidget_C::Text_EventName' has a wrong offset!");
static_assert(offsetof(UFortSocialEventRSVPWidget_C, Text_MonthDay) == 0x000288, "Member 'UFortSocialEventRSVPWidget_C::Text_MonthDay' has a wrong offset!");
static_assert(offsetof(UFortSocialEventRSVPWidget_C, In_Visibility) == 0x000290, "Member 'UFortSocialEventRSVPWidget_C::In_Visibility' has a wrong offset!");

}
