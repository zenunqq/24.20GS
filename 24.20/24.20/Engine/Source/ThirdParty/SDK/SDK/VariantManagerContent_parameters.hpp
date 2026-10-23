#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "VariantManagerContent_structs.hpp"

namespace SDK::Params
{

struct LevelVariantSets_GetNumVariantSets final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(LevelVariantSets_GetNumVariantSets) == 0x000004, "Wrong alignment on LevelVariantSets_GetNumVariantSets");
static_assert(sizeof(LevelVariantSets_GetNumVariantSets) == 0x000004, "Wrong size on LevelVariantSets_GetNumVariantSets");
static_assert(offsetof(LevelVariantSets_GetNumVariantSets, ReturnValue) == 0x000000, "Member 'LevelVariantSets_GetNumVariantSets::ReturnValue' has a wrong offset!");

struct LevelVariantSets_GetVariantSet final
{
public:
	int32                                         VariantSetIndex;
	uint8                                         Pad_4[0x4];
	class UVariantSet*                            ReturnValue;
};
static_assert(alignof(LevelVariantSets_GetVariantSet) == 0x000008, "Wrong alignment on LevelVariantSets_GetVariantSet");
static_assert(sizeof(LevelVariantSets_GetVariantSet) == 0x000010, "Wrong size on LevelVariantSets_GetVariantSet");
static_assert(offsetof(LevelVariantSets_GetVariantSet, VariantSetIndex) == 0x000000, "Member 'LevelVariantSets_GetVariantSet::VariantSetIndex' has a wrong offset!");
static_assert(offsetof(LevelVariantSets_GetVariantSet, ReturnValue) == 0x000008, "Member 'LevelVariantSets_GetVariantSet::ReturnValue' has a wrong offset!");

struct LevelVariantSets_GetVariantSetByName final
{
public:
	class FString                                 VariantSetName;
	class UVariantSet*                            ReturnValue;
};
static_assert(alignof(LevelVariantSets_GetVariantSetByName) == 0x000008, "Wrong alignment on LevelVariantSets_GetVariantSetByName");
static_assert(sizeof(LevelVariantSets_GetVariantSetByName) == 0x000018, "Wrong size on LevelVariantSets_GetVariantSetByName");
static_assert(offsetof(LevelVariantSets_GetVariantSetByName, VariantSetName) == 0x000000, "Member 'LevelVariantSets_GetVariantSetByName::VariantSetName' has a wrong offset!");
static_assert(offsetof(LevelVariantSets_GetVariantSetByName, ReturnValue) == 0x000010, "Member 'LevelVariantSets_GetVariantSetByName::ReturnValue' has a wrong offset!");

struct LevelVariantSetsActor_GetLevelVariantSets final
{
public:
	bool                                          bLoad;
	uint8                                         Pad_1[0x7];
	class ULevelVariantSets*                      ReturnValue;
};
static_assert(alignof(LevelVariantSetsActor_GetLevelVariantSets) == 0x000008, "Wrong alignment on LevelVariantSetsActor_GetLevelVariantSets");
static_assert(sizeof(LevelVariantSetsActor_GetLevelVariantSets) == 0x000010, "Wrong size on LevelVariantSetsActor_GetLevelVariantSets");
static_assert(offsetof(LevelVariantSetsActor_GetLevelVariantSets, bLoad) == 0x000000, "Member 'LevelVariantSetsActor_GetLevelVariantSets::bLoad' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_GetLevelVariantSets, ReturnValue) == 0x000008, "Member 'LevelVariantSetsActor_GetLevelVariantSets::ReturnValue' has a wrong offset!");

struct LevelVariantSetsActor_SetLevelVariantSets final
{
public:
	class ULevelVariantSets*                      InVariantSets;
};
static_assert(alignof(LevelVariantSetsActor_SetLevelVariantSets) == 0x000008, "Wrong alignment on LevelVariantSetsActor_SetLevelVariantSets");
static_assert(sizeof(LevelVariantSetsActor_SetLevelVariantSets) == 0x000008, "Wrong size on LevelVariantSetsActor_SetLevelVariantSets");
static_assert(offsetof(LevelVariantSetsActor_SetLevelVariantSets, InVariantSets) == 0x000000, "Member 'LevelVariantSetsActor_SetLevelVariantSets::InVariantSets' has a wrong offset!");

struct LevelVariantSetsActor_SwitchOnVariantByIndex final
{
public:
	int32                                         VariantSetIndex;
	int32                                         VariantIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(LevelVariantSetsActor_SwitchOnVariantByIndex) == 0x000004, "Wrong alignment on LevelVariantSetsActor_SwitchOnVariantByIndex");
static_assert(sizeof(LevelVariantSetsActor_SwitchOnVariantByIndex) == 0x00000C, "Wrong size on LevelVariantSetsActor_SwitchOnVariantByIndex");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByIndex, VariantSetIndex) == 0x000000, "Member 'LevelVariantSetsActor_SwitchOnVariantByIndex::VariantSetIndex' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByIndex, VariantIndex) == 0x000004, "Member 'LevelVariantSetsActor_SwitchOnVariantByIndex::VariantIndex' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByIndex, ReturnValue) == 0x000008, "Member 'LevelVariantSetsActor_SwitchOnVariantByIndex::ReturnValue' has a wrong offset!");

