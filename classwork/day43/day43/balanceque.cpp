#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct Task
{
	string description;
	int priority;
	Task(string desc, int pri) :description(desc), priority(pri) {}
	bool operator<(const Task& other)const
	{
		return priority < other.priority;
	}
};
int main()
{
	priority_queue<Task>taskQueue;
	taskQueue.push(Task("write report", 3));
	taskQueue.push(Task("fix bugs", 5));
	taskQueue.push(Task("Email team", 2));
	taskQueue.push(Task("prepare slides", 4));
	cout << "Tasks in order of execution:\n";
	while (!taskQueue.empty())
	{
		Task t = taskQueue.top();
		cout << "Task: " << t.description << "Priority:" << t.priority << "\n";
		taskQueue.pop();
	}
	return 0;
}