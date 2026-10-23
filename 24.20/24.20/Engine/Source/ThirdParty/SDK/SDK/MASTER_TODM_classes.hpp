#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AMASTER_TODM_C : public AFortTimeOfDayManager
{
public:
	uint8                                         Pad_FE8[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  HeavySSAO_Postprocess;
	class UPostProcessComponent*                  EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_;
	float                                         New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF;
	float                                         New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF;
	float                                         New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF;
	float                                         New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF;
	ETimelineDirection                            New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF;
	uint8                                         Pad_1019[0x7];
	class UTimelineComponent*                     New_Storm_Timeline;
	float                                         FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285;
	float                                         FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285;
	float                                         FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285;
	ETimelineDirection                            FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285;
	uint8                                         Pad_1035[0x3];
	class UTimelineComponent*                     FlashLightning;
	double                                        WindSpeed;
	double                                        RandomWeatherWaitTime;
	double                                        CurrentAmountOfRandomWeatherTimeLeft;
	double                                        NewWeatherLerpAmount;
	double                                        WindStrength;
	double                                        FutureWindStrength;
	double                                        FutureWindSpeed;
	bool                                          bPickNewWindConditions;
	uint8                                         Pad_1079[0x7];
	double                                        LightningStrength;
	double                                        ThreatCloudStormAmount;
	bool                                          UseRainWithStorms;
	bool                                          Play_a_Particle_Effect_Near_the_players_Feet;
	bool                                          WindEffects_Should_be_Active;
	uint8                                         Pad_1093[0x5];
	class UParticleSystemComponent*               Storm_Foot_Particle_Outdoor;
	class UParticleSystem*                        Storm_Foot_Particle_While_on_Terrain;
	class UParticleSystemComponent*               Storm_Foot_Particle_Indoor;
	class UParticleSystem*                        Storm_Foot_Particle_While_NOT_on_Terrain;
	double                                        Storm_Wind_Strength;
	bool                                          Generate_Foliage_Wind_Gusts;
	uint8                                         Pad_10C1[0x7];
	struct FTimerHandle                           LightningStrikeTimerHandle;
	struct FLinearColor                           PreviousDirectionalLightColor;
	struct FLinearColor                           Lightning_Flash_Color;
	double                                        Lightning_Flash_Timeline_Min;
	double                                        Lightning_Flash_Timeline_Max;
	struct FLinearColor                           SkyboxFogMorningColor;
	struct FLinearColor                           SkyboxFogMorningLitColor;
	double                                        SkyboxFogMorningDistance;
	double                                        SkyboxFogMorningDiffuseAmount;
	double                                        SkyboxFogMorningEmissiveAmount;
	double                                        SkyboxFogMorningLitLength;
	double                                        SkyboxFogMorningLitRotation;
	double                                        SkyboxFogMorningLitOffset;
	struct FLinearColor                           SkyboxFogDayColor;
	struct FLinearColor                           SkyboxFogDayLitColor;
	double                                        SkyboxFogDayDistance;
	double                                        SkyboxFogDayDiffuseAmount;
	double                                        SkyboxFogDayEmissiveAmount;
	double                                        SkyboxFogDayLitLength;
	double                                        SkyboxFogDayLitRotation;
	double                                        SkyboxFogDayLitOffset;
	struct FLinearColor                           SkyboxFogEveningColor;
	struct FLinearColor                           SkyboxFogEveningLitColor;
	double                                        SkyboxFogEveningDistance;
	double                                        SkyboxFogEveningDiffuseAmount;
	double                                        SkyboxFogEveningEmissiveAmount;
	double                                        SkyboxFogEveningLitLength;
	double                                        SkyboxFogEveningLitRotation;
	double                                        SkyboxFogEveningLitOffset;
	struct FLinearColor                           SkyboxFogNightColor;
	struct FLinearColor                           SkyboxFogNightLitColor;
	double                                        SkyboxFogNightDistance;
	double                                        SkyboxFogNightDiffuseAmount;
	double                                        SkyboxFogNightEmissiveAmount;
	double                                        SkyboxFogNightLitLength;
	double                                        SkyboxFogNightLitRotation;
	double                                        SkyboxFogNightLitOffset;
	double                                        World_Border_Cloud_Base_Color_Brightness;
	struct FLinearColor                           World_Border_Cloud_Sub_Surface_Color_and_Opacity;
	bool                                          EnableCometDynamicPlacement;
	uint8                                         Pad_1259[0x7];
	struct FVector4                               Night;
	struct FVector4                               Evening;
	struct FVector4                               Day;
	struct FVector4                               Morning;

public:
	void UserConstructionScript();
	void UpdateSSAO();
	void StartStorm();
	void SetHeavySSAO();
	void ReceiveBeginPlay();
	void New_Storm_Timeline__UpdateFunc();
	void OnStormStart();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void OnStormEnd();
	void FlashLightning__FinishedFunc();
	void New_Storm_Timeline__FinishedFunc();
	void ExecuteUbergraph_MASTER_TODM(int32 EntryPoint);
	void LightningStrike();
	void EnableHDRRendering();
	void FlashLightning__UpdateFunc();
	void EmptyTransform(struct FTransform* Transform);
	void DisableLightAndFog(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MASTER_TODM_C">();
	}
	static class AMASTER_TODM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMASTER_TODM_C>();
	}
};
static_assert(alignof(AMASTER_TODM_C) == 0x000010, "Wrong alignment on AMASTER_TODM_C");
static_assert(sizeof(AMASTER_TODM_C) == 0x0012E0, "Wrong size on AMASTER_TODM_C");
static_assert(offsetof(AMASTER_TODM_C, UberGraphFrame) == 0x000FF0, "Member 'AMASTER_TODM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, HeavySSAO_Postprocess) == 0x000FF8, "Member 'AMASTER_TODM_C::HeavySSAO_Postprocess' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_) == 0x001000, "Member 'AMASTER_TODM_C::EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF) == 0x001008, "Member 'AMASTER_TODM_C::New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF) == 0x00100C, "Member 'AMASTER_TODM_C::New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF) == 0x001010, "Member 'AMASTER_TODM_C::New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF) == 0x001014, "Member 'AMASTER_TODM_C::New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF) == 0x001018, "Member 'AMASTER_TODM_C::New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, New_Storm_Timeline) == 0x001020, "Member 'AMASTER_TODM_C::New_Storm_Timeline' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285) == 0x001028, "Member 'AMASTER_TODM_C::FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285) == 0x00102C, "Member 'AMASTER_TODM_C::FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285) == 0x001030, "Member 'AMASTER_TODM_C::FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285) == 0x001034, "Member 'AMASTER_TODM_C::FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FlashLightning) == 0x001038, "Member 'AMASTER_TODM_C::FlashLightning' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, WindSpeed) == 0x001040, "Member 'AMASTER_TODM_C::WindSpeed' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, RandomWeatherWaitTime) == 0x001048, "Member 'AMASTER_TODM_C::RandomWeatherWaitTime' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, CurrentAmountOfRandomWeatherTimeLeft) == 0x001050, "Member 'AMASTER_TODM_C::CurrentAmountOfRandomWeatherTimeLeft' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, NewWeatherLerpAmount) == 0x001058, "Member 'AMASTER_TODM_C::NewWeatherLerpAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, WindStrength) == 0x001060, "Member 'AMASTER_TODM_C::WindStrength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FutureWindStrength) == 0x001068, "Member 'AMASTER_TODM_C::FutureWindStrength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, FutureWindSpeed) == 0x001070, "Member 'AMASTER_TODM_C::FutureWindSpeed' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, bPickNewWindConditions) == 0x001078, "Member 'AMASTER_TODM_C::bPickNewWindConditions' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, LightningStrength) == 0x001080, "Member 'AMASTER_TODM_C::LightningStrength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, ThreatCloudStormAmount) == 0x001088, "Member 'AMASTER_TODM_C::ThreatCloudStormAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, UseRainWithStorms) == 0x001090, "Member 'AMASTER_TODM_C::UseRainWithStorms' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Play_a_Particle_Effect_Near_the_players_Feet) == 0x001091, "Member 'AMASTER_TODM_C::Play_a_Particle_Effect_Near_the_players_Feet' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, WindEffects_Should_be_Active) == 0x001092, "Member 'AMASTER_TODM_C::WindEffects_Should_be_Active' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Storm_Foot_Particle_Outdoor) == 0x001098, "Member 'AMASTER_TODM_C::Storm_Foot_Particle_Outdoor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Storm_Foot_Particle_While_on_Terrain) == 0x0010A0, "Member 'AMASTER_TODM_C::Storm_Foot_Particle_While_on_Terrain' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Storm_Foot_Particle_Indoor) == 0x0010A8, "Member 'AMASTER_TODM_C::Storm_Foot_Particle_Indoor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Storm_Foot_Particle_While_NOT_on_Terrain) == 0x0010B0, "Member 'AMASTER_TODM_C::Storm_Foot_Particle_While_NOT_on_Terrain' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Storm_Wind_Strength) == 0x0010B8, "Member 'AMASTER_TODM_C::Storm_Wind_Strength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Generate_Foliage_Wind_Gusts) == 0x0010C0, "Member 'AMASTER_TODM_C::Generate_Foliage_Wind_Gusts' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, LightningStrikeTimerHandle) == 0x0010C8, "Member 'AMASTER_TODM_C::LightningStrikeTimerHandle' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, PreviousDirectionalLightColor) == 0x0010D0, "Member 'AMASTER_TODM_C::PreviousDirectionalLightColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Lightning_Flash_Color) == 0x0010E0, "Member 'AMASTER_TODM_C::Lightning_Flash_Color' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Lightning_Flash_Timeline_Min) == 0x0010F0, "Member 'AMASTER_TODM_C::Lightning_Flash_Timeline_Min' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Lightning_Flash_Timeline_Max) == 0x0010F8, "Member 'AMASTER_TODM_C::Lightning_Flash_Timeline_Max' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningColor) == 0x001100, "Member 'AMASTER_TODM_C::SkyboxFogMorningColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningLitColor) == 0x001110, "Member 'AMASTER_TODM_C::SkyboxFogMorningLitColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningDistance) == 0x001120, "Member 'AMASTER_TODM_C::SkyboxFogMorningDistance' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningDiffuseAmount) == 0x001128, "Member 'AMASTER_TODM_C::SkyboxFogMorningDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningEmissiveAmount) == 0x001130, "Member 'AMASTER_TODM_C::SkyboxFogMorningEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningLitLength) == 0x001138, "Member 'AMASTER_TODM_C::SkyboxFogMorningLitLength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningLitRotation) == 0x001140, "Member 'AMASTER_TODM_C::SkyboxFogMorningLitRotation' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogMorningLitOffset) == 0x001148, "Member 'AMASTER_TODM_C::SkyboxFogMorningLitOffset' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayColor) == 0x001150, "Member 'AMASTER_TODM_C::SkyboxFogDayColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayLitColor) == 0x001160, "Member 'AMASTER_TODM_C::SkyboxFogDayLitColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayDistance) == 0x001170, "Member 'AMASTER_TODM_C::SkyboxFogDayDistance' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayDiffuseAmount) == 0x001178, "Member 'AMASTER_TODM_C::SkyboxFogDayDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayEmissiveAmount) == 0x001180, "Member 'AMASTER_TODM_C::SkyboxFogDayEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayLitLength) == 0x001188, "Member 'AMASTER_TODM_C::SkyboxFogDayLitLength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayLitRotation) == 0x001190, "Member 'AMASTER_TODM_C::SkyboxFogDayLitRotation' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogDayLitOffset) == 0x001198, "Member 'AMASTER_TODM_C::SkyboxFogDayLitOffset' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningColor) == 0x0011A0, "Member 'AMASTER_TODM_C::SkyboxFogEveningColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningLitColor) == 0x0011B0, "Member 'AMASTER_TODM_C::SkyboxFogEveningLitColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningDistance) == 0x0011C0, "Member 'AMASTER_TODM_C::SkyboxFogEveningDistance' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningDiffuseAmount) == 0x0011C8, "Member 'AMASTER_TODM_C::SkyboxFogEveningDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningEmissiveAmount) == 0x0011D0, "Member 'AMASTER_TODM_C::SkyboxFogEveningEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningLitLength) == 0x0011D8, "Member 'AMASTER_TODM_C::SkyboxFogEveningLitLength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningLitRotation) == 0x0011E0, "Member 'AMASTER_TODM_C::SkyboxFogEveningLitRotation' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogEveningLitOffset) == 0x0011E8, "Member 'AMASTER_TODM_C::SkyboxFogEveningLitOffset' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightColor) == 0x0011F0, "Member 'AMASTER_TODM_C::SkyboxFogNightColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightLitColor) == 0x001200, "Member 'AMASTER_TODM_C::SkyboxFogNightLitColor' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightDistance) == 0x001210, "Member 'AMASTER_TODM_C::SkyboxFogNightDistance' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightDiffuseAmount) == 0x001218, "Member 'AMASTER_TODM_C::SkyboxFogNightDiffuseAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightEmissiveAmount) == 0x001220, "Member 'AMASTER_TODM_C::SkyboxFogNightEmissiveAmount' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightLitLength) == 0x001228, "Member 'AMASTER_TODM_C::SkyboxFogNightLitLength' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightLitRotation) == 0x001230, "Member 'AMASTER_TODM_C::SkyboxFogNightLitRotation' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, SkyboxFogNightLitOffset) == 0x001238, "Member 'AMASTER_TODM_C::SkyboxFogNightLitOffset' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, World_Border_Cloud_Base_Color_Brightness) == 0x001240, "Member 'AMASTER_TODM_C::World_Border_Cloud_Base_Color_Brightness' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, World_Border_Cloud_Sub_Surface_Color_and_Opacity) == 0x001248, "Member 'AMASTER_TODM_C::World_Border_Cloud_Sub_Surface_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, EnableCometDynamicPlacement) == 0x001258, "Member 'AMASTER_TODM_C::EnableCometDynamicPlacement' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Night) == 0x001260, "Member 'AMASTER_TODM_C::Night' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Evening) == 0x001280, "Member 'AMASTER_TODM_C::Evening' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Day) == 0x0012A0, "Member 'AMASTER_TODM_C::Day' has a wrong offset!");
static_assert(offsetof(AMASTER_TODM_C, Morning) == 0x0012C0, "Member 'AMASTER_TODM_C::Morning' has a wrong offset!");

}
