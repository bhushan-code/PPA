#include<stdio.h>
struct Demo
{
    int no;
    float f;

};

int main()
{
    struct Demo Arr[3];

    Arr[0].no = 11;
    Arr[0].f = 11.1;

    Arr[1].no = 21;
    Arr[1].f = 21.1;

    Arr[2].no = 31;
    Arr[2].f = 31.1;

    printf("%d\n",Arr[2].no);
    return 0;
}