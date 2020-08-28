//#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
#include "solve.h"
//#define STOP '-1'



int main ()
{
    double a=0 , b=0 , c=0 ;
    printf ("введите коэффициенты квадратного уравнения.\n");
    printf (" a b c : ");
    scanf ("%lg %lg %lg", &a ,&b ,&c );
    double x1=0, x2=0;
    int noroots = SolverR(a,b,c,&x1,&x2);
    switch(noroots)
        {
            case 0:   printf ("нет корней.\n");
                        break;
            case 1:   printf ("x1 = x2 = %lg\n", x1);
                        break;
            case 2:   printf ("x1 = %lg , x2 = %lg\n", x1,x2);
                        break;
            case STOP:    printf ("Попробуйте ввести другие коэффициенты.\n");
                            break;
            default: printf ("что то пошло не так. Нашлось %d корней.\n", noroots);
                break;
        }
}
