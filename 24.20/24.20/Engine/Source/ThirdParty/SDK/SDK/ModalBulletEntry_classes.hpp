#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UModalBulletEntry_C final : public UFortModalBulletEntry
{
public:
	class UImage*                                 PIP;
	class FText                                   Text;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ModalBulletEntry_C">();
	}
	static class UModalBulletEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModalBulletEntry_C>();
	}
};
static_assert(alignof(UModalBulletEntry_C) == 0x000008, "Wrong alignment on UModalBulletEntry_C");
static_assert(sizeof(UModalBulletEntry_C) == 0x0002B8, "Wrong size on UModalBulletEntry_C");
static_assert(offsetof(UModalBulletEntry_C, PIP) == 0x000298, "Member 'UModalBulletEntry_C::PIP' has a wrong offset!");
static_assert(offsetof(UModalBulletEntry_C, Text) == 0x0002A0, "Member 'UModalBulletEntry_C::Text' has a wrong offset!");

}
