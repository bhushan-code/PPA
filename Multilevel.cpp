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
    
    DerivedX dobj;
    //constructor : Base -> Derived -> DerivedX
    
    cout<<"Inside main Function\n";

    cout<<"Size of base class "<<sizeof(Base)<<"\n";                    //8
    cout<<"Size of Derived class "<<sizeof(Derived)<<"\n";              //16
    cout<<"Size of DerivedX class "<<sizeof(DerivedX)<<"\n";            //24


    cout<<dobj.i<<"\n"; //10
    cout<<dobj.j<<"\n"; //20
    cout<<dobj.x<<"\n"; //30
    cout<<dobj.x<<"\n"; //40
    cout<<dobj.a<<"\n"; //50
    cout<<dobj.b<<"\n"; //60

    dobj.Fun(); //Inside Fun
    dobj.Gun(); //Inside Gun
    dobj.Sun(); //Inside Sun

    //Destructor : DerivedX -> Derived -> Base
    return 0;
}