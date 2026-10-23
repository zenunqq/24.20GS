#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UHeightfieldMinMaxTexture final : public UObject
{
public:
	class UTexture2D*                             Texture;
	class UTexture2D*                             LodBiasTexture;
	class UTexture2D*                             LodBiasMinMaxTexture;
	int32                                         MaxCPULevels;
	uint8                                         Pad_44[0x4];
	TArray<struct FVector2D>                      TextureData;
	struct FIntPoint                              TextureDataSize;
	TArray<int32>                                 TextureDataMips;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeightfieldMinMaxTexture">();
	}
	static class UHeightfieldMinMaxTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeightfieldMinMaxTexture>();
	}
};
static_assert(alignof(UHeightfieldMinMaxTexture) == 0x000008, "Wrong alignment on UHeightfieldMinMaxTexture");
static_assert(sizeof(UHeightfieldMinMaxTexture) == 0x000070, "Wrong size on UHeightfieldMinMaxTexture");
static_assert(offsetof(UHeightfieldMinMaxTexture, Texture) == 0x000028, "Member 'UHeightfieldMinMaxTexture::Texture' has a wrong offset!");
static_assert(offsetof(UHeightfieldMinMaxTexture, LodBiasTexture) == 0x000030, "Member 'UHeightfieldMinMaxTexture::LodBiasTexture' has a wrong offset!");
static_assert(offsetof(UHeightfieldMinMaxTexture, LodBiasMinMaxTexture) == 0x000038, "Member 'UHeightfieldMinMaxTexture::LodBiasMinMaxTexture' has a wrong offset!");
static_assert(offsetof(UHeightfieldMinMaxTexture, MaxCPULevels) == 0x000040, "Member 'UHeightfieldMinMaxTexture::MaxCPULevels' has a wrong offset!");
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureData) == 0x000048, "Member 'UHeightfieldMinMaxTexture::TextureData' has a wrong offset!");
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureDataSize) == 0x000058, "Member 'UHeightfieldMinMaxTexture::TextureDataSize' has a wrong offset!");
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureDataMips) == 0x000060, "Member 'UHeightfieldMinMaxTexture::TextureDataMips' has a wrong offset!");

class UMaterialExpressionHeightfieldMinMaxTexture final : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*              MinMaxTexture;
	EMaterialSamplerType                          SamplerType;
	uint8                                         Pad_B9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionHeightfieldMinMaxTexture">();
	}
	static class UMaterialExpressionHeightfieldMinMaxTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionHeightfieldMinMaxTexture>();
	}
};
static_assert(alignof(UMaterialExpressionHeightfieldMinMaxTexture) == 0x000008, "Wrong alignment on UMaterialExpressionHeightfieldMinMaxTexture");
static_assert(sizeof(UMaterialExpressionHeightfieldMinMaxTexture) == 0x0000C0, "Wrong size on UMaterialExpressionHeightfieldMinMaxTexture");
static_assert(offsetof(UMaterialExpressionHeightfieldMinMaxTexture, MinMaxTexture) == 0x0000B0, "Member 'UMaterialExpressionHeightfieldMinMaxTexture::MinMaxTexture' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionHeightfieldMinMaxTexture, SamplerType) == 0x0000B8, "Member 'UMaterialExpressionHeightfieldMinMaxTexture::SamplerType' has a wrong offset!");

class AVirtualHeightfieldMesh final : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*       VirtualHeightfieldMeshComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VirtualHeightfieldMesh">();
	}
	static class AVirtualHeightfieldMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVirtualHeightfieldMesh>();
	}
};
static_assert(alignof(AVirtualHeightfieldMesh) == 0x000008, "Wrong alignment on AVirtualHeightfieldMesh");
static_assert(sizeof(AVirtualHeightfieldMesh) == 0x000290, "Wrong size on AVirtualHeightfieldMesh");
static_assert(offsetof(AVirtualHeightfieldMesh, VirtualHeightfieldMeshComponent) == 0x000288, "Member 'AVirtualHeightfieldMesh::VirtualHeightfieldMeshComponent' has a wrong offset!");

class UVirtualHeightfieldMeshComponent final : public UPrimitiveComponent
{
public:
	TSoftObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture;
	class ARuntimeVirtualTextureVolume*           VirtualTextureRef;
	class UObject*                                VirtualTextureThumbnail;
	bool                                          bCopyBoundsButton;
	uint8                                         Pad_5A1[0x7];
	class UHeightfieldMinMaxTexture*              MinMaxTexture;
	int32                                         NumMinMaxTextureBuildLevels;
	bool                                          bBuildMinMaxTextureButton;
	uint8                                         Pad_5B5[0x3];
	class UMaterialInterface*                     Material;
	float                                         LOD0ScreenSize;
	float                                         Lod0Distribution;
	float                                         LodDistribution;
	float                                         LodBiasScale;
	int32                                         NumForceLoadLods;
	int32                                         NumOcclusionLods;
	bool                                          bHiddenInEditor;
	uint8                                         Pad_5D9[0x7];

public:
	void GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VirtualHeightfieldMeshComponent">();
	}
	static class UVirtualHeightfieldMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVirtualHeightfieldMeshComponent>();
	}
};
static_assert(alignof(UVirtualHeightfieldMeshComponent) == 0x000010, "Wrong alignment on UVirtualHeightfieldMeshComponent");
static_assert(sizeof(UVirtualHeightfieldMeshComponent) == 0x0005E0, "Wrong size on UVirtualHeightfieldMeshComponent");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTexture) == 0x000568, "Member 'UVirtualHeightfieldMeshComponent::VirtualTexture' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTextureRef) == 0x000590, "Member 'UVirtualHeightfieldMeshComponent::VirtualTextureRef' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTextureThumbnail) == 0x000598, "Member 'UVirtualHeightfieldMeshComponent::VirtualTextureThumbnail' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, bCopyBoundsButton) == 0x0005A0, "Member 'UVirtualHeightfieldMeshComponent::bCopyBoundsButton' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, MinMaxTexture) == 0x0005A8, "Member 'UVirtualHeightfieldMeshComponent::MinMaxTexture' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, NumMinMaxTextureBuildLevels) == 0x0005B0, "Member 'UVirtualHeightfieldMeshComponent::NumMinMaxTextureBuildLevels' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, bBuildMinMaxTextureButton) == 0x0005B4, "Member 'UVirtualHeightfieldMeshComponent::bBuildMinMaxTextureButton' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, Material) == 0x0005B8, "Member 'UVirtualHeightfieldMeshComponent::Material' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, LOD0ScreenSize) == 0x0005C0, "Member 'UVirtualHeightfieldMeshComponent::LOD0ScreenSize' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, Lod0Distribution) == 0x0005C4, "Member 'UVirtualHeightfieldMeshComponent::Lod0Distribution' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, LodDistribution) == 0x0005C8, "Member 'UVirtualHeightfieldMeshComponent::LodDistribution' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, LodBiasScale) == 0x0005CC, "Member 'UVirtualHeightfieldMeshComponent::LodBiasScale' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, NumForceLoadLods) == 0x0005D0, "Member 'UVirtualHeightfieldMeshComponent::NumForceLoadLods' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, NumOcclusionLods) == 0x0005D4, "Member 'UVirtualHeightfieldMeshComponent::NumOcclusionLods' has a wrong offset!");
static_assert(offsetof(UVirtualHeightfieldMeshComponent, bHiddenInEditor) == 0x0005D8, "Member 'UVirtualHeightfieldMeshComponent::bHiddenInEditor' has a wrong offset!");

}
