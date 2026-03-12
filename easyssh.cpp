// easyssh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include "sshuitls.h"
using namespace std;
int main(int argc, char** argv)
{



	sshutils util;


	string mainarg;

	mainarg = argv[1];


	if (mainarg == "cr"){
		util.callCreateSSH();
	}else if (mainarg == "cr"){

	}


	util.setArgs(argv[1], argv[2], argv[3]);

	util.callSSH();




	// sshutils p;

	// string host;
	// string ip;
	// string name;

	// system("ssh dev@192.168.2.170");
	// p.setSSH("192.178.2.1", "mosespc", "homepc");

	// p.callSSH();






	

}

