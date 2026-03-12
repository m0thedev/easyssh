#include "sshuitls.h"
#include <iostream>

void sshutils::callSSH()
{

	cout << "arg1 " << arg1 << "arg2 " << arg2 << "arg3 " << arg3 << endl;
}

void sshutils::setSSH(string ipd, string hosts, string names)
{
	ip = ipd;
	host = hosts;
	name = names;
}



void sshutils::setArgs(string arg1, string arg2, string arg3)
{
	this->arg1 = arg1;
	this->arg2 = arg2;
	this->arg3 = arg3;
}
