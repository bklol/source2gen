#pragma once
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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CPulseCell_Outflow_ScriptedSequence__CursorState_t
    {
    public:
        // m_scriptedSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_scriptedSequence; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseCell_Outflow_ScriptedSequence__CursorState_t, m_scriptedSequence) == 0x0);
    
    static_assert(sizeof(CPulseCell_Outflow_ScriptedSequence__CursorState_t) == 0x4);
};
