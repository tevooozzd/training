#include <stdio.h>


int main(){
    int arr[5] = {1,2,3,4,5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int x = 0;
    int input;

    printf("Digite um número e vamos verificar se ele está no array:\n");
    scanf("%d", &input);


    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] == input)
        {
            printf("Número %d (input) foi encontrado no indice %d", input, i);
            x +=1;
            break;
        } 
        
    }

    if (!x)
    {
        printf("Número %d não foi encontrado no array\n", input);
    }
    
    
    return 0;
}
