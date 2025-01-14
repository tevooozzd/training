#include <stdio.h>

int main() {
        int PASSWORD = 123456;
        int LOGINPASSWORD;

        while (1)
        {
            printf("Enter you password: ");
            scanf("%d", &LOGINPASSWORD);

            if (LOGINPASSWORD == PASSWORD ){
                printf("You login in you account!\n");
                break;
            } else {
                printf("Something went wrong... Let's try again\n");
            }
        }
        

    return 0;
}
