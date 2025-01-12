#include <stdio.h>



//In this case i understand 100% the use of the scanf, %<x> and the char, char[]

int main() {
    //%d: INT NUMBERS
    //%f: FLOAT NUMBERS
    //%c: CHAR
    //%s: STRING


    //scanf function is used to read data from standard input  and store it in variables
    int age;
    scanf("%d", &age);  // Reads an integer and stores it in the 'age' variable

    float height;
    scanf("%f", &height);  // Read a float number and store it in the 'height' variable

    char name[50];
    scanf("%s", name);  // Reads a string and stores it in the 'name' variable (without spaces)

    return 0;
}
