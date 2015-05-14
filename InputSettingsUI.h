#pragma once

#include <DirectXMath.h>
#include <dw/types.h>

/*
contains all the settings from UI
*/
struct InputSettingsUI
{
	DirectX::XMFLOAT2 m_aim;
	DirectX::XMFLOAT2 m_recoil;
	F32 m_spread;
	F32 m_maxSpread;
	F32 m_spreadInc;
	F32 m_range;
	U32 m_burstlength;
	U32 m_runs;

	InputSettingsUI(const F32 spread, const F32 maxSpread, const F32 spreadInc, const DirectX::XMFLOAT2 &recoil,
		const F32 range, const DirectX::XMFLOAT2 &aim, U32 burstLength, U32 runs);
};