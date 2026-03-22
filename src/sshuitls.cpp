#include "../includes/sshuitls.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <filesystem>
#include "../includes/dictionary.h"

using namespace std;

sshutils::sshutils()
{

	this->home = getenv("HOME");
	this->basepath = home + "/.config/easyssh/";

	this->mainArg = Aempty;

	cout << Als << endl;
	// create the directory if not created yet
	std::filesystem::create_directories(basepath);
}

void sshutils::callCreateSSH(string ip, string host, string name)
{
	if (ip == "" or host == "" or name == "")
	{
		cout << "one componentent missing" << endl;
	}
	ofstream CustomEntry(this->basepath + name + ".txt");

	CustomEntry << ip << " " << host << " " << name << endl;

	CustomEntry.close();

	cout << "successfully made" << endl;
}

void sshutils::callOpenSSH(string name)
{
	callEasySSH(""); // calling the nice intro
	cout << "connecting to " << name<< endl;
	string firstentry;									  // String for the first ssh entry in file
	ifstream EasySSHFIle(this->basepath + name + ".txt"); // ifstream the specified file
	getline(EasySSHFIle, firstentry);					  // saves the first line of the file in the firstentry string
	// check if first entry has content
	if (firstentry == "")
	{
		// entry does not exist
		cout << Enoentry << name << endl;
		exit(0);
	}

	// Create the Vector for SSH call
	stringstream ss(firstentry);
	string accesspath;
	string tempaccesspath;
	char del = ' ';
	vector<string> vaccesspath;
	while (getline(ss, tempaccesspath, del))
	{
		vaccesspath.insert(vaccesspath.begin(), tempaccesspath);
	}
	accesspath = "ssh " + vaccesspath[2] + "@" + vaccesspath[1];

	cout << "sshing into " << vaccesspath[0] << endl;

	system(accesspath.c_str());
}

void sshutils::callEasySSH(string code)
{

	cout << R"(

  ______                 _____ _____ _    _ 
 |  ____|               / ____/ ____| |  | |
 | |__   __ _ ___ _   _| (___| (___ | |__| |
 |  __| / _` / __| | | |\___ \\___ \|  __  |
 | |___| (_| \__ \ |_| |____) |___) | |  | |
 |______\__,_|___/\__, |_____/_____/|_|  |_|
                   __/ |                    
                  |___/                     
made by @m0thedev
)" << endl;

 callMoreDetails(Cintro);
	if (code == Cintro)
	{
		cout << "\033[32m A tool that makes the use of SSH easier\033[32m " << endl;
		cout << endl;
		cout << "\033[32m Type: easyssh --help if you´re stuck\033[32m" << endl;
		cout << endl;
	}
	else
	{
		cout << code << endl;
	}
}


void sshutils::callListSSH()
{

	cout << "entered her" << endl;
	// doenst look that nice but it does its job
	for (const auto &entry : filesystem::directory_iterator(basepath))
		std::cout << entry.path().filename() << std::endl;
}

void sshutils::deleteSSHEntry(string name)
{
	// chat is this risky?
	filesystem::remove(basepath + name + ".txt");
}

void sshutils::setMainArg(int argc, char **argv)
{
	// check if main arg can even be set
	if (argc > 1) // rm ls or create / connect but regardless of that main arg can be set
	{
		if (argc == 2 and argv[1] == Arm)
			this->mainArg = Arm;
		if (argc == 2 and argv[1] == Als)
			this->mainArg = Als; 
			
		if (argc == 2)
			this->mainArg = Acn;
		if (argc == 4)
			this->mainArg = Acr;
	}
	else // now at hthis point bro wants to see the intro
	{
		callEasySSH(Cintro);
	}
}

string sshutils::getCurrentArgument(){
	return this->mainArg;
}

void sshutils::callMoreDetails(string code){
	if (code == Cintro)
	{
		cout << "\033[32m A tool that makes the use of SSH easier\033[32m " << endl;
		cout << endl;
		cout << "\0332[32m Type: easyssh --help if you´re stuck\033[32m" << endl;
		cout << endl;

		exit(0);
	}
}