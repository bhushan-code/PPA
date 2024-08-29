#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int i;      //4
    float f;    //4 
    char ch;    //1
    double d;   //8
};              //Summetion : 17

union Hello
{
    int i;      //4
    float f;    //4
    char ch;    //1
    double d;   //8
};              //Largest : 8

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of Structure is : %lu\n",sizeof(dobj));
    printf("Size of Union is : %lu\n",sizeof(hobj));

    return 0;
}