#pragma once

#include "Basic.hpp"

#include "FortAnimationBPFunctionLibrary_classes.hpp"
#include "FortAnimationBPFunctionLibrary_parameters.hpp"

namespace SDK
{

void UFortAnimationBPFunctionLibrary_C::Adjust_Emote_Vehicle_Wheel_Rotation(class AActor* Owning_Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, class UObject* __WorldContext, double* NewActorRotation, double* NewWheelRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Adjust Emote Vehicle Wheel Rotation");

	Params::FortAnimationBPFunctionLibrary_C_Adjust_Emote_Vehicle_Wheel_Rotation Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.CurrentWheelRotation = CurrentWheelRotation;
	Parms.DeltaTime = DeltaTime;
	Parms.CurrentActorRotation = CurrentActorRotation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewActorRotation != nullptr)
		*NewActorRotation = Parms.NewActorRotation;

	if (NewWheelRotation != nullptr)
		*NewWheelRotation = Parms.NewWheelRotation;
}

void UFortAnimationBPFunctionLibrary_C::Cape_Spine05_Pelvis_Rotation_Function(const class USkinnedMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, struct FRotator* Rotate_Z_Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Cape Spine05 Pelvis Rotation Function");

	Params::FortAnimationBPFunctionLibrary_C_Cape_Spine05_Pelvis_Rotation_Function Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Rotate_Z_Output != nullptr)
		*Rotate_Z_Output = std::move(Parms.Rotate_Z_Output);
}

