#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UUEKittWidget_C final : public UFortUEKittWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_40;

public:
	void ExecuteUbergraph_UEKittWidget(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UEKittWidget_C">();
	}
	static class UUEKittWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUEKittWidget_C>();
	}
};
static_assert(alignof(UUEKittWidget_C) == 0x000008, "Wrong alignment on UUEKittWidget_C");
static_assert(sizeof(UUEKittWidget_C) == 0x0004B0, "Wrong size on UUEKittWidget_C");
static_assert(offsetof(UUEKittWidget_C, UberGraphFrame) == 0x0004A0, "Member 'UUEKittWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUEKittWidget_C, Image_40) == 0x0004A8, "Member 'UUEKittWidget_C::Image_40' has a wrong offset!");

}
