#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char eingabe[5];

    printf("\nGeben sie mit max 5 Zeichen ein: ");

    scanf("%s",&eingabe);

    for(int i=0; i<5; i++)
    {
        if(islower(eingabe[i]))
        {
            eingabe[i] = toupper(eingabe[i]);
        }
        else if(isupper(eingabe[i]))
        {
            eingabe[i] = tolower(eingabe[i]);
        }
    }
    
    printf("Der geänderte Text ist: %s\n", eingabe);

    return 0;
}