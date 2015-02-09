/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: factorization.c
 *----------------
 *This program find the prime factors
 *of a number
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>

void factors(int j)
{
    int i;
    while (j%2 == 0)
    {
        printf("%d * ", 2);
        j = j/2;
    }
    
    for (i = 3; i <= (j); i += 2)
    {
        while (j%i == 0)
        {
            printf("%d", i);
            j /= i;
            if (j!=1)
            {
                printf((" * "));
            }
            else
            {
                printf("\n");
            }
            
        }
        
    }
    
}

main()
{
    int num;
    printf("Enter number to be factored: ");
    num = GetInteger();
    if (num == 0 || num < 0)
    {
        printf("Please input a positive number.\n");
    }
    else
    factors(num);
    
}


