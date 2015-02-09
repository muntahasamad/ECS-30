/*
 *Muntaha Samad
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/6/14
 *
 *File: inchtocm.c
 *----------------
 *This program reads in two length values, in feet and inches
 *and converts them to their metric equivalent in centimeters.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()

{
    double feet, inch, cm, total_inch;    //declaring variables
    
    printf("This program converts from feet and inches to centimeters.\n");
    printf("Number of feet? ");    //ask for length in feet input
    feet = GetReal();
    
    printf("Number of inches? ");   //ask for lengh in inches input
    inch = GetReal();
    
    total_inch = inch + (feet * 12);   //calculate the total length in inches (convert feet to inches)
    cm = total_inch * 2.54;      //convert inches to centimeters
    printf("%g'%g\" = %g cm\n", feet, inch,cm);
    
}

