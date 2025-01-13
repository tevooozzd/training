#include <stdio.h>

int main() {
    int N;
    printf("Enter the N number: ");
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d is :%d\n", N, i, N * i);
        
    }
    return 0;
}
