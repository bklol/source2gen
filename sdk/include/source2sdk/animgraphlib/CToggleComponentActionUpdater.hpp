#pragma once
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/modellib/AnimComponentID.hpp"
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
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CToggleComponentActionUpdater : public animgraphlib::CAnimActionUpdater
    {
    public:
        modellib::AnimComponentID m_componentID; // 0x18        
        bool m_bSetEnabled; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CToggleComponentActionUpdater because it is not a standard-layout class
    static_assert(sizeof(CToggleComponentActionUpdater) == 0x20);
};
