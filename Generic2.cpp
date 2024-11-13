#include<iostream>

using namespace std;

double addiotion(double no1, double no2)
{
    double Ans = 0;

    Ans = no1 + no2;
    return Ans;
}

int main()
{
    double A = 10.9, B= 11.6;
    cout<<addiotion(A,B)<<"\n";
    return 0;
}
