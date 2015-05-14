#include "Task.h"
#include <assert.h>
#include <DirectXMath.h>
#include <algorithm>

const CRectangle<F32> Task::s_head = { -0.08f, 0.46f, 0.16f, 0.28f };
const CRectangle<F32> Task::s_body = { -0.27f, -0.46f, 0.54f, 0.92f };

Task::Task(U32 seed, U32 burstlength)
:m_pRng(std::make_unique<std::mt19937_64>(seed)),
m_burstlength(burstlength),
m_headshotCount(burstlength, 0),
m_bodyshotCount(burstlength, 0)
{
	std::unique_ptr<std::mt19937_64>();
	assert(m_burstlength != 0);
	//std::make_unique<std::mt19937_64>(seed);
}

Task::Task(const Task &rhs)
:m_burstlength(rhs.m_burstlength),
m_headshotCount(rhs.m_headshotCount),
m_bodyshotCount(rhs.m_bodyshotCount)
{
	m_pRng = std::make_unique<std::mt19937_64>(*rhs.m_pRng);
}

Task::Task(Task &&rhs)
:m_pRng(std::move(rhs.m_pRng)),
m_burstlength(rhs.m_burstlength),
m_headshotCount(rhs.m_headshotCount),
m_bodyshotCount(rhs.m_bodyshotCount)
{

}

Task::~Task()
{

}

OutputData Task::operator()
(
U32 sliceStart, 
U32 sliceEnd, 
InputSettings settings
)
{
	InputSettings taskSettings = settings;
	std::uniform_real_distribution<F32> distAngle(0.0f, DirectX::XM_2PI);
	std::uniform_real_distribution<F32> recoilDist(settings.m_recoil.x, settings.m_recoil.y);

	for (U32 i = sliceStart; i < sliceEnd; ++i)
		burst(taskSettings, distAngle, recoilDist);

	OutputData result;
	std::swap(result.bodyshotCount, m_bodyshotCount);
	std::swap(result.headshotCount, m_headshotCount);

	return result;
}

void Task::burst
(
const InputSettings &settings,
const std::uniform_real_distribution<F32> &distAngle,
const std::uniform_real_distribution<F32> &distRecoil
)
{
	F32 spread = settings.m_spread;
	F32 maxSpread = settings.m_maxSpread;
	F32 spreadInc = settings.m_spreadInc;
	const auto aim = settings.m_aim;
	const F32 range = settings.m_range;

	F32 recoil = 0.0f;
	for (U32 i = 0; i < m_burstlength; ++i)
	{
		// einzelne bursts
		//std::uniform_real_distribution<F32> distSpread(0.0f, std::min(spread + i * spreadInc, maxSpread));
		// use [0, spread]
		std::uniform_real_distribution<F32> distSpread(0.0f, std::min(spread, maxSpread));

		F32 spreadRadius = distSpread(*m_pRng); //spread radius, d.h. winkel zwischen kugel und fadenkreuz (0...spread)
		F32 spreadAngle = distAngle(*m_pRng); //richtung vom spread (0...2pi)

		F32 spreadX = spreadRadius * cos(spreadAngle); //umrechnung polarkoordinaten zu kartesisch, spread horizontal
		F32 spreadY = spreadRadius * sin(spreadAngle); //vertikal

		//koordinaten vom treffer
		F32 hitX = aim.x + range * tan((spreadX + recoil) * DirectX::XM_PI / 180.0f);
		F32 hitY = aim.y + range * tan((spreadY) * DirectX::XM_PI / 180.0f);

		// check if we hit something and if yes, increase count
		if (s_body.contains(hitX, hitY))
			m_bodyshotCount.at(i)++;
		else if (s_head.contains(hitX, hitY))
			m_headshotCount.at(i)++;

		// increase spread
		spread += spreadInc;
		// get recoil value and add to current
		recoil += distRecoil(*m_pRng);
	}
}