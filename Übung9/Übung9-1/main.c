#include <stdio.h>

#define AE (unsigned char)142 //Präpozessor-Direktive
#define ae (unsigned char)132 //Damit kann man Konstanten
#define OE (unsigned char)153 //definieren, die später nicht mehr geändert
#define oe (unsigned char)148 //werden können
#define UE (unsigned char)154 //KONSTANTENNAMEN IN GROSSBUCHSTABEN
#define ue (unsigned char)129 //Keine ;;;; Nach define!!!
#define sz (unsigned char)225


void aufgabe1(void)
{
    double preis, versand, gesamt, versand1, express;

    printf("Geben Sie den Preis ein: ");
    scanf("%lf", &preis);

    printf("Expressversand (0==nein, 1==ja): ");
    scanf("%lf", &express); //Entscheidung ob Expressversand ja oder nein

    if(preis>=1000)
    {
        versand = 3;
    }
    else
    {
        versand = 2;
    }

    if(express == 1)
    {
        versand1 = versand + 5;
    }
    else
    {
        versand1 = versand;
    }

    preis = preis / 100.0; //Preis umrechnung in Euro
    gesamt = preis + versand1;

    printf("Rechnung:\n");
    printf("Preis: %.2f\n", preis);
    printf("Versand: %.2f\n", versand1);

    printf("Gesamt: %.2f\n", gesamt);

}

void aufgabe2(void)
{
    double utemp, dtemp, utempk, dtempk, wirkungsgrad; //Umgebungstemperatur und Dampftemperatur in Celsius und Kelvin

    printf("Umgebungstemperatur: "); //Alle Werte einlesen
    scanf("%lf", &utemp);

    printf("Dampftemperatur: ");
    scanf("%lf", &dtemp);

    utempk = utemp + 273.15; //Umrechnung von Celsius in Kelvin
    dtempk = dtemp + 273.15; //In neuer Variable abspeichern

    if(dtempk < 373.15)
    {
        wirkungsgrad = 0;
        printf("Keine Dampfbildung, Wirkungsgrad gleich 0\n");
    }
    else
    {
        wirkungsgrad = (1 - utempk / dtempk) *100;
        printf("Maximaler thermischer Wirkungsgrad: %.2f%\n", wirkungsgrad);
    }



}

void aufgabe3(void)
{
    int stark, gesund, glueck, punkte; //Drei Charakterwerte Stärke, Gesundheit und Glück

    printf("Willkommen im Rollenspiel.\n");
    printf("Bitte weisen Sie ihrem Charakter Punktwerte zu: \n");

    printf("St%crke: ", ae); //Werte einlesen
    scanf("%i", &stark);

    printf("Gesundheit: ");
    scanf("%i", &gesund);

    printf("Gl%cck: ", ue);
    scanf("%i", &glueck);

    punkte = stark + gesund + glueck; //Gesamtpunktzahl ermitteln!

    if(punkte>15)
    { //Wenn zu viele Punkte vergeben:
        printf("Sie haben ihrem Charakter zu viele Punkte gegeben.\n");
        printf("Es wurden deshalb Standartwerte zugewiesen: \n\n");
        printf("St%crke -> 5, Gesundheit -> 5, Gl%cck -> 5\n", ae, ue);
    }
    else
    { //Anzeige der vergebenen Punkte
        printf("Ihre Charakterpunkte sind: \n");
        printf("St%crke -> %i, Gesundheit -> %i, Gl%cck -> %i\n", ae, stark, gesund, ue, glueck);
    }
}

void aufgabe4(void)
{
    int geldeingang, guthaben;

    printf("Willkommen bei der Geldbank.\n");
    printf("Bitte geben Sie Ihren Geldeingang und Ihr Guthaben ein.\n");

    printf("Geldeingang: "); //Werte einlesen
    scanf("%i", &geldeingang);

    printf("Guthaben: ");
    scanf("%i", &guthaben);

    if(geldeingang>2000 || guthaben>15000)
    {
    printf("Gl%cckwunsch! Wir erheben keine Kontogeb%chren!\n", ue, ue);
    }
    else
    {
    printf("Wir m%cssen bei Ihnen leider Kontogeb%chren erheben.\n", ue, ue);
    }
}



int main(void)
{
    aufgabe1();
    aufgabe2();
    aufgabe3();
    aufgabe4();
    return 0;
}

