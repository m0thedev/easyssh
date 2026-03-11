#pragma once
#include <string>
using namespace std;
class sshutils {
public:

	string ip;
	string host;
	string name;


	void callSSH();
	void setSSH(string ip, string host, string name);
private:



};