#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdint.h>
#include "project.h"
// This file contains function definitons 

extern int* logical_addresses;

int* read_address(char* filename){
    FILE * file = NULL;
    int* addresses = NULL;

    file = fopen(filename, "r");
    addresses = (int*)malloc(sizeof(int)*1000);

    for (int line = 0; line < 1000; line++){
      	fscanf(file, "%d", &(addresses[line]));
        // printf("%d\n",addresses[line]);
    }
  
  	fclose(file);
  
  	return addresses;

}

int * find_page(int* address){
    int pageNumber;

    // casts pointer to an integer
    uintptr_t add = (uintptr_t)address;

    pageNumber = (add >> 8) & 0x00FF;
    printf("%d\n",pageNumber);
    printf("\n");
    
}

int * find_offset(int* address){
    int offset;

    uintptr_t add = (uintptr_t)address;

    offset = add & 0x00FF;
    printf("%d\n",offset);
    printf("\n");
}


int* read_backingStore(char * filename){
    FILE *ptr = NULL;
    ptr = fopen(filename, "rb");

}
    
