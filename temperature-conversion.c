#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;

    printf("Is the temperature in (f) or (c)? ");
    scanf("%c", &unit);          
    unit = toupper(unit);         

    if (unit == 'C') {
        printf("Please enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f\n", temp);
    }
    else if (unit == 'F') {
        printf("Please enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f\n", temp);
    }
    else {
        printf("\n%c is not a valid unit of measurement.\n", unit);
    }

    return 0;
}