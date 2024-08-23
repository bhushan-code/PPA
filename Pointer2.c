#include<stdio.h>
int main()
{
    char c = 'M';
    int i = 11;
    float f = 3.14;
    double d = 3.9987;

    char *cptr = &c;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

/*
i   11
c   M
f   3,14
d   3.9987

&i  200
&c  100
&f  300
&d  400

sizeof(i)   4
sizeof(c)   1
sizeof(f)   4
sizeof(d)   8


iptr    200
cptr    100
fptr    300
dptr    400

*iptr   11
*cptr   M
*fptr   3.14
*dptr   3.9987

sizeof(iptr)    8
sizeof(cptr)    8
sizeof(fptr)    8
sizeof(dptr)    8




*/


    return 0;
}