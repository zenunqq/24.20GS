#pragma once

#include "Basic.hpp"

#include "FrontendFXData_structs.hpp"

namespace SDK
{

struct FFrontendBackgroundData final
{
public:
	TSoftObjectPtr<class UTexture>                Texture_2_3547D6284A0E2943DB5EC88EE87E97DF;
	TSoftObjectPtr<class UMaterialInstance>       Material_6_CE9D2295415B51CDF1ED17B4FF554781;
	TSoftObjectPtr<class UMaterialInstance>       PreBlurMaterial_7_D600AA604396EA3D679C70876327DEF8;
	TArray<struct FFrontendFXData>                SpawnFXList_15_1A6BE00B475CC5544CE786879F76C49C;
	float                                         FadeGrid_20_F2E82D3040D8341B710155A8337BCAB3;
	float                                         FadeFloortoBlack_22_216AC34A4AAB1E55AED6918145AD572F;
};
static_assert(alignof(FFrontendBackgroundData) == 0x000008, "Wrong alignment on FFrontendBackgroundData");
static_assert(sizeof(FFrontendBackgroundData) == 0x000090, "Wrong size on FFrontendBackgroundData");
static_assert(offsetof(FFrontendBackgroundData, Texture_2_3547D6284A0E2943DB5EC88EE87E97DF) == 0x000000, "Member 'FFrontendBackgroundData::Texture_2_3547D6284A0E2943DB5EC88EE87E97DF' has a wrong offset!");
static_assert(offsetof(FFrontendBackgroundData, Material_6_CE9D2295415B51CDF1ED17B4FF554781) == 0x000028, "Member 'FFrontendBackgroundData::Material_6_CE9D2295415B51CDF1ED17B4FF554781' has a wrong offset!");
static_assert(offsetof(FFrontendBackgroundData, PreBlurMaterial_7_D600AA604396EA3D679C70876327DEF8) == 0x000050, "Member 'FFrontendBackgroundData::PreBlurMaterial_7_D600AA604396EA3D679C70876327DEF8' has a wrong offset!");
static_assert(offsetof(FFrontendBackgroundData, SpawnFXList_15_1A6BE00B475CC5544CE786879F76C49C) == 0x000078, "Member 'FFrontendBackgroundData::SpawnFXList_15_1A6BE00B475CC5544CE786879F76C49C' has a wrong offset!");
static_assert(offsetof(FFrontendBackgroundData, FadeGrid_20_F2E82D3040D8341B710155A8337BCAB3) == 0x000088, "Member 'FFrontendBackgroundData::FadeGrid_20_F2E82D3040D8341B710155A8337BCAB3' has a wrong offset!");
static_assert(offsetof(FFrontendBackgroundData, FadeFloortoBlack_22_216AC34A4AAB1E55AED6918145AD572F) == 0x00008C, "Member 'FFrontendBackgroundData::FadeFloortoBlack_22_216AC34A4AAB1E55AED6918145AD572F' has a wrong offset!");

}
