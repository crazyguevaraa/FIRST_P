#include <stdio.h>

void scan(double *a, double *b, double *c)
{
    printf("введите коэффициенты квадратного уравнения.\n");
    printf("a b c : ");
    scanf("%lg %lg %lg", a, b, c);
}
