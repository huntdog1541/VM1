/*
 * SuperBlock.h
 *
 *  Created on: Jun 20, 2015
 *      Author: dhunt
 */

#ifndef SUPERBLOCK_H_
#define SUPERBLOCK_H_

class SuperBlock {

public:
	SuperBlock();
	virtual ~SuperBlock();
	char super[512];
	char dentNum[256];
};

#endif /* SUPERBLOCK_H_ */
