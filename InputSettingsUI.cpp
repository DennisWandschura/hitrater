#include "InputSettingsUI.h"

InputSettingsUI::InputSettingsUI
(
const F32 spread,
const F32 maxSpread,
const F32 sinc,
const DirectX::XMFLOAT2 &recoil,
const F32 range,
const DirectX::XMFLOAT2 &aim,
U32 burstLength,
U32 runs
)
:m_aim(aim),
m_recoil(recoil),
m_spread(spread),
m_maxSpread(maxSpread),
m_spreadInc(sinc),
m_range(range),
m_burstlength(burstLength),
m_runs(runs)
{
}