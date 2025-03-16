#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1000
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_ragPos"
    // static metadata: MNetworkVarNames "QAngle m_ragAngles"
    // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
    // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
    #pragma pack(push, 1)
    class C_RagdollProp : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf88[0x8]; // 0xf88
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "ragAnglesChanged"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        C_NetworkUtlVectorBase<Vector> m_ragPos; // 0xf90        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // metadata: MNetworkChangeCallback "ragAnglesChanged"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        C_NetworkUtlVectorBase<QAngle> m_ragAngles; // 0xfa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0xfc0        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hRagdollSource; // 0xfc4        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xfc8        
        [[maybe_unused]] std::uint8_t pad_0xfc9[0x3]; // 0xfc9
        float m_flBlendWeightCurrent; // 0xfcc        
        // m_parentPhysicsBoneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_parentPhysicsBoneIndices; // 0xfd0        
        // m_worldSpaceBoneComputationOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_worldSpaceBoneComputationOrder; // 0xfe8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RagdollProp because it is not a standard-layout class
    static_assert(sizeof(C_RagdollProp) == 0x1000);
};
