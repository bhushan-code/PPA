#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;            //business logic
    printf("Addition is : %d\n", Ans);
    
    return Ans;
}


int Substraction(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iRet = Addition(iValue1,iValue2);
    printf("Addition is : %d\n", iRet);

    iRet = Substraction(iValue1,iValue2);
    printf("Substraction is : %d\n", iRet);

    return 0;
}
