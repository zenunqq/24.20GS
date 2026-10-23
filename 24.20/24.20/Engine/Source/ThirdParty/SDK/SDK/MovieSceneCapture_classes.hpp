#pragma once

#include "Basic.hpp"

#include "MovieSceneCapture_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ImageWriteQueue_structs.hpp"

namespace SDK
{

class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	EMovieSceneCaptureProtocolState               State;
	uint8                                         Pad_51[0x7];

public:
	EMovieSceneCaptureProtocolState GetState() const;
	bool IsCapturing() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureProtocolBase">();
	}
	static class UMovieSceneCaptureProtocolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureProtocolBase>();
	}
};
static_assert(alignof(UMovieSceneCaptureProtocolBase) == 0x000008, "Wrong alignment on UMovieSceneCaptureProtocolBase");
static_assert(sizeof(UMovieSceneCaptureProtocolBase) == 0x000058, "Wrong size on UMovieSceneCaptureProtocolBase");
static_assert(offsetof(UMovieSceneCaptureProtocolBase, State) == 0x000050, "Member 'UMovieSceneCaptureProtocolBase::State' has a wrong offset!");

class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAudioCaptureProtocolBase">();
	}
	static class UMovieSceneAudioCaptureProtocolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAudioCaptureProtocolBase>();
	}
};
static_assert(alignof(UMovieSceneAudioCaptureProtocolBase) == 0x000008, "Wrong alignment on UMovieSceneAudioCaptureProtocolBase");
static_assert(sizeof(UMovieSceneAudioCaptureProtocolBase) == 0x000058, "Wrong size on UMovieSceneAudioCaptureProtocolBase");

class UNullAudioCaptureProtocol final : public UMovieSceneAudioCaptureProtocolBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NullAudioCaptureProtocol">();
	}
	static class UNullAudioCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNullAudioCaptureProtocol>();
	}
};
static_assert(alignof(UNullAudioCaptureProtocol) == 0x000008, "Wrong alignment on UNullAudioCaptureProtocol");
static_assert(sizeof(UNullAudioCaptureProtocol) == 0x000058, "Wrong size on UNullAudioCaptureProtocol");

class UMasterAudioSubmixCaptureProtocol final : public UMovieSceneAudioCaptureProtocolBase
{
public:
	class FString                                 Filename;
	uint8                                         Pad_68[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MasterAudioSubmixCaptureProtocol">();
	}
	static class UMasterAudioSubmixCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMasterAudioSubmixCaptureProtocol>();
	}
};
static_assert(alignof(UMasterAudioSubmixCaptureProtocol) == 0x000008, "Wrong alignment on UMasterAudioSubmixCaptureProtocol");
static_assert(sizeof(UMasterAudioSubmixCaptureProtocol) == 0x000090, "Wrong size on UMasterAudioSubmixCaptureProtocol");
static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, Filename) == 0x000058, "Member 'UMasterAudioSubmixCaptureProtocol::Filename' has a wrong offset!");

class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneImageCaptureProtocolBase">();
	}
	static class UMovieSceneImageCaptureProtocolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneImageCaptureProtocolBase>();
	}
};
static_assert(alignof(UMovieSceneImageCaptureProtocolBase) == 0x000008, "Wrong alignment on UMovieSceneImageCaptureProtocolBase");
static_assert(sizeof(UMovieSceneImageCaptureProtocolBase) == 0x000058, "Wrong size on UMovieSceneImageCaptureProtocolBase");

