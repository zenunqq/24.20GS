#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UDownloadOnDemandProjectManagementTab final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x30];
	class UDownloadOnDemandProject*               Project;
	uint8                                         Pad_2A0[0x10];
	class UCommonTextBlock*                       TextBlock_ProjectTitle;
	class UCommonTextBlock*                       TextBlock_LinkCode;
	class UCommonTextBlock*                       TextBlock_VersionNumber;
	class UCommonTextBlock*                       TextBlock_LatestVersionNumber;
	class UImage*                                 Image_LatestVersionSpinner;
	class UCommonTextBlock*                       TextBlock_Description;
	class UCommonButtonLegacy*                    Button_RemoveProject;
	class UCommonButtonLegacy*                    Button_UpdateProject;
	class UCommonVisibilitySwitcher*              Switcher_Props;
	class UCommonTileView*                        CommonTileView_ProjectAssetTiles;
	class UCommonTextBlock*                       TextBlock_NoPropsMessage;

public:
	void RemoveProjectConfirmed();
	void UpdateProjectConfirmed();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectManagementTab">();
	}
	static class UDownloadOnDemandProjectManagementTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectManagementTab>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectManagementTab) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectManagementTab");
static_assert(sizeof(UDownloadOnDemandProjectManagementTab) == 0x000308, "Wrong size on UDownloadOnDemandProjectManagementTab");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Project) == 0x000298, "Member 'UDownloadOnDemandProjectManagementTab::Project' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_ProjectTitle) == 0x0002B0, "Member 'UDownloadOnDemandProjectManagementTab::TextBlock_ProjectTitle' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_LinkCode) == 0x0002B8, "Member 'UDownloadOnDemandProjectManagementTab::TextBlock_LinkCode' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_VersionNumber) == 0x0002C0, "Member 'UDownloadOnDemandProjectManagementTab::TextBlock_VersionNumber' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_LatestVersionNumber) == 0x0002C8, "Member 'UDownloadOnDemandProjectManagementTab::TextBlock_LatestVersionNumber' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Image_LatestVersionSpinner) == 0x0002D0, "Member 'UDownloadOnDemandProjectManagementTab::Image_LatestVersionSpinner' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_Description) == 0x0002D8, "Member 'UDownloadOnDemandProjectManagementTab::TextBlock_Description' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Button_RemoveProject) == 0x0002E0, "Member 'UDownloadOnDemandProjectManagementTab::Button_RemoveProject' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Button_UpdateProject) == 0x0002E8, "Member 'UDownloadOnDemandProjectManagementTab::Button_UpdateProject' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Switcher_Props) == 0x0002F0, "Member 'UDownloadOnDemandProjectManagementTab::Switcher_Props' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, CommonTileView_ProjectAssetTiles) == 0x0002F8, "Member 'UDownloadOnDemandProjectManagementTab::CommonTileView_ProjectAssetTiles' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_NoPropsMessage) == 0x000300, "Member 'UDownloadOnDemandProjectManagementTab::TextBlock_NoPropsMessage' has a wrong offset!");

