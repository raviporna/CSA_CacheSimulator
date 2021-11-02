/**
 * CacheSim.h
 * This program is designed for class exercise only.
 * It is provided as is. There is no warranty or support of any kind.
 *
 * Krerk Piromsopa, Ph.D.
 * Department of Computer Engineering
 * Chulalongkorn University
 * Bangkok, Thailand.
**/
#ifndef CACHESIM_H_INCLUDED
#define CACHESIM_H_INCLUDED

/* Please adjust parameters here */
#define X 32 //Cachesize in KB
#define Y 5 //log2(X)

#define X2 32 //Blocksize in Bytes
#define Y2 5 //log2(X2)

#define CACHE_SIZE 1024*X // AREA = INDEX_SIZE*BLOCK_SIZE
#define INDEX_SIZE 1024*X/X2 // HEIGHT = = 2^INDEXLEN
#define BLOCK_SIZE X2 // (in Bytes) WIDTH = 2^OFFSETLEN
#define TAGLEN 22-Y
#define INDEXLEN 10+Y-Y2
#define OFFSETLEN Y2

// TAGLEN + INDEXLEN + OFFSETLEN = 32

typedef unsigned char Byte;
typedef unsigned char bool;
typedef struct Cache{
    bool valid;
    bool dirty;
    unsigned long tag;
	Byte data[BLOCK_SIZE];
};

#endif // CACHESIM_H_INCLUDED
