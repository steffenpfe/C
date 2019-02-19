#include <stdio.h>

#define AE (unsigned char)142; //Präpozessor-Direktive
#define ae (unsigned char)132; //Damit kann man Konstanten
#define OE (unsigned char)153; //definieren, die später nicht mehr geändert
#define oe (unsigned char)148; //werden können
#define UE (unsigned char)154; //KONSTANTENNAMEN IN GROSSBUCHSTABEN
#define ue (unsigned char)129;
#define sz (unsigned char)225;


int niederschlag() //Aufgabe 3: Durchschnittliche Niederschlagsmenge
{
    float april = 12.0;
    float mai = 14.0;
    float juni = 8.0;
    printf("Niederschl%cge:\n",(unsigned char)132);
    printf("April: %2.1f\n", april);
    printf("Mai: %2.1f\n", mai);
    printf("Juni: %2.1f\n", juni);
    printf("Durchschnitt: %2.1f\n\n", (april + mai + juni)/3);
}

int wert() //Aufgabe 4: Wert einer Quadratgleichung
{
    double x;
    scanf("%lf", &x);
    printf("Eingelesener Wert: %f", x);
    double ergebnis = 3 * x * x - 8 * x + 4;
    printf("\n\nBei x = %.2f ergibt die Quadratgleichung den Wert %.2f\n", x, ergebnis);
}



int main(void)
{
    niederschlag();
    wert();
    return 0;
}
