#include <stdio.h>
#include <math.h>

//Aufgabe 1
float convert(float fahr)
{
    return 5 * (fahr - 32) / 9;
}

//Aufgabe 2
//float kugel(float radius)
//{
//    return 4.0/3.0*3.14159*pow(radius, 3);
//}

//Aufgabe 3
double nullstellen_p(int a, int b, int c)
{
    return (-b + sqrt(pow(b, 2) - 4.0*a*c)) / (2.0*a);
}
double nullstellen_m(int a, int b, int c)

{
    return (-b - sqrt(pow(b, 2) - 4.0*a*c)) / (2.0*a);
}

int main()
{
    //Aufgabe 1
    //float celsius, fahr;;
    //printf("Enter temperature in Fahrenheit: ");
    //scanf("%f", &fahr);
    //celsius = convert(fahr);
    //printf("Fahrenheit: %3.0lf\tCelsius: %6.1lf\n", fahr, celsius);

    //Aufgabe 2
    //float radius;
    //printf("Enter the radius of the sphere: ");
    //scanf("%f", &radius);
    //float volume = kugel(radius);
    //printf("Volume of the sphere: %.2f\n", volume);

    //Aufgabe 3
    //int a, b ,c;
    //double x1, x2;
    //printf("Gebe Zahl a ein: ");
    //scanf("%d", &a);
    //printf("Gebe Zahl b ein: ");
    //scanf("%d", &b);
    //printf("Gebe Zahl c ein: ");
    //scanf("%d", &c);
    //x1 = nullstellen_p(a, b, c);
    //x2 = nullstellen_m(a, b, c);
//
//
//
    //printf("Die Nullstelle sind: x1 = %.2f, x2 = %.2f", x1, x2);

    //Aufgabe 5
    //Taschenrechner
    int eingabe = 0;  // Variable initialisieren
    while (1) {
        int a, b;
        printf("Bitte waehlen Sie aus, was Sie machen wollen:\n");
        printf("1. +\n2. -\n3. *\n4. /\n5. Programm Beenden\n");
        
        // Eingabe lesen
        printf("\nIhre Auswahl: ");
        scanf("%i", &eingabe);
        printf("\e[1;1H\e[2J");

        // Überprüfen, ob die Eingabe 5 ist, um das Programm zu beenden
        if (eingabe == 5) {
            printf("Programm wird beendet\n");
            break;
        }

        // Switch-Block für die Rechenoperationen
        switch (eingabe) {
            case 1:
                printf("Bitte geben Sie zwei Zahlen ein: ");
                scanf("%i %i", &a, &b);
                printf("Ergebnis: %i\n", a + b);
                break;
            case 2:
                printf("Bitte geben Sie zwei Zahlen ein: ");
                scanf("%i %i", &a, &b);
                printf("Ergebnis: %i\n", a - b);
                break;
            case 3:
                printf("Bitte geben Sie zwei Zahlen ein: ");
                scanf("%i %i", &a, &b);
                printf("Ergebnis: %i\n", a * b);
                break;
            case 4:
                printf("Bitte geben Sie zwei Zahlen ein: ");
                scanf("%i %i", &a, &b);
                printf("Ergebnis: %i\n", a / b);
                break;
            default:
                printf("Ungueltige Auswahl. Bitte versuchen Sie es erneut.\n");
                break;
        }
    }
    return 0;
}