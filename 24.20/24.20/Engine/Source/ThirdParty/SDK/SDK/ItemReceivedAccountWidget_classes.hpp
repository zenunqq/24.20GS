#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UItemReceivedAccountWidget_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       CommonTextBlock_UserMessage;

public:
	void ExecuteUbergraph_ItemReceivedAccountWidget(int32 EntryPoint);
	void OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedAccountWidget_C">();
	}
	static class UItemReceivedAccountWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedAccountWidget_C>();
	}
};
static_assert(alignof(UItemReceivedAccountWidget_C) == 0x000008, "Wrong alignment on UItemReceivedAccountWidget_C");
static_assert(sizeof(UItemReceivedAccountWidget_C) == 0x0002D8, "Wrong size on UItemReceivedAccountWidget_C");
static_assert(offsetof(UItemReceivedAccountWidget_C, UberGraphFrame) == 0x0002C8, "Member 'UItemReceivedAccountWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemReceivedAccountWidget_C, CommonTextBlock_UserMessage) == 0x0002D0, "Member 'UItemReceivedAccountWidget_C::CommonTextBlock_UserMessage' has a wrong offset!");

}
