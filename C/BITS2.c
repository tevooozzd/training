#include <stdio.h>
#define INVETER1BIT 0x01


void inverter_bit(int x, int n){
    int mask = 1 << n;
    if (mask & x)
    {
        printf("O bit na posição %d está ativo", n);
    } else{
        printf("O bit está desativado");
    }
    
    

}


int main(){
    int number, bit_changes;

    printf("Digite um número: ");
    scanf("%d", &number);

    printf("Digite a mask: ");
    scanf("%d", &bit_changes);

    inverter_bit(number, bit_changes);

}
