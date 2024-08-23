#include<stdio.h>

int main()
{
    int no = 11;

    int *ptr = &no;

    printf("%d\n", no);                 //11
    printf("%d\n", &no);                //100
    printf("%d\n", sizeof (no));        //4
    printf("%d\n", ptr);                //100
    printf("%d\n", &ptr);               //200
    printf("%d\n", sizeof(ptr));        //8

    printf("%d\n", *ptr);                 //11

    return 0;
}