#include <stdio.h>
#include <stdlib.h>

int main(){

    int* ptr = (int *)malloc(5 * sizeof(int));
    
    if (ptr == NULL){
        printf("Algo deu errado");
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("Alocação de memoria número %d, tem o valor de %d\n", i + 1, ptr[i]);
    }
    



    return 0;
}