void UFortAnimationBPFunctionLibrary_C::Clear_Transformation_Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Clear Transformation Montage");

	Params::FortAnimationBPFunctionLibrary_C_Clear_Transformation_Montage Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Convert_To_Nativized_Parameters(const struct FClothParamsStruct& ClothParametersStruct, const struct FWindGustParamsStruct& WindParametersStruct, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FWindGustLocalSettingStruct& Wind_Gust_Settings, class FName Character_State_Name, class UObject* __WorldContext, struct FClothParameters* Cloth_Parameters_Nativized, struct FWindGustParameters* Wind_Parameters_Nativized, struct FClothCoreSettings* ClothCoreSettings, struct FWindGustSettings* Wind_Settings_Nativized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Convert To Nativized Parameters");

	Params::FortAnimationBPFunctionLibrary_C_Cloth_Controller_Convert_To_Nativized_Parameters Parms{};

	Parms.ClothParametersStruct = std::move(ClothParametersStruct);
	Parms.WindParametersStruct = std::move(WindParametersStruct);
	Parms.Cloth_Core_Settings = std::move(Cloth_Core_Settings);
	Parms.Wind_Gust_Settings = std::move(Wind_Gust_Settings);
	Parms.Character_State_Name = Character_State_Name;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Cloth_Parameters_Nativized != nullptr)
		*Cloth_Parameters_Nativized = std::move(Parms.Cloth_Parameters_Nativized);

	if (Wind_Parameters_Nativized != nullptr)
		*Wind_Parameters_Nativized = std::move(Parms.Wind_Parameters_Nativized);

	if (ClothCoreSettings != nullptr)
		*ClothCoreSettings = std::move(Parms.ClothCoreSettings);

	if (Wind_Settings_Nativized != nullptr)
		*Wind_Settings_Nativized = std::move(Parms.Wind_Settings_Nativized);
}

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const class FString& ClothingAssetName, const struct FClothParamsStruct& Cloth_Paramaters, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, const struct FWindGustParamsStruct& WindGustsParams, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, class FString* CurrentStateOut, struct FClothSettingStruct* Cloth_Settings_Out, struct FClothCoreSettingStruct* Cloth_Core_Settings_Out, struct FWindGustSettingStruct* WindGustSettings_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettings_Out, struct FVector* GustStrength___WindVelocityOut, struct FVector* LinearVelVector_DELETE_LATER)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Function");

	Params::FortAnimationBPFunctionLibrary_C_Cloth_Controller_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = std::move(ClothingAssetName);
	Parms.Cloth_Paramaters = std::move(Cloth_Paramaters);
	Parms.Cloth_Core_Settings = std::move(Cloth_Core_Settings);
	Parms.ClothUpAxis = std::move(ClothUpAxis);
	Parms.OnGround_Moving_SpeedLimit = OnGround_Moving_SpeedLimit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindGustsParams = std::move(WindGustsParams);
	Parms.WindGustLocalSettings = std::move(WindGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CurrentStateOut != nullptr)
		*CurrentStateOut = std::move(Parms.CurrentStateOut);

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = std::move(Parms.Cloth_Settings_Out);

	if (Cloth_Core_Settings_Out != nullptr)
		*Cloth_Core_Settings_Out = std::move(Parms.Cloth_Core_Settings_Out);

	if (WindGustSettings_Out != nullptr)
		*WindGustSettings_Out = std::move(Parms.WindGustSettings_Out);

	if (WindGustLocalSettings_Out != nullptr)
		*WindGustLocalSettings_Out = std::move(Parms.WindGustLocalSettings_Out);

	if (GustStrength___WindVelocityOut != nullptr)
		*GustStrength___WindVelocityOut = std::move(Parms.GustStrength___WindVelocityOut);

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = std::move(Parms.LinearVelVector_DELETE_LATER);
}

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Function_Nativization_Wrapper(const class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, const struct FClothControllerClothParameterMap& Cloth_Paramaters, struct FClothCoreSettings& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_Speed_Limit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, float DeltaTime, float GameTimeInSeconds, const struct FClothControllerWindParameterMap& WindGustsParams, struct FWindGustSettings& WindGustLocalSettings, class UObject* __WorldContext, class FName* CharacterStateOut, struct FClothParameters* Cloth_Settings_Out, struct FWindGustSettings* WindGustLocalSettings_Out, struct FVector* GustStrength___WindVelocityOut, struct FVector* LinearVelVector_DELETE_LATER)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Function Nativization Wrapper");

	Params::FortAnimationBPFunctionLibrary_C_Cloth_Controller_Function_Nativization_Wrapper Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = std::move(ClothingAssetName);
	Parms.Cloth_Paramaters = std::move(Cloth_Paramaters);
	Parms.Cloth_Core_Settings = std::move(Cloth_Core_Settings);
	Parms.ClothUpAxis = std::move(ClothUpAxis);
	Parms.OnGround_Moving_Speed_Limit = OnGround_Moving_Speed_Limit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindGustsParams = std::move(WindGustsParams);
	Parms.WindGustLocalSettings = std::move(WindGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ClothingAssetName = std::move(Parms.ClothingAssetName);
	Cloth_Core_Settings = std::move(Parms.Cloth_Core_Settings);
	WindGustLocalSettings = std::move(Parms.WindGustLocalSettings);

	if (CharacterStateOut != nullptr)
		*CharacterStateOut = Parms.CharacterStateOut;

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = std::move(Parms.Cloth_Settings_Out);

	if (WindGustLocalSettings_Out != nullptr)
		*WindGustLocalSettings_Out = std::move(Parms.WindGustLocalSettings_Out);

	if (GustStrength___WindVelocityOut != nullptr)
		*GustStrength___WindVelocityOut = std::move(Parms.GustStrength___WindVelocityOut);

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = std::move(Parms.LinearVelVector_DELETE_LATER);
}

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Helper_Scale_For_Player_Movement(const struct FVector& LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, class UObject* __WorldContext, struct FVector* LinearVelVectorOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Helper Scale For Player Movement");

	Params::FortAnimationBPFunctionLibrary_C_Cloth_Controller_Helper_Scale_For_Player_Movement Parms{};

	Parms.LinearVelScale = std::move(LinearVelScale);
	Parms.PlayerFwdVector = PlayerFwdVector;
	Parms.PlayerFwdVectorJump = PlayerFwdVectorJump;
	Parms.ClothUpX = ClothUpX;
	Parms.ClothUpZ = ClothUpZ;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (LinearVelVectorOut != nullptr)
		*LinearVelVectorOut = std::move(Parms.LinearVelVectorOut);
}

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Setter_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const struct FClothSettingStruct& Cloth_Settings, class UObject* __WorldContext, struct FClothSettingStruct* Cloth_Settings_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Setter Function");

	Params::FortAnimationBPFunctionLibrary_C_Cloth_Controller_Setter_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.Cloth_Settings = std::move(Cloth_Settings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = std::move(Parms.Cloth_Settings_Out);
}

