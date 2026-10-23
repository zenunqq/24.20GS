#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class ULiveViolator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       Text_Callout;
	class FText                                   LiveText;

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LiveViolator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LiveViolator_C">();
	}
	static class ULiveViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveViolator_C>();
	}
};
static_assert(alignof(ULiveViolator_C) == 0x000008, "Wrong alignment on ULiveViolator_C");
static_assert(sizeof(ULiveViolator_C) == 0x000290, "Wrong size on ULiveViolator_C");
static_assert(offsetof(ULiveViolator_C, UberGraphFrame) == 0x000268, "Member 'ULiveViolator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULiveViolator_C, Text_Callout) == 0x000270, "Member 'ULiveViolator_C::Text_Callout' has a wrong offset!");
static_assert(offsetof(ULiveViolator_C, LiveText) == 0x000278, "Member 'ULiveViolator_C::LiveText' has a wrong offset!");

}
