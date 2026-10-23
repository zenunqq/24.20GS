#pragma once

#include "Basic.hpp"

#include "VerseNative_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseUI_0_classes.hpp"
#include "VerseUI_structs.hpp"
#include "Verse_structs.hpp"
#include "EpicGamesTemporary_0_structs.hpp"
#include "VerseAssets_classes.hpp"

namespace SDK
{

class VerseUI::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseUI.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseUI::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseUI::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseUI::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseUI::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseUI::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseUI::U_SolarisSignatureFunctionOuter");

class VerseUI::UUI final : public UObject
{
public:
	static FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	static struct FUI_canvas_slot _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_Nvector2_M_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_M_Nvector2_R(const struct Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	static struct FUI_anchors UI_anchors_Factory();
	static struct FUI_button_slot UI_button_slot_Factory();
	static struct FUI_canvas_slot UI_canvas_slot_Factory();
	static struct FUI_margin UI_margin_Factory();
	static struct FUI_overlay_slot UI_overlay_slot_Factory();
	static struct FUI_player_ui_slot UI_player_ui_slot_Factory();
	static struct FUI_stack_box_slot UI_stack_box_slot_Factory();
	static struct FUI_user_widget_slot UI_user_widget_slot_Factory();
	static struct FUI_widget_message UI_widget_message_Factory();

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseUI.UI", true>();
	}
	static class VerseUI::UUI* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseUI::UUI>();
	}
};
static_assert(alignof(VerseUI::UUI) == 0x000008, "Wrong alignment on VerseUI::UUI");
static_assert(sizeof(VerseUI::UUI) == 0x000028, "Wrong size on VerseUI::UUI");

class UUI_player_ui final : public UVersePlayerUIEntityComponent
{
public:
	FVerseFunctionProperty_                       __verse_0xE8471EC0__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R;
	FVerseFunctionProperty_                       __verse_0x9CAF6A3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R;
	FVerseFunctionProperty_                       __verse_0x500B452A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R(const struct Ftuple_Lwidget_Mplayer__ui__slot_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_player_ui">();
	}
	static class UUI_player_ui* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_player_ui>();
	}
};
static_assert(alignof(UUI_player_ui) == 0x000008, "Wrong alignment on UUI_player_ui");
static_assert(sizeof(UUI_player_ui) == 0x000120, "Wrong size on UUI_player_ui");
static_assert(offsetof(UUI_player_ui, __verse_0xE8471EC0__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R) == 0x0000F0, "Member 'UUI_player_ui::__verse_0xE8471EC0__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R' has a wrong offset!");
static_assert(offsetof(UUI_player_ui, __verse_0x9CAF6A3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R) == 0x000100, "Member 'UUI_player_ui::__verse_0x9CAF6A3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R' has a wrong offset!");
static_assert(offsetof(UUI_player_ui, __verse_0x500B452A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R) == 0x000110, "Member 'UUI_player_ui::__verse_0x500B452A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R' has a wrong offset!");

class UUI_widget : public UVerseWidgetNativeBase
{
public:
	FVerseFunctionProperty_                       __verse_0x0D44E5E4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R;
	FVerseFunctionProperty_                       __verse_0x865377A1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility;
	FVerseFunctionProperty_                       __verse_0xBCEF040C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R;
	FVerseFunctionProperty_                       __verse_0x162E45CB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled;
	FVerseFunctionProperty_                       __verse_0xB06CF1AE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget;
	FVerseFunctionProperty_                       __verse_0x6548A497__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	EUI_widget_visibility _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R(EUI_widget_visibility __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_widget">();
	}
	static class UUI_widget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_widget>();
	}
};
static_assert(alignof(UUI_widget) == 0x000008, "Wrong alignment on UUI_widget");
static_assert(sizeof(UUI_widget) == 0x000098, "Wrong size on UUI_widget");
static_assert(offsetof(UUI_widget, __verse_0x0D44E5E4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R) == 0x000038, "Member 'UUI_widget::__verse_0x0D44E5E4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R' has a wrong offset!");
static_assert(offsetof(UUI_widget, __verse_0x865377A1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility) == 0x000048, "Member 'UUI_widget::__verse_0x865377A1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility' has a wrong offset!");
static_assert(offsetof(UUI_widget, __verse_0xBCEF040C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R) == 0x000058, "Member 'UUI_widget::__verse_0xBCEF040C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R' has a wrong offset!");
static_assert(offsetof(UUI_widget, __verse_0x162E45CB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled) == 0x000068, "Member 'UUI_widget::__verse_0x162E45CB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled' has a wrong offset!");
static_assert(offsetof(UUI_widget, __verse_0xB06CF1AE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget) == 0x000078, "Member 'UUI_widget::__verse_0xB06CF1AE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget' has a wrong offset!");
static_assert(offsetof(UUI_widget, __verse_0x6548A497__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget) == 0x000088, "Member 'UUI_widget::__verse_0x6548A497__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget' has a wrong offset!");

