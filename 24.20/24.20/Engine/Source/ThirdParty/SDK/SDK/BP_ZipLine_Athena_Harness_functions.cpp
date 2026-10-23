#pragma once

#include "Basic.hpp"

#include "BP_ZipLine_Athena_Harness_classes.hpp"
#include "BP_ZipLine_Athena_Harness_parameters.hpp"

namespace SDK
{

void ABP_ZipLine_Athena_Harness_C::Chime_Visual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Chime Visual");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::Cleanup_On_DownhillGCN()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Cleanup On DownhillGCN");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ExecuteUbergraph_BP_ZipLine_Athena_Harness");

	Params::BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ZipLine_Athena_Harness_C::HandleOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "HandleOnDied");

	Params::BP_ZipLine_Athena_Harness_C_HandleOnDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ZipLine_Athena_Harness_C::OnRep_AttachedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "OnRep_AttachedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::OrientMotorForZipline(class AFortAthenaZiplineBase* Zipline, const struct FVector& DesiredZiplineOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "OrientMotorForZipline");

	Params::BP_ZipLine_Athena_Harness_C_OrientMotorForZipline Parms{};

	Parms.Zipline = Zipline;
	Parms.DesiredZiplineOffset = std::move(DesiredZiplineOffset);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ZipLine_Athena_Harness_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::RotateToZiplineDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "RotateToZiplineDirection");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::Start_Travel_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Start Travel Audio");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::Stop_Travel_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Stop Travel Audio");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::Update_Audio_and_VFXParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Update Audio and VFXParams");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::UpdateMotorToDynSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateMotorToDynSpline");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::UpdateMotorToSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateMotorToSpline");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::UpdateParamsForAudioAndVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateParamsForAudioAndVFX");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_C::UpdateZiplineOffsetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateZiplineOffsetLocation");

	UObject::ProcessEvent(Func, nullptr);
}

}
