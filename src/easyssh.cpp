#include <iostream>
#include <cstdlib>
#include "../includes/sshuitls.h"
#include "../includes/dictionary.h"
using namespace std;
int main(int argc, char **argv)
{

	// to do:
	// change existing entry
	// delet entry
	// list all entrys
	// make this universal (path should work in macos/linux and windows);
	// add --help option

	sshutils util;	// sshutil object
	string mainarg; // string to hold main argument

	util.setMainArg(argc, argv);
	if (util.getCurrentArgument() == Als) util.callListSSH();
	if (util.getCurrentArgument() == Arm) 	util.deleteSSHEntry(argv[2]); // pass in the name
	if (util.getCurrentArgument() == Acr) util.callCreateSSH(argv[1], argv[2], argv[3]);
	if (util.getCurrentArgument() == Acn) 	util.callOpenSSH(argv[1]);


		

}