class UUI_material_block final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0x3E0643A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R;
	FVerseFunctionProperty_                       __verse_0x27C1539A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage;
	FVerseFunctionProperty_                       __verse_0x4706072B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R;
	FVerseFunctionProperty_                       __verse_0xC1A3BE6B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint;
	FVerseFunctionProperty_                       __verse_0xA495D8AC__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R;
	FVerseFunctionProperty_                       __verse_0x259457F8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize;
	class UAssets_material*                       __verse_0x800C064C_DefaultImage;
	struct FColors_color                          __verse_0xC0C585F9_DefaultTint;
	struct FSpatialMath_vector2                   __verse_0x4DD253BC_DefaultDesiredSize;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UAssets_material* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_material_block">();
	}
	static class UUI_material_block* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_material_block>();
	}
};
static_assert(alignof(UUI_material_block) == 0x000008, "Wrong alignment on UUI_material_block");
static_assert(sizeof(UUI_material_block) == 0x000128, "Wrong size on UUI_material_block");
static_assert(offsetof(UUI_material_block, __verse_0x3E0643A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R) == 0x000098, "Member 'UUI_material_block::__verse_0x3E0643A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0x27C1539A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage) == 0x0000A8, "Member 'UUI_material_block::__verse_0x27C1539A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0x4706072B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R) == 0x0000B8, "Member 'UUI_material_block::__verse_0x4706072B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0xC1A3BE6B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint) == 0x0000C8, "Member 'UUI_material_block::__verse_0xC1A3BE6B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0xA495D8AC__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R) == 0x0000D8, "Member 'UUI_material_block::__verse_0xA495D8AC__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0x259457F8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize) == 0x0000E8, "Member 'UUI_material_block::__verse_0x259457F8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0x800C064C_DefaultImage) == 0x0000F8, "Member 'UUI_material_block::__verse_0x800C064C_DefaultImage' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0xC0C585F9_DefaultTint) == 0x000100, "Member 'UUI_material_block::__verse_0xC0C585F9_DefaultTint' has a wrong offset!");
static_assert(offsetof(UUI_material_block, __verse_0x4DD253BC_DefaultDesiredSize) == 0x000118, "Member 'UUI_material_block::__verse_0x4DD253BC_DefaultDesiredSize' has a wrong offset!");

class UUI_canvas final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0x5E20D1F1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R;
	FVerseFunctionProperty_                       __verse_0x76C2E6B2__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R;
	TArray<struct FUI_canvas_slot>                __verse_0x5AE077E0_Slots;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R(const struct FUI_canvas_slot& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_canvas">();
	}
	static class UUI_canvas* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_canvas>();
	}
};
static_assert(alignof(UUI_canvas) == 0x000008, "Wrong alignment on UUI_canvas");
static_assert(sizeof(UUI_canvas) == 0x0000C8, "Wrong size on UUI_canvas");
static_assert(offsetof(UUI_canvas, __verse_0x5E20D1F1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R) == 0x000098, "Member 'UUI_canvas::__verse_0x5E20D1F1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R' has a wrong offset!");
static_assert(offsetof(UUI_canvas, __verse_0x76C2E6B2__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R) == 0x0000A8, "Member 'UUI_canvas::__verse_0x76C2E6B2__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R' has a wrong offset!");
static_assert(offsetof(UUI_canvas, __verse_0x5AE077E0_Slots) == 0x0000B8, "Member 'UUI_canvas::__verse_0x5AE077E0_Slots' has a wrong offset!");