struct LevelVariantSetsActor_SwitchOnVariantByName final
{
public:
	class FString                                 VariantSetName;
	class FString                                 VariantName;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(LevelVariantSetsActor_SwitchOnVariantByName) == 0x000008, "Wrong alignment on LevelVariantSetsActor_SwitchOnVariantByName");
static_assert(sizeof(LevelVariantSetsActor_SwitchOnVariantByName) == 0x000028, "Wrong size on LevelVariantSetsActor_SwitchOnVariantByName");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByName, VariantSetName) == 0x000000, "Member 'LevelVariantSetsActor_SwitchOnVariantByName::VariantSetName' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByName, VariantName) == 0x000010, "Member 'LevelVariantSetsActor_SwitchOnVariantByName::VariantName' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByName, ReturnValue) == 0x000020, "Member 'LevelVariantSetsActor_SwitchOnVariantByName::ReturnValue' has a wrong offset!");

struct PropertyValue_GetFullDisplayString final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(PropertyValue_GetFullDisplayString) == 0x000008, "Wrong alignment on PropertyValue_GetFullDisplayString");
static_assert(sizeof(PropertyValue_GetFullDisplayString) == 0x000010, "Wrong size on PropertyValue_GetFullDisplayString");
static_assert(offsetof(PropertyValue_GetFullDisplayString, ReturnValue) == 0x000000, "Member 'PropertyValue_GetFullDisplayString::ReturnValue' has a wrong offset!");

struct PropertyValue_GetPropertyTooltip final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(PropertyValue_GetPropertyTooltip) == 0x000008, "Wrong alignment on PropertyValue_GetPropertyTooltip");
static_assert(sizeof(PropertyValue_GetPropertyTooltip) == 0x000018, "Wrong size on PropertyValue_GetPropertyTooltip");
static_assert(offsetof(PropertyValue_GetPropertyTooltip, ReturnValue) == 0x000000, "Member 'PropertyValue_GetPropertyTooltip::ReturnValue' has a wrong offset!");

struct PropertyValue_HasRecordedData final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(PropertyValue_HasRecordedData) == 0x000001, "Wrong alignment on PropertyValue_HasRecordedData");
static_assert(sizeof(PropertyValue_HasRecordedData) == 0x000001, "Wrong size on PropertyValue_HasRecordedData");
static_assert(offsetof(PropertyValue_HasRecordedData, ReturnValue) == 0x000000, "Member 'PropertyValue_HasRecordedData::ReturnValue' has a wrong offset!");

struct SwitchActor_SelectOption final
{
public:
	int32                                         OptionIndex;
};
static_assert(alignof(SwitchActor_SelectOption) == 0x000004, "Wrong alignment on SwitchActor_SelectOption");
static_assert(sizeof(SwitchActor_SelectOption) == 0x000004, "Wrong size on SwitchActor_SelectOption");
static_assert(offsetof(SwitchActor_SelectOption, OptionIndex) == 0x000000, "Member 'SwitchActor_SelectOption::OptionIndex' has a wrong offset!");

struct SwitchActor_GetOptions final
{
public:
	TArray<class AActor*>                         ReturnValue;
};
static_assert(alignof(SwitchActor_GetOptions) == 0x000008, "Wrong alignment on SwitchActor_GetOptions");
static_assert(sizeof(SwitchActor_GetOptions) == 0x000010, "Wrong size on SwitchActor_GetOptions");
static_assert(offsetof(SwitchActor_GetOptions, ReturnValue) == 0x000000, "Member 'SwitchActor_GetOptions::ReturnValue' has a wrong offset!");

