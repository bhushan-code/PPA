#include<stdio.h>
#include<stdlib.h>      //standard library

int main()
{
    int *ptr = NULL;
    
    ptr = (int *)malloc(5 * sizeof(int));

    ptr = (int *)realloc(ptr, 7 * sizeof(int));   //Case 1

    ptr = (int *)realloc(ptr, 7 * sizeof(int));   //Case 2
    
    
    return 0;
}