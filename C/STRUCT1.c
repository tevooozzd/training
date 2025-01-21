#include <stdio.h>

struct Person
{
    char nome[20];
    int idade;
};



int main() {

    struct Person pessoa;
    
    printf("Digite o nome do aluno: ");
    scanf(" %s", pessoa.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("O nome escolhido foi:  %s\n" ,pessoa.nome);
    printf("A idade escolhida foi:  %d\n", pessoa.idade);

    return 0;
}
