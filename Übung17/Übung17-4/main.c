#include <stdio.h>

//Feldelemente verdoppeln
//void twice(int arr[], int length)
void twice(int *arr, int length)
{
    int i;

    for(i = 0; i < length; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main(void)
{
    int arr[] = {1, 2, 3};
    int i, length = 3;

    twice(&arr, length);

    for(i = 0; i < length; i++)
        printf("[%i] ", arr[i]);

    return 0;
}

