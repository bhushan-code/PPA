// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[6] = {1,2,3};
    int * const p = arr;
    
    printf("%d\n", arr);
    printf("%d\n", p);
    
    return 0;
}