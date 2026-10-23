#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortAutoRunNotificationWidget_C final : public UFortAutoRunNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UFortLazyImage*                         Image_Background;
	class UImage*                                 Image_Run;
	class UOverlay*                               Overlay_0;
	class UCommonTextBlock*                       Text;

public:
	void Construct();
	void ExecuteUbergraph_FortAutoRunNotificationWidget(int32 EntryPoint);
	void OnAutoRunEnabled(bool bAutoRunEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortAutoRunNotificationWidget_C">();
	}
	static class UFortAutoRunNotificationWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAutoRunNotificationWidget_C>();
	}
};
static_assert(alignof(UFortAutoRunNotificationWidget_C) == 0x000008, "Wrong alignment on UFortAutoRunNotificationWidget_C");
static_assert(sizeof(UFortAutoRunNotificationWidget_C) == 0x0002D8, "Wrong size on UFortAutoRunNotificationWidget_C");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, UberGraphFrame) == 0x0002A0, "Member 'UFortAutoRunNotificationWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Outro) == 0x0002A8, "Member 'UFortAutoRunNotificationWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Intro) == 0x0002B0, "Member 'UFortAutoRunNotificationWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Image_Background) == 0x0002B8, "Member 'UFortAutoRunNotificationWidget_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Image_Run) == 0x0002C0, "Member 'UFortAutoRunNotificationWidget_C::Image_Run' has a wrong offset!");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Overlay_0) == 0x0002C8, "Member 'UFortAutoRunNotificationWidget_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Text) == 0x0002D0, "Member 'UFortAutoRunNotificationWidget_C::Text' has a wrong offset!");

}