class UDownloadOnDemandTabPanel final : public UFortCreativeContentBrowserTabPanelBase
{
public:
	struct FDataTableRowHandle                    AddProjectWithLinkCodeInputRowHandle;
	struct FDataTableRowHandle                    AddSelectedProjectInputRowHandle;
	struct FDataTableRowHandle                    ManageSelectedProjectInputRowHandle;
	TSubclassOf<class UDownloadOnDemandProjectDetailsSidePanel> DownloadOnDemandProjectDetailsSidePanelClass;
	TSubclassOf<class UDownloadOnDemandAddProjectModal> DownloadOnDemandAddProjectModalClass;
	TSubclassOf<class UDownloadOnDemandMessageModal> DownloadOnDemandMessageModalClass;
	class FString                                 AddProjectsWithMnemonicEntitlementName;
	class UDownloadOnDemandProject*               SelectedProject;
	uint8                                         Pad_450[0x10];
	class UOverlay*                               Overlay_AddProjectParent;
	class UCommonTileView*                        CommonTileView_ProjectTiles;
	class UCommonVisibilitySwitcher*              Switcher_DownloadOnDemandPanels;
	class UCommonButtonLegacy*                    Button_AddProject;
	class UHorizontalBox*                         HorizontalBox_EntitlementCheckMessage;
	class UHorizontalBox*                         HorizontalBox_EntitlementCheckFailed;
	class UDownloadOnDemandProjectManagementTab*  ProjectManagementTab;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandTabPanel">();
	}
	static class UDownloadOnDemandTabPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandTabPanel>();
	}
};
static_assert(alignof(UDownloadOnDemandTabPanel) == 0x000008, "Wrong alignment on UDownloadOnDemandTabPanel");
static_assert(sizeof(UDownloadOnDemandTabPanel) == 0x000498, "Wrong size on UDownloadOnDemandTabPanel");
static_assert(offsetof(UDownloadOnDemandTabPanel, AddProjectWithLinkCodeInputRowHandle) == 0x0003F0, "Member 'UDownloadOnDemandTabPanel::AddProjectWithLinkCodeInputRowHandle' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, AddSelectedProjectInputRowHandle) == 0x000400, "Member 'UDownloadOnDemandTabPanel::AddSelectedProjectInputRowHandle' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, ManageSelectedProjectInputRowHandle) == 0x000410, "Member 'UDownloadOnDemandTabPanel::ManageSelectedProjectInputRowHandle' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, DownloadOnDemandProjectDetailsSidePanelClass) == 0x000420, "Member 'UDownloadOnDemandTabPanel::DownloadOnDemandProjectDetailsSidePanelClass' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, DownloadOnDemandAddProjectModalClass) == 0x000428, "Member 'UDownloadOnDemandTabPanel::DownloadOnDemandAddProjectModalClass' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, DownloadOnDemandMessageModalClass) == 0x000430, "Member 'UDownloadOnDemandTabPanel::DownloadOnDemandMessageModalClass' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, AddProjectsWithMnemonicEntitlementName) == 0x000438, "Member 'UDownloadOnDemandTabPanel::AddProjectsWithMnemonicEntitlementName' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, SelectedProject) == 0x000448, "Member 'UDownloadOnDemandTabPanel::SelectedProject' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, Overlay_AddProjectParent) == 0x000460, "Member 'UDownloadOnDemandTabPanel::Overlay_AddProjectParent' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, CommonTileView_ProjectTiles) == 0x000468, "Member 'UDownloadOnDemandTabPanel::CommonTileView_ProjectTiles' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, Switcher_DownloadOnDemandPanels) == 0x000470, "Member 'UDownloadOnDemandTabPanel::Switcher_DownloadOnDemandPanels' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, Button_AddProject) == 0x000478, "Member 'UDownloadOnDemandTabPanel::Button_AddProject' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, HorizontalBox_EntitlementCheckMessage) == 0x000480, "Member 'UDownloadOnDemandTabPanel::HorizontalBox_EntitlementCheckMessage' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, HorizontalBox_EntitlementCheckFailed) == 0x000488, "Member 'UDownloadOnDemandTabPanel::HorizontalBox_EntitlementCheckFailed' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandTabPanel, ProjectManagementTab) == 0x000490, "Member 'UDownloadOnDemandTabPanel::ProjectManagementTab' has a wrong offset!");

class UDownloadOnDemandTab_EntitlementCreationCondition final : public UCreativeContentBrowserTab_CreationCondition
{
public:
	class FString                                 EntitlementName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandTab_EntitlementCreationCondition">();
	}
	static class UDownloadOnDemandTab_EntitlementCreationCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandTab_EntitlementCreationCondition>();
	}
};
static_assert(alignof(UDownloadOnDemandTab_EntitlementCreationCondition) == 0x000008, "Wrong alignment on UDownloadOnDemandTab_EntitlementCreationCondition");
static_assert(sizeof(UDownloadOnDemandTab_EntitlementCreationCondition) == 0x000038, "Wrong size on UDownloadOnDemandTab_EntitlementCreationCondition");
static_assert(offsetof(UDownloadOnDemandTab_EntitlementCreationCondition, EntitlementName) == 0x000028, "Member 'UDownloadOnDemandTab_EntitlementCreationCondition::EntitlementName' has a wrong offset!");

