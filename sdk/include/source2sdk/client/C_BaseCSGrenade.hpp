#pragma once
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CSWeaponBase;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b60
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bRedraw"
    // static metadata: MNetworkVarNames "bool m_bIsHeldByPlayer"
    // static metadata: MNetworkVarNames "bool m_bPinPulled"
    // static metadata: MNetworkVarNames "bool m_bJumpThrow"
    // static metadata: MNetworkVarNames "bool m_bThrowAnimating"
    // static metadata: MNetworkVarNames "GameTime_t m_fThrowTime"
    // static metadata: MNetworkVarNames "float m_flThrowStrength"
    // static metadata: MNetworkVarNames "float m_flThrowStrengthApproach"
    // static metadata: MNetworkVarNames "GameTime_t m_fDropTime"
    // static metadata: MNetworkVarNames "GameTime_t m_fPinPullTime"
    // static metadata: MNetworkVarNames "bool m_bJustPulledPin"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextHoldTick"
    // static metadata: MNetworkVarNames "float m_flNextHoldFrac"
    // static metadata: MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
    #pragma pack(push, 1)
    class C_BaseCSGrenade : public client::C_CSWeaponBase
    {
    public:
        bool m_bClientPredictDelete; // 0x1b20        
        // metadata: MNetworkEnable
        bool m_bRedraw; // 0x1b21        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
        bool m_bIsHeldByPlayer; // 0x1b22        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
        bool m_bPinPulled; // 0x1b23        
        // metadata: MNetworkEnable
        bool m_bJumpThrow; // 0x1b24        
        // metadata: MNetworkEnable
        bool m_bThrowAnimating; // 0x1b25        
        [[maybe_unused]] std::uint8_t pad_0x1b26[0x2]; // 0x1b26
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fThrowTime; // 0x1b28        
        // metadata: MNetworkEnable
        float m_flThrowStrength; // 0x1b2c        
        // metadata: MNetworkEnable
        float m_flThrowStrengthApproach; // 0x1b30        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fDropTime; // 0x1b34        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fPinPullTime; // 0x1b38        
        // metadata: MNetworkEnable
        bool m_bJustPulledPin; // 0x1b3c        
        [[maybe_unused]] std::uint8_t pad_0x1b3d[0x3]; // 0x1b3d
        // metadata: MNetworkEnable
        entity2::GameTick_t m_nNextHoldTick; // 0x1b40        
        // metadata: MNetworkEnable
        float m_flNextHoldFrac; // 0x1b44        
        // metadata: MNetworkEnable
        // m_hSwitchToWeaponAfterThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_CSWeaponBase> m_hSwitchToWeaponAfterThrow; // 0x1b48        
        [[maybe_unused]] std::uint8_t pad_0x1b4c[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseCSGrenade because it is not a standard-layout class
    static_assert(sizeof(C_BaseCSGrenade) == 0x1b60);
};
