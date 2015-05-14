#pragma once

#include <dw/types.h>
#include <DirectXMath.h>
#include "InputSettingsUI.h"

/*
Settings contains data that can be input via gui and is needed for computing recoil
*/
struct InputSettings
{
	F32 m_spread;
	F32 m_maxSpread;
	F32 m_spreadInc;
	DirectX::XMFLOAT2 m_aim;
	F32 m_range;
	DirectX::XMFLOAT2 m_recoil;

	InputSettings(const InputSettingsUI &rhs);
};