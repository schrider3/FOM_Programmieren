#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char input;
    char checkVokal[] = "AEIOU";
    int isVokal = 0; // Variable zum Überprüfen, ob ein Vokal gefunden wurde
    int arraySize = strlen(checkVokal); // Größe des Arrays ermitteln

    printf("Geben Sie einen Character ein: ");
    scanf("%c", &input);

    if (isalpha(input))
    {
        for (int i = 0; i < arraySize; i++)
        {
            if (toupper(input) == checkVokal[i])
            {
                isVokal = 1; // Vokal gefunden
                break; // Schleife verlassen
            }
        }

        if (isVokal)
        {
            printf("Der eingegebene Character '%c' ist ein Vokal.\n", input);
        }
        else
        {
            printf("Der eingegebene Character '%c' ist ein Konsonant.\n", input);
        }
    }
    else if (isdigit(input))
    {
        printf("Der eingegebene Character '%c' ist eine Ziffer.\n", input);
    }
    return 0;
}
