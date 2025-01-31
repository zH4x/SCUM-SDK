#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_DesertEagle_RemoveMagInsertMagChamber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DesertEagle_RemoveMagInsertMagChamber.BP_DesertEagle_RemoveMagInsertMagChamber_C
// 0x0004 (0x0084 - 0x0080)
class UBP_DesertEagle_RemoveMagInsertMagChamber_C : public URemoveMagazineInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DesertEagle_RemoveMagInsertMagChamber.BP_DesertEagle_RemoveMagInsertMagChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
