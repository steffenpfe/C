#include <stdio.h>

void selectionsort(int arr[], int length, int ascending)
{
    int i;

    if(ascending == 1)//MINSORT = aufsteigend
    {
        int min, minptr, swap;

        for(int ptr = 0; ptr < length; ptr++)
        {
            min = arr[ptr];
            minptr = ptr;

            for(int ptr2 = ptr +1; ptr2 < length; ptr2++)
            {
                if(arr[ptr2] < min)
                {
                    min = arr[ptr2];
                    minptr = ptr2;
                }
            }

            swap = arr[ptr];
            arr[ptr] = arr[minptr];
            arr[minptr] = swap;
        }
    }

    if(ascending == 0)//MAXSORT = absteigend
    {
        int max, maxptr, swap;

        for(int ptr = 0; ptr < length; ptr++)
        {
            max = arr[ptr];
            maxptr = ptr;

            for(int ptr2 = ptr +1; ptr2 < length; ptr2++)
            {
                if(arr[ptr2] > max)
                {
                    max = arr[ptr2];
                    maxptr = ptr2;
                }
            }

            swap = arr[ptr];
            arr[ptr] = arr[maxptr];
            arr[maxptr] = swap;
        }

    }


}


int main(void)
{

    int arr[] = {7, 3, 99, 20};
    int i, length = 4;
    int ascending;

    printf("Aufsteingend sortieren = 1 // Absteigend Sortieren = 0 : ");
    scanf("%i", &ascending);


    selectionsort(&arr, length, ascending);



    for(i = 0; i < length; i++)
        printf("[%i] ", arr[i]);

    return 0;
}
