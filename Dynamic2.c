#include<stdio.h>
#include<stdlib.h>      //standard library

int main()
{
    int *ptr = NULL;
    
    //step1 : Allocate the mamory

    ptr = (int *)malloc(5 * sizeof(int));

    //step : Use the memory

    free(ptr);

    //step3 : Deallocate the memory
    

    return 0;

}