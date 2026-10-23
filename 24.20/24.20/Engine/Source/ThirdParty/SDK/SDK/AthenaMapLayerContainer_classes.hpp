#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaMapLayerContainer_C final : public UAthenaMapLayerContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Border_Hidden;
	class UScaleBox*                              ScaleBox_Map;
	class USizeBox*                               SizeBox_MapMarkers;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_AthenaMapLayerContainer(int32 EntryPoint);
	void OnFullScreenMapToggle(bool bFullscreenMapVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMapLayerContainer_C">();
	}
	static class UAthenaMapLayerContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMapLayerContainer_C>();
	}
};
static_assert(alignof(UAthenaMapLayerContainer_C) == 0x000008, "Wrong alignment on UAthenaMapLayerContainer_C");
static_assert(sizeof(UAthenaMapLayerContainer_C) == 0x000530, "Wrong size on UAthenaMapLayerContainer_C");
static_assert(offsetof(UAthenaMapLayerContainer_C, UberGraphFrame) == 0x000510, "Member 'UAthenaMapLayerContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMapLayerContainer_C, Border_Hidden) == 0x000518, "Member 'UAthenaMapLayerContainer_C::Border_Hidden' has a wrong offset!");
static_assert(offsetof(UAthenaMapLayerContainer_C, ScaleBox_Map) == 0x000520, "Member 'UAthenaMapLayerContainer_C::ScaleBox_Map' has a wrong offset!");
static_assert(offsetof(UAthenaMapLayerContainer_C, SizeBox_MapMarkers) == 0x000528, "Member 'UAthenaMapLayerContainer_C::SizeBox_MapMarkers' has a wrong offset!");

}
