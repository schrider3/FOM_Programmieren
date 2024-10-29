#include <stdio.h>

int main()
{
    double fahrenheit;
    double celsius;

    printf("Enter a temperature in Celsius you want to convert to Fahrenheit: ");
    scanf("%lf", &celsius);  // Verwende &celsius und "%lf"

    fahrenheit = (celsius * 1.8) + 32;
    printf("Temperature in Fahrenheit: %lf\n", fahrenheit);  // Optional kannst du auch hier "%lf" verwenden

    return 0;
}
