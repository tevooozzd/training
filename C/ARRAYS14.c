#include <stdio.h>
#include <limits.h>  

#define tamanho 3

int main(){
    int arra[3][3];
    int maior = INT_MIN;  
    int menor = INT_MAX;  
    int Mindice0, Mindice1, mindice0, mindice1;

    printf("Insira os valores do array\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Array  [%d] [%d] receberá o valor: ", i, j);
            scanf("%d", &arra[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {

            if (arra[i][j] > maior) {
                maior = arra[i][j];
                Mindice0 = i;
                Mindice1 = j;
            }
            

            if (arra[i][j] < menor) {
                menor = arra[i][j];
                mindice0 = i;
                mindice1 = j;
            }
        }
    }
    
    printf("O maior número é %d, presente no indice %d %d\n", maior, Mindice0, Mindice1);
    printf("O menor número é %d, presente no indice %d %d\n", menor, mindice0, mindice1);

    return 0;
}