void UFortAnimationBPFunctionLibrary_C::ComplexSimSpaceFunction(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, const struct FRotator& sim_space_rotation_in, bool inComponentSpaceIn, bool inComponentSpaceLastFrameIn, bool lockedOnSimSpaceIn, double InterpSpeedIn, class UObject* __WorldContext, struct FRotator* sim_space_rotation, bool* inComponentSpaceOut, bool* inComponentSpaceLastFrameOut, bool* lockedOnSimSpaceOut, double* InterpSpeedOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "ComplexSimSpaceFunction");

	Params::FortAnimationBPFunctionLibrary_C_ComplexSimSpaceFunction Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.InterpSpeedMax = InterpSpeedMax;
	Parms.PawnSpeedMax = PawnSpeedMax;
	Parms.RInterpErrorTolerance = RInterpErrorTolerance;
	Parms.DeltaTime = DeltaTime;
	Parms.DebugDraw = DebugDraw;
	Parms.sim_space_rotation_in = std::move(sim_space_rotation_in);
	Parms.inComponentSpaceIn = inComponentSpaceIn;
	Parms.inComponentSpaceLastFrameIn = inComponentSpaceLastFrameIn;
	Parms.lockedOnSimSpaceIn = lockedOnSimSpaceIn;
	Parms.InterpSpeedIn = InterpSpeedIn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (sim_space_rotation != nullptr)
		*sim_space_rotation = std::move(Parms.sim_space_rotation);

	if (inComponentSpaceOut != nullptr)
		*inComponentSpaceOut = Parms.inComponentSpaceOut;

	if (inComponentSpaceLastFrameOut != nullptr)
		*inComponentSpaceLastFrameOut = Parms.inComponentSpaceLastFrameOut;

	if (lockedOnSimSpaceOut != nullptr)
		*lockedOnSimSpaceOut = Parms.lockedOnSimSpaceOut;

	if (InterpSpeedOut != nullptr)
		*InterpSpeedOut = Parms.InterpSpeedOut;
}

void UFortAnimationBPFunctionLibrary_C::ConvertToNativizedClothParameters(const struct FClothSettingStruct& ClothSettingStruct, class UObject* __WorldContext, struct FClothParameters* ClothParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "ConvertToNativizedClothParameters");

	Params::FortAnimationBPFunctionLibrary_C_ConvertToNativizedClothParameters Parms{};

	Parms.ClothSettingStruct = std::move(ClothSettingStruct);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ClothParameters != nullptr)
		*ClothParameters = std::move(Parms.ClothParameters);
}

void UFortAnimationBPFunctionLibrary_C::ConvertToNativizedWindParameters(const struct FWindGustSettingStruct& WindGustSettingStruct, class UObject* __WorldContext, struct FWindGustParameters* WindGustParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "ConvertToNativizedWindParameters");

	Params::FortAnimationBPFunctionLibrary_C_ConvertToNativizedWindParameters Parms{};

	Parms.WindGustSettingStruct = std::move(WindGustSettingStruct);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WindGustParameters != nullptr)
		*WindGustParameters = std::move(Parms.WindGustParameters);
}

void UFortAnimationBPFunctionLibrary_C::Debug_Cloth_Teleport_Threshold_Function(double MinDistance, double MinRotation, class USceneComponent* SkelMeshComponent, bool PrintToScreen, class FName BoneName, struct FVector& InVector, const struct FRotator& PawnDeltaRotation, double PrintToScreenDuration, class UObject* __WorldContext, double* Distance, double* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Debug Cloth Teleport Threshold Function");

	Params::FortAnimationBPFunctionLibrary_C_Debug_Cloth_Teleport_Threshold_Function Parms{};

	Parms.MinDistance = MinDistance;
	Parms.MinRotation = MinRotation;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.PrintToScreen = PrintToScreen;
	Parms.BoneName = BoneName;
	Parms.InVector = std::move(InVector);
	Parms.PawnDeltaRotation = std::move(PawnDeltaRotation);
	Parms.PrintToScreenDuration = PrintToScreenDuration;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InVector = std::move(Parms.InVector);

	if (Distance != nullptr)
		*Distance = Parms.Distance;

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;
}

void UFortAnimationBPFunctionLibrary_C::DrawJointDebugFunction(class USceneComponent* SkelMeshComponent, const struct FVector& JointOffset, TArray<class FName>& JointName, double Scale, double Duration, double Thickness, bool DebugDraw, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "DrawJointDebugFunction");

	Params::FortAnimationBPFunctionLibrary_C_DrawJointDebugFunction Parms{};

	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.JointOffset = std::move(JointOffset);
	Parms.JointName = std::move(JointName);
	Parms.Scale = Scale;
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;
	Parms.DebugDraw = DebugDraw;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	JointName = std::move(Parms.JointName);
}

