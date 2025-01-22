#include <stdio.h>

int main(){
    int age = 17;
    int *ptr;

    printf("The age after the pointer is = %d\n", age);
    ptr = &age;
    *ptr = 18;
    printf("The new age before the pointer is %d", age);


    return 0;
}
