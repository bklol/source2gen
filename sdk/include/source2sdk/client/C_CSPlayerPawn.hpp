#pragma once
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/C_CSPlayerPawnBase.hpp"
#include "source2sdk/client/C_EconItemView.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/PredictedDamageTag_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCSPlayer_ActionTrackingServices;
};

namespace source2sdk::client
{
    class CCSPlayer_BulletServices;
};

namespace source2sdk::client
{
    class CCSPlayer_BuyServices;
};

namespace source2sdk::client
{
    class CCSPlayer_DamageReactServices;
};

namespace source2sdk::client
{
    class CCSPlayer_GlowServices;
};

namespace source2sdk::client
{
    class CCSPlayer_HostageServices;
};

namespace source2sdk::client
{
    class C_BulletHitModel;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x3a40
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
    // static metadata: MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
    // static metadata: MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
    // static metadata: MNetworkVarNames "CCSPlayer_GlowServices * m_pGlowServices"
    // static metadata: MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
    // static metadata: MNetworkIncludeByName "m_pUseServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
    // static metadata: MNetworkIncludeByName "m_pItemServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
    // static metadata: MNetworkIncludeByName "m_pWaterServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
    // static metadata: MNetworkIncludeByName "m_pViewModelServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
    // static metadata: MNetworkIncludeByName "m_pWeaponServices"
    // static metadata: MNetworkIncludeByName "m_ArmorValue"
    // static metadata: MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
    // static metadata: MNetworkVarNames "bool m_bHasFemaleVoice"
    // static metadata: MNetworkVarNames "char m_szLastPlaceName"
    // static metadata: MNetworkVarNames "bool m_bInBuyZone"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngle"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngleVel"
    // static metadata: MNetworkVarNames "int m_aimPunchTickBase"
    // static metadata: MNetworkVarNames "float m_aimPunchTickFraction"
    // static metadata: MNetworkVarNames "bool m_bInHostageRescueZone"
    // static metadata: MNetworkVarNames "bool m_bInBombZone"
    // static metadata: MNetworkVarNames "bool m_bIsBuyMenuOpen"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
    // static metadata: MNetworkVarNames "int m_iRetakesOffering"
    // static metadata: MNetworkVarNames "int m_iRetakesOfferingCard"
    // static metadata: MNetworkVarNames "bool m_bRetakesHasDefuseKit"
    // static metadata: MNetworkVarNames "bool m_bRetakesMVPLastRound"
    // static metadata: MNetworkVarNames "int m_iRetakesMVPBoostItem"
    // static metadata: MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
    // static metadata: MNetworkVarNames "CEconItemView m_EconGloves"
    // static metadata: MNetworkVarNames "uint8 m_nEconGlovesChanged"
    // static metadata: MNetworkVarNames "int m_nRagdollDamageBone"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamageForce"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamagePosition"
    // static metadata: MNetworkVarNames "char m_szRagdollDamageWeaponName"
    // static metadata: MNetworkVarNames "bool m_bRagdollDamageHeadshot"
    // static metadata: MNetworkVarNames "Vector m_vRagdollServerOrigin"
    // static metadata: MNetworkReplayCompatField "m_bClientRagdoll"
    // static metadata: MNetworkVarNames "QAngle m_qDeathEyeAngles"
    // static metadata: MNetworkVarNames "bool m_bLeftHanded"
    // static metadata: MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetX"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetY"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetZ"
    // static metadata: MNetworkVarNames "float m_flViewmodelFOV"
    // static metadata: MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
    // static metadata: MNetworkVarNames "Color m_GunGameImmunityColor"
    // static metadata: MNetworkVarNames "bool m_bIsWalking"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    // static metadata: MNetworkVarNames "bool m_bIsScoped"
    // static metadata: MNetworkVarNames "bool m_bResumeZoom"
    // static metadata: MNetworkVarNames "bool m_bIsDefusing"
    // static metadata: MNetworkVarNames "bool m_bIsGrabbingHostage"
    // static metadata: MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
    // static metadata: MNetworkVarNames "GameTime_t m_flEmitSoundTime"
    // static metadata: MNetworkVarNames "bool m_bInNoDefuseArea"
    // static metadata: MNetworkVarNames "int m_nWhichBombZone"
    // static metadata: MNetworkVarNames "int m_iShotsFired"
    // static metadata: MNetworkVarNames "float m_flFlinchStack"
    // static metadata: MNetworkVarNames "float m_flVelocityModifier"
    // static metadata: MNetworkVarNames "float m_flHitHeading"
    // static metadata: MNetworkVarNames "int m_nHitBodyPart"
    // static metadata: MNetworkVarNames "bool m_bWaitForNoAttack"
    // static metadata: MNetworkVarNames "bool m_bKilledByHeadshot"
    // static metadata: MNetworkVarNames "int32 m_ArmorValue"
    // static metadata: MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
    // static metadata: MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
    // static metadata: MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
    #pragma pack(push, 1)
    class C_CSPlayerPawn : public client::C_CSPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1510[0x8]; // 0x1510
        // metadata: MNetworkEnable
        client::CCSPlayer_BulletServices* m_pBulletServices; // 0x1518        
        // metadata: MNetworkEnable
        client::CCSPlayer_HostageServices* m_pHostageServices; // 0x1520        
        // metadata: MNetworkEnable
        client::CCSPlayer_BuyServices* m_pBuyServices; // 0x1528        
        // metadata: MNetworkEnable
        client::CCSPlayer_GlowServices* m_pGlowServices; // 0x1530        
        // metadata: MNetworkEnable
        client::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1538        
        client::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x1540        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHealthShotBoostExpirationTime; // 0x1548        
        entity2::GameTime_t m_flLastFiredWeaponTime; // 0x154c        
        // metadata: MNetworkEnable
        bool m_bHasFemaleVoice; // 0x1550        
        [[maybe_unused]] std::uint8_t pad_0x1551[0x3]; // 0x1551
        float m_flLandingTimeSeconds; // 0x1554        
        float m_flOldFallVelocity; // 0x1558        
        // metadata: MNetworkEnable
        char m_szLastPlaceName[18]; // 0x155c        
        bool m_bPrevDefuser; // 0x156e        
        bool m_bPrevHelmet; // 0x156f        
        int32_t m_nPrevArmorVal; // 0x1570        
        int32_t m_nPrevGrenadeAmmoCount; // 0x1574        
        uint32_t m_unPreviousWeaponHash; // 0x1578        
        uint32_t m_unWeaponHash; // 0x157c        
        // metadata: MNetworkEnable
        bool m_bInBuyZone; // 0x1580        
        bool m_bPreviouslyInBuyZone; // 0x1581        
        [[maybe_unused]] std::uint8_t pad_0x1582[0x2]; // 0x1582
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngle; // 0x1584        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngleVel; // 0x1590        
        // metadata: MNetworkEnable
        int32_t m_aimPunchTickBase; // 0x159c        
        // metadata: MNetworkEnable
        float m_aimPunchTickFraction; // 0x15a0        
        [[maybe_unused]] std::uint8_t pad_0x15a4[0x4]; // 0x15a4
        // m_aimPunchCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<QAngle> m_aimPunchCache; // 0x15a8        
        [[maybe_unused]] std::uint8_t pad_0x15c0[0x8]; // 0x15c0
        bool m_bInLanding; // 0x15c8        
        [[maybe_unused]] std::uint8_t pad_0x15c9[0x3]; // 0x15c9
        float m_flLandingStartTime; // 0x15cc        
        // metadata: MNetworkEnable
        bool m_bInHostageRescueZone; // 0x15d0        
        // metadata: MNetworkEnable
        bool m_bInBombZone; // 0x15d1        
        // metadata: MNetworkEnable
        bool m_bIsBuyMenuOpen; // 0x15d2        
        [[maybe_unused]] std::uint8_t pad_0x15d3[0x1]; // 0x15d3
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeOfLastInjury; // 0x15d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flNextSprayDecalTime; // 0x15d8        
        [[maybe_unused]] std::uint8_t pad_0x15dc[0x154]; // 0x15dc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRetakesOfferingChanged"
        int32_t m_iRetakesOffering; // 0x1730        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRetakesOfferingCardChanged"
        int32_t m_iRetakesOfferingCard; // 0x1734        
        // metadata: MNetworkEnable
        bool m_bRetakesHasDefuseKit; // 0x1738        
        // metadata: MNetworkEnable
        bool m_bRetakesMVPLastRound; // 0x1739        
        [[maybe_unused]] std::uint8_t pad_0x173a[0x2]; // 0x173a
        // metadata: MNetworkEnable
        int32_t m_iRetakesMVPBoostItem; // 0x173c        
        // metadata: MNetworkEnable
        client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x1c]; // 0x1744
        bool m_bNeedToReApplyGloves; // 0x1760        
        [[maybe_unused]] std::uint8_t pad_0x1761[0x7]; // 0x1761
        // metadata: MNetworkEnable
        client::C_EconItemView m_EconGloves; // 0x1768        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEconGlovesChanged"
        uint8_t m_nEconGlovesChanged; // 0x1bb0        
        bool m_bMustSyncRagdollState; // 0x1bb1        
        [[maybe_unused]] std::uint8_t pad_0x1bb2[0x2]; // 0x1bb2
        // metadata: MNetworkEnable
        int32_t m_nRagdollDamageBone; // 0x1bb4        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamageForce; // 0x1bb8        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamagePosition; // 0x1bc4        
        // metadata: MNetworkEnable
        char m_szRagdollDamageWeaponName[64]; // 0x1bd0        
        // metadata: MNetworkEnable
        bool m_bRagdollDamageHeadshot; // 0x1c10        
        [[maybe_unused]] std::uint8_t pad_0x1c11[0x3]; // 0x1c11
        // metadata: MNetworkEnable
        Vector m_vRagdollServerOrigin; // 0x1c14        
        [[maybe_unused]] std::uint8_t pad_0x1c20[0x670]; // 0x1c20
        bool m_bLastHeadBoneTransformIsValid; // 0x2290        
        [[maybe_unused]] std::uint8_t pad_0x2291[0x3]; // 0x2291
        entity2::GameTime_t m_lastLandTime; // 0x2294        
        bool m_bOnGroundLastTick; // 0x2298        
        [[maybe_unused]] std::uint8_t pad_0x2299[0x1b]; // 0x2299
        // metadata: MNetworkEnable
        QAngle m_qDeathEyeAngles; // 0x22b4        
        bool m_bSkipOneHeadConstraintUpdate; // 0x22c0        
        // metadata: MNetworkEnable
        bool m_bLeftHanded; // 0x22c1        
        [[maybe_unused]] std::uint8_t pad_0x22c2[0x2]; // 0x22c2
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fSwitchedHandednessTime; // 0x22c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2.000000"
        // metadata: MNetworkMaxValue "2.500000"
        float m_flViewmodelOffsetX; // 0x22c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flViewmodelOffsetY; // 0x22cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flViewmodelOffsetZ; // 0x22d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "60.000000"
        // metadata: MNetworkMaxValue "68.000000"
        float m_flViewmodelFOV; // 0x22d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecvProxy_PatchEconIndices"
        uint32_t m_vecPlayerPatchEconIndices[5]; // 0x22d8        
        [[maybe_unused]] std::uint8_t pad_0x22ec[0x24]; // 0x22ec
        // metadata: MNetworkEnable
        Color m_GunGameImmunityColor; // 0x2310        
        [[maybe_unused]] std::uint8_t pad_0x2314[0x4c]; // 0x2314
        // m_vecBulletHitModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<client::C_BulletHitModel*> m_vecBulletHitModels; // 0x2360        
        // metadata: MNetworkEnable
        bool m_bIsWalking; // 0x2378        
        [[maybe_unused]] std::uint8_t pad_0x2379[0x7]; // 0x2379
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkChangeCallback "OnThirdPersonHeadingChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_thirdPersonHeading; // 0x2380        
        [[maybe_unused]] std::uint8_t pad_0x238c[0xc]; // 0x238c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSlopeDropOffsetChanged"
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropOffset; // 0x2398        
        [[maybe_unused]] std::uint8_t pad_0x239c[0xc]; // 0x239c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSlopeDropHeightChanged"
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropHeight; // 0x23a8        
        [[maybe_unused]] std::uint8_t pad_0x23ac[0xc]; // 0x23ac
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHeadConstraintChanged"
        // metadata: MNetworkPriority "32"
        Vector m_vHeadConstraintOffset; // 0x23b8        
        [[maybe_unused]] std::uint8_t pad_0x23c4[0xc]; // 0x23c4
        // metadata: MNetworkEnable
        client::EntitySpottedState_t m_entitySpottedState; // 0x23d0        
        // metadata: MNetworkEnable
        bool m_bIsScoped; // 0x23e8        
        // metadata: MNetworkEnable
        bool m_bResumeZoom; // 0x23e9        
        // metadata: MNetworkEnable
        bool m_bIsDefusing; // 0x23ea        
        // metadata: MNetworkEnable
        bool m_bIsGrabbingHostage; // 0x23eb        
        // metadata: MNetworkEnable
        client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x23ec        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flEmitSoundTime; // 0x23f0        
        // metadata: MNetworkEnable
        bool m_bInNoDefuseArea; // 0x23f4        
        [[maybe_unused]] std::uint8_t pad_0x23f5[0x3]; // 0x23f5
        // metadata: MNetworkEnable
        int32_t m_nWhichBombZone; // 0x23f8        
        // metadata: MNetworkEnable
        int32_t m_iShotsFired; // 0x23fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFlinchStack; // 0x2400        
        // metadata: MNetworkEnable
        float m_flVelocityModifier; // 0x2404        
        // metadata: MNetworkEnable
        float m_flHitHeading; // 0x2408        
        // metadata: MNetworkEnable
        int32_t m_nHitBodyPart; // 0x240c        
        // metadata: MNetworkEnable
        bool m_bWaitForNoAttack; // 0x2410        
        [[maybe_unused]] std::uint8_t pad_0x2411[0x3]; // 0x2411
        float m_ignoreLadderJumpTime; // 0x2414        
        [[maybe_unused]] std::uint8_t pad_0x2418[0x1]; // 0x2418
        // metadata: MNetworkEnable
        bool m_bKilledByHeadshot; // 0x2419        
        [[maybe_unused]] std::uint8_t pad_0x241a[0x2]; // 0x241a
        // metadata: MNetworkEnable
        int32_t m_ArmorValue; // 0x241c        
        // metadata: MNetworkEnable
        uint16_t m_unCurrentEquipmentValue; // 0x2420        
        // metadata: MNetworkEnable
        uint16_t m_unRoundStartEquipmentValue; // 0x2422        
        // metadata: MNetworkEnable
        uint16_t m_unFreezetimeEndEquipmentValue; // 0x2424        
        [[maybe_unused]] std::uint8_t pad_0x2426[0x2]; // 0x2426
        // metadata: MNetworkEnable
        CEntityIndex m_nLastKillerIndex; // 0x2428        
        bool m_bOldIsScoped; // 0x242c        
        bool m_bHasDeathInfo; // 0x242d        
        [[maybe_unused]] std::uint8_t pad_0x242e[0x2]; // 0x242e
        float m_flDeathInfoTime; // 0x2430        
        Vector m_vecDeathInfoOrigin; // 0x2434        
        entity2::GameTime_t m_grenadeParameterStashTime; // 0x2440        
        bool m_bGrenadeParametersStashed; // 0x2444        
        [[maybe_unused]] std::uint8_t pad_0x2445[0x3]; // 0x2445
        QAngle m_angStashedShootAngles; // 0x2448        
        Vector m_vecStashedGrenadeThrowPosition; // 0x2454        
        Vector m_vecStashedVelocity; // 0x2460        
        QAngle m_angShootAngleHistory[2]; // 0x246c        
        Vector m_vecThrowPositionHistory[2]; // 0x2484        
        Vector m_vecVelocityHistory[2]; // 0x249c        
        [[maybe_unused]] std::uint8_t pad_0x24b4[0x4]; // 0x24b4
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkChangeCallback "OnPredictedDamageTagsChanged"
        // m_PredictedDamageTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        C_UtlVectorEmbeddedNetworkVar<client::PredictedDamageTag_t> m_PredictedDamageTags; // 0x24b8        
        entity2::GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x2508        
        int32_t m_nHighestAppliedDamageTagTick; // 0x250c        
        [[maybe_unused]] std::uint8_t pad_0x2510[0x1530];
        
        // Datamap fields:
        // CCSPlayer_ItemServices m_pItemServices; // 0x11b0
        // CCSPlayer_UseServices m_pUseServices; // 0x11d0
        // CCSPlayer_WaterServices m_pWaterServices; // 0x11c8
        // CCSPlayer_MovementServices m_pMovementServices; // 0x11e8
        // CCSPlayer_ViewModelServices m_pViewModelServices; // 0x1368
        // CCSPlayer_WeaponServices m_pWeaponServices; // 0x11a8
        // CCSPlayer_CameraServices m_pCameraServices; // 0x11e0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_CSPlayerPawn) == 0x3a40);
};
