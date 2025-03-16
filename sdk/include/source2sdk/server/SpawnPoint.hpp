#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class SpawnPoint : public server::CServerOnlyPointEntity
    {
    public:
        int32_t m_iPriority; // 0x4e0        
        bool m_bEnabled; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4e5[0x3]; // 0x4e5
        int32_t m_nType; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4];
        
        // Datamap fields:
        // void InputSetEnabled; // 0x0
        // void InputSetDisabled; // 0x0
        // void InputToggleEnabled; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in SpawnPoint because it is not a standard-layout class
    static_assert(sizeof(SpawnPoint) == 0x4f0);
};
