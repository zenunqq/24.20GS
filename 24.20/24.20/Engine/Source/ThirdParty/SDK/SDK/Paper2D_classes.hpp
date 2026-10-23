#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Paper2D_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class APaperCharacter final : public ACharacter
{
public:
	class UPaperFlipbookComponent*                Sprite;
	uint8                                         Pad_628[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperCharacter">();
	}
	static class APaperCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperCharacter>();
	}
};
static_assert(alignof(APaperCharacter) == 0x000010, "Wrong alignment on APaperCharacter");
static_assert(sizeof(APaperCharacter) == 0x000630, "Wrong size on APaperCharacter");
static_assert(offsetof(APaperCharacter, Sprite) == 0x000620, "Member 'APaperCharacter::Sprite' has a wrong offset!");

class UPaperFlipbook final : public UObject
{
public:
	float                                         FramesPerSecond;
	uint8                                         Pad_2C[0x4];
	TArray<struct FPaperFlipbookKeyFrame>         Keyframes;
	class UMaterialInterface*                     DefaultMaterial;
	EFlipbookCollisionMode                        CollisionSource;
	uint8                                         Pad_49[0x7];

public:
	int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) const;
	int32 GetNumFrames() const;
	int32 GetNumKeyFrames() const;
	class UPaperSprite* GetSpriteAtFrame(int32 FrameIndex) const;
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds) const;
	float GetTotalDuration() const;
	bool IsValidKeyFrameIndex(int32 Index_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperFlipbook">();
	}
	static class UPaperFlipbook* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperFlipbook>();
	}
};
static_assert(alignof(UPaperFlipbook) == 0x000008, "Wrong alignment on UPaperFlipbook");
static_assert(sizeof(UPaperFlipbook) == 0x000050, "Wrong size on UPaperFlipbook");
static_assert(offsetof(UPaperFlipbook, FramesPerSecond) == 0x000028, "Member 'UPaperFlipbook::FramesPerSecond' has a wrong offset!");
static_assert(offsetof(UPaperFlipbook, Keyframes) == 0x000030, "Member 'UPaperFlipbook::Keyframes' has a wrong offset!");
static_assert(offsetof(UPaperFlipbook, DefaultMaterial) == 0x000040, "Member 'UPaperFlipbook::DefaultMaterial' has a wrong offset!");
static_assert(offsetof(UPaperFlipbook, CollisionSource) == 0x000048, "Member 'UPaperFlipbook::CollisionSource' has a wrong offset!");

class APaperFlipbookActor final : public AActor
{
public:
	class UPaperFlipbookComponent*                RenderComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperFlipbookActor">();
	}
	static class APaperFlipbookActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperFlipbookActor>();
	}
};
static_assert(alignof(APaperFlipbookActor) == 0x000008, "Wrong alignment on APaperFlipbookActor");
static_assert(sizeof(APaperFlipbookActor) == 0x000290, "Wrong size on APaperFlipbookActor");
static_assert(offsetof(APaperFlipbookActor, RenderComponent) == 0x000288, "Member 'APaperFlipbookActor::RenderComponent' has a wrong offset!");

class UPaperFlipbookComponent final : public UMeshComponent
{
public:
	class UPaperFlipbook*                         SourceFlipbook;
	class UMaterialInterface*                     Material;
	float                                         PlayRate;
	uint8                                         bLooping : 1;
	uint8                                         bReversePlayback : 1;
	uint8                                         bPlaying : 1;
	uint8                                         Pad_5B5[0x3];
	float                                         AccumulatedTime;
	int32                                         CachedFrameIndex;
	struct FLinearColor                           SpriteColor;
	class UBodySetup*                             CachedBodySetup;
	TMulticastInlineDelegate<void()>              OnFinishedPlaying;
	uint8                                         Pad_5E8[0x8];

public:
	class UPaperFlipbook* GetFlipbook();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	void Play();
	void PlayFromStart();
	void Reverse();
	void ReverseFromEnd();
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void SetLooping(bool bNewLooping);
	void SetNewTime(float NewTime);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
	void SetPlayRate(float NewRate);
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void Stop();

