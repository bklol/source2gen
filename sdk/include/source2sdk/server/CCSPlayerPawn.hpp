#pragma once
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSPlayerPawnBase.hpp"
#include "source2sdk/server/CEconItemView.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
#include "source2sdk/server/PredictedDamageTag_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCSBot;
};

namespace source2sdk::server
{
    class CCSPlayer_ActionTrackingServices;
};

namespace source2sdk::server
{
    class CCSPlayer_BulletServices;
};

namespace source2sdk::server
{
    class CCSPlayer_BuyServices;
};

namespace source2sdk::server
{
    class CCSPlayer_DamageReactServices;
};

namespace source2sdk::server
{
    class CCSPlayer_HostageServices;
};

namespace source2sdk::server
{
    class CCSPlayer_RadioServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1b30
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
    // static metadata: MNetworkIncludeByName "m_pWeaponServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
    // static metadata: MNetworkIncludeByName "m_pItemServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
    // static metadata: MNetworkIncludeByName "m_pUseServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
    // static metadata: MNetworkIncludeByName "m_pWaterServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
    // static metadata: MNetworkIncludeByName "m_pViewModelServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
    // static metadata: MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
    // static metadata: MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
    // static metadata: MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
    // static metadata: MNetworkVarNames "bool m_bHasFemaleVoice"
    // static metadata: MNetworkVarNames "char m_szLastPlaceName"
    // static metadata: MNetworkVarNames "bool m_bInBuyZone"
    // static metadata: MNetworkVarNames "bool m_bInHostageRescueZone"
    // static metadata: MNetworkVarNames "bool m_bInBombZone"
    // static metadata: MNetworkVarNames "int m_iRetakesOffering"
    // static metadata: MNetworkVarNames "int m_iRetakesOfferingCard"
    // static metadata: MNetworkVarNames "bool m_bRetakesHasDefuseKit"
    // static metadata: MNetworkVarNames "bool m_bRetakesMVPLastRound"
    // static metadata: MNetworkVarNames "int m_iRetakesMVPBoostItem"
    // static metadata: MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
    // static metadata: MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngle"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngleVel"
    // static metadata: MNetworkVarNames "int m_aimPunchTickBase"
    // static metadata: MNetworkVarNames "float m_aimPunchTickFraction"
    // static metadata: MNetworkVarNames "bool m_bIsBuyMenuOpen"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
    // static metadata: MNetworkVarNames "int m_nRagdollDamageBone"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamageForce"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamagePosition"
    // static metadata: MNetworkVarNames "char m_szRagdollDamageWeaponName"
    // static metadata: MNetworkVarNames "bool m_bRagdollDamageHeadshot"
    // static metadata: MNetworkVarNames "Vector m_vRagdollServerOrigin"
    // static metadata: MNetworkVarNames "CEconItemView m_EconGloves"
    // static metadata: MNetworkVarNames "uint8 m_nEconGlovesChanged"
    // static metadata: MNetworkVarNames "QAngle m_qDeathEyeAngles"
    // static metadata: MNetworkVarNames "bool m_bLeftHanded"
    // static metadata: MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetX"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetY"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetZ"
    // static metadata: MNetworkVarNames "float m_flViewmodelFOV"
    // static metadata: MNetworkVarNames "bool m_bIsWalking"
    // static metadata: MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
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
    // static metadata: MNetworkVarNames "QAngle m_thirdPersonHeading"
    // static metadata: MNetworkVarNames "float m_flSlopeDropOffset"
    // static metadata: MNetworkVarNames "float m_flSlopeDropHeight"
    // static metadata: MNetworkVarNames "Vector m_vHeadConstraintOffset"
    // static metadata: MNetworkVarNames "int32 m_ArmorValue"
    // static metadata: MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
    // static metadata: MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
    // static metadata: MNetworkVarNames "Color m_GunGameImmunityColor"
    // static metadata: MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
    #pragma pack(push, 1)
    class CCSPlayerPawn : public server::CCSPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x8]; // 0xdc8
        // metadata: MNetworkEnable
        server::CCSPlayer_BulletServices* m_pBulletServices; // 0xdd0        
        // metadata: MNetworkEnable
        server::CCSPlayer_HostageServices* m_pHostageServices; // 0xdd8        
        // metadata: MNetworkEnable
        server::CCSPlayer_BuyServices* m_pBuyServices; // 0xde0        
        // metadata: MNetworkEnable
        server::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xde8        
        server::CCSPlayer_RadioServices* m_pRadioServices; // 0xdf0        
        server::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xdf8        
        uint16_t m_nCharacterDefIndex; // 0xe00        
        // metadata: MNetworkEnable
        bool m_bHasFemaleVoice; // 0xe02        
        [[maybe_unused]] std::uint8_t pad_0xe03[0x5]; // 0xe03
        CUtlString m_strVOPrefix; // 0xe08        
        // metadata: MNetworkEnable
        char m_szLastPlaceName[18]; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe22[0xae]; // 0xe22
        bool m_bInHostageResetZone; // 0xed0        
        // metadata: MNetworkEnable
        bool m_bInBuyZone; // 0xed1        
        [[maybe_unused]] std::uint8_t pad_0xed2[0x6]; // 0xed2
        // m_TouchingBuyZones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CHandle<server::CBaseEntity>> m_TouchingBuyZones; // 0xed8        
        bool m_bWasInBuyZone; // 0xef0        
        // metadata: MNetworkEnable
        bool m_bInHostageRescueZone; // 0xef1        
        // metadata: MNetworkEnable
        bool m_bInBombZone; // 0xef2        
        bool m_bWasInHostageRescueZone; // 0xef3        
        // metadata: MNetworkEnable
        int32_t m_iRetakesOffering; // 0xef4        
        // metadata: MNetworkEnable
        int32_t m_iRetakesOfferingCard; // 0xef8        
        // metadata: MNetworkEnable
        bool m_bRetakesHasDefuseKit; // 0xefc        
        // metadata: MNetworkEnable
        bool m_bRetakesMVPLastRound; // 0xefd        
        [[maybe_unused]] std::uint8_t pad_0xefe[0x2]; // 0xefe
        // metadata: MNetworkEnable
        int32_t m_iRetakesMVPBoostItem; // 0xf00        
        // metadata: MNetworkEnable
        client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xf04        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHealthShotBoostExpirationTime; // 0xf08        
        float m_flLandingTimeSeconds; // 0xf0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngle; // 0xf10        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngleVel; // 0xf1c        
        // metadata: MNetworkEnable
        int32_t m_aimPunchTickBase; // 0xf28        
        // metadata: MNetworkEnable
        float m_aimPunchTickFraction; // 0xf2c        
        // m_aimPunchCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<QAngle> m_aimPunchCache; // 0xf30        
        // metadata: MNetworkEnable
        bool m_bIsBuyMenuOpen; // 0xf48        
        [[maybe_unused]] std::uint8_t pad_0xf49[0x6a7]; // 0xf49
        CTransform m_xLastHeadBoneTransform; // 0x15f0        
        bool m_bLastHeadBoneTransformIsValid; // 0x1610        
        [[maybe_unused]] std::uint8_t pad_0x1611[0x3]; // 0x1611
        entity2::GameTime_t m_lastLandTime; // 0x1614        
        bool m_bOnGroundLastTick; // 0x1618        
        [[maybe_unused]] std::uint8_t pad_0x1619[0x3]; // 0x1619
        int32_t m_iPlayerLocked; // 0x161c        
        [[maybe_unused]] std::uint8_t pad_0x1620[0x4]; // 0x1620
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeOfLastInjury; // 0x1624        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flNextSprayDecalTime; // 0x1628        
        bool m_bNextSprayDecalTimeExpedited; // 0x162c        
        [[maybe_unused]] std::uint8_t pad_0x162d[0x3]; // 0x162d
        // metadata: MNetworkEnable
        int32_t m_nRagdollDamageBone; // 0x1630        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamageForce; // 0x1634        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamagePosition; // 0x1640        
        // metadata: MNetworkEnable
        char m_szRagdollDamageWeaponName[64]; // 0x164c        
        // metadata: MNetworkEnable
        bool m_bRagdollDamageHeadshot; // 0x168c        
        [[maybe_unused]] std::uint8_t pad_0x168d[0x3]; // 0x168d
        // metadata: MNetworkEnable
        Vector m_vRagdollServerOrigin; // 0x1690        
        [[maybe_unused]] std::uint8_t pad_0x169c[0x4]; // 0x169c
        // metadata: MNetworkEnable
        server::CEconItemView m_EconGloves; // 0x16a0        
        // metadata: MNetworkEnable
        uint8_t m_nEconGlovesChanged; // 0x1918        
        [[maybe_unused]] std::uint8_t pad_0x1919[0x3]; // 0x1919
        // metadata: MNetworkEnable
        QAngle m_qDeathEyeAngles; // 0x191c        
        bool m_bSkipOneHeadConstraintUpdate; // 0x1928        
        // metadata: MNetworkEnable
        bool m_bLeftHanded; // 0x1929        
        [[maybe_unused]] std::uint8_t pad_0x192a[0x2]; // 0x192a
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fSwitchedHandednessTime; // 0x192c        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2.000000"
        // metadata: MNetworkMaxValue "2.500000"
        float m_flViewmodelOffsetX; // 0x1930        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flViewmodelOffsetY; // 0x1934        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2.000000"
        // metadata: MNetworkMaxValue "2.000000"
        float m_flViewmodelOffsetZ; // 0x1938        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "60.000000"
        // metadata: MNetworkMaxValue "68.000000"
        float m_flViewmodelFOV; // 0x193c        
        // metadata: MNetworkEnable
        bool m_bIsWalking; // 0x1940        
        [[maybe_unused]] std::uint8_t pad_0x1941[0x3]; // 0x1941
        float m_fLastGivenDefuserTime; // 0x1944        
        float m_fLastGivenBombTime; // 0x1948        
        float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x194c        
        uint32_t m_iDisplayHistoryBits; // 0x1950        
        float m_flLastAttackedTeammate; // 0x1954        
        entity2::GameTime_t m_allowAutoFollowTime; // 0x1958        
        bool m_bResetArmorNextSpawn; // 0x195c        
        [[maybe_unused]] std::uint8_t pad_0x195d[0x3]; // 0x195d
        // metadata: MNetworkEnable
        CEntityIndex m_nLastKillerIndex; // 0x1960        
        [[maybe_unused]] std::uint8_t pad_0x1964[0x4]; // 0x1964
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0x1968        
        int32_t m_nSpotRules; // 0x1980        
        // metadata: MNetworkEnable
        bool m_bIsScoped; // 0x1984        
        // metadata: MNetworkEnable
        bool m_bResumeZoom; // 0x1985        
        // metadata: MNetworkEnable
        bool m_bIsDefusing; // 0x1986        
        // metadata: MNetworkEnable
        bool m_bIsGrabbingHostage; // 0x1987        
        // metadata: MNetworkEnable
        client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1988        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flEmitSoundTime; // 0x198c        
        // metadata: MNetworkEnable
        bool m_bInNoDefuseArea; // 0x1990        
        [[maybe_unused]] std::uint8_t pad_0x1991[0x3]; // 0x1991
        CEntityIndex m_iBombSiteIndex; // 0x1994        
        // metadata: MNetworkEnable
        int32_t m_nWhichBombZone; // 0x1998        
        bool m_bInBombZoneTrigger; // 0x199c        
        bool m_bWasInBombZoneTrigger; // 0x199d        
        [[maybe_unused]] std::uint8_t pad_0x199e[0x2]; // 0x199e
        // metadata: MNetworkEnable
        int32_t m_iShotsFired; // 0x19a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFlinchStack; // 0x19a4        
        // metadata: MNetworkEnable
        float m_flVelocityModifier; // 0x19a8        
        // metadata: MNetworkEnable
        float m_flHitHeading; // 0x19ac        
        // metadata: MNetworkEnable
        int32_t m_nHitBodyPart; // 0x19b0        
        Vector m_vecTotalBulletForce; // 0x19b4        
        // metadata: MNetworkEnable
        bool m_bWaitForNoAttack; // 0x19c0        
        [[maybe_unused]] std::uint8_t pad_0x19c1[0x3]; // 0x19c1
        float m_ignoreLadderJumpTime; // 0x19c4        
        // metadata: MNetworkEnable
        bool m_bKilledByHeadshot; // 0x19c8        
        [[maybe_unused]] std::uint8_t pad_0x19c9[0x3]; // 0x19c9
        int32_t m_LastHitBox; // 0x19cc        
        int32_t m_LastHealth; // 0x19d0        
        [[maybe_unused]] std::uint8_t pad_0x19d4[0x4]; // 0x19d4
        server::CCSBot* m_pBot; // 0x19d8        
        bool m_bBotAllowActive; // 0x19e0        
        [[maybe_unused]] std::uint8_t pad_0x19e1[0x3]; // 0x19e1
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkPriority "32"
        QAngle m_thirdPersonHeading; // 0x19e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropOffset; // 0x19f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropHeight; // 0x19f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        Vector m_vHeadConstraintOffset; // 0x19f8        
        int32_t m_nLastPickupPriority; // 0x1a04        
        float m_flLastPickupPriorityTime; // 0x1a08        
        // metadata: MNetworkEnable
        int32_t m_ArmorValue; // 0x1a0c        
        // metadata: MNetworkEnable
        uint16_t m_unCurrentEquipmentValue; // 0x1a10        
        // metadata: MNetworkEnable
        uint16_t m_unRoundStartEquipmentValue; // 0x1a12        
        // metadata: MNetworkEnable
        uint16_t m_unFreezetimeEndEquipmentValue; // 0x1a14        
        [[maybe_unused]] std::uint8_t pad_0x1a16[0x2]; // 0x1a16
        int32_t m_iLastWeaponFireUsercmd; // 0x1a18        
        bool m_bIsSpawning; // 0x1a1c        
        [[maybe_unused]] std::uint8_t pad_0x1a1d[0xb]; // 0x1a1d
        int32_t m_iDeathFlags; // 0x1a28        
        bool m_bHasDeathInfo; // 0x1a2c        
        [[maybe_unused]] std::uint8_t pad_0x1a2d[0x3]; // 0x1a2d
        float m_flDeathInfoTime; // 0x1a30        
        Vector m_vecDeathInfoOrigin; // 0x1a34        
        // metadata: MNetworkEnable
        uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1a40        
        // metadata: MNetworkEnable
        Color m_GunGameImmunityColor; // 0x1a54        
        entity2::GameTime_t m_grenadeParameterStashTime; // 0x1a58        
        bool m_bGrenadeParametersStashed; // 0x1a5c        
        [[maybe_unused]] std::uint8_t pad_0x1a5d[0x3]; // 0x1a5d
        QAngle m_angStashedShootAngles; // 0x1a60        
        Vector m_vecStashedGrenadeThrowPosition; // 0x1a6c        
        Vector m_vecStashedVelocity; // 0x1a78        
        QAngle m_angShootAngleHistory[2]; // 0x1a84        
        Vector m_vecThrowPositionHistory[2]; // 0x1a9c        
        Vector m_vecVelocityHistory[2]; // 0x1ab4        
        [[maybe_unused]] std::uint8_t pad_0x1acc[0x4]; // 0x1acc
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_PredictedDamageTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVectorEmbeddedNetworkVar<server::PredictedDamageTag_t> m_PredictedDamageTags; // 0x1ad0        
        int32_t m_nHighestAppliedDamageTagTick; // 0x1b20        
        [[maybe_unused]] std::uint8_t pad_0x1b24[0xc];
        
        // Datamap fields:
        // CCSPlayer_WeaponServices m_pWeaponServices; // 0xac0
        // CCSPlayer_ItemServices m_pItemServices; // 0xac8
        // CCSPlayer_UseServices m_pUseServices; // 0xae8
        // CCSPlayer_WaterServices m_pWaterServices; // 0xae0
        // CCSPlayer_MovementServices m_pMovementServices; // 0xb00
        // CCSPlayer_ViewModelServices m_pViewModelServices; // 0xcc0
        // CCSPlayer_CameraServices m_pCameraServices; // 0xaf8
        // void CCSPlayerPawnCheckStuffThink; // 0x0
        // void CCSPlayerPawnPushawayThink; // 0x0
        // void RescueZoneTouch; // 0x0
        // bool bot; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerPawn) == 0x1b30);
};
