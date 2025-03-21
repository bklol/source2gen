#pragma once
#include "source2sdk/client/C_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1770
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
    // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
    #pragma pack(push, 1)
    class C_ItemDogtags : public client::C_Item
    {
    public:
        // metadata: MNetworkEnable
        // m_OwningPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_CSPlayerPawn> m_OwningPlayer; // 0x1768        
        // metadata: MNetworkEnable
        // m_KillingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_CSPlayerPawn> m_KillingPlayer; // 0x176c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ItemDogtags because it is not a standard-layout class
    static_assert(sizeof(C_ItemDogtags) == 0x1770);
};
