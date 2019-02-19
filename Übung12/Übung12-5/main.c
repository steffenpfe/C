#include <stdio.h>

#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define ss (unsigned char)225



void aufgabe5(void)
{
    int erstereckpx, erstereckpy, zweitereckpx, zweitereckpy;
    int hoehe = 0, breite = 0, flaeche = 0;

    do
    {
        printf("Erster Eckpunkt x-Koordinate: ");
        scanf("%i", &erstereckpx);

        printf("Erster Eckpunkt y-Koordinate: ");
        scanf("%i", &erstereckpy);

        printf("Zweiter Eckpunkt x-Koordinate: ");
        scanf("%i", &zweitereckpx);

        printf("Zweiter Eckpunkt y-Koordinate: ");
        scanf("%i", &zweitereckpy);

        breite = zweitereckpx - erstereckpx;
        if(breite < 0)
            breite *= -1;

        hoehe = zweitereckpy - erstereckpy;
        if(hoehe < 0) //Betrag bilden wenn negativ!!
            hoehe *= -1;

        flaeche = breite * hoehe;

        if(breite > 0 && hoehe > 0) //Nur ausgeben wenn breite und hoehe größer null
        {
            printf("Breite: %i, H%che: %i, Fl%cche: %i\n", breite, oe, hoehe, ae, flaeche);
        }
    }
    while(breite != 0 && hoehe != 0); //weitermachen wenn breite und hoehe ungleich null
        printf("Ade.\n");             //hört auf wenn eins null ist!




}


void aufgabe6(void)
{
    int x = 0, y = 0;
    int i;

//Abbruch wenn x oder y negativ -->Selektieren von Punkten
    while(x >= 0 && y >= 0)
    {
        printf("x-Koordinate: ");
        scanf("%i", &x);

        if(x >= 0)
        {
            printf("y-Koordinate: ");
            scanf("%i", &y);

            if(y >= 0)
            { //Folgende Punkte sind im Pfeil enthalten!!
                if((x == 0 && y == 2) || (x == 1 && y == 1) || (x == 2 && y == 0) ||
                   (x == 2 && y == 1) || (x == 2 && y == 2) || (x == 2 && y == 3) ||
                   (x == 3 && y == 4) || (x == 3 && y == 1) || (x == 4 && y == 2))
                {
                    printf("Objekt selektiert\n");
                }
                else
                    printf("Objekt deselektiert\n");
            }

        }

    }
    printf("Ade.\n");


}




int main(void)
{
    aufgabe5();
    aufgabe6();
    return 0;
}