void UFortAnimationBPFunctionLibrary_C::DrawVectorFromJointFunction(class USceneComponent* SkelMeshComponent, class FName JointName, const struct FVector& LineEnd, const struct FVector& JointOffset, const struct FLinearColor& LineColor, double Thickness, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "DrawVectorFromJointFunction");

	Params::FortAnimationBPFunctionLibrary_C_DrawVectorFromJointFunction Parms{};

	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.JointName = JointName;
	Parms.LineEnd = std::move(LineEnd);
	Parms.JointOffset = std::move(JointOffset);
	Parms.LineColor = std::move(LineColor);
	Parms.Thickness = Thickness;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UFortAnimationBPFunctionLibrary_C::FN_PSDPoseReaderFNC(const class FString& startJnt, const class FString& endJnt, const class FString& poseJnt, double Angle, bool Debug, class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, double* pose_output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "FN_PSDPoseReaderFNC");

	Params::FortAnimationBPFunctionLibrary_C_FN_PSDPoseReaderFNC Parms{};

	Parms.startJnt = std::move(startJnt);
	Parms.endJnt = std::move(endJnt);
	Parms.poseJnt = std::move(poseJnt);
	Parms.Angle = Angle;
	Parms.Debug = Debug;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (pose_output != nullptr)
		*pose_output = Parms.pose_output;
}

void UFortAnimationBPFunctionLibrary_C::Get_Joint_Location_Relative_to_Bone(class FName Target_Joint, class FName Relative_Joint, const struct FVector& Offset, const class UMeshComponent* SkelMeshComponent, bool Debug_Draw, class UObject* __WorldContext, struct FVector* Joint_Location_Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Get Joint Location Relative to Bone");

	Params::FortAnimationBPFunctionLibrary_C_Get_Joint_Location_Relative_to_Bone Parms{};

	Parms.Target_Joint = Target_Joint;
	Parms.Relative_Joint = Relative_Joint;
	Parms.Offset = std::move(Offset);
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.Debug_Draw = Debug_Draw;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Joint_Location_Vector != nullptr)
		*Joint_Location_Vector = std::move(Parms.Joint_Location_Vector);
}

void UFortAnimationBPFunctionLibrary_C::Gravity_Override_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const double GameTimeInSeconds, const struct FVector& WindFreq, const struct FVector& WindAmp, const struct FVector& WindOffset, const struct FVector& GoingUpGravityOverride, const struct FVector& ComingDownGravityOverride, const struct FVector& DivingDownGravityOverride, const struct FVector& ParachuteOpenedGravityOverride, const struct FVector& GroundWindFreq, const struct FVector& GroundWindAmp, const struct FVector& GroundWindOffset, const struct FVector& OnGroundGravityOverride, const struct FVector& SwimmingGravityOverride, class FName JointName, class UObject* __WorldContext, struct FVector* GravityOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Gravity Override Function");

	Params::FortAnimationBPFunctionLibrary_C_Gravity_Override_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindFreq = std::move(WindFreq);
	Parms.WindAmp = std::move(WindAmp);
	Parms.WindOffset = std::move(WindOffset);
	Parms.GoingUpGravityOverride = std::move(GoingUpGravityOverride);
	Parms.ComingDownGravityOverride = std::move(ComingDownGravityOverride);
	Parms.DivingDownGravityOverride = std::move(DivingDownGravityOverride);
	Parms.ParachuteOpenedGravityOverride = std::move(ParachuteOpenedGravityOverride);
	Parms.GroundWindFreq = std::move(GroundWindFreq);
	Parms.GroundWindAmp = std::move(GroundWindAmp);
	Parms.GroundWindOffset = std::move(GroundWindOffset);
	Parms.OnGroundGravityOverride = std::move(OnGroundGravityOverride);
	Parms.SwimmingGravityOverride = std::move(SwimmingGravityOverride);
	Parms.JointName = JointName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GravityOverride != nullptr)
		*GravityOverride = std::move(Parms.GravityOverride);
}

