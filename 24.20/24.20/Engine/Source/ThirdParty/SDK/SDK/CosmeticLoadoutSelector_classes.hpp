#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCosmeticLoadoutSelector_C final : public UFortCosmeticLoadoutSelector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Background;
	class UCommonActionWidget*                    Left_InputActionDisplay;
	class UCommonActionWidget*                    Right_InputActionDisplay;

public:
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint);
	void OnLoadoutSet(int32 Selection);
	void OnNumLoadoutsFound(int32 NumLoadouts);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CosmeticLoadoutSelector_C">();
	}
	static class UCosmeticLoadoutSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticLoadoutSelector_C>();
	}
};
static_assert(alignof(UCosmeticLoadoutSelector_C) == 0x000008, "Wrong alignment on UCosmeticLoadoutSelector_C");
static_assert(sizeof(UCosmeticLoadoutSelector_C) == 0x0002D8, "Wrong size on UCosmeticLoadoutSelector_C");
static_assert(offsetof(UCosmeticLoadoutSelector_C, UberGraphFrame) == 0x0002B8, "Member 'UCosmeticLoadoutSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Background) == 0x0002C0, "Member 'UCosmeticLoadoutSelector_C::Background' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Left_InputActionDisplay) == 0x0002C8, "Member 'UCosmeticLoadoutSelector_C::Left_InputActionDisplay' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Right_InputActionDisplay) == 0x0002D0, "Member 'UCosmeticLoadoutSelector_C::Right_InputActionDisplay' has a wrong offset!");

}