class UCompositionGraphCaptureProtocol final : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses         IncludeRenderPasses;
	bool                                          bCaptureFramesInHDR;
	uint8                                         Pad_69[0x3];
	int32                                         HDRCompressionQuality;
	EHDRCaptureGamut                              CaptureGamut;
	uint8                                         Pad_71[0x7];
	struct FSoftObjectPath                        PostProcessingMaterial;
	bool                                          bDisableScreenPercentage;
	uint8                                         Pad_91[0x7];
	class UMaterialInterface*                     PostProcessingMaterialPtr;
	uint8                                         Pad_A0[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositionGraphCaptureProtocol">();
	}
	static class UCompositionGraphCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositionGraphCaptureProtocol>();
	}
};
static_assert(alignof(UCompositionGraphCaptureProtocol) == 0x000008, "Wrong alignment on UCompositionGraphCaptureProtocol");
static_assert(sizeof(UCompositionGraphCaptureProtocol) == 0x0000C0, "Wrong size on UCompositionGraphCaptureProtocol");
static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 0x000058, "Member 'UCompositionGraphCaptureProtocol::IncludeRenderPasses' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, bCaptureFramesInHDR) == 0x000068, "Member 'UCompositionGraphCaptureProtocol::bCaptureFramesInHDR' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, HDRCompressionQuality) == 0x00006C, "Member 'UCompositionGraphCaptureProtocol::HDRCompressionQuality' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, CaptureGamut) == 0x000070, "Member 'UCompositionGraphCaptureProtocol::CaptureGamut' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 0x000078, "Member 'UCompositionGraphCaptureProtocol::PostProcessingMaterial' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, bDisableScreenPercentage) == 0x000090, "Member 'UCompositionGraphCaptureProtocol::bDisableScreenPercentage' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 0x000098, "Member 'UCompositionGraphCaptureProtocol::PostProcessingMaterialPtr' has a wrong offset!");

class IMovieSceneCaptureInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureInterface">();
	}
	static class IMovieSceneCaptureInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneCaptureInterface>();
	}
};
static_assert(alignof(IMovieSceneCaptureInterface) == 0x000008, "Wrong alignment on IMovieSceneCaptureInterface");
static_assert(sizeof(IMovieSceneCaptureInterface) == 0x000028, "Wrong size on IMovieSceneCaptureInterface");

class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	uint8                                         Pad_58[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FrameGrabberProtocol">();
	}
	static class UFrameGrabberProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrameGrabberProtocol>();
	}
};
static_assert(alignof(UFrameGrabberProtocol) == 0x000008, "Wrong alignment on UFrameGrabberProtocol");
static_assert(sizeof(UFrameGrabberProtocol) == 0x000068, "Wrong size on UFrameGrabberProtocol");

class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	uint8                                         Pad_68[0x70];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol">();
	}
	static class UImageSequenceProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol>();
	}
};
static_assert(alignof(UImageSequenceProtocol) == 0x000008, "Wrong alignment on UImageSequenceProtocol");
static_assert(sizeof(UImageSequenceProtocol) == 0x0000D8, "Wrong size on UImageSequenceProtocol");

class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int32                                         CompressionQuality;
	uint8                                         Pad_DC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompressedImageSequenceProtocol">();
	}
	static class UCompressedImageSequenceProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompressedImageSequenceProtocol>();
	}
};
static_assert(alignof(UCompressedImageSequenceProtocol) == 0x000008, "Wrong alignment on UCompressedImageSequenceProtocol");
static_assert(sizeof(UCompressedImageSequenceProtocol) == 0x0000E0, "Wrong size on UCompressedImageSequenceProtocol");
static_assert(offsetof(UCompressedImageSequenceProtocol, CompressionQuality) == 0x0000D8, "Member 'UCompressedImageSequenceProtocol::CompressionQuality' has a wrong offset!");

class UImageSequenceProtocol_BMP final : public UImageSequenceProtocol
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_BMP">();
	}
	static class UImageSequenceProtocol_BMP* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_BMP>();
	}
};
static_assert(alignof(UImageSequenceProtocol_BMP) == 0x000008, "Wrong alignment on UImageSequenceProtocol_BMP");
static_assert(sizeof(UImageSequenceProtocol_BMP) == 0x0000D8, "Wrong size on UImageSequenceProtocol_BMP");

class UImageSequenceProtocol_PNG final : public UCompressedImageSequenceProtocol
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_PNG">();
	}
	static class UImageSequenceProtocol_PNG* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_PNG>();
	}
};
static_assert(alignof(UImageSequenceProtocol_PNG) == 0x000008, "Wrong alignment on UImageSequenceProtocol_PNG");
static_assert(sizeof(UImageSequenceProtocol_PNG) == 0x0000E0, "Wrong size on UImageSequenceProtocol_PNG");

