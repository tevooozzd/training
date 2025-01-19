#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int *ponteir;
    ponteir = (int *)malloc(sizeof(int));

    if (ponteir != NULL){
        printf("Allocation done successfully\n");
    } else{
        return 1;
    }

    *ponteir = 10;
    printf("Value stored = %d", *ponteir);
    free(ponteir);

    return 0;
}
