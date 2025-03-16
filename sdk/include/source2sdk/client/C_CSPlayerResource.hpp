#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x600
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
    class C_CSPlayerResource : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bHostageAlive[12]; // 0x568        
        // metadata: MNetworkEnable
        bool m_isHostageFollowingSomeone[12]; // 0x574        
        // metadata: MNetworkEnable
        CEntityIndex m_iHostageEntityIDs[12]; // 0x580        
        // metadata: MNetworkEnable
        Vector m_bombsiteCenterA; // 0x5b0        
        // metadata: MNetworkEnable
        Vector m_bombsiteCenterB; // 0x5bc        
        // metadata: MNetworkEnable
        int32_t m_hostageRescueX[4]; // 0x5c8        
        // metadata: MNetworkEnable
        int32_t m_hostageRescueY[4]; // 0x5d8        
        // metadata: MNetworkEnable
        int32_t m_hostageRescueZ[4]; // 0x5e8        
        // metadata: MNetworkEnable
        bool m_bEndMatchNextMapAllVoted; // 0x5f8        
        bool m_foundGoalPositions; // 0x5f9        
        [[maybe_unused]] std::uint8_t pad_0x5fa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSPlayerResource because it is not a standard-layout class
    static_assert(sizeof(C_CSPlayerResource) == 0x600);
};
