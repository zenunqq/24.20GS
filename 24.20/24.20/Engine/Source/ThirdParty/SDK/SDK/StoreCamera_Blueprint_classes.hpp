#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AStoreCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   Mesh_DarkenBG;
	class UCameraComponent*                       CameraPlaceholderGround;
	float                                         ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0;
	ETimelineDirection                            ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0;
	uint8                                         Pad_A0D[0x3];
	class UTimelineComponent*                     ChoicePack;
	float                                         Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9;
	ETimelineDirection                            Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9;
	uint8                                         Pad_A1D[0x3];
	class UTimelineComponent*                     Timeline_0;
	struct FVector                                CameraGroundLoc;
	struct FRotator                               CameraGroundRot;
	struct FVector                                CameraOriginalLoc;
	struct FRotator                               CameraOriginalRot;
	bool                                          CameraInStartPos;
	uint8                                         Pad_A89[0x7];
	class AStorePinataMaster_Parent_C*            PinataInLevel;
	class AStoreCardReveal_Parent_C*              CardRevealInLevel;

public:
	void UserConstructionScript();
	void ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint);
	void DarkenBGVisibility(bool Enable);
	void ChoicePackFOV_Out();
	void ChoicePackFOV_In();
	void ChoicePack__UpdateFunc();
	void ChoicePack__FinishedFunc();
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void ResetCamera();
	void OpeningCameraTransition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreCamera_Blueprint_C">();
	}
	static class AStoreCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStoreCamera_Blueprint_C>();
	}
};
static_assert(alignof(AStoreCamera_Blueprint_C) == 0x000010, "Wrong alignment on AStoreCamera_Blueprint_C");
static_assert(sizeof(AStoreCamera_Blueprint_C) == 0x000AA0, "Wrong size on AStoreCamera_Blueprint_C");
static_assert(offsetof(AStoreCamera_Blueprint_C, UberGraphFrame) == 0x0009F0, "Member 'AStoreCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Mesh_DarkenBG) == 0x0009F8, "Member 'AStoreCamera_Blueprint_C::Mesh_DarkenBG' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraPlaceholderGround) == 0x000A00, "Member 'AStoreCamera_Blueprint_C::CameraPlaceholderGround' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0) == 0x000A08, "Member 'AStoreCamera_Blueprint_C::ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0) == 0x000A0C, "Member 'AStoreCamera_Blueprint_C::ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, ChoicePack) == 0x000A10, "Member 'AStoreCamera_Blueprint_C::ChoicePack' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9) == 0x000A18, "Member 'AStoreCamera_Blueprint_C::Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9) == 0x000A1C, "Member 'AStoreCamera_Blueprint_C::Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Timeline_0) == 0x000A20, "Member 'AStoreCamera_Blueprint_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraGroundLoc) == 0x000A28, "Member 'AStoreCamera_Blueprint_C::CameraGroundLoc' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraGroundRot) == 0x000A40, "Member 'AStoreCamera_Blueprint_C::CameraGroundRot' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraOriginalLoc) == 0x000A58, "Member 'AStoreCamera_Blueprint_C::CameraOriginalLoc' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraOriginalRot) == 0x000A70, "Member 'AStoreCamera_Blueprint_C::CameraOriginalRot' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraInStartPos) == 0x000A88, "Member 'AStoreCamera_Blueprint_C::CameraInStartPos' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, PinataInLevel) == 0x000A90, "Member 'AStoreCamera_Blueprint_C::PinataInLevel' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CardRevealInLevel) == 0x000A98, "Member 'AStoreCamera_Blueprint_C::CardRevealInLevel' has a wrong offset!");

}
