/*
 * HD.h
 *
 *  Created on: Jun 18, 2015
 *      Author: dhunt
 */

#ifndef HD_H_
#define HD_H_

class HD {

public:
	HD();
	virtual ~HD();
	void install();

private:
	long int hdSize;

	void write();
	char * read();
	bool checkInstall();
	void installHD();

};

#endif /* HD_H_ */
