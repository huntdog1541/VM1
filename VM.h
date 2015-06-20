/*
 * VM.h
 *
 *  Created on: Jun 18, 2015
 *      Author: dhunt
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef VM_H_
#define VM_H_

class VM{



public:
	VM();
	void loop();
	virtual ~VM();
	bool runLoop;
	HD harddrive;
};

#endif /* VM_H_ */
