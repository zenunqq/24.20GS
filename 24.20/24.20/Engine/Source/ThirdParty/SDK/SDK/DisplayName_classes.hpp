#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDisplayName_C final : public UFortDisplayNameWidget
{
public:
	class UCommonBorder*                          DisplayNameBorder;
	class UEditableText*                          EditText_Number;
	class USafeZone*                              SafeZone_0;
	class UVerticalBox*                           VBox_Number;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisplayName_C">();
	}
	static class UDisplayName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisplayName_C>();
	}
};
static_assert(alignof(UDisplayName_C) == 0x000008, "Wrong alignment on UDisplayName_C");
static_assert(sizeof(UDisplayName_C) == 0x000588, "Wrong size on UDisplayName_C");
static_assert(offsetof(UDisplayName_C, DisplayNameBorder) == 0x000568, "Member 'UDisplayName_C::DisplayNameBorder' has a wrong offset!");
static_assert(offsetof(UDisplayName_C, EditText_Number) == 0x000570, "Member 'UDisplayName_C::EditText_Number' has a wrong offset!");
static_assert(offsetof(UDisplayName_C, SafeZone_0) == 0x000578, "Member 'UDisplayName_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UDisplayName_C, VBox_Number) == 0x000580, "Member 'UDisplayName_C::VBox_Number' has a wrong offset!");

}