	float GetFlipbookFramerate() const;
	float GetFlipbookLength() const;
	int32 GetFlipbookLengthInFrames() const;
	float GetPlaybackPosition() const;
	int32 GetPlaybackPositionInFrames() const;
	float GetPlayRate() const;
	struct FLinearColor GetSpriteColor() const;
	bool IsLooping() const;
	bool IsPlaying() const;
	bool IsReversing() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperFlipbookComponent">();
	}
	static class UPaperFlipbookComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperFlipbookComponent>();
	}
};
static_assert(alignof(UPaperFlipbookComponent) == 0x000010, "Wrong alignment on UPaperFlipbookComponent");
static_assert(sizeof(UPaperFlipbookComponent) == 0x0005F0, "Wrong size on UPaperFlipbookComponent");
static_assert(offsetof(UPaperFlipbookComponent, SourceFlipbook) == 0x0005A0, "Member 'UPaperFlipbookComponent::SourceFlipbook' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, Material) == 0x0005A8, "Member 'UPaperFlipbookComponent::Material' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, PlayRate) == 0x0005B0, "Member 'UPaperFlipbookComponent::PlayRate' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, AccumulatedTime) == 0x0005B8, "Member 'UPaperFlipbookComponent::AccumulatedTime' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, CachedFrameIndex) == 0x0005BC, "Member 'UPaperFlipbookComponent::CachedFrameIndex' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, SpriteColor) == 0x0005C0, "Member 'UPaperFlipbookComponent::SpriteColor' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, CachedBodySetup) == 0x0005D0, "Member 'UPaperFlipbookComponent::CachedBodySetup' has a wrong offset!");
static_assert(offsetof(UPaperFlipbookComponent, OnFinishedPlaying) == 0x0005D8, "Member 'UPaperFlipbookComponent::OnFinishedPlaying' has a wrong offset!");

class APaperGroupedSpriteActor final : public AActor
{
public:
	class UPaperGroupedSpriteComponent*           RenderComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperGroupedSpriteActor">();
	}
	static class APaperGroupedSpriteActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperGroupedSpriteActor>();
	}
};
static_assert(alignof(APaperGroupedSpriteActor) == 0x000008, "Wrong alignment on APaperGroupedSpriteActor");
static_assert(sizeof(APaperGroupedSpriteActor) == 0x000290, "Wrong size on APaperGroupedSpriteActor");
static_assert(offsetof(APaperGroupedSpriteActor, RenderComponent) == 0x000288, "Member 'APaperGroupedSpriteActor::RenderComponent' has a wrong offset!");

class UPaperGroupedSpriteComponent final : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>             InstanceMaterials;
	TArray<struct FSpriteInstanceData>            PerInstanceSpriteData;
	uint8                                         Pad_5C0[0x10];

public:
	int32 AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
	void ClearInstances();
	bool RemoveInstance(int32 InstanceIndex);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool UpdateInstanceColor(int32 InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	bool UpdateInstanceTransform(int32 InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);

	int32 GetInstanceCount() const;
	bool GetInstanceTransform(int32 InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperGroupedSpriteComponent">();
	}
	static class UPaperGroupedSpriteComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperGroupedSpriteComponent>();
	}
};
static_assert(alignof(UPaperGroupedSpriteComponent) == 0x000010, "Wrong alignment on UPaperGroupedSpriteComponent");
static_assert(sizeof(UPaperGroupedSpriteComponent) == 0x0005D0, "Wrong size on UPaperGroupedSpriteComponent");
static_assert(offsetof(UPaperGroupedSpriteComponent, InstanceMaterials) == 0x0005A0, "Member 'UPaperGroupedSpriteComponent::InstanceMaterials' has a wrong offset!");
static_assert(offsetof(UPaperGroupedSpriteComponent, PerInstanceSpriteData) == 0x0005B0, "Member 'UPaperGroupedSpriteComponent::PerInstanceSpriteData' has a wrong offset!");

