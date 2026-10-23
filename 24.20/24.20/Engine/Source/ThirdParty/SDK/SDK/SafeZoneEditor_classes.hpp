#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USafeZoneEditor_C final : public UFortSafeZoneEditor
{
public:
	class UVerticalBox*                           Default;
	class UImage*                                 Image_156;
	class UImage*                                 LowerLeftCorner;
	class UImage*                                 LowerRightCorner;
	class USafeZone*                              SafeZone_0;
	class UImage*                                 UpperLeftCorner;
	class UImage*                                 UpperRightCorner;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SafeZoneEditor_C">();
	}
	static class USafeZoneEditor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USafeZoneEditor_C>();
	}
};
static_assert(alignof(USafeZoneEditor_C) == 0x000008, "Wrong alignment on USafeZoneEditor_C");
static_assert(sizeof(USafeZoneEditor_C) == 0x000560, "Wrong size on USafeZoneEditor_C");
static_assert(offsetof(USafeZoneEditor_C, Default) == 0x000528, "Member 'USafeZoneEditor_C::Default' has a wrong offset!");
static_assert(offsetof(USafeZoneEditor_C, Image_156) == 0x000530, "Member 'USafeZoneEditor_C::Image_156' has a wrong offset!");
static_assert(offsetof(USafeZoneEditor_C, LowerLeftCorner) == 0x000538, "Member 'USafeZoneEditor_C::LowerLeftCorner' has a wrong offset!");
static_assert(offsetof(USafeZoneEditor_C, LowerRightCorner) == 0x000540, "Member 'USafeZoneEditor_C::LowerRightCorner' has a wrong offset!");
static_assert(offsetof(USafeZoneEditor_C, SafeZone_0) == 0x000548, "Member 'USafeZoneEditor_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(USafeZoneEditor_C, UpperLeftCorner) == 0x000550, "Member 'USafeZoneEditor_C::UpperLeftCorner' has a wrong offset!");
static_assert(offsetof(USafeZoneEditor_C, UpperRightCorner) == 0x000558, "Member 'USafeZoneEditor_C::UpperRightCorner' has a wrong offset!");

}
