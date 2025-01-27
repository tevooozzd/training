#include <stdio.h>
#define tamanho 3


int main(){
    int arra[3][3];
    int arrb[3][3];
    int arrc[3][3];

    printf("Insira os valores do array\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Array A [%d] [%d] receberá o valor: ", i, j);
            scanf("%d", &arra[i][j]);
        }
        
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Array b [%d] [%d] receberá o valor: ", i, j);
            scanf("%d", &arrb[i][j]);
        }
        
        
    }


    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            arrc[i][j] = arra[i][j] + arrb[i][j];
        }
        
    }



    printf("Matriz A\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d  ", arra[i][j]);
        }
        printf("\n");
    }
    printf("\n\nMatriz B \n\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d  ", arrb[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatriz C \n\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d  ", arrc[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}
