#include <stdio.h>

int main() {
    int n;
    printf("Enter a random N real number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        if(n % i == 0){
            printf("%i\n", i);
        }
    return 0;
}
