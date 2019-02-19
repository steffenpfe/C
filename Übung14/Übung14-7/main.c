#include <stdio.h>


void aufgabe7(void)
{
    int signal[] = {1, 5, 4, 5, 7, 6, 8, 6, 5, 4, 5, 4};
    int smooth[11];
    int i;

    const int length = 12;

    printf("Original Signal:\t");
    for(i = 0; i < length; i++)
    {
        printf("[%i] ", signal[i]);
    }
    printf("\n");


    for(i = 0; i < length; i++)
    {
        smooth[i] = (signal[i-1] + signal[i] + signal[i+1]) / 3;

        if(i == 0)
        {
            smooth[i] = (signal[i] + signal[i+1]) / 2;
        }

        if(i == (length - 1))
        {
            smooth[i] = (signal[i-1] + signal[i]) / 2;
        }
    }


    printf("Smoothed Signal:\t");
    for(i = 0; i < length; i++)
    {
        printf("[%i] ", smooth[i]);
    }




}


void aufgabe8(void)
{
    double samples[] = {5.6, 6.2, 6.0, 5.5, 5.7,
                        6.1, 7.4, 5.5, 5.5, 6.3,
                        6.4, 4.0, 6.9};
    double durchschnitt = 0, summe = 0, max, min;
    double neuerdurchschnitt = 0;
    int i;

    const int length = 13;

    printf("\n");
    for(i = 0; i < length; i++)
    {
       summe += samples[i];
    }

    durchschnitt = summe / length;


    for(i = 0; i < length; i++)
    {
       if(samples[i] > durchschnitt)
       {
           max = samples[i];
       }

       if(samples[i] < durchschnitt)
       {
           min = samples[i];
       }
    }

    neuerdurchschnitt = (summe - min - max) / (length -2);

    printf("Durchschnitt:\t%f\n", durchschnitt);
    printf("Entferntester Wert:\t%f\n", min);
    printf("Neuer Durchschnitt:\t%f\n", neuerdurchschnitt);



}


int main(void)
{
    aufgabe7();
    aufgabe8();
    return 0;
}

