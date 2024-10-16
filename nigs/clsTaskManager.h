#pragma once

#include <Windows.h>

//void (*p_TaskFce)(void);

typedef void(*p_TaskStack)(void);
#define MAX_TASK 10

class clsTaskManager
{
private:
	p_TaskStack p_Tasks[MAX_TASK];
public:
	clsTaskManager(void);  //konstruktor
	~clsTaskManager(void);   //destruktor

	int AddTask(void (*p_TaskFce)(void));   //pridat ulohu

	bool Run(void (*p_TaskFce)(void));      //bezet
	
	bool Stop();     //nebezet
};

