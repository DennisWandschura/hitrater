#include "Application.h"
#include <thread>
#include "Task.h"
#include "task_group.h"
#if !QT_STATIC
#include <dw/AutoTimer.h>
#endif

Application::Application()
{
	m_threads = std::thread::hardware_concurrency();
	m_tasks = m_threads * 4;
}

Application::~Application()
{

}

void Application::reset(U32 burstLength)
{
	// before we sum our result, we set everything to zero
	m_dmgPerBurstTotal = 0.0f;
	m_dmgPerBurstBody = 0.0f;
	m_dmgPerBurstHead = 0.0f;

	m_headrate.clear();
	m_bodyrate.clear();
	m_sumRates.clear();

	m_headrate.resize(burstLength);
	m_bodyrate.resize(burstLength);
	m_sumRates.resize(burstLength);
}

void Application::sumResult(U32 burstLength)
{
	// sum results
	for (int j = 0; j < burstLength; j++)
	{
		m_sumRates.at(j) = m_headrate.at(j) + m_bodyrate.at(j);
		m_dmgPerBurstTotal += m_sumRates.at(j);
		m_dmgPerBurstBody += m_bodyrate.at(j);
		m_dmgPerBurstHead += m_headrate.at(j);
	}
}

void Application::updateResult(const OutputData &result, U32 burstLength, U32 runs)
{
	for (int j = 0; j < burstLength; j++)
	{
		m_headrate.at(j) += static_cast<F32>(result.headshotCount.at(j)) / runs;
		m_bodyrate.at(j) += static_cast<F32>(result.bodyshotCount.at(j)) / runs;
	}
}

void Application::run(const InputSettingsUI &inputSettings, bool bMT)
{
	reset(inputSettings.m_burstlength);

	if (bMT)
		runMT(inputSettings);
	else
		runSingle(inputSettings);
}

void Application::runSingle(const InputSettingsUI &inputSettings)
{
	std::mt19937_64 m_rng;

	U32 burstLength = inputSettings.m_burstlength;
	U32 runs = inputSettings.m_runs;

	InputSettings settings(inputSettings);

	Task task(std::mt19937_64::default_seed, burstLength);
	auto result = task(0, runs, settings);

	// sum results
	updateResult(result, burstLength, runs);
	sumResult(burstLength);
}

void Application::runMT(const InputSettingsUI &inputSettings)
{
	const U32 minWorkForTask = 500000u;

	const U32 burstLength = inputSettings.m_burstlength;
	const U32 runs = inputSettings.m_runs;
	U32 totalWork = burstLength * runs;
	const U32 taskCount = totalWork / minWorkForTask;
	// have to add one, don't forget main thread (also divide by zero)
	const U32 workPerTask = totalWork / (taskCount + 1);
	printf("taskCount %u\n", taskCount);
	printf("workPerTask %u\n", workPerTask);

	std::vector<U32> seeds(taskCount);
	std::seed_seq seedSeq;

	seedSeq.generate(seeds.begin(), seeds.end());

#if !QT_STATIC
	AutoTimer timer;
#endif
	dw::task_group<OutputData> group;

	//Task task(seeds.at(0), burstLength);
	//auto ftr = std::async(std::move(task), 0, 1, settings);

	InputSettings settings(inputSettings);
	U32 i = 0;
	while (totalWork > minWorkForTask)
	{
		totalWork -= minWorkForTask;
		//group.create(Task(seeds.at(i), burstLength), from, to, settings);
		++i;
	}
	printf("totalWork %u\n", totalWork);
	//Task task(seeds.at(i), burstLength);
	//auto output = task(0, 0, settings);
	//updateResult(output, burstLength, runs);
	
	/*for (U32 i = 0; i < m_tasks; ++i)
	{
		const U32 from = (i * runs) / m_tasks;
		const U32 to = ((i + 1) * runs) / m_tasks;

		//Task task(seeds.at(i), burstLength);
		group.create(Task(seeds.at(i), burstLength), from, to, settings);
	}*/

	// sum results
	/*for (auto &it : group.getFutures())
	{
		auto result = it.get();
		updateResult(result, burstLength, runs);
	}

	sumResult(burstLength);*/
}

const std::vector<F32>& Application::getHeadrate() const
{
	return m_headrate;
}

const std::vector<F32>& Application::getBodyrate() const
{
	return m_bodyrate;
}

F32 Application::getDmgPerBurstTotal() const
{
	return m_dmgPerBurstTotal; 
}

F32 Application::getDmgPerBurstBody() const
{ 
	return m_dmgPerBurstBody; 
}

F32 Application::getDmgPerBurstHead() const
{
	return m_dmgPerBurstHead; 
}

const std::vector<F32>& Application::getSumRates() const
{ 
	return m_sumRates; 
}