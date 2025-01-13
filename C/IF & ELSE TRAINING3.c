#include <stdio.h>

// Training the use of IF/ELSE 

int main() {
    int limit_speed = 120;
    int fine = 200;
    float actually_speed;

    printf("Enter the speed of the car: ");
    scanf("%f", &actually_speed);

    if (actually_speed > limit_speed){
        printf("You are above the speed limit, which is why you got a fine of '%d$', please be more careful", fine);
    } else{
        printf("You are under of the speed limit, keep it up, it's going well");
    }
    
    
    return 0;
}
