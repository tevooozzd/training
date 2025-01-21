#include <stdio.h>

int main() {
    int arr[5];
    

    for (int i = 0; i < 5; i++)
    {
        printf("Digite 5 digitos para armazenar no array: ");
        scanf("%d", &arr[i]);
    }

    printf("Os numeros armazenados foram: \n");


    for ( int i = 0; i < 5; i++)
    {
        printf("Numero %d, armazenado com o valor: %d\n", i + 1, arr[i]);
    }
    


    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += arr[i];
    }
    
    printf("A soma de todos os numeros do array foi: %d", soma);

}
