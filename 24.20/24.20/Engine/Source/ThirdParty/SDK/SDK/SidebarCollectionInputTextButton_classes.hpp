#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarCollectionInputTextButton_C final : public UFortTextButton
{
public:
	uint8                                         Pad_14C8[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_SidebarCollectionInputTextButton(int32 EntryPoint);
	void HandleInputMethodChanged(ECommonInputType CurrentInputType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarCollectionInputTextButton_C">();
	}
	static class USidebarCollectionInputTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarCollectionInputTextButton_C>();
	}
};
static_assert(alignof(USidebarCollectionInputTextButton_C) == 0x000010, "Wrong alignment on USidebarCollectionInputTextButton_C");
static_assert(sizeof(USidebarCollectionInputTextButton_C) == 0x0014E0, "Wrong size on USidebarCollectionInputTextButton_C");
static_assert(offsetof(USidebarCollectionInputTextButton_C, UberGraphFrame) == 0x0014D0, "Member 'USidebarCollectionInputTextButton_C::UberGraphFrame' has a wrong offset!");

}
