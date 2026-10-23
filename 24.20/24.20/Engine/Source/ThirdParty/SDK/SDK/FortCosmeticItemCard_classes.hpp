#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UFortCosmeticItemCard_C final : public UFortCosmeticItemCard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       archived;
	class UWidgetAnimation*                       Anim_Hover;
	class UMaterialInstanceDynamic*               ImageMaterial_NewItemCard;
	double                                        BaseIconScale;
	double                                        AnimationIconScale;

public:
	void OnUpdateItemCardMaterial(class UMaterialInterface* Material);
	void OnUpdateItemCardIcon(class UTexture2D* Icon, float IconScale);
	void OnUpdateEnhanced(bool bEnhanced);
	void OnUnhover();
	void OnSizeChanged(float InCardWidth);
	void OnHover();
	void HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, bool ShowAsArchived, bool UseAnimations);
	void HandleUpdateRarity(const struct FFortColorPalette& RarityColors);
	void ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint);
	void ArchiveAnimation(bool IsArchived, bool UseAnimations);
	void UpdateImageIconScale();
	void SequenceEvent__ENTRYPOINTFortCosmeticItemCard();
	void OnUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem, bool bShowAsArchived, bool bUseAnimations);
	void OnUpdateSeriesOrRarityColors(const struct FFortColorPalette& ColorPalette);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortCosmeticItemCard_C">();
	}
	static class UFortCosmeticItemCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCosmeticItemCard_C>();
	}
};
static_assert(alignof(UFortCosmeticItemCard_C) == 0x000008, "Wrong alignment on UFortCosmeticItemCard_C");
static_assert(sizeof(UFortCosmeticItemCard_C) == 0x000360, "Wrong size on UFortCosmeticItemCard_C");
static_assert(offsetof(UFortCosmeticItemCard_C, UberGraphFrame) == 0x000330, "Member 'UFortCosmeticItemCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortCosmeticItemCard_C, archived) == 0x000338, "Member 'UFortCosmeticItemCard_C::archived' has a wrong offset!");
static_assert(offsetof(UFortCosmeticItemCard_C, Anim_Hover) == 0x000340, "Member 'UFortCosmeticItemCard_C::Anim_Hover' has a wrong offset!");
static_assert(offsetof(UFortCosmeticItemCard_C, ImageMaterial_NewItemCard) == 0x000348, "Member 'UFortCosmeticItemCard_C::ImageMaterial_NewItemCard' has a wrong offset!");
static_assert(offsetof(UFortCosmeticItemCard_C, BaseIconScale) == 0x000350, "Member 'UFortCosmeticItemCard_C::BaseIconScale' has a wrong offset!");
static_assert(offsetof(UFortCosmeticItemCard_C, AnimationIconScale) == 0x000358, "Member 'UFortCosmeticItemCard_C::AnimationIconScale' has a wrong offset!");

}
