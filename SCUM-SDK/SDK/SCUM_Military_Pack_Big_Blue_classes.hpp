#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Military_Pack_Big_Blue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Military_Pack_Big_Blue.Military_Pack_Big_Blue_C
// 0x0000 (0x07F0 - 0x07F0)
class AMilitary_Pack_Big_Blue_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Military_Pack_Big_Blue.Military_Pack_Big_Blue_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
