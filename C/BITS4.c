#include <stdio.h>

void contar_bits(int x){

    int soma = 0;
    while (x)
    {
        if (x & 0x01){
            soma += 1;
        } 
        x >>= 1;
    }
    
    printf("A quantidade de bits 1 foi igual a %d, e de bits 0 igual a %d", soma, 8 - soma );

    
}



int main(){
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    contar_bits(number);


}
