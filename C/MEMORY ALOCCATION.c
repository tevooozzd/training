#include <stdio.h>
#include <stdlib.h>


int main(){
    float* ptr = (float *)calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = 0.5 * i;
    }


    
    for (int i= 0 ; i < 5; i++)
    {
        printf("O valor de ptr[%d] é de %.2f\n", i , ptr[i]);
    }
    
    free(ptr);



    return 0;
}
