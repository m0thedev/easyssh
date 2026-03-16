#include <iostream>
#include <cstdlib>
#include "sshuitls.h"
using namespace std;
int main(int argc, char **argv)
{

	// to do:
	// change existing entry
	// delet entry
	// list all entrys
	//make this universal (path should work in macos/linux and windows);
	// add --help option

	sshutils util; //sshutil object
	string mainarg; // string to hold main argument

	if (argc == 1)
	{	
		util.test();
		util.callEasySSH();
	}

	// set mainarg only if argv is not empty
	mainarg = argv[1];

	if (mainarg == "cr")
	{
		//create ssh entry
		util.callCreateSSH(argv[2], argv[3], argv[4]);
	}
	else
	{
		// call intro
		util.callOpenSSH(argv[1]);
	}
}
