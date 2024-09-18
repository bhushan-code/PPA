#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int No1;                                            //Characteristics
        int No2;                                            //Characteristics


        Arithematic(int A, int B)                           //parametrised constructor
        {
            No1 = A;
            No2 = B;
        }

        int Addition()                                      //behavior
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        int Substraction()                                  //behavior
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }

};



int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter First Number : \n";                        //printf
    cin>>iValue1;                                           //scanf

    cout<<"Enter Second Number : \n";
    cin>>iValue2;
    


    Arithematic obj(iValue1,iValue2);                       //object creation

    iRet = obj.Addition();                                  //calling behavior
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = obj.Substraction();                              //calling behavior
    cout<<"Substraction is : "<<iRet<<"\n";

    return 0;
}