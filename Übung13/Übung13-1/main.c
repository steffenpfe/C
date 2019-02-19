#include <stdio.h>
#include <math.h>

#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define ss (unsigned char)225




void aufgabe1(void)
{
    int rueckzahlungsbetrag =0, gesamtbetrag =0, monat =0;
    float saldo = 1000; //Schuld zu Beginn
    //1.5% Zinsen pro Jahr

    printf("Bitte geben Sie den monatlichen Betrag ein: ");
    scanf("%i", &rueckzahlungsbetrag);


    while(saldo > 0)
    {
        saldo = saldo * 1.015 - rueckzahlungsbetrag;
        gesamtbetrag += rueckzahlungsbetrag;
        monat++;

        printf("Monat: %i, Saldo: %.2f, Gesamtbetrag: %i\n", monat, saldo, gesamtbetrag);

    }


}


void aufgabe2(void)
{
    int monat = 0;
    float effektivitaet = 100;

    while(effektivitaet > 50)
    {
        effektivitaet = effektivitaet * 0.96;
        monat++;

        printf("Monat: %i, Effektivit%ct: %.2f%%\n", monat, ae, effektivitaet);
    }
    printf("Entsorgen!\n");
}


void aufgabe3(void) //Reihenentwicklung e-Funktion
{
    long stellenzahl;
    long fakultaet=1;
    double term = 1, sum = 1;
    int zaehler = 1, x;
    printf("Bitte geben Sie x ein: ");
    scanf("%i", &x);

    printf("Bitte geben Sie die Stellenzahl ein: ");
    scanf("%i", &stellenzahl);

    stellenzahl *= -1; //Soll bis 10hochminus Stellenzahl laufen
    double xterm = x;

    while(term > pow(10, stellenzahl))
    {
        term *= (double) x / zaehler;
        sum += term;

        zaehler++;

        printf("n: %i, term: %f, sum: %f\n", zaehler, term, sum);
    }

    printf("Eigenes e^x: %f\n", sum);
    printf("C-Funktion e^x: %f\n", exp(x));
    printf("Iterationen: %i\n", zaehler);

}


void aufgabe4(void) //Reihenentwicklung sinus!
{
    float x;
    int n = 1, h = 0, fakultaet, i, stellenzahl;
    float term = 1, sum = 1, termbetrag = 1;

    printf("Bitte geben Sie x ein: ");
    scanf("%f", &x);

    printf("Bitte geben Sie die Stellenzahl ein: ");
    scanf("%i", &stellenzahl);

    sum = x; //Erstes Glied der Reihenentwicklung!
    stellenzahl *= -1; //Soll bis 10hochminus Stellenzahl laufen


    while(termbetrag > pow(10, stellenzahl))
    {
        fakultaet = 1; //Fakultät reset auf 1
        h = 2*n + 1;

        for(i = 1; i <= h; i++) //Fakultät berechnen
        {   //Fakultät: zählt: 3,5,7,9....mit h!
            fakultaet *= i;
        }

        term = pow(-1, n) * (pow(x, h) / fakultaet);


        if(term <0)
        {
            termbetrag = (-1) * term;
        }
        else
            termbetrag = term;

        sum += term;

        printf("n: %i, term: %f, sum: %f\n", n, term, sum);

        n++;
    }
    printf("Eigenes sin(x): %f\n", sum);
    printf("C-Funktion sin(x): %f\n", sin(x));
    printf("Iterationen: %i\n", n-1);

}


int main(void)
{
    aufgabe3();

    return 0;
}

