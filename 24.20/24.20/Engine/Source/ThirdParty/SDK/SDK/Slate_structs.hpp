#pragma once

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EVirtualKeyboardTrigger : uint8
{
	OnFocusByPointer                         = 0,
	OnAllFocusEvents                         = 1,
	EVirtualKeyboardTrigger_MAX              = 2,
};

enum class EVirtualKeyboardDismissAction : uint8
{
	TextChangeOnDismiss                      = 0,
	TextCommitOnAccept                       = 1,
	TextCommitOnDismiss                      = 2,
	EVirtualKeyboardDismissAction_MAX        = 3,
};

enum class ESelectionMode : uint8
{
	None                                     = 0,
	Single                                   = 1,
	SingleToggle                             = 2,
	Multi                                    = 3,
	ESelectionMode_MAX                       = 4,
};

enum class ETableViewMode : uint8
{
	List                                     = 0,
	Tile                                     = 1,
	Tree                                     = 2,
	ETableViewMode_MAX                       = 3,
};

enum class EMultiBoxType : uint8
{
	MenuBar                                  = 0,
	ToolBar                                  = 1,
	VerticalToolBar                          = 2,
	SlimHorizontalToolBar                    = 3,
	UniformToolBar                           = 4,
	Menu                                     = 5,
	ButtonRow                                = 6,
	SlimHorizontalUniformToolBar             = 7,
	EMultiBoxType_MAX                        = 8,
};

enum class EMultiBlockType : uint8
{
	None                                     = 0,
	ButtonRow                                = 1,
	EditableText                             = 2,
	Heading                                  = 3,
	MenuEntry                                = 4,
	Separator                                = 5,
	ToolBarButton                            = 6,
	ToolBarComboButton                       = 7,
	Widget                                   = 8,
	EMultiBlockType_MAX                      = 9,
};

enum class EDescendantScrollDestination : uint8
{
	IntoView                                 = 0,
	TopOrLeft                                = 1,
	Center                                   = 2,
	BottomOrRight                            = 3,
	EDescendantScrollDestination_MAX         = 4,
};

enum class EScrollWhenFocusChanges : uint8
{
	NoScroll                                 = 0,
	InstantScroll                            = 1,
	AnimatedScroll                           = 2,
	EScrollWhenFocusChanges_MAX              = 3,
};

enum class ECustomizedToolMenuVisibility : uint32
{
	None                                     = 0,
	Visible                                  = 1,
	Hidden                                   = 2,
	ECustomizedToolMenuVisibility_MAX        = 3,
};

enum class EUserInterfaceActionType : uint8
{
	None                                     = 0,
	Button                                   = 1,
	ToggleButton                             = 2,
	RadioButton                              = 3,
	Check                                    = 4,
	CollapsedButton                          = 5,
	EUserInterfaceActionType_MAX             = 6,
};

enum class EMultipleKeyBindingIndex : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	NumChords                                = 2,
	EMultipleKeyBindingIndex_MAX             = 3,
};

enum class ETextJustify : uint8
{
	Left                                     = 0,
	Center                                   = 1,
	Right                                    = 2,
	ETextJustify_MAX                         = 3,
};

enum class ETextWrappingPolicy : uint8
{
	DefaultWrapping                          = 0,
	AllowPerCharacterWrapping                = 1,
	ETextWrappingPolicy_MAX                  = 2,
};

enum class ETextFlowDirection : uint8
{
	Auto                                     = 0,
	LeftToRight                              = 1,
	RightToLeft                              = 2,
	Culture                                  = 3,
	ETextFlowDirection_MAX                   = 4,
};

enum class EStretchDirection : uint8
{
	Both                                     = 0,
	DownOnly                                 = 1,
	UpOnly                                   = 2,
	EStretchDirection_MAX                    = 3,
};

enum class EStretch : uint8
{
	None                                     = 0,
	Fill                                     = 1,
	ScaleToFit                               = 2,
	ScaleToFitX                              = 3,
	ScaleToFitY                              = 4,
	ScaleToFill                              = 5,
	ScaleBySafeZone                          = 6,
	UserSpecified                            = 7,
	UserSpecifiedWithClipping                = 8,
	EStretch_MAX                             = 9,
};

enum class EProgressBarFillType : uint8
{
	LeftToRight                              = 0,
	RightToLeft                              = 1,
	FillFromCenter                           = 2,
	FillFromCenterHorizontal                 = 3,
	FillFromCenterVertical                   = 4,
	TopToBottom                              = 5,
	BottomToTop                              = 6,
	EProgressBarFillType_MAX                 = 7,
};

enum class EProgressBarFillStyle : uint8
{
	Mask                                     = 0,
	Scale                                    = 1,
	EProgressBarFillStyle_MAX                = 2,
};

