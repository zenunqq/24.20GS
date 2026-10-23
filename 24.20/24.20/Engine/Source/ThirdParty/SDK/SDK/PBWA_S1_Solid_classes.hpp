#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_S1_Solid_C final : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	int32                                         GnomeWallChance;
	int32                                         GnomeWallMax;
	bool                                          Gnomed;
	uint8                                         Pad_1029[0x7];
	class UMaterialInstanceConstant*              GnomeMaterial;
	class UStaticMesh*                            GnomeWall;

public:
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_Solid_C">();
	}
	static class APBWA_S1_Solid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_Solid_C>();
	}
};
static_assert(alignof(APBWA_S1_Solid_C) == 0x000008, "Wrong alignment on APBWA_S1_Solid_C");
static_assert(sizeof(APBWA_S1_Solid_C) == 0x001040, "Wrong size on APBWA_S1_Solid_C");
static_assert(offsetof(APBWA_S1_Solid_C, UberGraphFrame) == 0x001018, "Member 'APBWA_S1_Solid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APBWA_S1_Solid_C, GnomeWallChance) == 0x001020, "Member 'APBWA_S1_Solid_C::GnomeWallChance' has a wrong offset!");
static_assert(offsetof(APBWA_S1_Solid_C, GnomeWallMax) == 0x001024, "Member 'APBWA_S1_Solid_C::GnomeWallMax' has a wrong offset!");
static_assert(offsetof(APBWA_S1_Solid_C, Gnomed) == 0x001028, "Member 'APBWA_S1_Solid_C::Gnomed' has a wrong offset!");
static_assert(offsetof(APBWA_S1_Solid_C, GnomeMaterial) == 0x001030, "Member 'APBWA_S1_Solid_C::GnomeMaterial' has a wrong offset!");
static_assert(offsetof(APBWA_S1_Solid_C, GnomeWall) == 0x001038, "Member 'APBWA_S1_Solid_C::GnomeWall' has a wrong offset!");

}
