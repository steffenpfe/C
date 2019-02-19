#include <stdio.h>

//SUMME mit Funktion berechnen
int arrsum(int *arr, int length)
{
    int sum = 0;
    int i;

    for(i = 0; i< length; i++)
        sum += arr[i];

    return sum;//Wert für sum zurückgeben
}



int main(void)
{
    int arr[] = {1, 2, 3};

    int length = 3;

    //Summe ist... und arr adresse mit länge übergeben!
    int sum = arrsum(&arr, length);

    printf("Summe: %i\n", sum);

    return 0;
}

