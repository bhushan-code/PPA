#include<stdio.h>
int main()
{
    // char ch='A';
    // char *p=&ch;
    // char **q=&p;
    // char **x=&p;
    // char *y=&ch;
    // int d;

    // printf("%d\n",&ch);          //100
    // printf("%d\n",p);            //100
    // printf("%d\n",&p);           //200
    // printf("%d\n",&q);           //300
    // //printf("%d\n",d);            //ERROR
    // printf("%c\n",**x);          //A
    // printf("%c\n",**q);          //A
    // printf("%d\n",*q);           //100



    int arr[] = {10,20,30,40,50};
    int *p = arr;

    printf("%d\n",arr);          //100
    printf("%d\n",&arr);            //100
    printf("%d\n",p);           //200
    printf("%d\n",*p);           //300
    printf("%c\n",sizeof(arr));          //A
    printf("%c\n",sizeof(arr[0]));          //A
    printf("%d\n",sizeof(p));           //100
    printf("%d\n",sizeof(*p)); 

    return 0;
}