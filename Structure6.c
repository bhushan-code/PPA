#include<stdio.h>

struct Demo
{
    
    int no;
    float f;
    int Arr[3];
    int x;

};

int main()
{
    struct Demo obj;
    
    obj.no = 11;
    obj.f = 90.99;
    obj.x = 21;

    obj.Arr[0] = 10;
    obj.Arr[1] = 20;
    obj.Arr[2] = 30;

    return 0:
}