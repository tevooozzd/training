#include <stdio.h>

enum DIAS {DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO };

int main(){

    enum DIAS hoje = DOMINGO;
    if (hoje == DOMINGO){
        printf("Hoje é domingo!");
    }

    return 0;
}
