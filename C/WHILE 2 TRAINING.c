#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a random N number (1 to 99): ");
    scanf("%d", &n);

        while ( n < 100){
            printf("%d\n", n);
            n++;
        }
        

    return 0;
}
