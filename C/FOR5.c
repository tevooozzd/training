#include <stdio.h>

int main() {
    int n;
    printf("Enter e random N real number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
        printf("%i\n", i);

    return 0;
}
