#include <stdio.h>
#include <math.h>

#define PI 3.1415926



void aufgabe3(void)
{
    int amplitude, i, zeile;
    double frequenz, periodendauer, wert, sinwert, leerzeilen;

    printf("Bitte geben Sie die Amplitude ein: ");
    scanf("%i", &amplitude);

    printf("Bitte geben Sie die Frequenz ein: ");
    scanf("%lf", &frequenz);


    periodendauer = 37 / frequenz; //Länge für eine Periode berechnen
    wert = (2* PI) / periodendauer;
//Der Wert ist ein Teil der Funktion die den Wert des Sinus bestimmt
//Dieser Sinuswert ist jedoch von der Zeile abhängig!!



    if(amplitude <= 20 && amplitude >= 0)
    {
        if(frequenz >= 0)
        {

        for(zeile = 1; zeile <=37; zeile++) //Zeile hoch zählen
        {
            sinwert = amplitude * sin(wert * zeile);
            sinwert = round(sinwert);
            //jeweilge Amplitude berechnen und runden

            leerzeilen = amplitude + sinwert;
            for(i = 0; i <= leerzeilen; i++)
            {
            printf(" "); //Ausgabe Leerzeilen
            }
            printf("*"); // Immer nur ein Stern und dann Absatz
            printf("\n");

        }

        }
        else
        {
        printf("Frequenz außerbalb des zulässigen Bereichs\n");
        }
    }
    else
    {
        printf("Amplitude außerhalb des zulässigen Bereichs\n");
    }



}



int main(void)
{
    aufgabe3();
    return 0;
}

