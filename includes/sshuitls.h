#pragma once
#include <string>
using namespace std;
class sshutils {
public:


	string home; // home env
	string basepath; // basepath where configurations are stored
	string mainArg; // String for main Argument

	sshutils(); // Construktor
	void setMainArg(int argc, char** argv); // sets the main Argument 
	void callMoreDetails(string code);
	string getCurrentArgument();
	void callEasySSH(string code); // used as an Intro/Tag + reasoning
	void deleteSSHEntry(string path); // deletes an entry
	void callListSSH(); // lists all entries
	void callOpenSSH(string name); // connects to a entry
	void callCreateSSH(string host, string ip, string name); // creates an an entry
};