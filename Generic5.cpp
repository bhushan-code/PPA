#include<iostream>
using namespace std;
template<class X>

X addiotion(X no1, X no2)
{
    X Ans;

    Ans = no1 + no2;
    return Ans;
}

int main()
{
    float A = 10.9f, B= 11.6f;
    cout<<addiotion(A,B)<<"\n";

    int X = 10.4, Y = 11.1;
    cout<<addiotion(X,Y)<<"\n";

    double P = 10.534, R = 11.456;
    cout<<addiotion(P,R)<<"\n";


    return 0;
}
