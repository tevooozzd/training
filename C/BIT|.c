#include <stdio.h>

#define DRAGAO 0x01 // 001
#define CAVALO 0x02 // 010
#define TIGRE 0x04 // 100


int main(){
    int random;

    printf("Digite um número e vamos verificar se ele contem os simbolos: ");
    scanf("%d", &random);

    if (random & DRAGAO || random & CAVALO || random & TIGRE)
    {
        printf("Algum dos simbolos, DRAGAO, CAVALO ou TIGRE foi ativado!");
    } else{
        printf("Nenhum número foi ativado");
    }
    
    return 0;
}
