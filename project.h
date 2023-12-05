// This file defines functions

/** 
 * read_address() - Reads logical address from address.txt and 
 * returns pointer to address
*/
int ** read_address(char* filename);

/**
 * find_page() - extracts page number from logical address and returns page number
*/
int * find_page(int* address);

/**
 * find_offset() - extracts offset from logical address and returns offset
*/
int * find_offset(int* address);

/**
 * translate() - takes the page number + offset and checks TLB 
 * returns a hit or a miss
*/
int ** translate(int* frame);