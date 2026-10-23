#pragma once

#include "Basic.hpp"

#include "MediaAssets_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AMediaPlate final : public AActor
{
public:
	class UMediaPlateComponent*                   MediaPlateComponent;
	class UStaticMeshComponent*                   StaticMeshComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlate">();
	}
	static class AMediaPlate* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMediaPlate>();
	}
};
static_assert(alignof(AMediaPlate) == 0x000008, "Wrong alignment on AMediaPlate");
static_assert(sizeof(AMediaPlate) == 0x000298, "Wrong size on AMediaPlate");
static_assert(offsetof(AMediaPlate, MediaPlateComponent) == 0x000288, "Member 'AMediaPlate::MediaPlateComponent' has a wrong offset!");
static_assert(offsetof(AMediaPlate, StaticMeshComponent) == 0x000290, "Member 'AMediaPlate::StaticMeshComponent' has a wrong offset!");

class UMediaPlateAssetUserData final : public UAssetUserData
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlateAssetUserData">();
	}
	static class UMediaPlateAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlateAssetUserData>();
	}
};
static_assert(alignof(UMediaPlateAssetUserData) == 0x000008, "Wrong alignment on UMediaPlateAssetUserData");
static_assert(sizeof(UMediaPlateAssetUserData) == 0x000038, "Wrong size on UMediaPlateAssetUserData");

class UMediaPlateComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	bool                                          bPlayOnOpen;
	bool                                          bAutoPlay;
	bool                                          bEnableAudio;
	uint8                                         Pad_AB[0x1];
	float                                         StartTime;
	bool                                          bIsAspectRatioAuto;
	uint8                                         Pad_B1[0x7];
	class UMediaSoundComponent*                   SoundComponent;
	class UStaticMeshComponent*                   StaticMeshComponent;
	TArray<class UStaticMeshComponent*>           Letterboxes;
	class UMediaPlaylist*                         MediaPlaylist;
	int32                                         PlaylistIndex;
	struct FMediaSourceCacheSettings              CacheSettings;
	bool                                          bIsMediaPlatePlaying;
	uint8                                         Pad_ED[0x7];
	bool                                          bPlayOnlyWhenVisible;
	bool                                          bLoop;
	EMediaTextureVisibleMipsTiles                 VisibleMipsTilesCalculations;
	uint8                                         Pad_F7[0x1];
	float                                         MipMapBias;
	float                                         LetterboxAspectRatio;
	struct FVector2D                              MeshRange;
	class UMediaTexture*                          MediaTexture;
	class UMediaPlayer*                           MediaPlayer;
	uint8                                         Pad_120[0x28];

public:
	void Close();
	float GetLetterboxAspectRatio();
	bool GetLoop();
	class UMediaPlayer* GetMediaPlayer();
	class UMediaTexture* GetMediaTexture();
	void OnMediaEnd();
	void OnMediaOpened(const class FString& DeviceUrl);
	void Open();
	void Pause();
	void Play();
	bool Rewind();
	bool Seek(const struct FTimespan& Time);
	void SetLetterboxAspectRatio(float AspectRatio);
	void SetLoop(bool bInLoop);
	void SetMeshRange(const struct FVector2D& InMeshRange);
	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);

	struct FVector2D GetMeshRange() const;
	bool IsMediaPlatePlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlateComponent">();
	}
	static class UMediaPlateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlateComponent>();
	}
};
static_assert(alignof(UMediaPlateComponent) == 0x000008, "Wrong alignment on UMediaPlateComponent");
static_assert(sizeof(UMediaPlateComponent) == 0x000148, "Wrong size on UMediaPlateComponent");
static_assert(offsetof(UMediaPlateComponent, bPlayOnOpen) == 0x0000A8, "Member 'UMediaPlateComponent::bPlayOnOpen' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bAutoPlay) == 0x0000A9, "Member 'UMediaPlateComponent::bAutoPlay' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bEnableAudio) == 0x0000AA, "Member 'UMediaPlateComponent::bEnableAudio' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, StartTime) == 0x0000AC, "Member 'UMediaPlateComponent::StartTime' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bIsAspectRatioAuto) == 0x0000B0, "Member 'UMediaPlateComponent::bIsAspectRatioAuto' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, SoundComponent) == 0x0000B8, "Member 'UMediaPlateComponent::SoundComponent' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, StaticMeshComponent) == 0x0000C0, "Member 'UMediaPlateComponent::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, Letterboxes) == 0x0000C8, "Member 'UMediaPlateComponent::Letterboxes' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MediaPlaylist) == 0x0000D8, "Member 'UMediaPlateComponent::MediaPlaylist' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, PlaylistIndex) == 0x0000E0, "Member 'UMediaPlateComponent::PlaylistIndex' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, CacheSettings) == 0x0000E4, "Member 'UMediaPlateComponent::CacheSettings' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bIsMediaPlatePlaying) == 0x0000EC, "Member 'UMediaPlateComponent::bIsMediaPlatePlaying' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bPlayOnlyWhenVisible) == 0x0000F4, "Member 'UMediaPlateComponent::bPlayOnlyWhenVisible' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bLoop) == 0x0000F5, "Member 'UMediaPlateComponent::bLoop' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, VisibleMipsTilesCalculations) == 0x0000F6, "Member 'UMediaPlateComponent::VisibleMipsTilesCalculations' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MipMapBias) == 0x0000F8, "Member 'UMediaPlateComponent::MipMapBias' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, LetterboxAspectRatio) == 0x0000FC, "Member 'UMediaPlateComponent::LetterboxAspectRatio' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MeshRange) == 0x000100, "Member 'UMediaPlateComponent::MeshRange' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MediaTexture) == 0x000110, "Member 'UMediaPlateComponent::MediaTexture' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MediaPlayer) == 0x000118, "Member 'UMediaPlateComponent::MediaPlayer' has a wrong offset!");

}
