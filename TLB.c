#include "PhysicalStorage.c"
#include "PageTable.c"

#define entries 16
#define frameSize 256


// Structures
typedef struct {
    int page;
    int frame;
} TLB_struct;

typedef struct {
    TLB_struct * table;
    int length;
} TLB;

// Variables 
TLB* TLBtable;

// Define Table
void* initialize_TLB(){
    TLBtable = (TLB*)malloc(sizeof(TLB*));
    
    TLBtable->length = entries;

    


}

