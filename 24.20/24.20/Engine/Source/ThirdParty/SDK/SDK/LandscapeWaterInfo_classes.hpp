#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ALandscapeWaterInfo_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	double                                        Flood_Water_Level;
	class UTexture2D*                             Game_Texture__Water_Velocity_and_Height;
	uint8                                         Pad_2A8[0x8];
	struct FTransform                             LS_Transform;
	struct FIntPoint                              LS_RT_Res;
	struct FVector2D                              Quad_Size;
	bool                                          Use_Terrain_Velocity_and_Height_Texture;
	uint8                                         Pad_329[0x7];
	class UMaterialInstanceDynamic*               External_Water_MID_To_Update;

public:
	void ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Set_Flood_Water_Level();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LandscapeWaterInfo_C">();
	}
	static class ALandscapeWaterInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALandscapeWaterInfo_C>();
	}
};
static_assert(alignof(ALandscapeWaterInfo_C) == 0x000010, "Wrong alignment on ALandscapeWaterInfo_C");
static_assert(sizeof(ALandscapeWaterInfo_C) == 0x000340, "Wrong size on ALandscapeWaterInfo_C");
static_assert(offsetof(ALandscapeWaterInfo_C, UberGraphFrame) == 0x000288, "Member 'ALandscapeWaterInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, DefaultSceneRoot) == 0x000290, "Member 'ALandscapeWaterInfo_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, Flood_Water_Level) == 0x000298, "Member 'ALandscapeWaterInfo_C::Flood_Water_Level' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, Game_Texture__Water_Velocity_and_Height) == 0x0002A0, "Member 'ALandscapeWaterInfo_C::Game_Texture__Water_Velocity_and_Height' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, LS_Transform) == 0x0002B0, "Member 'ALandscapeWaterInfo_C::LS_Transform' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, LS_RT_Res) == 0x000310, "Member 'ALandscapeWaterInfo_C::LS_RT_Res' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, Quad_Size) == 0x000318, "Member 'ALandscapeWaterInfo_C::Quad_Size' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, Use_Terrain_Velocity_and_Height_Texture) == 0x000328, "Member 'ALandscapeWaterInfo_C::Use_Terrain_Velocity_and_Height_Texture' has a wrong offset!");
static_assert(offsetof(ALandscapeWaterInfo_C, External_Water_MID_To_Update) == 0x000330, "Member 'ALandscapeWaterInfo_C::External_Water_MID_To_Update' has a wrong offset!");

}