enum class EListItemAlignment : uint8
{
	EvenlyDistributed                        = 0,
	EvenlySize                               = 1,
	EvenlyWide                               = 2,
	LeftAligned                              = 3,
	RightAligned                             = 4,
	CenterAligned                            = 5,
	Fill                                     = 6,
	EListItemAlignment_MAX                   = 7,
};

struct FCustomizedToolMenuEntry final
{
public:
	ECustomizedToolMenuVisibility                 Visibility;
};
static_assert(alignof(FCustomizedToolMenuEntry) == 0x000004, "Wrong alignment on FCustomizedToolMenuEntry");
static_assert(sizeof(FCustomizedToolMenuEntry) == 0x000004, "Wrong size on FCustomizedToolMenuEntry");
static_assert(offsetof(FCustomizedToolMenuEntry, Visibility) == 0x000000, "Member 'FCustomizedToolMenuEntry::Visibility' has a wrong offset!");

struct FVirtualKeyboardOptions final
{
public:
	bool                                          bEnableAutocorrect;
};
static_assert(alignof(FVirtualKeyboardOptions) == 0x000001, "Wrong alignment on FVirtualKeyboardOptions");
static_assert(sizeof(FVirtualKeyboardOptions) == 0x000001, "Wrong size on FVirtualKeyboardOptions");
static_assert(offsetof(FVirtualKeyboardOptions, bEnableAutocorrect) == 0x000000, "Member 'FVirtualKeyboardOptions::bEnableAutocorrect' has a wrong offset!");

struct FInputChord final
{
public:
	struct FKey                                   Key;
	uint8                                         bShift : 1;
	uint8                                         bCtrl : 1;
	uint8                                         bAlt : 1;
	uint8                                         bCmd : 1;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FInputChord) == 0x000008, "Wrong alignment on FInputChord");
static_assert(sizeof(FInputChord) == 0x000020, "Wrong size on FInputChord");
static_assert(offsetof(FInputChord, Key) == 0x000000, "Member 'FInputChord::Key' has a wrong offset!");

struct FAnchors final
{
public:
	struct FVector2D                              Minimum;
	struct FVector2D                              Maximum;
};
static_assert(alignof(FAnchors) == 0x000008, "Wrong alignment on FAnchors");
static_assert(sizeof(FAnchors) == 0x000020, "Wrong size on FAnchors");
static_assert(offsetof(FAnchors, Minimum) == 0x000000, "Member 'FAnchors::Minimum' has a wrong offset!");
static_assert(offsetof(FAnchors, Maximum) == 0x000010, "Member 'FAnchors::Maximum' has a wrong offset!");

struct FCustomizedToolMenuSection final
{
public:
	ECustomizedToolMenuVisibility                 Visibility;
};
static_assert(alignof(FCustomizedToolMenuSection) == 0x000004, "Wrong alignment on FCustomizedToolMenuSection");
static_assert(sizeof(FCustomizedToolMenuSection) == 0x000004, "Wrong size on FCustomizedToolMenuSection");
static_assert(offsetof(FCustomizedToolMenuSection, Visibility) == 0x000000, "Member 'FCustomizedToolMenuSection::Visibility' has a wrong offset!");

struct FCustomizedToolMenuNameArray final
{
public:
	TArray<class FName>                           Names;
};
static_assert(alignof(FCustomizedToolMenuNameArray) == 0x000008, "Wrong alignment on FCustomizedToolMenuNameArray");
static_assert(sizeof(FCustomizedToolMenuNameArray) == 0x000010, "Wrong size on FCustomizedToolMenuNameArray");
static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0x000000, "Member 'FCustomizedToolMenuNameArray::Names' has a wrong offset!");

struct FCustomizedToolMenu final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	TMap<class FName, struct FCustomizedToolMenuEntry> Entries;
	TMap<class FName, struct FCustomizedToolMenuSection> Sections;
	TMap<class FName, struct FCustomizedToolMenuNameArray> EntryOrder;
	TArray<class FName>                           SectionOrder;
	TArray<class FName>                           SuppressExtenders;
	uint8                                         Pad_118[0xE8];
};
static_assert(alignof(FCustomizedToolMenu) == 0x000008, "Wrong alignment on FCustomizedToolMenu");
static_assert(sizeof(FCustomizedToolMenu) == 0x000200, "Wrong size on FCustomizedToolMenu");
static_assert(offsetof(FCustomizedToolMenu, Name) == 0x000000, "Member 'FCustomizedToolMenu::Name' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, Entries) == 0x000008, "Member 'FCustomizedToolMenu::Entries' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, Sections) == 0x000058, "Member 'FCustomizedToolMenu::Sections' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, EntryOrder) == 0x0000A8, "Member 'FCustomizedToolMenu::EntryOrder' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 0x0000F8, "Member 'FCustomizedToolMenu::SectionOrder' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, SuppressExtenders) == 0x000108, "Member 'FCustomizedToolMenu::SuppressExtenders' has a wrong offset!");

}
