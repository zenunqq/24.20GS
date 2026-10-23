#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PetAnimLayerInterface_C_PetFullOverrideLayer final
{
public:
	struct FPoseLink                              InPose;
	struct FPoseLink                              PetFullOverrideLayer_0;
};
static_assert(alignof(PetAnimLayerInterface_C_PetFullOverrideLayer) == 0x000008, "Wrong alignment on PetAnimLayerInterface_C_PetFullOverrideLayer");
static_assert(sizeof(PetAnimLayerInterface_C_PetFullOverrideLayer) == 0x000020, "Wrong size on PetAnimLayerInterface_C_PetFullOverrideLayer");
static_assert(offsetof(PetAnimLayerInterface_C_PetFullOverrideLayer, InPose) == 0x000000, "Member 'PetAnimLayerInterface_C_PetFullOverrideLayer::InPose' has a wrong offset!");
static_assert(offsetof(PetAnimLayerInterface_C_PetFullOverrideLayer, PetFullOverrideLayer_0) == 0x000010, "Member 'PetAnimLayerInterface_C_PetFullOverrideLayer::PetFullOverrideLayer_0' has a wrong offset!");

struct PetAnimLayerInterface_C_PetSkeletalControlLayer final
{
public:
	struct FPoseLink                              Pose;
	double                                        LookAtOverrideInput;
	struct FVector                                LookAtTargetLocationInput;
	double                                        LegIKAlphaOverride;
	double                                        HandIKAlphaOverride;
	struct FPoseLink                              PetSkeletalControlLayer_0;
};
static_assert(alignof(PetAnimLayerInterface_C_PetSkeletalControlLayer) == 0x000008, "Wrong alignment on PetAnimLayerInterface_C_PetSkeletalControlLayer");
static_assert(sizeof(PetAnimLayerInterface_C_PetSkeletalControlLayer) == 0x000050, "Wrong size on PetAnimLayerInterface_C_PetSkeletalControlLayer");
static_assert(offsetof(PetAnimLayerInterface_C_PetSkeletalControlLayer, Pose) == 0x000000, "Member 'PetAnimLayerInterface_C_PetSkeletalControlLayer::Pose' has a wrong offset!");
static_assert(offsetof(PetAnimLayerInterface_C_PetSkeletalControlLayer, LookAtOverrideInput) == 0x000010, "Member 'PetAnimLayerInterface_C_PetSkeletalControlLayer::LookAtOverrideInput' has a wrong offset!");
static_assert(offsetof(PetAnimLayerInterface_C_PetSkeletalControlLayer, LookAtTargetLocationInput) == 0x000018, "Member 'PetAnimLayerInterface_C_PetSkeletalControlLayer::LookAtTargetLocationInput' has a wrong offset!");
static_assert(offsetof(PetAnimLayerInterface_C_PetSkeletalControlLayer, LegIKAlphaOverride) == 0x000030, "Member 'PetAnimLayerInterface_C_PetSkeletalControlLayer::LegIKAlphaOverride' has a wrong offset!");
static_assert(offsetof(PetAnimLayerInterface_C_PetSkeletalControlLayer, HandIKAlphaOverride) == 0x000038, "Member 'PetAnimLayerInterface_C_PetSkeletalControlLayer::HandIKAlphaOverride' has a wrong offset!");
static_assert(offsetof(PetAnimLayerInterface_C_PetSkeletalControlLayer, PetSkeletalControlLayer_0) == 0x000040, "Member 'PetAnimLayerInterface_C_PetSkeletalControlLayer::PetSkeletalControlLayer_0' has a wrong offset!");

}
