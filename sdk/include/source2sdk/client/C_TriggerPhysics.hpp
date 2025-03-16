#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0xd80
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_gravityScale"
    // static metadata: MNetworkVarNames "float m_linearLimit"
    // static metadata: MNetworkVarNames "float m_linearDamping"
    // static metadata: MNetworkVarNames "float m_angularLimit"
    // static metadata: MNetworkVarNames "float m_angularDamping"
    // static metadata: MNetworkVarNames "float m_linearForce"
    // static metadata: MNetworkVarNames "float m_flFrequency"
    // static metadata: MNetworkVarNames "float m_flDampingRatio"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAt"
    // static metadata: MNetworkVarNames "bool m_bCollapseToForcePoint"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForceDirection"
    // static metadata: MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
    #pragma pack(push, 1)
    class C_TriggerPhysics : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        float m_gravityScale; // 0xd30        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0xd34        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0xd38        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0xd3c        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0xd40        
        // metadata: MNetworkEnable
        float m_linearForce; // 0xd44        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0xd48        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0xd4c        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0xd50        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0xd5c        
        [[maybe_unused]] std::uint8_t pad_0xd5d[0x3]; // 0xd5d
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0xd60        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0xd6c        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd79[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(C_TriggerPhysics) == 0xd80);
};
