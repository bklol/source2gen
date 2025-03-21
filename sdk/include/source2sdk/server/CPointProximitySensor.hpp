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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointProximitySensor : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x3]; // 0x4e1
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hTargetEntity; // 0x4e4        
        // m_Distance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CEntityOutputTemplate<float> m_Distance; // 0x4e8        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetTargetEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointProximitySensor because it is not a standard-layout class
    static_assert(sizeof(CPointProximitySensor) == 0x510);
};
