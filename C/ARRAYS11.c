#include <stdio.h>

int main(){
    int soma = 0;
    int linhas[4];
    int arrbi[4][4];

    printf("Enter some values to put in the array bidimensional: \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Array %d %d, with the value = ",i, j );
            scanf("%d", &arrbi[i][j]);
        }
        
    }

    printf("\n\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Array %d %d, with the value = %d\n",i, j, arrbi[i][j] );

        }
        
    }
    printf("\n\n\n");

    for ( int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma += arrbi[i][j];
        }
        
        linhas[i] = soma;
        soma = 0;
    }
    

    for (int i = 0; i < 4; i++)
    {
        printf("A linha %d possui o valor de %d, e sua média é de %d\n", i, linhas[i], linhas[i] / 4);
    }
    
    


    return 0;
}
