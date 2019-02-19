#include <stdio.h>


double polynomEvaluation(double pa3, double pa2, double pa1, double pa0, double px)
{
    pa3 = 90.0; // Übergebene Parameterwerte werden in
    pa2 = 80.0; // der Funktion durch neue Werte
    pa1 = 70.0; // überschrieben. Dies ist möglich, da
    pa0 = 60.0; // Parameter wie normale Variablen benutzt
    px  = 30.0; // werden können.

    return(((pa3*px + pa2)*px + pa1)*px + pa0);
}


int main(void)
{
    double a3 = 9.0, a2 = 8.0, a1 = 7.0, a0 = 6.0, x = 3.0;
    printf("a3 %f, a2 %f, a1 %f, a0 %f, x %f,\n", a3, a2, a1, a0, x);

    double p = polynomEvaluation(a3, a2, a1, a0, x);

    printf("p = %.3f\n", p);
    return 0;
}