struct SwitchActor_GetSelectedOption final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(SwitchActor_GetSelectedOption) == 0x000004, "Wrong alignment on SwitchActor_GetSelectedOption");
static_assert(sizeof(SwitchActor_GetSelectedOption) == 0x000004, "Wrong size on SwitchActor_GetSelectedOption");
static_assert(offsetof(SwitchActor_GetSelectedOption, ReturnValue) == 0x000000, "Member 'SwitchActor_GetSelectedOption::ReturnValue' has a wrong offset!");

struct Variant_AddDependency final
{
public:
	struct FVariantDependency                     Dependency;
	int32                                         ReturnValue;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(Variant_AddDependency) == 0x000008, "Wrong alignment on Variant_AddDependency");
static_assert(sizeof(Variant_AddDependency) == 0x000060, "Wrong size on Variant_AddDependency");
static_assert(offsetof(Variant_AddDependency, Dependency) == 0x000000, "Member 'Variant_AddDependency::Dependency' has a wrong offset!");
static_assert(offsetof(Variant_AddDependency, ReturnValue) == 0x000058, "Member 'Variant_AddDependency::ReturnValue' has a wrong offset!");

struct Variant_DeleteDependency final
{
public:
	int32                                         Index_0;
};
static_assert(alignof(Variant_DeleteDependency) == 0x000004, "Wrong alignment on Variant_DeleteDependency");
static_assert(sizeof(Variant_DeleteDependency) == 0x000004, "Wrong size on Variant_DeleteDependency");
static_assert(offsetof(Variant_DeleteDependency, Index_0) == 0x000000, "Member 'Variant_DeleteDependency::Index_0' has a wrong offset!");

struct Variant_GetActor final
{
public:
	int32                                         ActorIndex;
	uint8                                         Pad_4[0x4];
	class AActor*                                 ReturnValue;
};
static_assert(alignof(Variant_GetActor) == 0x000008, "Wrong alignment on Variant_GetActor");
static_assert(sizeof(Variant_GetActor) == 0x000010, "Wrong size on Variant_GetActor");
static_assert(offsetof(Variant_GetActor, ActorIndex) == 0x000000, "Member 'Variant_GetActor::ActorIndex' has a wrong offset!");
static_assert(offsetof(Variant_GetActor, ReturnValue) == 0x000008, "Member 'Variant_GetActor::ReturnValue' has a wrong offset!");

struct Variant_GetDependency final
{
public:
	int32                                         Index_0;
	uint8                                         Pad_4[0x4];
	struct FVariantDependency                     ReturnValue;
};
static_assert(alignof(Variant_GetDependency) == 0x000008, "Wrong alignment on Variant_GetDependency");
static_assert(sizeof(Variant_GetDependency) == 0x000060, "Wrong size on Variant_GetDependency");
static_assert(offsetof(Variant_GetDependency, Index_0) == 0x000000, "Member 'Variant_GetDependency::Index_0' has a wrong offset!");
static_assert(offsetof(Variant_GetDependency, ReturnValue) == 0x000008, "Member 'Variant_GetDependency::ReturnValue' has a wrong offset!");

struct Variant_GetDependents final
{
public:
	class ULevelVariantSets*                      LevelVariantSets;
	bool                                          bOnlyEnabledDependencies;
	uint8                                         Pad_9[0x7];
	TArray<class UVariant*>                       ReturnValue;
};
static_assert(alignof(Variant_GetDependents) == 0x000008, "Wrong alignment on Variant_GetDependents");
static_assert(sizeof(Variant_GetDependents) == 0x000020, "Wrong size on Variant_GetDependents");
static_assert(offsetof(Variant_GetDependents, LevelVariantSets) == 0x000000, "Member 'Variant_GetDependents::LevelVariantSets' has a wrong offset!");
static_assert(offsetof(Variant_GetDependents, bOnlyEnabledDependencies) == 0x000008, "Member 'Variant_GetDependents::bOnlyEnabledDependencies' has a wrong offset!");
static_assert(offsetof(Variant_GetDependents, ReturnValue) == 0x000010, "Member 'Variant_GetDependents::ReturnValue' has a wrong offset!");

