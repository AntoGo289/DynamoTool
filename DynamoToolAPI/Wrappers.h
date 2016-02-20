#ifndef WRAPPER_FUNCTIONS_H
#define WRAPPER_FUNCTIONS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Wrappers
{
public:
	Wrappers();
	void RunScriptHere(string scriptName);
	void RunScriptHere(string scriptName, vector<string> args);
	void RunScriptHere(string scriptName, vector<string> args, vector<string> dependencies);
private:

};
#endif