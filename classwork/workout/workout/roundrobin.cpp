#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int numTask = 3;
	string taskNames[numTask] = { "task1","task2","task3" };
	int burstTime[numTask] = { 10,5,7 };
	int timeQnt = 4;
	int currentTime = 0;int taskRem = numTask;

	while (taskRem > 0)
	{
		for(int i=0;i<numTask;i++)
		{
			if (burstTime[i] == 0)
			{
				continue;
		     }
			int runtime;
			if (burstTime[i] < timeQnt)
			{
				runtime = burstTime[i];
			}
			else
			{
				runtime = timeQnt;
			}
			cout << "time" << currentTime << ":" << taskNames[i];
			cout << "runfor" << runtime << " units" << endl;
			burstTime[i] = burstTime[i] - runtime;
			currentTime = currentTime + runtime;
			if (burstTime[i] == 0)
			{
				taskRem--;
			}
		}
	}
	cout << "all the task completed" << endl;

	return 0;
}