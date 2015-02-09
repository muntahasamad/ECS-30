/*
 *Muntaha Samad
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/6/14
 *
 *File: squares.c
 *----------------
 *This program prints out the squares of numbers from 1-10
 */


#include <stdio.h>

main()
{
    int i, square;   //declaring variables
    
    for (i=1; i <= 10; i++)    //loop that squares all the numbers 1-10
    {
        square = i * i;
        printf("%d squared is %d\n", i, square);
        
    }
    
    
}