class UPaperRuntimeSettings final : public UObject
{
public:
	bool                                          bEnableSpriteAtlasGroups;
	bool                                          bEnableTerrainSplineEditing;
	bool                                          bResizeSpriteDataToMatchTextures;
	uint8                                         Pad_2B[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperRuntimeSettings">();
	}
	static class UPaperRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperRuntimeSettings>();
	}
};
static_assert(alignof(UPaperRuntimeSettings) == 0x000008, "Wrong alignment on UPaperRuntimeSettings");
static_assert(sizeof(UPaperRuntimeSettings) == 0x000030, "Wrong size on UPaperRuntimeSettings");
static_assert(offsetof(UPaperRuntimeSettings, bEnableSpriteAtlasGroups) == 0x000028, "Member 'UPaperRuntimeSettings::bEnableSpriteAtlasGroups' has a wrong offset!");
static_assert(offsetof(UPaperRuntimeSettings, bEnableTerrainSplineEditing) == 0x000029, "Member 'UPaperRuntimeSettings::bEnableTerrainSplineEditing' has a wrong offset!");
static_assert(offsetof(UPaperRuntimeSettings, bResizeSpriteDataToMatchTextures) == 0x00002A, "Member 'UPaperRuntimeSettings::bResizeSpriteDataToMatchTextures' has a wrong offset!");

class UPaperSprite final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	TArray<class UTexture*>                       AdditionalSourceTextures;
	struct FVector2D                              BakedSourceUV;
	struct FVector2D                              BakedSourceDimension;
	class UTexture2D*                             BakedSourceTexture;
	class UMaterialInterface*                     DefaultMaterial;
	class UMaterialInterface*                     AlternateMaterial;
	TArray<struct FPaperSpriteSocket>             Sockets;
	ESpriteCollisionMode                          SpriteCollisionDomain;
	uint8                                         Pad_91[0x3];
	float                                         PixelsPerUnrealUnit;
	class UBodySetup*                             BodySetup;
	int32                                         AlternateMaterialSplitIndex;
	uint8                                         Pad_A4[0x4];
	TArray<struct FVector4>                       BakedRenderData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperSprite">();
	}
	static class UPaperSprite* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperSprite>();
	}
};
static_assert(alignof(UPaperSprite) == 0x000008, "Wrong alignment on UPaperSprite");
static_assert(sizeof(UPaperSprite) == 0x0000B8, "Wrong size on UPaperSprite");
static_assert(offsetof(UPaperSprite, AdditionalSourceTextures) == 0x000038, "Member 'UPaperSprite::AdditionalSourceTextures' has a wrong offset!");
static_assert(offsetof(UPaperSprite, BakedSourceUV) == 0x000048, "Member 'UPaperSprite::BakedSourceUV' has a wrong offset!");
static_assert(offsetof(UPaperSprite, BakedSourceDimension) == 0x000058, "Member 'UPaperSprite::BakedSourceDimension' has a wrong offset!");
static_assert(offsetof(UPaperSprite, BakedSourceTexture) == 0x000068, "Member 'UPaperSprite::BakedSourceTexture' has a wrong offset!");
static_assert(offsetof(UPaperSprite, DefaultMaterial) == 0x000070, "Member 'UPaperSprite::DefaultMaterial' has a wrong offset!");
static_assert(offsetof(UPaperSprite, AlternateMaterial) == 0x000078, "Member 'UPaperSprite::AlternateMaterial' has a wrong offset!");
static_assert(offsetof(UPaperSprite, Sockets) == 0x000080, "Member 'UPaperSprite::Sockets' has a wrong offset!");
static_assert(offsetof(UPaperSprite, SpriteCollisionDomain) == 0x000090, "Member 'UPaperSprite::SpriteCollisionDomain' has a wrong offset!");
static_assert(offsetof(UPaperSprite, PixelsPerUnrealUnit) == 0x000094, "Member 'UPaperSprite::PixelsPerUnrealUnit' has a wrong offset!");
static_assert(offsetof(UPaperSprite, BodySetup) == 0x000098, "Member 'UPaperSprite::BodySetup' has a wrong offset!");
static_assert(offsetof(UPaperSprite, AlternateMaterialSplitIndex) == 0x0000A0, "Member 'UPaperSprite::AlternateMaterialSplitIndex' has a wrong offset!");
static_assert(offsetof(UPaperSprite, BakedRenderData) == 0x0000A8, "Member 'UPaperSprite::BakedRenderData' has a wrong offset!");

