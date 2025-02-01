#include <stdio.h>
#define INVETER1BIT 0x01


void inverter_bit(int x, int n){
    int mask = 1 << n;
    int result = x | mask;
    printf("O novo número formado com a mask e %d bits a direita é = %d", n, result);

}


int main(){
    int number, bit_changes;

    printf("Digite um número: ");
    scanf("%d", &number);

    printf("Digite a mask: ");
    scanf("%d", &bit_changes);

    inverter_bit(number, bit_changes);

}
