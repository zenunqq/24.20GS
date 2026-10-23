#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ImagePlate_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class AImagePlate final : public AActor
{
public:
	class UImagePlateComponent*                   ImagePlate;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImagePlate">();
	}
	static class AImagePlate* GetDefaultObj()
	{
		return GetDefaultObjImpl<AImagePlate>();
	}
};
static_assert(alignof(AImagePlate) == 0x000008, "Wrong alignment on AImagePlate");
static_assert(sizeof(AImagePlate) == 0x000290, "Wrong size on AImagePlate");
static_assert(offsetof(AImagePlate, ImagePlate) == 0x000288, "Member 'AImagePlate::ImagePlate' has a wrong offset!");

class UImagePlateComponent final : public UPrimitiveComponent
{
public:
	struct FImagePlateParameters                  Plate;
	uint8                                         Pad_5A8[0x118];

public:
	void OnRenderTextureChanged();
	void SetImagePlate(const struct FImagePlateParameters& Plate_0);

	struct FImagePlateParameters GetPlate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImagePlateComponent">();
	}
	static class UImagePlateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagePlateComponent>();
	}
};
static_assert(alignof(UImagePlateComponent) == 0x000010, "Wrong alignment on UImagePlateComponent");
static_assert(sizeof(UImagePlateComponent) == 0x0006C0, "Wrong size on UImagePlateComponent");
static_assert(offsetof(UImagePlateComponent, Plate) == 0x000568, "Member 'UImagePlateComponent::Plate' has a wrong offset!");

class UImagePlateSettings final : public UObject
{
public:
	class FString                                 ProxyName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImagePlateSettings">();
	}
	static class UImagePlateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagePlateSettings>();
	}
};
static_assert(alignof(UImagePlateSettings) == 0x000008, "Wrong alignment on UImagePlateSettings");
static_assert(sizeof(UImagePlateSettings) == 0x000038, "Wrong size on UImagePlateSettings");
static_assert(offsetof(UImagePlateSettings, ProxyName) == 0x000028, "Member 'UImagePlateSettings::ProxyName' has a wrong offset!");

class UImagePlateFileSequence final : public UObject
{
public:
	struct FDirectoryPath                         SequencePath;
	class FString                                 FileWildcard;
	float                                         FrameRate;
	uint8                                         Pad_4C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImagePlateFileSequence">();
	}
	static class UImagePlateFileSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagePlateFileSequence>();
	}
};
static_assert(alignof(UImagePlateFileSequence) == 0x000008, "Wrong alignment on UImagePlateFileSequence");
static_assert(sizeof(UImagePlateFileSequence) == 0x000050, "Wrong size on UImagePlateFileSequence");
static_assert(offsetof(UImagePlateFileSequence, SequencePath) == 0x000028, "Member 'UImagePlateFileSequence::SequencePath' has a wrong offset!");
static_assert(offsetof(UImagePlateFileSequence, FileWildcard) == 0x000038, "Member 'UImagePlateFileSequence::FileWildcard' has a wrong offset!");
static_assert(offsetof(UImagePlateFileSequence, FrameRate) == 0x000048, "Member 'UImagePlateFileSequence::FrameRate' has a wrong offset!");

class UImagePlateFrustumComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImagePlateFrustumComponent">();
	}
	static class UImagePlateFrustumComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagePlateFrustumComponent>();
	}
};
static_assert(alignof(UImagePlateFrustumComponent) == 0x000010, "Wrong alignment on UImagePlateFrustumComponent");
static_assert(sizeof(UImagePlateFrustumComponent) == 0x000570, "Wrong size on UImagePlateFrustumComponent");

}