class UImageSequenceProtocol_JPG final : public UCompressedImageSequenceProtocol
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_JPG">();
	}
	static class UImageSequenceProtocol_JPG* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_JPG>();
	}
};
static_assert(alignof(UImageSequenceProtocol_JPG) == 0x000008, "Wrong alignment on UImageSequenceProtocol_JPG");
static_assert(sizeof(UImageSequenceProtocol_JPG) == 0x0000E0, "Wrong size on UImageSequenceProtocol_JPG");

class UImageSequenceProtocol_EXR final : public UImageSequenceProtocol
{
public:
	bool                                          bCompressed;
	EHDRCaptureGamut                              CaptureGamut;
	uint8                                         Pad_DA[0xE];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_EXR">();
	}
	static class UImageSequenceProtocol_EXR* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_EXR>();
	}
};
static_assert(alignof(UImageSequenceProtocol_EXR) == 0x000008, "Wrong alignment on UImageSequenceProtocol_EXR");
static_assert(sizeof(UImageSequenceProtocol_EXR) == 0x0000E8, "Wrong size on UImageSequenceProtocol_EXR");
static_assert(offsetof(UImageSequenceProtocol_EXR, bCompressed) == 0x0000D8, "Member 'UImageSequenceProtocol_EXR::bCompressed' has a wrong offset!");
static_assert(offsetof(UImageSequenceProtocol_EXR, CaptureGamut) == 0x0000D9, "Member 'UImageSequenceProtocol_EXR::CaptureGamut' has a wrong offset!");

class UMovieSceneCapture : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	struct FSoftClassPath                         ImageCaptureProtocolType;
	struct FSoftClassPath                         AudioCaptureProtocolType;
	class UMovieSceneImageCaptureProtocolBase*    ImageCaptureProtocol;
	class UMovieSceneAudioCaptureProtocolBase*    AudioCaptureProtocol;
	struct FMovieSceneCaptureSettings             Settings;
	bool                                          bUseSeparateProcess;
	bool                                          bCloseEditorWhenCaptureStarts;
	uint8                                         Pad_EA[0x6];
	class FString                                 AdditionalCommandLineArguments;
	class FString                                 InheritedCommandLineArguments;
	uint8                                         Pad_110[0x118];

public:
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	void SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
	void SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCapture">();
	}
	static class UMovieSceneCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCapture>();
	}
};
static_assert(alignof(UMovieSceneCapture) == 0x000008, "Wrong alignment on UMovieSceneCapture");
static_assert(sizeof(UMovieSceneCapture) == 0x000228, "Wrong size on UMovieSceneCapture");
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 0x000038, "Member 'UMovieSceneCapture::ImageCaptureProtocolType' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 0x000050, "Member 'UMovieSceneCapture::AudioCaptureProtocolType' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 0x000068, "Member 'UMovieSceneCapture::ImageCaptureProtocol' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 0x000070, "Member 'UMovieSceneCapture::AudioCaptureProtocol' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x000078, "Member 'UMovieSceneCapture::Settings' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, bUseSeparateProcess) == 0x0000E8, "Member 'UMovieSceneCapture::bUseSeparateProcess' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, bCloseEditorWhenCaptureStarts) == 0x0000E9, "Member 'UMovieSceneCapture::bCloseEditorWhenCaptureStarts' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x0000F0, "Member 'UMovieSceneCapture::AdditionalCommandLineArguments' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x000100, "Member 'UMovieSceneCapture::InheritedCommandLineArguments' has a wrong offset!");

class ULevelCapture final : public UMovieSceneCapture
{
public:
	bool                                          bAutoStartCapture;
	uint8                                         Pad_229[0xB];
	struct FGuid                                  PrerequisiteActorId;
	uint8                                         Pad_244[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelCapture">();
	}
	static class ULevelCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelCapture>();
	}
};
static_assert(alignof(ULevelCapture) == 0x000008, "Wrong alignment on ULevelCapture");
static_assert(sizeof(ULevelCapture) == 0x000248, "Wrong size on ULevelCapture");
static_assert(offsetof(ULevelCapture, bAutoStartCapture) == 0x000228, "Member 'ULevelCapture::bAutoStartCapture' has a wrong offset!");
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x000234, "Member 'ULevelCapture::PrerequisiteActorId' has a wrong offset!");

