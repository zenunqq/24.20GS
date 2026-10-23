#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UKeybindWidget_C final : public UFortKeybindWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Preview;

public:
	void Construct();
	void ExecuteUbergraph_KeybindWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeybindWidget_C">();
	}
	static class UKeybindWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeybindWidget_C>();
	}
};
static_assert(alignof(UKeybindWidget_C) == 0x000010, "Wrong alignment on UKeybindWidget_C");
static_assert(sizeof(UKeybindWidget_C) == 0x000B50, "Wrong size on UKeybindWidget_C");
static_assert(offsetof(UKeybindWidget_C, UberGraphFrame) == 0x000B40, "Member 'UKeybindWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, Image_Preview) == 0x000B48, "Member 'UKeybindWidget_C::Image_Preview' has a wrong offset!");

}
