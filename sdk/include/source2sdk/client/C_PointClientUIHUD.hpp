#pragma once
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf28
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "float m_flHeight"
    // static metadata: MNetworkVarNames "float m_flDPI"
    // static metadata: MNetworkVarNames "float m_flInteractDistance"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
    // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
    // static metadata: MNetworkVarNames "uint32 m_unOrientation"
    // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
    // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
    #pragma pack(push, 1)
    class C_PointClientUIHUD : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd58[0x8]; // 0xd58
        bool m_bCheckCSSClasses; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd61[0x17f]; // 0xd61
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xee0        
        [[maybe_unused]] std::uint8_t pad_0xee1[0x3]; // 0xee1
        // metadata: MNetworkEnable
        float m_flWidth; // 0xee4        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xee8        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xeec        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xef0        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xef4        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xef8        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xefc        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xf00        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xf04        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xf08        
        [[maybe_unused]] std::uint8_t pad_0xf09[0x7]; // 0xf09
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0xf10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIHUD) == 0xf28);
};
