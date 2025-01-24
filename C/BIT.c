#include <stdio.h>

#define SIMBOLO_DRAGAO 0x01 // 001 - 1
#define SIMBOLO_CAVALO 0x10 // 010 - 2
#define SIMBOLO_TIGRE 0x100 // 100 - 4
int main() {
    int input;

    printf("Digite um numero para compararmos: ");
    scanf("%d", &input);


    if (input & SIMBOLO_DRAGAO) {
        printf("Simbolo dragao ativado\n");
    }

    if (input & SIMBOLO_CAVALO) {
        printf("Simbolo cavalo ativado\n");
    }

    if (input & SIMBOLO_TIGRE) {
        printf("Simbolo tigre ativado\n");
    }



    return 0;
}
