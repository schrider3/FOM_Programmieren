#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;  // lower limit of temperature scale
    upper = 300;  // upper limit of temperature scale
    step = 20;  // step size

    printf("Fahrenheit in Celsius Rechner\n_________________________________________\n\n");

    fahr = upper;
    while (fahr >= lower)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("Fahrenheit: %3.0lf\tCelsius: %6.1lf\n", fahr, celsius);
        fahr = fahr - step;  // increment fahrenheit by step
    }
    return 0;  // indicate successful termination
}