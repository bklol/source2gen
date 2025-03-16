#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x12d8
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
    // static metadata: MNetworkIncludeByName "m_nameStringableIndex"
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "char m_szSnapshotFileName"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bFrozen"
    // static metadata: MNetworkVarNames "float m_flFreezeTransitionDuration"
    // static metadata: MNetworkVarNames "int m_nStopType"
    // static metadata: MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flPreSimTime"
    // static metadata: MNetworkVarNames "Vector m_vServerControlPoints"
    // static metadata: MNetworkVarNames "uint8 m_iServerControlPointAssignments"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
    // static metadata: MNetworkVarNames "bool m_bNoSave"
    // static metadata: MNetworkVarNames "bool m_bNoFreeze"
    // static metadata: MNetworkVarNames "bool m_bNoRamp"
    #pragma pack(push, 1)
    class C_ParticleSystem : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_szSnapshotFileName[512]; // 0xd28        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xf28        
        // metadata: MNetworkEnable
        bool m_bFrozen; // 0xf29        
        [[maybe_unused]] std::uint8_t pad_0xf2a[0x2]; // 0xf2a
        // metadata: MNetworkEnable
        float m_flFreezeTransitionDuration; // 0xf2c        
        // metadata: MNetworkEnable
        int32_t m_nStopType; // 0xf30        
        // metadata: MNetworkEnable
        bool m_bAnimateDuringGameplayPause; // 0xf34        
        [[maybe_unused]] std::uint8_t pad_0xf35[0x3]; // 0xf35
        // metadata: MNetworkEnable
        // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0xf38        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xf40        
        // metadata: MNetworkEnable
        float m_flPreSimTime; // 0xf44        
        // metadata: MNetworkEnable
        Vector m_vServerControlPoints[4]; // 0xf48        
        // metadata: MNetworkEnable
        uint8_t m_iServerControlPointAssignments[4]; // 0xf78        
        // metadata: MNetworkEnable
        // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hControlPointEnts[64]; // 0xf7c        
        // metadata: MNetworkEnable
        bool m_bNoSave; // 0x107c        
        // metadata: MNetworkEnable
        bool m_bNoFreeze; // 0x107d        
        // metadata: MNetworkEnable
        bool m_bNoRamp; // 0x107e        
        bool m_bStartActive; // 0x107f        
        CUtlSymbolLarge m_iszEffectName; // 0x1080        
        CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1088        
        int32_t m_nDataCP; // 0x1288        
        Vector m_vecDataCPValue; // 0x128c        
        int32_t m_nTintCP; // 0x1298        
        Color m_clrTint; // 0x129c        
        [[maybe_unused]] std::uint8_t pad_0x12a0[0x20]; // 0x12a0
        bool m_bOldActive; // 0x12c0        
        bool m_bOldFrozen; // 0x12c1        
        [[maybe_unused]] std::uint8_t pad_0x12c2[0x16];
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputStopEndCap; // 0x0
        // void InputDestroy; // 0x0
        // CUtlSymbolLarge InputSetControlPoint; // 0x0
        // float InputSetDataControlPointX; // 0x0
        // float InputSetDataControlPointY; // 0x0
        // float InputSetDataControlPointZ; // 0x0
        // void C_ParticleSystemStartParticleSystemThink; // 0x0
        // CUtlString cpoint%d_value[64]; // 0x7fffffff
        // void m_pEffect; // 0x12a0
        // void m_iOldEffectIndex; // 0x12c8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
    static_assert(sizeof(C_ParticleSystem) == 0x12d8);
};
