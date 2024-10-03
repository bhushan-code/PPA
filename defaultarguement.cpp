#include<iostream>
using namespace std;

float CalculateArea(float Rad, float PI = 3.14f)
{
    float Ans = 0.0f;           //if not f, then it treaded as double
    Ans = PI * Rad * Rad;
    return Ans;
}



int main()
{
    float Ret = 0.0f;
    
    Ret = CalculateArea(10.5f);
    cout<<"Area of Circle is : "<<Ret<<"\n";

    Ret = CalculateArea(10.5f, 7.28f);
    cout<<"Area of Circle is : "<<Ret<<"\n";

    return 0;
}