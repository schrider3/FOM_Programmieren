#include <stdio.h>
#include <string.h>

int main() {
    char bib[10][4][50] = {{" "," "," "," "}}; //Anzahl Bücher, Autor+Titel+Genre+Seiten, Länge Text pro Feld
    int auswahl = 0;
    char erneut = ' ';
    int i = 0;

    do
    {
        printf("WILLKOMEN IN DER BIB !!!\n\n");
        printf("________________________________________________________________\n\n");
        printf("Möchten sie: \n[1] Ein Buch anlegen\n[2] DIe Bibliothek anzeigen\n");
        printf("________________________________________________________________\n\n");
        scanf("%d", &auswahl);

        if(auswahl == 1)
        {
            printf("Ein neues Buch für die BIB anlegen\n");
            printf("________________________________________________________________\n\n");
            printf("Bitte geben Sie den Titel des Buches ein: ");
            scanf("%s", bib[i][0]);

            printf("Bitte geben Sie den Autor des Buches ein: ");
            scanf("%s", bib[i][1]);

            printf("Bitte geben Sie den Genre des Buches ein: ");
            scanf("%s", bib[i][2]);

            printf("Bitte geben Sie die Seitenanzahl des Buches ein: ");
            scanf("%s", bib[i][3]);
            i++;
        }
        else if(auswahl == 2)
        {
            printf("BIB wird angezeigt\n");
            printf("\n%s %s %s %s\n", "Autor", "Titel", "Genre", "Seiten");
            printf("________________________________________________________\n");

            for (int k = 0; k < 10; k++) {
                printf("%s %s %s %s\n", bib[k][0], bib[k][1], bib[k][2], bib[k][3]);
            }

        }
        printf("Wollen sie noch etwas tun? [y|n]");
        scanf(" %c", &erneut);
    } while (erneut == 'y');
    
    return 0;
}