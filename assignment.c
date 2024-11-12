#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iCnt * iMulti;
        }
    }
    return iMulti;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);
    
    return 0;
}