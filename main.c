#include <stdlib.h>
#include "solve.h"
#include "switch_case.h"
#include "scan.h"
#include "unit_test.h"
#include "unit_test_scan.h"
//------------------------------------------
//!  Решатель квадратных уравнений ax2+bx+c
//!  @param [in] a              a-коэффициент
//!  @param [in] b              b-коэффициент
//!  @param [in] c              c-коэффициент
//!  @param [out] x1         Значение первого корня
//!  @param [out] x2         Значение второго корня
//!
//!  @return Число корней
//!
//!  @note
//------------------------------------------

int main ()
{
    test_solve_square();
    test_scan();
    double a = 0, b = 0, c = 0;
    scan(&a, &b, &c);
    double x1 = 0, x2 = 0;
    int noroots = solver_r(a, b, c, &x1, &x2);
    print_answer(noroots, x1, x2);
}


