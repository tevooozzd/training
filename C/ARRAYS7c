#include <stdio.h>

int main() {
    char frase[] = "aivilo";
    char nova_frase[sizeof(frase)];  
    int tamanho = sizeof(frase) / sizeof(frase[0]);

    for (int i = 0; i < tamanho - 1; i++) {
        nova_frase[i] = frase[tamanho - 2 - i];  
    }
    nova_frase[tamanho - 1] = '\0'; 

    for (int i = 0; i < tamanho - 1; i++) {
        printf("Antiga frase = %c\n", frase[i]);  
    }

    for (int i = 0; i < tamanho - 1; i++) {
        printf("Nova frase = %c\n", nova_frase[i]);
    }



    return 0;
}
