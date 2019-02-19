#include <stdio.h>
#include <math.h>

void aufgabe5(void)
{
    double x; //x ist Basis einer Potenz
    int n, i; //n ist Exponent einer Potenz

    printf("Bitte geben Sie x ein:");
    scanf("%lf", &x);

    printf("Bitte geben Sie n ein:");
    scanf("%i", &n);

    double potenz =1;

    if(n >=0)
    {
        for(i = 1; i <= n; i++)
        {
            potenz = potenz * x;
        }
    printf("%f hoch %i ergibt %f\n", x, n, potenz);
    }
    else
    {
        printf("n muss eine positive Integerzahl sein!");
    }


}


void aufgabe6(void)
{
    int eingabewerte, i; //Anzahl der Eingabewerte
    int zahlen; //Wert der eingegebenen Zahlen
    float sumzahlen, sumzahlenquadrat, mittelwert, teilergebnis; //Summen der Zahlen und der Zahlen im Quadrat
    float varianz, standardabweichung;

    printf("Bitte geben Sie die Anzahl n der Eingabewerte ein:");
    scanf("%i", &eingabewerte);

    sumzahlen = 0;
    sumzahlenquadrat = 0;

    for(i = 1; i <= eingabewerte; i++)
    {
        printf("Bitte geben Sie die %i. Zahl ein: ", i); //i ist counter und erhöht sich bis eingabewert
        scanf("%i", &zahlen);

        sumzahlen = sumzahlen + zahlen;
        sumzahlenquadrat = sumzahlenquadrat + pow(zahlen,2);
    }

    mittelwert = sumzahlen / eingabewerte;
    teilergebnis = sumzahlenquadrat - eingabewerte * pow(mittelwert,2);
    varianz = (1.0 / (eingabewerte - 1)) * teilergebnis;
    standardabweichung = sqrt(varianz);

    printf("Die Standardabweichung ist: %f\n", standardabweichung);

}

int main(void)
{
    aufgabe5();
    aufgabe6();
    return 0;
}

