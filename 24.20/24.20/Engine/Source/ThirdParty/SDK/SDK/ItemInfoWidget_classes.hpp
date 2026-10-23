#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UItemInfoWidget_C final : public UFortItemInfoWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 RarityGlow;

public:
	void SetRarityMaterialValues(class UFortItemDefinition* ItemDefinition);
	void ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInfoWidget_C">();
	}
	static class UItemInfoWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInfoWidget_C>();
	}
};
static_assert(alignof(UItemInfoWidget_C) == 0x000008, "Wrong alignment on UItemInfoWidget_C");
static_assert(sizeof(UItemInfoWidget_C) == 0x0002C0, "Wrong size on UItemInfoWidget_C");
static_assert(offsetof(UItemInfoWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UItemInfoWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInfoWidget_C, RarityGlow) == 0x0002B8, "Member 'UItemInfoWidget_C::RarityGlow' has a wrong offset!");

}
