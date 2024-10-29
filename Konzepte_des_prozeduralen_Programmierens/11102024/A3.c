#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char eingabe[5];

    printf("\nGeben sie mit max 5 Zeichen ein: ");

    scanf("%s",&eingabe);

    for(int i=strlen(eingabe)-1; i>=0; i--)
    {
        printf("%c", eingabe[i]);
    }

    return 0;
}