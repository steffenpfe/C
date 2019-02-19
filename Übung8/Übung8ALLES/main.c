#include <stdio.h>
#include <math.h>

#define AE (unsigned char)142; //Präpozessor-Direktive
#define ae (unsigned char)132; //Damit kann man Konstanten
#define OE (unsigned char)153; //definieren, die später nicht mehr geändert
#define oe (unsigned char)148; //werden können
#define UE (unsigned char)154; //KONSTANTENNAMEN IN GROSSBUCHSTABEN
#define ue (unsigned char)129;
#define sz (unsigned char)225;

void aufgabe2(void) //Aufgabe 2: Discounterpreis
{
    double betrag, preis;
    double rabatt = 10;

    printf("Bitte geben Sie den Gesamtbetrag ein:");
    scanf("%lf", &betrag);

    preis = betrag - betrag * (rabatt / 100);

    if(betrag> 10)
    {
        printf("Der Discountpreis ist: %.2f\n", preis);
    }
    else
    {
        printf("Der Preis ist %.2f, da es keinen Rabatt f%cr Sie gibt\n\n", betrag, (unsigned char)129);
    }
}

void aufgabe3(void) //Aufgabe 3:Überprüfung der Bestellung
{
    int schraube, mutter, unterleg;
    double betrag;

    printf("Bitte geben Sie die Anzahl der Schrauben ein: ");
    scanf("%i", &schraube);

    printf("Bitte geben Sie die Anzahl der Muttern ein: ");
    scanf("%i", &mutter);

    printf("Bitte geben Sie die Anzahl der Unterlegscheiben ein: ");
    scanf("%i", &unterleg);

    if(schraube != mutter)
        {
            printf("Kontrollieren Sie Ihre Bestellung.");
        }
    else
        {
            printf("Die Bestellung ist in Ordnung.");
        }

    betrag = 5 * schraube + 3 * mutter + 1 * unterleg;
    printf("Gesamtbetrag: %.2f\n\n", betrag);
}

void aufgabe4(void) //Aufgabe 4: Letze Tankmöglichkeit vor Death Valley
{
    int tank, anzeige, verbrauch, weite; //Es werden ganze Zahlen eingelesen und ausgegeben

    printf("Tankkapazit%ct in Gallonen: ", (unsigned char)132);
    scanf("%i", &tank);

    printf("Benzinanzeige in %: ");
    scanf("%i", &anzeige);

    printf("Bezinverbrauch in Meilen pro Gallone: ");
    scanf("%i", &verbrauch);

    // Berechnung wie weit das Auto mit den angegebenen Daten kommt:
    weite = tank * verbrauch * anzeige /100;

    //Entscheidung Weiterfahren oder Tanken: 200Meilen bis Tanke
    if(weite>=200)
    {
        printf("\nWeiterfahren.\n");
    }
    else
    {
        printf("Tanken!\n");
    }

}

void aufgabe5(void) //Aufgabe 5: Hackfleischangebote vergleichen
{
    double kiloa, kilob, fleischa, fleischb; //Kilopreis und Prozentualer fleischanteil

    printf("Kilopreis Paket A: ");
    scanf("%lf", &kiloa); //Kilopreis einlesen

    printf("Prozentualer Fleischanteil Paket A: ");
    scanf("%lf", &fleischa); //Prozentualen Fleischanteil einlesen

    printf("Kilopreis Paket B: ");
    scanf("%lf", &kilob);

    printf("Prozentualer Fleischanteil Paket B: ");
    scanf("%lf", &fleischb);

    kiloa = kiloa / (fleischa / 100);
    kilob = kilob / (fleischb / 100);

    printf("\nKilopreis des Fleischanteils von Paket A: %.2f\n", kiloa);
    printf("Kilopreis des Fleischanteils von Paket B: %.2f\n", kilob);

    if(kiloa >kilob)
    {
        printf("Paket B besitzt den besseren Preis\n");
    }
    else
    {
        printf("Paket A besitzt den besseren Preis\n");
    }
}

void aufgabe6(void)
{
    int geburtsjahr, aktjahr, alter; //Geburtsjahr  ohne Jahrhundert und aktuelles Jahr

    printf("Geburtsjahr:");
    scanf("%i", &geburtsjahr);

    printf("Aktuelles Jahr:");
    scanf("%i", &aktjahr);

    if(geburtsjahr>=18)
    {
        alter = 100 - geburtsjahr + aktjahr;
        printf("Ihr Alter: %i\n", alter);
    }
    else
    {
        alter = aktjahr - geburtsjahr;
        printf("Ihr Alter: %i\n", alter);
    }
}





int main(void)
{
    aufgabe2();
    aufgabe3();
    aufgabe4();
    aufgabe5();
    aufgabe6();
    return 0;
}

