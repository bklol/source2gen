#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlatTrain.hpp"
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
    // Size: 0x858
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncTrain : public server::CBasePlatTrain
    {
    public:
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hCurrentTarget; // 0x838        
        bool m_activated; // 0x83c        
        [[maybe_unused]] std::uint8_t pad_0x83d[0x3]; // 0x83d
        // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hEnemy; // 0x840        
        float m_flBlockDamage; // 0x844        
        entity2::GameTime_t m_flNextBlockTime; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4]; // 0x84c
        CUtlSymbolLarge m_iszLastTarget; // 0x850        
        
        // Datamap fields:
        // void CFuncTrainWait; // 0x0
        // void CFuncTrainNext; // 0x0
        // void InputToggle; // 0x0
        // void InputStart; // 0x0
        // void InputStop; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrain because it is not a standard-layout class
    static_assert(sizeof(CFuncTrain) == 0x858);
};
