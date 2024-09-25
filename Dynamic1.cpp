#include<iostream>

using namespace std;


int main()
{
    int Arr[5];         //Static memory alla

    int *ptr = NULL;

    //Step 1 : Allocate the memory 
    ptr = new int[5];

    //Step : Use the memory 
    //Logic 

    //Step3 : Deallocate the memory
    delete []ptr;

    return 0;
}