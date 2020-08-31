#include <stdio.h>

int scan(double *a, double *b, double *c)
{
    printf("введите коэффициенты квадратного уравнения.\n");
    printf("a b c : ");
    return scanf("%lg %lg %lg", a, b, c);
}
