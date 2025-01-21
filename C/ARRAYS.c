#include <stdio.h>

int main() {
    const char *dias[7] = { 
        "Domingo",   // 0
        "Segunda",   // 1
        "Terca",     // 2
        "Quarta",    // 3
        "Quinta",    // 4
        "Sexta",     // 5
        "Sabado"     // 6
    };

    int dia_input;
    printf("Digite o numero do dia (por exemplo, 17 para representar o 17 dia): ");
    scanf("%d", &dia_input);

    if (dia_input < 1 || dia_input > 31)
    {
        printf("Dia Invalido, porfavor coloque de 1 ate 31\n");
        return 1;
        
    }
    

    int dia_da_semana = dia_input % 7;

    printf("O dia %d corresponde a: %s\n", dia_input, dias[dia_da_semana]);

    return 0;
}
