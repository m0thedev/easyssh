#include "sshuitls.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

sshutils::sshutils()
{

	this->home = getenv("HOME");
	this->basepath = home + "/.config/easyssh/";

	// create the directory if not created yet
	filesystem::create_directories(basepath);
}

void sshutils::callCreateSSH(string ip, string host, string name)
{
	ofstream CustomEntry(this->basepath + name + ".txt");

	CustomEntry << ip << " " << host << " " << name << endl;

	CustomEntry.close();

	cout << "successfully made" << endl;
}

void sshutils::test()
{
	// string home = getenv("HOME");
	// string basepath = home + "/.config/easyssh/";

	// cout << home << endl;
	// cout << basepath << endl;
}

void sshutils::callOpenSSH(string name)
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
	string firstentry;									  // String for the first ssh entry in file
	ifstream EasySSHFIle(this->basepath + name + ".txt"); // ifstream the specified file

	getline(EasySSHFIle, firstentry); // saves the first line of the file in the firstentry string

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

void sshutils::callEasySSH()
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

	cout << "\033[32m A tool that makes the use of SSH easier\033[32m " << endl;
	cout << endl;
	cout << "\033[32m Type: easyssh --help if you´re stuck\033[32m" << endl;
	cout << endl;
}
