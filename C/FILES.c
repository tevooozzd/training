#include <stdio.h>


int main(){

    FILE *arquivo;

    arquivo = fopen("teste.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro de inicialização aconteceu!");
        return 1;
    }
    
    fprintf(arquivo, "Esse é meu primeiro texto em C para .txt");
    fclose(arquivo);
    printf("Arquivo criado e conteúdo colocado!");


    return 0;
}
