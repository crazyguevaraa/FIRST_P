#include <stdlib.h>
#include "solve.h"
#include "switch_case.h"
#include "scan.h"
#include "unit_test.h"
#include "unit_test_scan.h"
#include "test_coef.h"
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
//!  @note Если число корней бесконечно , то возвращает STOP
//------------------------------------------
int main ()
{
    test_scan();
    test_coef();
    test_solve_square();
    double a = 0, b = 0, c = 0;
    scan(&a, &b, &c);
    double x1 = 0, x2 = 0;
    int noroots = solver_r(a, b, c, &x1, &x2);
    print_answer(noroots, x1, x2);
    
}


