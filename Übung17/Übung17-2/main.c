#include <stdio.h>

void sort3Numbers(int *num1, int *num2, int *num3)
{
    int tmp;

    if(*num2 < *num1)
    {
        tmp = *num1;
        *num1 = *num2;
        *num2 = tmp;
    }

    if(*num3 < *num1)
    {
        tmp = *num1;
        *num1 = *num3;
        *num3 = tmp;
    }

    if(*num3 < *num2)
    {
        tmp = *num2;
        *num2 = *num3;
        *num3 = tmp;
    }
}



int main(void)
{
    int num1, num2, num3;

    printf("Bitte geben Sie 3 ganzahlige Zahlen an:\n");

    printf("1. Zahl: ");
    scanf("%i", &num1);

    printf("2. Zahl: ");
    scanf("%i", &num2);

    printf("3. Zahl: ");
    scanf("%i", &num3);

    sort3Numbers(&num1, &num2, &num3);

    printf("Sortierte Zahlen: %i, %i, %i\n", num1, num2, num3);


    return 0;
}

