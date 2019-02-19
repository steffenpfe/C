#include <stdio.h>

void aufgabe3(void)
{
    int untergrenze, obergrenze, zahl;
    int sumin = 0, sumout = 0;

    printf("Untergrenze des Bereichs: ");
    scanf("%i", &untergrenze);

    printf("Obergrenze des Bereichs: ");
    scanf("%i", &obergrenze);


    do
    {
        printf("Ganze Zahl eingeben: ");
        scanf("%i", &zahl);

        if(zahl > obergrenze || zahl < untergrenze)
        {
            sumout += zahl;
        }
        else
        {
            sumin += zahl;
        }
    }
    while(zahl != 0);
    {
        printf("Summe der Werte innerhalb des Bereichs: %i\n", sumin);
        printf("Summe der Werte außerhalb des Bereichs: %i\n", sumout);
    }



}


void aufgabe4(void)
{
    int gewicht = 0;
    float kosten = 0;


    do
    {
        printf("Gewicht der Sendung: ", gewicht);
        scanf("%i", &gewicht);

        if(gewicht >0)
        {
            if(gewicht <= 10)
            {
                kosten = 3;
                printf("Versandkosten: %.2f\n", kosten);

            }
            else
            {
                kosten = (gewicht -10) * 0.25 + 3;
                printf("Versandkosten: %.2f\n", kosten);
            }
        }

    }
    while(gewicht > 0);
    printf("Ade\n");
}





int main(void)
{
    aufgabe3();
    aufgabe4();
    return 0;
}

