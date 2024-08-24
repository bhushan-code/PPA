#include<stdio.h>

int main()
{
    int no = 11;
    
    int *p = &no;
    
    int **q = &p;



    return 0;
}


/*

no  11
p   100
q   200

&no 100
&p  200
&q  300

*p  11
**q 11
*q  100

*/