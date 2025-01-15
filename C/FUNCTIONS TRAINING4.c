#include <stdio.h>

void show_menu() {
    printf(" 1 - See my TO-DO list\n");
    printf(" 2 - Add a new TO-DO list\n");
    printf(" 3 - Mark complete any TO-DO list\n");
    
    int choose;
    printf("What you want to do?: ");
    scanf("%d", &choose);

    switch ( choose)
    {
    case 1:
        printf("You choose the number 1");
        break;
    case 2:
        printf("You choose the number 2");
        break;
    case 3:
        printf("You choose the number 3");
        break;
    default:
        printf("You choose a option that don't have in the menu. Please try again (1 to 3)");
        show_menu();
    }
}

int main() {
    show_menu();
    return 0;
}
