#include <stdio.h>

int main(){

    int arr[5];
    int *ptr;

    printf("Enter 5 NUMBERS to complete the array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The number %d has the value: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");


    ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("The indice %d of the array has the value:  %d\n", i, *(ptr + i));
    }
    

    return 0;

}
