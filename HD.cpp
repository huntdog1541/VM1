/*
 * HD.cpp
 *
 *  Created on: Jun 18, 2015
 *      Author: dhunt
 */
#include <iostream>
#include <fstream>
#include "HD.h"

using namespace std;

HD::HD() {
	hdSize = 512 * 1000;
}

HD::~HD() {

}

void HD::install()
{
	if(this->checkInstall())
	{
		cout << "Already Installed" << endl;
	}
	else
	{

	}
}
void HD::write()
{

}
char * HD::read()
{
	char * temp = NULL;

	return temp;
}
bool HD::checkInstall()
{
	bool ans = false;
	ifstream fin ("hd.vmr", ofstream::binary);
	long int size = 0;
	fin.seekg(0, fin.end);
	size = fin.tellg();
	fin.seekg(0);
	if(size == hdSize)
	{
		ans = true;
	}
	return ans;
}

void HD::installHD()
{
	ofstream fin ("hd.vmr", ofstream::binary);
	char block[512];
	int i, size = 1000;

	for(i = 0; i < 512; i++)
	{
		block[i] = '\0';
	}
	for(i = 0; i < size; i++)
	{
		fin.write(block, 512);
	}
	fin.close();
}
