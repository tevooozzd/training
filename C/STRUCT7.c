#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    float notas[3];

} Aluno;



int main() {
    Aluno *p = (Aluno *)malloc(sizeof(Aluno));

    printf("Digite o nome da aluno(a): ");
    scanf(" %s", p->nome);

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d do aluno(a): ", i);
        scanf("%f", &p->notas[i]);
    }

    printf("O(a) Aluno(a) %s, teve as notas de %.2f, %.2f, %.2f\n", p->nome, p->notas[0], p->notas[1], p->notas[2]);
    printf("E sua média é de %.2f", (p->notas[0] + p->notas[1] + p->notas[2] ) / 3);
    
    free(p);

    return 0;
}
