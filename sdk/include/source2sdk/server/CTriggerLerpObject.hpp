#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
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
    // Size: 0xa08
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerLerpObject : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_iszLerpTarget; // 0x960        
        // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hLerpTarget; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0x96c[0x4]; // 0x96c
        CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x970        
        modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x978        
        [[maybe_unused]] std::uint8_t pad_0x979[0x3]; // 0x979
        float m_flLerpDuration; // 0x97c        
        bool m_bLerpRestoreMoveType; // 0x980        
        bool m_bSingleLerpObject; // 0x981        
        [[maybe_unused]] std::uint8_t pad_0x982[0x6]; // 0x982
        // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<server::lerpdata_t> m_vecLerpingObjects; // 0x988        
        CUtlSymbolLarge m_iszLerpEffect; // 0x9a0        
        CUtlSymbolLarge m_iszLerpSound; // 0x9a8        
        bool m_bAttachTouchingObject; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b1[0x3]; // 0x9b1
        // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hEntityToWaitForDisconnect; // 0x9b4        
        entity2::CEntityIOOutput m_OnLerpStarted; // 0x9b8        
        entity2::CEntityIOOutput m_OnLerpFinished; // 0x9e0        
        
        // Datamap fields:
        // void CTriggerLerpObjectLerpThink; // 0x0
        // void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
    static_assert(sizeof(CTriggerLerpObject) == 0xa08);
};
