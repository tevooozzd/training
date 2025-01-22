#include <stdio.h>


int main(){

    int arr[10];
    int *ptr;

    printf("Insira os valores do array a seguir\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d, vai possuir o valor de = ", i + 1);
        scanf("%d", &arr[i]);
    }
    

    printf("Os valores inseridos foram");
    for (int i = 0; i < 10; i++)
    {
        printf("Os valores do array1 para o indice %d, foi de = %d\n", i, arr[i]);
    }


    int soma = 0;
    ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        soma += *(ptr + i);
    }
    
    printf("A soma dos valores do array foi de = %d", soma);

    return 0;
}
