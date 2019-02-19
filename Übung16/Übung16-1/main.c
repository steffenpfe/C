#include <stdio.h>





void aufgabe1(void)
{
    int data1[] = {3, 2, 5};
    int data2[] = {1, 4, 4, 8, 13};
    int data3[] = {9, 1, 0, 2};
    int data4[] = {0, 2, 6, 3, -1, -8};


    const int COL1 = 3;
    const int COL2 = 5;
    const int COL3 = 4;
    const int COL4 = 6;
    const int ROW = 4;

    int col[] = {COL1, COL2, COL3, COL4};
    int *arr[] = {data1, data2, data3, data4};

    int i = 0, k = 0;

    int sumreihe = 0, sum = 0;
    int maxarr = 0, minarr = 0, max = 0;

    for(i = 0; i < ROW; i++)
    {
        sumreihe = 0; //Alles auf Null, damit bei nächster reihe
        k=0;            //wieder neu berechnet werden kann
        max = arr[i][k];

        for(k = 0; k < col[i]; k++)
        {
            sumreihe += arr[i][k];
            sum += arr[i][k]; //Summe aller Feldelemente

            if(max < arr[i][k]) //MAX, Suche
                max = arr[i][k];

            if(maxarr < arr[i][k])//MAX einer Reihe
                maxarr = arr[i][k];

            if(minarr > arr[i][k])//MIN einer Reihe
                minarr = arr[i][k];
        }


        printf("Zeile %i -> Größtes Feldelement: %i, Summe der Feldelemente: %i \n", i, max, sumreihe);
    }

    printf("Summe der Feldelemente: %i\n", sum);
    printf("Größtes Feldelement: %i\n", maxarr);
    printf("Kleinstes Feldelement: %i\n", minarr);


}


void aufgabe2(void) //FELD UMDREHEN
{
    int data1[] = {3, 2, 5};
    int data2[] = {1, 4, 4, 8, 13};
    int data3[] = {9, 1, 0, 2};
    int data4[] = {0, 2, 6, 3, -1, -8};


    const int COL1 = 3;
    const int COL2 = 5;
    const int COL3 = 4;
    const int COL4 = 6;
    const int ROW = 4;

    int col[] = {COL1, COL2, COL3, COL4};
    int *arr[] = {data1, data2, data3, data4};
    int help[6]; //Hilffeld, hier wird kurz das neue Feld gespeichert

    int i, j;

    for(i = 0; i < ROW; i++) //Reihen durchgehen
    {
        for(j = 0; j < col[i]; j++) //Elemente eines Feldes durchgehen
        {//Zwei Elemente vertauschen.
            help[j] = arr[i][col[i] - j -1];

            printf("%i ", help[j]);
        }

        printf("\n");
    }



}






int main(void)
{
    aufgabe1();
    aufgabe2();
    return 0;
}



