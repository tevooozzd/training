#include <stdio.h>

int contar_bits(int x){
    int soma = 0;

    while (x)
    {
        if (x & 0x01)
        {
            soma +=1;
        }
        x >>= 1;
    }
    
    return soma;
}



int main(){
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    int result = contar_bits(number);
    printf("O total de bits no número %d, é de %d ", number, result);

}
