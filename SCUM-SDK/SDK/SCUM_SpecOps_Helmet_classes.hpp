#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SpecOps_Helmet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpecOps_Helmet.SpecOps_Helmet_C
// 0x0000 (0x07F0 - 0x07F0)
class ASpecOps_Helmet_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SpecOps_Helmet.SpecOps_Helmet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
