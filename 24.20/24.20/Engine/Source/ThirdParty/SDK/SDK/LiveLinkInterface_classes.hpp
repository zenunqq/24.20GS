#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "LiveLinkInterface_structs.hpp"

namespace SDK
{

class ULiveLinkController final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkController">();
	}
	static class ULiveLinkController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkController>();
	}
};
static_assert(alignof(ULiveLinkController) == 0x000008, "Wrong alignment on ULiveLinkController");
static_assert(sizeof(ULiveLinkController) == 0x000028, "Wrong size on ULiveLinkController");

class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkFrameInterpolationProcessor">();
	}
	static class ULiveLinkFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkFrameInterpolationProcessor) == 0x000028, "Wrong size on ULiveLinkFrameInterpolationProcessor");

class ULiveLinkFramePreProcessor : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkFramePreProcessor">();
	}
	static class ULiveLinkFramePreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkFramePreProcessor>();
	}
};
static_assert(alignof(ULiveLinkFramePreProcessor) == 0x000008, "Wrong alignment on ULiveLinkFramePreProcessor");
static_assert(sizeof(ULiveLinkFramePreProcessor) == 0x000028, "Wrong size on ULiveLinkFramePreProcessor");

class ULiveLinkRole : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRole">();
	}
	static class ULiveLinkRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRole>();
	}
};
static_assert(alignof(ULiveLinkRole) == 0x000008, "Wrong alignment on ULiveLinkRole");
static_assert(sizeof(ULiveLinkRole) == 0x000028, "Wrong size on ULiveLinkRole");

class ULiveLinkSourceSettings : public UObject
{
public:
	ELiveLinkSourceMode                           Mode;
	uint8                                         Pad_29[0x7];
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;
	class FString                                 ConnectionString;
	TSubclassOf<class ULiveLinkSourceFactory>     Factory;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSourceSettings">();
	}
	static class ULiveLinkSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkSourceSettings");
static_assert(sizeof(ULiveLinkSourceSettings) == 0x0000A8, "Wrong size on ULiveLinkSourceSettings");
static_assert(offsetof(ULiveLinkSourceSettings, Mode) == 0x000028, "Member 'ULiveLinkSourceSettings::Mode' has a wrong offset!");
static_assert(offsetof(ULiveLinkSourceSettings, BufferSettings) == 0x000030, "Member 'ULiveLinkSourceSettings::BufferSettings' has a wrong offset!");
static_assert(offsetof(ULiveLinkSourceSettings, ConnectionString) == 0x000090, "Member 'ULiveLinkSourceSettings::ConnectionString' has a wrong offset!");
static_assert(offsetof(ULiveLinkSourceSettings, Factory) == 0x0000A0, "Member 'ULiveLinkSourceSettings::Factory' has a wrong offset!");

class ULiveLinkCurveRemapSettings final : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings       CurveConversionSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkCurveRemapSettings">();
	}
	static class ULiveLinkCurveRemapSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkCurveRemapSettings>();
	}
};
static_assert(alignof(ULiveLinkCurveRemapSettings) == 0x000008, "Wrong alignment on ULiveLinkCurveRemapSettings");
static_assert(sizeof(ULiveLinkCurveRemapSettings) == 0x0000F8, "Wrong size on ULiveLinkCurveRemapSettings");
static_assert(offsetof(ULiveLinkCurveRemapSettings, CurveConversionSettings) == 0x0000A8, "Member 'ULiveLinkCurveRemapSettings::CurveConversionSettings' has a wrong offset!");

class ULiveLinkFrameTranslator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkFrameTranslator">();
	}
	static class ULiveLinkFrameTranslator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkFrameTranslator>();
	}
};
static_assert(alignof(ULiveLinkFrameTranslator) == 0x000008, "Wrong alignment on ULiveLinkFrameTranslator");
static_assert(sizeof(ULiveLinkFrameTranslator) == 0x000028, "Wrong size on ULiveLinkFrameTranslator");

class ULiveLinkSourceFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSourceFactory">();
	}
	static class ULiveLinkSourceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSourceFactory>();
	}
};
static_assert(alignof(ULiveLinkSourceFactory) == 0x000008, "Wrong alignment on ULiveLinkSourceFactory");
static_assert(sizeof(ULiveLinkSourceFactory) == 0x000028, "Wrong size on ULiveLinkSourceFactory");

