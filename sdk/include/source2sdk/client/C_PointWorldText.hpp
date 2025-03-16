#pragma once
#include "source2sdk/client/C_ModelPointEntity.hpp"
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
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
    // Size: 0xff8
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
    class C_PointWorldText : public client::C_ModelPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd28[0x8]; // 0xd28
        bool m_bForceRecreateNextUpdate; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd31[0x17]; // 0xd31
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0xd48        
        // metadata: MNetworkEnable
        char m_FontName[64]; // 0xf48        
        // metadata: MNetworkEnable
        char m_BackgroundMaterialName[64]; // 0xf88        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0xfc8        
        // metadata: MNetworkEnable
        bool m_bFullbright; // 0xfc9        
        [[maybe_unused]] std::uint8_t pad_0xfca[0x2]; // 0xfca
        // metadata: MNetworkEnable
        float m_flWorldUnitsPerPx; // 0xfcc        
        // metadata: MNetworkEnable
        float m_flFontSize; // 0xfd0        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xfd4        
        // metadata: MNetworkEnable
        bool m_bDrawBackground; // 0xfd8        
        [[maybe_unused]] std::uint8_t pad_0xfd9[0x3]; // 0xfd9
        // metadata: MNetworkEnable
        float m_flBackgroundBorderWidth; // 0xfdc        
        // metadata: MNetworkEnable
        float m_flBackgroundBorderHeight; // 0xfe0        
        // metadata: MNetworkEnable
        float m_flBackgroundWorldToUV; // 0xfe4        
        // metadata: MNetworkEnable
        Color m_Color; // 0xfe8        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xfec        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xff0        
        // metadata: MNetworkEnable
        client::PointWorldTextReorientMode_t m_nReorientMode; // 0xff4        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointWorldText because it is not a standard-layout class
    static_assert(sizeof(C_PointWorldText) == 0xff8);
};
