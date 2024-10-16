#include "clsTaskManager.h"
#include <Windows.h>
clsTaskManager::clsTaskManager(void)
{
	
}


clsTaskManager::~clsTaskManager(void)
{

}


int clsTaskManager::AddTask(void(*p_TaskFce)(void))
{
	memcpy(p_Tasks, p_TaskFce, sizeof(p_TaskFce));
	return true;
}


//////////////////////////////////////////////////////////
// Spousteni uloh
//////////////////////////////////////////////////////////
bool clsTaskManager::Run(void(*p_TaskFce)(void))
{
	p_TaskFce;

	do {
		// pozastavit
		Sleep(1000);

		p_TaskFce();

	} while (true);
}

bool clsTaskManager::Stop(void)
{
	return false;
}