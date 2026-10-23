#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPurchaseUnavailable_C final : public UFortPurchaseUnavailableModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonRichTextBlock*                   RichText_Details;
	class UCommonRichTextBlock*                   RichText_HeaderText;

public:
	void OnUpdateTextStyle(const class FText& OfferDisplayName);
	void ExecuteUbergraph_PurchaseUnavailable(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PurchaseUnavailable_C">();
	}
	static class UPurchaseUnavailable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseUnavailable_C>();
	}
};
static_assert(alignof(UPurchaseUnavailable_C) == 0x000008, "Wrong alignment on UPurchaseUnavailable_C");
static_assert(sizeof(UPurchaseUnavailable_C) == 0x000548, "Wrong size on UPurchaseUnavailable_C");
static_assert(offsetof(UPurchaseUnavailable_C, UberGraphFrame) == 0x000528, "Member 'UPurchaseUnavailable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPurchaseUnavailable_C, Intro) == 0x000530, "Member 'UPurchaseUnavailable_C::Intro' has a wrong offset!");
static_assert(offsetof(UPurchaseUnavailable_C, RichText_Details) == 0x000538, "Member 'UPurchaseUnavailable_C::RichText_Details' has a wrong offset!");
static_assert(offsetof(UPurchaseUnavailable_C, RichText_HeaderText) == 0x000540, "Member 'UPurchaseUnavailable_C::RichText_HeaderText' has a wrong offset!");

}
