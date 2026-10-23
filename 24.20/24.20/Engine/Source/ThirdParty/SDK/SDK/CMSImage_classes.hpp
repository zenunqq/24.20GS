#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UCMSImage_C final : public UUserWidget
{
public:
	class UEpicCMSImage*                          Image;

public:
	void SetMediaURL(const class FString& MediaUrl);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMSImage_C">();
	}
	static class UCMSImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMSImage_C>();
	}
};
static_assert(alignof(UCMSImage_C) == 0x000008, "Wrong alignment on UCMSImage_C");
static_assert(sizeof(UCMSImage_C) == 0x000270, "Wrong size on UCMSImage_C");
static_assert(offsetof(UCMSImage_C, Image) == 0x000268, "Member 'UCMSImage_C::Image' has a wrong offset!");

}
