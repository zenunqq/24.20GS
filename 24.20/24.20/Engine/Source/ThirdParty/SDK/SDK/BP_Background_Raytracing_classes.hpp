#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ABP_Background_Raytracing_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_InvertedSphere_BackPlate_Half;
	class USceneComponent*                        DefaultSceneRoot;
	bool                                          FullSphere;
	bool                                          UseCubemap;
	uint8                                         Pad_29A[0x6];
	double                                        Brightness;
	class UTexture*                               TwodTexture;
	class UTexture*                               Cubemap;
	struct FLinearColor                           FadeColor;

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Background_Raytracing_C">();
	}
	static class ABP_Background_Raytracing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Background_Raytracing_C>();
	}
};
static_assert(alignof(ABP_Background_Raytracing_C) == 0x000008, "Wrong alignment on ABP_Background_Raytracing_C");
static_assert(sizeof(ABP_Background_Raytracing_C) == 0x0002C8, "Wrong size on ABP_Background_Raytracing_C");
static_assert(offsetof(ABP_Background_Raytracing_C, SM_InvertedSphere_BackPlate_Half) == 0x000288, "Member 'ABP_Background_Raytracing_C::SM_InvertedSphere_BackPlate_Half' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_Background_Raytracing_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, FullSphere) == 0x000298, "Member 'ABP_Background_Raytracing_C::FullSphere' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, UseCubemap) == 0x000299, "Member 'ABP_Background_Raytracing_C::UseCubemap' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, Brightness) == 0x0002A0, "Member 'ABP_Background_Raytracing_C::Brightness' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, TwodTexture) == 0x0002A8, "Member 'ABP_Background_Raytracing_C::TwodTexture' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, Cubemap) == 0x0002B0, "Member 'ABP_Background_Raytracing_C::Cubemap' has a wrong offset!");
static_assert(offsetof(ABP_Background_Raytracing_C, FadeColor) == 0x0002B8, "Member 'ABP_Background_Raytracing_C::FadeColor' has a wrong offset!");

}
