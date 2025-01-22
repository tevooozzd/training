#include <stdio.h>

int main(){
    int *ptr;
    int number;

    printf("Enter a random REAL NUMBER: ");
    scanf("%d", &number);

    ptr = &number;
    printf("The value choose is = %d", *ptr);


    return 0;
}