class UUI_text_base : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0x62A68F6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R;
	FVerseFunctionProperty_                       __verse_0x0FA1D51C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText;
	FVerseFunctionProperty_                       __verse_0x54FF9ADE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R;
	FVerseFunctionProperty_                       __verse_0xBDD9B245__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification;
	FVerseFunctionProperty_                       __verse_0x6A27BF3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R;
	FVerseFunctionProperty_                       __verse_0xE154BECE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy;
	FVerseFunctionProperty_                       __verse_0x8E631792__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R;
	FVerseFunctionProperty_                       __verse_0x6A63948C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor;
	FVerseFunctionProperty_                       __verse_0x184A045A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R;
	FVerseFunctionProperty_                       __verse_0x27B864A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity;
	class UVerse_message*                         __verse_0xEDB05B46_DefaultText;
	struct FColors_color                          __verse_0x5DC97209_DefaultTextColor;
	double                                        __verse_0x1EA9AC7C_DefaultTextOpacity;
	EUI_text_justification                        __verse_0x616A37A2_DefaultJustification;
	EUI_text_overflow_policy                      __verse_0x5C09BE1D_DefaultOverflowPolicy;
	uint8                                         Pad_162[0x6];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	EUI_text_justification _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	EUI_text_overflow_policy _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R(EUI_text_justification __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R(EUI_text_overflow_policy __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_text_base">();
	}
	static class UUI_text_base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_text_base>();
	}
};
static_assert(alignof(UUI_text_base) == 0x000008, "Wrong alignment on UUI_text_base");
static_assert(sizeof(UUI_text_base) == 0x000168, "Wrong size on UUI_text_base");
static_assert(offsetof(UUI_text_base, __verse_0x62A68F6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R) == 0x000098, "Member 'UUI_text_base::__verse_0x62A68F6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x0FA1D51C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText) == 0x0000A8, "Member 'UUI_text_base::__verse_0x0FA1D51C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x54FF9ADE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R) == 0x0000B8, "Member 'UUI_text_base::__verse_0x54FF9ADE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0xBDD9B245__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification) == 0x0000C8, "Member 'UUI_text_base::__verse_0xBDD9B245__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x6A27BF3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R) == 0x0000D8, "Member 'UUI_text_base::__verse_0x6A27BF3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0xE154BECE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy) == 0x0000E8, "Member 'UUI_text_base::__verse_0xE154BECE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x8E631792__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R) == 0x0000F8, "Member 'UUI_text_base::__verse_0x8E631792__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x6A63948C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor) == 0x000108, "Member 'UUI_text_base::__verse_0x6A63948C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x184A045A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R) == 0x000118, "Member 'UUI_text_base::__verse_0x184A045A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x27B864A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity) == 0x000128, "Member 'UUI_text_base::__verse_0x27B864A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0xEDB05B46_DefaultText) == 0x000138, "Member 'UUI_text_base::__verse_0xEDB05B46_DefaultText' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x5DC97209_DefaultTextColor) == 0x000140, "Member 'UUI_text_base::__verse_0x5DC97209_DefaultTextColor' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x1EA9AC7C_DefaultTextOpacity) == 0x000158, "Member 'UUI_text_base::__verse_0x1EA9AC7C_DefaultTextOpacity' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x616A37A2_DefaultJustification) == 0x000160, "Member 'UUI_text_base::__verse_0x616A37A2_DefaultJustification' has a wrong offset!");
static_assert(offsetof(UUI_text_base, __verse_0x5C09BE1D_DefaultOverflowPolicy) == 0x000161, "Member 'UUI_text_base::__verse_0x5C09BE1D_DefaultOverflowPolicy' has a wrong offset!");

class UUI_text_block_internal final : public UUI_text_base
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_text_block_internal">();
	}
	static class UUI_text_block_internal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_text_block_internal>();
	}
};
static_assert(alignof(UUI_text_block_internal) == 0x000008, "Wrong alignment on UUI_text_block_internal");
static_assert(sizeof(UUI_text_block_internal) == 0x000168, "Wrong size on UUI_text_block_internal");

