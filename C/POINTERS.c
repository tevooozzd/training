#include <stdio.h>

int main(){
    int x= 1, y = 0;
    int *ptr = &x, *ptr2 = &y;


    printf("After the pointer change: ");
    printf("X = %d, Y = %d\n", *ptr, *ptr2);
    
    int trocar = *ptr;
    *ptr = *ptr2;
    *ptr2 = trocar;

    printf("Before the pointer change: ");
    printf("X = %d, Y = %d\n", *ptr, *ptr2);

    return 0;
}
