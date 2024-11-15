#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = NULL;

    p = (int *)malloc(5*sizeof(int));

    free(ptr);

    //ptr is now dangling pointer

    return 0;
}