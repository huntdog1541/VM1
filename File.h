/*
 * File.h
 *
 *  Created on: Jun 18, 2015
 *      Author: dhunt
 */

#include <iostream>
#include <string>

#ifndef FILE_H_
#define FILE_H_

using namespace std;

class File {
	string fileName;
	int filePointer;
	long int fileSize;


public:
	File();
	File(string fn);
	virtual ~File();
};

#endif /* FILE_H_ */
