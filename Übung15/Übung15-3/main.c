#include <stdio.h>




void aufgabe3(void) //MAXIMUM
{
    const int length = 4;
    int arr[] = {7, 3, 99, 20};
    int max = arr[0];

    for(int i = 1; i < length; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Maximum: %i\n", max);
}


void aufgabe4(void) //MAXSORT
{
    const int length = 4;
    int arr[] = {7,3,99,20};
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

    for(int i = 0; i < length; i++)
    {
        printf("arr[%i] = %i\n", i, arr[i]);
    }
}


void aufgabe4b(void) //MINSORT
{
    const int length = 4;
    int arr[] = {7,3,99,20};
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

    for(int i = 0; i < length; i++)
    {
        printf("arr[%i] = %i\n", i, arr[i]);
    }

}


int main(void)
{
    aufgabe3();
    aufgabe4();
    aufgabe4b();
    return 0;
}

