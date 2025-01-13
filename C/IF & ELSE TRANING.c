#include <stdio.h>

// Training the use of IF/ELSE 

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); 

    if (age >= 18){
        printf("Released to enter at the party");
    } else{
        printf("Not released to enter at the party. Underage");
    }
    return 0;
}
