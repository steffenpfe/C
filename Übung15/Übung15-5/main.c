#include <stdio.h>


void aufgabe5(void)
{
    char ch1, ch2;
    char arr[50], arr2[50];
    int counter = 0, i;

    const int length = 50;

    do //Eingabe der Zeichen
    {
        printf("Schriftzeichen eingeben (0: stop) : ");
       scanf("%c%c", &ch1, &ch2);

        if(ch1 != 0)
        {
            arr[counter] = ch1;
        }

        counter++;
    }
    while(counter < length && ch1 != '0'); //Unterbrechen


    printf("Eingegebene Zeichen: "); //Ausgabe eingegebene Zeichen
    for(i = 0; i < counter -1; i++)
    {
        printf("%c", arr[i]);
    }


    printf("\n");
    printf("Sortierte Zeichen: "); //Maximumsuche und Vertauschen
    char max;
    char maxPtr;
    char swap;

    for (int ptr = 0; ptr < counter; ptr++)
    {
        max = arr[ptr];
        maxPtr = ptr;

        for (int ptr2 = ptr+1; ptr2 < counter; ptr2++)
        {
            if (arr[ptr2] > max)
            {
                max = arr[ptr2];
                maxPtr = ptr2;
            }
        }

        swap = arr[ptr];
        arr[ptr] = arr[maxPtr];
        arr[maxPtr] = swap;
    }


    for (int i=0; i<counter-1; i++) //Ausgabe der sortierten Zeichen
        printf("%c ", arr[i]);


    printf("\nAnzahl der Zeichen: \n");
    int anzahl = 1;

    for(i = 0; i < counter-1; i++) //Zählen der Zeichen
    {
        //Wenn Zeichen gleich ist wie das im nächsten Platz vom  Feld,
        //dann die Anzahl um eins erhöhen
        if(arr[i] == arr[i+1]){
            anzahl++;
        }
        else{ //Wenn aber nicht gleich dann abbrechen und Anzahl ausgeben!!
            printf("%c[%x] : %i\n", arr[i], arr[i], anzahl);

            anzahl = 1;
        }
    }
}







int main(void)
{
    aufgabe5();
    return 0;
}

