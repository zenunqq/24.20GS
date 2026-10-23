#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DynamicUI_classes.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UVKConnectionIndicator final : public UCommonActivatableWidget
{
public:
	class FText                                   EditStatusLocalizedText[0xA];
	struct FDataTableRowHandle                    OpenLogInputAction;
	class UObject*                                StatusIcon_NotConnected;
	class UObject*                                StatusIcon_Connected;
	class UObject*                                StatusIcon_RefreshRequired;
	class UObject*                                StatusIcon_Preparing;
	class UObject*                                StatusIcon_Downloading;
	class UObject*                                StatusIcon_UpToDate;
	class UObject*                                StatusIcon_StartingGame;
	class UObject*                                StatusIcon_GameInProgress;
	class UObject*                                StatusIcon_Error;
	class UImage*                                 Image_StatusIcon;
	class UCommonTextBlock*                       Text_StatusMessage;
	class UWidgetSwitcher*                        Switcher_AdditionalInfo;
	class UPanelWidget*                           Panel_DownloadContainer;
	class UFortSimpleMaterialProgressBar*         ProgressBar_Download;
	class UCommonTextBlock*                       Text_DownloadProgress;
	class UPanelWidget*                           Panel_OpenLogContainer;
	class UCommonActionWidget*                    Action_OpenLog;
	class UPanelWidget*                           Panel_SubMessageContainer;
	class UCommonTextBlock*                       Text_SubMessage;
	class UCommonTextBlock*                       Text_EditMode;
	class UPanelWidget*                           Panel_SquadListContainer;
	class UAthenaSquadListBase*                   AthenaSquadList;
	uint8                                         Pad_558[0x40];

public:
	void HandleMemorySamplerProgressUpdated(float Progress);
	void OnMinigameStateChanged(const EFortMinigameState MinigameState, const EFortMinigameState PreviousMinigameState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VKConnectionIndicator">();
	}
	static class UVKConnectionIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVKConnectionIndicator>();
	}
};
static_assert(alignof(UVKConnectionIndicator) == 0x000008, "Wrong alignment on UVKConnectionIndicator");
static_assert(sizeof(UVKConnectionIndicator) == 0x000598, "Wrong size on UVKConnectionIndicator");
static_assert(offsetof(UVKConnectionIndicator, EditStatusLocalizedText) == 0x0003A8, "Member 'UVKConnectionIndicator::EditStatusLocalizedText' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, OpenLogInputAction) == 0x000498, "Member 'UVKConnectionIndicator::OpenLogInputAction' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_NotConnected) == 0x0004A8, "Member 'UVKConnectionIndicator::StatusIcon_NotConnected' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Connected) == 0x0004B0, "Member 'UVKConnectionIndicator::StatusIcon_Connected' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_RefreshRequired) == 0x0004B8, "Member 'UVKConnectionIndicator::StatusIcon_RefreshRequired' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Preparing) == 0x0004C0, "Member 'UVKConnectionIndicator::StatusIcon_Preparing' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Downloading) == 0x0004C8, "Member 'UVKConnectionIndicator::StatusIcon_Downloading' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_UpToDate) == 0x0004D0, "Member 'UVKConnectionIndicator::StatusIcon_UpToDate' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_StartingGame) == 0x0004D8, "Member 'UVKConnectionIndicator::StatusIcon_StartingGame' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_GameInProgress) == 0x0004E0, "Member 'UVKConnectionIndicator::StatusIcon_GameInProgress' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Error) == 0x0004E8, "Member 'UVKConnectionIndicator::StatusIcon_Error' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Image_StatusIcon) == 0x0004F0, "Member 'UVKConnectionIndicator::Image_StatusIcon' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Text_StatusMessage) == 0x0004F8, "Member 'UVKConnectionIndicator::Text_StatusMessage' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Switcher_AdditionalInfo) == 0x000500, "Member 'UVKConnectionIndicator::Switcher_AdditionalInfo' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Panel_DownloadContainer) == 0x000508, "Member 'UVKConnectionIndicator::Panel_DownloadContainer' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, ProgressBar_Download) == 0x000510, "Member 'UVKConnectionIndicator::ProgressBar_Download' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Text_DownloadProgress) == 0x000518, "Member 'UVKConnectionIndicator::Text_DownloadProgress' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Panel_OpenLogContainer) == 0x000520, "Member 'UVKConnectionIndicator::Panel_OpenLogContainer' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Action_OpenLog) == 0x000528, "Member 'UVKConnectionIndicator::Action_OpenLog' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Panel_SubMessageContainer) == 0x000530, "Member 'UVKConnectionIndicator::Panel_SubMessageContainer' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Text_SubMessage) == 0x000538, "Member 'UVKConnectionIndicator::Text_SubMessage' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Text_EditMode) == 0x000540, "Member 'UVKConnectionIndicator::Text_EditMode' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, Panel_SquadListContainer) == 0x000548, "Member 'UVKConnectionIndicator::Panel_SquadListContainer' has a wrong offset!");
static_assert(offsetof(UVKConnectionIndicator, AthenaSquadList) == 0x000550, "Member 'UVKConnectionIndicator::AthenaSquadList' has a wrong offset!");

class UVKDebugMessagesBase final : public UFortHUDElementWidget
{
public:
	void BP_OnGameStateInitialized(class AFortGameState* GameState);
	void HandleGameStateInitialized(class AFortGameState* GameState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VKDebugMessagesBase">();
	}
	static class UVKDebugMessagesBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVKDebugMessagesBase>();
	}
};
static_assert(alignof(UVKDebugMessagesBase) == 0x000008, "Wrong alignment on UVKDebugMessagesBase");
static_assert(sizeof(UVKDebugMessagesBase) == 0x0002D0, "Wrong size on UVKDebugMessagesBase");

class AVkEditDynamicUIDirector final : public ADynamicUIDirectorBase
{
public:
	class UDynamicUIScene*                        MemorySamplingScene;
	uint8                                         Pad_2C0[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VkEditDynamicUIDirector">();
	}
	static class AVkEditDynamicUIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVkEditDynamicUIDirector>();
	}
};
static_assert(alignof(AVkEditDynamicUIDirector) == 0x000008, "Wrong alignment on AVkEditDynamicUIDirector");
static_assert(sizeof(AVkEditDynamicUIDirector) == 0x0002E0, "Wrong size on AVkEditDynamicUIDirector");
static_assert(offsetof(AVkEditDynamicUIDirector, MemorySamplingScene) == 0x0002B8, "Member 'AVkEditDynamicUIDirector::MemorySamplingScene' has a wrong offset!");

class UVkEditLogTab final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VkEditLogTab">();
	}
	static class UVkEditLogTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVkEditLogTab>();
	}
};
static_assert(alignof(UVkEditLogTab) == 0x000010, "Wrong alignment on UVkEditLogTab");
static_assert(sizeof(UVkEditLogTab) == 0x0004A0, "Wrong size on UVkEditLogTab");
static_assert(offsetof(UVkEditLogTab, TabButtonLabelInfo) == 0x0003B0, "Member 'UVkEditLogTab::TabButtonLabelInfo' has a wrong offset!");

}
