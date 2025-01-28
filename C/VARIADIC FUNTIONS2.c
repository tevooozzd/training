#include <stdio.h>
#include <stdarg.h>

void FuncaoVariadicaMedia(int quant, ...);

void main(){

    FuncaoVariadicaMedia(4, 2, 4, 6, 8);
    return 0;

}

void FuncaoVariadicaMedia(int quant, ...){
    int maior, menor, num;
    va_list numeros;
    va_start (numeros, quant);

    maior = menor = va_arg(numeros, int);

    for (int i = 1; i < quant; i++)
    {
        num = va_arg(numeros, int);
        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
        
        
    }

    va_end(numeros);


    printf("O maior argumento passado foi %d, e o menor argumento foi %d", maior, menor);

}
