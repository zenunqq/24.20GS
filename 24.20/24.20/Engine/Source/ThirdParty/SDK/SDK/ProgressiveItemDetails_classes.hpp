#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UProgressiveItemDetails_C final : public UFortProgressiveItemDetailsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_140;
	class UImage*                                 Image_Lock_6;

public:
	void ExecuteUbergraph_ProgressiveItemDetails(int32 EntryPoint);
	void UpdateSubscribedVisuals(bool IsSubscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItemDetails_C">();
	}
	static class UProgressiveItemDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItemDetails_C>();
	}
};
static_assert(alignof(UProgressiveItemDetails_C) == 0x000008, "Wrong alignment on UProgressiveItemDetails_C");
static_assert(sizeof(UProgressiveItemDetails_C) == 0x0002A8, "Wrong size on UProgressiveItemDetails_C");
static_assert(offsetof(UProgressiveItemDetails_C, UberGraphFrame) == 0x000290, "Member 'UProgressiveItemDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItemDetails_C, Image_140) == 0x000298, "Member 'UProgressiveItemDetails_C::Image_140' has a wrong offset!");
static_assert(offsetof(UProgressiveItemDetails_C, Image_Lock_6) == 0x0002A0, "Member 'UProgressiveItemDetails_C::Image_Lock_6' has a wrong offset!");

}