class UMovieSceneCaptureEnvironment final : public UObject
{
public:
	static class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
	static class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
	static float GetCaptureElapsedTime();
	static int32 GetCaptureFrameNumber();
	static bool IsCaptureInProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureEnvironment">();
	}
	static class UMovieSceneCaptureEnvironment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureEnvironment>();
	}
};
static_assert(alignof(UMovieSceneCaptureEnvironment) == 0x000008, "Wrong alignment on UMovieSceneCaptureEnvironment");
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x000028, "Wrong size on UMovieSceneCaptureEnvironment");

class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                 World;
	uint8                                         Pad_60[0x78];

public:
	void OnBeginFinalize();
	void OnCaptureFrame();
	void OnFinalize();
	void OnPauseCapture();
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
	void OnPreTick();
	bool OnSetup();
	void OnStartCapture();
	void OnTick();
	void OnWarmUp();
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);
	void StopCapturingFinalPixels();

	class FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics) const;
	struct FFrameMetrics GetCurrentFrameMetrics() const;
	bool OnCanFinalize() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UserDefinedCaptureProtocol">();
	}
	static class UUserDefinedCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserDefinedCaptureProtocol>();
	}
};
static_assert(alignof(UUserDefinedCaptureProtocol) == 0x000008, "Wrong alignment on UUserDefinedCaptureProtocol");
static_assert(sizeof(UUserDefinedCaptureProtocol) == 0x0000D8, "Wrong size on UUserDefinedCaptureProtocol");
static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 0x000058, "Member 'UUserDefinedCaptureProtocol::World' has a wrong offset!");

class UUserDefinedImageCaptureProtocol final : public UUserDefinedCaptureProtocol
{
public:
	EDesiredImageFormat                           Format;
	bool                                          bEnableCompression;
	uint8                                         Pad_DA[0x2];
	int32                                         CompressionQuality;

public:
	class FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID);
	class FString GenerateFilenameForCurrentFrame();
	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UserDefinedImageCaptureProtocol">();
	}
	static class UUserDefinedImageCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserDefinedImageCaptureProtocol>();
	}
};
static_assert(alignof(UUserDefinedImageCaptureProtocol) == 0x000008, "Wrong alignment on UUserDefinedImageCaptureProtocol");
static_assert(sizeof(UUserDefinedImageCaptureProtocol) == 0x0000E0, "Wrong size on UUserDefinedImageCaptureProtocol");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, Format) == 0x0000D8, "Member 'UUserDefinedImageCaptureProtocol::Format' has a wrong offset!");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, bEnableCompression) == 0x0000D9, "Member 'UUserDefinedImageCaptureProtocol::bEnableCompression' has a wrong offset!");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, CompressionQuality) == 0x0000DC, "Member 'UUserDefinedImageCaptureProtocol::CompressionQuality' has a wrong offset!");

class UVideoCaptureProtocol final : public UFrameGrabberProtocol
{
public:
	bool                                          bUseCompression;
	uint8                                         Pad_69[0x3];
	float                                         CompressionQuality;
	uint8                                         Pad_70[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VideoCaptureProtocol">();
	}
	static class UVideoCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoCaptureProtocol>();
	}
};
static_assert(alignof(UVideoCaptureProtocol) == 0x000008, "Wrong alignment on UVideoCaptureProtocol");
static_assert(sizeof(UVideoCaptureProtocol) == 0x000080, "Wrong size on UVideoCaptureProtocol");
static_assert(offsetof(UVideoCaptureProtocol, bUseCompression) == 0x000068, "Member 'UVideoCaptureProtocol::bUseCompression' has a wrong offset!");
static_assert(offsetof(UVideoCaptureProtocol, CompressionQuality) == 0x00006C, "Member 'UVideoCaptureProtocol::CompressionQuality' has a wrong offset!");

}