struct Variant_GetNumActors final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(Variant_GetNumActors) == 0x000004, "Wrong alignment on Variant_GetNumActors");
static_assert(sizeof(Variant_GetNumActors) == 0x000004, "Wrong size on Variant_GetNumActors");
static_assert(offsetof(Variant_GetNumActors, ReturnValue) == 0x000000, "Member 'Variant_GetNumActors::ReturnValue' has a wrong offset!");

struct Variant_GetNumDependencies final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(Variant_GetNumDependencies) == 0x000004, "Wrong alignment on Variant_GetNumDependencies");
static_assert(sizeof(Variant_GetNumDependencies) == 0x000004, "Wrong size on Variant_GetNumDependencies");
static_assert(offsetof(Variant_GetNumDependencies, ReturnValue) == 0x000000, "Member 'Variant_GetNumDependencies::ReturnValue' has a wrong offset!");

struct Variant_GetParent final
{
public:
	class UVariantSet*                            ReturnValue;
};
static_assert(alignof(Variant_GetParent) == 0x000008, "Wrong alignment on Variant_GetParent");
static_assert(sizeof(Variant_GetParent) == 0x000008, "Wrong size on Variant_GetParent");
static_assert(offsetof(Variant_GetParent, ReturnValue) == 0x000000, "Member 'Variant_GetParent::ReturnValue' has a wrong offset!");

struct Variant_GetThumbnail final
{
public:
	class UTexture2D*                             ReturnValue;
};
static_assert(alignof(Variant_GetThumbnail) == 0x000008, "Wrong alignment on Variant_GetThumbnail");
static_assert(sizeof(Variant_GetThumbnail) == 0x000008, "Wrong size on Variant_GetThumbnail");
static_assert(offsetof(Variant_GetThumbnail, ReturnValue) == 0x000000, "Member 'Variant_GetThumbnail::ReturnValue' has a wrong offset!");

struct Variant_IsActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(Variant_IsActive) == 0x000001, "Wrong alignment on Variant_IsActive");
static_assert(sizeof(Variant_IsActive) == 0x000001, "Wrong size on Variant_IsActive");
static_assert(offsetof(Variant_IsActive, ReturnValue) == 0x000000, "Member 'Variant_IsActive::ReturnValue' has a wrong offset!");

struct Variant_SetDependency final
{
public:
	int32                                         Index_0;
	uint8                                         Pad_4[0x4];
	struct FVariantDependency                     Dependency;
};
static_assert(alignof(Variant_SetDependency) == 0x000008, "Wrong alignment on Variant_SetDependency");
static_assert(sizeof(Variant_SetDependency) == 0x000060, "Wrong size on Variant_SetDependency");
static_assert(offsetof(Variant_SetDependency, Index_0) == 0x000000, "Member 'Variant_SetDependency::Index_0' has a wrong offset!");
static_assert(offsetof(Variant_SetDependency, Dependency) == 0x000008, "Member 'Variant_SetDependency::Dependency' has a wrong offset!");

struct Variant_SetDisplayText final
{
public:
	class FText                                   NewDisplayText;
};
static_assert(alignof(Variant_SetDisplayText) == 0x000008, "Wrong alignment on Variant_SetDisplayText");
static_assert(sizeof(Variant_SetDisplayText) == 0x000018, "Wrong size on Variant_SetDisplayText");
static_assert(offsetof(Variant_SetDisplayText, NewDisplayText) == 0x000000, "Member 'Variant_SetDisplayText::NewDisplayText' has a wrong offset!");

struct Variant_SetThumbnailFromCamera final
{
public:
	class UObject*                                WorldContextObject;
	uint8                                         Pad_8[0x8];
	struct FTransform                             CameraTransform;
	float                                         FOVDegrees;
	float                                         MinZ;
	float                                         Gamma;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(Variant_SetThumbnailFromCamera) == 0x000010, "Wrong alignment on Variant_SetThumbnailFromCamera");
