/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: piseries.c
 *----------------
 *This program prints pi to 10 decimal places.
 *
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()
{
    double num, pi;
    int i,j;
    num = 0;
    j = 2;
    for (i=1; i<=20000; i+=2)
    {
        if (j%2 == 0)
        {
            num += (1.0/i);
            j++;
        }
        else
        {
            num -= (1.0/i);
            j++;
        }
    
    }
    pi = 4 * num;
    printf("The approximated value of pi is %12.10lf\n", pi);
}
