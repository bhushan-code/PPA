#include<stdio.h>
//structure Declaration
#pragma pack(1)
struct Demo
{
    int no;
    float f;
    double d;
    int i;
};

int main()
{
    struct Demo obj1;    //Object creation of structure
    struct Demo obj2;

    printf("%d\n",sizeof(obj1));

    obj1.no = 11;
    obj1.f = 3.10;
    obj1.i = 6.9999;
    obj1.i = 21;

    obj2.no = 101;
    obj2.f = 10/90;
    obj2.i = 90.6677;
    obj2.i = 111;

    printf("%d\n", obj1.no);

    printf("%d\n", obj2.no);
    


    return 0;
}