#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class C_Chicken_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_paramActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CAnimGraphParamRef<char*> m_paramActivity; // 0x60        
        // m_paramEndActivityImmediately has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CAnimGraphParamRef<bool> m_paramEndActivityImmediately; // 0x88        
        // m_paramSnapToSquatting has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CAnimGraphParamRef<bool> m_paramSnapToSquatting; // 0xa8        
        CAnimGraphTagRef m_sActivityFinished; // 0xc8        
        float m_flSquatProbability; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4];
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Chicken_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Chicken_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Chicken_GraphController because it is not a standard-layout class
    static_assert(sizeof(C_Chicken_GraphController) == 0xe8);
};
