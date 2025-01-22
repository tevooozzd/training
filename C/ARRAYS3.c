#include  <stdio.h>

int main(){
    int arr[10];

    printf("Enter 10 REAL NUMBERS to complete the array\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d, the value is:", i + 1);
        scanf("%d", &arr[i]);
    }
    

    for (int i = 0; i < 10; i++)
    {
        printf("The number %d in the array has the value: %d\n", i + 1, arr[i]);
    }


    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    
    printf("All the values in the array sum is = %d", sum);
    


    return 0;
}
