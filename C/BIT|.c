#include <stdio.h>

#define SOM 0x01 // 001
#define LUZ 0x02 // 010

int main(){
    int simbolos = 0;
    printf("Nesse momento todos os sistemas estão desligados, e os bits são total de = %d\n", simbolos);

    printf("Ativando o SOM\n");
    simbolos = SOM | simbolos;
    printf("Som ligado, agora os bits totais são = %d\n", simbolos);

    printf("Ativando a LUZ\n");
    simbolos = LUZ | simbolos;
    printf("Luz ligado, agora os bits totais são = %d\n", simbolos);


    return 0;
}
