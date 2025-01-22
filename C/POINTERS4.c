#include <stdio.h>

int main(){
    int x =1;
    int *ptr = &x;

    printf("The address of a inter is visible with a pointer just using the name of the pointerm, like ptr = %d \n", ptr);
    printf("To see the value of a pointers that points to other, we can use the * after the poninter, like *ptr = %d\n", *ptr);
    return 0;
}
