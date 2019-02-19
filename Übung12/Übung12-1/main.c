#include <stdio.h>
#include <stdlib.h>


void aufgabe1(void)
{
    float randomNum = 0.0;
    int counter = 0;
    int startpunkt;

    printf("Startpunkt: ");
    scanf("%i", &startpunkt);

    srand(startpunkt);



    while ((randomNum < 0.5) || (randomNum > 0.6))
    {
    counter++;
    randomNum = (float) rand()/RAND_MAX;
    }

    printf ("Zufallszahl: %1.4f, Anzahl Ziehungen: %i\n", randomNum, counter);

}


void aufgabe2(void) //Mit Redundanz!!
{
    int anfangsstand, endstand, gallonen;
    float meilenprogallone = 0;

    printf("Anfangsstand Meilen: ");
    scanf("%i", &anfangsstand);



    while(anfangsstand >= 0)
    {
        printf("Endstand Meilen :");
        scanf("%i", &endstand);


        while(endstand <= anfangsstand)
            {
                printf("Endstand Meilen :");
                scanf("%i", &endstand);
            }

        printf("Gallonen: ");
        scanf("%i", &gallonen);


        while(gallonen <= 0)
            {
                printf("Gallonen: ");
                scanf("%i", &gallonen);
            }
        meilenprogallone = (endstand - anfangsstand) / (float) gallonen;
        printf("Meilen pro Gallone: %.2f\n\n", meilenprogallone);

        printf("Anfangsstand Meilen: ");
        scanf("%i", &anfangsstand);

    }
    printf("Ade\n");


}











int main(void)
{
    aufgabe1();
    aufgabe2();
    return 0;
}