void UFortAnimationBPFunctionLibrary_C::Gravity_Override_Setter_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const class UMeshComponent* SkelMeshComponent, const struct FGravityOverrideSettingStruct& GravityOverride_Settings, double GameTimeInSeconds, class UObject* __WorldContext, struct FGravityOverrideSettingStruct* GravityOverride_Settings_Out, struct FVector* GravityOverride_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Gravity Override Setter Function");

	Params::FortAnimationBPFunctionLibrary_C_Gravity_Override_Setter_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.GravityOverride_Settings = std::move(GravityOverride_Settings);
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GravityOverride_Settings_Out != nullptr)
		*GravityOverride_Settings_Out = std::move(Parms.GravityOverride_Settings_Out);

	if (GravityOverride_Out != nullptr)
		*GravityOverride_Out = std::move(Parms.GravityOverride_Out);
}

void UFortAnimationBPFunctionLibrary_C::Gravity_Override_State_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const double GameTimeInSeconds, const struct FGravityOverrideParamsStruct& GravityOverrideParams, bool DebugDraw, class FName DebugJointName, class UObject* __WorldContext, struct FVector* GravityOverride, class FString* CurrentStateOut, struct FGravityOverrideSettingStruct* GravityOverrideSettingsOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Gravity Override State Function");

	Params::FortAnimationBPFunctionLibrary_C_Gravity_Override_State_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.GravityOverrideParams = std::move(GravityOverrideParams);
	Parms.DebugDraw = DebugDraw;
	Parms.DebugJointName = DebugJointName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GravityOverride != nullptr)
		*GravityOverride = std::move(Parms.GravityOverride);

	if (CurrentStateOut != nullptr)
		*CurrentStateOut = std::move(Parms.CurrentStateOut);

	if (GravityOverrideSettingsOut != nullptr)
		*GravityOverrideSettingsOut = std::move(Parms.GravityOverrideSettingsOut);
}

void UFortAnimationBPFunctionLibrary_C::Play_Transformation_Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Play Transformation Montage");

	Params::FortAnimationBPFunctionLibrary_C_Play_Transformation_Montage Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UFortAnimationBPFunctionLibrary_C::Player_Movement_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double X_Dot_Product, double Y_Dot_Product, double Z_Dot_Product, bool DrawDebug, double Debug_Scalar, class UObject* __WorldContext, double* X_Movement, double* Y_Movement, double* Z_Movement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Player Movement Function");

	Params::FortAnimationBPFunctionLibrary_C_Player_Movement_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.X_Dot_Product = X_Dot_Product;
	Parms.Y_Dot_Product = Y_Dot_Product;
	Parms.Z_Dot_Product = Z_Dot_Product;
	Parms.DrawDebug = DrawDebug;
	Parms.Debug_Scalar = Debug_Scalar;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (X_Movement != nullptr)
		*X_Movement = Parms.X_Movement;

	if (Y_Movement != nullptr)
		*Y_Movement = Parms.Y_Movement;

	if (Z_Movement != nullptr)
		*Z_Movement = Parms.Z_Movement;
}

void UFortAnimationBPFunctionLibrary_C::Random_Vector_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const class UMeshComponent* SkelMeshComponent, class FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, const struct FVector& Frequency, const struct FVector& Amplitude, const struct FVector& Offset, class UObject* __WorldContext, struct FVector* VectorOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Random Vector Function");

	Params::FortAnimationBPFunctionLibrary_C_Random_Vector_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.JointName = JointName;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.TimeOffset = TimeOffset;
	Parms.PerlinScale = PerlinScale;
	Parms.Frequency = std::move(Frequency);
	Parms.Amplitude = std::move(Amplitude);
	Parms.Offset = std::move(Offset);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (VectorOut != nullptr)
		*VectorOut = std::move(Parms.VectorOut);
}

void UFortAnimationBPFunctionLibrary_C::RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, const struct FRotator& Frequency, const struct FRotator& Amplitude, const struct FRotator& Offset, double TimeOffset, class UObject* __WorldContext, struct FRotator* RandomRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "RandomRotatorFunction");

	Params::FortAnimationBPFunctionLibrary_C_RandomRotatorFunction Parms{};

	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.PerlinScale = PerlinScale;
	Parms.Frequency = std::move(Frequency);
	Parms.Amplitude = std::move(Amplitude);
	Parms.Offset = std::move(Offset);
	Parms.TimeOffset = TimeOffset;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RandomRotator != nullptr)
		*RandomRotator = std::move(Parms.RandomRotator);
}

