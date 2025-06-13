#include<iostream>
#include<queue>
#include <fstream>
#include<string>
#include<sstream>
using namespace std;
class task
{
	string id;
	int load;
public:
	task(string id, int load) :id(id), load(load){}
};
class cpu
{
	int cpucount;
	queue<task>qtask;
public:
bool readfile(const string& fname)
	{
		ifstream file(fname);
		if (!file.is_open()) {
			cerr << "Error: Cannot open " << fname << endl;
			return false;
		}
		string line;
		getline(file, line);
		if (line.find("CPUs:") != string::npos) {
			cpucount = stoi(line.substr(line.find(":") + 1));
			
		}
		while (getline(file, line))
		{
			stringstream ss(line);
			string taskId, temp;
			int load;
			getline(ss, taskId, ':');
			ss >> temp >> load;
			qtask.push(task(taskId, load));
		}
		file.close();
		return true;
	}
};