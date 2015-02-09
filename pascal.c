/*
 *Muntaha Samad 999139778
 *ECS 30 - Instructor: Dr. Bernd Hamann
 *Section A05
 *4/30/14
 *
 *File: pascal.c
 *----------------
 *This program prints pascals triangle
 *
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


long factorial(int j)
{
    int i;
    long product = 1;
    
    for( i = 1 ; i <= j ; i++ )
        product *=i;
    
    return ( product );
}

long factorial(int);

main()
{
    int i,j;
    for ( i = 0 ; i < 8 ; i++ )
    {
        for ( j = 0 ; j <= ( 16-2*i ) ; j++ )
        printf(" ");
            
        for( j = 0 ; j <= i ; j++ )
            if (i>4)
            {
                if (j<i-2 && j>0)
                {
                    printf("%ld  ",factorial(i)/(factorial(j)*factorial(i-j)));
                }
                else if (j==i)
                {
                    printf("%ld",factorial(i)/(factorial(j)*factorial(i-j)));
                }
                else
                {
                    printf("%ld   ",factorial(i)/(factorial(j)*factorial(i-j)));
                }
            }
            else if (j==i)
            {
                printf("%ld",factorial(i)/(factorial(j)*factorial(i-j)));
            }
            else
            {
                printf("%ld   ",factorial(i)/(factorial(j)*factorial(i-j)));
            }
        
        printf("\n");
    }
        
    
}
