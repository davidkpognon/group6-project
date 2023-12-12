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
    TLB_struct* table;
    int length;
} TLB;

// Variables 
TLB* TLBtable;
int frame;

// Define Table
void* initialize_TLB(){
    TLBtable = (TLB*)malloc(sizeof(TLB)*frameSize);
    TLBtable->length = entries;

    return TLBtable;
}

// Verifies if page number is in TLB

int* check_TLB(int* page){

    for(int index = 0; index < entries; index++){
        if (TLBtable->table[index].page == page){
            return TLBtable->table[index].frame; // Returns frame
        }
        else{
            return 0; //
        }
    }
}