class ULiveLinkSubjectSettings final : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>     PreProcessors;
	class ULiveLinkFrameInterpolationProcessor*   InterpolationProcessor;
	TArray<class ULiveLinkFrameTranslator*>       Translators;
	TSubclassOf<class ULiveLinkRole>              Role;
	struct FFrameRate                             FrameRate;
	bool                                          bRebroadcastSubject;
	uint8                                         Pad_61[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSubjectSettings">();
	}
	static class ULiveLinkSubjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSubjectSettings>();
	}
};
static_assert(alignof(ULiveLinkSubjectSettings) == 0x000008, "Wrong alignment on ULiveLinkSubjectSettings");
static_assert(sizeof(ULiveLinkSubjectSettings) == 0x000068, "Wrong size on ULiveLinkSubjectSettings");
static_assert(offsetof(ULiveLinkSubjectSettings, PreProcessors) == 0x000028, "Member 'ULiveLinkSubjectSettings::PreProcessors' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, InterpolationProcessor) == 0x000038, "Member 'ULiveLinkSubjectSettings::InterpolationProcessor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, Translators) == 0x000040, "Member 'ULiveLinkSubjectSettings::Translators' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, Role) == 0x000050, "Member 'ULiveLinkSubjectSettings::Role' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, FrameRate) == 0x000058, "Member 'ULiveLinkSubjectSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, bRebroadcastSubject) == 0x000060, "Member 'ULiveLinkSubjectSettings::bRebroadcastSubject' has a wrong offset!");

class ULiveLinkVirtualSubject : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TSubclassOf<class ULiveLinkRole>              Role;
	TArray<struct FLiveLinkSubjectName>           Subjects;
	TArray<class ULiveLinkFrameTranslator*>       FrameTranslators;
	bool                                          bRebroadcastSubject;
	uint8                                         Pad_59[0xFF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkVirtualSubject">();
	}
	static class ULiveLinkVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkVirtualSubject");
static_assert(sizeof(ULiveLinkVirtualSubject) == 0x000158, "Wrong size on ULiveLinkVirtualSubject");
static_assert(offsetof(ULiveLinkVirtualSubject, Role) == 0x000030, "Member 'ULiveLinkVirtualSubject::Role' has a wrong offset!");
static_assert(offsetof(ULiveLinkVirtualSubject, Subjects) == 0x000038, "Member 'ULiveLinkVirtualSubject::Subjects' has a wrong offset!");
static_assert(offsetof(ULiveLinkVirtualSubject, FrameTranslators) == 0x000048, "Member 'ULiveLinkVirtualSubject::FrameTranslators' has a wrong offset!");
static_assert(offsetof(ULiveLinkVirtualSubject, bRebroadcastSubject) == 0x000058, "Member 'ULiveLinkVirtualSubject::bRebroadcastSubject' has a wrong offset!");

class ULiveLinkBasicRole : public ULiveLinkRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBasicRole">();
	}
	static class ULiveLinkBasicRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBasicRole>();
	}
};
static_assert(alignof(ULiveLinkBasicRole) == 0x000008, "Wrong alignment on ULiveLinkBasicRole");
static_assert(sizeof(ULiveLinkBasicRole) == 0x000028, "Wrong size on ULiveLinkBasicRole");

class ULiveLinkAnimationRole final : public ULiveLinkBasicRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationRole">();
	}
	static class ULiveLinkAnimationRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationRole>();
	}
};
static_assert(alignof(ULiveLinkAnimationRole) == 0x000008, "Wrong alignment on ULiveLinkAnimationRole");
static_assert(sizeof(ULiveLinkAnimationRole) == 0x000028, "Wrong size on ULiveLinkAnimationRole");

class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformRole">();
	}
	static class ULiveLinkTransformRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformRole>();
	}
};
static_assert(alignof(ULiveLinkTransformRole) == 0x000008, "Wrong alignment on ULiveLinkTransformRole");
static_assert(sizeof(ULiveLinkTransformRole) == 0x000028, "Wrong size on ULiveLinkTransformRole");

class ULiveLinkCameraRole final : public ULiveLinkTransformRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkCameraRole">();
	}
	static class ULiveLinkCameraRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkCameraRole>();
	}
};
static_assert(alignof(ULiveLinkCameraRole) == 0x000008, "Wrong alignment on ULiveLinkCameraRole");
static_assert(sizeof(ULiveLinkCameraRole) == 0x000028, "Wrong size on ULiveLinkCameraRole");

class ULiveLinkLightRole final : public ULiveLinkTransformRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkLightRole">();
	}
	static class ULiveLinkLightRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkLightRole>();
	}
};
static_assert(alignof(ULiveLinkLightRole) == 0x000008, "Wrong alignment on ULiveLinkLightRole");
static_assert(sizeof(ULiveLinkLightRole) == 0x000028, "Wrong size on ULiveLinkLightRole");

}
