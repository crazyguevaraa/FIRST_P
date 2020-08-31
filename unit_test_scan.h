#ifndef unit_test_scan_h
#define unit_test_scan_h

#include <stdio.h>
#include <assert.h>

int scan(double *a, double *b, double *c);

void test_scan()
{
    double a = 0, b = 0, c = 0;
    assert(scan(&a, &b, &c) == 3);
    printf("test_scan пройден.\n");
}





#endif /* unit_test_scan_h */
