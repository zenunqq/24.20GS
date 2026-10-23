#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULetoBorder_C final : public UFortLetoLayoutBorder
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                BorderBottom;
	class UBorder*                                BorderLeft;
	class UBorder*                                BorderNameplate;
	class UBorder*                                BorderRight;
	class UBorder*                                BorderTop;
	class USafeZone*                              SafeZone_0;

public:
	void ExecuteUbergraph_LetoBorder(int32 EntryPoint);
	void UpdateBorderWidth(float HalfBorderWidth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LetoBorder_C">();
	}
	static class ULetoBorder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULetoBorder_C>();
	}
};
static_assert(alignof(ULetoBorder_C) == 0x000008, "Wrong alignment on ULetoBorder_C");
static_assert(sizeof(ULetoBorder_C) == 0x0002D0, "Wrong size on ULetoBorder_C");
static_assert(offsetof(ULetoBorder_C, UberGraphFrame) == 0x000298, "Member 'ULetoBorder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULetoBorder_C, BorderBottom) == 0x0002A0, "Member 'ULetoBorder_C::BorderBottom' has a wrong offset!");
static_assert(offsetof(ULetoBorder_C, BorderLeft) == 0x0002A8, "Member 'ULetoBorder_C::BorderLeft' has a wrong offset!");
static_assert(offsetof(ULetoBorder_C, BorderNameplate) == 0x0002B0, "Member 'ULetoBorder_C::BorderNameplate' has a wrong offset!");
static_assert(offsetof(ULetoBorder_C, BorderRight) == 0x0002B8, "Member 'ULetoBorder_C::BorderRight' has a wrong offset!");
static_assert(offsetof(ULetoBorder_C, BorderTop) == 0x0002C0, "Member 'ULetoBorder_C::BorderTop' has a wrong offset!");
static_assert(offsetof(ULetoBorder_C, SafeZone_0) == 0x0002C8, "Member 'ULetoBorder_C::SafeZone_0' has a wrong offset!");

}
