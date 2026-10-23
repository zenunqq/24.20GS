#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class USidebarSocialAddingTagWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       AddingTag;
	class UBorder*                                Border_AddingTagBorder;
	class UImage*                                 Image_AddingTagArrow;
	class UOverlay*                               Overlay_AddingTag;
	class UCommonTextBlock*                       Text_AddingTagName;
	class FString                                 TagCategory_AddTag;
	class FName                                   Name_InnerColor;
	class FName                                   OuterColor;

public:
	void Construct();
	void EventSetTag();
	void ExecuteUbergraph_SidebarSocialAddingTagWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialAddingTagWidget_C">();
	}
	static class USidebarSocialAddingTagWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialAddingTagWidget_C>();
	}
};
static_assert(alignof(USidebarSocialAddingTagWidget_C) == 0x000008, "Wrong alignment on USidebarSocialAddingTagWidget_C");
static_assert(sizeof(USidebarSocialAddingTagWidget_C) == 0x0002D8, "Wrong size on USidebarSocialAddingTagWidget_C");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, UberGraphFrame) == 0x000290, "Member 'USidebarSocialAddingTagWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, AddingTag) == 0x000298, "Member 'USidebarSocialAddingTagWidget_C::AddingTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Border_AddingTagBorder) == 0x0002A0, "Member 'USidebarSocialAddingTagWidget_C::Border_AddingTagBorder' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Image_AddingTagArrow) == 0x0002A8, "Member 'USidebarSocialAddingTagWidget_C::Image_AddingTagArrow' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Overlay_AddingTag) == 0x0002B0, "Member 'USidebarSocialAddingTagWidget_C::Overlay_AddingTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Text_AddingTagName) == 0x0002B8, "Member 'USidebarSocialAddingTagWidget_C::Text_AddingTagName' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, TagCategory_AddTag) == 0x0002C0, "Member 'USidebarSocialAddingTagWidget_C::TagCategory_AddTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, Name_InnerColor) == 0x0002D0, "Member 'USidebarSocialAddingTagWidget_C::Name_InnerColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddingTagWidget_C, OuterColor) == 0x0002D4, "Member 'USidebarSocialAddingTagWidget_C::OuterColor' has a wrong offset!");

}
