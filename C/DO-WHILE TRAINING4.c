#include <stdio.h>

int main() {

    int n; 

    do{
        printf("Enter a random N real EVEN number: ");
        scanf("%d", &n);

        if ( n % 2 != 0 ){
            printf("It's a ODD number. Try to type a EVEN NUMBER!");
        }
        
    } while ( n % 2 != 0);
        printf("It's a EVEN real number!\n");

    return 0;
}
