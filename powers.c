/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: powers.c
 *----------------
 *This program the different powers of 10.
 *
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>

double RaiseRealToPower(double x, int k)
{
    double power;
    double pow(double base, double exp);
    if (x == 0)
    {
        power = 0;
    }
    else if (k > 0)
    {
        power = pow(x,k);
    }
    else if (k==0)
    {
        power = 1;
        
    }
    else
    {
        power = 1.0/(pow(x, k*-1));
    }
    return power;
}

 main()

{
    int k,format;
    printf("           k\n");
    printf(" k       10\n");
    printf("--------------\n");
    for (k = -4; k <= 4; k++)
    {
        if (k < 0)
        {
            format = (k*(-1));
            printf("%d      ", k);
            printf("%.*g\n", format, RaiseRealToPower(10.0, k));
        }
        else
        {
            printf(" %d  %7.1f\n", k, RaiseRealToPower(10.0, k));
            
        }
    }
}
    
    
