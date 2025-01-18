#include <stdio.h>


int show_menu() {
    int choose;

        printf(" 1 - Celcius \n");
        printf(" 2 - Fahrenheit \n");
        printf(" 3 - Kelvin \n");
        printf("What you want to do?: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("You chose option 1 - Celcius.\n");
                return choose; 
            case 2:
                printf("You chose option 2 - Fahrenheit.\n");
                return choose;
            case 3:
                printf("You chose option 3 - Kelvin.\n");
                return choose; 
            default:
                printf("Invalid option. Please choose between 1 and 3.\n");
                break;
        }
}




void Celcius(){
    int temperature;
    printf("Enter the temperature in celcius: ");
    scanf("%d", &temperature);
    show_temperature(temperature);
}



void Fahrenheit(){
    int temperature;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &temperature);

    temperature = ((temperature - 32) * 9) / 5;
    show_temperature(temperature);
}



void Kelvin(){
    float temperature;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &temperature);

    temperature = temperature - 273.15;
    show_temperature(temperature);
}



void show_temperature(int x){
    int temperature = x;

    if(temperature < 0){
        printf("Cold as hell\n");
        printf("Temperature in Celcius: %.2d\n", temperature);
        printf("Temperature in Fahrenheit: %.2d\n", ((temperature * 9) / 5) + 32); 
        printf("Temperature in Kelvin: %.2d\n", (temperature + 273));

    } else if (temperature > 0 && temperature < 15){
        printf("Cold");
        printf("Temperature in Celcius: %.2d\n", temperature);
        printf("Temperature in Fahrenheit: %.2d\n", ((temperature * 9) / 5) + 32); 
        printf("Temperature in Kelvin: %.2d\n", (temperature + 273));

    } else if (temperature > 15 && temperature < 30)
    {
        printf("Normal temperature\n");
        printf("Temperature in Celcius: %.2d\n", temperature);
        printf("Temperature in Fahrenheit: %.2d\n", ((temperature * 9) / 5) + 32); 
        printf("Temperature in Kelvin: %.2d\n", (temperature + 273));

    } else{
        printf("Hot\n");
        printf("Temperature in Celcius: %.2d\n", temperature);
        printf("Temperature in Fahrenheit: %.2d\n", ((temperature * 9) / 5) + 32); 
        printf("Temperature in Kelvin: %.2d\n", (temperature + 273));
    }
    
}


int main() {

    int choose = show_menu();

    switch (choose)
    {
    case 1:
        Celcius();
        break;
    case 2:
        Fahrenheit();
        break;
    case 3:
        Kelvin();
        break;
    default:
        break;
    }

    return 0;
}
