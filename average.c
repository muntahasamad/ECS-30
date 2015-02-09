/* 
 *Muntaha Samad
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/6/14
 *
 *File: average.c
 *----------------
 *This program reads in a list of integers until 
 *the user enters the value -1 as a sentinel.
 *The program then displays the average of the 
 *values entered thus far.
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()
{
    double i, value, total; //declaring variables
    
    printf("This program averages a list of integers.\n");
    printf("Enter -1 to signal the end of the list\n");
    
    total = 0; //initiating variable
    i = 0;     //initiating variable
    while (1)
    {
        printf("? "); //asking for number input
        value = GetInteger();
        if (value == -1) break; //break loop after sentinel is entered
        total += value;
        i++;  //i keeps count of how many times the loop is executed
        
    }
    
    printf("The average is %g\n", (total/i));
    
    
}
