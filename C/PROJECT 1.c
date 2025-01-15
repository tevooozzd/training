#include <stdio.h>


int show_menu() {
    int choose;

        printf(" 1 - Square \n");
        printf(" 2 - Rectangle \n");
        printf(" 3 - Circle \n");
        printf("What you want to do?: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("You chose option 1 - Square.\n");
                return choose; 
            case 2:
                printf("You chose option 2 - Rectangle.\n");
                return choose;
            case 3:
                printf("You chose option 3 - Circle.\n");
                return choose; 
            default:
                printf("Invalid option. Please choose between 1 and 3.\n");
                break;
        }

}

void square(){
    char answer;
    float base, height;

    printf("In the case of the square we multiplie the BASE x HEIGHT");
    printf("Do you have the values to calculate? (y/n): ");
    scanf(" %c", &answer);

    if (answer == 'y'|| answer == 'Y'){

        printf("The value of the base: ");
        scanf("%f", &base);

        printf("The value of the height: ");
        scanf("%f", &height);

        printf("The area of the square is %.2f x %.2f = %.2f\n", base, height, base * height);
    } else{
        printf("How you don't have the values the program will break!\n");
    }
}

void rectangle(){
    char answer;
    float base, height;

    printf("In the case of the rectangle we multiplie the BASE x HEIGHT");
    printf("Do you have the values to calculate? (y/n): ");
    scanf(" %c", &answer);

    if (answer == 'y'){

        printf("The value of the base: \n");
        scanf("%f", &base);

        printf("The value of the height: \n");
        scanf("%f", &height);

        printf("The area of the rectangle is %.2f x %.2f = %.2f\n", base, height, base * height);
    } else{
        printf("How you don't have the values the program will break!");
    }
}

void circle(){
    char answer;
    float r, pi;

    printf("In the case of the circle we multiplie the PI x (RADIUS x RADIUS)");
    printf("Do you have the values to calculate? (y/n): "); 
    scanf(" %c", &answer);

    if (answer == 'y'){

        printf("The value of the Pi: \n");
        scanf("%f", &pi);

        printf("The value of the R: \n");
        scanf("%f", &r);

        printf("The area of the circle is %.2f x %.2f = %.2f\n", r, pi, pi * (r * r));
    } else{
        printf("How you don't have the values the program will break!");
    }
}


int main() {

    int choose = show_menu();

    switch (choose)
    {
    case 1:
        square();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        circle();
        break;
    default:
        break;
    }

    return 0;
}
