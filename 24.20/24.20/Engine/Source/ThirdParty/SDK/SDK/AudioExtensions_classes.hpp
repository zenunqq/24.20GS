#pragma once

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class USpatializationPluginSourceSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpatializationPluginSourceSettingsBase">();
	}
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatializationPluginSourceSettingsBase>();
	}
};
static_assert(alignof(USpatializationPluginSourceSettingsBase) == 0x000008, "Wrong alignment on USpatializationPluginSourceSettingsBase");
static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x000028, "Wrong size on USpatializationPluginSourceSettingsBase");

class USourceDataOverridePluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceDataOverridePluginSourceSettingsBase">();
	}
	static class USourceDataOverridePluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceDataOverridePluginSourceSettingsBase>();
	}
};
static_assert(alignof(USourceDataOverridePluginSourceSettingsBase) == 0x000008, "Wrong alignment on USourceDataOverridePluginSourceSettingsBase");
static_assert(sizeof(USourceDataOverridePluginSourceSettingsBase) == 0x000028, "Wrong size on USourceDataOverridePluginSourceSettingsBase");

class UOcclusionPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OcclusionPluginSourceSettingsBase">();
	}
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOcclusionPluginSourceSettingsBase>();
	}
};
static_assert(alignof(UOcclusionPluginSourceSettingsBase) == 0x000008, "Wrong alignment on UOcclusionPluginSourceSettingsBase");
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x000028, "Wrong size on UOcclusionPluginSourceSettingsBase");

class UReverbPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverbPluginSourceSettingsBase">();
	}
	static class UReverbPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbPluginSourceSettingsBase>();
	}
};
static_assert(alignof(UReverbPluginSourceSettingsBase) == 0x000008, "Wrong alignment on UReverbPluginSourceSettingsBase");
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x000028, "Wrong size on UReverbPluginSourceSettingsBase");

class IAudioParameterControllerInterface : public IInterface
{
public:
	void ResetParameters();
	void SetBoolArrayParameter(class FName InName, const TArray<bool>& InValue);
	void SetBoolParameter(class FName InName, bool InBool);
	void SetFloatArrayParameter(class FName InName, const TArray<float>& InValue);
	void SetFloatParameter(class FName InName, float InFloat);
	void SetIntArrayParameter(class FName InName, const TArray<int32>& InValue);
	void SetIntParameter(class FName InName, int32 inInt);
	void SetObjectArrayParameter(class FName InName, const TArray<class UObject*>& InValue);
	void SetObjectParameter(class FName InName, class UObject* InValue);
	void SetParameters_Blueprint(const TArray<struct FAudioParameter>& InParameters);
	void SetStringArrayParameter(class FName InName, const TArray<class FString>& InValue);
	void SetStringParameter(class FName InName, const class FString& InValue);
	void SetTriggerParameter(class FName InName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioParameterControllerInterface">();
	}
	static class IAudioParameterControllerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioParameterControllerInterface>();
	}
};
static_assert(alignof(IAudioParameterControllerInterface) == 0x000008, "Wrong alignment on IAudioParameterControllerInterface");
static_assert(sizeof(IAudioParameterControllerInterface) == 0x000028, "Wrong size on IAudioParameterControllerInterface");

class UAudioCodecEncoderSettings : public UObject
{
public:
	int32                                         Version;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCodecEncoderSettings">();
	}
	static class UAudioCodecEncoderSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCodecEncoderSettings>();
	}
};
static_assert(alignof(UAudioCodecEncoderSettings) == 0x000008, "Wrong alignment on UAudioCodecEncoderSettings");
static_assert(sizeof(UAudioCodecEncoderSettings) == 0x000030, "Wrong size on UAudioCodecEncoderSettings");
static_assert(offsetof(UAudioCodecEncoderSettings, Version) == 0x000028, "Member 'UAudioCodecEncoderSettings::Version' has a wrong offset!");

class UAudioEndpointSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioEndpointSettingsBase">();
	}
	static class UAudioEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioEndpointSettingsBase>();
	}
};
static_assert(alignof(UAudioEndpointSettingsBase) == 0x000008, "Wrong alignment on UAudioEndpointSettingsBase");
static_assert(sizeof(UAudioEndpointSettingsBase) == 0x000028, "Wrong size on UAudioEndpointSettingsBase");

class UDummyEndpointSettings final : public UAudioEndpointSettingsBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DummyEndpointSettings">();
	}
	static class UDummyEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDummyEndpointSettings>();
	}
};
static_assert(alignof(UDummyEndpointSettings) == 0x000008, "Wrong alignment on UDummyEndpointSettings");
static_assert(sizeof(UDummyEndpointSettings) == 0x000028, "Wrong size on UDummyEndpointSettings");

class USoundModulatorBase : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulatorBase">();
	}
	static class USoundModulatorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulatorBase>();
	}
};
static_assert(alignof(USoundModulatorBase) == 0x000008, "Wrong alignment on USoundModulatorBase");
static_assert(sizeof(USoundModulatorBase) == 0x000030, "Wrong size on USoundModulatorBase");

class USoundfieldEndpointSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEndpointSettingsBase">();
	}
	static class USoundfieldEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEndpointSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEndpointSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEndpointSettingsBase");
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x000028, "Wrong size on USoundfieldEndpointSettingsBase");

class USoundfieldEncodingSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEncodingSettingsBase">();
	}
	static class USoundfieldEncodingSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEncodingSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEncodingSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEncodingSettingsBase");
static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x000028, "Wrong size on USoundfieldEncodingSettingsBase");

class USoundfieldEffectSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectSettingsBase">();
	}
	static class USoundfieldEffectSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEffectSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEffectSettingsBase");
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x000028, "Wrong size on USoundfieldEffectSettingsBase");

class USoundfieldEffectBase final : public UObject
{
public:
	class USoundfieldEffectSettingsBase*          Settings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectBase">();
	}
	static class USoundfieldEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectBase>();
	}
};
static_assert(alignof(USoundfieldEffectBase) == 0x000008, "Wrong alignment on USoundfieldEffectBase");
static_assert(sizeof(USoundfieldEffectBase) == 0x000030, "Wrong size on USoundfieldEffectBase");
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x000028, "Member 'USoundfieldEffectBase::Settings' has a wrong offset!");

class UWaveformTransformationBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveformTransformationBase">();
	}
	static class UWaveformTransformationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveformTransformationBase>();
	}
};
static_assert(alignof(UWaveformTransformationBase) == 0x000008, "Wrong alignment on UWaveformTransformationBase");
static_assert(sizeof(UWaveformTransformationBase) == 0x000028, "Wrong size on UWaveformTransformationBase");

class UWaveformTransformationChain final : public UObject
{
public:
	TArray<class UWaveformTransformationBase*>    Transformations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveformTransformationChain">();
	}
	static class UWaveformTransformationChain* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveformTransformationChain>();
	}
};
static_assert(alignof(UWaveformTransformationChain) == 0x000008, "Wrong alignment on UWaveformTransformationChain");
static_assert(sizeof(UWaveformTransformationChain) == 0x000038, "Wrong size on UWaveformTransformationChain");
static_assert(offsetof(UWaveformTransformationChain, Transformations) == 0x000028, "Member 'UWaveformTransformationChain::Transformations' has a wrong offset!");

class UAudioPcmEncoderSettings final : public UAudioCodecEncoderSettings
{
public:
	EPcmBitDepthConversion                        BitDepthConversion;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioPcmEncoderSettings">();
	}
	static class UAudioPcmEncoderSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioPcmEncoderSettings>();
	}
};
static_assert(alignof(UAudioPcmEncoderSettings) == 0x000008, "Wrong alignment on UAudioPcmEncoderSettings");
static_assert(sizeof(UAudioPcmEncoderSettings) == 0x000038, "Wrong size on UAudioPcmEncoderSettings");
static_assert(offsetof(UAudioPcmEncoderSettings, BitDepthConversion) == 0x000030, "Member 'UAudioPcmEncoderSettings::BitDepthConversion' has a wrong offset!");

}
