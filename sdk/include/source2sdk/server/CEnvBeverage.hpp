#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvBeverage : public server::CBaseEntity
    {
    public:
        bool m_CanInDispenser; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x3]; // 0x4e1
        int32_t m_nBeverageType; // 0x4e4        
        
        // Datamap fields:
        // void InputActivate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeverage because it is not a standard-layout class
    static_assert(sizeof(CEnvBeverage) == 0x4e8);
};
