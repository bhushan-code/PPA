#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        //1000
        int Addition(int No1, int No2)
        {
            return No1+No2;
        }

        virtual int Substraction(int No1, int No2) = 0;

};

class Derived : public Base
{
    public:
        int X,Y;

        //2000
        int Mutliplication(int No1, int No2)
        {
            return No1 * No2;
        }
        //3000
        int Substraction(int No1, int No2)
        {
            return No1-No2;
        }

};

int main()
{
    Derived dobj;
    //Base bobj;                        //NA

    cout<<"Addition is "<<dobj.Addition(11,10)<<"\n";
    cout<<"Substraction is "<<dobj.Substraction(11,10)<<"\n";
    cout<<"Multiplication is "<<dobj.Mutliplication(11,10)<<"\n";

    cout<<"Size of Base class: "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class: "<<sizeof(Derived)<<"\n";
    return 0;
}