static_assert(sizeof(Variant_SetThumbnailFromCamera) == 0x000080, "Wrong size on Variant_SetThumbnailFromCamera");
static_assert(offsetof(Variant_SetThumbnailFromCamera, WorldContextObject) == 0x000000, "Member 'Variant_SetThumbnailFromCamera::WorldContextObject' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, CameraTransform) == 0x000010, "Member 'Variant_SetThumbnailFromCamera::CameraTransform' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, FOVDegrees) == 0x000070, "Member 'Variant_SetThumbnailFromCamera::FOVDegrees' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, MinZ) == 0x000074, "Member 'Variant_SetThumbnailFromCamera::MinZ' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, Gamma) == 0x000078, "Member 'Variant_SetThumbnailFromCamera::Gamma' has a wrong offset!");

struct Variant_SetThumbnailFromFile final
{
public:
	class FString                                 FilePath;
};
static_assert(alignof(Variant_SetThumbnailFromFile) == 0x000008, "Wrong alignment on Variant_SetThumbnailFromFile");
static_assert(sizeof(Variant_SetThumbnailFromFile) == 0x000010, "Wrong size on Variant_SetThumbnailFromFile");
static_assert(offsetof(Variant_SetThumbnailFromFile, FilePath) == 0x000000, "Member 'Variant_SetThumbnailFromFile::FilePath' has a wrong offset!");

struct Variant_SetThumbnailFromTexture final
{
public:
	class UTexture2D*                             NewThumbnail;
};
static_assert(alignof(Variant_SetThumbnailFromTexture) == 0x000008, "Wrong alignment on Variant_SetThumbnailFromTexture");
static_assert(sizeof(Variant_SetThumbnailFromTexture) == 0x000008, "Wrong size on Variant_SetThumbnailFromTexture");
static_assert(offsetof(Variant_SetThumbnailFromTexture, NewThumbnail) == 0x000000, "Member 'Variant_SetThumbnailFromTexture::NewThumbnail' has a wrong offset!");

struct Variant_GetDisplayText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(Variant_GetDisplayText) == 0x000008, "Wrong alignment on Variant_GetDisplayText");
static_assert(sizeof(Variant_GetDisplayText) == 0x000018, "Wrong size on Variant_GetDisplayText");
static_assert(offsetof(Variant_GetDisplayText, ReturnValue) == 0x000000, "Member 'Variant_GetDisplayText::ReturnValue' has a wrong offset!");

struct VariantSet_GetParent final
{
public:
	class ULevelVariantSets*                      ReturnValue;
};
static_assert(alignof(VariantSet_GetParent) == 0x000008, "Wrong alignment on VariantSet_GetParent");
static_assert(sizeof(VariantSet_GetParent) == 0x000008, "Wrong size on VariantSet_GetParent");
static_assert(offsetof(VariantSet_GetParent, ReturnValue) == 0x000000, "Member 'VariantSet_GetParent::ReturnValue' has a wrong offset!");

struct VariantSet_GetThumbnail final
{
public:
	class UTexture2D*                             ReturnValue;
};
static_assert(alignof(VariantSet_GetThumbnail) == 0x000008, "Wrong alignment on VariantSet_GetThumbnail");
static_assert(sizeof(VariantSet_GetThumbnail) == 0x000008, "Wrong size on VariantSet_GetThumbnail");
static_assert(offsetof(VariantSet_GetThumbnail, ReturnValue) == 0x000000, "Member 'VariantSet_GetThumbnail::ReturnValue' has a wrong offset!");

struct VariantSet_GetVariant final
{
public:
	int32                                         VariantIndex;
	uint8                                         Pad_4[0x4];
	class UVariant*                               ReturnValue;
};
static_assert(alignof(VariantSet_GetVariant) == 0x000008, "Wrong alignment on VariantSet_GetVariant");
static_assert(sizeof(VariantSet_GetVariant) == 0x000010, "Wrong size on VariantSet_GetVariant");
static_assert(offsetof(VariantSet_GetVariant, VariantIndex) == 0x000000, "Member 'VariantSet_GetVariant::VariantIndex' has a wrong offset!");
static_assert(offsetof(VariantSet_GetVariant, ReturnValue) == 0x000008, "Member 'VariantSet_GetVariant::ReturnValue' has a wrong offset!");

struct VariantSet_GetVariantByName final
{
public:
	class FString                                 VariantName;
	class UVariant*                               ReturnValue;
};
static_assert(alignof(VariantSet_GetVariantByName) == 0x000008, "Wrong alignment on VariantSet_GetVariantByName");
static_assert(sizeof(VariantSet_GetVariantByName) == 0x000018, "Wrong size on VariantSet_GetVariantByName");
static_assert(offsetof(VariantSet_GetVariantByName, VariantName) == 0x000000, "Member 'VariantSet_GetVariantByName::VariantName' has a wrong offset!");
static_assert(offsetof(VariantSet_GetVariantByName, ReturnValue) == 0x000010, "Member 'VariantSet_GetVariantByName::ReturnValue' has a wrong offset!");