class UDownloadOnDemandAddProjectModal final : public UCommonActivatableWidget
{
public:
	class UDownloadOnDemandProject*               Project;
	uint8                                         Pad_3B0[0x10];
	class UEditableTextBox*                       EditableTextBox_DownloadLinkCode;
	class UCommonButtonLegacy*                    Button_AddProject;
	class UCommonButtonLegacy*                    Button_Cancel;
	class UDownloadOnDemandProjectTileImage*      ProjectTileImage_Preview;
	class UOverlay*                               Overlay_ProjectTitle;
	class UCommonTextBlock*                       TextBlock_ProjectTitle;

public:
	void HandleDownloadLinkIdTextChanged(const class FText& InputLinkCode);
	void UpdateLightningViolator(ESlateVisibility InVisibility, const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandAddProjectModal">();
	}
	static class UDownloadOnDemandAddProjectModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandAddProjectModal>();
	}
};
static_assert(alignof(UDownloadOnDemandAddProjectModal) == 0x000008, "Wrong alignment on UDownloadOnDemandAddProjectModal");
static_assert(sizeof(UDownloadOnDemandAddProjectModal) == 0x0003F0, "Wrong size on UDownloadOnDemandAddProjectModal");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Project) == 0x0003A8, "Member 'UDownloadOnDemandAddProjectModal::Project' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, EditableTextBox_DownloadLinkCode) == 0x0003C0, "Member 'UDownloadOnDemandAddProjectModal::EditableTextBox_DownloadLinkCode' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Button_AddProject) == 0x0003C8, "Member 'UDownloadOnDemandAddProjectModal::Button_AddProject' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Button_Cancel) == 0x0003D0, "Member 'UDownloadOnDemandAddProjectModal::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, ProjectTileImage_Preview) == 0x0003D8, "Member 'UDownloadOnDemandAddProjectModal::ProjectTileImage_Preview' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Overlay_ProjectTitle) == 0x0003E0, "Member 'UDownloadOnDemandAddProjectModal::Overlay_ProjectTitle' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, TextBlock_ProjectTitle) == 0x0003E8, "Member 'UDownloadOnDemandAddProjectModal::TextBlock_ProjectTitle' has a wrong offset!");

class UDownloadOnDemandMessageModal final : public UCommonActivatableWidget
{
public:
	class UCommonTextBlock*                       TextBlock_MessageTitle;
	class UCommonTextBlock*                       TextBlock_Message;
	class UCommonButtonLegacy*                    Button_Close;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandMessageModal">();
	}
	static class UDownloadOnDemandMessageModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandMessageModal>();
	}
};
static_assert(alignof(UDownloadOnDemandMessageModal) == 0x000008, "Wrong alignment on UDownloadOnDemandMessageModal");
static_assert(sizeof(UDownloadOnDemandMessageModal) == 0x0003C0, "Wrong size on UDownloadOnDemandMessageModal");
static_assert(offsetof(UDownloadOnDemandMessageModal, TextBlock_MessageTitle) == 0x0003A8, "Member 'UDownloadOnDemandMessageModal::TextBlock_MessageTitle' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandMessageModal, TextBlock_Message) == 0x0003B0, "Member 'UDownloadOnDemandMessageModal::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandMessageModal, Button_Close) == 0x0003B8, "Member 'UDownloadOnDemandMessageModal::Button_Close' has a wrong offset!");

class UDownloadOnDemandProjectDetailsSidePanel final : public UUserWidget
{
public:
	class UDownloadOnDemandProjectTile*           DownloadOnDemandProjectTile_CurrentProjectEntry;
	class UCreativeContentBrowserItemInfo*        ContentBrowserItemInfo_ItemDetails;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectDetailsSidePanel">();
	}
	static class UDownloadOnDemandProjectDetailsSidePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectDetailsSidePanel>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectDetailsSidePanel) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectDetailsSidePanel");
