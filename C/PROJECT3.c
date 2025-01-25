#include <stdio.h>

typedef struct{
    char nome[3][50];
    int idade[3];
    float notas[3][3]; 
} Boletim;

void Cadastro(Boletim* sistema){
    printf("------- Cadastro de Alunos ------- \n\n\n");
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do %d estudante: ", i + 1);
        scanf(" %s", sistema->nome[i]);

        printf("Digite a idade do %d estudante: ", i + 1);
        scanf("%d", &sistema->idade[i]);

        for (int j = 0; j < 3; j++) {
            printf("Digite a %d nota do aluno %s: ", j + 1, sistema->nome[i]);
            scanf("%f", &sistema->notas[i][j]);
        }
    }
}

void CriptografarDados(Boletim* sistema){
    int mask = 123; 
    char criptografadonomes[3][50];
    int criptografadoidades[3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; sistema->nome[i][j] != '\0'; j++) {
            criptografadonomes[i][j] = sistema->nome[i][j] ^ mask;
        }


        criptografadoidades[i] = sistema->idade[i] ^ mask;
    }


    for (int i = 0; i < 3; i++) {
        printf("Nome criptografado: %s\n", criptografadonomes[i]);
        printf("Idade criptografada: %d\n", criptografadoidades[i]);
    }
}

int main() {
    Boletim sistema;
    Cadastro(&sistema);
    CriptografarDados(&sistema);
    return 0;
}
