#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UPriceChangeRegionListEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Border_Material_1;
	class UCommonRichTextBlock*                   Column1Text;
	class UCommonRichTextBlock*                   Column2Text;
	class UCommonRichTextBlock*                   Column3Text;
	class USizeBox*                               SizeBox_Height_1;
	class FText                                   Text;

public:
	void SetItem(const struct FCrewTableRow& CrewTableRow);
	void ExecuteUbergraph_PriceChangeRegionListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PriceChangeRegionListEntry_C">();
	}
	static class UPriceChangeRegionListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPriceChangeRegionListEntry_C>();
	}
};
static_assert(alignof(UPriceChangeRegionListEntry_C) == 0x000008, "Wrong alignment on UPriceChangeRegionListEntry_C");
static_assert(sizeof(UPriceChangeRegionListEntry_C) == 0x0002B0, "Wrong size on UPriceChangeRegionListEntry_C");
static_assert(offsetof(UPriceChangeRegionListEntry_C, UberGraphFrame) == 0x000268, "Member 'UPriceChangeRegionListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPriceChangeRegionListEntry_C, Border_Material_1) == 0x000270, "Member 'UPriceChangeRegionListEntry_C::Border_Material_1' has a wrong offset!");
static_assert(offsetof(UPriceChangeRegionListEntry_C, Column1Text) == 0x000278, "Member 'UPriceChangeRegionListEntry_C::Column1Text' has a wrong offset!");
static_assert(offsetof(UPriceChangeRegionListEntry_C, Column2Text) == 0x000280, "Member 'UPriceChangeRegionListEntry_C::Column2Text' has a wrong offset!");
static_assert(offsetof(UPriceChangeRegionListEntry_C, Column3Text) == 0x000288, "Member 'UPriceChangeRegionListEntry_C::Column3Text' has a wrong offset!");
static_assert(offsetof(UPriceChangeRegionListEntry_C, SizeBox_Height_1) == 0x000290, "Member 'UPriceChangeRegionListEntry_C::SizeBox_Height_1' has a wrong offset!");
static_assert(offsetof(UPriceChangeRegionListEntry_C, Text) == 0x000298, "Member 'UPriceChangeRegionListEntry_C::Text' has a wrong offset!");

}