void UFortAnimationBPFunctionLibrary_C::Scale_Joint_Rotation_Function(const struct FRotator& Scale, class FName TargetBone, class FName ReferenceBone, class USkinnedMeshComponent* SkelMeshComponent, class UObject* __WorldContext, struct FRotator* FinalRotation, struct FRotator* OriginalRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Scale Joint Rotation Function");

	Params::FortAnimationBPFunctionLibrary_C_Scale_Joint_Rotation_Function Parms{};

	Parms.Scale = std::move(Scale);
	Parms.TargetBone = TargetBone;
	Parms.ReferenceBone = ReferenceBone;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (FinalRotation != nullptr)
		*FinalRotation = std::move(Parms.FinalRotation);

	if (OriginalRotation != nullptr)
		*OriginalRotation = std::move(Parms.OriginalRotation);
}

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Calculate_Parameters(class UCustomCharacterPartAnimInstance* InCharacterPartAnimInstance, const struct FClothParamsStruct& Cloth_Paramaters, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, const struct FWindGustParamsStruct& InWindGustParams, const struct FWindGustLocalSettingStruct& InWindGustLocalSettings, class UObject* __WorldContext, class FString* OutCurrentState, struct FClothCoreSettingStruct* OutClothCoreSettings, struct FClothSettingStruct* OutClothSettings, struct FWindGustSettingStruct* OutWindGustSettings, struct FWindGustLocalSettingStruct* OutWindGustLocalSettings, struct FVector* OutGustStrength, struct FVector* LinearVelVector_DELETE_LATER)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Calculate Parameters");

	Params::FortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Calculate_Parameters Parms{};

	Parms.InCharacterPartAnimInstance = InCharacterPartAnimInstance;
	Parms.Cloth_Paramaters = std::move(Cloth_Paramaters);
	Parms.Cloth_Core_Settings = std::move(Cloth_Core_Settings);
	Parms.ClothUpAxis = std::move(ClothUpAxis);
	Parms.OnGround_Moving_SpeedLimit = OnGround_Moving_SpeedLimit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.InWindGustParams = std::move(InWindGustParams);
	Parms.InWindGustLocalSettings = std::move(InWindGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutCurrentState != nullptr)
		*OutCurrentState = std::move(Parms.OutCurrentState);

	if (OutClothCoreSettings != nullptr)
		*OutClothCoreSettings = std::move(Parms.OutClothCoreSettings);

	if (OutClothSettings != nullptr)
		*OutClothSettings = std::move(Parms.OutClothSettings);

	if (OutWindGustSettings != nullptr)
		*OutWindGustSettings = std::move(Parms.OutWindGustSettings);

	if (OutWindGustLocalSettings != nullptr)
		*OutWindGustLocalSettings = std::move(Parms.OutWindGustLocalSettings);

	if (OutGustStrength != nullptr)
		*OutGustStrength = std::move(Parms.OutGustStrength);

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = std::move(Parms.LinearVelVector_DELETE_LATER);
}

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const class FString& ClothingAssetName, const struct FClothParamsStruct& Cloth_Paramaters, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, const struct FWindGustParamsStruct& WindGustsParams, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, class FString* CurrentStateOut, struct FClothCoreSettingStruct* Cloth_Core_Settings_Out, struct FClothSettingStruct* Cloth_Settings_Out, struct FWindGustSettingStruct* WindGustSettings_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettings_Out, struct FVector* GustStrength___WindVelocityOut, struct FVector* LinearVelVector_DELETE_LATER)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Function");

	Params::FortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = std::move(ClothingAssetName);
	Parms.Cloth_Paramaters = std::move(Cloth_Paramaters);
	Parms.Cloth_Core_Settings = std::move(Cloth_Core_Settings);
	Parms.ClothUpAxis = std::move(ClothUpAxis);
	Parms.OnGround_Moving_SpeedLimit = OnGround_Moving_SpeedLimit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindGustsParams = std::move(WindGustsParams);
	Parms.WindGustLocalSettings = std::move(WindGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CurrentStateOut != nullptr)
		*CurrentStateOut = std::move(Parms.CurrentStateOut);

	if (Cloth_Core_Settings_Out != nullptr)
		*Cloth_Core_Settings_Out = std::move(Parms.Cloth_Core_Settings_Out);

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = std::move(Parms.Cloth_Settings_Out);

	if (WindGustSettings_Out != nullptr)
		*WindGustSettings_Out = std::move(Parms.WindGustSettings_Out);

	if (WindGustLocalSettings_Out != nullptr)
		*WindGustLocalSettings_Out = std::move(Parms.WindGustLocalSettings_Out);

	if (GustStrength___WindVelocityOut != nullptr)
		*GustStrength___WindVelocityOut = std::move(Parms.GustStrength___WindVelocityOut);

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = std::move(Parms.LinearVelVector_DELETE_LATER);
}

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Wind_Gust_Function(double DeltaTime, double GameTimeInSeconds, class FName JointName, const struct FWindGustSettingStruct& WindGustSettings, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, struct FVector* GustStrengthWindVelocity_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettingsOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Wind Gust Function");

	Params::FortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Wind_Gust_Function Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.JointName = JointName;
	Parms.WindGustSettings = std::move(WindGustSettings);
	Parms.WindGustLocalSettings = std::move(WindGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GustStrengthWindVelocity_Out != nullptr)
		*GustStrengthWindVelocity_Out = std::move(Parms.GustStrengthWindVelocity_Out);

	if (WindGustLocalSettingsOut != nullptr)
		*WindGustLocalSettingsOut = std::move(Parms.WindGustLocalSettingsOut);
}

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Write_To_Instance(class UCustomCharacterPartAnimInstance* Character_Part_Anim_Instance, const class FString& Clothing_Asset_Name, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FClothSettingStruct& Cloth_Settings, const struct FVector& Gust_Strength___Wind_Velocity, class FName Joint_Name, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Write To Instance");

	Params::FortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Write_To_Instance Parms{};

	Parms.Character_Part_Anim_Instance = Character_Part_Anim_Instance;
	Parms.Clothing_Asset_Name = std::move(Clothing_Asset_Name);
	Parms.Cloth_Core_Settings = std::move(Cloth_Core_Settings);
	Parms.Cloth_Settings = std::move(Cloth_Settings);
	Parms.Gust_Strength___Wind_Velocity = std::move(Gust_Strength___Wind_Velocity);
	Parms.Joint_Name = Joint_Name;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UFortAnimationBPFunctionLibrary_C::Set_Transformation_Montage(class AFortPlayerPawn* FortPlayerPawn, class UAnimMontage* Montage, double StartTime, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Set Transformation Montage");

	Params::FortAnimationBPFunctionLibrary_C_Set_Transformation_Montage Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.Montage = Montage;
	Parms.StartTime = StartTime;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UFortAnimationBPFunctionLibrary_C::Wind_Gust_Control_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, class FName JointName, const struct FWindGustSettingStruct& WindGustSettings, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, struct FVector* GustStrengthWindVelocity_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettingsOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "Wind Gust Control Function");

	Params::FortAnimationBPFunctionLibrary_C_Wind_Gust_Control_Function Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.JointName = JointName;
	Parms.WindGustSettings = std::move(WindGustSettings);
	Parms.WindGustLocalSettings = std::move(WindGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GustStrengthWindVelocity_Out != nullptr)
		*GustStrengthWindVelocity_Out = std::move(Parms.GustStrengthWindVelocity_Out);

	if (WindGustLocalSettingsOut != nullptr)
		*WindGustLocalSettingsOut = std::move(Parms.WindGustLocalSettingsOut);
}

