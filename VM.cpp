//============================================================================
// Name        : VM.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "HD.h"
#include "File.h"
#include "VM.h"

using namespace std;


void VM::loop()
{

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	while(runLoop == true)
	{
		cout << "$ ";
		string cmd;
		cin >> cmd;
		cout << "The command is " + cmd << endl;

		if(cmd.compare("run") == 0)
		{
			cout << "The command is run" << endl;
		}
		else if(cmd.compare("start") == 0)
		{
			cout << "Starting the VM" << endl;
		}
		else if(cmd.compare("install") == 0)
		{
			cout << "Installing the VM" << endl;
			harddrive.install();
		}
			else if(cmd.compare("exit") == 0)
		{
			cout << "Exiting VM" << endl;
			this->runLoop = false;
		}
	}

}

VM::VM()
{
	runLoop = true;
	HD harddrive;
}

VM::~VM()
{

}

int main() {

	VM vm;
	vm.loop();
	vm.~VM();

	return 0;
}
