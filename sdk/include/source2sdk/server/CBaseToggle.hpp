#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TOGGLE_STATE.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x810
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBaseToggle : public server::CBaseModelEntity
    {
    public:
        server::TOGGLE_STATE m_toggle_state; // 0x790        
        float m_flMoveDistance; // 0x794        
        float m_flWait; // 0x798        
        float m_flLip; // 0x79c        
        bool m_bAlwaysFireBlockedOutputs; // 0x7a0        
        [[maybe_unused]] std::uint8_t pad_0x7a1[0x3]; // 0x7a1
        Vector m_vecPosition1; // 0x7a4        
        Vector m_vecPosition2; // 0x7b0        
        QAngle m_vecMoveAng; // 0x7bc        
        QAngle m_vecAngle1; // 0x7c8        
        QAngle m_vecAngle2; // 0x7d4        
        float m_flHeight; // 0x7e0        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hActivator; // 0x7e4        
        Vector m_vecFinalDest; // 0x7e8        
        QAngle m_vecFinalAngle; // 0x7f4        
        int32_t m_movementType; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x804[0x4]; // 0x804
        CUtlSymbolLarge m_sMaster; // 0x808        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
    static_assert(sizeof(CBaseToggle) == 0x810);
};
