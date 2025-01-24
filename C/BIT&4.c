#include <stdio.h>
#define BIT3 0x04

int main(){

    int n, n2;

    printf("Digite dois números para mexermos com bits\n");
    scanf("%d", &n);
    scanf("%d", &n2);

    if ((n & BIT3) && (n2 & BIT3)){
        printf("Os dois números possuem o 3 bit ativo");
    } else if ((n & BIT3) || (n2 & BIT3)){
        printf("Pelo menos 1 número possui o 3 bit ativo");
    } else{
        printf("Nenhum dos dois possui o 3 bit ativo");
    }
    
    return 0;
}