class APaperSpriteActor final : public AActor
{
public:
	class UPaperSpriteComponent*                  RenderComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperSpriteActor">();
	}
	static class APaperSpriteActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperSpriteActor>();
	}
};
static_assert(alignof(APaperSpriteActor) == 0x000008, "Wrong alignment on APaperSpriteActor");
static_assert(sizeof(APaperSpriteActor) == 0x000290, "Wrong size on APaperSpriteActor");
static_assert(offsetof(APaperSpriteActor, RenderComponent) == 0x000288, "Member 'APaperSpriteActor::RenderComponent' has a wrong offset!");

class UPaperSpriteAtlas final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperSpriteAtlas">();
	}
	static class UPaperSpriteAtlas* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperSpriteAtlas>();
	}
};
static_assert(alignof(UPaperSpriteAtlas) == 0x000008, "Wrong alignment on UPaperSpriteAtlas");
static_assert(sizeof(UPaperSpriteAtlas) == 0x000028, "Wrong size on UPaperSpriteAtlas");

class UPaperSpriteBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperSpriteBlueprintLibrary">();
	}
	static class UPaperSpriteBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperSpriteBlueprintLibrary>();
	}
};
static_assert(alignof(UPaperSpriteBlueprintLibrary) == 0x000008, "Wrong alignment on UPaperSpriteBlueprintLibrary");
static_assert(sizeof(UPaperSpriteBlueprintLibrary) == 0x000028, "Wrong size on UPaperSpriteBlueprintLibrary");

class UPaperSpriteComponent final : public UMeshComponent
{
public:
	class UPaperSprite*                           SourceSprite;
	class UMaterialInterface*                     MaterialOverride;
	struct FLinearColor                           SpriteColor;

public:
	class UPaperSprite* GetSprite();
	bool SetSprite(class UPaperSprite* NewSprite);
	void SetSpriteColor(const struct FLinearColor& NewColor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperSpriteComponent">();
	}
	static class UPaperSpriteComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperSpriteComponent>();
	}
};
static_assert(alignof(UPaperSpriteComponent) == 0x000010, "Wrong alignment on UPaperSpriteComponent");
static_assert(sizeof(UPaperSpriteComponent) == 0x0005C0, "Wrong size on UPaperSpriteComponent");
static_assert(offsetof(UPaperSpriteComponent, SourceSprite) == 0x0005A0, "Member 'UPaperSpriteComponent::SourceSprite' has a wrong offset!");
static_assert(offsetof(UPaperSpriteComponent, MaterialOverride) == 0x0005A8, "Member 'UPaperSpriteComponent::MaterialOverride' has a wrong offset!");
static_assert(offsetof(UPaperSpriteComponent, SpriteColor) == 0x0005B0, "Member 'UPaperSpriteComponent::SpriteColor' has a wrong offset!");

class UPaperTileLayer final : public UObject
{
public:
	class FText                                   LayerName;
	int32                                         LayerWidth;
	int32                                         LayerHeight;
	uint8                                         bHiddenInGame : 1;
	uint8                                         bLayerCollides : 1;
	uint8                                         bOverrideCollisionThickness : 1;
	uint8                                         bOverrideCollisionOffset : 1;
	uint8                                         Pad_49[0x3];
	float                                         CollisionThicknessOverride;
	float                                         CollisionOffsetOverride;
	struct FLinearColor                           LayerColor;
	int32                                         AllocatedWidth;
	int32                                         AllocatedHeight;
	uint8                                         Pad_6C[0x4];
	TArray<struct FPaperTileInfo>                 AllocatedCells;
	class UPaperTileSet*                          TileSet;
	TArray<int32>                                 AllocatedGrid;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTileLayer">();
	}
	static class UPaperTileLayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTileLayer>();
	}
};
static_assert(alignof(UPaperTileLayer) == 0x000008, "Wrong alignment on UPaperTileLayer");
static_assert(sizeof(UPaperTileLayer) == 0x000098, "Wrong size on UPaperTileLayer");
static_assert(offsetof(UPaperTileLayer, LayerName) == 0x000028, "Member 'UPaperTileLayer::LayerName' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, LayerWidth) == 0x000040, "Member 'UPaperTileLayer::LayerWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, LayerHeight) == 0x000044, "Member 'UPaperTileLayer::LayerHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, CollisionThicknessOverride) == 0x00004C, "Member 'UPaperTileLayer::CollisionThicknessOverride' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, CollisionOffsetOverride) == 0x000050, "Member 'UPaperTileLayer::CollisionOffsetOverride' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, LayerColor) == 0x000054, "Member 'UPaperTileLayer::LayerColor' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, AllocatedWidth) == 0x000064, "Member 'UPaperTileLayer::AllocatedWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, AllocatedHeight) == 0x000068, "Member 'UPaperTileLayer::AllocatedHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, AllocatedCells) == 0x000070, "Member 'UPaperTileLayer::AllocatedCells' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, TileSet) == 0x000080, "Member 'UPaperTileLayer::TileSet' has a wrong offset!");
static_assert(offsetof(UPaperTileLayer, AllocatedGrid) == 0x000088, "Member 'UPaperTileLayer::AllocatedGrid' has a wrong offset!");

