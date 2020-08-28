
//  solve.c
//  Solver
//
//  Created by Danila Puchkov on 27.08.2020.
//  Copyright © 2020 Danila Puchkov. All rights reserved.
//
#include "solve.h"

int SolverR(double a , double b , double c , double *x1 , double *x2)
{
    if (a==0)
        {
            if (b==0)
                {
                    return ((c==0)? STOP:0);
                }
            else
                {
                    *x1= -(c/b);
                    return 1;
                }
        }
     else if (b==0)
        {
            if (c==0)
                {
                    *x1=0;
                    return 1;
                }
            else
                {
                    *x1=((-c/a)>=0)? fabs(sqrt(-c/a)) : STOP;
                    if (*x1== STOP)
                        {
                            return 0;
                        }
                    else
                        {
                            *x2=-*x1;
                            return 2;
                        }
                }
        }
     else
        {
            if (c==0)
                {
                    *x1=0;
                    *x2=-b/a;
                    return 2;
                }
            else
                {
                    double discr;
                    discr=b*b-4*a*c;
                    if (discr>0)
                        {
                            *x1=(-b+sqrt(discr)) / (2*a);
                            *x2=(-b-sqrt(discr)) / (2*a);
                            return 2;
                        }
                    else if (discr==0)
                        {
                            *x1=*x2;
                            return 1;
                        }
                    else
                        return 0;
                }
        }
}
