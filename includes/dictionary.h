#pragma once
#include <string>
using namespace std;
//---------------------Info--------------------//
// Ts is the Dictionary for the Codes in EasySSH
// String name starts with A = Argument
// String name starts with E = Error code
// String name starts with C = Code for EassySSH art

//---------------------A Section--------------------//
const string Als = "ls"; // to list all of the entries
const string Arm = "rm";   // remove a specific entry
const string Aempty = "empty"; // used at Konstruktor usefull if no argument is given. kinda useless
const string Acn = "cn"; // used to connect to ssh
const string Acr = "cr"; // used to create ssh entry
//---------------------E Section--------------------//
const string Enoentry = "No entry found for ";
const string Emissingargs = "Arguments missing please use --help";
const string Erandom = "Something went wrong";
//---------------------C Section--------------------//
const string Cintro = "intro";


