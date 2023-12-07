#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
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
        printf("%d\n",addresses[line]);
    }
  
  	fclose(file);
  
  	return addresses;

}
    
