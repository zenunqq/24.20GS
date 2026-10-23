#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaVariantTileButton_C final : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       WarningPulse;
	class UImage*                                 Image_Conflict;

public:
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint);
	void Construct();
	void BP_OnClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaVariantTileButton_C">();
	}
	static class UAthenaVariantTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaVariantTileButton_C>();
	}
};
static_assert(alignof(UAthenaVariantTileButton_C) == 0x000010, "Wrong alignment on UAthenaVariantTileButton_C");
static_assert(sizeof(UAthenaVariantTileButton_C) == 0x001500, "Wrong size on UAthenaVariantTileButton_C");
static_assert(offsetof(UAthenaVariantTileButton_C, UberGraphFrame) == 0x0014E0, "Member 'UAthenaVariantTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaVariantTileButton_C, WarningPulse) == 0x0014E8, "Member 'UAthenaVariantTileButton_C::WarningPulse' has a wrong offset!");
static_assert(offsetof(UAthenaVariantTileButton_C, Image_Conflict) == 0x0014F0, "Member 'UAthenaVariantTileButton_C::Image_Conflict' has a wrong offset!");

}
