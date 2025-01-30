#include <stdio.h>

int main() {
    int arr[3][3];
    int somadiagonais[2] = {0}; 
    int soma = 1;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = soma++;
        }
    }

    for (int i = 0; i < 3; i++) {
        somadiagonais[0] += arr[i][i];
    }

    for (int i = 2; i > -1; i--)
    {
        somadiagonais[1] += arr[i][2 - i];
    }
    

    printf("A soma da diagonal principal é de %d, e da secundária é de %d", somadiagonais[0],somadiagonais[1]);

    return 0;
}
