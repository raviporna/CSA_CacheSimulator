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
#define X 1024 //Cachesize in KB
#define Y 10 //log2(X)

#define CACHE_SIZE 1024*X // AREA = INDEX_SIZE*BLOCK_SIZE
#define INDEX_SIZE 256*X // HEIGHT = = 2^INDEXLEN
#define BLOCK_SIZE 4 // (in Bytes) WIDTH = 2^OFFSETLEN
#define TAGLEN 22-Y
#define INDEXLEN 8+Y
#define OFFSETLEN 2

typedef unsigned char Byte;
typedef unsigned char bool;
typedef struct Cache{
    bool valid;
    bool dirty;
    unsigned long tag;
	Byte data[BLOCK_SIZE];
    size_t lastuse;
};

#endif // CACHESIM_H_INCLUDED