#ifndef WRAPPER_FUNCTIONS_H
#define WRAPPER_FUNCTIONS_H

#include <string>
#include <iostream>
using namespace std;

class Wrappers
{
public:
	Wrappers();
	void RunScriptHere();
	void RunScriptHere(string args[]);
	void RunScriptHere(string args[], string dependencies[]);
private:

};
#endif