class UPaperTileMap final : public UObject
{
public:
	int32                                         MapWidth;
	int32                                         MapHeight;
	int32                                         TileWidth;
	int32                                         TileHeight;
	float                                         PixelsPerUnrealUnit;
	float                                         SeparationPerTileX;
	float                                         SeparationPerTileY;
	float                                         SeparationPerLayer;
	TSoftObjectPtr<class UPaperTileSet>           SelectedTileSet;
	class UMaterialInterface*                     Material;
	TArray<class UPaperTileLayer*>                TileLayers;
	float                                         CollisionThickness;
	ESpriteCollisionMode                          SpriteCollisionDomain;
	ETileMapProjectionMode                        ProjectionMode;
	uint8                                         Pad_8E[0x2];
	int32                                         HexSideLength;
	uint8                                         Pad_94[0x4];
	class UBodySetup*                             BodySetup;
	int32                                         LayerNameIndex;
	uint8                                         Pad_A4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTileMap">();
	}
	static class UPaperTileMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTileMap>();
	}
};
static_assert(alignof(UPaperTileMap) == 0x000008, "Wrong alignment on UPaperTileMap");
static_assert(sizeof(UPaperTileMap) == 0x0000A8, "Wrong size on UPaperTileMap");
static_assert(offsetof(UPaperTileMap, MapWidth) == 0x000028, "Member 'UPaperTileMap::MapWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, MapHeight) == 0x00002C, "Member 'UPaperTileMap::MapHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, TileWidth) == 0x000030, "Member 'UPaperTileMap::TileWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, TileHeight) == 0x000034, "Member 'UPaperTileMap::TileHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, PixelsPerUnrealUnit) == 0x000038, "Member 'UPaperTileMap::PixelsPerUnrealUnit' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, SeparationPerTileX) == 0x00003C, "Member 'UPaperTileMap::SeparationPerTileX' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, SeparationPerTileY) == 0x000040, "Member 'UPaperTileMap::SeparationPerTileY' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, SeparationPerLayer) == 0x000044, "Member 'UPaperTileMap::SeparationPerLayer' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, SelectedTileSet) == 0x000048, "Member 'UPaperTileMap::SelectedTileSet' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, Material) == 0x000070, "Member 'UPaperTileMap::Material' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, TileLayers) == 0x000078, "Member 'UPaperTileMap::TileLayers' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, CollisionThickness) == 0x000088, "Member 'UPaperTileMap::CollisionThickness' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, SpriteCollisionDomain) == 0x00008C, "Member 'UPaperTileMap::SpriteCollisionDomain' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, ProjectionMode) == 0x00008D, "Member 'UPaperTileMap::ProjectionMode' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, HexSideLength) == 0x000090, "Member 'UPaperTileMap::HexSideLength' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, BodySetup) == 0x000098, "Member 'UPaperTileMap::BodySetup' has a wrong offset!");
static_assert(offsetof(UPaperTileMap, LayerNameIndex) == 0x0000A0, "Member 'UPaperTileMap::LayerNameIndex' has a wrong offset!");

class APaperTileMapActor final : public AActor
{
public:
	class UPaperTileMapComponent*                 RenderComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTileMapActor">();
	}
	static class APaperTileMapActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperTileMapActor>();
	}
};
static_assert(alignof(APaperTileMapActor) == 0x000008, "Wrong alignment on APaperTileMapActor");
static_assert(sizeof(APaperTileMapActor) == 0x000290, "Wrong size on APaperTileMapActor");
static_assert(offsetof(APaperTileMapActor, RenderComponent) == 0x000288, "Member 'APaperTileMapActor::RenderComponent' has a wrong offset!");

