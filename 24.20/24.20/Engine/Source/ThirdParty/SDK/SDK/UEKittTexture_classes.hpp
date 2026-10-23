#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UUEKittTexture final : public UTexture
{
public:
	struct FIntPoint                              Dimensions;
	struct FLinearColor                           ClearColor;
	uint8                                         Pad_158[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UEKittTexture">();
	}
	static class UUEKittTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUEKittTexture>();
	}
};
static_assert(alignof(UUEKittTexture) == 0x000008, "Wrong alignment on UUEKittTexture");
static_assert(sizeof(UUEKittTexture) == 0x000178, "Wrong size on UUEKittTexture");
static_assert(offsetof(UUEKittTexture, Dimensions) == 0x000140, "Member 'UUEKittTexture::Dimensions' has a wrong offset!");
static_assert(offsetof(UUEKittTexture, ClearColor) == 0x000148, "Member 'UUEKittTexture::ClearColor' has a wrong offset!");

}
