#include <stdio.h>



typedef struct 
{
    char nome[5][50];
    int idade[5];
    float nota[5];

} Alunos ;




int main(){

    Alunos aluno;

    printf("--------- Cadastro de alunos  ---------\n\n\n");


    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d: " ,i + 1);

        getchar();
        scanf(" %s", aluno.nome[i]);

        printf("Digite a idade do aluno %d: ", i +1);
        scanf("%d", &aluno.idade[i]);
        
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &aluno.nota[i]);
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("O aluno (%d)  %s, com %d anos, tirou uma nota %.2f\n", i + 1, aluno.nome[i], aluno.idade[i], aluno.nota[i]);

    }
    
    return 0;
}
