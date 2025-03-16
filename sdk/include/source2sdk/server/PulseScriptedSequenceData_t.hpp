#pragma once
#include "source2sdk/client/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/client/ScriptedMoveTo_t.hpp"
#include "source2sdk/modellib/MovementGait_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseScriptedSequenceData_t
    {
    public:
        int32_t m_nActorID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_szPreIdleSequence; // 0x8        
        CUtlString m_szEntrySequence; // 0x10        
        CUtlString m_szSequence; // 0x18        
        CUtlString m_szExitSequence; // 0x20        
        client::ScriptedMoveTo_t m_nMoveTo; // 0x28        
        modellib::MovementGait_t m_nMoveToGait; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        client::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x30        
        bool m_bLoopPreIdleSequence; // 0x34        
        bool m_bLoopActionSequence; // 0x35        
        bool m_bLoopPostIdleSequence; // 0x36        
        bool m_bIgnoreLookAt; // 0x37        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseScriptedSequenceData_t, m_nActorID) == 0x0);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szPreIdleSequence) == 0x8);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szEntrySequence) == 0x10);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szSequence) == 0x18);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szExitSequence) == 0x20);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_nMoveTo) == 0x28);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_nMoveToGait) == 0x2c);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_nHeldWeaponBehavior) == 0x30);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bLoopPreIdleSequence) == 0x34);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bLoopActionSequence) == 0x35);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bLoopPostIdleSequence) == 0x36);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bIgnoreLookAt) == 0x37);
    
    static_assert(sizeof(PulseScriptedSequenceData_t) == 0x38);
};
