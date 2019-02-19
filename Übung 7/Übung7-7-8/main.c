#include <stdio.h>
#include <math.h>

//Aufgabe 7: Trigonometrie
//Berechnen von Sin und Cos und der Summe der Quadrate
//Die Summe bleibt 1!!

int trigonometrie()
{
    float grad = 30;
    float bogenmass = grad * (M_PI / 180); //Umrechner Grad in Bogenmaß

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


int main(void)
{
    trigonometrie();
    return 0;
}
