#include <stdbool.h>
// This file declares definitons

#define entries 16 

#define frames 256
#define frameSize 256

#define physicalMemory 65536


// Structures (For Page table and TLB)

typedef struct {
    int page;
    int frame;
} TLB_param;

typedef struct {
    int length;
} TLB_struct;


typedef struct {
    int frame;
} Page_param;

typedef struct {
    int length;
} Page_struct;

// Functions

/** 
 * read_address() - Reads logical address from address.txt and 
 * returns pointer to address
*/
int * read_address(char* filename);

/** 
 * read_address() - Reads page number in backing store from BACKING_STORE.bin and 
 * returns pointer to page
*/
int ** read_backingStore(char* filename);

/**
 * find_page() - extracts page number from logical address and returns page number
*/
int * find_page(int* address);

/**
 * find_offset() - extracts offset from logical address and returns offset
*/
int * find_offset(int* address);

/**
 * translate() - takes the page number + offset if TLB hit 
 * and maps it to physical memory
*/
int ** translate(int* frame);

/**
 * TLB_check() - takes the page number + offset and checks TLB 
 * returns a hit or a miss
*/

bool ** TLB_check(int* frame);

/**
 * Page_check() - takes the page number + offset and checks page table 
 * returns a hit or page fault
*/

bool ** Page_check(int* frame);