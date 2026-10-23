#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UUI_Background_Strings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   CustomString;
	class FText                                   CustomText;

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Background_Strings(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Background_Strings_C">();
	}
	static class UUI_Background_Strings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Background_Strings_C>();
	}
};
static_assert(alignof(UUI_Background_Strings_C) == 0x000008, "Wrong alignment on UUI_Background_Strings_C");
static_assert(sizeof(UUI_Background_Strings_C) == 0x000290, "Wrong size on UUI_Background_Strings_C");
static_assert(offsetof(UUI_Background_Strings_C, UberGraphFrame) == 0x000268, "Member 'UUI_Background_Strings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Background_Strings_C, CustomString) == 0x000270, "Member 'UUI_Background_Strings_C::CustomString' has a wrong offset!");
static_assert(offsetof(UUI_Background_Strings_C, CustomText) == 0x000278, "Member 'UUI_Background_Strings_C::CustomText' has a wrong offset!");

}
