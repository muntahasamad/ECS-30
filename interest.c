/*
 *Muntaha Samad
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/6/14
 *
 *File: Interestcalc.c
 *--------------------
 *This program reads in two numbers, an account
 *balance and an annual interest rate.
 *Then it displays the balance after a year.
 *There are no withdrawals or deposits.
*/

#include "genlib.h"
#include <stdio.h>
#include "simpio.h"

main()
{
    double balance,interest;   //declare variables
    
    printf("Interest calculation program.\n");
    printf("Starting balance? ");    //asking for starting balance input
    balance = GetReal();
    
    printf("Annual interest rate percentage? ");  //asking for the interest rate % input
    interest = GetReal();
    
    balance += (balance *(interest/100.0));   //calculating the final balance
    printf("Balance after one year: %g\n", balance);
    
}
