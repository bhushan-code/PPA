#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        virtual void Fun()   // Virtual function, overridden in Base class outside class definition
        {
            cout<<"Inside Base Fun\n";
        }
        
        void Gun()           // Non-virtual function
        {
            cout<<"Inside Base Gun\n";
        }

        virtual void Sun()   // Virtual function, not overridden in Derived class
        {
            cout<<"Inside Base Sun\n";
        }

        virtual void Run()   // Virtual function, overridden in Derived class
        {
            cout<<"Inside Base Run\n";
        }
};

// Definition of Fun() outside the class
void Base::Fun()     
{
    cout<<"Inside Base Fun (Outside definition)\n";
}

class Derived : public Base
{
    public:
        int x,y;

        // Overriding Gun() but it's not virtual, so Base::Gun() will be called if accessed via Base pointer
        void Gun()           
        {
            cout<<"Inside Derived Gun\n";
        }

        // New virtual function in Derived class
        virtual void Mun()   
        {
            cout<<"Inside Derived Mun\n";
        }

        // Overriding virtual function Run()
        void Run()           
        {
            cout<<"Inside Derived Run\n";
        }
};

int main()
{   
    cout << "Size of Base class: " << sizeof(Base) << "\n";     // Size of Base class object
    cout << "Size of Derived class: " << sizeof(Derived) << "\n"; // Size of Derived class object
    
    Derived dobj;
    Base *bptr = nullptr;

    // Upcasting: Base class pointer pointing to Derived class object
    bptr = &dobj;

    bptr->Fun();  // Calls Base::Fun() because Derived didn't override Fun()
    bptr->Gun();  // Calls Base::Gun() because Gun() is not virtual
    bptr->Sun();  // Calls Base::Sun() because Derived didn't override Sun()
    bptr->Run();  // Calls Derived::Run() because Run() is virtual and overridden in Derived

    // bptr->Mun(); // Error: Mun() is not part of the Base class interface

    return 0;
}
