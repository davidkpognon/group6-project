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
    //uintptr_t add = (uintptr_t)address;

    pageNumber = ((uintptr_t) logical_addresses >> 8) & 0x00FF;
    printf("%d\n",pageNumber);
    printf("\n");
    
}

int * find_offset(int* address){
    int offset;

    //uintptr_t add = (uintptr_t)address;

    offset = (uintptr_t)logical_addresses & 0x00FF;
    printf("%d\n",offset);
    printf("\n");
}

void* initialize_TLB(void* param1, void* param2){
    TLB_param* p = (TLB_param*) param1;
    TLB_struct* TLB = (TLB_struct*) param2;

    int page_num = p->page;
    int frame = p->frame;

    int TLB_size = TLB->length;

    for(int page = 0; page < frames; page++){
        for (int frame = 0; frame < frameSize; frame++){
            
        }
    }



}

int* TLB_check(int* page){
    TLB_param* TLB;
    TLB_struct* len;

    TLB = (TLB_param*)malloc(sizeof(TLB_param)*frames);
    len = (TLB_struct*)malloc(sizeof(TLB_struct)*frameSize);

    int p =  0;

    for(int index = 0; index < frames; index++){
        if (TLB[p].page == page){
            return 1;
        }
    }

    return 0; 





}














int* read_backingStore(char * filename){
    FILE *ptr = NULL;
    ptr = fopen(filename, "rb");

}
    
