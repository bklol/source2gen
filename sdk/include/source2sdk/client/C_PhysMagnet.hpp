#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xfb8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_PhysMagnet : public client::CBaseAnimGraph
    {
    public:
        // m_aAttachedObjectsFromServer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_aAttachedObjectsFromServer; // 0xf88        
        // m_aAttachedObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CHandle<client::C_BaseEntity>> m_aAttachedObjects; // 0xfa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PhysMagnet because it is not a standard-layout class
    static_assert(sizeof(C_PhysMagnet) == 0xfb8);
};
