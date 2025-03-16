#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicMeasureMovement : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_strMeasureTarget; // 0x4e0        
        CUtlSymbolLarge m_strMeasureReference; // 0x4e8        
        CUtlSymbolLarge m_strTargetReference; // 0x4f0        
        // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hMeasureTarget; // 0x4f8        
        // m_hMeasureReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hMeasureReference; // 0x4fc        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hTarget; // 0x500        
        // m_hTargetReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hTargetReference; // 0x504        
        float m_flScale; // 0x508        
        int32_t m_nMeasureType; // 0x50c        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetMeasureTarget; // 0x0
        // CUtlSymbolLarge InputSetMeasureReference; // 0x0
        // CUtlSymbolLarge InputSetTarget; // 0x0
        // CUtlSymbolLarge InputSetTargetReference; // 0x0
        // float InputSetTargetScale; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void CLogicMeasureMovementMeasureThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicMeasureMovement because it is not a standard-layout class
    static_assert(sizeof(CLogicMeasureMovement) == 0x510);
};