class UUI_button final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0x3902EF20__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R;
	FVerseFunctionProperty_                       __verse_0x337F5016__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick;
	struct FUI_button_slot                        __verse_0x9693E4CD_Slot;
	class UVerseEngine_subscribable_event*        __verse_0x6B2BB37E_OnClickInternal;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R(const struct FUI_button_slot& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_button">();
	}
	static class UUI_button* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_button>();
	}
};
static_assert(alignof(UUI_button) == 0x000008, "Wrong alignment on UUI_button");
static_assert(sizeof(UUI_button) == 0x0000F0, "Wrong size on UUI_button");
static_assert(offsetof(UUI_button, __verse_0x3902EF20__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R) == 0x000098, "Member 'UUI_button::__verse_0x3902EF20__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R' has a wrong offset!");
static_assert(offsetof(UUI_button, __verse_0x337F5016__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick) == 0x0000A8, "Member 'UUI_button::__verse_0x337F5016__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick' has a wrong offset!");
static_assert(offsetof(UUI_button, __verse_0x9693E4CD_Slot) == 0x0000B8, "Member 'UUI_button::__verse_0x9693E4CD_Slot' has a wrong offset!");
static_assert(offsetof(UUI_button, __verse_0x6B2BB37E_OnClickInternal) == 0x0000E8, "Member 'UUI_button::__verse_0x6B2BB37E_OnClickInternal' has a wrong offset!");

class UUI_color_block final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0xCAEFE031__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R;
	FVerseFunctionProperty_                       __verse_0x67ABD452__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor;
	FVerseFunctionProperty_                       __verse_0xAD1CAB99__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R;
	FVerseFunctionProperty_                       __verse_0x4EB70EF4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity;
	FVerseFunctionProperty_                       __verse_0xCB251B4C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R;
	FVerseFunctionProperty_                       __verse_0xFDF14587__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize;
	struct FColors_color                          __verse_0xA0FC371C_DefaultColor;
	double                                        __verse_0x5DA10C15_DefaultOpacity;
	struct FSpatialMath_vector2                   __verse_0x4DD253BC_DefaultDesiredSize;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_color_block">();
	}
	static class UUI_color_block* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_color_block>();
	}
};
static_assert(alignof(UUI_color_block) == 0x000008, "Wrong alignment on UUI_color_block");
static_assert(sizeof(UUI_color_block) == 0x000128, "Wrong size on UUI_color_block");
static_assert(offsetof(UUI_color_block, __verse_0xCAEFE031__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R) == 0x000098, "Member 'UUI_color_block::__verse_0xCAEFE031__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0x67ABD452__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor) == 0x0000A8, "Member 'UUI_color_block::__verse_0x67ABD452__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0xAD1CAB99__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R) == 0x0000B8, "Member 'UUI_color_block::__verse_0xAD1CAB99__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0x4EB70EF4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity) == 0x0000C8, "Member 'UUI_color_block::__verse_0x4EB70EF4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0xCB251B4C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R) == 0x0000D8, "Member 'UUI_color_block::__verse_0xCB251B4C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0xFDF14587__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize) == 0x0000E8, "Member 'UUI_color_block::__verse_0xFDF14587__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0xA0FC371C_DefaultColor) == 0x0000F8, "Member 'UUI_color_block::__verse_0xA0FC371C_DefaultColor' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0x5DA10C15_DefaultOpacity) == 0x000110, "Member 'UUI_color_block::__verse_0x5DA10C15_DefaultOpacity' has a wrong offset!");
static_assert(offsetof(UUI_color_block, __verse_0x4DD253BC_DefaultDesiredSize) == 0x000118, "Member 'UUI_color_block::__verse_0x4DD253BC_DefaultDesiredSize' has a wrong offset!");

class UUI_overlay final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0xA6255407__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R;
	FVerseFunctionProperty_                       __verse_0x8C9DA1CF__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R;
	TArray<struct FUI_overlay_slot>               __verse_0x5AE077E0_Slots;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R(const struct FUI_overlay_slot& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_overlay">();
	}
	static class UUI_overlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_overlay>();
	}
};
static_assert(alignof(UUI_overlay) == 0x000008, "Wrong alignment on UUI_overlay");
static_assert(sizeof(UUI_overlay) == 0x0000C8, "Wrong size on UUI_overlay");
static_assert(offsetof(UUI_overlay, __verse_0xA6255407__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R) == 0x000098, "Member 'UUI_overlay::__verse_0xA6255407__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R' has a wrong offset!");
static_assert(offsetof(UUI_overlay, __verse_0x8C9DA1CF__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R) == 0x0000A8, "Member 'UUI_overlay::__verse_0x8C9DA1CF__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R' has a wrong offset!");
static_assert(offsetof(UUI_overlay, __verse_0x5AE077E0_Slots) == 0x0000B8, "Member 'UUI_overlay::__verse_0x5AE077E0_Slots' has a wrong offset!");

