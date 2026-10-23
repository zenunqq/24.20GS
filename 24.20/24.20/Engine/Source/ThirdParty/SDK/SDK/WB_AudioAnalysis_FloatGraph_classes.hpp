#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWB_AudioAnalysis_FloatGraph_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCanvasPanel*                           CanvasPanel_0;
	class UTextBlock*                             Label_;
	class UProgressBar*                           ProgressBar;
	class UTextBlock*                             Value;
	struct FVector2D                              Position;
	struct FVector2D                              Size;
	bool                                          calculated;
	uint8                                         Pad_2B1[0x3];
	class FName                                   Parameter;
	TArray<struct FVector2D>                      Points;
	int32                                         numPoints;
	struct FLinearColor                           Color;
	int32                                         VectorIndex;
	class UMaterialParameterCollection*           Collection;

public:
	void calcWidgetSize(const struct FGeometry& geom);
	void Construct();
	void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32 EntryPoint);
	void Initialize_MPC(class FName Parameter_0, class UMaterialParameterCollection* Collection_0, int32 VectorIndex_0);
	void PreConstruct(bool IsDesignTime);
	void Set_Value(double Value_0);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

	void OnPaint(struct FPaintContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AudioAnalysis_FloatGraph_C">();
	}
	static class UWB_AudioAnalysis_FloatGraph_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AudioAnalysis_FloatGraph_C>();
	}
};
static_assert(alignof(UWB_AudioAnalysis_FloatGraph_C) == 0x000008, "Wrong alignment on UWB_AudioAnalysis_FloatGraph_C");
static_assert(sizeof(UWB_AudioAnalysis_FloatGraph_C) == 0x0002E8, "Wrong size on UWB_AudioAnalysis_FloatGraph_C");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, UberGraphFrame) == 0x000268, "Member 'UWB_AudioAnalysis_FloatGraph_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, CanvasPanel_0) == 0x000270, "Member 'UWB_AudioAnalysis_FloatGraph_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Label_) == 0x000278, "Member 'UWB_AudioAnalysis_FloatGraph_C::Label_' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, ProgressBar) == 0x000280, "Member 'UWB_AudioAnalysis_FloatGraph_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Value) == 0x000288, "Member 'UWB_AudioAnalysis_FloatGraph_C::Value' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Position) == 0x000290, "Member 'UWB_AudioAnalysis_FloatGraph_C::Position' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Size) == 0x0002A0, "Member 'UWB_AudioAnalysis_FloatGraph_C::Size' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, calculated) == 0x0002B0, "Member 'UWB_AudioAnalysis_FloatGraph_C::calculated' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Parameter) == 0x0002B4, "Member 'UWB_AudioAnalysis_FloatGraph_C::Parameter' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Points) == 0x0002B8, "Member 'UWB_AudioAnalysis_FloatGraph_C::Points' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, numPoints) == 0x0002C8, "Member 'UWB_AudioAnalysis_FloatGraph_C::numPoints' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Color) == 0x0002CC, "Member 'UWB_AudioAnalysis_FloatGraph_C::Color' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, VectorIndex) == 0x0002DC, "Member 'UWB_AudioAnalysis_FloatGraph_C::VectorIndex' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Collection) == 0x0002E0, "Member 'UWB_AudioAnalysis_FloatGraph_C::Collection' has a wrong offset!");

}
