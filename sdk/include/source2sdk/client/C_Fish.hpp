#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x1078
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkVarNames "Vector m_poolOrigin"
    // static metadata: MNetworkVarNames "float32 m_waterLevel"
    // static metadata: MNetworkVarNames "float32 m_x"
    // static metadata: MNetworkVarNames "float32 m_y"
    // static metadata: MNetworkVarNames "float32 m_z"
    // static metadata: MNetworkVarNames "float32 m_angle"
    #pragma pack(push, 1)
    class C_Fish : public client::CBaseAnimGraph
    {
    public:
        Vector m_pos; // 0xf88        
        Vector m_vel; // 0xf94        
        QAngle m_angles; // 0xfa0        
        int32_t m_localLifeState; // 0xfac        
        float m_deathDepth; // 0xfb0        
        float m_deathAngle; // 0xfb4        
        float m_buoyancy; // 0xfb8        
        [[maybe_unused]] std::uint8_t pad_0xfbc[0x4]; // 0xfbc
        client::CountdownTimer m_wiggleTimer; // 0xfc0        
        float m_wigglePhase; // 0xfd8        
        float m_wiggleRate; // 0xfdc        
        Vector m_actualPos; // 0xfe0        
        QAngle m_actualAngles; // 0xfec        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0xff8        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0x1004        
        bool m_gotUpdate; // 0x1008        
        [[maybe_unused]] std::uint8_t pad_0x1009[0x3]; // 0x1009
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_x; // 0x100c        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_y; // 0x1010        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_z; // 0x1014        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnAngChanged"
        float m_angle; // 0x1018        
        float m_errorHistory[20]; // 0x101c        
        int32_t m_errorHistoryIndex; // 0x106c        
        int32_t m_errorHistoryCount; // 0x1070        
        float m_averageError; // 0x1074        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
    static_assert(sizeof(C_Fish) == 0x1078);
};
