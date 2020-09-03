#ifndef test_coef_h
#define test_coef_h
#include <stdio.h>
#include <assert.h>

int solver_r(double a, double b, double c, double *x1, double *x2);

void test_coef()
{
    int i;
    int INF = -1;
    double coef_1[6] = {0, 0, 1e-15, 1, 1, 1e-15};
    double coef_2[6] = {-1, 0, 1, 1e-15, 1, 1e-15};
    double coef_3[6] = {0, -1, 1, 1, 1e-15, 1};
    int num_roots[6] = {1, 0, 2, 0, 0, 0};
    int roots[6];
    double x1 = 0, x2 = 0;
    for(i = 0; i < 4; i++)
    {
        roots[i] = solver_r(coef_1[i], coef_2[i], coef_3[i], &x1, &x2);        
    }
    assert(roots[0] == num_roots[0]);
    assert(roots[1] == num_roots[1]);
    assert(roots[2] == num_roots[2]);
    assert(roots[3] == num_roots[3]);
    assert(roots[4] == num_roots[4]);
    assert(roots[5] == num_roots[5]);
    printf("test_coef пройден.\n");
}
#endif /* test_coef_h */
