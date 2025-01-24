#include <stdio.h>
#define ATIVAR_5_BIT 0x10

int main() {

    int numero, result;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    result = numero | ATIVAR_5_BIT;
    if ( result != numero)
    {
        printf("O 5 bit foi ativado e agora o novo resultado é = %d", result);
    } else{
        printf("O 5 bit já está ativo e permaneceu o mesmo = %d", result);
    }
    

    return 0;
}
