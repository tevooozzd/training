#include <stdio.h>



//In this case i start to use IF/ELSE, and I continue to program according to user input, taking that input and working with it.

int main() {
    float Test1;
    float Test2;
    float Total;

    printf("Enter the first test score: ");
    scanf("%f", &Test1);

    printf("Enter the second test score: ");   
    scanf("%f", &Test2);

    Total = (Test1 + Test2) / 2;
    if (Total >= 70){
        printf("Your score was:%2.f, Approved!", Total);
    } else{
        printf("Your score was:%2.f, Failed!", Total);
    }

    return 0;
}
