#include <stdio.h>



typedef struct 
{
    char nome[50];
    int idade;
    float nota;

} Alunos ;




int main(){

    Alunos aluno;

    printf("--------- Cadastro de alunos  ---------\n\n\n");


    printf("Digite o nome do aluno: ");
    scanf("%49[^\n]", aluno.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("O aluno %s, com %d anos, tirou uma nota %.2f", aluno.nome, aluno.idade, aluno.nota);
    return 0;
}
