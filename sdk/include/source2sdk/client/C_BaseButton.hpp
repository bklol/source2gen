#pragma once
#include "source2sdk/client/C_BaseToggle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseModelEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd38
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
    // static metadata: MNetworkVarNames "bool m_usable"
    // static metadata: MNetworkVarNames "string_t m_szDisplayText"
    #pragma pack(push, 1)
    class C_BaseButton : public client::C_BaseToggle
    {
    public:
        // metadata: MNetworkEnable
        // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseModelEntity> m_glowEntity; // 0xd28        
        // metadata: MNetworkEnable
        bool m_usable; // 0xd2c        
        [[maybe_unused]] std::uint8_t pad_0xd2d[0x3]; // 0xd2d
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szDisplayText; // 0xd30        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseButton because it is not a standard-layout class
    static_assert(sizeof(C_BaseButton) == 0xd38);
};
