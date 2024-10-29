#include <stdio.h>

int main() {
    // Mehrdimensionales Array zur Speicherung der Buchinformationen
    char library[2][4][30] = {
        {"Goethe", "Feuerwasser", "Klassik", "22"},
        {"Gustavo", "TwistesGames", "Fantasy", "54"}
    };

    // Ausgabe der Bibliothek
    printf("%-10s %-15s %-10s %-5s\n", "Autor", "Titel", "Genre", "Seiten");
    printf("------------------------------------------------\n");

    for (int i = 0; i < 2; i++) {
        printf("%-10s %-15s %-10s %-5s\n", library[i][0], library[i][1], library[i][2], library[i][3]);
    }

    return 0;
}
