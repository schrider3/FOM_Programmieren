#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char input[5];  // 5 Zeichen + 1 Nullterminator
    char checkVokal[] = "AEIOU";
    int v = 0, k = 0, n = 0, s = 0;

    printf("\nGeben Sie maximal 5 Zeichen ein: ");
    scanf("%5s", input);  // Limitiert die Eingabe auf 5 Zeichen

    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            if (strchr(checkVokal, toupper(input[i])) != NULL)
            {
                v++;
            }
            else
            {
                k++;
            }
        }
        else if (isdigit(input[i]))
        {
            n++;
        }
        else if (input[i] != NULL)
        {
            printf("%d",s);
            s++;  // Sonstige Zeichen (bspw. Sonderzeichen)
        }
    }

    printf("Vokale: %d Konsonanten: %d Nummern: %d Sonderzeichen: %d\n", v, k, n, s-1);

    return 0;
}
