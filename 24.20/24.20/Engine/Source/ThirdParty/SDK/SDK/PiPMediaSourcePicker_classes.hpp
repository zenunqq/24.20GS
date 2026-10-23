#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PictureInPictureUI_classes.hpp"

namespace SDK
{

class UPiPMediaSourcePicker_C final : public UPictureInPictureSourcePicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonActionWidget*                    ToggleActionWidget;
	struct FMargin                                FrontendPadding;

public:
	void Construct();
	void ExecuteUbergraph_PiPMediaSourcePicker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PiPMediaSourcePicker_C">();
	}
	static class UPiPMediaSourcePicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiPMediaSourcePicker_C>();
	}
};
static_assert(alignof(UPiPMediaSourcePicker_C) == 0x000010, "Wrong alignment on UPiPMediaSourcePicker_C");
static_assert(sizeof(UPiPMediaSourcePicker_C) == 0x0005C0, "Wrong size on UPiPMediaSourcePicker_C");
static_assert(offsetof(UPiPMediaSourcePicker_C, UberGraphFrame) == 0x0005A0, "Member 'UPiPMediaSourcePicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPiPMediaSourcePicker_C, ToggleActionWidget) == 0x0005A8, "Member 'UPiPMediaSourcePicker_C::ToggleActionWidget' has a wrong offset!");
static_assert(offsetof(UPiPMediaSourcePicker_C, FrontendPadding) == 0x0005B0, "Member 'UPiPMediaSourcePicker_C::FrontendPadding' has a wrong offset!");

}