class UUI_simple_button_internal final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0x7A4CBAF8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R;
	FVerseFunctionProperty_                       __verse_0xF7FC2FF5__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick;
	class UVerse_message*                         __verse_0xEDB05B46_DefaultText;
	class UVerseEngine_subscribable_event*        __verse_0x6B2BB37E_OnClickInternal;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_simple_button_internal">();
	}
	static class UUI_simple_button_internal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_simple_button_internal>();
	}
};
static_assert(alignof(UUI_simple_button_internal) == 0x000008, "Wrong alignment on UUI_simple_button_internal");
static_assert(sizeof(UUI_simple_button_internal) == 0x0000C8, "Wrong size on UUI_simple_button_internal");
static_assert(offsetof(UUI_simple_button_internal, __verse_0x7A4CBAF8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R) == 0x000098, "Member 'UUI_simple_button_internal::__verse_0x7A4CBAF8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R' has a wrong offset!");
static_assert(offsetof(UUI_simple_button_internal, __verse_0xF7FC2FF5__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick) == 0x0000A8, "Member 'UUI_simple_button_internal::__verse_0xF7FC2FF5__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick' has a wrong offset!");
static_assert(offsetof(UUI_simple_button_internal, __verse_0xEDB05B46_DefaultText) == 0x0000B8, "Member 'UUI_simple_button_internal::__verse_0xEDB05B46_DefaultText' has a wrong offset!");
static_assert(offsetof(UUI_simple_button_internal, __verse_0x6B2BB37E_OnClickInternal) == 0x0000C0, "Member 'UUI_simple_button_internal::__verse_0x6B2BB37E_OnClickInternal' has a wrong offset!");

class UUI_stack_box final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0xA38332DB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R;
	FVerseFunctionProperty_                       __verse_0xA1994F42__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R;
	TArray<struct FUI_stack_box_slot>             __verse_0x5AE077E0_Slots;
	EUI_orientation                               __verse_0x4DFAB8C8_Orientation;
	uint8                                         Pad_C9[0x7];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R(const struct FUI_stack_box_slot& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_stack_box">();
	}
	static class UUI_stack_box* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_stack_box>();
	}
};
static_assert(alignof(UUI_stack_box) == 0x000008, "Wrong alignment on UUI_stack_box");
static_assert(sizeof(UUI_stack_box) == 0x0000D0, "Wrong size on UUI_stack_box");
static_assert(offsetof(UUI_stack_box, __verse_0xA38332DB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R) == 0x000098, "Member 'UUI_stack_box::__verse_0xA38332DB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R' has a wrong offset!");
static_assert(offsetof(UUI_stack_box, __verse_0xA1994F42__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R) == 0x0000A8, "Member 'UUI_stack_box::__verse_0xA1994F42__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R' has a wrong offset!");
static_assert(offsetof(UUI_stack_box, __verse_0x5AE077E0_Slots) == 0x0000B8, "Member 'UUI_stack_box::__verse_0x5AE077E0_Slots' has a wrong offset!");
static_assert(offsetof(UUI_stack_box, __verse_0x4DFAB8C8_Orientation) == 0x0000C8, "Member 'UUI_stack_box::__verse_0x4DFAB8C8_Orientation' has a wrong offset!");

