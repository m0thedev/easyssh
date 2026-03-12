#pragma once
#include <string>
using namespace std;
class sshutils {
public:


	string arg1;
	string arg2;
	string arg3;

	string ip;
	string host;
	string name;


	void callSSH();

	void setArgs(string arg1, string arg2, string arg3);
	void setSSH(string ip, string host, string name);
private:



};