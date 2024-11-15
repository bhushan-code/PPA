#include<stdio.h>


int Value = 11;                        //extern
int Data;                              //extern

void Demo()
{
    int i =10;                         //auto 
    Static int j = 20;                 //static
    register int k = 30;               //register

    printf("Inside Demo Function\\n");
}

int main()
{
    int *ptr = NULL;

    p = (int *)malloc(5*sizeof(int));   //dynamic memory

    Demo();

    return 0;
}