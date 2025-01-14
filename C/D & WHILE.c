#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a random N number (1 to 99): ");
    scanf("%d", &n);

        do
        {
            printf("%d\n", n);
            n++;
        } while (n <= 100);
        

    return 0;
}
