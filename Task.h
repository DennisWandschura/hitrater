#pragma once

#include <dw/types.h>
#include <random>
#include "InputSettings.h"
#include "Rectangle.h"
#include "OutputData.h"
#include <memory>

ALIGN64 class Task
{
	const static CRectangle<F32> s_head;
	const static CRectangle<F32> s_body;

	U32 m_burstlength;
	std::unique_ptr<std::mt19937_64> m_pRng;
	std::vector<U32> m_headshotCount;
	std::vector<U32> m_bodyshotCount;

	// this function calculates recoil of a burst
	void burst
		(
		const InputSettings &settings,
		const std::uniform_real_distribution<F32> &distAngle,
		const std::uniform_real_distribution<F32> &uDist
		);

public:
	Task(U32 seed, U32 burstlength);
	Task(const Task&);
	Task(Task &&rhs);
	~Task();

	Task& operator=(const Task&);
	Task& operator=(Task &&rhs);

	OutputData operator()(U32 sliceStart, U32 sliceEnd, InputSettings settings);
};