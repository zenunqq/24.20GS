#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ABP_DetailLevelMesh_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   StaticMesh;
	class USceneComponent*                        DefaultSceneRoot;
	bool                                          AlwaysVisible;
	bool                                          NotVisibleOnSwitch;

public:
	void ExecuteUbergraph_BP_DetailLevelMesh(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DetailLevelMesh_C">();
	}
	static class ABP_DetailLevelMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DetailLevelMesh_C>();
	}
};
static_assert(alignof(ABP_DetailLevelMesh_C) == 0x000008, "Wrong alignment on ABP_DetailLevelMesh_C");
static_assert(sizeof(ABP_DetailLevelMesh_C) == 0x0002A8, "Wrong size on ABP_DetailLevelMesh_C");
static_assert(offsetof(ABP_DetailLevelMesh_C, UberGraphFrame) == 0x000288, "Member 'ABP_DetailLevelMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, StaticMesh) == 0x000290, "Member 'ABP_DetailLevelMesh_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_DetailLevelMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, AlwaysVisible) == 0x0002A0, "Member 'ABP_DetailLevelMesh_C::AlwaysVisible' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, NotVisibleOnSwitch) == 0x0002A1, "Member 'ABP_DetailLevelMesh_C::NotVisibleOnSwitch' has a wrong offset!");

}
