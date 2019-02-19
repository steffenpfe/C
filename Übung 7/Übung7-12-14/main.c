#include <stdio.h>
#include <math.h>
#define G 9.81

#define AE (unsigned char)142; //Präpozessor-Direktive
#define ae (unsigned char)132; //Damit kann man Konstanten
#define OE (unsigned char)153; //definieren, die später nicht mehr geändert
#define oe (unsigned char)148; //werden können
#define UE (unsigned char)154; //KONSTANTENNAMEN IN GROSSBUCHSTABEN
#define ue (unsigned char)129;
#define sz (unsigned char)225;

int stein() //Aufgabe 12: Fallender Stein
{
    double sec, weg;
    printf("Bitte geben Sie die Sekunden ein:");
    scanf("%lf", &sec);
    weg = 0.5 * G * pow(sec, 2);
    printf("Die zur%cckgelegte Strecke ist: %3.2f m.\n", (unsigned char)129, weg);
}

int mittelwert() //Aufgabe 13: Mittelwertberechnung
{
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

int loga() //Aufgabe 14: Logarithmus
{
    double z; //Zahl die logarithmiert werden soll
    printf("Bitte geben Sie eine Gleitkommazahl ein:");
    scanf("%lf", &z); //Einlesen der Zahl
    double logarith; //Das Ergebnis, der Log2
    logarith = log(z) / log(2); //Berechnung 2er Logarithmus durch natürlichen Logarithmus
    printf("Der Zweierlogarithmus betr%cgt: %.6f\n", (unsigned char)132, logarith);
}


int main(void)
{
    stein();
    mittelwert();
    loga();
    return 0;
}

