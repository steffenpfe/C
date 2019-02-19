#include <stdio.h>

#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define sz (unsigned char)225

void aufgabe8(void)
{
    int warmzeit, anzahl; //Aufwärmzeit und Anzahl der Produkte

    printf("Bitte geben Sie die Erw%crmungszeit des Produkts in Sekunden ein:", ae);
    scanf("%i", &warmzeit);

    printf("Bitte geben Sie die Anzahl der Produkte ein:");
    scanf("%i", &anzahl);

    if(anzahl > 3 || anzahl < 1)
    {
        if(anzahl >3)
        printf("Fehler: Mehr als drei Produkte\n");

        if(anzahl < 1)
        printf("Flasche Produktzahl\n");
    }
    else
    {
        if(anzahl == 3)
        warmzeit = 2 * warmzeit;

        if(anzahl == 2)
        warmzeit = 0.5 * warmzeit + warmzeit;

        printf("Die Erw%crmungszeit betr%cgt: %i s\n", ae, ae, warmzeit);
    }

}


void aufgabe9(void)
{
    int gewicht; //Gewicht in Pfund

    printf("Bitte geben Sie ihr Gewicht in Pfund ein:");
    scanf("%i", &gewicht);

    if(gewicht <= 265 && gewicht >=235)
    {
        printf("Sie sind f%cr die Schwergewichtsklasse zugelassen\n", ue);
    }
    else
    {
        if(gewicht < 235)
        printf("Sie sind leider zu leicht f%cr die Schwergewichtsklasse\n", ue);

        if(gewicht > 265)
        printf("Sie sind leider zu schwer f%cr die Schwergewichtsklasse\n", ue);
    }
}

void aufgabe10(void) //Skript S.420
{ //Entscheidungsbaum ->3 Zahlenwerte sortieren
    int zahl1, zahl2, zahl3;

    printf("Erste Zahl:");
    scanf("%i", &zahl1);

    printf("Zweite Zahl:");
    scanf("%i", &zahl2);

    printf("Dritte Zahl:");
    scanf("%i", &zahl3);

    if(zahl1 < zahl2)
    {
        if(zahl2 < zahl3)
        printf("%i, %i, %i\n", zahl1, zahl2, zahl3);
        else
        {
        if(zahl1 < zahl3)
        printf("%i, %i, %i\n", zahl1, zahl3, zahl2);
        else
        printf("%i, %i, %i\n", zahl3, zahl1, zahl2);
        }
    }
    else
    {
        if(zahl1 < zahl3)
        printf("%i, %i, %i\n", zahl2, zahl1, zahl3);
        else
        {
        if(zahl2 < zahl3)
        printf("%i, %i, %i\n", zahl2, zahl3, zahl1);
        else
        printf("%i, %i, %i\n", zahl3, zahl2, zahl1);
        }
    }
}

int main(void)
{
    aufgabe8();
    aufgabe9();
    aufgabe10();
    return 0;
}
