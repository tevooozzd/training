#include <stdio.h>

int main() {
    int n;
    printf("Enter e random N real number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d\n", i);

    return 0;
}
