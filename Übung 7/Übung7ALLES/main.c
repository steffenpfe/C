#include <stdio.h>
#include <math.h>

#define G 9.81
#define PI 3.14159 //Wert für PI bestimmen

#define AE (unsigned char)142; //Präpozessor-Direktive
#define ae (unsigned char)132; //Damit kann man Konstanten
#define OE (unsigned char)153; //definieren, die später nicht mehr geändert
#define oe (unsigned char)148; //werden können
#define UE (unsigned char)154; //KONSTANTENNAMEN IN GROSSBUCHSTABEN
#define ue (unsigned char)129;
#define sz (unsigned char)225;


void niederschlag() //Aufgabe 3: Durchschnittliche Niederschlagsmenge
{
    printf("\nAUFGABE 3\n");
    float april = 12.0;
    float mai = 14.0;
    float juni = 8.0;
    printf("Niederschl%cge:\n",(unsigned char)132);
    printf("April: %2.1f\n", april);
    printf("Mai: %2.1f\n", mai);
    printf("Juni: %2.1f\n", juni);
    printf("Durchschnitt: %2.1f\n\n", (april + mai + juni)/3);
}

void wert4() //Aufgabe 4: Wert einer Quadratgleichung
{
    printf("\nAUFGABE 4\n");
    double x;
    scanf("%lf", &x);
    printf("Eingelesener Wert: %f", x);
    double ergebnis = 3 * x * x - 8 * x + 4;
    printf("\n\nBei x = %.2f ergibt die Quadratgleichung den Wert %.2f\n", x, ergebnis);
}


void wert5() //Aufgabe 5: Erneute Wertzuweisung
{          //Einer Variable werden im Programm verschiedene Werte zugewiesen und ausgegeben
    printf("\nAUFGABE 5\n");
    double x;
    x = 0.0;
    printf("Eingelesener Wert: %f", x);
    double ergebnis = 3 * x * x - 8 * x + 4;
    printf("\n\nBei x = %.2f ergibt die Quadratgleichung den Wert %.2f\n", x, ergebnis);
    x = 2.0;
    printf("\n\nBei x = %.2f ergibt die Quadratgleichung den Wert %.2f\n", x, ergebnis);
    x = 4.0;
    printf("\n\nBei x = %.2f ergibt die Quadratgleichung den Wert %.2f\n", x, ergebnis);
}


void efunktion() //Aufgabe 6: Expotentialfunktion
{
    printf("\nAUFGABE 6\n");
    double expval = 710;
    printf("\ne hoch %f ergibt %e\n", expval, exp(expval));
}
//Ab 710 steht im Ergebnis 1.#INF00e+000
// ->Da das Ergebnis zu groß ist!
//Zahlen der Länge 64 Bit: double
//+-4.941e-324 bis 1.798e+308


void trigonometrie() //Aufgabe 7: Trigonometrie
{                   //Berechnen von Sin und Cos und der Summe der Quadrate ->Die Summe bleibt 1!!
    printf("\nAUFGABE 7\n");
    float grad = 30;
    float bogenmass = grad * (M_PI / 180); //Umrechner Grad in Bogenmaß (Aufg. 8)

    double x , y , erg;
        x = sin(bogenmass);
        y = cos(bogenmass);
        erg = pow(x,2) + pow(y,2);
    printf("Eingegebener Wert in Grad: %f\n", grad);
    printf("Errechneter Wert in Bogenmass: %f\n", bogenmass);
    printf("Sinus: %.6f\n", x); //%f ist Gleitkommazahl ohne Exponentenanteil
    printf("Cosinus: %.6f\n", y); //%e ist mit Exponentenanteil
    printf("Summe: %.6f\n", erg);
}


void radius() //Aufgabe 9: Fläche eines Kreises einlesen und berechnen
{
    printf("\nAUFGABE 9\n");
    int x; //Radius //int da Radius als ganze Zahl eingelesen wird!
    printf("Bitte den Radius eingeben!\n");
    scanf("%i",&x);
    printf("Der Radius betr%cgt: %i\n", (unsigned char)132 , x);
    float a = PI * x * x;
    printf("Die Fl%cche betr%cgt: %3.6f\n", (unsigned char)132 , (unsigned char)132 , a);
}


void ohm() //Übung 10: Ohmscher Widerstand ausrechnen nach Eingabe
{
    printf("\nAUFGABE 10\n");
    int u, r; //u=Spannung, r=Widerstand
    printf("Geben Sie die Spannung in ganzen Volt ein:\n");
    scanf("%i", &u); //Nach Spannung suchen
    printf("Geben Sie den Widerstand in ganzen Ohm ein:\n");
    scanf("%i", &r); //Nach Widerstand suchen
    float i; //i=Stromstärke --> Ampere
    i = (float) u / r; //Stromstärke berechnen
    printf("Die Stromst%crke ist %.3f Ampere.\n",(unsigned char)132, i);
}

void stromkosten() //Übung 11: Stromkosten
{
    printf("\nAUFGABE 11\n");
    double p, v; //p=Preis pro Kilowattstunde , v=Verbrauch ->Anzahl Kwh
    printf("Bitte geben Sie den Preis pro Kilowattstunde in Cent ein:\n");
    scanf("%lf", &p); //%lf für long float, da double Werte eingelesen werden
    printf("Bitte geben Sie die Anzahl der Kilowattstunden ein:\n");
    scanf("%lf", &v);
    float k; //k=Kosten gesamt
    k = (p / 100) * v;
            printf("Die Stromkosten betragen %2.2f Euro\n", k);
}


void stein() //Aufgabe 12: Fallender Stein
{
    printf("\nAUFGABE 12\n");
    double sec, weg;
    printf("Bitte geben Sie die Sekunden ein:");
    scanf("%lf", &sec);
    weg = 0.5 * G * pow(sec, 2);
    printf("Die zur%cckgelegte Strecke ist: %3.2f m.\n", (unsigned char)129, weg);
}


void mittelwert() //Aufgabe 13: Mittelwertberechnung
{
    printf("\nAUFGABE 13\n");
    double x, y, z; //Drei Gleitkommazahlen
    printf("Bitte geben Sie drei Gleitkommazahlen ein:");
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    double ma, mg, mh; //bei mg wieder type cast, da sonst Ergebnis = 0
    ma = 1.0/3 * (x + y + z); //arithmetisches Mittel
    mg = pow(x, 1.0/3) * pow(y, 1.0/3) * pow(z, 1.0/3); //geometrische Mittel
    mh = 3 / (1/x + 1/y + 1/z); //harmonische Mittel
    printf("Arithmetrisches Mittel: %lf\n", ma);
    printf("Geometrisches Mittel: %lf\n", mg);
    printf("Harmonisches Mittel: %lf\n", mh);
}


void loga() //Aufgabe 14: Logarithmus
{
    printf("\nAUFGABE 14\n");
    double z; //Zahl die logarithmiert werden soll
    printf("Bitte geben Sie eine Gleitkommazahl ein:");
    scanf("%lf", &z); //Einlesen der Zahl
    double logarith; //Das Ergebnis, der Log2
    logarith = log(z) / log(2); //Berechnung 2er Logarithmus durch natürlichen Logarithmus
    printf("Der Zweierlogarithmus betr%cgt: %.6f\n", (unsigned char)132, logarith);
}







int main(void)
{
    niederschlag();
    wert4();
    wert5();
    efunktion();
    trigonometrie();
    radius();
    ohm();
    stromkosten();
    stein();
    mittelwert();
    loga();
    return 0;
}









