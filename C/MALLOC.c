#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int number;

    printf("How many INT do you want to allocate?: ");
    scanf("%d", &number);
    arr = (int *)malloc(number * sizeof(int));

    if (arr != NULL){
        printf("Aloccate has sucessfully");
        free(arr);
    } else{
        printf("Something went wrong");
        return 1;
    }





    return 0;
}
