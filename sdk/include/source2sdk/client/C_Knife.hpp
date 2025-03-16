#pragma once
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1b30
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bFirstAttack"
    #pragma pack(push, 1)
    class C_Knife : public client::C_CSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bFirstAttack; // 0x1b20        
        [[maybe_unused]] std::uint8_t pad_0x1b21[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Knife because it is not a standard-layout class
    static_assert(sizeof(C_Knife) == 0x1b30);
};
