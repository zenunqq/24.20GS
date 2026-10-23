#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class ABP_Frontend_ShopBG_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   StandardBackgroundPlane1;
	class UStaticMeshComponent*                   StandardBackgroundPlane;
	class UStaticMeshComponent*                   Cone;
	class UStaticMeshComponent*                   Plane;
	class USceneComponent*                        Scene;
	class UStaticMeshComponent*                   BackgroundTexturePlane;
	class UStaticMeshComponent*                   VeryLargeBackgroundPlane;
	class USceneComponent*                        Scene_Signal;
	class USceneComponent*                        DefaultSceneRoot;
	struct FRotator                               Rot_Intro;
	struct FRotator                               NextRot;
	struct FRotator                               Rot_0;
	struct FRotator                               Rot_2;
	double                                        PlayRate;
	struct FRotator                               Rot_IntroStart;
	bool                                          bHasEvent;
	uint8                                         Pad_359[0x7];
	double                                        YInitial;
	double                                        YEnd;
	class UMaterialInstanceDynamic*               Mid;
	class ACMSLobbyDirector_C*                    CMSDirector;
	class FString                                 BPEnvName;
	bool                                          ShopEntered;
	uint8                                         Pad_391[0x7];
	struct FTimerHandle                           DonutSeqTimerHandle;
	class AActor*                                 DomeObstruction;

public:
	void SetDynamicEnvironmentEvent(const class FString& InPresetEnvName);
	void SetDynamicBG(class UTexture* InTexture);
	void HandleItemShopEntered();
	void ResetDonut();
	void ExecuteUbergraph_BP_Frontend_ShopBG(int32 EntryPoint);
	void ReceiveBeginPlay();
	void EnableDynamicShopBG();
	void HandleStoreEntered();
	void DebugShopBG();
	void HandleRequestHide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Frontend_ShopBG_C">();
	}
	static class ABP_Frontend_ShopBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Frontend_ShopBG_C>();
	}
};
static_assert(alignof(ABP_Frontend_ShopBG_C) == 0x000008, "Wrong alignment on ABP_Frontend_ShopBG_C");
static_assert(sizeof(ABP_Frontend_ShopBG_C) == 0x0003A8, "Wrong size on ABP_Frontend_ShopBG_C");
static_assert(offsetof(ABP_Frontend_ShopBG_C, UberGraphFrame) == 0x000288, "Member 'ABP_Frontend_ShopBG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, StandardBackgroundPlane1) == 0x000290, "Member 'ABP_Frontend_ShopBG_C::StandardBackgroundPlane1' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, StandardBackgroundPlane) == 0x000298, "Member 'ABP_Frontend_ShopBG_C::StandardBackgroundPlane' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Cone) == 0x0002A0, "Member 'ABP_Frontend_ShopBG_C::Cone' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Plane) == 0x0002A8, "Member 'ABP_Frontend_ShopBG_C::Plane' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Scene) == 0x0002B0, "Member 'ABP_Frontend_ShopBG_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, BackgroundTexturePlane) == 0x0002B8, "Member 'ABP_Frontend_ShopBG_C::BackgroundTexturePlane' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, VeryLargeBackgroundPlane) == 0x0002C0, "Member 'ABP_Frontend_ShopBG_C::VeryLargeBackgroundPlane' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Scene_Signal) == 0x0002C8, "Member 'ABP_Frontend_ShopBG_C::Scene_Signal' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_Frontend_ShopBG_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Rot_Intro) == 0x0002D8, "Member 'ABP_Frontend_ShopBG_C::Rot_Intro' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, NextRot) == 0x0002F0, "Member 'ABP_Frontend_ShopBG_C::NextRot' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Rot_0) == 0x000308, "Member 'ABP_Frontend_ShopBG_C::Rot_0' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Rot_2) == 0x000320, "Member 'ABP_Frontend_ShopBG_C::Rot_2' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, PlayRate) == 0x000338, "Member 'ABP_Frontend_ShopBG_C::PlayRate' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Rot_IntroStart) == 0x000340, "Member 'ABP_Frontend_ShopBG_C::Rot_IntroStart' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, bHasEvent) == 0x000358, "Member 'ABP_Frontend_ShopBG_C::bHasEvent' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, YInitial) == 0x000360, "Member 'ABP_Frontend_ShopBG_C::YInitial' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, YEnd) == 0x000368, "Member 'ABP_Frontend_ShopBG_C::YEnd' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, Mid) == 0x000370, "Member 'ABP_Frontend_ShopBG_C::Mid' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, CMSDirector) == 0x000378, "Member 'ABP_Frontend_ShopBG_C::CMSDirector' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, BPEnvName) == 0x000380, "Member 'ABP_Frontend_ShopBG_C::BPEnvName' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, ShopEntered) == 0x000390, "Member 'ABP_Frontend_ShopBG_C::ShopEntered' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, DonutSeqTimerHandle) == 0x000398, "Member 'ABP_Frontend_ShopBG_C::DonutSeqTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_ShopBG_C, DomeObstruction) == 0x0003A0, "Member 'ABP_Frontend_ShopBG_C::DomeObstruction' has a wrong offset!");

}
