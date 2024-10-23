#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 10;
            j = 20;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Fun \n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        
        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 30;
            y = 40;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        
        void Gun()
        {
            cout<<"Inside Gun \n";
        }
        
};

class DerivedX : public Derived
{
    public:
        int a,b;
        DerivedX()
        {
            cout<<"Inside DerivedX Constructor\n";
            a = 50;
            b = 60;
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside DerivedX Sun\n";
        }

};

int main()
{
    Base bobj;
    Derived dobj;
    DerivedX dxobj;
   //Destructor : DerivedX -> Derived -> Base
    return 0;
}