#include <stdio.h>
#include <math.h>

void aufgabe1(void)
{
    int startwert, endwert;

    printf("Bitte geben Sie den Startwert ein:");
    scanf("%i", &startwert);

    printf("Bitte geben Sie den Endwert ein:");
    scanf("%i", &endwert);

    int i;
    for(i = startwert; i <= endwert; i++)
        printf("%i\n", i);
}

void aufgabe2(void)
{
    int anzahl, zahl, i;

    printf("Wie viele Integerwerte sollen addiert werden:");
    scanf("%i", &anzahl);

    int summe = 0;
    for(i = 0; i < anzahl; i++)
    {
        printf("Geben Sie bitte einen Integerwert ein: ");
        scanf("%i", &zahl);

        summe += zahl; // summe += zahl

    }
    printf("Die Summe ist %i\n", summe);

}

void aufgabe3(void)
{
    int n, i; //i ist eine "Hilfsvariable" für for
    //n ist Wert bis zu dem berechnet werden soll
    float sum; //Summe als Gleitkommazahl
    printf("Bitte geben Sie die Anzahl n der Summanden ein:");
    scanf("%i", &n);

    for(i = 1; i <= n; i++)
    {
        sum += 1.0/i;
    }

    printf("Die Summe ist: %f\n", sum);
}

void aufgabe4(void)
{
    int n, i;

    printf("Bitte geben Sie n ein: ");
    scanf("%i", &n);


    int quadratsum = 0; //Wichtig sonst geht es nicht!!!
    int kubiksum = 0;

    for(i = 1; i <= n; i++)
    {
        quadratsum += pow(i,2);
        kubiksum += pow(i,3);
    }
    printf("Die Quadratsumme ist: %i\n", quadratsum);
    printf("Die Kubiksumme ist: %i\n", kubiksum);
}

int main(void)
{
    aufgabe1();
    aufgabe2();
    aufgabe3();
    aufgabe4();
    return 0;
}
