/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: quadratics.c
 *----------------
 *This program prints the solutions to
 *a quadratic equation.
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>

main()
{
    double a,b,c,x1,x2, sqrt(double val);
    printf("Please enter the coefficients for the quadratic equation:\n");
    printf("a: ");
    a = GetReal();
    printf("b: ");
    b = GetInteger();
    printf("c: ");
    c = GetReal();
    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    if ((b*b - 4*a*c)<0)
    {
        printf("The equation has no real solutions.\n");
    }
    else if (x1 == x2)
    {
        printf("The only solution is %g\n", x1);
    }
    else
    {
        printf("The first solution is %g\n", x1);
        printf("The second solution is %g\n", x2);
    }
    
    
}
