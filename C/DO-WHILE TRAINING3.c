#include <stdio.h>

int main() {

    int n; 
    printf("Enter a random N real number. Let's start the cronometre: ");
    scanf("%d", &n);



    do{
        printf("Time: %d\n", n);
        n -= 1;
    }
    while ( n > 0);
        printf("Time out!");

    return 0;
}
