#include <stdio.h>
#include <math.h>

int efunktion() //Aufgabe 6: Expotentialfunktion
{
    double expval = 710;
    printf("\ne hoch %f ergibt %e\n", expval, exp(expval));
}


int main(void)
{

    efunktion();
    return 0;
}


//Ab 710 steht im Ergebnis 1.#INF00e+000
// ->Da das Ergebnis zu groß ist!
//Zahlen der Länge 64 Bit: double
//+-4.941e-324 bis 1.798e+308
