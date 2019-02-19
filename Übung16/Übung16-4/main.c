#include <stdio.h>
#include <math.h>



void aufgabe4(void)
{
    #define IROW 12
    #define ICOL 12
    int image [IROW][ICOL] = {{5,0,0,0,0,5,5,0,0,0,0,5},
                          {0,5,0,0,0,5,5,0,0,0,5,0},
                          {0,0,5,5,5,5,5,5,5,5,0,0},
                          {0,0,5,5,5,5,5,5,5,5,0,0},
                          {0,0,5,5,5,9,9,5,5,5,0,0},
                          {5,5,5,5,9,9,9,9,5,5,5,5},
                          {5,5,5,5,9,9,9,9,5,5,5,5},
                          {0,0,5,5,5,9,9,5,5,5,0,0},
                          {0,0,5,5,5,5,5,5,5,5,0,0},
                          {0,0,5,5,5,5,5,5,5,5,0,0},
                          {0,5,0,0,0,5,5,0,0,0,5,0},
                          {5,0,0,0,0,5,5,0,0,0,0,5}};

    int r,c;
    float mittelwert = 0, sum = 0;



    printf("Originalbild:\n");
    for(r = 0; r < IROW; r++)
    {
        for(c = 0; c < ICOL; c++)
        {
            printf("[%i] ", image[r][c]);
        }

        printf("\n");
    }




    printf("\nGeglaettetes Bild:\n\n");

    for(r = 0; r < IROW; r++)
    {
        for(c = 0; c < ICOL; c++)
        {


            if(c!=0 && c!=11 && r!=0 && r!=11)
            {
                sum =  image[r-1][c-1] + image[r-1][c  ] + image[r-1][c+1] +
                        image[r  ][c-1] + image[r  ][c  ] + image[r  ][c+1] +
                        image[r+1][c-1] + image[r+1][c  ] + image[r+1][c+1];
                mittelwert = sum / 9;
            }

            if(r == 0)
            {
                sum =  image[r  ][c-1] + image[r  ][c  ] + image[r  ][c+1] +
                       image[r+1][c-1] + image[r+1][c  ] + image[r+1][c+1];
                mittelwert = sum / 6;
            }

            if(c == 0)
            {
                sum = image[r-1][c  ] + image[r-1][c+1] +
                      image[r  ][c  ] + image[r  ][c+1] +
                      image[r+1][c  ] + image[r+1][c+1];
                mittelwert = sum / 6;
            }

            if(r == 11)
            {
                sum =  image[r-1][c-1] + image[r-1][c  ] + image[r-1][c+1] +
                       image[r  ][c-1] + image[r  ][c  ] + image[r  ][c+1];
                mittelwert = sum / 6;
            }

            if(c == 11)
            {
                sum =  image[r-1][c-1] + image[r-1][c  ] +
                       image[r  ][c-1] + image[r  ][c  ] +
                       image[r+1][c-1] + image[r+1][c  ];
                mittelwert = sum / 6;
            }

            if(r == 0 && c == 0)
            {
                sum =  image[r  ][c  ] + image[r  ][c+1] +
                       image[r+1][c  ] + image[r+1][c+1];
                mittelwert = sum / 4;

            }

            if(r == 0 && c == 11)
            {
                sum =  image[r  ][c-1] + image[r  ][c  ] +
                       image[r+1][c-1] + image[r+1][c  ];
                mittelwert = sum / 4;

            }
            if(r == 11 && c == 0)
            {
                sum =  image[r-1][c  ] + image[r-1][c+1] +
                       image[r  ][c  ] + image[r  ][c+1];
                mittelwert = sum / 4;
            }
            if(r == 11 && c == 11)
            {
                sum =  image[r-1][c-1] + image[r-1][c  ] +
                       image[r  ][c-1] + image[r  ][c  ];
                mittelwert = sum / 4;

            }



            mittelwert = round(mittelwert);




            printf("[%.0f] ", mittelwert);
        }

        printf("\n");
    }

}




int main(void)
{
    aufgabe4();
    return 0;
}

