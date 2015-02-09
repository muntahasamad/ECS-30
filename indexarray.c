//
//  main.c
//  indexarray.c
//
//  Created by Muntaha Samad on 5/27/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"
#include "glibrary.h"


int *IndexArray(n)
{
    int i, *arr;
    arr = malloc(n*4);
    for (i=0; i<n; i++)
    {
        arr[i] = i;
        
    }
    return arr;
}

int main()
{
    int *ip,n,i;
    printf("This program creates an index array of arbitrary size.\n");
    printf("Please enter the size of the array: ");
    n = GetInteger();
    while (n < 0)
    {
        printf("Please enter the size of the array: ");
        n = GetInteger();
    }
    ip = IndexArray(n);
    
    if (n==0)
    {
        printf("There is no array.\n");
    }
    else
    {
        printf("The resulting array is:\n");
        for(i = 0; i < n-1; i++)
        {
            printf("%d, ", ip[i]);
        }
        printf("%d\n", ip[n-1]);
    }
 
    
    
}
