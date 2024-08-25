#include<stdio.h>
//error checking when initialise member while declaration
struct Demo
{
    int no = 11;
    float f = 31.33;
    double d = 30.44443;
    int i = 21;
};

int main()
{
   struct Demo obj;
   
    return 0;
}