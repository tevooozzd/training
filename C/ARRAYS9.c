#include <stdio.h>

int main(){
    int arrbi[3][3];

    printf("Enter some values to put in the array bidimensional: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Array %d %d, with the value = ",i, j );
            scanf("%d", &arrbi[i][j]);
        }
        
    }

    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Array %d %d, with the value = %d\n",i, j, arrbi[i][j] );

        }
        
    }
    


    return 0;
}
