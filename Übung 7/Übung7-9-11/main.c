#include <stdio.h>
#include <math.h>

#define PI 3.14159 //Wert für PI bestimmen
#define ae (unsigned char)132
int radius() //Aufgabe 9: Fläche eines Kreises einlesen und berechnen
{
    int x; //Radius //int da Radius als ganze Zahl eingelesen wird!
    printf("Bitte den Radius eingeben!\n");
    scanf("%i",&x);
    printf("Der Radius betr%cgt: %i\n", (unsigned char)132 , x);
    float a = PI * x * x;
    printf("Die Fl%cche betr%cgt: %3.6f\n", (unsigned char)132 , (unsigned char)132 , a);
}

//Übung 10: Ohmscher Widerstand ausrechnen nach Eingabe
int ohm()
{
    int u, r; //u=Spannung, r=Widerstand
    printf("Geben Sie die Spannung in ganzen Volt ein:\n");
    scanf("%i", &u); //Nach Spannung suchen
    printf("Geben Sie den Widerstand in ganzen Ohm ein:\n");
    scanf("%i", &r); //Nach Widerstand suchen
    float i; //i=Stromstärke --> Ampere
    i = (float) u / r; //Stromstärke berechnen
    printf("Die Stromst%crke ist %.3f Ampere.\n",(unsigned char)132, i);
}

int stromkosten() //Übung 11: Stromkosten
{
    double p, v; //p=Preis pro Kilowattstunde , v=Verbrauch ->Anzahl Kwh
    printf("Bitte geben Sie den Preis pro Kilowattstunde in Cent ein:\n");
    scanf("%lf", &p); //%lf für long float, da double Werte eingelesen werden
    printf("Bitte geben Sie die Anzahl der Kilowattstunden ein:\n");
    scanf("%lf", &v);
    float k; //k=Kosten gesamt
    k = (p / 100) * v;
            printf("Die Stromkosten betragen %2.2f Euro\n", k);
}





int main(void)
{
    radius();
    ohm();
    stromkosten();
    return 0;
}