void UFortAnimationBPFunctionLibrary_C::WindGustGeneratorFunction(double DeltaTime, const struct FWindGustSettingStruct& GustSettings, const struct FWindGustLocalSettingStruct& ClothGustLocalSettings, class UObject* __WorldContext, double* GustStrength___WindVelocity, struct FWindGustLocalSettingStruct* ClothGustLocalSettingsOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAnimationBPFunctionLibrary_C", "WindGustGeneratorFunction");

	Params::FortAnimationBPFunctionLibrary_C_WindGustGeneratorFunction Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.GustSettings = std::move(GustSettings);
	Parms.ClothGustLocalSettings = std::move(ClothGustLocalSettings);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GustStrength___WindVelocity != nullptr)
		*GustStrength___WindVelocity = Parms.GustStrength___WindVelocity;

	if (ClothGustLocalSettingsOut != nullptr)
		*ClothGustLocalSettingsOut = std::move(Parms.ClothGustLocalSettingsOut);
}

void UFortAnimationBPFunctionLibrary_C::Get__Motion_Vector_For_Transform_Function(class USceneComponent* Skeletal_Mesh, class FName Transform_Name, struct FVector& Previous_Transform_Location, class UObject* __WorldContext, struct FVector* Transform_Motion_Vector, struct FVector* Transform_Location, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Get  Motion Vector For Transform Function");

	Params::FortAnimationBPFunctionLibrary_C_Get__Motion_Vector_For_Transform_Function Parms{};

	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Transform_Name = Transform_Name;
	Parms.Previous_Transform_Location = std::move(Previous_Transform_Location);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	Previous_Transform_Location = std::move(Parms.Previous_Transform_Location);

	if (Transform_Motion_Vector != nullptr)
		*Transform_Motion_Vector = std::move(Parms.Transform_Motion_Vector);

	if (Transform_Location != nullptr)
		*Transform_Location = std::move(Parms.Transform_Location);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}

