#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CInfoLadderDismount;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x840
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
    // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
    // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
    // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
    // static metadata: MNetworkVarNames "bool m_bFakeLadder"
    #pragma pack(push, 1)
    class CFuncLadder : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecLadderDir; // 0x790        
        [[maybe_unused]] std::uint8_t pad_0x79c[0x4]; // 0x79c
        // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CHandle<server::CInfoLadderDismount>> m_Dismounts; // 0x7a0        
        Vector m_vecLocalTop; // 0x7b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecPlayerMountPositionTop; // 0x7c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecPlayerMountPositionBottom; // 0x7d0        
        // metadata: MNetworkEnable
        float m_flAutoRideSpeed; // 0x7dc        
        bool m_bDisabled; // 0x7e0        
        // metadata: MNetworkEnable
        bool m_bFakeLadder; // 0x7e1        
        bool m_bHasSlack; // 0x7e2        
        [[maybe_unused]] std::uint8_t pad_0x7e3[0x5]; // 0x7e3
        CUtlSymbolLarge m_surfacePropName; // 0x7e8        
        entity2::CEntityIOOutput m_OnPlayerGotOnLadder; // 0x7f0        
        entity2::CEntityIOOutput m_OnPlayerGotOffLadder; // 0x818        
        
        // Static fields:
        static CUtlVector<server::CFuncLadder*> &Get_s_Ladders() {return *reinterpret_cast<CUtlVector<server::CFuncLadder*>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncLadder because it is not a standard-layout class
    static_assert(sizeof(CFuncLadder) == 0x840);
};
