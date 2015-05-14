#ifndef TASKS_H
#define TASKS_H

#include <future>

namespace dw
{
	template<class R>
	class task_group
	{
	public:
		task_group(){}
		~task_group(){}

		template<typename Function, typename ...Args>
		void create(Function &&function, Args&& ... args)
		{
			auto ftr = std::async( std::forward<Function>(function), std::forward<Args>(args)... );
			m_futures.push_back( std::move(ftr) );
		}

		void wait()
		{
			for( std::future<R> &it : m_futures)
			{
				it.wait();
			}
		}

		const std::vector<std::future<R>>& getFutures() const
		{
			return m_futures;
		}

		std::vector<std::future<R>>& getFutures()
		{
			return m_futures;
		}

	private:
		std::vector<std::future<R>> m_futures;
	};
}

#endif