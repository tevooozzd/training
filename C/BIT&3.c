#include <stdio.h>

#define NUMERO 0x01 // 001

int main(){
    int random;

    printf("Digite um número e vamos verificar pelos BITS se é par ou impar: ");
    scanf("%d", &random);

    if (random & NUMERO)
    {
        printf("Número impar");
    } else{
        printf("Número par");
    }
    
    return 0;
}
