#include <stdio.h>

//multiplication table


int main(){
    int number;
    int table;
    printf("Enter a number and let's see your multiplication table: ");
    scanf("%d", &number);
    
    printf("Now enter a number to see the multiplication table until this number:");
    scanf("%d", &table);

    printf("\n");
    for (int i = 0; i <= table; i++)
    {
        printf("The %d x %d = %d\n", number, i, number * i);   
    }
    

    return 0;
}
