
#include <stdio.h>
#include <math.h>


void aufgabe5(void)
{
    int radiusgestreckt, radius;

    int streckungsfaktor;
    //Der Streckungsfaktor streckt den Kreis horizontal
    //Dadurch wird der Radius um den Faktor vergrößert, allerdings
    //überspringt das Programm auch dementsprechend mehr zeilen.
    //Zeilencounter wird um Faktor inkrementiert
    //Kommt somit auf höhere steigende abstände von mitte!

    int x, y; //Achsen des Kreises

    int k, l, i, h, zeilenohk, zeilenuhk;
    //Hilfsvariablen, zeilenohk = Zeilen der oberen Halbkugel
    int leerzeilenmitte, leerzeilenlinks, leerzeilenrechts;
    //leerzeilenmitte = Abstand der Mitte zum linken Fensterrand
    //leerzeilenlinks = Leerzeilen bis zum ersten Stern
    //leerzeilenrechts = Von erstem Stern bis Zweiten

    leerzeilenmitte = 40;

    printf("Bitte geben Sie den Radius ein: ");
    scanf("%i", &radius);

    printf("Bitte geben Sie den Streckungsfaktor ein: ");
    scanf("%i", &streckungsfaktor);


    radiusgestreckt = radius * streckungsfaktor;


    //Obere Halbkugel
    for(zeilenohk = 0; zeilenohk <= (radiusgestreckt -1); zeilenohk += streckungsfaktor)
    {
        x = sqrt(pow(radiusgestreckt,2) - pow((radiusgestreckt - zeilenohk),2));
        //Ergibt die Zeile die ein Stern von der Mitte horizontal entfernt sein muss

        leerzeilenlinks = leerzeilenmitte - x - 1;
        leerzeilenrechts = x + x + 1;


        for(i = 1; i <= leerzeilenlinks; i++)
        {
            printf(" "); //Leerzeilenlinks setzen und danach Stern
        }
        printf("*");

        for(h = 1; h <= leerzeilenrechts; h++)
        {
            printf(" "); // Jetzt wieder Leerzeichen und den letzten Stern der Zeile
        }
        printf("*");

        printf("\n");
    }


    //Untere Halbkugel
    for(zeilenuhk = radiusgestreckt; zeilenuhk >= 0; zeilenuhk -= streckungsfaktor)
    {
        x = sqrt(pow(radiusgestreckt,2) - pow((radiusgestreckt - zeilenuhk),2));

        leerzeilenlinks = leerzeilenmitte - x -1;
        leerzeilenrechts = x + x + 1;


        for(l = 1; l <= leerzeilenlinks; l++)
        {
            printf(" ");
        }
        printf("*");

        for(k = 1; k <= leerzeilenrechts; k++)
        {
            printf(" ");
        }
        printf("*");

        printf("\n");
    }


}






int main(void)
{
    aufgabe5();
    return 0;
}

