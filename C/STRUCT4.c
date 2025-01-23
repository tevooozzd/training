#include <stdio.h>

typedef struct
{
    float notas[3];
} Notas ;


typedef struct
{
    char nome[50];
    int idade;
    Notas notas;
} Aluno;



int main(){

    Aluno aluno;
    
    printf("Digite o nome do aluno: ");
    scanf(" %s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    for (int i = 0; i < 3 ; i++)
    {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &aluno.notas.notas[i]);
    }
    
    float soma = 0;
    for (int i = 0; i < 3; i++)
    {
        soma += aluno.notas.notas[i];
    }
    
    printf("O aluno %s, com %d anos, teve a media de %.2f",  aluno.nome, aluno.idade, soma / 3);

    

    return 0;
}
