#pragma once
#include "source2sdk/animgraphlib/CMotionMetricEvaluator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootPositionMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
    {
    public:
        // m_footIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_footIndices; // 0x50        
        bool m_bIgnoreSlope; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x69[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootPositionMetricEvaluator because it is not a standard-layout class
    static_assert(sizeof(CFootPositionMetricEvaluator) == 0x70);
};
