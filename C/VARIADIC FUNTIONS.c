#include <stdio.h>
#include <stdarg.h>

int FuncaoVariadica(int quant, ...);

int main(){

    printf("Soma dos números foi de %d\n", FuncaoVariadica(3,5,10,5));
    printf("Soma dos números na 2 chamada foi de %d", FuncaoVariadica(4, 2, 4, 6, 8));

    return 0;
}

int FuncaoVariadica(int quant, ...){
    int soma = 0;
    va_list numeros;
    va_start (numeros, quant);

    for (int i = 0; i < quant; i++)
    {
        soma += va_arg(numeros, int);
    }
    va_end(numeros);


    return soma;
}
