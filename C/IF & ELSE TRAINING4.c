#include <stdio.h>

// Training the use of IF/ELSE 

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number % 2 == 0){
        printf(" The number '%d' is EVEN", number);
    } else{
        printf(" The number '%d' is ODD", number);
    }
    
    return 0;
}
