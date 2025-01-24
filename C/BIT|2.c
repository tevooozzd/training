#include <stdio.h>

#define DRAGAO 0x01 // 001
#define CAVALO 0x02 // 010

int main(){
    int random;
    int resultado;

    printf("Digite um número e vamos aplicar o operador | (OU bit a bit): ");
    scanf("%d", &random);

    resultado = (random | DRAGAO) | CAVALO;

    if (resultado != random){
        printf("O novo número gerado com a ativação de bits DRAGAO e CAVALO foi = %d", resultado);
    } else{
        printf("O numero permaneceu o mesmo, os bits de DRAGAO e CAVALO já estão ativos");
    }
    
    return 0;
}
