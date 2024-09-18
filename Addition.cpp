#include<iostream>

using namespace std;

class addition
{
    int a;
    int b;

    int sum()
    {
        return (a+b);
    }
}






int main()
{
    int a = 0, b = 0;

    cout << "Enter the first number : \n";
    cin >> a;
    
    cout << "Enter the second number : \n";
    cin >> b;

    addition(a,b);

    cout <<"The addition is : " <<addition.sum() <<endl;

    return 0;
}