#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0xb30
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicCase : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_nCase[32]; // 0x4e0        
        int32_t m_nShuffleCases; // 0x5e0        
        int32_t m_nLastShuffleCase; // 0x5e4        
        uint8_t m_uchShuffleCaseMap[32]; // 0x5e8        
        entity2::CEntityIOOutput m_OnCase[32]; // 0x608        
        // m_OnDefault has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CEntityOutputTemplate<CVariantBase<entity2::CVariantDefaultAllocator>> m_OnDefault; // 0xb08        
        
        // Datamap fields:
        // CUtlSymbolLarge InputValue; // 0x0
        // void InputPickRandom; // 0x0
        // void InputPickRandomShuffle; // 0x0
        // void InputResetShuffle; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicCase because it is not a standard-layout class
    static_assert(sizeof(CLogicCase) == 0xb30);
};
