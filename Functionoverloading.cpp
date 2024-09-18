#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int A, int B)
        {
            return A+B;
        }
        double Addition(double A, double B)
        {
            return A+B;
        }
        int Addition(int A, int B, int C)
        {
            return A+B+C;
        }

};
int main()
{
    Demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.98,11.56)<<"\n";
    cout<<obj.Addition(10,11,21)<<"\n";

    return 0;
}
/*
Void Fun(int A, int B);             Fun@2ii
Void Fun(int A, int B, int C);      Fun@3iii


Void Fun(int A, int B);             Fun@2ii
Void Fun(float A, float B);         Fun@2ff

Void Fun(int A, float B, double C);     Fun@3ifd
Void Fun(double A, int B, float C);  Fun@3dif


Void Fun(int A, int B);
int Fun(int A, int B);



*/