#include <stdio.h>

int main() {
    int n;

        do
        {   
            printf("Enter a random N number (1 to 10): ");
            scanf("%d", &n);
            if (n < 1 || n > 10){
                printf("Incorrect number\n");
            }
        } while ( n < 1 || n > 10);
            printf("Number correct");
    return 0;
}
