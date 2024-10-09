#pragma once
 class clsTaskManager
{
	clsTaskManager(void);  //konstruktor
	~clsTaskManager(void);   //destruktor

	int AddTask();   //pridat ulohu

	bool Run();      //bezet
	
	bool Stop();     //nebezet
};

