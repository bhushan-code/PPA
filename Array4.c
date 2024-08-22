#include<stdio.h>
int main()
{
    //Member initialisation list

    int Arr[4] = {11,21,51,101};        //size is option
    
    int Brr[] = {11,21,51,101};
    
    //Member by memeber initialisation
    int Crr[4];                         //size is compulsory
    Crr[0] = 11;
    Crr[1] = 21;
    Crr[2] = 51;
    Crr[3] = 101;

    return 0;
}