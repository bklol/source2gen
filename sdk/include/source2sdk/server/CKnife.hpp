#pragma once
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bFirstAttack"
    #pragma pack(push, 1)
    class CKnife : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bFirstAttack; // 0xf70        
        [[maybe_unused]] std::uint8_t pad_0xf71[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CKnife because it is not a standard-layout class
    static_assert(sizeof(CKnife) == 0xf78);
};
