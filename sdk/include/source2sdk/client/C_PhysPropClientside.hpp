#pragma once
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1138
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_PhysPropClientside : public client::C_BreakableProp
    {
    public:
        entity2::GameTime_t m_flTouchDelta; // 0x1110        
        entity2::GameTime_t m_fDeathTime; // 0x1114        
        float m_inertiaScale; // 0x1118        
        Vector m_vecDamagePosition; // 0x111c        
        Vector m_vecDamageDirection; // 0x1128        
        client::DamageTypes_t m_nDamageType; // 0x1134        
        
        // Datamap fields:
        // float m_impactEnergyScale; // 0x1080
        // bool forcemotiondisabled; // 0x7fffffff
        // bool phys_start_asleep; // 0x7fffffff
        // float fademaxdist; // 0x7fffffff
        // float fademindist; // 0x7fffffff
        // float fadescale; // 0x7fffffff
        // float scale; // 0x7fffffff
        // const char * skin; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PhysPropClientside because it is not a standard-layout class
    static_assert(sizeof(C_PhysPropClientside) == 0x1138);
};
