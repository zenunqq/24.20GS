#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UProgressiveHeaderBanner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Banner_Border;
	class UCommonRichTextBlock*                   Banner_Text;
	class UImage*                                 Image;
	class FText                                   Debug_Text_Preview;
	struct FLinearColor                           Subscribed;
	struct FLinearColor                           Unsubscribed;

public:
	void Update_Text(const class FText& InText);
	void Update_Banner_State(const class FText& Text, bool Current_Sets_Complete, bool Subscribed_0);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ProgressiveHeaderBanner(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveHeaderBanner_C">();
	}
	static class UProgressiveHeaderBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveHeaderBanner_C>();
	}
};
static_assert(alignof(UProgressiveHeaderBanner_C) == 0x000008, "Wrong alignment on UProgressiveHeaderBanner_C");
static_assert(sizeof(UProgressiveHeaderBanner_C) == 0x0002C0, "Wrong size on UProgressiveHeaderBanner_C");
static_assert(offsetof(UProgressiveHeaderBanner_C, UberGraphFrame) == 0x000268, "Member 'UProgressiveHeaderBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveHeaderBanner_C, Banner_Border) == 0x000270, "Member 'UProgressiveHeaderBanner_C::Banner_Border' has a wrong offset!");
static_assert(offsetof(UProgressiveHeaderBanner_C, Banner_Text) == 0x000278, "Member 'UProgressiveHeaderBanner_C::Banner_Text' has a wrong offset!");
static_assert(offsetof(UProgressiveHeaderBanner_C, Image) == 0x000280, "Member 'UProgressiveHeaderBanner_C::Image' has a wrong offset!");
static_assert(offsetof(UProgressiveHeaderBanner_C, Debug_Text_Preview) == 0x000288, "Member 'UProgressiveHeaderBanner_C::Debug_Text_Preview' has a wrong offset!");
static_assert(offsetof(UProgressiveHeaderBanner_C, Subscribed) == 0x0002A0, "Member 'UProgressiveHeaderBanner_C::Subscribed' has a wrong offset!");
static_assert(offsetof(UProgressiveHeaderBanner_C, Unsubscribed) == 0x0002B0, "Member 'UProgressiveHeaderBanner_C::Unsubscribed' has a wrong offset!");

}
