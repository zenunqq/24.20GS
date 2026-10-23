#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"

namespace SDK
{

enum class EUI_horizontal_alignment : uint8
{
	Center                                   = 0,
	Left                                     = 1,
	Right                                    = 2,
	Fill                                     = 3,
	UI_horizontal_MAX                        = 4,
};

enum class EUI_image_tile : uint8
{
	Stretch                                  = 0,
	Tile                                     = 1,
	TileHorizontalStretchVertical            = 2,
	StretchHorizontalTileVertical            = 3,
	UI_image_MAX                             = 4,
};

enum class EUI_orientation : uint8
{
	Horizontal                               = 0,
	Vertical                                 = 1,
	UI_MAX                                   = 2,
};

enum class EUI_text_justification : uint8
{
	Left                                     = 0,
	Center                                   = 1,
	Right                                    = 2,
	UI_text_MAX                              = 3,
};

enum class EUI_text_overflow_policy : uint8
{
	Clip                                     = 0,
	Ellipsis                                 = 1,
	UI_text_overflow_MAX                     = 2,
};

enum class EUI_ui_input_mode : uint8
{
	None                                     = 0,
	All                                      = 1,
	UI_ui_input_MAX                          = 2,
};

enum class EUI_vertical_alignment : uint8
{
	Center                                   = 0,
	Top                                      = 1,
	Bottom                                   = 2,
	Fill                                     = 3,
	UI_vertical_MAX                          = 4,
};

enum class EUI_widget_visibility : uint8
{
	Visible                                  = 0,
	Collapsed                                = 1,
	Hidden                                   = 2,
	UI_widget_MAX                            = 3,
};

struct VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	TMap<FVerseStringProperty_, class UObject*>   __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R) == 0x000008, "Wrong alignment on VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R");
static_assert(sizeof(VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R) == 0x000070, "Wrong size on VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R");
static_assert(offsetof(VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'VerseUI::Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct VerseUI::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseUI::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseUI::Ftuple_L_R");
static_assert(sizeof(VerseUI::Ftuple_L_R) == 0x000001, "Wrong size on VerseUI::Ftuple_L_R");
static_assert(offsetof(VerseUI::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseUI::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct FUI_player_ui_slot final
{
public:
	int64                                         __verse_0xEB688892_ZOrder;
	EUI_ui_input_mode                             __verse_0xF0FC54F2_InputMode;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FUI_player_ui_slot) == 0x000008, "Wrong alignment on FUI_player_ui_slot");
static_assert(sizeof(FUI_player_ui_slot) == 0x000010, "Wrong size on FUI_player_ui_slot");
static_assert(offsetof(FUI_player_ui_slot, __verse_0xEB688892_ZOrder) == 0x000000, "Member 'FUI_player_ui_slot::__verse_0xEB688892_ZOrder' has a wrong offset!");
static_assert(offsetof(FUI_player_ui_slot, __verse_0xF0FC54F2_InputMode) == 0x000008, "Member 'FUI_player_ui_slot::__verse_0xF0FC54F2_InputMode' has a wrong offset!");

struct Ftuple_Lwidget_Mplayer__ui__slot_R final
{
public:
	class UUI_widget*                             __verse_0x18E3F084_Elem0;
	struct FUI_player_ui_slot                     __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lwidget_Mplayer__ui__slot_R) == 0x000008, "Wrong alignment on Ftuple_Lwidget_Mplayer__ui__slot_R");
static_assert(sizeof(Ftuple_Lwidget_Mplayer__ui__slot_R) == 0x000018, "Wrong size on Ftuple_Lwidget_Mplayer__ui__slot_R");
static_assert(offsetof(Ftuple_Lwidget_Mplayer__ui__slot_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lwidget_Mplayer__ui__slot_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lwidget_Mplayer__ui__slot_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lwidget_Mplayer__ui__slot_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R final
{
public:
	class UUI_widget*                             __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector2                   __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
	uint8                                         Pad_29[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
	uint8                                         Pad_39[0x7];
	FOptionProperty_                              __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R) == 0x000058, "Wrong size on Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R, __verse_0xF64C4596_Elem3) == 0x000030, "Member 'Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R, __verse_0x4F74920B_Elem4) == 0x000040, "Member 'Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct FUI_anchors final
{
public:
	struct FSpatialMath_vector2                   __verse_0x91692725_Minimum;
	struct FSpatialMath_vector2                   __verse_0xDF63CF93_Maximum;
};
static_assert(alignof(FUI_anchors) == 0x000008, "Wrong alignment on FUI_anchors");
static_assert(sizeof(FUI_anchors) == 0x000020, "Wrong size on FUI_anchors");
static_assert(offsetof(FUI_anchors, __verse_0x91692725_Minimum) == 0x000000, "Member 'FUI_anchors::__verse_0x91692725_Minimum' has a wrong offset!");
static_assert(offsetof(FUI_anchors, __verse_0xDF63CF93_Maximum) == 0x000010, "Member 'FUI_anchors::__verse_0xDF63CF93_Maximum' has a wrong offset!");

struct FUI_margin final
{
public:
	double                                        __verse_0x88EBCF27_Left;
	double                                        __verse_0x97B55C26_Top;
	double                                        __verse_0x296C864F_Right;
	double                                        __verse_0x7AA421E3_Bottom;
};
static_assert(alignof(FUI_margin) == 0x000008, "Wrong alignment on FUI_margin");
static_assert(sizeof(FUI_margin) == 0x000020, "Wrong size on FUI_margin");
static_assert(offsetof(FUI_margin, __verse_0x88EBCF27_Left) == 0x000000, "Member 'FUI_margin::__verse_0x88EBCF27_Left' has a wrong offset!");
static_assert(offsetof(FUI_margin, __verse_0x97B55C26_Top) == 0x000008, "Member 'FUI_margin::__verse_0x97B55C26_Top' has a wrong offset!");
static_assert(offsetof(FUI_margin, __verse_0x296C864F_Right) == 0x000010, "Member 'FUI_margin::__verse_0x296C864F_Right' has a wrong offset!");
static_assert(offsetof(FUI_margin, __verse_0x7AA421E3_Bottom) == 0x000018, "Member 'FUI_margin::__verse_0x7AA421E3_Bottom' has a wrong offset!");

struct FUI_button_slot final
{
public:
	class UUI_widget*                             __verse_0xA5B83AD1_Widget;
	EUI_horizontal_alignment                      __verse_0xF13651F1_HorizontalAlignment;
	EUI_vertical_alignment                        __verse_0xA83057DE_VerticalAlignment;
	uint8                                         Pad_A[0x6];
	struct FUI_margin                             __verse_0x7F718DF5_Padding;
};
static_assert(alignof(FUI_button_slot) == 0x000008, "Wrong alignment on FUI_button_slot");
static_assert(sizeof(FUI_button_slot) == 0x000030, "Wrong size on FUI_button_slot");
static_assert(offsetof(FUI_button_slot, __verse_0xA5B83AD1_Widget) == 0x000000, "Member 'FUI_button_slot::__verse_0xA5B83AD1_Widget' has a wrong offset!");
static_assert(offsetof(FUI_button_slot, __verse_0xF13651F1_HorizontalAlignment) == 0x000008, "Member 'FUI_button_slot::__verse_0xF13651F1_HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FUI_button_slot, __verse_0xA83057DE_VerticalAlignment) == 0x000009, "Member 'FUI_button_slot::__verse_0xA83057DE_VerticalAlignment' has a wrong offset!");
static_assert(offsetof(FUI_button_slot, __verse_0x7F718DF5_Padding) == 0x000010, "Member 'FUI_button_slot::__verse_0x7F718DF5_Padding' has a wrong offset!");

struct FUI_canvas_slot final
{
public:
	struct FUI_anchors                            __verse_0x6C624651_Anchors;
	struct FUI_margin                             __verse_0xAE9C7630_Offsets;
	uint8                                         __verse_0x270727B9_SizeToContent : 1;
	uint8                                         Pad_41[0x7];
	struct FSpatialMath_vector2                   __verse_0xE9839A38_Alignment;
	int64                                         __verse_0xEB688892_ZOrder;
	class UUI_widget*                             __verse_0xA5B83AD1_Widget;
};
static_assert(alignof(FUI_canvas_slot) == 0x000008, "Wrong alignment on FUI_canvas_slot");
static_assert(sizeof(FUI_canvas_slot) == 0x000068, "Wrong size on FUI_canvas_slot");
static_assert(offsetof(FUI_canvas_slot, __verse_0x6C624651_Anchors) == 0x000000, "Member 'FUI_canvas_slot::__verse_0x6C624651_Anchors' has a wrong offset!");
static_assert(offsetof(FUI_canvas_slot, __verse_0xAE9C7630_Offsets) == 0x000020, "Member 'FUI_canvas_slot::__verse_0xAE9C7630_Offsets' has a wrong offset!");
static_assert(offsetof(FUI_canvas_slot, __verse_0xE9839A38_Alignment) == 0x000048, "Member 'FUI_canvas_slot::__verse_0xE9839A38_Alignment' has a wrong offset!");
static_assert(offsetof(FUI_canvas_slot, __verse_0xEB688892_ZOrder) == 0x000058, "Member 'FUI_canvas_slot::__verse_0xEB688892_ZOrder' has a wrong offset!");
static_assert(offsetof(FUI_canvas_slot, __verse_0xA5B83AD1_Widget) == 0x000060, "Member 'FUI_canvas_slot::__verse_0xA5B83AD1_Widget' has a wrong offset!");

struct FUI_overlay_slot final
{
public:
	class UUI_widget*                             __verse_0xA5B83AD1_Widget;
	EUI_horizontal_alignment                      __verse_0xF13651F1_HorizontalAlignment;
	EUI_vertical_alignment                        __verse_0xA83057DE_VerticalAlignment;
	uint8                                         Pad_A[0x6];
	struct FUI_margin                             __verse_0x7F718DF5_Padding;
};
static_assert(alignof(FUI_overlay_slot) == 0x000008, "Wrong alignment on FUI_overlay_slot");
static_assert(sizeof(FUI_overlay_slot) == 0x000030, "Wrong size on FUI_overlay_slot");
static_assert(offsetof(FUI_overlay_slot, __verse_0xA5B83AD1_Widget) == 0x000000, "Member 'FUI_overlay_slot::__verse_0xA5B83AD1_Widget' has a wrong offset!");
static_assert(offsetof(FUI_overlay_slot, __verse_0xF13651F1_HorizontalAlignment) == 0x000008, "Member 'FUI_overlay_slot::__verse_0xF13651F1_HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FUI_overlay_slot, __verse_0xA83057DE_VerticalAlignment) == 0x000009, "Member 'FUI_overlay_slot::__verse_0xA83057DE_VerticalAlignment' has a wrong offset!");
static_assert(offsetof(FUI_overlay_slot, __verse_0x7F718DF5_Padding) == 0x000010, "Member 'FUI_overlay_slot::__verse_0x7F718DF5_Padding' has a wrong offset!");

struct FUI_stack_box_slot final
{
public:
	class UUI_widget*                             __verse_0xA5B83AD1_Widget;
	EUI_horizontal_alignment                      __verse_0xF13651F1_HorizontalAlignment;
	EUI_vertical_alignment                        __verse_0xA83057DE_VerticalAlignment;
	uint8                                         Pad_A[0x6];
	struct FUI_margin                             __verse_0x7F718DF5_Padding;
	FOptionProperty_                              __verse_0x3F3ECCC9_Distribution;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FUI_stack_box_slot) == 0x000008, "Wrong alignment on FUI_stack_box_slot");
static_assert(sizeof(FUI_stack_box_slot) == 0x000040, "Wrong size on FUI_stack_box_slot");
static_assert(offsetof(FUI_stack_box_slot, __verse_0xA5B83AD1_Widget) == 0x000000, "Member 'FUI_stack_box_slot::__verse_0xA5B83AD1_Widget' has a wrong offset!");
static_assert(offsetof(FUI_stack_box_slot, __verse_0xF13651F1_HorizontalAlignment) == 0x000008, "Member 'FUI_stack_box_slot::__verse_0xF13651F1_HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FUI_stack_box_slot, __verse_0xA83057DE_VerticalAlignment) == 0x000009, "Member 'FUI_stack_box_slot::__verse_0xA83057DE_VerticalAlignment' has a wrong offset!");
static_assert(offsetof(FUI_stack_box_slot, __verse_0x7F718DF5_Padding) == 0x000010, "Member 'FUI_stack_box_slot::__verse_0x7F718DF5_Padding' has a wrong offset!");
static_assert(offsetof(FUI_stack_box_slot, __verse_0x3F3ECCC9_Distribution) == 0x000030, "Member 'FUI_stack_box_slot::__verse_0x3F3ECCC9_Distribution' has a wrong offset!");

struct FUI_user_widget_slot final
{
public:
	class UUI_widget*                             __verse_0xA5B83AD1_Widget;
	FVerseStringProperty_                         __verse_0x38D9A616_Name;
};
static_assert(alignof(FUI_user_widget_slot) == 0x000008, "Wrong alignment on FUI_user_widget_slot");
static_assert(sizeof(FUI_user_widget_slot) == 0x000018, "Wrong size on FUI_user_widget_slot");
static_assert(offsetof(FUI_user_widget_slot, __verse_0xA5B83AD1_Widget) == 0x000000, "Member 'FUI_user_widget_slot::__verse_0xA5B83AD1_Widget' has a wrong offset!");
static_assert(offsetof(FUI_user_widget_slot, __verse_0x38D9A616_Name) == 0x000008, "Member 'FUI_user_widget_slot::__verse_0x38D9A616_Name' has a wrong offset!");

struct FUI_widget_message final
{
public:
	class USimulation_player*                     __verse_0xE5E3B371_Player;
	class UUI_widget*                             __verse_0xB1B721CE_Source;
};
static_assert(alignof(FUI_widget_message) == 0x000008, "Wrong alignment on FUI_widget_message");
static_assert(sizeof(FUI_widget_message) == 0x000010, "Wrong size on FUI_widget_message");
static_assert(offsetof(FUI_widget_message, __verse_0xE5E3B371_Player) == 0x000000, "Member 'FUI_widget_message::__verse_0xE5E3B371_Player' has a wrong offset!");
static_assert(offsetof(FUI_widget_message, __verse_0xB1B721CE_Source) == 0x000008, "Member 'FUI_widget_message::__verse_0xB1B721CE_Source' has a wrong offset!");

}
