#include <stdlib.h>
#include "solve.h"
#include "switch_case.h"
#include "scan.h"

int main ()
{
    double a = 0, b = 0, c = 0;
    scan(a, b, c);
    double x1 = 0, x2 = 0;
    int noroots = SolverR (a, b, c, &x1, &x2);
    switch_case (noroots, x1, x2);
}

