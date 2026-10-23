#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharacterCollectionMapScreen_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UCollectionNPCServiceWidget_C final : public UCollectionNPCServiceWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetSwitcher*                        ContentSwitcher;
	class UHorizontalBox*                         CostPanel;
	class UFortLazyImage*                         LazyImage_Cost;
	class UFortLazyImage*                         LazyImage_Icon;
	class UImage*                                 LazyImage_IconBg;
	class UCommonTextBlock*                       Text_Cost;
	class UCommonTextBlock*                       Text_ServiceName;

public:
	void Construct();
	void ExecuteUbergraph_CollectionNPCServiceWidget(int32 EntryPoint);
	void PopulateData(const struct FNPCServiceWidgetData& WidgetData);
	void PopulateEmpty();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionNPCServiceWidget_C">();
	}
	static class UCollectionNPCServiceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceWidget_C>();
	}
};
static_assert(alignof(UCollectionNPCServiceWidget_C) == 0x000008, "Wrong alignment on UCollectionNPCServiceWidget_C");
static_assert(sizeof(UCollectionNPCServiceWidget_C) == 0x0002A8, "Wrong size on UCollectionNPCServiceWidget_C");
static_assert(offsetof(UCollectionNPCServiceWidget_C, UberGraphFrame) == 0x000268, "Member 'UCollectionNPCServiceWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, ContentSwitcher) == 0x000270, "Member 'UCollectionNPCServiceWidget_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, CostPanel) == 0x000278, "Member 'UCollectionNPCServiceWidget_C::CostPanel' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, LazyImage_Cost) == 0x000280, "Member 'UCollectionNPCServiceWidget_C::LazyImage_Cost' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, LazyImage_Icon) == 0x000288, "Member 'UCollectionNPCServiceWidget_C::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, LazyImage_IconBg) == 0x000290, "Member 'UCollectionNPCServiceWidget_C::LazyImage_IconBg' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, Text_Cost) == 0x000298, "Member 'UCollectionNPCServiceWidget_C::Text_Cost' has a wrong offset!");
static_assert(offsetof(UCollectionNPCServiceWidget_C, Text_ServiceName) == 0x0002A0, "Member 'UCollectionNPCServiceWidget_C::Text_ServiceName' has a wrong offset!");

}
