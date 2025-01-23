#include <stdio.h>
#define TAMANHO 5



typedef struct 
{
    int indiceM, indicem;
    float maior, menor;
    char nomes[TAMANHO][50];
    int idades[TAMANHO];    
    float notas[TAMANHO];
} Alunos ;


int main(){

    Alunos alunos;

    printf("Insira as informações dos alunos a seguir\n");

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Aluno %d, nome: ", i +1);
        scanf("%49s", alunos.nomes[i]); 


        printf("Aluno %d, idade: ",  i +1);
        scanf("%d", &alunos.idades[i]);

        printf("Aluno %d, nota: ",  i +1);
        scanf("%f", &alunos.notas[i]);
    }
    
    alunos.maior = alunos.menor = alunos.notas[0];
    alunos.indiceM = alunos.indicem = 0;

    for (int i = 1; i < TAMANHO; i++)
    {
        if (alunos.notas[i] > alunos.maior)
        {
            alunos.maior = alunos.notas[i];
            alunos.indiceM = i;

        }
        
        if (alunos.notas[i] < alunos.menor )
        {
            alunos.menor = alunos.notas[i];
            alunos.indicem = i;
        }
        
    }
    
    printf("A maior nota foi do aluno %s, com %d anos, e sua nota foi de = %.2f\n", alunos.nomes[alunos.indiceM], alunos.idades[alunos.indiceM], alunos.maior);
    printf("A menor nota foi do aluno %s, com %d anos, e sua nota foi de = %.2f\n", alunos.nomes[alunos.indicem], alunos.idades[alunos.indicem], alunos.menor);

    return 0;
}
