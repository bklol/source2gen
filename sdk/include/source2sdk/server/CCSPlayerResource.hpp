#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bHostageAlive"
    // static metadata: MNetworkVarNames "bool m_isHostageFollowingSomeone"
    // static metadata: MNetworkVarNames "CEntityIndex m_iHostageEntityIDs"
    // static metadata: MNetworkVarNames "Vector m_bombsiteCenterA"
    // static metadata: MNetworkVarNames "Vector m_bombsiteCenterB"
    // static metadata: MNetworkVarNames "int m_hostageRescueX"
    // static metadata: MNetworkVarNames "int m_hostageRescueY"
    // static metadata: MNetworkVarNames "int m_hostageRescueZ"
    // static metadata: MNetworkVarNames "bool m_bEndMatchNextMapAllVoted"
    #pragma pack(push, 1)
    class CCSPlayerResource : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bHostageAlive[12]; // 0x4e0        
        // metadata: MNetworkEnable
        bool m_isHostageFollowingSomeone[12]; // 0x4ec        
        // metadata: MNetworkEnable
        CEntityIndex m_iHostageEntityIDs[12]; // 0x4f8        
        // metadata: MNetworkEnable
        Vector m_bombsiteCenterA; // 0x528        
        // metadata: MNetworkEnable
        Vector m_bombsiteCenterB; // 0x534        
        // metadata: MNetworkEnable
        int32_t m_hostageRescueX[4]; // 0x540        
        // metadata: MNetworkEnable
        int32_t m_hostageRescueY[4]; // 0x550        
        // metadata: MNetworkEnable
        int32_t m_hostageRescueZ[4]; // 0x560        
        // metadata: MNetworkEnable
        bool m_bEndMatchNextMapAllVoted; // 0x570        
        bool m_foundGoalPositions; // 0x571        
        [[maybe_unused]] std::uint8_t pad_0x572[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerResource because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerResource) == 0x578);
};
