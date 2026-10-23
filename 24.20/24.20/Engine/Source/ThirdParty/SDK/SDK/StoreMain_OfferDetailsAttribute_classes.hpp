#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UStoreMain_OfferDetailsAttribute_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_0;
	class UCommonRichTextBlock*                   Name_0;
	class UCommonTextBlock*                       Value;
	class FText                                   AttributeDescription;
	class FText                                   AttributeValue;

public:
	void ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_OfferDetailsAttribute_C">();
	}
	static class UStoreMain_OfferDetailsAttribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_OfferDetailsAttribute_C>();
	}
};
static_assert(alignof(UStoreMain_OfferDetailsAttribute_C) == 0x000008, "Wrong alignment on UStoreMain_OfferDetailsAttribute_C");
static_assert(sizeof(UStoreMain_OfferDetailsAttribute_C) == 0x0002E0, "Wrong size on UStoreMain_OfferDetailsAttribute_C");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, UberGraphFrame) == 0x000290, "Member 'UStoreMain_OfferDetailsAttribute_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, Image_0) == 0x000298, "Member 'UStoreMain_OfferDetailsAttribute_C::Image_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, Name_0) == 0x0002A0, "Member 'UStoreMain_OfferDetailsAttribute_C::Name_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, Value) == 0x0002A8, "Member 'UStoreMain_OfferDetailsAttribute_C::Value' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, AttributeDescription) == 0x0002B0, "Member 'UStoreMain_OfferDetailsAttribute_C::AttributeDescription' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetailsAttribute_C, AttributeValue) == 0x0002C8, "Member 'UStoreMain_OfferDetailsAttribute_C::AttributeValue' has a wrong offset!");

}
