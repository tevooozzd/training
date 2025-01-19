#include <stdio.h>

//factorial

int main(){
    int number;
    int sum = 1;
    printf("Enter a number and let's see the fatorial: ");
    scanf("%d", &number);

    printf("\n");
    for (int i = 1; i <= number; i++)
    {
        sum *= i;
        printf("The %d! = %d\n", number, sum);   
    }
    

    return 0;
}
