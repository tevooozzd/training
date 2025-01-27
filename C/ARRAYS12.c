#include <stdio.h>
#define tamanho 3


int main(){
    int arr[3][3];
    int arrt[3][3];


    printf("Insira os valores do array antes da transposição\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Array [%d] [%d] receberá o valor: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        
        
    }
    
    for (int i = 0; i < tamanho ; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            arrt[i][j] = arr[j][i];
        }
        
    }
    
    printf("Antes da trasposta: \n\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    

    printf("\nDepois da trasposta: \n\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d", arrt[i][j]);
        }
        printf("\n");
    }





    return 0;
}