void UFortAnimationBPFunctionLibrary_C::Get_WPO_Regional_Param_Names_Function(int32& Region, class UObject* __WorldContext, class FName* Velocity, class FName* Bone_Position, class FName* Bone_Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Get WPO Regional Param Names Function");

	Params::FortAnimationBPFunctionLibrary_C_Get_WPO_Regional_Param_Names_Function Parms{};

	Parms.Region = Region;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	Region = Parms.Region;

	if (Velocity != nullptr)
		*Velocity = Parms.Velocity;

	if (Bone_Position != nullptr)
		*Bone_Position = Parms.Bone_Position;

	if (Bone_Vector != nullptr)
		*Bone_Vector = Parms.Bone_Vector;
}

void UFortAnimationBPFunctionLibrary_C::Set_WPO_Globals_Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay_Material, class USkeletalMeshComponent* Skeletal_Mesh, class FName Local_Noise_Reference_Transform, double Local_Noise_Offset_Multiplier, struct FVector& Local_Noise_Transform__Location, struct FVector& Local_Noise_Offset, class FName Local_Turbulence_Vector_Transform, EAxis Local_Turbulence_Vector_Transform_Axis, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Set WPO Globals Function");

	Params::FortAnimationBPFunctionLibrary_C_Set_WPO_Globals_Function Parms{};

	Parms.Material = Material;
	Parms.Overlay_Material = Overlay_Material;
	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Local_Noise_Reference_Transform = Local_Noise_Reference_Transform;
	Parms.Local_Noise_Offset_Multiplier = Local_Noise_Offset_Multiplier;
	Parms.Local_Noise_Transform__Location = std::move(Local_Noise_Transform__Location);
	Parms.Local_Noise_Offset = std::move(Local_Noise_Offset);
	Parms.Local_Turbulence_Vector_Transform = Local_Turbulence_Vector_Transform;
	Parms.Local_Turbulence_Vector_Transform_Axis = Local_Turbulence_Vector_Transform_Axis;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	Local_Noise_Transform__Location = std::move(Parms.Local_Noise_Transform__Location);
	Local_Noise_Offset = std::move(Parms.Local_Noise_Offset);
}

void UFortAnimationBPFunctionLibrary_C::Set_WPO_Regional_Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay_Material, class USkeletalMeshComponent* Skeletal_Mesh, class FName Velocity_Transform, double Velocity_Interp_Speed, class FName Collision_Transform, EAxis Collision_Transform_Axis, bool Invert_Collision_Transform_Axis, double Delta_Time_X, struct FVector& Previous_Velocity_Transform_Location, struct FVector& Previous_Velocity_Transform_Velocity, int32 Region, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Set WPO Regional Function");

	Params::FortAnimationBPFunctionLibrary_C_Set_WPO_Regional_Function Parms{};

	Parms.Material = Material;
	Parms.Overlay_Material = Overlay_Material;
	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Velocity_Transform = Velocity_Transform;
	Parms.Velocity_Interp_Speed = Velocity_Interp_Speed;
	Parms.Collision_Transform = Collision_Transform;
	Parms.Collision_Transform_Axis = Collision_Transform_Axis;
	Parms.Invert_Collision_Transform_Axis = Invert_Collision_Transform_Axis;
	Parms.Delta_Time_X = Delta_Time_X;
	Parms.Previous_Velocity_Transform_Location = std::move(Previous_Velocity_Transform_Location);
	Parms.Previous_Velocity_Transform_Velocity = std::move(Previous_Velocity_Transform_Velocity);
	Parms.Region = Region;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	Previous_Velocity_Transform_Location = std::move(Parms.Previous_Velocity_Transform_Location);
	Previous_Velocity_Transform_Velocity = std::move(Parms.Previous_Velocity_Transform_Velocity);
}

}
