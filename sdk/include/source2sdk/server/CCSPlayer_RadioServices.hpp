#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x60
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSPlayer_RadioServices : public client::CPlayerPawnComponent
    {
    public:
        entity2::GameTime_t m_flGotHostageTalkTimer; // 0x40        
        entity2::GameTime_t m_flDefusingTalkTimer; // 0x44        
        entity2::GameTime_t m_flC4PlantTalkTimer; // 0x48        
        entity2::GameTime_t m_flRadioTokenSlots[3]; // 0x4c        
        bool m_bIgnoreRadio; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_RadioServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_RadioServices) == 0x60);
};
