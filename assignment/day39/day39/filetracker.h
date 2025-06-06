#pragma once
#include<iostream>
#include<unordered_map>
#include<map>

#include"file.h"
using namespace std;
class fileTrack {
private:
	int timestamp = 0;
	map<int, Metadata>files;
	unordered_map<int, int>access_frequency;
	unordered_map<int, int>last_accessed;
	unordered_map<string, set<int>>userName;
	unordered_map<int, deque<pair<string, string>>>accesshistory;
    set<pair<int, int>> —{ lastAccessedTime, fileID }
public:
	void addfile(int fileid, const string& filename, const string& owner);
	void accessfile(int fileid, const string& accestype, const string& user);
	void deletefile(int fileid);
	void listallfiles()const;

};
