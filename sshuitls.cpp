#include "sshuitls.h"
#include <iostream>

void sshutils::callSSH()
{

	cout << "ssh " << name << "@" << ip << host << endl;
}

void sshutils::setSSH(string ipd, string hosts, string names)
{
	ip = ipd;
	host = hosts;
	name = names;
}
