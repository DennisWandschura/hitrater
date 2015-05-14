#include "InputSettings.h"

InputSettings::InputSettings(const InputSettingsUI &rhs)
:m_spread(rhs.m_spread),
m_maxSpread(rhs.m_maxSpread),
m_spreadInc(rhs.m_spreadInc),
m_aim(rhs.m_aim),
m_range(rhs.m_range),
m_recoil(rhs.m_recoil)
{
	
}