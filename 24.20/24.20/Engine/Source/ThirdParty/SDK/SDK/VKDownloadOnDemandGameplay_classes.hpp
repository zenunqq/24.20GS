#pragma once

#include "Basic.hpp"

#include "ModularGameplay_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UDownloadOnDemandComponent final : public UControllerComponent
{
public:
	uint8                                         Pad_A0[0x108];
	class UDownloadOnDemandPlot*                  Plot;
	TArray<class UDownloadOnDemandProject*>       UserOwnedProjects;
	TArray<class UDownloadOnDemandProjectContent*> ShelvedContents;

public:
	void HandleMnemonicsFromValkyriePaletteProviderReceived(const TArray<class FString>& Mnemonics);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandComponent">();
	}
	static class UDownloadOnDemandComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandComponent>();
	}
};
static_assert(alignof(UDownloadOnDemandComponent) == 0x000008, "Wrong alignment on UDownloadOnDemandComponent");
static_assert(sizeof(UDownloadOnDemandComponent) == 0x0001D0, "Wrong size on UDownloadOnDemandComponent");
static_assert(offsetof(UDownloadOnDemandComponent, Plot) == 0x0001A8, "Member 'UDownloadOnDemandComponent::Plot' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandComponent, UserOwnedProjects) == 0x0001B0, "Member 'UDownloadOnDemandComponent::UserOwnedProjects' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandComponent, ShelvedContents) == 0x0001C0, "Member 'UDownloadOnDemandComponent::ShelvedContents' has a wrong offset!");

class UDownloadOnDemandPlot final : public UObject
{
public:
	uint8                                         Pad_28[0x78];
	TArray<class UDownloadOnDemandProject*>       ActiveProjects;
	TArray<class UDownloadOnDemandProject*>       PendingProjects;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandPlot">();
	}
	static class UDownloadOnDemandPlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandPlot>();
	}
};
static_assert(alignof(UDownloadOnDemandPlot) == 0x000008, "Wrong alignment on UDownloadOnDemandPlot");
static_assert(sizeof(UDownloadOnDemandPlot) == 0x0000C0, "Wrong size on UDownloadOnDemandPlot");
static_assert(offsetof(UDownloadOnDemandPlot, ActiveProjects) == 0x0000A0, "Member 'UDownloadOnDemandPlot::ActiveProjects' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandPlot, PendingProjects) == 0x0000B0, "Member 'UDownloadOnDemandPlot::PendingProjects' has a wrong offset!");

class UDownloadOnDemandProject final : public UObject
{
public:
	uint8                                         Pad_28[0x90];
	class UDownloadOnDemandProjectDescriptor*     Descriptor;
	TMap<class FString, class UDownloadOnDemandProjectContent*> Contents;
	uint8                                         Pad_110[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProject">();
	}
	static class UDownloadOnDemandProject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProject>();
	}
};
static_assert(alignof(UDownloadOnDemandProject) == 0x000008, "Wrong alignment on UDownloadOnDemandProject");
static_assert(sizeof(UDownloadOnDemandProject) == 0x000130, "Wrong size on UDownloadOnDemandProject");
static_assert(offsetof(UDownloadOnDemandProject, Descriptor) == 0x0000B8, "Member 'UDownloadOnDemandProject::Descriptor' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProject, Contents) == 0x0000C0, "Member 'UDownloadOnDemandProject::Contents' has a wrong offset!");

class UDownloadOnDemandProjectContent final : public UObject
{
public:
	uint8                                         Pad_28[0x48];
	TArray<class UFortItemDefinition*>            ContentItemDefinitions;
	TArray<struct FSoftObjectPath>                ContentSoftObjectPaths;
	TArray<struct FSoftObjectPath>                LoadFailedContentObjectPaths;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectContent">();
	}
	static class UDownloadOnDemandProjectContent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectContent>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectContent) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectContent");
static_assert(sizeof(UDownloadOnDemandProjectContent) == 0x0000A0, "Wrong size on UDownloadOnDemandProjectContent");
static_assert(offsetof(UDownloadOnDemandProjectContent, ContentItemDefinitions) == 0x000070, "Member 'UDownloadOnDemandProjectContent::ContentItemDefinitions' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectContent, ContentSoftObjectPaths) == 0x000080, "Member 'UDownloadOnDemandProjectContent::ContentSoftObjectPaths' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectContent, LoadFailedContentObjectPaths) == 0x000090, "Member 'UDownloadOnDemandProjectContent::LoadFailedContentObjectPaths' has a wrong offset!");

class UDownloadOnDemandProjectDescriptor final : public UObject
{
public:
	uint8                                         Pad_28[0x48];
	class UDownloadOnDemandProjectImage*          Image;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectDescriptor">();
	}
	static class UDownloadOnDemandProjectDescriptor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectDescriptor>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectDescriptor) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectDescriptor");
static_assert(sizeof(UDownloadOnDemandProjectDescriptor) == 0x000080, "Wrong size on UDownloadOnDemandProjectDescriptor");
static_assert(offsetof(UDownloadOnDemandProjectDescriptor, Image) == 0x000070, "Member 'UDownloadOnDemandProjectDescriptor::Image' has a wrong offset!");

class UDownloadOnDemandProjectImage final : public UObject
{
public:
	uint8                                         Pad_28[0x30];
	class UTexture2DDynamic*                      PreviewTexture;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectImage">();
	}
	static class UDownloadOnDemandProjectImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectImage>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectImage) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectImage");
static_assert(sizeof(UDownloadOnDemandProjectImage) == 0x000060, "Wrong size on UDownloadOnDemandProjectImage");
static_assert(offsetof(UDownloadOnDemandProjectImage, PreviewTexture) == 0x000058, "Member 'UDownloadOnDemandProjectImage::PreviewTexture' has a wrong offset!");

}
