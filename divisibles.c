/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: divisible.c
 *----------------
 *This program prints the integers from 1- 100
 *that are divisible by 6 or 7.
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()

{
    int i = 1;
    while (i<=100) {
        if (i%6==0 || i%7==0)
        {
            printf("%4d\n", i);
            i++;
        }
        else
        {
            i++;
        }
    }
    
}
