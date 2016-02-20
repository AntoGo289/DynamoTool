#include "Wrappers.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "API for DynamoTool " << endl; 
	
	// Create a wrapper function obj
	Wrappers* api = new Wrappers();
	string file;
	string argument;
	vector<string> arguments;
	cout << "Enter file name..." << endl;
	cin >> file;
	cout << "Enter arguments one at a time, leave empty to continue once arguments have been entered or if there are no arguments" << endl;
	while (argument != "exit")
	{
		cout << "Enter next argument and press return, or press return to continue..." << endl;
		cin >> argument;
		arguments.push_back(argument);
	}
	
	api->RunScriptHere(file, arguments);
	system("pause");
	return 0;
};