/*
 * Inode.h
 *
 *  Created on: Jun 20, 2015
 *      Author: dhunt
 */

#ifndef INODE_H_
#define INODE_H_

class Inode {

public:
	Inode();
	virtual ~Inode();
	char node[512];
};

#endif /* INODE_H_ */
