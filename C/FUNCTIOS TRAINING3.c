#include <stdio.h>

void sum(int x) {
    if (x % 2 == 0) {
        printf("It's an EVEN NUMBER!\n");
    } else {
        printf("It's an ODD NUMBER\n");
    }
}

int main() {
    
    int n;
    printf("Enter a random N real number, let's see if it's ODD or EVEN: \n");
    scanf("%d", &n);
    
    sum(n);
    
    return 0;
}