class UPaperTileMapComponent final : public UMeshComponent
{
public:
	int32                                         MapWidth;
	int32                                         MapHeight;
	int32                                         TileWidth;
	int32                                         TileHeight;
	class UPaperTileSet*                          DefaultLayerTileSet;
	class UMaterialInterface*                     Material;
	TArray<class UPaperTileLayer*>                TileLayers;
	struct FLinearColor                           TileMapColor;
	int32                                         UseSingleLayerIndex;
	bool                                          bUseSingleLayer;
	uint8                                         Pad_5E5[0x3];
	class UPaperTileMap*                          TileMap;

public:
	class UPaperTileLayer* AddNewLayer();
	void CreateNewTileMap(int32 MapWidth_0, int32 MapHeight_0, int32 TileWidth_0, int32 TileHeight_0, float PixelsPerUnrealUnit, bool bCreateLayer);
	void GetMapSize(int32* MapWidth_0, int32* MapHeight_0, int32* NumLayers);
	void MakeTileMapEditable();
	void RebuildCollision();
	void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetLayerColor(const struct FLinearColor& NewColor, int32 Layer);
	void SetTile(int32 X, int32 Y, int32 Layer, const struct FPaperTileInfo& NewValue);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTileMapColor(const struct FLinearColor& NewColor);

	struct FLinearColor GetLayerColor(int32 Layer) const;
	struct FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer) const;
	struct FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;
	struct FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;
	struct FLinearColor GetTileMapColor() const;
	void GetTilePolygon(int32 TileX, int32 TileY, TArray<struct FVector>* Points, int32 LayerIndex, bool bWorldSpace) const;
	bool OwnsTileMap() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTileMapComponent">();
	}
	static class UPaperTileMapComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTileMapComponent>();
	}
};
static_assert(alignof(UPaperTileMapComponent) == 0x000010, "Wrong alignment on UPaperTileMapComponent");
static_assert(sizeof(UPaperTileMapComponent) == 0x0005F0, "Wrong size on UPaperTileMapComponent");
static_assert(offsetof(UPaperTileMapComponent, MapWidth) == 0x0005A0, "Member 'UPaperTileMapComponent::MapWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, MapHeight) == 0x0005A4, "Member 'UPaperTileMapComponent::MapHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, TileWidth) == 0x0005A8, "Member 'UPaperTileMapComponent::TileWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, TileHeight) == 0x0005AC, "Member 'UPaperTileMapComponent::TileHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, DefaultLayerTileSet) == 0x0005B0, "Member 'UPaperTileMapComponent::DefaultLayerTileSet' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, Material) == 0x0005B8, "Member 'UPaperTileMapComponent::Material' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, TileLayers) == 0x0005C0, "Member 'UPaperTileMapComponent::TileLayers' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, TileMapColor) == 0x0005D0, "Member 'UPaperTileMapComponent::TileMapColor' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, UseSingleLayerIndex) == 0x0005E0, "Member 'UPaperTileMapComponent::UseSingleLayerIndex' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, bUseSingleLayer) == 0x0005E4, "Member 'UPaperTileMapComponent::bUseSingleLayer' has a wrong offset!");
static_assert(offsetof(UPaperTileMapComponent, TileMap) == 0x0005E8, "Member 'UPaperTileMapComponent::TileMap' has a wrong offset!");

