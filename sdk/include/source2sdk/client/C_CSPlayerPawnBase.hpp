#pragma once
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CCSPlayerController;
};

namespace source2sdk::client
{
    class CCSPlayer_PingServices;
};

namespace source2sdk::client
{
    class CPlayer_ViewModelServices;
};

namespace source2sdk::client
{
    class C_CSWeaponBase;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1510
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
    // static metadata: MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
    // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
    // static metadata: MNetworkVarNames "bool m_bIsRescuing"
    // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
    // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
    // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
    // static metadata: MNetworkVarNames "float m_fMolotovUseTime"
    // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
    // static metadata: MNetworkVarNames "int m_iThrowGrenadeCounter"
    // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
    // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
    // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
    // static metadata: MNetworkVarNames "float m_flFlashDuration"
    // static metadata: MNetworkVarNames "int m_cycleLatch"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
    #pragma pack(push, 1)
    class C_CSPlayerPawnBase : public client::C_BasePlayerPawn
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1348[0x18]; // 0x1348
        // metadata: MNetworkEnable
        client::CCSPlayer_PingServices* m_pPingServices; // 0x1360        
        // metadata: MNetworkEnable
        client::CPlayer_ViewModelServices* m_pViewModelServices; // 0x1368        
        float m_fRenderingClipPlane[4]; // 0x1370        
        int32_t m_nLastClipPlaneSetupFrame; // 0x1380        
        Vector m_vecLastClipCameraPos; // 0x1384        
        Vector m_vecLastClipCameraForward; // 0x1390        
        bool m_bClipHitStaticWorld; // 0x139c        
        bool m_bCachedPlaneIsValid; // 0x139d        
        [[maybe_unused]] std::uint8_t pad_0x139e[0x2]; // 0x139e
        client::C_CSWeaponBase* m_pClippingWeapon; // 0x13a0        
        client::CSPlayerState m_previousPlayerState; // 0x13a8        
        // metadata: MNetworkEnable
        client::CSPlayerState m_iPlayerState; // 0x13ac        
        // metadata: MNetworkEnable
        bool m_bIsRescuing; // 0x13b0        
        [[maybe_unused]] std::uint8_t pad_0x13b1[0x3]; // 0x13b1
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0x13b4        
        entity2::GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x13b8        
        // metadata: MNetworkEnable
        bool m_bGunGameImmunity; // 0x13bc        
        // metadata: MNetworkEnable
        bool m_bHasMovedSinceSpawn; // 0x13bd        
        [[maybe_unused]] std::uint8_t pad_0x13be[0x2]; // 0x13be
        // metadata: MNetworkEnable
        float m_fMolotovUseTime; // 0x13c0        
        // metadata: MNetworkEnable
        float m_fMolotovDamageTime; // 0x13c4        
        // metadata: MNetworkEnable
        int32_t m_iThrowGrenadeCounter; // 0x13c8        
        entity2::GameTime_t m_flLastSpawnTimeIndex; // 0x13cc        
        // metadata: MNetworkEnable
        int32_t m_iProgressBarDuration; // 0x13d0        
        // metadata: MNetworkEnable
        float m_flProgressBarStartTime; // 0x13d4        
        Vector m_vecIntroStartEyePosition; // 0x13d8        
        Vector m_vecIntroStartPlayerForward; // 0x13e4        
        entity2::GameTime_t m_flClientDeathTime; // 0x13f0        
        bool m_bScreenTearFrameCaptured; // 0x13f4        
        [[maybe_unused]] std::uint8_t pad_0x13f5[0x3]; // 0x13f5
        float m_flFlashBangTime; // 0x13f8        
        float m_flFlashScreenshotAlpha; // 0x13fc        
        float m_flFlashOverlayAlpha; // 0x1400        
        bool m_bFlashBuildUp; // 0x1404        
        bool m_bFlashDspHasBeenCleared; // 0x1405        
        bool m_bFlashScreenshotHasBeenGrabbed; // 0x1406        
        [[maybe_unused]] std::uint8_t pad_0x1407[0x1]; // 0x1407
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashMaxAlphaChanged"
        float m_flFlashMaxAlpha; // 0x1408        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashDurationChanged"
        float m_flFlashDuration; // 0x140c        
        int32_t m_iHealthBarRenderMaskIndex; // 0x1410        
        float m_flHealthFadeValue; // 0x1414        
        float m_flHealthFadeAlpha; // 0x1418        
        [[maybe_unused]] std::uint8_t pad_0x141c[0xc]; // 0x141c
        float m_flDeathCCWeight; // 0x1428        
        float m_flPrevRoundEndTime; // 0x142c        
        float m_flPrevMatchEndTime; // 0x1430        
        [[maybe_unused]] std::uint8_t pad_0x1434[0x4]; // 0x1434
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0x1438        
        [[maybe_unused]] std::uint8_t pad_0x1444[0xc]; // 0x1444
        float m_fNextThinkPushAway; // 0x1450        
        bool m_bShouldAutobuyDMWeapons; // 0x1454        
        bool m_bShouldAutobuyNow; // 0x1455        
        [[maybe_unused]] std::uint8_t pad_0x1456[0x2]; // 0x1456
        CEntityIndex m_iIDEntIndex; // 0x1458        
        [[maybe_unused]] std::uint8_t pad_0x145c[0x4]; // 0x145c
        client::CountdownTimer m_delayTargetIDTimer; // 0x1460        
        CEntityIndex m_iTargetItemEntIdx; // 0x1478        
        CEntityIndex m_iOldIDEntIndex; // 0x147c        
        client::CountdownTimer m_holdTargetIDTimer; // 0x1480        
        [[maybe_unused]] std::uint8_t pad_0x1498[0x4]; // 0x1498
        float m_flCurrentMusicStartTime; // 0x149c        
        float m_flMusicRoundStartTime; // 0x14a0        
        bool m_bDeferStartMusicOnWarmup; // 0x14a4        
        [[maybe_unused]] std::uint8_t pad_0x14a5[0x3]; // 0x14a5
        // metadata: MNetworkEnable
        int32_t m_cycleLatch; // 0x14a8        
        float m_serverIntendedCycle; // 0x14ac        
        float m_flLastSmokeOverlayAlpha; // 0x14b0        
        float m_flLastSmokeAge; // 0x14b4        
        Vector m_vLastSmokeOverlayColor; // 0x14b8        
        client::ParticleIndex_t m_nPlayerSmokedFx; // 0x14c4        
        client::ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x14c8        
        client::ParticleIndex_t m_nPlayerInfernoFootFx; // 0x14cc        
        float m_flNextMagDropTime; // 0x14d0        
        int32_t m_nLastMagDropAttachmentIndex; // 0x14d4        
        Vector m_vecLastAliveLocalVelocity; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14e4[0x1c]; // 0x14e4
        bool m_bGuardianShouldSprayCustomXMark; // 0x1500        
        [[maybe_unused]] std::uint8_t pad_0x1501[0x7]; // 0x1501
        // metadata: MNetworkEnable
        // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::CCSPlayerController> m_hOriginalController; // 0x1508        
        [[maybe_unused]] std::uint8_t pad_0x150c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSPlayerPawnBase because it is not a standard-layout class
    static_assert(sizeof(C_CSPlayerPawnBase) == 0x1510);
};
