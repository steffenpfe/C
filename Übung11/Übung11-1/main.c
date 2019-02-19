#include <stdio.h>


void aufgabe1(void) //Keil mit Sternen
{
    int breite, anzahlzeilen, i; //Breite des Keils
    int sterne; //Hilfsvariable für for zum Zählen der Sterne

    printf("Bitte geben Sie die Breite des Keils ein:");
    scanf("%i", &breite);

    anzahlzeilen = breite; //Beide gleich aber zur Anschaulichkeit

    for(i = anzahlzeilen; i >= 0; i--)
    {
        for(sterne = 1; sterne <= i; sterne++)
        {
        printf("*");
        }
    printf("\n");
    }
}

void aufgabe2(void)
{
    int breitebaumkrone, breitebaumstamm, hoehebaumstamm;
    int leerzeilen, sterne, zeile, i;
    int h, leerzeilenstamm, sternestamm, k;

    printf("Bitte geben Sie die Breite der Baumkrone ein:");
    scanf("%i", &breitebaumkrone);

    printf("Bitte geben Sie die Breite des Baumstamms ein:");
    scanf("%i", &breitebaumstamm);

    printf("Bitte geben Sie die Höhe des Baumstamms ein:");
    scanf("%i", &hoehebaumstamm);

//1.for: Für Zeilensprung! Zeile um 2 inkrementiert, da pro
//pro Zeile zwei Strene dazukommen. Also die Hälfte der Baumkrone
//ist die Höhe (Zeilen) der Krone.
//2.for: Für die Leerzeilen. Diese sind von der Zeile abhängig
//und werden auch immer pro Zeile 2 weniger!!
//3.for: Sterne nehmen immer um zwei zu, aber da die Zeilen schon
//immer um zwei hochgezählt werden muss man nur 1 hinzufügen.

    //Baumkrone
    for(zeile = 1; zeile <= breitebaumkrone; zeile += 2)
    {
        leerzeilen = breitebaumkrone - zeile;
        for(i = 1; i <= leerzeilen; i += 2)
        {
            printf(" ");
        }
        for(sterne = 1; sterne <= zeile; sterne++)
        {
            printf("*");
        }
        printf("\n");
    }


    //Baumstamm
    for(h = 1; h <= hoehebaumstamm; h++)
    {
        leerzeilenstamm = (breitebaumkrone - breitebaumstamm) / 2;
        for(k = 1; k <= leerzeilenstamm; k++)
        {
            printf(" ");
        }
        for(sternestamm =1; sternestamm <= breitebaumstamm; sternestamm++)
        {
            printf("*");
        }
    printf("\n");
    }



}

int main(void)
    {
        aufgabe1();
        aufgabe2();
        return 0;
    }