static_assert(sizeof(UDownloadOnDemandProjectDetailsSidePanel) == 0x000278, "Wrong size on UDownloadOnDemandProjectDetailsSidePanel");
static_assert(offsetof(UDownloadOnDemandProjectDetailsSidePanel, DownloadOnDemandProjectTile_CurrentProjectEntry) == 0x000268, "Member 'UDownloadOnDemandProjectDetailsSidePanel::DownloadOnDemandProjectTile_CurrentProjectEntry' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectDetailsSidePanel, ContentBrowserItemInfo_ItemDetails) == 0x000270, "Member 'UDownloadOnDemandProjectDetailsSidePanel::ContentBrowserItemInfo_ItemDetails' has a wrong offset!");

class UDownloadOnDemandStatusFeed final : public UUserWidget
{
public:
	bool                                          bOverrideOldStatusWithNewStatus;
	uint8                                         Pad_269[0x7];
	class UFortDynamicEntryBox*                   EntryBox_DownloadStatusContainer;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandStatusFeed">();
	}
	static class UDownloadOnDemandStatusFeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandStatusFeed>();
	}
};
static_assert(alignof(UDownloadOnDemandStatusFeed) == 0x000008, "Wrong alignment on UDownloadOnDemandStatusFeed");
static_assert(sizeof(UDownloadOnDemandStatusFeed) == 0x000278, "Wrong size on UDownloadOnDemandStatusFeed");
static_assert(offsetof(UDownloadOnDemandStatusFeed, bOverrideOldStatusWithNewStatus) == 0x000268, "Member 'UDownloadOnDemandStatusFeed::bOverrideOldStatusWithNewStatus' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandStatusFeed, EntryBox_DownloadStatusContainer) == 0x000270, "Member 'UDownloadOnDemandStatusFeed::EntryBox_DownloadStatusContainer' has a wrong offset!");

class UDownloadOnDemandStatusFeedLine final : public UUserWidget
{
public:
	class UCommonTextBlock*                       TextBlock_DownloadStatus;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandStatusFeedLine">();
	}
	static class UDownloadOnDemandStatusFeedLine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandStatusFeedLine>();
	}
};
static_assert(alignof(UDownloadOnDemandStatusFeedLine) == 0x000008, "Wrong alignment on UDownloadOnDemandStatusFeedLine");
static_assert(sizeof(UDownloadOnDemandStatusFeedLine) == 0x000270, "Wrong size on UDownloadOnDemandStatusFeedLine");
static_assert(offsetof(UDownloadOnDemandStatusFeedLine, TextBlock_DownloadStatus) == 0x000268, "Member 'UDownloadOnDemandStatusFeedLine::TextBlock_DownloadStatus' has a wrong offset!");

class UDownloadOnDemandProjectAssetTileInitializer final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UFortPlaysetPropItemDefinition*         PropItemDefinition;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectAssetTileInitializer">();
	}
	static class UDownloadOnDemandProjectAssetTileInitializer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectAssetTileInitializer>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectAssetTileInitializer) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectAssetTileInitializer");
static_assert(sizeof(UDownloadOnDemandProjectAssetTileInitializer) == 0x000038, "Wrong size on UDownloadOnDemandProjectAssetTileInitializer");
static_assert(offsetof(UDownloadOnDemandProjectAssetTileInitializer, PropItemDefinition) == 0x000030, "Member 'UDownloadOnDemandProjectAssetTileInitializer::PropItemDefinition' has a wrong offset!");

class UDownloadOnDemandProjectAssetTile final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UDownloadOnDemandProjectAssetTileInitializer* Initializer;
	uint8                                         Pad_1440[0x10];
	class UImage*                                 Image_Item;
	class UImage*                                 Image_Spinner;
	class UCommonNumericTextBlock*                NumericTextBlock_ItemCount;
	uint8                                         Pad_1468[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectAssetTile">();
	}
	static class UDownloadOnDemandProjectAssetTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectAssetTile>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectAssetTile) == 0x000010, "Wrong alignment on UDownloadOnDemandProjectAssetTile");
static_assert(sizeof(UDownloadOnDemandProjectAssetTile) == 0x001470, "Wrong size on UDownloadOnDemandProjectAssetTile");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, Initializer) == 0x001438, "Member 'UDownloadOnDemandProjectAssetTile::Initializer' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, Image_Item) == 0x001450, "Member 'UDownloadOnDemandProjectAssetTile::Image_Item' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, Image_Spinner) == 0x001458, "Member 'UDownloadOnDemandProjectAssetTile::Image_Spinner' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, NumericTextBlock_ItemCount) == 0x001460, "Member 'UDownloadOnDemandProjectAssetTile::NumericTextBlock_ItemCount' has a wrong offset!");

