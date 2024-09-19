#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;
        Base1()
        {
            cout<<"Inside Base1 constructor\n";
            i = 10;
            j = 20;
        }
        ~Base1()
        {
            cout<<"Inside Base1 Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Base1 \n";
        }
};

class Base2
{
      public:
        int x,y;
        Base2()
        {
            cout<<"Inside Base2 constructor\n";
            x = 10;
            y = 20;
        }
        ~Base2()
        {
            cout<<"Inside Base2 Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Base2 \n";
        }

};

class Derived : public Base2, public Base1
{
    public:
        int a,b;
        Derived()
        {
            cout<<"Inside Derived constructor \n";
            a = 50;
            b = 60;
        }
        ~Derived()
        {
            cout<<"Inside derived Destructor \n";
        
        }
        void Sun()
        {
            cout<<"Inside Derived Sun \n";
        }
};


int main()
{
    Derived dobj;

    cout<<sizeof(Base1)<<"\n";
    cout<<sizeof(Base2)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    

    return 0;
}