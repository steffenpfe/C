#include <stdio.h>



void aufgabe1(void)
{
    int data[] = {0, 1, 2, 3, 4};
    int i;

    const int length = 5;

    for(i = 0; i < length; i++)
    {

        data[i] = length - 1 - i;

        printf("[%i] ", data[i]);
    }
    printf("\n");
}



void aufgabe2(void)
{
    int data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int result[14];
    int i;

    const int length = 14;

    for(i = 0; i < length; i++)
    {
        result[i] = data[length - 1 - i];
        printf("[%i] ", result[i]);
    }
}









int main(void)
{
    aufgabe1();
    aufgabe2();
    return 0;
}

