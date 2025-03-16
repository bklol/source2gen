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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcc0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerSndSosOpvar : public server::CBaseTrigger
    {
    public:
        // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingPlayers; // 0x960        
        Vector m_flPosition; // 0x978        
        float m_flCenterSize; // 0x984        
        float m_flMinVal; // 0x988        
        float m_flMaxVal; // 0x98c        
        CUtlSymbolLarge m_opvarName; // 0x990        
        CUtlSymbolLarge m_stackName; // 0x998        
        CUtlSymbolLarge m_operatorName; // 0x9a0        
        bool m_bVolIs2D; // 0x9a8        
        char m_opvarNameChar[256]; // 0x9a9        
        char m_stackNameChar[256]; // 0xaa9        
        char m_operatorNameChar[256]; // 0xba9        
        [[maybe_unused]] std::uint8_t pad_0xca9[0x3]; // 0xca9
        Vector m_VecNormPos; // 0xcac        
        float m_flNormCenterSize; // 0xcb8        
        [[maybe_unused]] std::uint8_t pad_0xcbc[0x4];
        
        // Datamap fields:
        // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
        // void m_opvarNameChar; // 0x9a9
        // void m_stackNameChar; // 0xaa9
        // void m_operatorNameChar; // 0xba9
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
    static_assert(sizeof(CTriggerSndSosOpvar) == 0xcc0);
};
