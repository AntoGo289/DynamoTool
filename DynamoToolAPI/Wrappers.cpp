#include "Wrappers.h"

Wrappers::Wrappers() {
	// Constructer for Wrappers with setup
};

// Run script in current location
void Wrappers::RunScriptHere(string scriptName) {
	system(scriptName.c_str());
};

// Run script in current location with arguments
void Wrappers::RunScriptHere(string scriptName, vector<string> args) {
	string command = scriptName;
	for(int i = 0; i < args.size(); i++)
	{
		command += " " + args.at(i);
	}
	system(command.c_str());
};

// Run script in current location with arguments and dependencies
void Wrappers::RunScriptHere(string scriptName, vector<string> args, vector<string> dependencies) {

};