#include  <stdio.h>

int main(){
    float arr[5];

    printf("Enter a 5 FLOAT NUMBERS to complete the array\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Number %d, has the value: ", i + 1);
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The array number %d, has the value = %.2f\n", i + 1, arr[i]);
    }
    

    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    
    sum = sum / 5;
    printf("The media os all the floats numbers are: %.2f" ,sum);
    

    return 0;
}
