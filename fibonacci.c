/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: fibonacci.c
 *----------------
 *This program prints the Fibonacci Sequence
 *up until the 15th term.
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()
{
    int num1 = 0, num2 = 1, i, add_num;
    printf("This program lists the Fibonacci sequence.\n");
    printf(" F(0) = %4d\n", num1);
    printf(" F(1) = %4d\n", num2);

    for (i = 2; i < 16; i++)
    {
        add_num = num1 + num2;
        num1 = num2;
        num2 = add_num;
        if (i < 10)
        {
            printf(" F(%d) = %4d\n", i, add_num);
        }
        else
        {
            printf("F(%d) = %4d\n", i, add_num);
        }
    }
}