class UDownloadOnDemandProjectTile final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x10];
	struct FSlateBrush                            SelectedHighlightBrush;
	struct FSlateBrush                            HoveredHighlightBrush;
	bool                                          bIsSelected;
	uint8                                         Pad_15C1[0x7];
	class UDownloadOnDemandProject*               Project;
	uint8                                         Pad_15D0[0x10];
	class UDownloadOnDemandProjectTileImage*      ProjectTileImage_Preview;
	class UImage*                                 Image_UpdatePending;
	class UImage*                                 Image_AddProject;
	class UImage*                                 Image_Spinner;
	class UImage*                                 Image_Error;
	class USizeBox*                               SizeBox_Label;
	class UCommonTextBlock*                       TextBlock_Label;
	class UCommonBorder*                          Border_Highlight;

public:
	void OnLabelUpdated();
	void UpdateLabel(bool bShowLabel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectTile">();
	}
	static class UDownloadOnDemandProjectTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectTile>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectTile) == 0x000010, "Wrong alignment on UDownloadOnDemandProjectTile");
static_assert(sizeof(UDownloadOnDemandProjectTile) == 0x001620, "Wrong size on UDownloadOnDemandProjectTile");
static_assert(offsetof(UDownloadOnDemandProjectTile, SelectedHighlightBrush) == 0x001440, "Member 'UDownloadOnDemandProjectTile::SelectedHighlightBrush' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, HoveredHighlightBrush) == 0x001500, "Member 'UDownloadOnDemandProjectTile::HoveredHighlightBrush' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, bIsSelected) == 0x0015C0, "Member 'UDownloadOnDemandProjectTile::bIsSelected' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, Project) == 0x0015C8, "Member 'UDownloadOnDemandProjectTile::Project' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, ProjectTileImage_Preview) == 0x0015E0, "Member 'UDownloadOnDemandProjectTile::ProjectTileImage_Preview' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_UpdatePending) == 0x0015E8, "Member 'UDownloadOnDemandProjectTile::Image_UpdatePending' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_AddProject) == 0x0015F0, "Member 'UDownloadOnDemandProjectTile::Image_AddProject' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_Spinner) == 0x0015F8, "Member 'UDownloadOnDemandProjectTile::Image_Spinner' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_Error) == 0x001600, "Member 'UDownloadOnDemandProjectTile::Image_Error' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, SizeBox_Label) == 0x001608, "Member 'UDownloadOnDemandProjectTile::SizeBox_Label' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, TextBlock_Label) == 0x001610, "Member 'UDownloadOnDemandProjectTile::TextBlock_Label' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTile, Border_Highlight) == 0x001618, "Member 'UDownloadOnDemandProjectTile::Border_Highlight' has a wrong offset!");

class UDownloadOnDemandProjectTileImage final : public UUserWidget
{
public:
	class UTexture*                               EmptyProjectTexture;
	uint8                                         bOverrideGrayScale : 1;
	uint8                                         Pad_271[0x3];
	float                                         GreyScaleOverride;
	class UDownloadOnDemandProject*               Project;
	uint8                                         Pad_280[0x10];
	class UImage*                                 Image_ProjectPreview;
	class UImage*                                 Image_LoadingImageSpinner;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DownloadOnDemandProjectTileImage">();
	}
	static class UDownloadOnDemandProjectTileImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadOnDemandProjectTileImage>();
	}
};
static_assert(alignof(UDownloadOnDemandProjectTileImage) == 0x000008, "Wrong alignment on UDownloadOnDemandProjectTileImage");
static_assert(sizeof(UDownloadOnDemandProjectTileImage) == 0x0002A0, "Wrong size on UDownloadOnDemandProjectTileImage");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, EmptyProjectTexture) == 0x000268, "Member 'UDownloadOnDemandProjectTileImage::EmptyProjectTexture' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, GreyScaleOverride) == 0x000274, "Member 'UDownloadOnDemandProjectTileImage::GreyScaleOverride' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, Project) == 0x000278, "Member 'UDownloadOnDemandProjectTileImage::Project' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, Image_ProjectPreview) == 0x000290, "Member 'UDownloadOnDemandProjectTileImage::Image_ProjectPreview' has a wrong offset!");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, Image_LoadingImageSpinner) == 0x000298, "Member 'UDownloadOnDemandProjectTileImage::Image_LoadingImageSpinner' has a wrong offset!");

}
