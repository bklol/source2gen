#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/server/PulseScriptedSequenceData_t.hpp"
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
    // Size: 0x120
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "ServerPointEntity"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_Outflow_ScriptedSequence : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        CUtlString m_szSyncGroup; // 0x48        
        int32_t m_nExpectedNumSequencesInSyncGroup; // 0x50        
        bool m_bEnsureOnNavmeshOnFinish; // 0x54        
        bool m_bDontTeleportAtEnd; // 0x55        
        [[maybe_unused]] std::uint8_t pad_0x56[0x2]; // 0x56
        server::PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x58        
        // m_vecAdditionalActors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<server::PulseScriptedSequenceData_t> m_vecAdditionalActors; // 0x90        
        pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0xa8        
        pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0xd8        
        // m_Triggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<pulse_runtime_lib::CPulse_OutflowConnection> m_Triggers; // 0x108        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Outflow_ScriptedSequence because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Outflow_ScriptedSequence) == 0x120);
};
