#include<iostream>

using namespace std;

float addiotion(float no1, float no2)
{
    float Ans = 0.0f;

    Ans = no1 + no2;
    return Ans;
}

int main()
{
    float A = 10.9f, B= 11.6f;
    cout<<addiotion(A,B)<<"\n";
    return 0;
}
