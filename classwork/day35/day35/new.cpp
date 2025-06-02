#include<iostream>
#include<vector>
using namespace std;
enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};
class logger {
    vector <string>logs;
public:
    void log();
};
class Job {
public:
    int jobID;
    int executionTime;
    int priority;
    Job(int id, int time, int p)
    {
       jobID=id;
       executionTime=time;
       priority=p;
    }
};
int main()
{
	return 0;
}