#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

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
    class CPointGiveAmmo : public server::CPointEntity
    {
    public:
        // m_pActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_pActivator; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4];
        
        // Datamap fields:
        // void InputGiveAmmo; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointGiveAmmo because it is not a standard-layout class
    static_assert(sizeof(CPointGiveAmmo) == 0x4e8);
};
