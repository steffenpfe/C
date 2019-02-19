#include <stdio.h>



void aufgabe1(void)
{ //Summe der Feldelemente
    int val[] = {0, 1, 2, 3};
    int sum = 0, i;
    const int length = 4;

    for(i = 0; i < length; i++)
    {
        sum += val[i];

    }

    printf("Summe aller Zahlen = %i\n", sum);
}


void aufgabe2(void)
{ // Feldelemente verdoppeln
    int val[] = {13, -4, 82, 17};
    int twice[3];
    int i,k;

    const int length = 4;

    printf("Urspruengliches Feld:\n");
    for(i = 0; i < length; i++)
    {
        k = val[i];
        printf("[%i]", k);
    }
    printf("\n");


    for(i = 0; i < length; i++)
    {
        twice[i] = 2 * val[i];

    }


    printf("Neues Feld:\n");
    for(i = 0; i < length; i++)
    {
        k = twice[i];
        printf("[%i]", k);
    }
    printf("\n");


}


void aufgabe3(void)
{   //Summe zweier Felder;
    int valA[] = {13, -22,  82,  17};
    int valB[] = {-12,  24, -79, -13};
    int valC[3];
    int i, sum = 0;

    const int length = 4;

    for(i = 0; i < length; i++)
    {
        valC[i] = valA[i] + valB[i];

        printf("[%i]", valC[i]);
    }
    printf("\n");
}


void aufgabe4(void)
{
    int valA[] = {13, -22,  82,  17};
    int valB[3];
    int sum[] = {25, 25, 25, 25};
    int i;

    const int length = 4;

    for(i = 0; i < length; i++)
    {   //A ausgeben
        printf("[%i]", valA[i]);
    }
    printf("\n");

    for(i = 0; i < length; i++)
    { // B berechnen
        valB[i] = sum[i] - valA[i];
    }

    for(i = 0; i < length; i++)
    { //B ausgeben
        printf("[%i]", valB[i]);
    }
    printf("\n");

    for(i = 0; i < length; i++)
    { //sum ausgeben
        printf("[%i]", sum[i]);
    }
    printf("\n");
}


void aufgabe5(void)
{
    int data[] = {3, 2, 5, 7, 9, 12, 97, 24, 54};
    int sum=0, sumgerade=0, sumungerade=0;
    int i;

    const int length = 9;

    for(i = 0; i < length; i++)
    {
        sum += data[i];

        if((data[i] % 2) == 0)
        {//gerade
            sumgerade += data[i];
        }
        else
        {//ungerade
            sumungerade += data[i];
        }
    }

    printf("Summe aller:\t%i\n", sum);
    printf("Summe gerade:\t%i\n",sumgerade);
    printf("Summe ungerader:\t%i\n", sumungerade);





}


void aufgabe6(void)
{
    int data[] = {3, 1, 5, 7, 4, 12, -3, 8, -2};
    int i, max1 = 0, max2 = 0; //groeßter und 2. groeßter wert

    const int length = 9;

    for(i = 0; i < length; i++)
    {

        if(data[i] < max1 && data[i] > max2)
        {
            max2 = data[i];
        }

        if(data[i] > max1)
        {
            max2 = max1;
            max1 = data[i];
        }




    }
    printf("Groeßtes Element:\t%i\n", max1);
    printf("Zweitgroeßtes Element:\t%i\n", max2);





}

int main(void)
{
    aufgabe1();
    aufgabe2();
    aufgabe3();
    aufgabe4();
    aufgabe5();
    aufgabe6();
    return 0;
}

