#pragma once
#include "source2sdk/client/BloodType.hpp"
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EntityPlatformTypes_t.hpp"
#include "source2sdk/client/LatchDirtyPermission_t.hpp"
#include "source2sdk/client/MoveCollide_t.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/client/thinkfunc_t.hpp"
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/particleslib/CParticleProperty.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class CBodyComponent;
};

namespace source2sdk::client
{
    class CCollisionProperty;
};

namespace source2sdk::client
{
    class CGameSceneNode;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkExcludeByName "m_iMaxHealth"
    // static metadata: MNetworkExcludeByUserGroup "Player"
    // static metadata: MNetworkExcludeByUserGroup "Water"
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkExcludeByName "m_spawnflags"
    // static metadata: MNetworkExcludeByName "m_bTakesDamage"
    // static metadata: MNetworkExcludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkExcludeByName "m_vecAbsVelocity"
    // static metadata: MNetworkExcludeByName "m_flSpeed"
    // static metadata: MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
    // static metadata: MNetworkVarNames "int32 m_iMaxHealth"
    // static metadata: MNetworkVarNames "int32 m_iHealth"
    // static metadata: MNetworkVarNames "uint8 m_lifeState"
    // static metadata: MNetworkVarNames "bool m_bTakesDamage"
    // static metadata: MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
    // static metadata: MNetworkVarNames "uint8 m_ubInterpolationFrame"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
    // static metadata: MNetworkVarNames "float32 m_flAnimTime"
    // static metadata: MNetworkVarNames "float32 m_flSimulationTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCreateTime"
    // static metadata: MNetworkVarNames "float m_flSpeed"
    // static metadata: MNetworkVarNames "bool m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "uint8 m_iTeamNum"
    // static metadata: MNetworkVarNames "uint32 m_spawnflags"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextThinkTick"
    // static metadata: MNetworkVarNames "uint32 m_fFlags"
    // static metadata: MNetworkVarNames "Vector m_vecBaseVelocity"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
    // static metadata: MNetworkVarNames "MoveCollide_t m_MoveCollide"
    // static metadata: MNetworkVarNames "MoveType_t m_MoveType"
    // static metadata: MNetworkVarNames "float32 m_flWaterLevel"
    // static metadata: MNetworkVarNames "uint32 m_fEffects"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
    // static metadata: MNetworkVarNames "int m_nGroundBodyIndex"
    // static metadata: MNetworkVarNames "float32 m_flFriction"
    // static metadata: MNetworkVarNames "float32 m_flElasticity"
    // static metadata: MNetworkVarNames "float32 m_flGravityScale"
    // static metadata: MNetworkVarNames "float32 m_flTimeScale"
    // static metadata: MNetworkVarNames "bool m_bAnimatedEveryTick"
    // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
    // static metadata: MNetworkVarNames "BloodType m_nBloodType"
    #pragma pack(push, 1)
    class C_BaseEntity : public entity2::CEntityInstance
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CBodyComponent"
        // metadata: MNetworkAlias "CBodyComponent"
        // metadata: MNetworkTypeAlias "CBodyComponent"
        // metadata: MNetworkPriority "48"
        client::CBodyComponent* m_CBodyComponent; // 0x38        
        client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x200[0x120]; // 0x200
        entity2::GameTick_t m_nLastThinkTick; // 0x320        
        [[maybe_unused]] std::uint8_t pad_0x324[0x4]; // 0x324
        client::CGameSceneNode* m_pGameSceneNode; // 0x328        
        client::CRenderComponent* m_pRenderComponent; // 0x330        
        client::CCollisionProperty* m_pCollision; // 0x338        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_iMaxHealth; // 0x340        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "ClampHealth"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        int32_t m_iHealth; // 0x344        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        uint8_t m_lifeState; // 0x348        
        // metadata: MNetworkEnable
        bool m_bTakesDamage; // 0x349        
        [[maybe_unused]] std::uint8_t pad_0x34a[0x6]; // 0x34a
        // metadata: MNetworkEnable
        client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x350        
        // metadata: MNetworkEnable
        client::EntityPlatformTypes_t m_nPlatformType; // 0x358        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInterpolationFrameChanged"
        uint8_t m_ubInterpolationFrame; // 0x359        
        [[maybe_unused]] std::uint8_t pad_0x35a[0x2]; // 0x35a
        // m_hSceneObjectController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hSceneObjectController; // 0x35c        
        int32_t m_nNoInterpolationTick; // 0x360        
        int32_t m_nVisibilityNoInterpolationTick; // 0x364        
        float m_flProxyRandomValue; // 0x368        
        int32_t m_iEFlags; // 0x36c        
        uint8_t m_nWaterType; // 0x370        
        bool m_bInterpolateEvenWithNoModel; // 0x371        
        bool m_bPredictionEligible; // 0x372        
        bool m_bApplyLayerMatchIDToModel; // 0x373        
        CUtlStringToken m_tokLayerMatchID; // 0x374        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSubclassIDChanged"
        CUtlStringToken m_nSubclassID; // 0x378        
        [[maybe_unused]] std::uint8_t pad_0x37c[0xc]; // 0x37c
        int32_t m_nSimulationTick; // 0x388        
        int32_t m_iCurrentThinkContext; // 0x38c        
        // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<client::thinkfunc_t> m_aThinkFunctions; // 0x390        
        bool m_bDisabledContextThinks; // 0x3a8        
        [[maybe_unused]] std::uint8_t pad_0x3a9[0x3]; // 0x3a9
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "0"
        // metadata: MNetworkSerializer "animTimeSerializer"
        float m_flAnimTime; // 0x3ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkSerializer "simulationTimeSerializer"
        // metadata: MNetworkChangeCallback "OnSimulationTimeChanged"
        float m_flSimulationTime; // 0x3b0        
        uint8_t m_nSceneObjectOverrideFlags; // 0x3b4        
        bool m_bHasSuccessfullyInterpolated; // 0x3b5        
        bool m_bHasAddedVarsToInterpolation; // 0x3b6        
        bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3b7        
        int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3b8        
        uint16_t m_ListEntry[11]; // 0x3c0        
        [[maybe_unused]] std::uint8_t pad_0x3d6[0x2]; // 0x3d6
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCreateTime; // 0x3d8        
        // metadata: MNetworkEnable
        float m_flSpeed; // 0x3dc        
        uint16_t m_EntClientFlags; // 0x3e0        
        // metadata: MNetworkEnable
        bool m_bClientSideRagdoll; // 0x3e2        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetVarTeamNumChanged"
        uint8_t m_iTeamNum; // 0x3e3        
        // metadata: MNetworkEnable
        uint32_t m_spawnflags; // 0x3e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTick_t m_nNextThinkTick; // 0x3e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnFlagsChanged"
        uint32_t m_fFlags; // 0x3ec        
        Vector m_vecAbsVelocity; // 0x3f0        
        [[maybe_unused]] std::uint8_t pad_0x3fc[0x4]; // 0x3fc
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkChangeCallback "OnLocalVelocityChanged"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vecVelocity; // 0x400        
        [[maybe_unused]] std::uint8_t pad_0x428[0x8]; // 0x428
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        Vector m_vecBaseVelocity; // 0x430        
        // metadata: MNetworkEnable
        // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hEffectEntity; // 0x43c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hOwnerEntity; // 0x440        
        // metadata: MNetworkEnable
        client::MoveCollide_t m_MoveCollide; // 0x444        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMoveTypeChanged"
        client::MoveType_t m_MoveType; // 0x445        
        client::MoveType_t m_nActualMoveType; // 0x446        
        [[maybe_unused]] std::uint8_t pad_0x447[0x1]; // 0x447
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Water"
        // metadata: MNetworkChangeCallback "OnWaterLevelChangeNetworked"
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "8"
        float m_flWaterLevel; // 0x448        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEffectsChanged"
        uint32_t m_fEffects; // 0x44c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hGroundEntity; // 0x450        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        int32_t m_nGroundBodyIndex; // 0x454        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "4.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFriction; // 0x458        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        float m_flElasticity; // 0x45c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flGravityScale; // 0x460        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flTimeScale; // 0x464        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInterpolationAmountChanged"
        bool m_bAnimatedEveryTick; // 0x468        
        [[maybe_unused]] std::uint8_t pad_0x469[0x3]; // 0x469
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNavIgnoreChanged"
        entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x46c        
        uint16_t m_hThink; // 0x470        
        [[maybe_unused]] std::uint8_t pad_0x472[0xe]; // 0x472
        uint8_t m_fBBoxVisFlags; // 0x480        
        bool m_bPredictable; // 0x481        
        bool m_bRenderWithViewModels; // 0x482        
        [[maybe_unused]] std::uint8_t pad_0x483[0x1]; // 0x483
        CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x484        
        int32_t m_nFirstPredictableCommand; // 0x488        
        int32_t m_nLastPredictableCommand; // 0x48c        
        // m_hOldMoveParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hOldMoveParent; // 0x490        
        [[maybe_unused]] std::uint8_t pad_0x494[0x4]; // 0x494
        particleslib::CParticleProperty m_Particles; // 0x498        
        // m_vecPredictedScriptFloats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<float> m_vecPredictedScriptFloats; // 0x4c0        
        // m_vecPredictedScriptFloatIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<int32_t> m_vecPredictedScriptFloatIDs; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4f0[0x18]; // 0x4f0
        int32_t m_nNextScriptVarRecordID; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0xc]; // 0x50c
        QAngle m_vecAngVelocity; // 0x518        
        int32_t m_DataChangeEventRef; // 0x524        
        // m_dependencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CEntityHandle> m_dependencies; // 0x528        
        int32_t m_nCreationTick; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x9]; // 0x544
        bool m_bAnimTimeChanged; // 0x54d        
        bool m_bSimulationTimeChanged; // 0x54e        
        [[maybe_unused]] std::uint8_t pad_0x54f[0x9]; // 0x54f
        CUtlString m_sUniqueHammerID; // 0x558        
        // metadata: MNetworkEnable
        client::BloodType m_nBloodType; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4];
        
        // Static fields:
        static bool &Get_sm_bDatadescValidating() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_sm_bAccurateTriggerBboxChecks() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[1]->m_pInstance);};
        static bool &Get_sm_bDisableTouchFuncs() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[2]->m_pInstance);};
        static bool &Get_m_bAllowPrecache() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[3]->m_pInstance);};
        static client::LatchDirtyPermission_t &Get_s_nLatchPermissions() {return *reinterpret_cast<client::LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[4]->m_pInstance);};
        static int32_t &Get_m_nPredictionRandomSeed() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[5]->m_pInstance);};
        static client::CBasePlayerController* &Get_m_pPredictionPlayerController() {return *reinterpret_cast<client::CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[6]->m_pInstance);};
        static bool &Get_s_bAbsQueriesValid() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[7]->m_pInstance);};
        static bool &Get_s_bAbsRecomputationEnabled() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[8]->m_pInstance);};
        static bool &Get_s_bComputingInterpolatedValues() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[9]->m_pInstance);};
        static bool &Get_s_bPreventingSetAnimRunAnimEvents() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[10]->m_pInstance);};
        static CUtlVector<client::C_BaseEntity*> &Get_gm_UsableObjects() {return *reinterpret_cast<CUtlVector<client::C_BaseEntity*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[11]->m_pInstance);};
        
        // Datamap fields:
        // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
        // void m_CScriptComponent; // 0x28
        // CUtlSymbolLarge subclass_name; // 0x7fffffff
        // void m_pSubclassVData; // 0x380
        // QAngle angles; // 0x7fffffff
        // Vector origin; // 0x7fffffff
        // CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
        // CUtlString ownername; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseEntity) == 0x568);
};
