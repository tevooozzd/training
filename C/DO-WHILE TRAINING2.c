#include <stdio.h>

int main() {

    char resposta; 

        do {   
            printf("Do you want to add any number? (y/n): \n");
            scanf(" %c", &resposta);
            }
        while (resposta != 'n' );
            printf("Ok let's break");

    return 0;
}
