#pragma once

#include "Basic.hpp"

#include "DataflowCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UDataflowSettings final : public UDeveloperSettings
{
public:
	struct FLinearColor                           ArrayPinTypeColor;
	struct FLinearColor                           ManagedArrayCollectionPinTypeColor;
	struct FLinearColor                           BoxPinTypeColor;
	struct FLinearColor                           SpherePinTypeColor;
	TMap<class FName, struct FNodeColors>         NodeColorsMap;
	uint8                                         Pad_C0[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowSettings">();
	}
	static class UDataflowSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowSettings>();
	}
};
static_assert(alignof(UDataflowSettings) == 0x000008, "Wrong alignment on UDataflowSettings");
static_assert(sizeof(UDataflowSettings) == 0x0000D8, "Wrong size on UDataflowSettings");
static_assert(offsetof(UDataflowSettings, ArrayPinTypeColor) == 0x000030, "Member 'UDataflowSettings::ArrayPinTypeColor' has a wrong offset!");
static_assert(offsetof(UDataflowSettings, ManagedArrayCollectionPinTypeColor) == 0x000040, "Member 'UDataflowSettings::ManagedArrayCollectionPinTypeColor' has a wrong offset!");
static_assert(offsetof(UDataflowSettings, BoxPinTypeColor) == 0x000050, "Member 'UDataflowSettings::BoxPinTypeColor' has a wrong offset!");
static_assert(offsetof(UDataflowSettings, SpherePinTypeColor) == 0x000060, "Member 'UDataflowSettings::SpherePinTypeColor' has a wrong offset!");
static_assert(offsetof(UDataflowSettings, NodeColorsMap) == 0x000070, "Member 'UDataflowSettings::NodeColorsMap' has a wrong offset!");

}
