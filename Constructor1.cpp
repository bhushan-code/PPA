#include<iostream>
using namespace std;

class Marvellous
{
    public:
    int No1;                                                //characteristic
    int No2;

    Marvellous()                                            //special function construction
    {   
        cout<<"Inside default constructor\n";           
        No1 = 0;
        No2 = 0;
    }

    Marvellous(int A, int B)
    {
        cout<<"Inside Parametrised constuctor\n";
        No1 = 0;
        No2 = 0;
    }

    ~Marvellous()
    {
        cout<<"Inside destructor\n";
    }

    void Fun()
    {
        cout<<"Inside Fun\n";
    }
};



int main()
{
    Marvellous mobj1;
    Marvellous mboj2(11,21);
    
    return 0;
}