class UUI_texture_block final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0x2E2BFF09__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture__2d_R;
	FVerseFunctionProperty_                       __verse_0x6D457009__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage;
	FVerseFunctionProperty_                       __verse_0x529AC274__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R;
	FVerseFunctionProperty_                       __verse_0xDBC5F34C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint;
	FVerseFunctionProperty_                       __verse_0x4E2F72CD__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R;
	FVerseFunctionProperty_                       __verse_0xFD3FDB6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize;
	FVerseFunctionProperty_                       __verse_0x735C6B82__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tile_R;
	FVerseFunctionProperty_                       __verse_0xB26FF2D8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling;
	class UAssets_texture_2d*                     __verse_0x800C064C_DefaultImage;
	struct FColors_color                          __verse_0xC0C585F9_DefaultTint;
	struct FSpatialMath_vector2                   __verse_0x4DD253BC_DefaultDesiredSize;
	EUI_image_tile                                __verse_0x772B7FFC_DefaultTiling;
	uint8                                         Pad_149[0x7];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UAssets_texture_2d* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	EUI_image_tile _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint(const struct VerseUI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture__2d_R(class UAssets_texture_2d* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tile_R(EUI_image_tile __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_texture_block">();
	}
	static class UUI_texture_block* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_texture_block>();
	}
};
static_assert(alignof(UUI_texture_block) == 0x000008, "Wrong alignment on UUI_texture_block");
static_assert(sizeof(UUI_texture_block) == 0x000150, "Wrong size on UUI_texture_block");
static_assert(offsetof(UUI_texture_block, __verse_0x2E2BFF09__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture__2d_R) == 0x000098, "Member 'UUI_texture_block::__verse_0x2E2BFF09__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture__2d_R' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x6D457009__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage) == 0x0000A8, "Member 'UUI_texture_block::__verse_0x6D457009__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x529AC274__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R) == 0x0000B8, "Member 'UUI_texture_block::__verse_0x529AC274__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0xDBC5F34C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint) == 0x0000C8, "Member 'UUI_texture_block::__verse_0xDBC5F34C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x4E2F72CD__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R) == 0x0000D8, "Member 'UUI_texture_block::__verse_0x4E2F72CD__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0xFD3FDB6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize) == 0x0000E8, "Member 'UUI_texture_block::__verse_0xFD3FDB6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x735C6B82__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tile_R) == 0x0000F8, "Member 'UUI_texture_block::__verse_0x735C6B82__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tile_R' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0xB26FF2D8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling) == 0x000108, "Member 'UUI_texture_block::__verse_0xB26FF2D8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x800C064C_DefaultImage) == 0x000118, "Member 'UUI_texture_block::__verse_0x800C064C_DefaultImage' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0xC0C585F9_DefaultTint) == 0x000120, "Member 'UUI_texture_block::__verse_0xC0C585F9_DefaultTint' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x4DD253BC_DefaultDesiredSize) == 0x000138, "Member 'UUI_texture_block::__verse_0x4DD253BC_DefaultDesiredSize' has a wrong offset!");
static_assert(offsetof(UUI_texture_block, __verse_0x772B7FFC_DefaultTiling) == 0x000148, "Member 'UUI_texture_block::__verse_0x772B7FFC_DefaultTiling' has a wrong offset!");

class UUI_user_widget final : public UUI_widget
{
public:
	FVerseFunctionProperty_                       __verse_0xCF873285__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R;
	class UUI_widget_class*                       __verse_0x26CD6686_Asset;
	TArray<struct FUI_user_widget_slot>           __verse_0x5AE077E0_Slots;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R(const struct FUI_user_widget_slot& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_user_widget">();
	}
	static class UUI_user_widget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_user_widget>();
	}
};
static_assert(alignof(UUI_user_widget) == 0x000008, "Wrong alignment on UUI_user_widget");
static_assert(sizeof(UUI_user_widget) == 0x0000C0, "Wrong size on UUI_user_widget");
static_assert(offsetof(UUI_user_widget, __verse_0xCF873285__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R) == 0x000098, "Member 'UUI_user_widget::__verse_0xCF873285__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R' has a wrong offset!");
static_assert(offsetof(UUI_user_widget, __verse_0x26CD6686_Asset) == 0x0000A8, "Member 'UUI_user_widget::__verse_0x26CD6686_Asset' has a wrong offset!");
static_assert(offsetof(UUI_user_widget, __verse_0x5AE077E0_Slots) == 0x0000B0, "Member 'UUI_user_widget::__verse_0x5AE077E0_Slots' has a wrong offset!");

class UUI_widget_class final : public UAssets_client_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UI_widget_class">();
	}
	static class UUI_widget_class* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_widget_class>();
	}
};
static_assert(alignof(UUI_widget_class) == 0x000008, "Wrong alignment on UUI_widget_class");
static_assert(sizeof(UUI_widget_class) == 0x0000D8, "Wrong size on UUI_widget_class");

}
