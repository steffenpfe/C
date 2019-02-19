#include <stdio.h>

#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define sz (unsigned char)225


void aufgabe5(void)
{
    int dvr, dvl, dhr, dhl; //Durck an Reifen z.B. Druckvornelinks

    printf("Reifendruck rechts vorne: "); //Drücke einlesen
    scanf("%i", &dvr);

    printf("Reifendruck links vorne: ");
    scanf("%i", &dvl);

    printf("Reifendruck rechts hinten: ");
    scanf("%i", &dhr);

    printf("Reifendruck links hinten: ");
    scanf("%i", &dhl);

    if(dvr==dvl && dhr==dhl)
    {
        printf("Der Reifendruck ist in Ordnung.\n");
    }
    else
    {
        printf("Der Reifendruck ist NICHT in Ordnung\n");
    }
}

void aufgabe6(void) //Aufgabe 5 wird ergänzt!
//Druck muss zw. 35 und 45 sein.. mit boolscher Variable
{
    int dvl, dvr, dhl, dhr;
    int goodPressure = 1;

    printf("Reifendruck rechts vorne: "); //Drücke einlesen
    scanf("%i", &dvr); //einlesen und wenn nicht im Bereich, Fehlermeldung
    if(dvr<35 || dvr>45)
    {
        goodPressure = 0;
        printf("Warnung: Der Reifendruck ist au%cerhalb des erlaubten Bereichs\n", sz);
    }


    printf("Reifendruck links vorne: ");
    scanf("%i", &dvl);
    if(dvl<35 || dvl>45)
    {
        goodPressure = 0;
        printf("Warnung: Der Reifendruck ist au%cerhalb des erlaubten Bereichs\n", sz);
    }


    printf("Reifendruck rechts hinten: ");
    scanf("%i", &dhr);
    if(dhr<35 || dhr>45)
    {
        goodPressure = 0;
        printf("Warnung: Der Reifendruck ist au%cerhalb des erlaubten Bereichs\n", sz);
    }


    printf("Reifendruck links hinten: ");
    scanf("%i", &dhl);
    if(dhl<35 || dhl>45)
    {
        goodPressure = 0;
        printf("Warnung: Der Reifendruck ist au%cerhalb des erlaubten Bereichs\n",sz);
    }


    //Schauen ob beide Seiten gleich sind
    if(dvr!=dvl || dhr!=dhl) //wenn nicht dann Variable für Fehler auf 0
    {
        goodPressure = 0;
    }


    //Ausgabe der letztendlichen Fehlermeldung
    if(goodPressure == 1)
    {
        printf("Der Reifendruck ist in Ordnung\n");
    }
    else
    {
        printf("Der Reifendruck ist NICHT in Ordnung\n");
    }
}

void aufgabe7(void) //Aufgabe 5 wird verändert!
//Verändern Sie Ihr Programm aus Aufgabe 5, so dass sich die Drücke
//der beiden Vorder- und Hinterräder in einem
//Toleranzbereich von 3 psi bewegen dürfen.
{
    int dvr, dvl, dhr, dhl; //Durck an Reifen z.B. Druckvornelinks

    printf("Reifendruck rechts vorne: "); //Drücke einlesen
    scanf("%i", &dvr);

    printf("Reifendruck links vorne: ");
    scanf("%i", &dvl);

    printf("Reifendruck rechts hinten: ");
    scanf("%i", &dhr);

    printf("Reifendruck links hinten: ");
    scanf("%i", &dhl);

    if((fabs(dvr-dvl)>3) || (fabs(dhr-dhl)>3)) //fabs->Betrag
    { //Toleranz: Schauen ob betrag der differenz größer als 3 ist!
        printf("Der Reifendruck ist NICHT in Ordnung\n");
    }
    else
    {
        printf("Der Reifendruck ist in Ordnung.\n");
    }
}




int main(void)
{
    aufgabe5();
    aufgabe6();
    aufgabe7();
    return 0;
}

