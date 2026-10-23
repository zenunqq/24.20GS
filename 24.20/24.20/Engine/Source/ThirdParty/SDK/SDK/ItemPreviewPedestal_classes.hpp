#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class AItemPreviewPedestal_C final : public AFortCameraTargetPedestal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          Floor_Enabled;

public:
	void ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint);
	void Remove_Floor(class AFortItemPreviewActor* Preview);
	void OnItemDisplayed(EFortItemType ItemType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemPreviewPedestal_C">();
	}
	static class AItemPreviewPedestal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemPreviewPedestal_C>();
	}
};
static_assert(alignof(AItemPreviewPedestal_C) == 0x000008, "Wrong alignment on AItemPreviewPedestal_C");
static_assert(sizeof(AItemPreviewPedestal_C) == 0x000500, "Wrong size on AItemPreviewPedestal_C");
static_assert(offsetof(AItemPreviewPedestal_C, UberGraphFrame) == 0x0004F0, "Member 'AItemPreviewPedestal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItemPreviewPedestal_C, Floor_Enabled) == 0x0004F8, "Member 'AItemPreviewPedestal_C::Floor_Enabled' has a wrong offset!");

}
