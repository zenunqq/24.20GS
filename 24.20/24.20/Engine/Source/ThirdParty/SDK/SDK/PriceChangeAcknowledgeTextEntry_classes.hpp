#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UPriceChangeAcknowledgeTextEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   Description;
	class FText                                   Text;

public:
	void SetText(const class FText& InText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PriceChangeAcknowledgeTextEntry(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PriceChangeAcknowledgeTextEntry_C">();
	}
	static class UPriceChangeAcknowledgeTextEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPriceChangeAcknowledgeTextEntry_C>();
	}
};
static_assert(alignof(UPriceChangeAcknowledgeTextEntry_C) == 0x000008, "Wrong alignment on UPriceChangeAcknowledgeTextEntry_C");
static_assert(sizeof(UPriceChangeAcknowledgeTextEntry_C) == 0x000290, "Wrong size on UPriceChangeAcknowledgeTextEntry_C");
static_assert(offsetof(UPriceChangeAcknowledgeTextEntry_C, UberGraphFrame) == 0x000268, "Member 'UPriceChangeAcknowledgeTextEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeTextEntry_C, Description) == 0x000270, "Member 'UPriceChangeAcknowledgeTextEntry_C::Description' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeTextEntry_C, Text) == 0x000278, "Member 'UPriceChangeAcknowledgeTextEntry_C::Text' has a wrong offset!");

}
