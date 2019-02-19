#include <stdio.h>
#include <math.h>


void resort(int arr[], int resarr[], int length)
{
    int mw, i, j;
    int countermehr = 1, counterweniger= 0;

    //Wert mw des mittleren Feldelements bestimmen
    if(length%2 == 1) //length ungerade
        mw = floor(length/2.0);
    if(length%2 == 0)//length gerade
        mw = (length/2.0);


    //for-schleife1: Werte kleiner als mw links in resarr schreiben, größere rechts
    for(i = 0; i < length; i++)
    {
        resarr[mw] = arr[mw];

        if(arr[i] < arr[mw]){
            resarr[counterweniger] = arr[i];
            counterweniger++;
        }

        if(arr[i] > arr[mw]){
            resarr[length - countermehr] = arr[i];
            countermehr++;
        }

    }

    //for-schleife2: Vorkommen von mw einordnen
    for(j = 0; j < length; j++)
    {

        if(arr[j] == arr[mw] && j != mw)
        {//Immer unter mw einordnen
            resarr[mw -1] = arr[j];
        }
    }

}



int main(void)
{

    int arr[] = {27, 8, 10, 99, -35};

    int i;
    const int length = 5;
    int resarr[length];


    resort(&arr, &resarr, length);


    for(i = 0; i < length; i++)
        printf("[%i] ", resarr[i]);

    return 0;
}
