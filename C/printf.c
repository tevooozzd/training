#include <stdio.h>



//In this case i understand 100% the use of the printf (stdio.h function), the %<x> and the char, char[] 

int main() {
    //%d: INT NUMBERS
    //%f: FLOAT NUMBERS
    //%c: CHAR
    //%s: STRING



    //printf is used to display information in the output

    int age = 25;
    printf("Age is: %d\n", age);  // Print an integer
    
    float height = 1.75;
    printf("The height is: %.2f meters\n", height);  // Print a float number with 2 decimal places

    char name[] = "John";
    printf("Name: %s\n", name);  // Print a string


    return 0;
}
