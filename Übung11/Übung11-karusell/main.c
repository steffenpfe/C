#include <stdio.h>



void aufgabe4(void)
{
    //Am Anfang ist A1A3 oben und A2A4 unten
    //Die Plattformen an den Armen drehen sich um
    //d1 oder d2 pro Umdrehung der Plattform
    int drehung, d1, d2;
    int i, k, l, p; //Hilfsvariabeln
    int modus;
    //Der Modus gibt an: modus=1 A1A3 oben und
    //A2A4 unten! bei modus=0 anders rum


    printf("Karusselldrehungen: ");
    scanf("%i", &drehung);

    printf("D1: ");
    scanf("%i", &d1);

    printf("D2: ");
    scanf("%i", &d2);


    //Am Anfang gleich Null setzen...Bei jedem zweiten
    //Umlauf wird der Modus geändert. Das heißt, dass
    //Bei allen ungerade Rundenzahlen geändert wird!!
    modus = 0;



    for(i = 1; i <= drehung; i++)
    {
        printf("Karusselldrehung: %i\n", i);


    p = i % 2; //Schauen ob die Rundenzahl ungerade ist

    if(p != 0)
    {
        if(modus == 0) //wenn ungerade ist, dann ändern
        modus = 1;
        else
        modus = 0;
    }



        if(modus == 1) //Die Drehungen für A1A3oben +A2A4unten
        {
            for(k = 1; k <= d1; k++)
            {
                printf("A1A3 Drehung %i oben, \n", k);
            }
            for(l = 1; l <= d2; l++)
            {
                printf("A2A4 Drehung %i unten, \n", l);
            }
        }
        else
        {       //Drehungen für A1A3 unten + A2A4 oben
            for(k = 1; k <= d1; k++)
            {
                printf("A1A3 Drehung %i unten,  \n", k);
            }
            for(l = 1; l <= d2; l++)
            {
                printf("A2A4 Drehung %i oben, \n", l);
            }
        }
    }







}








int main(void)
{
    aufgabe4();
    return 0;
}