class UPaperTileSet final : public UObject
{
public:
	struct FIntPoint                              TileSize;
	class UTexture2D*                             TileSheet;
	TArray<class UTexture*>                       AdditionalSourceTextures;
	struct FIntMargin                             BorderMargin;
	struct FIntPoint                              PerTileSpacing;
	struct FIntPoint                              DrawingOffset;
	int32                                         WidthInTiles;
	int32                                         HeightInTiles;
	int32                                         AllocatedWidth;
	int32                                         AllocatedHeight;
	TArray<struct FPaperTileMetadata>             PerTileData;
	TArray<struct FPaperTileSetTerrain>           Terrains;
	int32                                         TileWidth;
	int32                                         TileHeight;
	int32                                         Margin;
	int32                                         Spacing;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTileSet">();
	}
	static class UPaperTileSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTileSet>();
	}
};
static_assert(alignof(UPaperTileSet) == 0x000008, "Wrong alignment on UPaperTileSet");
static_assert(sizeof(UPaperTileSet) == 0x0000A8, "Wrong size on UPaperTileSet");
static_assert(offsetof(UPaperTileSet, TileSize) == 0x000028, "Member 'UPaperTileSet::TileSize' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, TileSheet) == 0x000030, "Member 'UPaperTileSet::TileSheet' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, AdditionalSourceTextures) == 0x000038, "Member 'UPaperTileSet::AdditionalSourceTextures' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, BorderMargin) == 0x000048, "Member 'UPaperTileSet::BorderMargin' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, PerTileSpacing) == 0x000058, "Member 'UPaperTileSet::PerTileSpacing' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, DrawingOffset) == 0x000060, "Member 'UPaperTileSet::DrawingOffset' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, WidthInTiles) == 0x000068, "Member 'UPaperTileSet::WidthInTiles' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, HeightInTiles) == 0x00006C, "Member 'UPaperTileSet::HeightInTiles' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, AllocatedWidth) == 0x000070, "Member 'UPaperTileSet::AllocatedWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, AllocatedHeight) == 0x000074, "Member 'UPaperTileSet::AllocatedHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, PerTileData) == 0x000078, "Member 'UPaperTileSet::PerTileData' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, Terrains) == 0x000088, "Member 'UPaperTileSet::Terrains' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, TileWidth) == 0x000098, "Member 'UPaperTileSet::TileWidth' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, TileHeight) == 0x00009C, "Member 'UPaperTileSet::TileHeight' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, Margin) == 0x0000A0, "Member 'UPaperTileSet::Margin' has a wrong offset!");
static_assert(offsetof(UPaperTileSet, Spacing) == 0x0000A4, "Member 'UPaperTileSet::Spacing' has a wrong offset!");

class UMaterialExpressionSpriteTextureSampler final : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                          bSampleAdditionalTextures;
	uint8                                         Pad_239[0x3];
	int32                                         AdditionalSlotIndex;
	class FText                                   SlotDisplayName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionSpriteTextureSampler">();
	}
	static class UMaterialExpressionSpriteTextureSampler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSpriteTextureSampler>();
	}
};
static_assert(alignof(UMaterialExpressionSpriteTextureSampler) == 0x000008, "Wrong alignment on UMaterialExpressionSpriteTextureSampler");
static_assert(sizeof(UMaterialExpressionSpriteTextureSampler) == 0x000258, "Wrong size on UMaterialExpressionSpriteTextureSampler");
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, bSampleAdditionalTextures) == 0x000238, "Member 'UMaterialExpressionSpriteTextureSampler::bSampleAdditionalTextures' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, AdditionalSlotIndex) == 0x00023C, "Member 'UMaterialExpressionSpriteTextureSampler::AdditionalSlotIndex' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, SlotDisplayName) == 0x000240, "Member 'UMaterialExpressionSpriteTextureSampler::SlotDisplayName' has a wrong offset!");

class APaperTerrainActor final : public AActor
{
public:
	class USceneComponent*                        DummyRoot;
	class UPaperTerrainSplineComponent*           SplineComponent;
	class UPaperTerrainComponent*                 RenderComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTerrainActor">();
	}
	static class APaperTerrainActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperTerrainActor>();
	}
};
static_assert(alignof(APaperTerrainActor) == 0x000008, "Wrong alignment on APaperTerrainActor");
static_assert(sizeof(APaperTerrainActor) == 0x0002A0, "Wrong size on APaperTerrainActor");
static_assert(offsetof(APaperTerrainActor, DummyRoot) == 0x000288, "Member 'APaperTerrainActor::DummyRoot' has a wrong offset!");
static_assert(offsetof(APaperTerrainActor, SplineComponent) == 0x000290, "Member 'APaperTerrainActor::SplineComponent' has a wrong offset!");
static_assert(offsetof(APaperTerrainActor, RenderComponent) == 0x000298, "Member 'APaperTerrainActor::RenderComponent' has a wrong offset!");

