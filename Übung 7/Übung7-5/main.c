#include <stdio.h>
//Aufgabe 5: Erneute Wertzuweisung
//Einer Variable werden im Programm verschiedene Werte zugewiesen und ausgegeben

int wert()
{
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


int main(void)
{

    wert();
    return 0;
}

