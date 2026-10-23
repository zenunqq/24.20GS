#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class USpeechBubbleWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       BubbleText;

public:
	void ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint);
	void InitFromObject(class UObject* InitObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpeechBubbleWidget_C">();
	}
	static class USpeechBubbleWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpeechBubbleWidget_C>();
	}
};
static_assert(alignof(USpeechBubbleWidget_C) == 0x000008, "Wrong alignment on USpeechBubbleWidget_C");
static_assert(sizeof(USpeechBubbleWidget_C) == 0x0002A0, "Wrong size on USpeechBubbleWidget_C");
static_assert(offsetof(USpeechBubbleWidget_C, UberGraphFrame) == 0x000290, "Member 'USpeechBubbleWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpeechBubbleWidget_C, BubbleText) == 0x000298, "Member 'USpeechBubbleWidget_C::BubbleText' has a wrong offset!");

}
