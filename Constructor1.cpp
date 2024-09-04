#include<iostream>
using namespace std;

class Marvellous
{
    public:
    int No1;
    int No2;

    Marvellous()
    {
        cout<<"Inside constructor\n";
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
    Marvellous mobj;
    
    mobj.Fun();

    return 0;
}