#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;

} Pessoa;


void preencherDados(Pessoa *p){
    printf("Digite o nome da pessoa a seguir: ");
    scanf(" %s", p->nome);
    
    printf("Digite a idade da pessoa a seguir: ");
    scanf("%d", &p->idade);

}

void imprimirDados(Pessoa *p){

    printf("O nome escolhido foi %s\n", p->nome);
    printf("A idade escolhida foi %d\n", p->idade);

}


int main() {
    Pessoa pessoa;

    preencherDados(&pessoa);
    imprimirDados(&pessoa);
    
    return 0;
}