struct VariantSet_SetDisplayText final
{
public:
	class FText                                   NewDisplayText;
};
static_assert(alignof(VariantSet_SetDisplayText) == 0x000008, "Wrong alignment on VariantSet_SetDisplayText");
static_assert(sizeof(VariantSet_SetDisplayText) == 0x000018, "Wrong size on VariantSet_SetDisplayText");
static_assert(offsetof(VariantSet_SetDisplayText, NewDisplayText) == 0x000000, "Member 'VariantSet_SetDisplayText::NewDisplayText' has a wrong offset!");

struct VariantSet_SetThumbnailFromCamera final
{
public:
	class UObject*                                WorldContextObject;
	uint8                                         Pad_8[0x8];
	struct FTransform                             CameraTransform;
	float                                         FOVDegrees;
	float                                         MinZ;
	float                                         Gamma;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(VariantSet_SetThumbnailFromCamera) == 0x000010, "Wrong alignment on VariantSet_SetThumbnailFromCamera");
static_assert(sizeof(VariantSet_SetThumbnailFromCamera) == 0x000080, "Wrong size on VariantSet_SetThumbnailFromCamera");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, WorldContextObject) == 0x000000, "Member 'VariantSet_SetThumbnailFromCamera::WorldContextObject' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, CameraTransform) == 0x000010, "Member 'VariantSet_SetThumbnailFromCamera::CameraTransform' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, FOVDegrees) == 0x000070, "Member 'VariantSet_SetThumbnailFromCamera::FOVDegrees' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, MinZ) == 0x000074, "Member 'VariantSet_SetThumbnailFromCamera::MinZ' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, Gamma) == 0x000078, "Member 'VariantSet_SetThumbnailFromCamera::Gamma' has a wrong offset!");

struct VariantSet_SetThumbnailFromFile final
{
public:
	class FString                                 FilePath;
};
static_assert(alignof(VariantSet_SetThumbnailFromFile) == 0x000008, "Wrong alignment on VariantSet_SetThumbnailFromFile");
static_assert(sizeof(VariantSet_SetThumbnailFromFile) == 0x000010, "Wrong size on VariantSet_SetThumbnailFromFile");
static_assert(offsetof(VariantSet_SetThumbnailFromFile, FilePath) == 0x000000, "Member 'VariantSet_SetThumbnailFromFile::FilePath' has a wrong offset!");

struct VariantSet_SetThumbnailFromTexture final
{
public:
	class UTexture2D*                             NewThumbnail;
};
static_assert(alignof(VariantSet_SetThumbnailFromTexture) == 0x000008, "Wrong alignment on VariantSet_SetThumbnailFromTexture");
static_assert(sizeof(VariantSet_SetThumbnailFromTexture) == 0x000008, "Wrong size on VariantSet_SetThumbnailFromTexture");
static_assert(offsetof(VariantSet_SetThumbnailFromTexture, NewThumbnail) == 0x000000, "Member 'VariantSet_SetThumbnailFromTexture::NewThumbnail' has a wrong offset!");

struct VariantSet_GetDisplayText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(VariantSet_GetDisplayText) == 0x000008, "Wrong alignment on VariantSet_GetDisplayText");
static_assert(sizeof(VariantSet_GetDisplayText) == 0x000018, "Wrong size on VariantSet_GetDisplayText");
static_assert(offsetof(VariantSet_GetDisplayText, ReturnValue) == 0x000000, "Member 'VariantSet_GetDisplayText::ReturnValue' has a wrong offset!");

struct VariantSet_GetNumVariants final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(VariantSet_GetNumVariants) == 0x000004, "Wrong alignment on VariantSet_GetNumVariants");
static_assert(sizeof(VariantSet_GetNumVariants) == 0x000004, "Wrong size on VariantSet_GetNumVariants");
static_assert(offsetof(VariantSet_GetNumVariants, ReturnValue) == 0x000000, "Member 'VariantSet_GetNumVariants::ReturnValue' has a wrong offset!");

}
