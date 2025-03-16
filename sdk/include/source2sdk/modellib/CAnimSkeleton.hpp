#pragma once
#include "source2sdk/modellib/CAnimFoot.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimSkeleton
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // m_localSpaceTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CTransform> m_localSpaceTransforms; // 0x10        
        // m_modelSpaceTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CTransform> m_modelSpaceTransforms; // 0x28        
        // m_boneNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CUtlString> m_boneNames; // 0x40        
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CUtlVector<int32_t>> m_children; // 0x58        
        // m_parents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_parents; // 0x70        
        // m_feet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<modellib::CAnimFoot> m_feet; // 0x88        
        // m_morphNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CUtlString> m_morphNames; // 0xa0        
        // m_lodBoneCounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_lodBoneCounts; // 0xb8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimSkeleton, m_localSpaceTransforms) == 0x10);
    static_assert(offsetof(CAnimSkeleton, m_modelSpaceTransforms) == 0x28);
    static_assert(offsetof(CAnimSkeleton, m_boneNames) == 0x40);
    static_assert(offsetof(CAnimSkeleton, m_children) == 0x58);
    static_assert(offsetof(CAnimSkeleton, m_parents) == 0x70);
    static_assert(offsetof(CAnimSkeleton, m_feet) == 0x88);
    static_assert(offsetof(CAnimSkeleton, m_morphNames) == 0xa0);
    static_assert(offsetof(CAnimSkeleton, m_lodBoneCounts) == 0xb8);
    
    static_assert(sizeof(CAnimSkeleton) == 0xd0);
};
