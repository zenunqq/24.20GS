#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "SlateCore_classes.hpp"

namespace SDK
{

class UToolMenuBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolMenuBase">();
	}
	static class UToolMenuBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolMenuBase>();
	}
};
static_assert(alignof(UToolMenuBase) == 0x000008, "Wrong alignment on UToolMenuBase");
static_assert(sizeof(UToolMenuBase) == 0x000028, "Wrong size on UToolMenuBase");

class USlateSettings final : public UObject
{
public:
	bool                                          bExplicitCanvasChildZOrder;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateSettings">();
	}
	static class USlateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateSettings>();
	}
};
static_assert(alignof(USlateSettings) == 0x000008, "Wrong alignment on USlateSettings");
static_assert(sizeof(USlateSettings) == 0x000030, "Wrong size on USlateSettings");
static_assert(offsetof(USlateSettings, bExplicitCanvasChildZOrder) == 0x000028, "Member 'USlateSettings::bExplicitCanvasChildZOrder' has a wrong offset!");

class UButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                           ButtonStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ButtonWidgetStyle">();
	}
	static class UButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonWidgetStyle>();
	}
};
static_assert(alignof(UButtonWidgetStyle) == 0x000010, "Wrong alignment on UButtonWidgetStyle");
static_assert(sizeof(UButtonWidgetStyle) == 0x0003E0, "Wrong size on UButtonWidgetStyle");
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x000030, "Member 'UButtonWidgetStyle::ButtonStyle' has a wrong offset!");

class UCheckBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                         CheckBoxStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CheckBoxWidgetStyle">();
	}
	static class UCheckBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheckBoxWidgetStyle>();
	}
};
static_assert(alignof(UCheckBoxWidgetStyle) == 0x000010, "Wrong alignment on UCheckBoxWidgetStyle");
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x000A40, "Wrong size on UCheckBoxWidgetStyle");
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x000030, "Member 'UCheckBoxWidgetStyle::CheckBoxStyle' has a wrong offset!");

class UComboBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                         ComboBoxStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboBoxWidgetStyle">();
	}
	static class UComboBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboBoxWidgetStyle>();
	}
};
static_assert(alignof(UComboBoxWidgetStyle) == 0x000010, "Wrong alignment on UComboBoxWidgetStyle");
static_assert(sizeof(UComboBoxWidgetStyle) == 0x000630, "Wrong size on UComboBoxWidgetStyle");
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x000030, "Member 'UComboBoxWidgetStyle::ComboBoxStyle' has a wrong offset!");

class UComboButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                      ComboButtonStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboButtonWidgetStyle">();
	}
	static class UComboButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboButtonWidgetStyle>();
	}
};
static_assert(alignof(UComboButtonWidgetStyle) == 0x000010, "Wrong alignment on UComboButtonWidgetStyle");
static_assert(sizeof(UComboButtonWidgetStyle) == 0x0005D0, "Wrong size on UComboButtonWidgetStyle");
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x000030, "Member 'UComboButtonWidgetStyle::ComboButtonStyle' has a wrong offset!");

class UEditableTextBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                  EditableTextBoxStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextBoxWidgetStyle">();
	}
	static class UEditableTextBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextBoxWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextBoxWidgetStyle) == 0x000010, "Wrong alignment on UEditableTextBoxWidgetStyle");
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x000DB0, "Wrong size on UEditableTextBoxWidgetStyle");
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x000030, "Member 'UEditableTextBoxWidgetStyle::EditableTextBoxStyle' has a wrong offset!");

class UEditableTextWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                     EditableTextStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextWidgetStyle">();
	}
	static class UEditableTextWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextWidgetStyle) == 0x000010, "Wrong alignment on UEditableTextWidgetStyle");
static_assert(sizeof(UEditableTextWidgetStyle) == 0x0002F0, "Wrong size on UEditableTextWidgetStyle");
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x000030, "Member 'UEditableTextWidgetStyle::EditableTextStyle' has a wrong offset!");

class UProgressWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                      ProgressBarStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProgressWidgetStyle">();
	}
	static class UProgressWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressWidgetStyle>();
	}
};
static_assert(alignof(UProgressWidgetStyle) == 0x000010, "Wrong alignment on UProgressWidgetStyle");
static_assert(sizeof(UProgressWidgetStyle) == 0x000290, "Wrong size on UProgressWidgetStyle");
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x000030, "Member 'UProgressWidgetStyle::ProgressBarStyle' has a wrong offset!");

class UScrollBarWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                        ScrollBarStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBarWidgetStyle">();
	}
	static class UScrollBarWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBarWidgetStyle>();
	}
};
static_assert(alignof(UScrollBarWidgetStyle) == 0x000010, "Wrong alignment on UScrollBarWidgetStyle");
static_assert(sizeof(UScrollBarWidgetStyle) == 0x000710, "Wrong size on UScrollBarWidgetStyle");
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x000030, "Member 'UScrollBarWidgetStyle::ScrollBarStyle' has a wrong offset!");

class UScrollBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                        ScrollBoxStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBoxWidgetStyle">();
	}
	static class UScrollBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBoxWidgetStyle>();
	}
};
static_assert(alignof(UScrollBoxWidgetStyle) == 0x000010, "Wrong alignment on UScrollBoxWidgetStyle");
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x000340, "Wrong size on UScrollBoxWidgetStyle");
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x000030, "Member 'UScrollBoxWidgetStyle::ScrollBoxStyle' has a wrong offset!");

class USpinBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                          SpinBoxStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpinBoxWidgetStyle">();
	}
	static class USpinBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpinBoxWidgetStyle>();
	}
};
static_assert(alignof(USpinBoxWidgetStyle) == 0x000010, "Wrong alignment on USpinBoxWidgetStyle");
static_assert(sizeof(USpinBoxWidgetStyle) == 0x0005C0, "Wrong size on USpinBoxWidgetStyle");
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x000030, "Member 'USpinBoxWidgetStyle::SpinBoxStyle' has a wrong offset!");

class UTextBlockWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                        TextBlockStyle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextBlockWidgetStyle">();
	}
	static class UTextBlockWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBlockWidgetStyle>();
	}
};
static_assert(alignof(UTextBlockWidgetStyle) == 0x000010, "Wrong alignment on UTextBlockWidgetStyle");
static_assert(sizeof(UTextBlockWidgetStyle) == 0x000340, "Wrong size on UTextBlockWidgetStyle");
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x000030, "Member 'UTextBlockWidgetStyle::TextBlockStyle' has a wrong offset!");

}
