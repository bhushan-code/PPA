#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1, No2;
        const int No3;
        const int No4;
        
        Demo() : No3(30), No4(40)
        {
            No1 = 10;
            No2 = 20;
        }

};

int main()
{
    Demo obj;

    return 0;
}