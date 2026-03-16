#pragma once
#include <string>
using namespace std;
class sshutils {

public:


	string home;
	string basepath;

	void callEasySSH();


	sshutils();
	

	void test();
	void callOpenSSH(string name);
	void callCreateSSH(string host, string ip, string name);

private:




};