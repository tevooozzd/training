#include <stdio.h>

// Training the use of IF/ELSE 

int main() {
    float numberone;
    float numbertwo;
    
    printf("Enter the first number: ");
    scanf("%f", &numberone);

    printf("Enter the second number: ");
    scanf("%f", &numbertwo);

    if (numberone > numbertwo){
        printf("The first number is greater");
    } else if (numbertwo > numberone){
        printf("The second number is greater");
        } else{
            printf("The two numbers are equal");
        }
    return 0;
}
