#include <stdio.h>


int main(){

    int arr[10];
    int arr2[10];;

    printf("Insira os valores do array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d, vai possuir o valor de = ", i + 1);
        scanf("%d", &arr[i]);
    }
    

    printf("Os valores inseridos foram\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Os valores do array1 para o indice %d, foi de = %d\n", i, arr[i]);
    }


    printf("Transferindo...\n");

    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr[i];
    }


    for (int i = 0; i < 10; i++)
    {
        printf("Os valores do array2 para o indice %d, foi de = %d\n", i, arr2[i]);
    }
    
    return 0;
}
