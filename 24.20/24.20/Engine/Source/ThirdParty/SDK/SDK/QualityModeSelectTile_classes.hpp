#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UQualityModeSelectTile_C final : public UFortQualityModeTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       InAnOutro;
	class UWidgetAnimation*                       ConfirmSeleccion;
	class UWidgetAnimation*                       GameModeSelection;
	class UCommonBorder*                          Border_Recommended;
	class UImage*                                 ConfirmSelectionFlash;
	class UImage*                                 ConfirmSelectionShine;
	class UImage*                                 DisabledGray;
	class UImage*                                 Image_140;
	class UImage*                                 SelectedIcon;
	class UCommonTextBlock*                       T_Recommended;
	class UBorder*                                Tag_Selected;
	class UCommonTextBlock*                       TextBlock_AdditionalDownloadSize;
	class UCommonTextBlock*                       TextBlock_QualityDescription;
	class UCommonTextBlock*                       TextBlock_QualityLevelName;
	class UCommonTextBlock*                       TextBlock_TotalBuildSize;
	class UImage*                                 TileArt;
	class UImage*                                 UnhoveredVignette;
	bool                                          bIsRecommendedLevel;

public:
	void ExecuteUbergraph_QualityModeSelectTile(int32 EntryPoint);
	void Setup();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnSizeInfoReceived();
	void OnSelectedStateChanged(bool bIsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QualityModeSelectTile_C">();
	}
	static class UQualityModeSelectTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQualityModeSelectTile_C>();
	}
};
static_assert(alignof(UQualityModeSelectTile_C) == 0x000010, "Wrong alignment on UQualityModeSelectTile_C");
static_assert(sizeof(UQualityModeSelectTile_C) == 0x0014F0, "Wrong size on UQualityModeSelectTile_C");
static_assert(offsetof(UQualityModeSelectTile_C, UberGraphFrame) == 0x001450, "Member 'UQualityModeSelectTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, InAnOutro) == 0x001458, "Member 'UQualityModeSelectTile_C::InAnOutro' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, ConfirmSeleccion) == 0x001460, "Member 'UQualityModeSelectTile_C::ConfirmSeleccion' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, GameModeSelection) == 0x001468, "Member 'UQualityModeSelectTile_C::GameModeSelection' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, Border_Recommended) == 0x001470, "Member 'UQualityModeSelectTile_C::Border_Recommended' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, ConfirmSelectionFlash) == 0x001478, "Member 'UQualityModeSelectTile_C::ConfirmSelectionFlash' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, ConfirmSelectionShine) == 0x001480, "Member 'UQualityModeSelectTile_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, DisabledGray) == 0x001488, "Member 'UQualityModeSelectTile_C::DisabledGray' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, Image_140) == 0x001490, "Member 'UQualityModeSelectTile_C::Image_140' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, SelectedIcon) == 0x001498, "Member 'UQualityModeSelectTile_C::SelectedIcon' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, T_Recommended) == 0x0014A0, "Member 'UQualityModeSelectTile_C::T_Recommended' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, Tag_Selected) == 0x0014A8, "Member 'UQualityModeSelectTile_C::Tag_Selected' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, TextBlock_AdditionalDownloadSize) == 0x0014B0, "Member 'UQualityModeSelectTile_C::TextBlock_AdditionalDownloadSize' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, TextBlock_QualityDescription) == 0x0014B8, "Member 'UQualityModeSelectTile_C::TextBlock_QualityDescription' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, TextBlock_QualityLevelName) == 0x0014C0, "Member 'UQualityModeSelectTile_C::TextBlock_QualityLevelName' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, TextBlock_TotalBuildSize) == 0x0014C8, "Member 'UQualityModeSelectTile_C::TextBlock_TotalBuildSize' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, TileArt) == 0x0014D0, "Member 'UQualityModeSelectTile_C::TileArt' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, UnhoveredVignette) == 0x0014D8, "Member 'UQualityModeSelectTile_C::UnhoveredVignette' has a wrong offset!");
static_assert(offsetof(UQualityModeSelectTile_C, bIsRecommendedLevel) == 0x0014E0, "Member 'UQualityModeSelectTile_C::bIsRecommendedLevel' has a wrong offset!");

}
