#include <stdio.h>

// Training the use of IF/ELSE with LOGIC OPERATORS


int main() {
    
    // && ( X and Y)
    // || ( X or Y)
    // != (X not equal Y)
    // == (X equal Y)

    int age;
    float wage;

    printf("Enter your age: ");
    scanf("%i", &age);

    printf("Enter you wage: ");
    scanf("%f", &wage);

    if(age >= 18 && wage >= 500){
        printf("You can buy");
    } else{
        printf("You can't buy");
    }
    return 0;
}
