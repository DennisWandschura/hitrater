#pragma once

#include "InputSettingsUI.h"
#include <vector>
#include <sstream>
#include <iomanip>
#include "OutputData.h"

namespace dw
{
	template<class T>
	std::string numberToString(T number, int precision = 2)
	{
		std::ostringstream ss;
		ss << std::setprecision(precision) << number;
		return ss.str();
	}
}

/*
this does all the work
*/

class Application
{
	std::vector<F32> m_headrate;
	std::vector<F32> m_bodyrate;
	std::vector<F32> m_sumRates;
	F32 m_dmgPerBurstTotal{};
	F32 m_dmgPerBurstBody{};
	F32 m_dmgPerBurstHead{};
	U32 m_threads;
	U32 m_tasks;

	void runSingle(const InputSettingsUI &inputSettings);
	void runMT(const InputSettingsUI &inputSettings);

	void reset(U32 burstLength);
	void updateResult(const OutputData &result, U32 burstLength, U32 runs);
	void sumResult(U32 burstLength);

public:
	Application();
	~Application();

	void run(const InputSettingsUI &inputSettings, bool bMT);

	const std::vector<F32>& getHeadrate() const;
	const std::vector<F32>& getBodyrate() const;
	const std::vector<F32>& getSumRates() const;
	F32 getDmgPerBurstTotal() const;
	F32 getDmgPerBurstBody() const;
	F32 getDmgPerBurstHead() const;
};