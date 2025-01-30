#include <stdio.h>

int main() {
    int arr[3][3];
    int somacolunas[3] = {0}; 
    int soma = 1;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = soma++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            somacolunas[j] += arr[i][j];
        }
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        printf("A média da coluna %d é de %d\n", i, somacolunas[i] / 3);
    }
    

    return 0;
}
