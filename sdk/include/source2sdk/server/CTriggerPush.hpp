#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathSimple;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x998
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerPush : public server::CBaseTrigger
    {
    public:
        QAngle m_angPushEntitySpace; // 0x960        
        Vector m_vecPushDirEntitySpace; // 0x96c        
        bool m_bTriggerOnStartTouch; // 0x978        
        bool m_bUsePathSimple; // 0x979        
        [[maybe_unused]] std::uint8_t pad_0x97a[0x6]; // 0x97a
        CUtlSymbolLarge m_iszPathSimpleName; // 0x980        
        server::CPathSimple* m_PathSimple; // 0x988        
        uint32_t m_splinePushType; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x994[0x4];
        
        // Datamap fields:
        // Vector InputSetPushDirection; // 0x0
        // float InputSetPushSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerPush because it is not a standard-layout class
    static_assert(sizeof(CTriggerPush) == 0x998);
};
