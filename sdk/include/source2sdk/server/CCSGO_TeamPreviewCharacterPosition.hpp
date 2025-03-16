#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CEconItemView.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc68
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nVariant"
    // static metadata: MNetworkVarNames "int m_nRandom"
    // static metadata: MNetworkVarNames "int m_nOrdinal"
    // static metadata: MNetworkVarNames "CUtlString m_sWeaponName"
    // static metadata: MNetworkVarNames "XUID m_xuid"
    // static metadata: MNetworkVarNames "CEconItemView m_agentItem"
    // static metadata: MNetworkVarNames "CEconItemView m_glovesItem"
    // static metadata: MNetworkVarNames "CEconItemView m_weaponItem"
    #pragma pack(push, 1)
    class CCSGO_TeamPreviewCharacterPosition : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nVariant; // 0x4e0        
        // metadata: MNetworkEnable
        int32_t m_nRandom; // 0x4e4        
        // metadata: MNetworkEnable
        int32_t m_nOrdinal; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        // metadata: MNetworkEnable
        CUtlString m_sWeaponName; // 0x4f0        
        // metadata: MNetworkEnable
        uint64_t m_xuid; // 0x4f8        
        // metadata: MNetworkEnable
        server::CEconItemView m_agentItem; // 0x500        
        // metadata: MNetworkEnable
        server::CEconItemView m_glovesItem; // 0x778        
        // metadata: MNetworkEnable
        server::CEconItemView m_weaponItem; // 0x9f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGO_TeamPreviewCharacterPosition because it is not a standard-layout class
    static_assert(sizeof(CCSGO_TeamPreviewCharacterPosition) == 0xc68);
};
