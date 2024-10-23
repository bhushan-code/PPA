
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size =0;
    int *p =NULL;
    int icnt =0;

    printf("Enter the number of floats : \n");
    scanf("%d",&size);

    p = (int *) malloc(size * sizeof(int));

    printf("Please enter elements");

    for(icnt =0; icnt<size; icnt++)
    {
        scanf("%d",&p[icnt]);

    }
    printf("Entered elements");

    for(icnt =0; icnt<size; icnt++)
    {
        printf("%d",p[icnt]);

    }

 printf("%d",p[2]);
    free(p);
    
    return 0;
}

