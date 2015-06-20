/*
 * Block.h
 *
 *  Created on: Jun 20, 2015
 *      Author: dhunt
 */

#ifndef BLOCK_H_
#define BLOCK_H_

class Block {
public:
	Block();
	virtual ~Block();
	char block[512];
};

#endif /* BLOCK_H_ */
