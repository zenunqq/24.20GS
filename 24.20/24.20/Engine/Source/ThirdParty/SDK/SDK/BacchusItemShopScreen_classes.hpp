#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBacchusItemShopScreen_C final : public UAthenaItemShopScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonBorder*                          NoOffersBox;
	class UImage*                                 ProgressSpinner;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_1;
	class USafeZone*                              SafeZone_2;
	class USafeZone*                              SafeZone_3;
	class UWidgetSwitcher*                        Switcher_Sections;
	class UVerticalBox*                           VerticalBox_Sections;

public:
	void Construct();
	void ExecuteUbergraph_BacchusItemShopScreen(int32 EntryPoint);
	void OnEstablishingSections();
	void OnSectionsEstablished(bool bEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusItemShopScreen_C">();
	}
	static class UBacchusItemShopScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusItemShopScreen_C>();
	}
};
static_assert(alignof(UBacchusItemShopScreen_C) == 0x000008, "Wrong alignment on UBacchusItemShopScreen_C");
static_assert(sizeof(UBacchusItemShopScreen_C) == 0x0006F8, "Wrong size on UBacchusItemShopScreen_C");
static_assert(offsetof(UBacchusItemShopScreen_C, UberGraphFrame) == 0x0006B0, "Member 'UBacchusItemShopScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, NoOffersBox) == 0x0006B8, "Member 'UBacchusItemShopScreen_C::NoOffersBox' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, ProgressSpinner) == 0x0006C0, "Member 'UBacchusItemShopScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, SafeZone_0) == 0x0006C8, "Member 'UBacchusItemShopScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, SafeZone_1) == 0x0006D0, "Member 'UBacchusItemShopScreen_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, SafeZone_2) == 0x0006D8, "Member 'UBacchusItemShopScreen_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, SafeZone_3) == 0x0006E0, "Member 'UBacchusItemShopScreen_C::SafeZone_3' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, Switcher_Sections) == 0x0006E8, "Member 'UBacchusItemShopScreen_C::Switcher_Sections' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopScreen_C, VerticalBox_Sections) == 0x0006F0, "Member 'UBacchusItemShopScreen_C::VerticalBox_Sections' has a wrong offset!");

}
