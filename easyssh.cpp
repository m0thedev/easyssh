// easyssh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include "sshuitls.h"
using namespace std;
int main()
{

	sshutils p;

	string host;
	string ip;
	string name;

	system("ssh dev@192.168.2.170");
	p.setSSH("192.178.2.1", "mosespc", "homepc");

	p.callSSH();






	

}

