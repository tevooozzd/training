#include <stdio.h>

typedef union {
    int x;
    float y;
    char z[50];
} Dado;

int main() {
    Dado valor;

    printf("Digite um INT: ");
    scanf("%d", &valor.x);
    printf("Você digitou o INT: %d\n", valor.x);

    printf("Digite um FLOAT: ");
    scanf("%f", &valor.y);
    printf("Você digitou o FLOAT: %.2f\n", valor.y);

    printf("Digite uma string: ");
    scanf(" %[^\n]", valor.z);
    printf("Você digitou a string: %s\n", valor.z);

    return 0;
}
