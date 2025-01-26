#include <stdio.h>

int main(){
    int arr[5];
    int arri[5];

    printf("Digite os números para serem armazenados no array e depois invertido a seguir\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Array %d, terá o valor de = ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("Agora iremos inverter o arry.\n");
    for (int i = 0; i < 5; i++)
    {
            arri[i] = arr[4 - i];
    }



    for (int i = 0; i < 5; i++)
    {
        printf("Array normal, %d com o valor = %d \n", i + 1, arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Array invertido, %d com o valor = %d \n", i + 1, arri[i]);
    }
    
    

    return 0;
}
