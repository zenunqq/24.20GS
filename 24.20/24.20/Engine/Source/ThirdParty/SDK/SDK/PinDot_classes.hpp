#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPinDot_C final : public UFortPinCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_17;

public:
	void ExecuteUbergraph_PinDot(int32 EntryPoint);
	void OnSetFilled(const bool bFilled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PinDot_C">();
	}
	static class UPinDot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPinDot_C>();
	}
};
static_assert(alignof(UPinDot_C) == 0x000008, "Wrong alignment on UPinDot_C");
static_assert(sizeof(UPinDot_C) == 0x000278, "Wrong size on UPinDot_C");
static_assert(offsetof(UPinDot_C, UberGraphFrame) == 0x000268, "Member 'UPinDot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPinDot_C, Image_17) == 0x000270, "Member 'UPinDot_C::Image_17' has a wrong offset!");

}
