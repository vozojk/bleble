

#include <iostream>
#include <Windows.h>
#include "clsTaskManager.h"

clsTaskManager * objTManager;

void Task1(void) {
	printf("task1");
}

void Task2(void) {
	printf("task2");
}




//smycka taskeru

void Loop(void)
{
	printf("smazky");
}



int main()
{
	objTManager = new clsTaskManager();
	
	objTManager->AddTask(Task1);
	objTManager->AddTask(Task2);


	objTManager->Run(Loop);
	
	delete(objTManager);
	
}

