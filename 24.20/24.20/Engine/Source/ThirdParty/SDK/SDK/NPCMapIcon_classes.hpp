#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CollectionMapShared_classes.hpp"

namespace SDK
{

class UNPCMapIcon_C final : public UAthenaMapCollectionIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_ServiceIcon;
	class UWidgetSwitcher*                        RootSwitcher;
	struct FLinearColor                           ColorUnselected;
	struct FLinearColor                           ColorSelected;
	TSoftObjectPtr<class UObject>                 Secondary_Icon;

public:
	void Construct();
	void ExecuteUbergraph_NPCMapIcon(int32 EntryPoint);
	void OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090(class UObject* Loaded);
	void OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8(class UObject* Loaded);
	void OnSelected(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void PreConstruct(bool IsDesignTime);
	void SetIcon(const TSoftObjectPtr<class UObject>& Icon);
	void SetIsKnown(const bool bIsKnown);
	void SetSecondaryIcon(const TSoftObjectPtr<class UObject>& SecondaryIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCMapIcon_C">();
	}
	static class UNPCMapIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPCMapIcon_C>();
	}
};
static_assert(alignof(UNPCMapIcon_C) == 0x000008, "Wrong alignment on UNPCMapIcon_C");
static_assert(sizeof(UNPCMapIcon_C) == 0x000390, "Wrong size on UNPCMapIcon_C");
static_assert(offsetof(UNPCMapIcon_C, UberGraphFrame) == 0x000330, "Member 'UNPCMapIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPCMapIcon_C, Image_ServiceIcon) == 0x000338, "Member 'UNPCMapIcon_C::Image_ServiceIcon' has a wrong offset!");
static_assert(offsetof(UNPCMapIcon_C, RootSwitcher) == 0x000340, "Member 'UNPCMapIcon_C::RootSwitcher' has a wrong offset!");
static_assert(offsetof(UNPCMapIcon_C, ColorUnselected) == 0x000348, "Member 'UNPCMapIcon_C::ColorUnselected' has a wrong offset!");
static_assert(offsetof(UNPCMapIcon_C, ColorSelected) == 0x000358, "Member 'UNPCMapIcon_C::ColorSelected' has a wrong offset!");
static_assert(offsetof(UNPCMapIcon_C, Secondary_Icon) == 0x000368, "Member 'UNPCMapIcon_C::Secondary_Icon' has a wrong offset!");

}
