#pragma once
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerWeapon;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf88
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bPlayingUninterruptableAct"
    // static metadata: MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
    #pragma pack(push, 1)
    class CFists : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bPlayingUninterruptableAct; // 0xf70        
        [[maybe_unused]] std::uint8_t pad_0xf71[0x3]; // 0xf71
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUninterruptChanged"
        client::PlayerAnimEvent_t m_nUninterruptableActivity; // 0xf74        
        bool m_bRestorePrevWep; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xf79[0x3]; // 0xf79
        // m_hWeaponBeforePrevious has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBasePlayerWeapon> m_hWeaponBeforePrevious; // 0xf7c        
        // m_hWeaponPrevious has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBasePlayerWeapon> m_hWeaponPrevious; // 0xf80        
        bool m_bDelayedHardPunchIncoming; // 0xf84        
        bool m_bDestroyAfterTaunt; // 0xf85        
        [[maybe_unused]] std::uint8_t pad_0xf86[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFists because it is not a standard-layout class
    static_assert(sizeof(CFists) == 0xf88);
};
