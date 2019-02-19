#include <stdio.h>




void aufgabe3(void) //Spaltensumme mit Hilfsfeld
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
    int help[] = {0, 0, 0, 0, 0, 0};


    int i, j;


    for(i = 0; i < ROW; i++)//Reihen Durchgehen
    {
        for(j = 0; j < col[i]; j++)
        {//Elemente aus reihe nacheinander in verschiedene Plätze im Feld
            help[j] += arr[i][j];
        }

    }

    for(i = 0; i < 6; i++) //Ausgabe Hilfsfeld
    {
        printf("Summe Spalte %i: %i\n", i+1, help[i]);
    }

}



void aufgabe3b(void) //Spaltensumme ohne Hilfsfeld
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
    int sum = 0;


    int i, j;

//i ist die Reihe und j die Spalte der Felder

    for(j = 0; j < 6; j++)//Aufzählen der Spalten
    {
        sum = 0;
        for(i = 0; i < ROW; i++) //Aufzählen der Reihen
        {
            if(j < col[i])//Wenn Spalte größer ist als es Elemente im Feld gibt
            sum += arr[i][j];   //dann Element nicht beachten!
        }
            printf("Summe Spalte %i: %i\n", j+1, sum);
    }

}




int main(void)
{
    aufgabe3();
    aufgabe3b();
    return 0;
}

