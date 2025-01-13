#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter the N number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    printf("The sum of the numbers from 1 to %d is: %d ", N, sum);
    return 0;
}
