#ifndef unit_test_h
#define unit_test_h

#include <stdio.h>
#include <assert.h>

int solver_r(double a, double b, double c, double *x1, double *x2);

void test_solve_square()
{
    
    double x1 = 0, x2 = 0;
    assert(solver_r(0, 0, 0, &x1, &x2) == -1);
    assert(x1 == 0);
    assert(x2 == 0);
    printf("test_solve_square пройден.\n");
}

#endif /* unit_test_h */
