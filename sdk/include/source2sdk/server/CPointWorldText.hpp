#pragma once
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
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
    // Size: 0xa40
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_messageText"
    // static metadata: MNetworkVarNames "char m_FontName"
    // static metadata: MNetworkVarNames "char m_BackgroundMaterialName"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bFullbright"
    // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
    // static metadata: MNetworkVarNames "float m_flFontSize"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "bool m_bDrawBackground"
    // static metadata: MNetworkVarNames "float m_flBackgroundBorderWidth"
    // static metadata: MNetworkVarNames "float m_flBackgroundBorderHeight"
    // static metadata: MNetworkVarNames "float m_flBackgroundWorldToUV"
    // static metadata: MNetworkVarNames "Color m_Color"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
    // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
    #pragma pack(push, 1)
    class CPointWorldText : public server::CModelPointEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0x790        
        // metadata: MNetworkEnable
        char m_FontName[64]; // 0x990        
        // metadata: MNetworkEnable
        char m_BackgroundMaterialName[64]; // 0x9d0        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0xa10        
        // metadata: MNetworkEnable
        bool m_bFullbright; // 0xa11        
        [[maybe_unused]] std::uint8_t pad_0xa12[0x2]; // 0xa12
        // metadata: MNetworkEnable
        float m_flWorldUnitsPerPx; // 0xa14        
        // metadata: MNetworkEnable
        float m_flFontSize; // 0xa18        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa1c        
        // metadata: MNetworkEnable
        bool m_bDrawBackground; // 0xa20        
        [[maybe_unused]] std::uint8_t pad_0xa21[0x3]; // 0xa21
        // metadata: MNetworkEnable
        float m_flBackgroundBorderWidth; // 0xa24        
        // metadata: MNetworkEnable
        float m_flBackgroundBorderHeight; // 0xa28        
        // metadata: MNetworkEnable
        float m_flBackgroundWorldToUV; // 0xa2c        
        // metadata: MNetworkEnable
        Color m_Color; // 0xa30        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa34        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa38        
        // metadata: MNetworkEnable
        client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa3c        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
    static_assert(sizeof(CPointWorldText) == 0xa40);
};
