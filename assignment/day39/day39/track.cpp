#include"filetracker.h"
void fileTrack:: addfile(int fileid, const string& filename, const string& owner)
{
	files[fileid] = { filename,owner };
	//files.emplace(fileid, filename);
}
void fileTrack::accessfile(int fileid, const string& accestype, const string& user)
{
	if (files.find(fileid) == files.end())
	{
		cout << "error " << fileid << " not found" << endl;
	}
	timestamp++;
	access_frequency[fileid]++;
	last_accessed[fileid] = timestamp;
}