class UPaperTerrainComponent final : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                  TerrainMaterial;
	bool                                          bClosedSpline;
	bool                                          bFilledSpline;
	uint8                                         Pad_572[0x6];
	class UPaperTerrainSplineComponent*           AssociatedSpline;
	int32                                         RandomSeed;
	float                                         SegmentOverlapAmount;
	struct FLinearColor                           TerrainColor;
	int32                                         ReparamStepsPerSegment;
	ESpriteCollisionMode                          SpriteCollisionDomain;
	uint8                                         Pad_59D[0x3];
	float                                         CollisionThickness;
	uint8                                         Pad_5A4[0x4];
	class UBodySetup*                             CachedBodySetup;
	uint8                                         Pad_5B0[0x10];

public:
	void SetTerrainColor(const struct FLinearColor& NewColor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTerrainComponent">();
	}
	static class UPaperTerrainComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTerrainComponent>();
	}
};
static_assert(alignof(UPaperTerrainComponent) == 0x000010, "Wrong alignment on UPaperTerrainComponent");
static_assert(sizeof(UPaperTerrainComponent) == 0x0005C0, "Wrong size on UPaperTerrainComponent");
static_assert(offsetof(UPaperTerrainComponent, TerrainMaterial) == 0x000568, "Member 'UPaperTerrainComponent::TerrainMaterial' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, bClosedSpline) == 0x000570, "Member 'UPaperTerrainComponent::bClosedSpline' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, bFilledSpline) == 0x000571, "Member 'UPaperTerrainComponent::bFilledSpline' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, AssociatedSpline) == 0x000578, "Member 'UPaperTerrainComponent::AssociatedSpline' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, RandomSeed) == 0x000580, "Member 'UPaperTerrainComponent::RandomSeed' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, SegmentOverlapAmount) == 0x000584, "Member 'UPaperTerrainComponent::SegmentOverlapAmount' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, TerrainColor) == 0x000588, "Member 'UPaperTerrainComponent::TerrainColor' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, ReparamStepsPerSegment) == 0x000598, "Member 'UPaperTerrainComponent::ReparamStepsPerSegment' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, SpriteCollisionDomain) == 0x00059C, "Member 'UPaperTerrainComponent::SpriteCollisionDomain' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, CollisionThickness) == 0x0005A0, "Member 'UPaperTerrainComponent::CollisionThickness' has a wrong offset!");
static_assert(offsetof(UPaperTerrainComponent, CachedBodySetup) == 0x0005A8, "Member 'UPaperTerrainComponent::CachedBodySetup' has a wrong offset!");

class UPaperTerrainMaterial final : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>      Rules;
	class UPaperSprite*                           InteriorFill;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTerrainMaterial">();
	}
	static class UPaperTerrainMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTerrainMaterial>();
	}
};
static_assert(alignof(UPaperTerrainMaterial) == 0x000008, "Wrong alignment on UPaperTerrainMaterial");
static_assert(sizeof(UPaperTerrainMaterial) == 0x000048, "Wrong size on UPaperTerrainMaterial");
static_assert(offsetof(UPaperTerrainMaterial, Rules) == 0x000030, "Member 'UPaperTerrainMaterial::Rules' has a wrong offset!");
static_assert(offsetof(UPaperTerrainMaterial, InteriorFill) == 0x000040, "Member 'UPaperTerrainMaterial::InteriorFill' has a wrong offset!");

class UPaperTerrainSplineComponent final : public USplineComponent
{
public:
	uint8                                         Pad_668[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperTerrainSplineComponent">();
	}
	static class UPaperTerrainSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperTerrainSplineComponent>();
	}
};
static_assert(alignof(UPaperTerrainSplineComponent) == 0x000010, "Wrong alignment on UPaperTerrainSplineComponent");
static_assert(sizeof(UPaperTerrainSplineComponent) == 0x000680, "Wrong size on UPaperTerrainSplineComponent");

class UTileMapBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BreakTile(const struct FPaperTileInfo& Tile, int32* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
	static struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	static class FName GetTileUserData(const struct FPaperTileInfo& Tile);
	static struct FPaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TileMapBlueprintLibrary">();
	}
	static class UTileMapBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTileMapBlueprintLibrary>();
	}
};
static_assert(alignof(UTileMapBlueprintLibrary) == 0x000008, "Wrong alignment on UTileMapBlueprintLibrary");
static_assert(sizeof(UTileMapBlueprintLibrary) == 0x000028, "Wrong size on UTileMapBlueprintLibrary");

}
