#pragma once
#include "source2sdk/client/C_EconEntity.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
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
    // Size: 0x16a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerWeapon"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
    // static metadata: MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
    // static metadata: MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
    // static metadata: MNetworkVarNames "int32 m_iClip1"
    // static metadata: MNetworkVarNames "int32 m_iClip2"
    // static metadata: MNetworkVarNames "int m_pReserveAmmo"
    #pragma pack(push, 1)
    class C_BasePlayerWeapon : public client::C_EconEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTick_t m_nNextPrimaryAttackTick; // 0x1668        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        float m_flNextPrimaryAttackTickRatio; // 0x166c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTick_t m_nNextSecondaryAttackTick; // 0x1670        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        float m_flNextSecondaryAttackTickRatio; // 0x1674        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iClip1; // 0x1678        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int32_t m_iClip2; // 0x167c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int32_t m_pReserveAmmo[2]; // 0x1680        
        [[maybe_unused]] std::uint8_t pad_0x1688[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerWeapon because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerWeapon) == 0x16a0);
};
