#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class AVaultCharacterPlacementHelper_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   floor;
	class UStaticMeshComponent*                   CharacterPlacement;
	class USceneComponent*                        Root;
	uint8                                         Pad_2A8[0x8];
	struct FTransform                             OriginalTransform;
	struct FVector                                OffsetTranslate;
	struct FRotator                               OffsetRotate;
	bool                                          Athena;
	uint8                                         Pad_341[0x7];
	TMulticastInlineDelegate<void(double CurrentZoomLevel)> OnZoomLevelUpdated;

public:
	void UpdatePosition_For_Camera(EFrontEndCamera FrontEndCamera);
	void SubGameChanged_Event_0(ESubGame SubGame);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultCharacterPlacementHelper_C">();
	}
	static class AVaultCharacterPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultCharacterPlacementHelper_C>();
	}
};
static_assert(alignof(AVaultCharacterPlacementHelper_C) == 0x000010, "Wrong alignment on AVaultCharacterPlacementHelper_C");
static_assert(sizeof(AVaultCharacterPlacementHelper_C) == 0x000360, "Wrong size on AVaultCharacterPlacementHelper_C");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, UberGraphFrame) == 0x000288, "Member 'AVaultCharacterPlacementHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, floor) == 0x000290, "Member 'AVaultCharacterPlacementHelper_C::floor' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, CharacterPlacement) == 0x000298, "Member 'AVaultCharacterPlacementHelper_C::CharacterPlacement' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, Root) == 0x0002A0, "Member 'AVaultCharacterPlacementHelper_C::Root' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OriginalTransform) == 0x0002B0, "Member 'AVaultCharacterPlacementHelper_C::OriginalTransform' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OffsetTranslate) == 0x000310, "Member 'AVaultCharacterPlacementHelper_C::OffsetTranslate' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OffsetRotate) == 0x000328, "Member 'AVaultCharacterPlacementHelper_C::OffsetRotate' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, Athena) == 0x000340, "Member 'AVaultCharacterPlacementHelper_C::Athena' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OnZoomLevelUpdated) == 0x000348, "Member 'AVaultCharacterPlacementHelper_C::OnZoomLevelUpdated' has a wrong offset!");

}
