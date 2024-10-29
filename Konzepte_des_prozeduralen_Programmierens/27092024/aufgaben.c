#include <stdio.h>

int main()
{
    //Aufgabe 1  printf("Hello World!");

    //Aufgabe 2
    //int i = 0;
    //for(int i=0; i <= 10; i++)
    //{
    //    printf("%i\n",i);
    //}

    //Aufgabe 3
    //nt i;

    //rintf("Geben sie eine Zahl ein: ");

    //canf("%d", &i);
    //f(i%2 == 0)
    //
    //   printf("Eingabe ist gerade.\n");
    //
    //lse
    //
    //   printf("Eingabe ist ungerade.\n");
    //
    
    //Augfabe 4
    //int i;
    //int y;
    //
    //printf("Zahl1: ");
    //scanf("%d",&i);
    //printf("Zahl2: ");
    //scanf("%d",&y);
    //
    //i>y ? printf("%d",i) : printf("%d",y);

    //Aufgabe 5
    //for(int i=1; i<=10; i++)
    //{
    //    printf("%d\n",5*i);
    //}

    //Aufgabe 6
    //int i;
    //int y;
    //scanf("%d",&i);
    //scanf("%d",&y);
    //
    //printf("________________________________________________________________\n");
    //printf("%d\n",i+y);
    //printf("%d\n",i-y);
    //printf("%d\n",i*y);
    //printf("%d\n",i/y);
    //printf("%d\n",i%y);

    //Aufgabe 7
    //double i, y, x;
    //double z;
    //
    //scanf("%lf %lf %lf",&i,&y,&x);
    //z = (i+y+x)/3;
    //printf("Durchschnitt: %.2lf\n",z);

    //Aufgabe 8
    //int r;
    //double pi = 3.14159;
    //double area = pi * r * r;
    //
    //printf("Radius: ");
    //scanf("%d",&r);
    //
    //printf("Fläche: %.2lf\n",area);

    //Aufgabe 9
    //int i, y;
    //
    //scanf("%d %d",&i,&y);
    //i%y==0 ? printf("Ganzzahliger Teiler") : printf("Kein Ganzzahliger Teiler");

    //Aufgabe 10
    //int i;
    //int x=0;
    //
    //scanf("%d",&i);
    //while(x<10)
    //{
    //    i += x;
    //    printf("%d\n",i);
    //    x++;
    //}

    //Aufgabe 11
    //int i;
    //printf("Geben sie eine Zahl zwischen 1 und 100 ein: ");
    //scanf("%d",&i);
    //if(i < 100 && i > 1)
    //{
    //    printf("Zahl ist im Zahlenbereich 1 bis 100\n");
    //}

    //Aufgabe 12
    //double i;
    //
    //printf("Geben sie eine Fließkommazahl zum Konmvertieren ein: ");
    //scanf("%lf",&i);
    //printf("Der Konvertierte Wert ist: %.0lf\n",i);

    //Aufgabe 13
    int ary[] = { 5, 1, 4, 9, 0, 8, 6};
    int n = sizeof(ary) / sizeof(ary[0]);
    int i, j, temp;

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ary[j] > ary[j + 1]) {
                // Swap
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }

    // Ausgabe des sortierten Arrays
    printf("Sortiertes Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ary[i]);
    }
}