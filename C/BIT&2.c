#include <stdio.h>

#define NUMERO_3 0x04 // 100

int main(){
    int random;

    printf("Digite um número e vamos verificar se o BIT 3 está ativo: ");
    scanf("%d", &random);

    if (random & NUMERO_3)
    {
        printf("Bit 3 está ativo");
    } else{
        printf("Está desativado");
    }
    
    return 0;
}
