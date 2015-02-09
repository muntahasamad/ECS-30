//
//  main.c
//  insertionsort.c
//
//  Created by Muntaha Samad on 5/27/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"
#include "glibrary.h"

void SortIntegerArray(int array[], int n)
{
    int pos1, i, k, val,j;
    pos1 = array[0];
    for (i=1; i <= n; i++)
    {
        if (array[i] >= pos1)
        {
            pos1 = array[i];
        }
        else
        {
            k = i;
            val = array[k];
            array[k] = pos1;
            array[k-1] = val;
            while (1)
            {
                if (k-1 == 0)
                {
                    break;
                }
                else if (array[k-1]>=array[k-2])
                {
                    break;
                }
                else
                {
                    val = array[k-2];
                    array[k-2] = array[k-1];
                    array[k-1] = val;
                    k--;
                }
            }
        }
    }
     printf("The sorted array is: ");
    for (j=0; j<n; j++)
    {
       printf("%d, ", array[j]);
    }
    printf("%d\n", array[n]);
    
}

main()
{
    int num, i,k;
    string numstr;
    int numbers[10000];
    printf("Enter a list of integers\n");
     i = 0;
    while (1)
    {
        printf("> ");
        numstr = GetLine();
        if (StringLength(numstr)==0) break;
        else
        {
            num = StringToInteger(numstr);
            numbers[i] = num;
            i++;
            
        }
    }
    if (i == 0)
    {
        printf("There was no input array.\n");
    }
    else
    {
    printf("The input array is: ");
    for (k=0; k< i-1; k++)
    {
        printf("%d, ", numbers[k]);
    }
    printf("%d\n", numbers[i-1]);
    SortIntegerArray(numbers, i-1);
    }
}

