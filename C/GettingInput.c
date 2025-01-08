#include <stdio.h>


// In this case i understand how to get the input of a user and print

int main(){

    int base;
    int height;
    int area;

    printf("The value of base is: ");
    scanf("%i", &base); 

    printf("The value of height is: ");
    scanf("%i", &height);  

    area = base * height;
    printf("The area is = %i", area);
    
    return 0;
}


//   Exit:
//   The value of base is: x
//   The value of base is: y
//   The area is = z
